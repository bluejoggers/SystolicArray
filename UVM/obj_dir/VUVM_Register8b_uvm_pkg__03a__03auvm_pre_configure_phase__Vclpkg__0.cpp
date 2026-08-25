// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_inst)) {
        this->__PVT__m_inst = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase, vlProcess, vlSymsp, "pre_configure"s);
    }
    get__Vfuncrtn = this->__PVT__m_inst;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::__VnoInFunc_exec_task(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> comp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::__VnoInFunc_exec_task\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_runtime_phases.svh", 208)->__VnoInFunc_pre_configure_phase(vlSymsp, phase);
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_task_phase::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_pre_configure_phase"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::~VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase::~\n"); );
}
