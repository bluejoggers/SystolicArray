// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_set(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_set\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_set(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream> value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_set\n"); );
    // Body
    try_set__Vfuncrtn = 0U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_get\n"); );
    // Body
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream> &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_get\n"); );
    // Body
    try_get__Vfuncrtn = 0U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::~VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::~\n"); );
}
