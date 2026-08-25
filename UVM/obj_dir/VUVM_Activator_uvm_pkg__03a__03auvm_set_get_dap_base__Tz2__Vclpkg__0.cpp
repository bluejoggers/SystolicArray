// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc_set(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc_set\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc_try_set(VUVM_Activator__Syms* __restrict vlSymsp, std::string value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc_try_set\n"); );
    // Body
    try_set__Vfuncrtn = 0U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc_get(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc_get\n"); );
    // Body
    get__Vfuncrtn = ""s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc_try_get(VUVM_Activator__Syms* __restrict vlSymsp, std::string &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc_try_get\n"); );
    // Body
    try_get__Vfuncrtn = 0U;
    value = ""s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::~VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Activator_uvm_pkg__03a__03auvm_set_get_dap_base__Tz2::~\n"); );
}
