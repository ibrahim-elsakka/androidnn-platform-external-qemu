/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_TARGET_SPARC_GENERATED_TRACERS_H
#define TRACE_TARGET_SPARC_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_MMU_HELPER_DFAULT_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_DPROT_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_DMISS_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_TFAULT_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_TMISS_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_MMU_FAULT_EVENT;
extern TraceEvent _TRACE_INT_HELPER_SET_SOFTINT_EVENT;
extern TraceEvent _TRACE_INT_HELPER_CLEAR_SOFTINT_EVENT;
extern TraceEvent _TRACE_INT_HELPER_WRITE_SOFTINT_EVENT;
extern TraceEvent _TRACE_INT_HELPER_ICACHE_FREEZE_EVENT;
extern TraceEvent _TRACE_INT_HELPER_DCACHE_FREEZE_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_GREGSET_ERROR_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_SWITCH_PSTATE_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_NO_SWITCH_PSTATE_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_WRPIL_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_DONE_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_RETRY_EVENT;
extern uint16_t _TRACE_MMU_HELPER_DFAULT_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_DPROT_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_DMISS_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_TFAULT_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_TMISS_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_MMU_FAULT_DSTATE;
extern uint16_t _TRACE_INT_HELPER_SET_SOFTINT_DSTATE;
extern uint16_t _TRACE_INT_HELPER_CLEAR_SOFTINT_DSTATE;
extern uint16_t _TRACE_INT_HELPER_WRITE_SOFTINT_DSTATE;
extern uint16_t _TRACE_INT_HELPER_ICACHE_FREEZE_DSTATE;
extern uint16_t _TRACE_INT_HELPER_DCACHE_FREEZE_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_GREGSET_ERROR_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_SWITCH_PSTATE_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_NO_SWITCH_PSTATE_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_WRPIL_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_DONE_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_RETRY_DSTATE;
#define TRACE_MMU_HELPER_DFAULT_ENABLED 1
#define TRACE_MMU_HELPER_DPROT_ENABLED 1
#define TRACE_MMU_HELPER_DMISS_ENABLED 1
#define TRACE_MMU_HELPER_TFAULT_ENABLED 1
#define TRACE_MMU_HELPER_TMISS_ENABLED 1
#define TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_ENABLED 1
#define TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_ENABLED 1
#define TRACE_MMU_HELPER_MMU_FAULT_ENABLED 1
#define TRACE_INT_HELPER_SET_SOFTINT_ENABLED 1
#define TRACE_INT_HELPER_CLEAR_SOFTINT_ENABLED 1
#define TRACE_INT_HELPER_WRITE_SOFTINT_ENABLED 1
#define TRACE_INT_HELPER_ICACHE_FREEZE_ENABLED 1
#define TRACE_INT_HELPER_DCACHE_FREEZE_ENABLED 1
#define TRACE_WIN_HELPER_GREGSET_ERROR_ENABLED 1
#define TRACE_WIN_HELPER_SWITCH_PSTATE_ENABLED 1
#define TRACE_WIN_HELPER_NO_SWITCH_PSTATE_ENABLED 1
#define TRACE_WIN_HELPER_WRPIL_ENABLED 1
#define TRACE_WIN_HELPER_DONE_ENABLED 1
#define TRACE_WIN_HELPER_RETRY_ENABLED 1

#define TRACE_MMU_HELPER_DFAULT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_mmu_helper_dfault(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl)
{
}

static inline void trace_mmu_helper_dfault(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl)
{
    if (true) {
        _nocheck__trace_mmu_helper_dfault(address, context, mmu_idx, tl);
    }
}

#define TRACE_MMU_HELPER_DPROT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_mmu_helper_dprot(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl)
{
}

static inline void trace_mmu_helper_dprot(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl)
{
    if (true) {
        _nocheck__trace_mmu_helper_dprot(address, context, mmu_idx, tl);
    }
}

#define TRACE_MMU_HELPER_DMISS_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_mmu_helper_dmiss(uint64_t address, uint64_t context)
{
}

static inline void trace_mmu_helper_dmiss(uint64_t address, uint64_t context)
{
    if (true) {
        _nocheck__trace_mmu_helper_dmiss(address, context);
    }
}

#define TRACE_MMU_HELPER_TFAULT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_mmu_helper_tfault(uint64_t address, uint64_t context)
{
}

static inline void trace_mmu_helper_tfault(uint64_t address, uint64_t context)
{
    if (true) {
        _nocheck__trace_mmu_helper_tfault(address, context);
    }
}

#define TRACE_MMU_HELPER_TMISS_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_mmu_helper_tmiss(uint64_t address, uint64_t context)
{
}

static inline void trace_mmu_helper_tmiss(uint64_t address, uint64_t context)
{
    if (true) {
        _nocheck__trace_mmu_helper_tmiss(address, context);
    }
}

#define TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_mmu_helper_get_phys_addr_code(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address)
{
}

static inline void trace_mmu_helper_get_phys_addr_code(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address)
{
    if (true) {
        _nocheck__trace_mmu_helper_get_phys_addr_code(tl, mmu_idx, prim_context, sec_context, address);
    }
}

#define TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_mmu_helper_get_phys_addr_data(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address)
{
}

static inline void trace_mmu_helper_get_phys_addr_data(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address)
{
    if (true) {
        _nocheck__trace_mmu_helper_get_phys_addr_data(tl, mmu_idx, prim_context, sec_context, address);
    }
}

#define TRACE_MMU_HELPER_MMU_FAULT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_mmu_helper_mmu_fault(uint64_t address, uint64_t paddr, int mmu_idx, uint32_t tl, uint64_t prim_context, uint64_t sec_context)
{
}

static inline void trace_mmu_helper_mmu_fault(uint64_t address, uint64_t paddr, int mmu_idx, uint32_t tl, uint64_t prim_context, uint64_t sec_context)
{
    if (true) {
        _nocheck__trace_mmu_helper_mmu_fault(address, paddr, mmu_idx, tl, prim_context, sec_context);
    }
}

#define TRACE_INT_HELPER_SET_SOFTINT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_int_helper_set_softint(uint32_t softint)
{
}

static inline void trace_int_helper_set_softint(uint32_t softint)
{
    if (true) {
        _nocheck__trace_int_helper_set_softint(softint);
    }
}

#define TRACE_INT_HELPER_CLEAR_SOFTINT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_int_helper_clear_softint(uint32_t softint)
{
}

static inline void trace_int_helper_clear_softint(uint32_t softint)
{
    if (true) {
        _nocheck__trace_int_helper_clear_softint(softint);
    }
}

#define TRACE_INT_HELPER_WRITE_SOFTINT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_int_helper_write_softint(uint32_t softint)
{
}

static inline void trace_int_helper_write_softint(uint32_t softint)
{
    if (true) {
        _nocheck__trace_int_helper_write_softint(softint);
    }
}

#define TRACE_INT_HELPER_ICACHE_FREEZE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_int_helper_icache_freeze(void)
{
}

static inline void trace_int_helper_icache_freeze(void)
{
    if (true) {
        _nocheck__trace_int_helper_icache_freeze();
    }
}

#define TRACE_INT_HELPER_DCACHE_FREEZE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_int_helper_dcache_freeze(void)
{
}

static inline void trace_int_helper_dcache_freeze(void)
{
    if (true) {
        _nocheck__trace_int_helper_dcache_freeze();
    }
}

#define TRACE_WIN_HELPER_GREGSET_ERROR_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_win_helper_gregset_error(uint32_t pstate)
{
}

static inline void trace_win_helper_gregset_error(uint32_t pstate)
{
    if (true) {
        _nocheck__trace_win_helper_gregset_error(pstate);
    }
}

#define TRACE_WIN_HELPER_SWITCH_PSTATE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_win_helper_switch_pstate(uint32_t pstate_regs, uint32_t new_pstate_regs)
{
}

static inline void trace_win_helper_switch_pstate(uint32_t pstate_regs, uint32_t new_pstate_regs)
{
    if (true) {
        _nocheck__trace_win_helper_switch_pstate(pstate_regs, new_pstate_regs);
    }
}

#define TRACE_WIN_HELPER_NO_SWITCH_PSTATE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_win_helper_no_switch_pstate(uint32_t new_pstate_regs)
{
}

static inline void trace_win_helper_no_switch_pstate(uint32_t new_pstate_regs)
{
    if (true) {
        _nocheck__trace_win_helper_no_switch_pstate(new_pstate_regs);
    }
}

#define TRACE_WIN_HELPER_WRPIL_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_win_helper_wrpil(uint32_t psrpil, uint32_t new_pil)
{
}

static inline void trace_win_helper_wrpil(uint32_t psrpil, uint32_t new_pil)
{
    if (true) {
        _nocheck__trace_win_helper_wrpil(psrpil, new_pil);
    }
}

#define TRACE_WIN_HELPER_DONE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_win_helper_done(uint32_t tl)
{
}

static inline void trace_win_helper_done(uint32_t tl)
{
    if (true) {
        _nocheck__trace_win_helper_done(tl);
    }
}

#define TRACE_WIN_HELPER_RETRY_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_win_helper_retry(uint32_t tl)
{
}

static inline void trace_win_helper_retry(uint32_t tl)
{
    if (true) {
        _nocheck__trace_win_helper_retry(tl);
    }
}
#endif /* TRACE_TARGET_SPARC_GENERATED_TRACERS_H */
