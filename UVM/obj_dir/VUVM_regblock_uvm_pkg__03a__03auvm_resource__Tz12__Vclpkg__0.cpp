// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__my_type)) {
        this->__PVT__my_type = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12, vlProcess, vlSymsp, ""s, ""s);
    }
    get_type__Vfuncrtn = this->__PVT__my_type;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12__Vclpkg::__VnoInFunc_get_by_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12__Vclpkg::__VnoInFunc_get_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__8__verbosity;
    __Vtask_uvm_report_warning__8__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__8__line;
    __Vtask_uvm_report_warning__8__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__8__report_enabled_checked;
    __Vtask_uvm_report_warning__8__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_base> rsrc_base;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12> rsrc;
    std::string msg;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
        msg = ""s;
        VL_NULL_CHECK(rp, "../../uvm/distrib/src/base/uvm_resource.svh", 1522)->__VnoInFunc_get_by_name(vlProcess, vlSymsp, scope, name, this->__PVT__my_type, rpterr, rsrc_base);
        if ((VlNull{} == rsrc_base)) {
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rsrc_base, rsrc);
        if ((! __VlefExpr_0)) {
            if (rpterr) {
                VL_SFORMAT_NX(msg,"Resource with name %s in scope %s has incorrect type",2
                              , 'S',&(name), 'S',&(scope));
                this->__Vfunc_uvm_report_enabled__4__id = "RSRCTYPE"s;
                __Vfunc_uvm_report_enabled__4__severity = 1U;
                __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__5__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__5__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__6__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), this->__Vfunc_uvm_report_enabled__4__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__8__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__8__context_name = ""s;
                    __Vtask_uvm_report_warning__8__line = 0x000005f9U;
                    this->__Vtask_uvm_report_warning__8__filename = "../../uvm/distrib/src/base/uvm_resource.svh"s;
                    __Vtask_uvm_report_warning__8__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__8__message 
                        = msg;
                    this->__Vtask_uvm_report_warning__8__id = "RSRCTYPE"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__9__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__9__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__10__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__8__id, this->__Vtask_uvm_report_warning__8__message, __Vtask_uvm_report_warning__8__verbosity, this->__Vtask_uvm_report_warning__8__filename, __Vtask_uvm_report_warning__8__line, this->__Vtask_uvm_report_warning__8__context_name, (IData)(__Vtask_uvm_report_warning__8__report_enabled_checked));
                }
            }
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_by_name__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12__Vclpkg::__VnoInFunc_get_by_type(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12__Vclpkg::__VnoInFunc_get_by_type\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__verbosity;
    __Vtask_uvm_report_warning__18__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__line;
    __Vtask_uvm_report_warning__18__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__18__report_enabled_checked;
    __Vtask_uvm_report_warning__18__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_base> rsrc_base;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12> rsrc;
    std::string msg;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
        msg = ""s;
        if ((VlNull{} == type_handle)) {
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rp, "../../uvm/distrib/src/base/uvm_resource.svh", 1556)->__VnoInFunc_get_by_type(vlSymsp, scope, type_handle, rsrc_base);
        if ((VlNull{} == rsrc_base)) {
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rsrc_base, rsrc);
        if ((! __VlefExpr_0)) {
            VL_SFORMAT_NX(msg,"Resource with specified type handle in scope %s was not located",1
                          , 'S',&(scope));
            this->__Vfunc_uvm_report_enabled__14__id = "RSRCNF"s;
            __Vfunc_uvm_report_enabled__14__severity = 1U;
            __Vfunc_uvm_report_enabled__14__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), this->__Vfunc_uvm_report_enabled__14__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__18__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__18__context_name = ""s;
                __Vtask_uvm_report_warning__18__line = 0x0000061aU;
                this->__Vtask_uvm_report_warning__18__filename = "../../uvm/distrib/src/base/uvm_resource.svh"s;
                __Vtask_uvm_report_warning__18__verbosity = 0U;
                this->__Vtask_uvm_report_warning__18__message 
                    = msg;
                this->__Vtask_uvm_report_warning__18__id = "RSRCNF"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__19__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__19__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__20__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__18__id, this->__Vtask_uvm_report_warning__18__message, __Vtask_uvm_report_warning__18__verbosity, this->__Vtask_uvm_report_warning__18__filename, __Vtask_uvm_report_warning__18__line, this->__Vtask_uvm_report_warning__18__context_name, (IData)(__Vtask_uvm_report_warning__18__report_enabled_checked));
            }
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_by_type__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12__Vclpkg::__VnoInFunc_get_highest_precedence(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz5> &q, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_7;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_base> __VlefCall_6__get;
    IData/*31:0*/ __VlefCall_5__size;
    CData/*0:0*/ __VlefLogAnd_4;
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_base> __VlefCall_2__get;
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk2__DOT__i;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12> rsrc;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12> r;
    IData/*31:0*/ prec;
    IData/*31:0*/ first;
    {
        prec = 0U;
        first = 0U;
        VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1658)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        first = 0U;
        rsrc = VlNull{};
        prec = 0U;
        first = 0U;
        while (true) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1666)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __VlefLogAnd_4 = (first < __VlefCall_1__size);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1666)->__VnoInFunc_get(vlProcess, vlSymsp, first, __VlefCall_2__get);
                __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__get, rsrc);
                __VlefLogAnd_4 = (! __VlefExpr_3);
            }
            if (!(__VlefLogAnd_4)) break;
            first = ((IData)(1U) + first);
        }
        if ((VlNull{} == rsrc)) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        prec = VL_NULL_CHECK(rsrc, "../../uvm/distrib/src/base/uvm_resource.svh", 1672)
            ->__PVT__precedence;
        unnamedblk2__DOT__i = 0U;
        unnamedblk2__DOT__i = ((IData)(1U) + first);
        while (true) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1676)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
            if (!(VL_LTS_III(32, unnamedblk2__DOT__i, __VlefCall_5__size))) break;
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1677)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__i, __VlefCall_6__get);
            __VlefExpr_7 = VL_CAST_DYNAMIC(__VlefCall_6__get, r);
            if (__VlefExpr_7) {
                if ((VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 1678)
                     ->__PVT__precedence > prec)) {
                    rsrc = r;
                    prec = VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 1680)
                        ->__PVT__precedence;
                }
            }
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, std::string scope) {
    VUVM_regblock_uvm_pkg__03a__03auvm_resource_base::init(vlProcess, vlSymsp, name, scope);
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__5__verbosity;
    __Vtask_uvm_report_warning__5__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__5__line;
    __Vtask_uvm_report_warning__5__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__5__report_enabled_checked;
    __Vtask_uvm_report_warning__5__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1__DOT__i;
    /*super.new*/;
    unnamedblk1__DOT__i = 0U;
    unnamedblk1__DOT__i = 0U;
    {
        while (VL_LTS_III(32, unnamedblk1__DOT__i, 
                          VL_LEN_IN(name))) {
            if ((((((0x2eU == VL_GETC_N(name,unnamedblk1__DOT__i)) 
                    | (0x2fU == VL_GETC_N(name,unnamedblk1__DOT__i))) 
                   | (0x5bU == VL_GETC_N(name,unnamedblk1__DOT__i))) 
                  | (0x2aU == VL_GETC_N(name,unnamedblk1__DOT__i))) 
                 | (0x7bU == VL_GETC_N(name,unnamedblk1__DOT__i)))) {
                this->__Vfunc_uvm_report_enabled__1__id = "UVM/RSRC/NOREGEX"s;
                __Vfunc_uvm_report_enabled__1__severity = 1U;
                __Vfunc_uvm_report_enabled__1__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__2__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__3__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__5__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__5__context_name = ""s;
                    __Vtask_uvm_report_warning__5__line = 0x00000588U;
                    this->__Vtask_uvm_report_warning__5__filename = "../../uvm/distrib/src/base/uvm_resource.svh"s;
                    __Vtask_uvm_report_warning__5__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__5__message
                                  ,"a resource with meta characters in the field name has been created \"%s\"",1
                                  , 'S',&(name));
                    this->__Vtask_uvm_report_warning__5__id = "UVM/RSRC/NOREGEX"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__6__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__6__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__7__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__5__id, this->__Vtask_uvm_report_warning__5__message, __Vtask_uvm_report_warning__5__verbosity, this->__Vtask_uvm_report_warning__5__filename, __Vtask_uvm_report_warning__5__line, this->__Vtask_uvm_report_warning__5__context_name, (IData)(__Vtask_uvm_report_warning__5__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__val);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"(PARAMTYPEDTYPE 'T') %0p",1
                  , '!',&(__Vtemp_1));
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_get_type_handle\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12> __Vfunc_get_type__9__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz12__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__9__Vfuncout);
    get_type_handle__Vfuncrtn = __Vfunc_get_type__9__Vfuncout;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_set(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_set\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    VL_NULL_CHECK(rp, "../../uvm/distrib/src/base/uvm_resource.svh", 1484)->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12>{this}, 0U);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_set_override(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ __SYM__override) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_set_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    VL_NULL_CHECK(rp, "../../uvm/distrib/src/base/uvm_resource.svh", 1499)->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12>{this}, __SYM__override);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_read(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_record_read_access(vlProcess, vlSymsp, accessor);
    read__Vfuncrtn = this->__PVT__val;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_write(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> t, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__17__verbosity;
    __Vtask_uvm_report_error__17__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__17__line;
    __Vtask_uvm_report_error__17__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__17__report_enabled_checked;
    __Vtask_uvm_report_error__17__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__is_read_only;
    {
        this->__VnoInFunc_is_read_only(vlSymsp, __VlefCall_0__is_read_only);
        if (__VlefCall_0__is_read_only) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __Vtask_uvm_report_error__17__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__17__context_name = ""s;
            __Vtask_uvm_report_error__17__line = 0U;
            this->__Vtask_uvm_report_error__17__filename = ""s;
            __Vtask_uvm_report_error__17__verbosity = 0x00000064U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__17__message
                          ,"resource %s is read only -- cannot modify",1
                          , 'S',&(__VlefCall_1__get_name));
            this->__Vtask_uvm_report_error__17__id = "resource"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__17__id, this->__Vtask_uvm_report_error__17__message, __Vtask_uvm_report_error__17__verbosity, this->__Vtask_uvm_report_error__17__filename, __Vtask_uvm_report_error__17__line, this->__Vtask_uvm_report_error__17__context_name, (IData)(__Vtask_uvm_report_error__17__report_enabled_checked));
            goto __Vlabel0;
        }
        if ((this->__PVT__val == t)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_record_write_access(vlProcess, vlSymsp, accessor);
        this->__PVT__val = t;
        VUVM_regblock_uvm_pkg__03a__03auvm_resource_base::__PVT__modified = 1U;
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_set_priority(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_set_priority\n"); );
    // Body
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    VL_NULL_CHECK(rp, "../../uvm/distrib/src/base/uvm_resource.svh", 1640)->__VnoInFunc_set_priority(vlSymsp, 
                                                                                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12>{this}, pri);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::~VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12::~\n"); );
}
