// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_request::init(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_request::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_request::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_request::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__grant = 0;
    __PVT__sequence_id = 0;
    __PVT__request_id = 0;
    __PVT__item_priority = 0;
    __PVT__request = 0;
}
