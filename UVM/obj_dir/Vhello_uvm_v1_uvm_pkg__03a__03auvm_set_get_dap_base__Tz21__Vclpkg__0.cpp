// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_set(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_stream> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_set\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_set(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_stream> value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_set\n"); );
    // Body
    try_set__Vfuncrtn = 0U;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_stream> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_get\n"); );
    // Body
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_stream> &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_get\n"); );
    // Body
    try_get__Vfuncrtn = 0U;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_v1_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::~\n"); );
}
