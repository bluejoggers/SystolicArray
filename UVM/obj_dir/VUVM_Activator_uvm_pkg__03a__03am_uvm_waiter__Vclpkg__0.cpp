// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03am_uvm_waiter::init(VUVM_Activator__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03am_uvm_waiter::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__inst_name = inst_name;
    this->__PVT__field_name = field_name;
}

void VUVM_Activator_uvm_pkg__03a__03am_uvm_waiter::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03am_uvm_waiter::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
