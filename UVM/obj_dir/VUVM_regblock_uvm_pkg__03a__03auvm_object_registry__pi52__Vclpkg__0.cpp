// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk1__DOT__cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_factory> unnamedblk1__DOT__factory;
    if ((VlNull{} == this->__PVT__me)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, unnamedblk1__DOT__cs);
        VL_NULL_CHECK(unnamedblk1__DOT__cs, "../../uvm/distrib/src/base/uvm_registry.svh", 234)->__VnoInFunc_get_factory(vlSymsp, unnamedblk1__DOT__factory);
        this->__PVT__me = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52, vlSymsp);
        VL_NULL_CHECK(unnamedblk1__DOT__factory, "../../uvm/distrib/src/base/uvm_registry.svh", 236)->__VnoInFunc_register(vlProcess, vlSymsp, this->__PVT__me);
    }
    get__Vfuncrtn = this->__PVT__me;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52__Vclpkg::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem_access_seq> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_fatal__12__verbosity;
    __Vtask_uvm_report_fatal__12__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__12__line;
    __Vtask_uvm_report_fatal__12__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__12__report_enabled_checked;
    __Vtask_uvm_report_fatal__12__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52> __VlefCall_0__get;
    std::string unnamedblk2__DOT__msg;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_registry.svh", 254)->__VnoInFunc_get_factory(vlSymsp, factory);
    if (((""s == contxt) & (VlNull{} != parent))) {
        VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_registry.svh", 257)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, contxt);
    }
    this->__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_registry.svh", 258)->__VnoInFunc_create_object_by_type(vlProcess, vlSymsp, __VlefCall_0__get, contxt, name, obj);
    __VlefExpr_1 = VL_CAST_DYNAMIC(obj, create__Vfuncrtn);
    if ((! __VlefExpr_1)) {
        unnamedblk2__DOT__msg = ""s;
        if ((VlNull{} == obj)) {
            __VlefCall_2__get_type_name = "null"s;
        } else {
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_registry.svh", 262)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
        }
        if ((VlNull{} == parent)) {
            __VlefCall_3__get_type_name = "null"s;
        } else {
            VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_registry.svh", 264)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        }
        unnamedblk2__DOT__msg = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Factory did not return an object of type 'uvm_mem_access_seq'. A component of type '"s, __VlefCall_2__get_type_name), "' was returned instead. Name="s), name), " Parent="s), __VlefCall_3__get_type_name), " contxt="s), contxt);
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

void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52__Vclpkg::__VnoInFunc_set_type_override(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52> __VlefCall_0__get;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_registry.svh", 280)->__VnoInFunc_get_factory(vlSymsp, factory);
    this->__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_registry.svh", 281)->__VnoInFunc_set_type_override_by_type(vlSymsp, __VlefCall_0__get, override_type, replace);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52__Vclpkg::__VnoInFunc_set_inst_override(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52> __VlefCall_1__get;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_registry.svh", 305)->__VnoInFunc_get_factory(vlSymsp, factory);
    if ((VlNull{} != parent)) {
        if ((""s == inst_path)) {
            VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_registry.svh", 309)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_path);
        } else {
            VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_registry.svh", 311)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), inst_path);
        }
    }
    this->__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_1__get);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_registry.svh", 313)->__VnoInFunc_set_inst_override_by_type(vlSymsp, __VlefCall_1__get, override_type, inst_path);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52::__VnoInFunc_create_object(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52::__VnoInFunc_create_object\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem_access_seq> obj;
    if ((""s == name)) {
        obj = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_mem_access_seq, vlProcess, vlSymsp, "uvm_mem_access_seq"s);
    } else {
        obj = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_mem_access_seq, vlProcess, vlSymsp, name);
    }
    create_object__Vfuncrtn = obj;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_access_seq"s;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52::init(VUVM_regblock__Syms* __restrict vlSymsp) {
    VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52::new\n"); );
    // Body
    /*super.new*/;
}

VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52::~VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi52::~\n"); );
}
