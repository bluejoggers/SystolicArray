// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg::__VnoInFunc_get_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg::__VnoInFunc_get_by_name\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz5> __Vfunc_get_by_name__0__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__5__verbosity;
    __Vtask_uvm_report_fatal__5__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__5__line;
    __Vtask_uvm_report_fatal__5__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__5__report_enabled_checked;
    __Vtask_uvm_report_fatal__5__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc> t;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource_base> b;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz5__Vclpkg.__VnoInFunc_get_by_name(vlSymsp, scope, name, (IData)(rpterr), __Vfunc_get_by_name__0__Vfuncout);
    b = __Vfunc_get_by_name__0__Vfuncout;
    __VlefExpr_0 = VL_CAST_DYNAMIC(b, t);
    if ((! __VlefExpr_0)) {
        this->__Vfunc_uvm_report_enabled__1__id = "BADCAST"s;
        __Vfunc_uvm_report_enabled__1__severity = 3U;
        __Vfunc_uvm_report_enabled__1__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__2__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            __Vtask_uvm_report_fatal__5__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_fatal__5__context_name = ""s;
            __Vtask_uvm_report_fatal__5__line = 0x00000068U;
            this->__Vtask_uvm_report_fatal__5__filename = "../../uvm/distrib/src/base/uvm_resource_specializations.svh"s;
            __Vtask_uvm_report_fatal__5__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__5__message = "cannot cast resource to resource subtype"s;
            this->__Vtask_uvm_report_fatal__5__id = "BADCAST"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vtask_get_root__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__5__id, this->__Vtask_uvm_report_fatal__5__message, __Vtask_uvm_report_fatal__5__verbosity, this->__Vtask_uvm_report_fatal__5__filename, __Vtask_uvm_report_fatal__5__line, this->__Vtask_uvm_report_fatal__5__context_name, (IData)(__Vtask_uvm_report_fatal__5__report_enabled_checked));
        }
    }
    get_by_name__Vfuncrtn = t;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg::__VnoInFunc_get_by_type(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg::__VnoInFunc_get_by_type\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz5> __Vfunc_get_by_type__9__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__10__verbosity;
    __Vfunc_uvm_report_enabled__10__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__10__severity;
    __Vfunc_uvm_report_enabled__10__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__14__verbosity;
    __Vtask_uvm_report_fatal__14__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__14__line;
    __Vtask_uvm_report_fatal__14__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__14__report_enabled_checked;
    __Vtask_uvm_report_fatal__14__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc> t;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource_base> b;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz5__Vclpkg.__VnoInFunc_get_by_type(vlSymsp, scope, type_handle, __Vfunc_get_by_type__9__Vfuncout);
    b = __Vfunc_get_by_type__9__Vfuncout;
    __VlefExpr_0 = VL_CAST_DYNAMIC(b, t);
    if ((! __VlefExpr_0)) {
        this->__Vfunc_uvm_report_enabled__10__id = "BADCAST"s;
        __Vfunc_uvm_report_enabled__10__severity = 3U;
        __Vfunc_uvm_report_enabled__10__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__11__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__11__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__12__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__10__verbosity, (IData)(__Vfunc_uvm_report_enabled__10__severity), this->__Vfunc_uvm_report_enabled__10__id, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            __Vtask_uvm_report_fatal__14__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_fatal__14__context_name = ""s;
            __Vtask_uvm_report_fatal__14__line = 0x00000068U;
            this->__Vtask_uvm_report_fatal__14__filename = "../../uvm/distrib/src/base/uvm_resource_specializations.svh"s;
            __Vtask_uvm_report_fatal__14__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__14__message = "cannot cast resource to resource subtype"s;
            this->__Vtask_uvm_report_fatal__14__id = "BADCAST"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                = __Vfunc_get__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vtask_get_root__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__14__id, this->__Vtask_uvm_report_fatal__14__message, __Vtask_uvm_report_fatal__14__verbosity, this->__Vtask_uvm_report_fatal__14__filename, __Vtask_uvm_report_fatal__14__line, this->__Vtask_uvm_report_fatal__14__context_name, (IData)(__Vtask_uvm_report_fatal__14__report_enabled_checked));
        }
    }
    get_by_type__Vfuncrtn = t;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, std::string s) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz5::init(vlProcess, vlSymsp, name, s);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    convert2string__Vfuncrtn = ""s;
    this->__VnoInFunc_read(vlProcess, vlSymsp, VlNull{}, convert2string__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::~Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc::~\n"); );
}
