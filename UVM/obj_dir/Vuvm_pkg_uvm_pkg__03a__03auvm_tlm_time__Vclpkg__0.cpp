// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time__Vclpkg::__VnoInFunc_set_time_resolution(Vuvm_pkg__Syms* __restrict vlSymsp, double res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time__Vclpkg::__VnoInFunc_set_time_resolution\n"); );
    // Body
    this->__PVT__m_resolution = res;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::init(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, double res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_name = name;
    this->__PVT__m_res = ((0.0 == res) ? vlSymsp->TOP__uvm_pkg__03a__03auvm_tlm_time__Vclpkg.__PVT__m_resolution
                           : res);
    {
        // Inlined CFunc: __VnoInFunc_reset
        this->__PVT__m_time = 0ULL;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT__m_name;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_reset\n"); );
    // Body
    this->__PVT__m_time = 0ULL;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_to_m_res(Vuvm_pkg__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs, double &to_m_res__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_to_m_res\n"); );
    // Body
    to_m_res__Vfuncrtn = ((t / VL_ITOR_D_Q(64, scaled)) 
                          * (secs / this->__PVT__m_res));
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_realtime(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ scaled, double secs, double &get_realtime__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_realtime\n"); );
    // Body
    get_realtime__Vfuncrtn = (((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                * VL_ITOR_D_Q(64, scaled)) 
                               * this->__PVT__m_res) 
                              / secs);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_incr(Vuvm_pkg__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_incr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__5__verbosity;
    __Vtask_uvm_report_error__5__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__5__line;
    __Vtask_uvm_report_error__5__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__5__report_enabled_checked;
    __Vtask_uvm_report_error__5__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__verbosity;
    __Vfunc_uvm_report_enabled__9__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__9__severity;
    __Vfunc_uvm_report_enabled__9__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__13__verbosity;
    __Vtask_uvm_report_fatal__13__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__13__line;
    __Vtask_uvm_report_fatal__13__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__13__report_enabled_checked;
    __Vtask_uvm_report_fatal__13__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    double __VlefCall_2__to_m_res;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((t < 0.0)) {
            this->__Vfunc_uvm_report_enabled__1__id = "UVM/TLM/TIMENEG"s;
            __Vfunc_uvm_report_enabled__1__severity = 2U;
            __Vfunc_uvm_report_enabled__1__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__2__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__3__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__5__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__5__context_name = ""s;
                __Vtask_uvm_report_error__5__line = 0x0000007bU;
                this->__Vtask_uvm_report_error__5__filename = "../../uvm/distrib/src/tlm2/uvm_tlm2_time.svh"s;
                __Vtask_uvm_report_error__5__verbosity = 0U;
                this->__Vtask_uvm_report_error__5__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot increment uvm_tlm_time variable "s, this->__PVT__m_name), " by a negative value"s));
                this->__Vtask_uvm_report_error__5__id = "UVM/TLM/TIMENEG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__6__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__6__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__7__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__5__id, this->__Vtask_uvm_report_error__5__message, __Vtask_uvm_report_error__5__verbosity, this->__Vtask_uvm_report_error__5__filename, __Vtask_uvm_report_error__5__line, this->__Vtask_uvm_report_error__5__context_name, (IData)(__Vtask_uvm_report_error__5__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((0ULL == scaled)) {
            this->__Vfunc_uvm_report_enabled__9__id = "UVM/TLM/BADSCALE"s;
            __Vfunc_uvm_report_enabled__9__severity = 3U;
            __Vfunc_uvm_report_enabled__9__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__9__verbosity, (IData)(__Vfunc_uvm_report_enabled__9__severity), this->__Vfunc_uvm_report_enabled__9__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__13__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__13__context_name = ""s;
                __Vtask_uvm_report_fatal__13__line = 0x00000080U;
                this->__Vtask_uvm_report_fatal__13__filename = "../../uvm/distrib/src/tlm2/uvm_tlm2_time.svh"s;
                __Vtask_uvm_report_fatal__13__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__13__message = "uvm_tlm_time::incr() called with a scaled time literal that is smaller than the current timescale"s;
                this->__Vtask_uvm_report_fatal__13__id = "UVM/TLM/BADSCALE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__14__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__14__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__15__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__13__id, this->__Vtask_uvm_report_fatal__13__message, __Vtask_uvm_report_fatal__13__verbosity, this->__Vtask_uvm_report_fatal__13__filename, __Vtask_uvm_report_fatal__13__line, this->__Vtask_uvm_report_fatal__13__context_name, (IData)(__Vtask_uvm_report_fatal__13__report_enabled_checked));
            }
        }
        this->__VnoInFunc_to_m_res(vlSymsp, t, scaled, secs, __VlefCall_2__to_m_res);
        this->__PVT__m_time = VL_RTOIROUND_Q_D((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                                + __VlefCall_2__to_m_res));
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_decr(Vuvm_pkg__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_decr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__verbosity;
    __Vfunc_uvm_report_enabled__18__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__18__severity;
    __Vfunc_uvm_report_enabled__18__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__22__verbosity;
    __Vtask_uvm_report_error__22__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__22__line;
    __Vtask_uvm_report_error__22__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__22__report_enabled_checked;
    __Vtask_uvm_report_error__22__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__verbosity;
    __Vfunc_uvm_report_enabled__26__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__26__severity;
    __Vfunc_uvm_report_enabled__26__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__30__verbosity;
    __Vtask_uvm_report_fatal__30__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__30__line;
    __Vtask_uvm_report_fatal__30__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__30__report_enabled_checked;
    __Vtask_uvm_report_fatal__30__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__35__verbosity;
    __Vfunc_uvm_report_enabled__35__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__35__severity;
    __Vfunc_uvm_report_enabled__35__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__36__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__37__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__39__verbosity;
    __Vtask_uvm_report_error__39__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__39__line;
    __Vtask_uvm_report_error__39__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__39__report_enabled_checked;
    __Vtask_uvm_report_error__39__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__40__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__41__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    double __VlefCall_2__to_m_res;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((t < 0.0)) {
            this->__Vfunc_uvm_report_enabled__18__id = "UVM/TLM/TIMENEG"s;
            __Vfunc_uvm_report_enabled__18__severity = 2U;
            __Vfunc_uvm_report_enabled__18__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__18__verbosity, (IData)(__Vfunc_uvm_report_enabled__18__severity), this->__Vfunc_uvm_report_enabled__18__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__22__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__22__context_name = ""s;
                __Vtask_uvm_report_error__22__line = 0x00000095U;
                this->__Vtask_uvm_report_error__22__filename = "../../uvm/distrib/src/tlm2/uvm_tlm2_time.svh"s;
                __Vtask_uvm_report_error__22__verbosity = 0U;
                this->__Vtask_uvm_report_error__22__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot decrement uvm_tlm_time variable "s, this->__PVT__m_name), " by a negative value"s));
                this->__Vtask_uvm_report_error__22__id = "UVM/TLM/TIMENEG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__23__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__23__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__24__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__22__id, this->__Vtask_uvm_report_error__22__message, __Vtask_uvm_report_error__22__verbosity, this->__Vtask_uvm_report_error__22__filename, __Vtask_uvm_report_error__22__line, this->__Vtask_uvm_report_error__22__context_name, (IData)(__Vtask_uvm_report_error__22__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((0ULL == scaled)) {
            this->__Vfunc_uvm_report_enabled__26__id = "UVM/TLM/BADSCALE"s;
            __Vfunc_uvm_report_enabled__26__severity = 3U;
            __Vfunc_uvm_report_enabled__26__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__27__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__27__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__28__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__26__verbosity, (IData)(__Vfunc_uvm_report_enabled__26__severity), this->__Vfunc_uvm_report_enabled__26__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__30__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__30__context_name = ""s;
                __Vtask_uvm_report_fatal__30__line = 0x0000009aU;
                this->__Vtask_uvm_report_fatal__30__filename = "../../uvm/distrib/src/tlm2/uvm_tlm2_time.svh"s;
                __Vtask_uvm_report_fatal__30__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__30__message = "uvm_tlm_time::decr() called with a scaled time literal that is smaller than the current timescale"s;
                this->__Vtask_uvm_report_fatal__30__id = "UVM/TLM/BADSCALE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__30__id, this->__Vtask_uvm_report_fatal__30__message, __Vtask_uvm_report_fatal__30__verbosity, this->__Vtask_uvm_report_fatal__30__filename, __Vtask_uvm_report_fatal__30__line, this->__Vtask_uvm_report_fatal__30__context_name, (IData)(__Vtask_uvm_report_fatal__30__report_enabled_checked));
            }
        }
        this->__VnoInFunc_to_m_res(vlSymsp, t, scaled, secs, __VlefCall_2__to_m_res);
        this->__PVT__m_time = VL_RTOIROUND_Q_D((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                                - __VlefCall_2__to_m_res));
        if ((VL_ITOR_D_Q(64, this->__PVT__m_time) < 0.0)) {
            this->__Vfunc_uvm_report_enabled__35__id = "UVM/TLM/TOODECR"s;
            __Vfunc_uvm_report_enabled__35__severity = 2U;
            __Vfunc_uvm_report_enabled__35__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__36__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__36__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__37__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__37__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__35__verbosity, (IData)(__Vfunc_uvm_report_enabled__35__severity), this->__Vfunc_uvm_report_enabled__35__id, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                __Vtask_uvm_report_error__39__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__39__context_name = ""s;
                __Vtask_uvm_report_error__39__line = 0x000000a0U;
                this->__Vtask_uvm_report_error__39__filename = "../../uvm/distrib/src/tlm2/uvm_tlm2_time.svh"s;
                __Vtask_uvm_report_error__39__verbosity = 0U;
                this->__Vtask_uvm_report_error__39__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot decrement uvm_tlm_time variable "s, this->__PVT__m_name), " to a negative value"s));
                this->__Vtask_uvm_report_error__39__id = "UVM/TLM/TOODECR"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__40__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__40__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__41__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__41__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__39__id, this->__Vtask_uvm_report_error__39__message, __Vtask_uvm_report_error__39__verbosity, this->__Vtask_uvm_report_error__39__filename, __Vtask_uvm_report_error__39__line, this->__Vtask_uvm_report_error__39__context_name, (IData)(__Vtask_uvm_report_error__39__report_enabled_checked));
            }
            {
                // Inlined CFunc: __VnoInFunc_reset
                this->__PVT__m_time = 0ULL;
            }
        }
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_abstime(Vuvm_pkg__Syms* __restrict vlSymsp, double secs, double &get_abstime__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_abstime\n"); );
    // Body
    get_abstime__Vfuncrtn = ((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                              * this->__PVT__m_res) 
                             / secs);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_set_abstime(Vuvm_pkg__Syms* __restrict vlSymsp, double t, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_set_abstime\n"); );
    // Body
    this->__PVT__m_time = VL_RTOIROUND_Q_D(((t * secs) 
                                            / this->__PVT__m_res));
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_time::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_res = 0;
    __PVT__m_time = VL_SCOPED_RAND_RESET_Q(64, 2519606764001584816ULL, 8253044889826645110ull);
}
