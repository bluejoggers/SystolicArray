// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info::init(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__offset = 0;
    __PVT__unmapped = 0;
    __PVT__addr.atDefault() = 0;
    VL_ZERO_W(160, __PVT__mem_range);
    __PVT__is_initialized = 0;
}
