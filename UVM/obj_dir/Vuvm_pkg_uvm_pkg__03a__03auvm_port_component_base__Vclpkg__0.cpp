// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> parent) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_get_connected_to(Vuvm_pkg__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_get_connected_to\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_get_provided_to(Vuvm_pkg__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_get_provided_to\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_port(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_port\n"); );
    // Body
    is_port__Vfuncrtn = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_export(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_export\n"); );
    // Body
    is_export__Vfuncrtn = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_imp(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_imp\n"); );
    // Body
    is_imp__Vfuncrtn = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_build(vlProcess, vlSymsp);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_do_task_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_do_task_phase\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::~Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base::~\n"); );
}
