// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_begin_v(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_begin_v\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_end_v(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_end_v\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_visit(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> node) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_visit\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::~Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_::~\n"); );
}
