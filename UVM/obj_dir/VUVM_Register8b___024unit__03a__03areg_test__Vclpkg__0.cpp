// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b___024unit__03a__03areg_test__Vclpkg::__VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b___024unit__03a__03areg_test__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi19__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi19__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "reg_test"s;
}

void VUVM_Register8b___024unit__03a__03areg_test::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_test::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b___024unit__03a__03areg_test::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VUVM_Register8b_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi18__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_env"s, 
                                                                                VlClassRef<VUVM_Register8b___024unit__03a__03areg_test>{this}, ""s, this->__PVT__env_in_test);
}

void VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_end_of_elaboration_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_top, "UVM_Register8b.sv", 332)->__VnoInFunc_print_topology(vlProcess, vlSymsp, VlNull{});
}

VlCoroutine VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_run_phase(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_sequence> sequence_in_test;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi16__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "sequence_in_test"s, VlNull{}, ""s, sequence_in_test);
    VL_NULL_CHECK(phase, "UVM_Register8b.sv", 338)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b___024unit__03a__03areg_test>{this}, ""s, 1U);
    co_await VL_NULL_CHECK(sequence_in_test, "UVM_Register8b.sv", 339)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__env_in_test, "UVM_Register8b.sv", 339)
                                                                                ->__PVT__agent_in_env, "UVM_Register8b.sv", 339)
                                                                                ->__PVT__sequencer_in_agent, VlNull{}, 0xffffffffU, 1U);
    VL_NULL_CHECK(phase, "UVM_Register8b.sv", 340)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                               VlClassRef<VUVM_Register8b___024unit__03a__03areg_test>{this}, ""s, 1U);
    co_return;
}

void VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b___024unit__03a__03areg_test::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b___024unit__03a__03areg_test::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b___024unit__03a__03areg_test::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Register8b___024unit__03a__03areg_test::~VUVM_Register8b___024unit__03a__03areg_test() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b___024unit__03a__03areg_test::~\n"); );
}
