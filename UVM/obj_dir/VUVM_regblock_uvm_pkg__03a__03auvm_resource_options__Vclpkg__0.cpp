// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_on_auditing(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_on_auditing\n"); );
    // Body
    this->__PVT__auditing = 1U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_off_auditing(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_off_auditing\n"); );
    // Body
    this->__PVT__auditing = 0U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_is_auditing(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auditing__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_is_auditing\n"); );
    // Body
    is_auditing__Vfuncrtn = this->__PVT__auditing;
}
