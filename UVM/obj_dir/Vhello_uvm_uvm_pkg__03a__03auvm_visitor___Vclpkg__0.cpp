// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name) {
    Vhello_uvm_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_begin_v(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_begin_v\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_end_v(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_end_v\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_visit(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> node) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_visit\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::~Vhello_uvm_uvm_pkg__03a__03auvm_visitor_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_visitor_::~\n"); );
}
