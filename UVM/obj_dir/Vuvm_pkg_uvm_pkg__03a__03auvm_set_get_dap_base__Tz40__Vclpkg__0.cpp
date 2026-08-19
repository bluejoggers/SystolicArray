// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc_set(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc_set\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc_try_set(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc_try_set\n"); );
    // Body
    try_set__Vfuncrtn = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc_get(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc_get\n"); );
    // Body
    get__Vfuncrtn = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc_try_get(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc_try_get\n"); );
    // Body
    try_get__Vfuncrtn = 0U;
    value = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::~Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40::~\n"); );
}
