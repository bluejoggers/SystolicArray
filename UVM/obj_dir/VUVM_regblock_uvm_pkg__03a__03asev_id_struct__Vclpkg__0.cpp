// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03asev_id_struct::init(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03asev_id_struct::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VUVM_regblock_uvm_pkg__03a__03asev_id_struct::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03asev_id_struct::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__sev_specified = 0;
    __PVT__id_specified = 0;
    __PVT__sev = 0;
    __PVT__is_on = 0;
}
