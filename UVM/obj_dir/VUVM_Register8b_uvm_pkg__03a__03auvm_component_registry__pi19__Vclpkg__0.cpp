// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk1__DOT__cs;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_factory> unnamedblk1__DOT__factory;
    if ((VlNull{} == this->__PVT__me)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, unnamedblk1__DOT__cs);
        VL_NULL_CHECK(unnamedblk1__DOT__cs, "../../uvm/distrib/src/base/uvm_registry.svh", 93)->__VnoInFunc_get_factory(vlSymsp, unnamedblk1__DOT__factory);
        this->__PVT__me = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19, vlSymsp);
        VL_NULL_CHECK(unnamedblk1__DOT__factory, "../../uvm/distrib/src/base/uvm_registry.svh", 95)->__VnoInFunc_register(vlProcess, vlSymsp, this->__PVT__me);
    }
    get__Vfuncrtn = this->__PVT__me;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19__Vclpkg::__VnoInFunc_create(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<VUVM_Register8b___024unit__03a__03areg_test> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> __Vtask_create_component_by_type__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__12__verbosity;
    __Vtask_uvm_report_fatal__12__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__12__line;
    __Vtask_uvm_report_fatal__12__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__12__report_enabled_checked;
    __Vtask_uvm_report_fatal__12__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19> __VlefCall_0__get;
    std::string unnamedblk2__DOT__msg;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_registry.svh", 112)->__VnoInFunc_get_factory(vlSymsp, factory);
    if (((""s == contxt) & (VlNull{} != parent))) {
        VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_registry.svh", 114)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, contxt);
    }
    this->__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_registry.svh", 115)->__VnoInFunc_create_component_by_type(vlProcess, vlSymsp, __VlefCall_0__get, contxt, name, parent, __Vtask_create_component_by_type__9__Vfuncout);
    obj = __Vtask_create_component_by_type__9__Vfuncout;
    __VlefExpr_1 = VL_CAST_DYNAMIC(obj, create__Vfuncrtn);
    if ((! __VlefExpr_1)) {
        unnamedblk2__DOT__msg = ""s;
        if ((VlNull{} == obj)) {
            __VlefCall_2__get_type_name = "null"s;
        } else {
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_registry.svh", 119)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
        }
        if ((VlNull{} == parent)) {
            __VlefCall_3__get_type_name = "null"s;
        } else {
            VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_registry.svh", 121)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        }
        unnamedblk2__DOT__msg = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Factory did not return a component of type 'reg_test'. A component of type '"s, __VlefCall_2__get_type_name), "' was returned instead. Name="s), name), " Parent="s), __VlefCall_3__get_type_name), " contxt="s), contxt);
        __Vtask_uvm_report_fatal__12__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_fatal__12__context_name = ""s;
        __Vtask_uvm_report_fatal__12__line = 0U;
        this->__Vtask_uvm_report_fatal__12__filename = ""s;
        __Vtask_uvm_report_fatal__12__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__12__message 
            = unnamedblk2__DOT__msg;
        this->__Vtask_uvm_report_fatal__12__id = "FCTTYP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__13__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
            = __Vfunc_get__13__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vtask_get_root__14__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__12__id, this->__Vtask_uvm_report_fatal__12__message, __Vtask_uvm_report_fatal__12__verbosity, this->__Vtask_uvm_report_fatal__12__filename, __Vtask_uvm_report_fatal__12__line, this->__Vtask_uvm_report_fatal__12__context_name, (IData)(__Vtask_uvm_report_fatal__12__report_enabled_checked));
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19__Vclpkg::__VnoInFunc_set_type_override(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19> __VlefCall_0__get;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_registry.svh", 137)->__VnoInFunc_get_factory(vlSymsp, factory);
    this->__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_registry.svh", 138)->__VnoInFunc_set_type_override_by_type(vlSymsp, __VlefCall_0__get, override_type, replace);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19__Vclpkg::__VnoInFunc_set_inst_override(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19> __VlefCall_1__get;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_registry.svh", 162)->__VnoInFunc_get_factory(vlSymsp, factory);
    if ((VlNull{} != parent)) {
        if ((""s == inst_path)) {
            VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_registry.svh", 166)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_path);
        } else {
            VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_registry.svh", 168)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), inst_path);
        }
    }
    this->__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_1__get);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_registry.svh", 170)->__VnoInFunc_set_inst_override_by_type(vlSymsp, __VlefCall_1__get, override_type, inst_path);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19::__VnoInFunc_create_component(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19::__VnoInFunc_create_component\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_test> obj;
    obj = VL_NEW(VUVM_Register8b___024unit__03a__03areg_test, vlProcess, vlSymsp, name, parent);
    create_component__Vfuncrtn = obj;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "reg_test"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19::init(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19::new\n"); );
    // Body
    /*super.new*/;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19::~VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi19::~\n"); );
}
