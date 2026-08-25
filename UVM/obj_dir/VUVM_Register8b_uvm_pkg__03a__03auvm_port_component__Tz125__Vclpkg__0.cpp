// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz124> port) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_port_component_base::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    if ((VlNull{} == port)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Bad usage"s, "Null handle to port"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__PVT__m_port = port;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_get_type_name\n"); );
    // Body
    {
        get_type_name__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__m_port)) {
            get_type_name__Vfuncrtn = "uvm_port_component"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_port, "../../uvm/distrib/src/base/uvm_port_base.svh", 122)->__VnoInFunc_get_type_name(vlSymsp, get_type_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_resolve_bindings\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_port, "../../uvm/distrib/src/base/uvm_port_base.svh", 126)->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_get_port(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz124> &get_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_get_port\n"); );
    // Body
    get_port__Vfuncrtn = this->__PVT__m_port;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_get_connected_to(VUVM_Register8b__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_get_connected_to\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_port, "../../uvm/distrib/src/base/uvm_port_base.svh", 138)->__VnoInFunc_get_connected_to(vlSymsp, list);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_get_provided_to(VUVM_Register8b__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_get_provided_to\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_port, "../../uvm/distrib/src/base/uvm_port_base.svh", 142)->__VnoInFunc_get_provided_to(vlSymsp, list);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_is_port(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_is_port\n"); );
    // Body
    is_port__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_port, "../../uvm/distrib/src/base/uvm_port_base.svh", 146)->__VnoInFunc_is_port(vlSymsp, is_port__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_is_export(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_is_export\n"); );
    // Body
    is_export__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_port, "../../uvm/distrib/src/base/uvm_port_base.svh", 150)->__VnoInFunc_is_export(vlSymsp, is_export__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_is_imp(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_is_imp\n"); );
    // Body
    is_imp__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_port, "../../uvm/distrib/src/base/uvm_port_base.svh", 154)->__VnoInFunc_is_imp(vlSymsp, is_imp__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::~VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b_uvm_pkg__03a__03auvm_port_component__Tz125::~\n"); );
}
