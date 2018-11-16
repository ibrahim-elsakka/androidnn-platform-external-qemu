if(ANDROID_TARGET_TAG MATCHES "linux-x86_64")

prebuilt(DARWINN)

set(darwinn_src ${ANDROID_QEMU2_TOP_DIR}/android/android-emu/android/darwinn/darwinn-service.cpp)

android_add_library(darwinn)
target_compile_options(darwinn PUBLIC ${DARWINN_COMPILE_DEFINITIONS})
target_link_libraries(darwinn PUBLIC darwinnmodelconfig darwinnpipe protobuf::libprotobuf)
target_include_directories(darwinn PUBLIC ${DARWINN_INCLUDE_DIRS})

set(darwinn_unittests_src
    # This file seems to be necessary to make the unittest program compile
    ${ANDROID_QEMU2_TOP_DIR}/android/android-emu/android/emulation/AndroidAsyncMessagePipe_unittest.cpp
    # Darwinn pipe unittest files
    ${ANDROID_QEMU2_TOP_DIR}/android/android-emu/android/darwinn/DarwinnPipe_unittest.cpp
    ${ANDROID_QEMU2_TOP_DIR}/android/android-emu/android/darwinn/MockDarwinnDriver.cpp
    ${ANDROID_QEMU2_TOP_DIR}/android/android-emu/android/darwinn/MockDarwinnDriverFactory.cpp
    # Third party file essential for compiling the program
    ${ANDROID_QEMU2_TOP_DIR}/android/android-emu/android/darwinn/external/src/third_party/darwinn/port/default/logging.cc
    ${ANDROID_QEMU2_TOP_DIR}/android/android-emu/android/darwinn/external/src/third_party/darwinn/port/default/status.cc
    ${ANDROID_QEMU2_TOP_DIR}/android/android-emu/android/darwinn/external/src/third_party/darwinn/port/default/statusor.cc
    ${ANDROID_QEMU2_TOP_DIR}/android/android-emu/android/darwinn/external/src/third_party/darwinn/api/buffer.cc)

android_add_test(darwinn_unittests)
target_compile_options(darwinn_unittests PRIVATE -O0 -Wno-invalid-constexpr)
target_compile_definitions(darwinn_unittests PRIVATE -DGTEST_HAS_RTTI=0)
target_link_libraries(darwinn_unittests PRIVATE android-emu gmock_main)

endif()