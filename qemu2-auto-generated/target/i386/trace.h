/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_TARGET_I386_GENERATED_TRACERS_H
#define TRACE_TARGET_I386_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_KVM_X86_FIXUP_MSI_ERROR_EVENT;
extern TraceEvent _TRACE_KVM_X86_ADD_MSI_ROUTE_EVENT;
extern TraceEvent _TRACE_KVM_X86_REMOVE_MSI_ROUTE_EVENT;
extern TraceEvent _TRACE_KVM_X86_UPDATE_MSI_ROUTES_EVENT;
extern TraceEvent _TRACE_KVM_SEV_INIT_EVENT;
extern TraceEvent _TRACE_KVM_MEMCRYPT_REGISTER_REGION_EVENT;
extern TraceEvent _TRACE_KVM_MEMCRYPT_UNREGISTER_REGION_EVENT;
extern TraceEvent _TRACE_KVM_SEV_CHANGE_STATE_EVENT;
extern TraceEvent _TRACE_KVM_SEV_LAUNCH_START_EVENT;
extern TraceEvent _TRACE_KVM_SEV_LAUNCH_UPDATE_DATA_EVENT;
extern TraceEvent _TRACE_KVM_SEV_LAUNCH_MEASUREMENT_EVENT;
extern TraceEvent _TRACE_KVM_SEV_LAUNCH_FINISH_EVENT;
extern uint16_t _TRACE_KVM_X86_FIXUP_MSI_ERROR_DSTATE;
extern uint16_t _TRACE_KVM_X86_ADD_MSI_ROUTE_DSTATE;
extern uint16_t _TRACE_KVM_X86_REMOVE_MSI_ROUTE_DSTATE;
extern uint16_t _TRACE_KVM_X86_UPDATE_MSI_ROUTES_DSTATE;
extern uint16_t _TRACE_KVM_SEV_INIT_DSTATE;
extern uint16_t _TRACE_KVM_MEMCRYPT_REGISTER_REGION_DSTATE;
extern uint16_t _TRACE_KVM_MEMCRYPT_UNREGISTER_REGION_DSTATE;
extern uint16_t _TRACE_KVM_SEV_CHANGE_STATE_DSTATE;
extern uint16_t _TRACE_KVM_SEV_LAUNCH_START_DSTATE;
extern uint16_t _TRACE_KVM_SEV_LAUNCH_UPDATE_DATA_DSTATE;
extern uint16_t _TRACE_KVM_SEV_LAUNCH_MEASUREMENT_DSTATE;
extern uint16_t _TRACE_KVM_SEV_LAUNCH_FINISH_DSTATE;
#define TRACE_KVM_X86_FIXUP_MSI_ERROR_ENABLED 1
#define TRACE_KVM_X86_ADD_MSI_ROUTE_ENABLED 1
#define TRACE_KVM_X86_REMOVE_MSI_ROUTE_ENABLED 1
#define TRACE_KVM_X86_UPDATE_MSI_ROUTES_ENABLED 1
#define TRACE_KVM_SEV_INIT_ENABLED 1
#define TRACE_KVM_MEMCRYPT_REGISTER_REGION_ENABLED 1
#define TRACE_KVM_MEMCRYPT_UNREGISTER_REGION_ENABLED 1
#define TRACE_KVM_SEV_CHANGE_STATE_ENABLED 1
#define TRACE_KVM_SEV_LAUNCH_START_ENABLED 1
#define TRACE_KVM_SEV_LAUNCH_UPDATE_DATA_ENABLED 1
#define TRACE_KVM_SEV_LAUNCH_MEASUREMENT_ENABLED 1
#define TRACE_KVM_SEV_LAUNCH_FINISH_ENABLED 1

#define TRACE_KVM_X86_FIXUP_MSI_ERROR_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_x86_fixup_msi_error(uint32_t gsi)
{
}

static inline void trace_kvm_x86_fixup_msi_error(uint32_t gsi)
{
    if (true) {
        _nocheck__trace_kvm_x86_fixup_msi_error(gsi);
    }
}

#define TRACE_KVM_X86_ADD_MSI_ROUTE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_x86_add_msi_route(int virq)
{
}

static inline void trace_kvm_x86_add_msi_route(int virq)
{
    if (true) {
        _nocheck__trace_kvm_x86_add_msi_route(virq);
    }
}

#define TRACE_KVM_X86_REMOVE_MSI_ROUTE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_x86_remove_msi_route(int virq)
{
}

static inline void trace_kvm_x86_remove_msi_route(int virq)
{
    if (true) {
        _nocheck__trace_kvm_x86_remove_msi_route(virq);
    }
}

#define TRACE_KVM_X86_UPDATE_MSI_ROUTES_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_x86_update_msi_routes(int num)
{
}

static inline void trace_kvm_x86_update_msi_routes(int num)
{
    if (true) {
        _nocheck__trace_kvm_x86_update_msi_routes(num);
    }
}

#define TRACE_KVM_SEV_INIT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_sev_init(void)
{
}

static inline void trace_kvm_sev_init(void)
{
    if (true) {
        _nocheck__trace_kvm_sev_init();
    }
}

#define TRACE_KVM_MEMCRYPT_REGISTER_REGION_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_memcrypt_register_region(void * addr, size_t len)
{
}

static inline void trace_kvm_memcrypt_register_region(void * addr, size_t len)
{
    if (true) {
        _nocheck__trace_kvm_memcrypt_register_region(addr, len);
    }
}

#define TRACE_KVM_MEMCRYPT_UNREGISTER_REGION_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_memcrypt_unregister_region(void * addr, size_t len)
{
}

static inline void trace_kvm_memcrypt_unregister_region(void * addr, size_t len)
{
    if (true) {
        _nocheck__trace_kvm_memcrypt_unregister_region(addr, len);
    }
}

#define TRACE_KVM_SEV_CHANGE_STATE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_sev_change_state(const char * old, const char * new)
{
}

static inline void trace_kvm_sev_change_state(const char * old, const char * new)
{
    if (true) {
        _nocheck__trace_kvm_sev_change_state(old, new);
    }
}

#define TRACE_KVM_SEV_LAUNCH_START_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_sev_launch_start(int policy, void * session, void * pdh)
{
}

static inline void trace_kvm_sev_launch_start(int policy, void * session, void * pdh)
{
    if (true) {
        _nocheck__trace_kvm_sev_launch_start(policy, session, pdh);
    }
}

#define TRACE_KVM_SEV_LAUNCH_UPDATE_DATA_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_sev_launch_update_data(void * addr, uint64_t len)
{
}

static inline void trace_kvm_sev_launch_update_data(void * addr, uint64_t len)
{
    if (true) {
        _nocheck__trace_kvm_sev_launch_update_data(addr, len);
    }
}

#define TRACE_KVM_SEV_LAUNCH_MEASUREMENT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_sev_launch_measurement(const char * value)
{
}

static inline void trace_kvm_sev_launch_measurement(const char * value)
{
    if (true) {
        _nocheck__trace_kvm_sev_launch_measurement(value);
    }
}

#define TRACE_KVM_SEV_LAUNCH_FINISH_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_kvm_sev_launch_finish(void)
{
}

static inline void trace_kvm_sev_launch_finish(void)
{
    if (true) {
        _nocheck__trace_kvm_sev_launch_finish();
    }
}
#endif /* TRACE_TARGET_I386_GENERATED_TRACERS_H */
