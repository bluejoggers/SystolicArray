// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_callback::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_raised(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_raised\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_dropped(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_dropped\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_all_dropped(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_all_dropped\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::~VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback::~\n"); );
}
