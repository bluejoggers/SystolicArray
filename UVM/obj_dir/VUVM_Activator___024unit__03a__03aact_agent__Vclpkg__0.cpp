// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator___024unit__03a__03aact_agent__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi17> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator___024unit__03a__03aact_agent__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi17__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi17> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi17__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "act_agent"s;
}

void VUVM_Activator___024unit__03a__03aact_agent::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_Activator_uvm_pkg__03a__03auvm_agent::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Activator___024unit__03a__03aact_agent::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__get_is_active;
    VUVM_Activator_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    this->__VnoInFunc_get_is_active(vlSymsp, __VlefCall_0__get_is_active);
    if (__VlefCall_0__get_is_active) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi12__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "driver_in_agent"s, 
                                                                                VlClassRef<VUVM_Activator___024unit__03a__03aact_agent>{this}, ""s, this->__PVT__driver_in_agent);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi15__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "sequencer_in_agent"s, 
                                                                                VlClassRef<VUVM_Activator___024unit__03a__03aact_agent>{this}, ""s, this->__PVT__sequencer_in_agent);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi13__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "monitor_in_agent"s, 
                                                                                VlClassRef<VUVM_Activator___024unit__03a__03aact_agent>{this}, ""s, this->__PVT__monitor_in_agent);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi14__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "coverage_in_agent"s, 
                                                                                VlClassRef<VUVM_Activator___024unit__03a__03aact_agent>{this}, ""s, this->__PVT__coverage_in_agent);
}

void VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc_connect_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc_connect_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__get_is_active;
    VUVM_Activator_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    this->__VnoInFunc_get_is_active(vlSymsp, __VlefCall_0__get_is_active);
    if (__VlefCall_0__get_is_active) {
        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__driver_in_agent, "UVM_Activator.sv", 259)
                      ->__PVT__seq_item_port, "UVM_Activator.sv", 259)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__sequencer_in_agent, "UVM_Activator.sv", 259)
                                                                                ->__PVT__seq_item_export);
    }
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__monitor_in_agent, "UVM_Activator.sv", 262)
                  ->__PVT__monitor_analysis_port, "UVM_Activator.sv", 262)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__coverage_in_agent, "UVM_Activator.sv", 262)
                                                                                ->__PVT__analysis_export);
}

void VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Activator___024unit__03a__03aact_agent::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator___024unit__03a__03aact_agent::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Activator___024unit__03a__03aact_agent::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Activator___024unit__03a__03aact_agent::~VUVM_Activator___024unit__03a__03aact_agent() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Activator___024unit__03a__03aact_agent::~\n"); );
}
