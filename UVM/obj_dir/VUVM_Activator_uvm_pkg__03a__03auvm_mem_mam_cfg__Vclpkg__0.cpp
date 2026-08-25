// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_cfg::init(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_cfg::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_cfg::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_cfg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__n_bytes = 0;
    __PVT__start_offset = 0;
    __PVT__end_offset = 0;
    __PVT__mode = 0;
    __PVT__locality = 0;
}
