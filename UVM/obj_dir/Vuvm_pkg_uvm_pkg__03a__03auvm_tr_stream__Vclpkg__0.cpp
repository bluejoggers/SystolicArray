// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_get_stream_from_handle(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> &get_stream_from_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_get_stream_from_handle\n"); );
    // Body
    {
        if ((0U == id)) {
            get_stream_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((! this->__PVT__m_streams_by_id.exists(id))) {
            get_stream_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_stream_from_handle__Vfuncrtn = this->__PVT__m_streams_by_id
            .at(id);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_m_free_id(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_m_free_id\n"); );
    // Body
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> stream;
    if ((0U != this->__PVT__m_streams_by_id.exists(id))) {
        stream = this->__PVT__m_streams_by_id.at(id);
    }
    if ((VlNull{} != stream)) {
        this->__PVT__m_streams_by_id.erase(id);
        this->__PVT__m_ids_by_stream.erase(stream);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_cfg_dap = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz64, vlProcess, vlSymsp, "cfg_dap"s);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_db(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> &get_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_db\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__2__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__8__verbosity;
    __Vtask_uvm_report_warning__8__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__8__line;
    __Vtask_uvm_report_warning__8__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__8__report_enabled_checked;
    __Vtask_uvm_report_warning__8__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__try_get;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 108)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__2__value, __VlefCall_0__try_get);
        m_cfg = __Vtask_try_get__2__value;
        if ((1U & (~ (IData)(__VlefCall_0__try_get)))) {
            if (this->__PVT__m_warn_null_cfg) {
                this->__Vfunc_uvm_report_enabled__3__id = "UVM/REC_STR/NO_CFG"s;
                __Vfunc_uvm_report_enabled__3__severity = 1U;
                __Vfunc_uvm_report_enabled__3__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__4__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__5__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), this->__Vfunc_uvm_report_enabled__3__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    __Vtask_uvm_report_warning__8__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__8__context_name = ""s;
                    __Vtask_uvm_report_warning__8__line = 0x00000070U;
                    this->__Vtask_uvm_report_warning__8__filename = "../../uvm/distrib/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__8__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__8__message
                                  ,"attempt to retrieve DB from '%s' before it was set!",1
                                  , 'S',&(__VlefCall_2__get_name));
                    this->__Vtask_uvm_report_warning__8__id = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__9__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__9__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__10__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__8__id, this->__Vtask_uvm_report_warning__8__message, __Vtask_uvm_report_warning__8__verbosity, this->__Vtask_uvm_report_warning__8__filename, __Vtask_uvm_report_warning__8__line, this->__Vtask_uvm_report_warning__8__context_name, (IData)(__Vtask_uvm_report_warning__8__report_enabled_checked));
                }
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_db__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_db__Vfuncrtn = VL_NULL_CHECK(m_cfg, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 116)
            ->__PVT__db;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_scope(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_scope\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__12__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__verbosity;
    __Vtask_uvm_report_warning__18__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__line;
    __Vtask_uvm_report_warning__18__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__18__report_enabled_checked;
    __Vtask_uvm_report_warning__18__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__try_get;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        get_scope__Vfuncrtn = ""s;
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 126)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__12__value, __VlefCall_0__try_get);
        m_cfg = __Vtask_try_get__12__value;
        if ((1U & (~ (IData)(__VlefCall_0__try_get)))) {
            if (this->__PVT__m_warn_null_cfg) {
                this->__Vfunc_uvm_report_enabled__13__id = "UVM/REC_STR/NO_CFG"s;
                __Vfunc_uvm_report_enabled__13__severity = 1U;
                __Vfunc_uvm_report_enabled__13__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__14__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__14__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__15__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    __Vtask_uvm_report_warning__18__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__18__context_name = ""s;
                    __Vtask_uvm_report_warning__18__line = 0x00000082U;
                    this->__Vtask_uvm_report_warning__18__filename = "../../uvm/distrib/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__18__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__18__message
                                  ,"attempt to retrieve scope from '%s' before it was set!",1
                                  , 'S',&(__VlefCall_2__get_name));
                    this->__Vtask_uvm_report_warning__18__id = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__18__id, this->__Vtask_uvm_report_warning__18__message, __Vtask_uvm_report_warning__18__verbosity, this->__Vtask_uvm_report_warning__18__filename, __Vtask_uvm_report_warning__18__line, this->__Vtask_uvm_report_warning__18__context_name, (IData)(__Vtask_uvm_report_warning__18__report_enabled_checked));
                }
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_scope__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        get_scope__Vfuncrtn = VL_NULL_CHECK(m_cfg, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 134)
            ->__PVT__scope;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_stream_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_stream_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_stream_type_name\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__22__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__verbosity;
    __Vfunc_uvm_report_enabled__23__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__23__severity;
    __Vfunc_uvm_report_enabled__23__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__verbosity;
    __Vtask_uvm_report_warning__28__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__line;
    __Vtask_uvm_report_warning__28__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__28__report_enabled_checked;
    __Vtask_uvm_report_warning__28__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__try_get;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        get_stream_type_name__Vfuncrtn = ""s;
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 145)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__22__value, __VlefCall_0__try_get);
        m_cfg = __Vtask_try_get__22__value;
        if ((1U & (~ (IData)(__VlefCall_0__try_get)))) {
            if (this->__PVT__m_warn_null_cfg) {
                this->__Vfunc_uvm_report_enabled__23__id = "UVM/REC_STR/NO_CFG"s;
                __Vfunc_uvm_report_enabled__23__severity = 1U;
                __Vfunc_uvm_report_enabled__23__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__24__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__24__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__25__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__25__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__23__verbosity, (IData)(__Vfunc_uvm_report_enabled__23__severity), this->__Vfunc_uvm_report_enabled__23__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    __Vtask_uvm_report_warning__28__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__28__context_name = ""s;
                    __Vtask_uvm_report_warning__28__line = 0x00000095U;
                    this->__Vtask_uvm_report_warning__28__filename = "../../uvm/distrib/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__28__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__28__message
                                  ,"attempt to retrieve STREAM_TYPE_NAME from '%s' before it was set!",1
                                  , 'S',&(__VlefCall_2__get_name));
                    this->__Vtask_uvm_report_warning__28__id = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__29__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__29__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__30__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__28__id, this->__Vtask_uvm_report_warning__28__message, __Vtask_uvm_report_warning__28__verbosity, this->__Vtask_uvm_report_warning__28__filename, __Vtask_uvm_report_warning__28__line, this->__Vtask_uvm_report_warning__28__context_name, (IData)(__Vtask_uvm_report_warning__28__report_enabled_checked));
                }
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_stream_type_name__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        get_stream_type_name__Vfuncrtn = VL_NULL_CHECK(m_cfg, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 153)
            ->__PVT__stream_type_name;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_close(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_close\n"); );
    // Body
    CData/*0:0*/ __VlefCall_1__is_open;
    CData/*0:0*/ __VlefCall_0__is_open;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> unnamedblk1__DOT__idx;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> unnamedblk1__DOT__idx__Vnext;
    CData/*0:0*/ unnamedblk1__DOT__idx__Vmore;
    unnamedblk1__DOT__idx__Vmore = 0;
    {
        this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
        if ((1U & (~ (IData)(__VlefCall_0__is_open)))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_close(vlSymsp);
        unnamedblk1__DOT__idx__Vmore = (0U != this->__PVT__m_records.first(unnamedblk1__DOT__idx__Vnext));
        while (unnamedblk1__DOT__idx__Vmore) {
            unnamedblk1__DOT__idx = unnamedblk1__DOT__idx__Vnext;
            unnamedblk1__DOT__idx__Vmore = (0U != this->__PVT__m_records.next(unnamedblk1__DOT__idx__Vnext));
            VL_NULL_CHECK(unnamedblk1__DOT__idx, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 183)->__VnoInFunc_is_open(vlSymsp, __VlefCall_1__is_open);
            if (__VlefCall_1__is_open) {
                VL_NULL_CHECK(unnamedblk1__DOT__idx, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 184)->__VnoInFunc_close(vlSymsp, 0ULL);
            }
        }
        this->__PVT__m_is_opened = 0U;
        this->__PVT__m_is_closed = 1U;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_free(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_free\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_2__is_open;
    CData/*0:0*/ __VlefCall_1__is_closed;
    CData/*0:0*/ __VlefCall_0__is_open;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> unnamedblk2__DOT__idx;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> unnamedblk2__DOT__idx__Vnext;
    CData/*0:0*/ unnamedblk2__DOT__idx__Vmore;
    unnamedblk2__DOT__idx__Vmore = 0;
    VlClassRef<Vuvm_pkg_std__03a__03aprocess> p;
    std::string s;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> db;
    {
        s = ""s;
        this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
        this->__VnoInFunc_is_closed(vlSymsp, __VlefCall_1__is_closed);
        if ((1U & ((~ (IData)(__VlefCall_0__is_open)) 
                   & (~ (IData)(__VlefCall_1__is_closed))))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_open(vlSymsp, __VlefCall_2__is_open);
        if (__VlefCall_2__is_open) {
            {
                // Inlined CFunc: __VnoInFunc_close
                CData/*0:0*/ __Vinline_0___VnoInFunc_close___VlefCall_1__is_open;
                CData/*0:0*/ __Vinline_0___VnoInFunc_close___VlefCall_0__is_open;
                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> __Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx;
                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> __Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx__Vnext;
                CData/*0:0*/ __Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx__Vmore;
                __Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx__Vmore = 0;
                {
                    this->__VnoInFunc_is_open(vlSymsp, __Vinline_0___VnoInFunc_close___VlefCall_0__is_open);
                    if ((1U & (~ (IData)(__Vinline_0___VnoInFunc_close___VlefCall_0__is_open)))) {
                        goto __Vlabel1;
                    }
                    this->__VnoInFunc_do_close(vlSymsp);
                    __Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx__Vmore 
                        = (0U != this->__PVT__m_records.first(__Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx__Vnext));
                    while (__Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx__Vmore) {
                        __Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx 
                            = __Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx__Vnext;
                        __Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx__Vmore 
                            = (0U != this->__PVT__m_records.next(__Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx__Vnext));
                        VL_NULL_CHECK(__Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 183)->__VnoInFunc_is_open(vlSymsp, __Vinline_0___VnoInFunc_close___VlefCall_1__is_open);
                        if (__Vinline_0___VnoInFunc_close___VlefCall_1__is_open) {
                            VL_NULL_CHECK(__Vinline_0___VnoInFunc_close_unnamedblk1__DOT__idx, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 184)->__VnoInFunc_close(vlSymsp, 0ULL);
                        }
                    }
                    this->__PVT__m_is_opened = 0U;
                    this->__PVT__m_is_closed = 1U;
                    __Vlabel1: ;
                }
            }
        }
        this->__VnoInFunc_do_free(vlSymsp);
        unnamedblk2__DOT__idx__Vmore = (0U != this->__PVT__m_records.first(unnamedblk2__DOT__idx__Vnext));
        while (unnamedblk2__DOT__idx__Vmore) {
            unnamedblk2__DOT__idx = unnamedblk2__DOT__idx__Vnext;
            unnamedblk2__DOT__idx__Vmore = (0U != this->__PVT__m_records.next(unnamedblk2__DOT__idx__Vnext));
            VL_NULL_CHECK(unnamedblk2__DOT__idx, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 212)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
        }
        this->__VnoInFunc_get_db(vlProcess, vlSymsp, db);
        this->__PVT__m_is_closed = 0U;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 219)->__VnoInFunc_get_randstate(vlSymsp, s);
        }
        this->__PVT__m_cfg_dap = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz64, vlProcess, vlSymsp, "cfg_dap"s);
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 222)->__VnoInFunc_set_randstate(vlSymsp, s);
        }
        this->__PVT__m_warn_null_cfg = 1U;
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream.exists(
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream>{this})) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__VnoInFunc_m_free_id(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream
                                                                                .at(
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream>{this}));
        }
        if ((VlNull{} != db)) {
            VL_NULL_CHECK(db, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 229)->__VnoInFunc_m_free_stream(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream>{this});
        }
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_do_open(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_do_open\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__verbosity;
    __Vfunc_uvm_report_enabled__49__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__49__severity;
    __Vfunc_uvm_report_enabled__49__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__54__verbosity;
    __Vtask_uvm_report_error__54__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__54__line;
    __Vtask_uvm_report_error__54__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__54__report_enabled_checked;
    __Vtask_uvm_report_error__54__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__55__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__56__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__58__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__59__verbosity;
    __Vfunc_uvm_report_enabled__59__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__59__severity;
    __Vfunc_uvm_report_enabled__59__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__64__verbosity;
    __Vtask_uvm_report_error__64__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__64__line;
    __Vtask_uvm_report_error__64__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__64__report_enabled_checked;
    __Vtask_uvm_report_error__64__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__65__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__66__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__try_get;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        if ((VlNull{} == db)) {
            this->__Vfunc_uvm_report_enabled__49__id = "UVM/REC_STR/NULL_DB"s;
            __Vfunc_uvm_report_enabled__49__severity = 2U;
            __Vfunc_uvm_report_enabled__49__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__50__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__50__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__51__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__49__verbosity, (IData)(__Vfunc_uvm_report_enabled__49__severity), this->__Vfunc_uvm_report_enabled__49__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__54__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__54__context_name = ""s;
                __Vtask_uvm_report_error__54__line = 0x000000ffU;
                this->__Vtask_uvm_report_error__54__filename = "../../uvm/distrib/src/base/uvm_tr_stream.svh"s;
                __Vtask_uvm_report_error__54__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__54__message
                              ,"Illegal attempt to set DB for '%s' to '<null>'",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__54__id = "UVM/REC_STR/NULL_DB"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__55__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__55__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__56__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__56__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__54__id, this->__Vtask_uvm_report_error__54__message, __Vtask_uvm_report_error__54__verbosity, this->__Vtask_uvm_report_error__54__filename, __Vtask_uvm_report_error__54__line, this->__Vtask_uvm_report_error__54__context_name, (IData)(__Vtask_uvm_report_error__54__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 259)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__58__value, __VlefCall_2__try_get);
        m_cfg = __Vtask_try_get__58__value;
        if (__VlefCall_2__try_get) {
            this->__Vfunc_uvm_report_enabled__59__id = "UVM/REC_STR/RE_CFG"s;
            __Vfunc_uvm_report_enabled__59__severity = 2U;
            __Vfunc_uvm_report_enabled__59__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__60__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__60__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__61__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__59__verbosity, (IData)(__Vfunc_uvm_report_enabled__59__severity), this->__Vfunc_uvm_report_enabled__59__id, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__64__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__64__context_name = ""s;
                __Vtask_uvm_report_error__64__line = 0x00000106U;
                this->__Vtask_uvm_report_error__64__filename = "../../uvm/distrib/src/base/uvm_tr_stream.svh"s;
                __Vtask_uvm_report_error__64__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__64__message
                              ,"Illegal attempt to re-open '%s'",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__64__id = "UVM/REC_STR/RE_CFG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__65__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__65__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__66__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__66__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__64__id, this->__Vtask_uvm_report_error__64__message, __Vtask_uvm_report_error__64__verbosity, this->__Vtask_uvm_report_error__64__filename, __Vtask_uvm_report_error__64__line, this->__Vtask_uvm_report_error__64__context_name, (IData)(__Vtask_uvm_report_error__64__report_enabled_checked));
            }
        } else {
            m_cfg = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03am_uvm_tr_stream_cfg, vlSymsp);
            VL_NULL_CHECK(m_cfg, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 267)->__PVT__db 
                = db;
            VL_NULL_CHECK(m_cfg, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 268)->__PVT__scope 
                = scope;
            VL_NULL_CHECK(m_cfg, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 269)->__PVT__stream_type_name 
                = stream_type_name;
            VL_NULL_CHECK(this->__PVT__m_cfg_dap, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 270)->__VnoInFunc_set(vlSymsp, m_cfg);
            this->__PVT__m_is_opened = 1U;
            this->__VnoInFunc_do_open(vlSymsp, db, scope, stream_type_name);
        }
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_open(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_open\n"); );
    // Body
    is_open__Vfuncrtn = this->__PVT__m_is_opened;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_closed(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_closed\n"); );
    // Body
    is_closed__Vfuncrtn = this->__PVT__m_is_closed;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_open_recorder(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> &open_recorder__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_open_recorder\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_open;
    VlClassRef<Vuvm_pkg_std__03a__03aprocess> unnamedblk3__DOT__p;
    std::string unnamedblk3__DOT__s;
    QData/*63:0*/ m_time;
    m_time = ((0ULL == open_time) ? VL_TIME_UNITED_Q(1)
               : open_time);
    this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
    if (__VlefCall_0__is_open) {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk3__DOT__p);
        unnamedblk3__DOT__s = ""s;
        if ((VlNull{} != unnamedblk3__DOT__p)) {
            VL_NULL_CHECK(unnamedblk3__DOT__p, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 333)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk3__DOT__s);
        }
        this->__VnoInFunc_do_open_recorder(vlProcess, vlSymsp, name, m_time, type_name, open_recorder__Vfuncrtn);
        if ((VlNull{} != open_recorder__Vfuncrtn)) {
            this->__PVT__m_records.at(open_recorder__Vfuncrtn) = 1U;
            VL_NULL_CHECK(open_recorder__Vfuncrtn, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 343)->__VnoInFunc_m_do_open(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream>{this}, m_time, type_name);
        }
        if ((VlNull{} != unnamedblk3__DOT__p)) {
            VL_NULL_CHECK(unnamedblk3__DOT__p, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 346)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk3__DOT__s);
        }
    } else {
        open_recorder__Vfuncrtn = VlNull{};
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_free_recorder(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_free_recorder\n"); );
    // Body
    if (this->__PVT__m_records.exists(recorder)) {
        this->__PVT__m_records.erase(recorder);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_recorders(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder>> &q, CData/*0:0*/ &get_recorders__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_recorders\n"); );
    // Body
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> unnamedblk4__DOT__idx;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> unnamedblk4__DOT__idx__Vnext;
    CData/*0:0*/ unnamedblk4__DOT__idx__Vmore;
    unnamedblk4__DOT__idx__Vmore = 0;
    q.clear();
    unnamedblk4__DOT__idx__Vmore = (0U != this->__PVT__m_records.first(unnamedblk4__DOT__idx__Vnext));
    while (unnamedblk4__DOT__idx__Vmore) {
        unnamedblk4__DOT__idx = unnamedblk4__DOT__idx__Vnext;
        unnamedblk4__DOT__idx__Vmore = (0U != this->__PVT__m_records.next(unnamedblk4__DOT__idx__Vnext));
        q.push_back(unnamedblk4__DOT__idx);
    }
    get_recorders__Vfuncrtn = (1U & q.size());
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_handle(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_handle\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_inst_id__79__Vfuncout;
    __Vfunc_get_inst_id__79__Vfuncout = 0;
    // Body
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefCall_1__is_closed;
    CData/*0:0*/ __VlefCall_0__is_open;
    IData/*31:0*/ unnamedblk5__DOT__handle;
    get_handle__Vfuncrtn = 0;
    this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
    this->__VnoInFunc_is_closed(vlSymsp, __VlefCall_1__is_closed);
    if ((1U & ((~ (IData)(__VlefCall_0__is_open)) & 
               (~ (IData)(__VlefCall_1__is_closed))))) {
        get_handle__Vfuncrtn = 0U;
    } else {
        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__79__Vfuncout);
        unnamedblk5__DOT__handle = __Vfunc_get_inst_id__79__Vfuncout;
        __VlefExpr_2 = vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream.exists(
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream>{this});
        if (__VlefExpr_2) {
            __VlefExpr_2 = (vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream
                            .at(VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream>{this}) 
                            != unnamedblk5__DOT__handle);
        }
        if (__VlefExpr_2) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_streams_by_id.erase(vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream
                                                                                .at(
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream>{this}));
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_streams_by_id.at(unnamedblk5__DOT__handle) 
            = VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream>{this};
        vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream.at(
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream>{this}) 
            = unnamedblk5__DOT__handle;
        get_handle__Vfuncrtn = unnamedblk5__DOT__handle;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_get_handle(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_get_handle\n"); );
    // Body
    m_get_handle__Vfuncrtn = 0;
    this->__VnoInFunc_get_handle(vlSymsp, m_get_handle__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_close(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_close\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_free(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_free\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open_recorder\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    do_open_recorder__Vfuncrtn = VlNull{};
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_records.atDefault() = 0;
    __PVT__m_warn_null_cfg = 0;
    __PVT__m_is_opened = 0;
    __PVT__m_is_closed = 0;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::~Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::~\n"); );
}
