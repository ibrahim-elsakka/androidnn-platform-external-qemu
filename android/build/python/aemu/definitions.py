#!/usr/bin/env python
#
# Copyright 2018 - The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the',  help='License');
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an',  help='AS IS' BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
import json
import os
import platform
import subprocess
from enum import Enum

from absl import flags, logging


FLAGS = flags.FLAGS

# Beware! This depends on this file NOT being installed!
flags.DEFINE_string(
    "aosp_root",
    os.path.abspath(
        os.path.join(
            os.path.dirname(os.path.realpath(__file__)),
            "..",
            "..",
            "..",
            "..",
            "..",
            "..",
        )
    ),
    "The aosp directory",
)


EXE_POSTFIX = ""
if platform.system() == "Windows":
    EXE_POSTFIX = ".exe"


def get_aosp_root():
    return FLAGS.aosp_root


def get_qemu_root():
    return os.path.abspath(os.path.join(get_aosp_root(), "external", "qemu"))


def get_cmake_dir():
    """Return the cmake directory for the current platform."""
    return os.path.join(
        get_aosp_root(), "prebuilts/cmake/%s-x86/bin/" % platform.system().lower()
    )


def get_cmake():
    """Return the path of cmake executable."""
    if platform.system() == "Windows":
        # Temporary use visual studio cmake until we have upgraded
        # cmake to 3.12 (see b/121393952)
        return "cmake.exe"
    return os.path.join(get_cmake_dir(), "cmake%s" % EXE_POSTFIX)


def get_ctest():
    """Return the path of ctest executable."""
    return os.path.join(get_cmake_dir(), "ctest%s" % EXE_POSTFIX)


def get_visual_studio():
    """Gets the path to visual studio, or None if not found."""
    try:
        prgrfiles = os.getenv("ProgramFiles(x86)", "C:\Program Files (x86)")
        res = subprocess.check_output(
            [
                os.path.join(
                    prgrfiles, "Microsoft Visual Studio", "Installer", "vswhere.exe"
                ),
                "-requires",
                "Microsoft.VisualStudio.Workload.NativeDesktop",
                "-format",
                "json",
                "-utf8",
            ]
        )
        vsresult = json.loads(res)
        if len(vsresult) == 0:
            raise ValueError("No visual studio with the native desktop load available.")

        for install in vsresult:
            logging.info("Considering %s", install["displayName"])
            candidates = list(
                recursive_iglob(
                    install["installationPath"], [lambda f: f.endswith("vcvars64.bat")]
                )
            )
            if len(candidates) > 0:
                logging.info('Accepted, setting env with "%s"', candidates[0])
                return candidates[0]
    except:
        logging.error(
            "Error while trying to detect visual studio install", exc_info=True
        )
    logging.error(
        "Unable to detect a visual studio installation with the native desktop workload."
    )
    return None


def fixup_windows_clang():
    """Fixes the clang-cl symlinks in our repo.

    clang-cl.exe is a frontend to clang.exe that configures clang to work with MSVC on windowws.
    The current release of clang do not contain clang-cl.exe. Setting this as a symlink will
    treat clang.exe as clang-cl.exe, so it will properly configure it self."""

    clang_base_dir = os.path.join(
        get_aosp_root(), "prebuilts", "clang", "host", "windows-x86"
    )
    for clang_ver in os.listdir(clang_base_dir):
        if clang_ver.startswith("clang") and os.path.isdir(
            os.path.join(clang_base_dir, clang_ver)
        ):
            clang_dir = os.path.join(clang_base_dir, clang_ver, "bin")
            clang_cl = os.path.join(clang_dir, "clang-cl.exe")
            if not os.path.exists(clang_cl):
                logging.info("Setting symlink for %s", clang_cl)
                subprocess.call(
                    ["mklink", clang_cl, os.path.join(clang_dir, "clang.exe")],
                    shell=True
                )


# Functions that determine if a file is executable.
is_executable = {
    "Windows": [lambda f: f.endswith(".exe") or f.endswith(".dll")],
    "Linux": [lambda f: os.access(f, os.X_OK), lambda f: f.endswith(".so")],
    "Darwin": [lambda f: os.access(f, os.X_OK), lambda f: f.endswith(".dylib")],
}


def recursive_iglob(rootdir, pattern_fns):
    """Recursively glob the rootdir for any file that matches the pattern functions."""
    for root, _, filenames in os.walk(rootdir):
        for filename in filenames:
            fname = os.path.join(root, filename)
            for pattern_fn in pattern_fns:
                if pattern_fn(fname):
                    yield fname


def read_simple_properties(fname):
    res = {}
    with open(fname, "r") as props:
        for line in props.readlines():
            k, v = line.split("=")
            res[k.strip()] = v.strip()
    return res


class ArgEnum(Enum):
    """A class that can parse argument enums"""

    def __str__(self):
        return self.name

    def to_cmd(self):
        return self.value

    @classmethod
    def values(clzz):
        return [n.name for n in clzz]

    @classmethod
    def from_string(clzz, s):
        try:
            return clzz[s.lower()]
        except KeyError:
            raise ValueError()


class Crash(ArgEnum):
    """All supported crash backends."""

    prod = ["-DOPTION_CRASHUPLOAD=PROD"]
    staging = ["-DOPTION_CRASHUPLOAD=STAGING"]
    none = ["-DOPTION_CRASHUPLOAD=NONE"]


class BuildConfig(ArgEnum):
    """Supported build configurations."""

    debug = ["-DCMAKE_BUILD_TYPE=Debug"]
    release = ["-DCMAKE_BUILD_TYPE=Release"]


class Make(ArgEnum):
    config = "configure only"
    check = "check"


class Generator(ArgEnum):
    """Supported generators."""

    visualstudio = ["-G", "Visual Studio 15 2017 Win64"]
    xcode = ["-G", "Xcode"]
    ninja = ["-G", "Ninja"]
    make = ["-G", "Unix Makefiles"]


class Toolchain(ArgEnum):
    """Supported toolchains."""

    windows = "toolchain-windows_msvc-x86_64.cmake"
    linux = "toolchain-linux-x86_64.cmake"
    darwin = "toolchain-darwin-x86_64.cmake"
    linux_aarch64 = "toolchain-linux-aarch64.cmake"

    def to_cmd(self):
        return [
            "-DCMAKE_TOOLCHAIN_FILE=%s"
            % os.path.join(get_qemu_root(), "android", "build", "cmake", self.value)
        ]
