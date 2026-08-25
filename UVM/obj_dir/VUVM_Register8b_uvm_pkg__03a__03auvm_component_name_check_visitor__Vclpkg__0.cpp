// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_get_name_constraint(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_name_constraint__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_get_name_constraint\n"); );
    // Body
    get_name_constraint__Vfuncrtn = "^[][[:alnum:](){}_:-]([][[:alnum:](){} _:-]*[][[:alnum:](){}_:-])?$"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_visit(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> node) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_visit\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_visitor_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_begin_v(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_begin_v\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__7__verbosity;
    __Vtask_uvm_report_info__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__7__line;
    __Vtask_uvm_report_info__7__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__7__report_enabled_checked;
    __Vtask_uvm_report_info__7__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_traversal.svh", 277)->__VnoInFunc_get_root(vlProcess, vlSymsp, this->__PVT___root);
    this->__Vfunc_uvm_report_enabled__3__id = "UVM/COMP/NAMECHECK"s;
    __Vfunc_uvm_report_enabled__3__severity = 0U;
    __Vfunc_uvm_report_enabled__3__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__4__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__5__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), this->__Vfunc_uvm_report_enabled__3__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_info__7__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__7__context_name = ""s;
        __Vtask_uvm_report_info__7__line = 0x00000117U;
        this->__Vtask_uvm_report_info__7__filename = "../../uvm/distrib/src/base/uvm_traversal.svh"s;
        __Vtask_uvm_report_info__7__verbosity = 0U;
        this->__Vtask_uvm_report_info__7__message = "This implementation of the component name checks requires DPI to be enabled"s;
        this->__Vtask_uvm_report_info__7__id = "UVM/COMP/NAMECHECK"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__7__id, this->__Vtask_uvm_report_info__7__message, __Vtask_uvm_report_info__7__verbosity, this->__Vtask_uvm_report_info__7__filename, __Vtask_uvm_report_info__7__line, this->__Vtask_uvm_report_info__7__context_name, (IData)(__Vtask_uvm_report_info__7__report_enabled_checked));
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_end_v(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_end_v\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::~VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_component_name_check_visitor::~\n"); );
}
