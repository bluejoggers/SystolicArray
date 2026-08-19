// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_request::init(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_request::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_request::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_request::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__grant = 0;
    __PVT__sequence_id = 0;
    __PVT__request_id = 0;
    __PVT__item_priority = 0;
    __PVT__request = 0;
}
