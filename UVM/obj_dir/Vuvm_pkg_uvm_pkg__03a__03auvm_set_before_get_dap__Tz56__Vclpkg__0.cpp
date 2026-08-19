// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56__Vclpkg::__VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__Tz86> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz86__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__Tz86> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz86__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56, vlProcess, vlSymsp, "unnamed-uvm_set_before_get_dap#(T)"s);
    } else {
        tmp = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/dap/uvm_set_before_get_dap.svh", 74)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vuvm_pkg_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_set_get_dap_base__Tz56::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_set = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_set(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_set\n"); );
    // Body
    this->__PVT__m_set = 1U;
    this->__PVT__m_value = value;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_try_set(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_try_set\n"); );
    // Body
    try_set__Vfuncrtn = 0U;
    this->__VnoInFunc_set(vlSymsp, value);
    try_set__Vfuncrtn = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_get(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_get\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__12__verbosity;
    __Vtask_uvm_report_error__12__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__12__line;
    __Vtask_uvm_report_error__12__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__12__report_enabled_checked;
    __Vtask_uvm_report_error__12__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if ((1U & (~ (IData)(this->__PVT__m_set)))) {
        this->__Vfunc_uvm_report_enabled__7__id = "UVM/SET_BEFORE_GET_DAP/NO_SET"s;
        __Vfunc_uvm_report_enabled__7__severity = 2U;
        __Vfunc_uvm_report_enabled__7__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), this->__Vfunc_uvm_report_enabled__7__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_error__12__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__12__context_name = ""s;
            __Vtask_uvm_report_error__12__line = 0x00000075U;
            this->__Vtask_uvm_report_error__12__filename = "../../uvm/distrib/src/dap/uvm_set_before_get_dap.svh"s;
            __Vtask_uvm_report_error__12__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__12__message
                          ,"Attempt to get value on '%s', but the data access policy forbits calling 'get' prior to calling 'set' or 'try_set'!",1
                          , 'S',&(__VlefCall_1__get_full_name));
            this->__Vtask_uvm_report_error__12__id = "UVM/SET_BEFORE_GET_DAP/NO_SET"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__13__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__13__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__12__id, this->__Vtask_uvm_report_error__12__message, __Vtask_uvm_report_error__12__verbosity, this->__Vtask_uvm_report_error__12__filename, __Vtask_uvm_report_error__12__line, this->__Vtask_uvm_report_error__12__context_name, (IData)(__Vtask_uvm_report_error__12__report_enabled_checked));
        }
    }
    get__Vfuncrtn = this->__PVT__m_value;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_try_get(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_try_get\n"); );
    // Body
    if (this->__PVT__m_set) {
        value = this->__PVT__m_value;
        try_get__Vfuncrtn = 1U;
    } else {
        try_get__Vfuncrtn = 0U;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__verbosity;
    __Vfunc_uvm_report_enabled__16__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__16__severity;
    __Vfunc_uvm_report_enabled__16__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__20__verbosity;
    __Vtask_uvm_report_error__20__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__20__line;
    __Vtask_uvm_report_error__20__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__20__report_enabled_checked;
    __Vtask_uvm_report_error__20__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__16__id = "UVM/SET_BEFORE_GET_DAP/CPY"s;
    __Vfunc_uvm_report_enabled__16__severity = 2U;
    __Vfunc_uvm_report_enabled__16__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__17__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__17__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__18__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__16__verbosity, (IData)(__Vfunc_uvm_report_enabled__16__severity), this->__Vfunc_uvm_report_enabled__16__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_error__20__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__20__context_name = ""s;
        __Vtask_uvm_report_error__20__line = 0x00000095U;
        this->__Vtask_uvm_report_error__20__filename = "../../uvm/distrib/src/dap/uvm_set_before_get_dap.svh"s;
        __Vtask_uvm_report_error__20__verbosity = 0U;
        this->__Vtask_uvm_report_error__20__message = "'copy()' is not supported for 'uvm_set_before_get_dap#(T)'"s;
        this->__Vtask_uvm_report_error__20__id = "UVM/SET_BEFORE_GET_DAP/CPY"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__21__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__21__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__22__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__20__id, this->__Vtask_uvm_report_error__20__message, __Vtask_uvm_report_error__20__verbosity, this->__Vtask_uvm_report_error__20__filename, __Vtask_uvm_report_error__20__line, this->__Vtask_uvm_report_error__20__context_name, (IData)(__Vtask_uvm_report_error__20__report_enabled_checked));
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_do_pack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__verbosity;
    __Vfunc_uvm_report_enabled__24__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__24__severity;
    __Vfunc_uvm_report_enabled__24__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__28__verbosity;
    __Vtask_uvm_report_error__28__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__28__line;
    __Vtask_uvm_report_error__28__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__28__report_enabled_checked;
    __Vtask_uvm_report_error__28__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__24__id = "UVM/SET_BEFORE_GET_DAP/PCK"s;
    __Vfunc_uvm_report_enabled__24__severity = 2U;
    __Vfunc_uvm_report_enabled__24__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__25__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__25__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__26__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__24__verbosity, (IData)(__Vfunc_uvm_report_enabled__24__severity), this->__Vfunc_uvm_report_enabled__24__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_error__28__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__28__context_name = ""s;
        __Vtask_uvm_report_error__28__line = 0x0000009aU;
        this->__Vtask_uvm_report_error__28__filename = "../../uvm/distrib/src/dap/uvm_set_before_get_dap.svh"s;
        __Vtask_uvm_report_error__28__verbosity = 0U;
        this->__Vtask_uvm_report_error__28__message = "'pack()' is not supported for 'uvm_set_before_get_dap#(T)'"s;
        this->__Vtask_uvm_report_error__28__id = "UVM/SET_BEFORE_GET_DAP/PCK"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__29__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__29__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__30__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__28__id, this->__Vtask_uvm_report_error__28__message, __Vtask_uvm_report_error__28__verbosity, this->__Vtask_uvm_report_error__28__filename, __Vtask_uvm_report_error__28__line, this->__Vtask_uvm_report_error__28__context_name, (IData)(__Vtask_uvm_report_error__28__report_enabled_checked));
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_do_unpack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__32__verbosity;
    __Vfunc_uvm_report_enabled__32__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__32__severity;
    __Vfunc_uvm_report_enabled__32__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__36__verbosity;
    __Vtask_uvm_report_error__36__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__36__line;
    __Vtask_uvm_report_error__36__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__36__report_enabled_checked;
    __Vtask_uvm_report_error__36__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__32__id = "UVM/SET_BEFORE_GET_DAP/UPK"s;
    __Vfunc_uvm_report_enabled__32__severity = 2U;
    __Vfunc_uvm_report_enabled__32__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__33__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__33__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__34__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__32__verbosity, (IData)(__Vfunc_uvm_report_enabled__32__severity), this->__Vfunc_uvm_report_enabled__32__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_error__36__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__36__context_name = ""s;
        __Vtask_uvm_report_error__36__line = 0x0000009fU;
        this->__Vtask_uvm_report_error__36__filename = "../../uvm/distrib/src/dap/uvm_set_before_get_dap.svh"s;
        __Vtask_uvm_report_error__36__verbosity = 0U;
        this->__Vtask_uvm_report_error__36__message = "'unpack()' is not supported for 'uvm_set_before_get_dap#(T)'"s;
        this->__Vtask_uvm_report_error__36__id = "UVM/SET_BEFORE_GET_DAP/UPK"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__37__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__37__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__38__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__36__id, this->__Vtask_uvm_report_error__36__message, __Vtask_uvm_report_error__36__verbosity, this->__Vtask_uvm_report_error__36__filename, __Vtask_uvm_report_error__36__line, this->__Vtask_uvm_report_error__36__context_name, (IData)(__Vtask_uvm_report_error__36__report_enabled_checked));
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    if (this->__PVT__m_set) {
        __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__m_value);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"(PARAMTYPEDTYPE 'T') %0p [SET]",1
                      , '!',&(__Vtemp_1));
    } else {
        __Vtemp_2 = VL_TO_STRING_DEREF(this->__PVT__m_value);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"(PARAMTYPEDTYPE 'T') %0p [UNSET]",1
                      , '!',&(__Vtemp_2));
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_do_print(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    Vuvm_pkg_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/dap/uvm_set_before_get_dap.svh", 175)->__VnoInFunc_print_field_int(vlSymsp, "set_state"s, (QData)((IData)(this->__PVT__m_set)), 1U, 0U, 0x2eU, ""s);
    __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__m_value);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/dap/uvm_set_before_get_dap.svh", 176)->__VnoInFunc_print_generic(vlSymsp, "value"s, "PARAMTYPEDTYPE 'T'"s, 0U, VL_SFORMATF_N_NX("%0p",1
                                                                                , '!',&(__Vtemp_1)) , 0x2eU);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_set = 0;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::~Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56::~\n"); );
}
