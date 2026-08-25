// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request::init(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__grant = 0;
    __PVT__sequence_id = 0;
    __PVT__request_id = 0;
    __PVT__item_priority = 0;
    __PVT__request = 0;
}
