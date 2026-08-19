// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map_info::init(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map_info::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map_info::_ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map_info::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__offset = 0;
    __PVT__unmapped = 0;
    __PVT__addr.atDefault() = 0;
    VL_ZERO_W(160, __PVT__mem_range);
    __PVT__is_initialized = 0;
}
