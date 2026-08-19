// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_on_auditing(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_on_auditing\n"); );
    // Body
    this->__PVT__auditing = 1U;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_off_auditing(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_off_auditing\n"); );
    // Body
    this->__PVT__auditing = 0U;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_is_auditing(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auditing__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_is_auditing\n"); );
    // Body
    is_auditing__Vfuncrtn = this->__PVT__auditing;
}
