// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_m_free_id(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_m_free_id\n"); );
    // Body
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> recorder;
    if ((0U != this->__PVT__m_recorders_by_id.exists(id))) {
        recorder = this->__PVT__m_recorders_by_id.at(id);
    }
    if ((VlNull{} != recorder)) {
        this->__PVT__m_recorders_by_id.erase(id);
        this->__PVT__m_ids_by_recorder.erase(recorder);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_recorder_from_handle(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> &get_recorder_from_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_recorder_from_handle\n"); );
    // Body
    {
        if ((0U == id)) {
            get_recorder_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((! this->__PVT__m_recorders_by_id.exists(id))) {
            get_recorder_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_recorder_from_handle__Vfuncrtn = this->__PVT__m_recorders_by_id
            .at(id);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__default_radix = 0x07000000U;
    this->__PVT__physical = 1U;
    this->__PVT__abstract = 1U;
    this->__PVT__identifier = 1U;
    this->__PVT__policy = 0U;
    /*super.new*/;
    this->__PVT__m_stream_dap = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56, vlProcess, vlSymsp, "stream_dap"s);
    this->__PVT__m_warn_null_stream = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_stream(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> &get_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_stream\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> __Vtask_try_get__2__value;
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
    VL_NULL_CHECK(this->__PVT__m_stream_dap, "../../uvm/distrib/src/base/uvm_recorder.svh", 150)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__2__value, __VlefCall_0__try_get);
    get_stream__Vfuncrtn = __Vtask_try_get__2__value;
    if ((1U & (~ (IData)(__VlefCall_0__try_get)))) {
        if (this->__PVT__m_warn_null_stream) {
            this->__Vfunc_uvm_report_enabled__3__id = "UVM/REC/NO_CFG"s;
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
                __Vtask_uvm_report_warning__8__line = 0x0000009aU;
                this->__Vtask_uvm_report_warning__8__filename = "../../uvm/distrib/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_warning__8__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__8__message
                              ,"attempt to retrieve STREAM from '%s' before it was set!",1
                              , 'S',&(__VlefCall_2__get_name));
                this->__Vtask_uvm_report_warning__8__id = "UVM/REC/NO_CFG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__10__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__8__id, this->__Vtask_uvm_report_warning__8__message, __Vtask_uvm_report_warning__8__verbosity, this->__Vtask_uvm_report_warning__8__filename, __Vtask_uvm_report_warning__8__line, this->__Vtask_uvm_report_warning__8__context_name, (IData)(__Vtask_uvm_report_warning__8__report_enabled_checked));
            }
        }
        this->__PVT__m_warn_null_stream = 0U;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_close(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_close\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__is_open;
    {
        if ((0ULL == close_time)) {
            close_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        }
        this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
        if ((1U & (~ (IData)(__VlefCall_0__is_open)))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_close(vlSymsp, close_time);
        this->__PVT__m_is_opened = 0U;
        this->__PVT__m_is_closed = 1U;
        this->__PVT__m_close_time = close_time;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_2__is_open;
    CData/*0:0*/ __VlefCall_1__is_closed;
    CData/*0:0*/ __VlefCall_0__is_open;
    VlClassRef<Vuvm_pkg_std__03a__03aprocess> p;
    std::string s;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> stream;
    {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
        s = ""s;
        this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
        this->__VnoInFunc_is_closed(vlSymsp, __VlefCall_1__is_closed);
        if ((1U & ((~ (IData)(__VlefCall_0__is_open)) 
                   & (~ (IData)(__VlefCall_1__is_closed))))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_open(vlSymsp, __VlefCall_2__is_open);
        if (__VlefCall_2__is_open) {
            this->__VnoInFunc_close(vlSymsp, close_time);
        }
        this->__VnoInFunc_do_free(vlSymsp);
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, stream);
        this->__PVT__m_is_closed = 0U;
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_recorder.svh", 228)->__VnoInFunc_get_randstate(vlSymsp, s);
        }
        this->__PVT__m_stream_dap = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_set_before_get_dap__Tz56, vlProcess, vlSymsp, "stream_dap"s);
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_recorder.svh", 231)->__VnoInFunc_set_randstate(vlSymsp, s);
        }
        this->__PVT__m_warn_null_stream = 1U;
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder.exists(
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder>{this})) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_m_free_id(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder
                                                                                .at(
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder>{this}));
        }
        if ((VlNull{} != stream)) {
            VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_recorder.svh", 238)->__VnoInFunc_m_free_recorder(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder>{this});
        }
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_open(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_open\n"); );
    // Body
    is_open__Vfuncrtn = this->__PVT__m_is_opened;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_open_time(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ &get_open_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_open_time\n"); );
    // Body
    get_open_time__Vfuncrtn = this->__PVT__m_open_time;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_closed(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_closed\n"); );
    // Body
    is_closed__Vfuncrtn = this->__PVT__m_is_closed;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_close_time(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ &get_close_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_close_time\n"); );
    // Body
    get_close_time__Vfuncrtn = this->__PVT__m_close_time;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_do_open(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_do_open\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__verbosity;
    __Vfunc_uvm_report_enabled__26__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__26__severity;
    __Vfunc_uvm_report_enabled__26__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__31__verbosity;
    __Vtask_uvm_report_error__31__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__31__line;
    __Vtask_uvm_report_error__31__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__31__report_enabled_checked;
    __Vtask_uvm_report_error__31__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> __Vtask_try_get__35__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__verbosity;
    __Vfunc_uvm_report_enabled__36__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__36__severity;
    __Vfunc_uvm_report_enabled__36__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__41__verbosity;
    __Vtask_uvm_report_error__41__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__41__line;
    __Vtask_uvm_report_error__41__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__41__report_enabled_checked;
    __Vtask_uvm_report_error__41__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__try_get;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == stream)) {
            this->__Vfunc_uvm_report_enabled__26__id = "UVM/REC/NULL_STREAM"s;
            __Vfunc_uvm_report_enabled__26__severity = 2U;
            __Vfunc_uvm_report_enabled__26__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__27__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__27__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__28__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__26__verbosity, (IData)(__Vfunc_uvm_report_enabled__26__severity), this->__Vfunc_uvm_report_enabled__26__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                __Vtask_uvm_report_error__31__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__31__context_name = ""s;
                __Vtask_uvm_report_error__31__line = 0x00000120U;
                this->__Vtask_uvm_report_error__31__filename = "../../uvm/distrib/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_error__31__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__31__message
                              ,"Illegal attempt to set STREAM for '%s' to '<null>'",1
                              , 'S',&(__VlefCall_1__get_name));
                this->__Vtask_uvm_report_error__31__id = "UVM/REC/NULL_STREAM"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__33__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__31__id, this->__Vtask_uvm_report_error__31__message, __Vtask_uvm_report_error__31__verbosity, this->__Vtask_uvm_report_error__31__filename, __Vtask_uvm_report_error__31__line, this->__Vtask_uvm_report_error__31__context_name, (IData)(__Vtask_uvm_report_error__31__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_stream_dap, "../../uvm/distrib/src/base/uvm_recorder.svh", 292)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__35__value, __VlefCall_2__try_get);
        if (__VlefCall_2__try_get) {
            this->__Vfunc_uvm_report_enabled__36__id = "UVM/REC/RE_INIT"s;
            __Vfunc_uvm_report_enabled__36__severity = 2U;
            __Vfunc_uvm_report_enabled__36__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__37__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__37__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__38__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__36__verbosity, (IData)(__Vfunc_uvm_report_enabled__36__severity), this->__Vfunc_uvm_report_enabled__36__id, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_error__41__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__41__context_name = ""s;
                __Vtask_uvm_report_error__41__line = 0x00000127U;
                this->__Vtask_uvm_report_error__41__filename = "../../uvm/distrib/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_error__41__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__41__message
                              ,"Illegal attempt to re-initialize '%s'",1
                              , 'S',&(__VlefCall_4__get_name));
                this->__Vtask_uvm_report_error__41__id = "UVM/REC/RE_INIT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__42__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__42__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__43__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__41__id, this->__Vtask_uvm_report_error__41__message, __Vtask_uvm_report_error__41__verbosity, this->__Vtask_uvm_report_error__41__filename, __Vtask_uvm_report_error__41__line, this->__Vtask_uvm_report_error__41__context_name, (IData)(__Vtask_uvm_report_error__41__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_stream_dap, "../../uvm/distrib/src/base/uvm_recorder.svh", 299)->__VnoInFunc_set(vlSymsp, stream);
        this->__PVT__m_open_time = open_time;
        this->__PVT__m_is_opened = 1U;
        this->__VnoInFunc_do_open(vlProcess, vlSymsp, stream, open_time, type_name);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_handle(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_handle\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_inst_id__49__Vfuncout;
    __Vfunc_get_inst_id__49__Vfuncout = 0;
    // Body
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefCall_1__is_closed;
    CData/*0:0*/ __VlefCall_0__is_open;
    IData/*31:0*/ unnamedblk1__DOT__handle;
    get_handle__Vfuncrtn = 0;
    this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
    this->__VnoInFunc_is_closed(vlSymsp, __VlefCall_1__is_closed);
    if ((1U & ((~ (IData)(__VlefCall_0__is_open)) & 
               (~ (IData)(__VlefCall_1__is_closed))))) {
        get_handle__Vfuncrtn = 0U;
    } else {
        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__49__Vfuncout);
        unnamedblk1__DOT__handle = __Vfunc_get_inst_id__49__Vfuncout;
        __VlefExpr_2 = vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder.exists(
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder>{this});
        if (__VlefExpr_2) {
            __VlefExpr_2 = (vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder
                            .at(VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder>{this}) 
                            != unnamedblk1__DOT__handle);
        }
        if (__VlefExpr_2) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_recorders_by_id.erase(vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder
                                                                                .at(
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder>{this}));
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_recorders_by_id.at(unnamedblk1__DOT__handle) 
            = VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder>{this};
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder.at(
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder>{this}) 
            = unnamedblk1__DOT__handle;
        get_handle__Vfuncrtn = unnamedblk1__DOT__handle;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_field(vlSymsp, name, value, size, radix);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_int(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_int\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_field_int(vlSymsp, name, value, size, radix);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_real(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_real\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_field_real(vlSymsp, name, value);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_object(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_object\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_object(vlProcess, vlSymsp, name, value);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_string(vlSymsp, name, value);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_time(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_time\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_time(vlSymsp, name, value);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_generic(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_generic\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_generic(vlSymsp, name, value, type_name);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_use_record_attribute(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &use_record_attribute__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_use_record_attribute\n"); );
    // Body
    use_record_attribute__Vfuncrtn = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_record_attribute_handle(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_record_attribute_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_record_attribute_handle\n"); );
    // Body
    get_record_attribute_handle__Vfuncrtn = 0;
    this->__VnoInFunc_get_handle(vlSymsp, get_record_attribute_handle__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_open(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_open\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_close(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_close\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_free(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_free\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_int(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_int\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_real(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_real\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_object(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_object\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_string(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_string\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_time(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_time\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_generic(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_generic\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_open_file(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_open_file\n"); );
    // Body
    open_file__Vfuncrtn = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_create_stream(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_create_stream\n"); );
    // Body
    create_stream__Vfuncrtn = 0xffffffffU;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_set_attribute(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_set_attribute\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_attribute(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*31:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_attribute\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_check_handle_kind(Vuvm_pkg__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_check_handle_kind\n"); );
    // Body
    check_handle_kind__Vfuncrtn = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_begin_tr(Vuvm_pkg__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_begin_tr\n"); );
    // Body
    begin_tr__Vfuncrtn = 0xffffffffU;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_end_tr(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_end_tr\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_link_tr(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_link_tr\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free_tr(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free_tr\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_warn_null_stream = 0;
    __PVT__m_is_opened = 0;
    __PVT__m_is_closed = 0;
    __PVT__m_open_time = VL_SCOPED_RAND_RESET_Q(64, 14110915553244549694ULL, 6023116248236803926ull);
    __PVT__m_close_time = VL_SCOPED_RAND_RESET_Q(64, 14110915553244549694ULL, 5696291924415242857ull);
    __PVT__recording_depth = 0;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::~Vuvm_pkg_uvm_pkg__03a__03auvm_recorder() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_recorder::~\n"); );
}
