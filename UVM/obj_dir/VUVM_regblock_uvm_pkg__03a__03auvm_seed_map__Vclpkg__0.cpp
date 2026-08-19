// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_seed_map::init(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_seed_map::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_seed_map::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_seed_map::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__seed_table.atDefault() = 0;
    __PVT__count.atDefault() = 0;
}
