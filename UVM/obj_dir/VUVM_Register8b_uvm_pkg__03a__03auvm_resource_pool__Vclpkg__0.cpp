// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__rp)) {
        this->__PVT__rp = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__rp;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> __VlefCall_1__new;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk5__DOT__i;
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    IData/*31:0*/ unnamedblk6__DOT__i__Vnext;
    unnamedblk6__DOT__i__Vnext = 0;
    CData/*0:0*/ unnamedblk6__DOT__i__Vmore;
    unnamedblk6__DOT__i__Vmore = 0;
    IData/*31:0*/ unnamedblk6__DOT__unnamedblk7__DOT__j;
    VlAssocArray<IData/*31:0*/, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5>> all;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> r;
    all.clear();
    unnamedblk5__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 957)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk5__DOT__i, __VlefCall_0__size))) break;
        VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 958)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk5__DOT__i, r);
        if ((! all.exists(VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 959)
                          ->__PVT__precedence))) {
            __VlefCall_1__new = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
            all.at(VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 960)
                   ->__PVT__precedence) = __VlefCall_1__new;
        }
        VL_NULL_CHECK(all.at(VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 961)
                             ->__PVT__precedence), "../../uvm/distrib/src/base/uvm_resource.svh", 961)->__VnoInFunc_push_front(vlSymsp, r);
        unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
    }
    VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 963)->__VnoInFunc_delete(vlProcess, vlSymsp, 0xffffffffU);
    unnamedblk6__DOT__i__Vmore = (0U != all.first(unnamedblk6__DOT__i__Vnext));
    while (unnamedblk6__DOT__i__Vmore) {
        unnamedblk6__DOT__i = unnamedblk6__DOT__i__Vnext;
        unnamedblk6__DOT__i__Vmore = (0U != all.next(unnamedblk6__DOT__i__Vnext));
        unnamedblk6__DOT__unnamedblk7__DOT__j = 0U;
        unnamedblk6__DOT__unnamedblk7__DOT__j = 0U;
        while (true) {
            VL_NULL_CHECK(all.at(unnamedblk6__DOT__i), "../../uvm/distrib/src/base/uvm_resource.svh", 965)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk6__DOT__unnamedblk7__DOT__j, __VlefCall_2__size))) break;
            VL_NULL_CHECK(all.at(unnamedblk6__DOT__i), "../../uvm/distrib/src/base/uvm_resource.svh", 966)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk6__DOT__unnamedblk7__DOT__j, r);
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 967)->__VnoInFunc_push_front(vlSymsp, r);
            unnamedblk6__DOT__unnamedblk7__DOT__j = 
                ((IData)(1U) + unnamedblk6__DOT__unnamedblk7__DOT__j);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::init(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_spell_check(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &spell_check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_spell_check\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_check__0__Vfuncout;
    __Vfunc_check__0__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    spell_check__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_spell_chkr__Tz13__Vclpkg.__VnoInFunc_check(vlProcess, vlSymsp, this->__PVT__rtab, s, __Vfunc_check__0__Vfuncout);
    spell_check__Vfuncrtn = __Vfunc_check__0__Vfuncout;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc, CData/*1:0*/ __SYM__override) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    std::string name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle;
    {
        name = ""s;
        if ((VlNull{} == rsrc)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "../../uvm/distrib/src/base/uvm_resource.svh", 727)->__VnoInFunc_get_name(vlSymsp, name);
        if ((""s != name)) {
            if (this->__PVT__rtab.exists(name)) {
                rq = this->__PVT__rtab.at(name);
            } else {
                rq = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
            }
            if ((0U != (2U & (IData)(__SYM__override)))) {
                VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 738)->__VnoInFunc_push_front(vlSymsp, rsrc);
            } else {
                VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 740)->__VnoInFunc_push_back(vlSymsp, rsrc);
            }
            this->__PVT__rtab.at(name) = rq;
        }
        VL_NULL_CHECK(rsrc, "../../uvm/distrib/src/base/uvm_resource.svh", 746)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, type_handle);
        if (this->__PVT__ttab.exists(type_handle)) {
            rq = this->__PVT__ttab.at(type_handle);
        } else {
            rq = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
        }
        if ((0U != (1U & (IData)(__SYM__override)))) {
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 756)->__VnoInFunc_push_front(vlSymsp, rsrc);
        } else {
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 758)->__VnoInFunc_push_back(vlSymsp, rsrc);
        }
        this->__PVT__ttab.at(type_handle) = rq;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_override(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_set(vlProcess, vlSymsp, rsrc, 3U);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_name_override(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_name_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_set(vlProcess, vlSymsp, rsrc, 2U);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_type_override(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_type_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_set(vlProcess, vlSymsp, rsrc, 1U);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_push_get_record(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string scope, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_push_get_record\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__is_auditing;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03aget_t> impt;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VlefCall_0__is_auditing);
        if ((1U & (~ (IData)(__VlefCall_0__is_auditing)))) {
            goto __Vlabel0;
        }
        impt = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03aget_t, vlSymsp);
        VL_NULL_CHECK(impt, "../../uvm/distrib/src/base/uvm_resource.svh", 809)->__PVT__name 
            = name;
        VL_NULL_CHECK(impt, "../../uvm/distrib/src/base/uvm_resource.svh", 810)->__PVT__scope 
            = scope;
        VL_NULL_CHECK(impt, "../../uvm/distrib/src/base/uvm_resource.svh", 811)->__PVT__rsrc 
            = rsrc;
        VL_NULL_CHECK(impt, "../../uvm/distrib/src/base/uvm_resource.svh", 812)->__PVT__t 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        this->__PVT__get_record.push_back(impt);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump_get_records(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump_get_records\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__19__verbosity;
    __Vtask_uvm_report_info__19__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__19__line;
    __Vtask_uvm_report_info__19__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__19__report_enabled_checked;
    __Vtask_uvm_report_info__19__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03aget_t> record;
    CData/*0:0*/ success;
    VlQueue<std::string> qs;
    success = 0U;
    qs.clear();
    qs.atDefault().clear();
    qs.push_back("--- resource get records ---\n"s);
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__get_record.size())) {
        record = this->__PVT__get_record.at(unnamedblk1__DOT__i);
        success = (VlNull{} != VL_NULL_CHECK(record, "../../uvm/distrib/src/base/uvm_resource.svh", 830)
                   ->__PVT__rsrc);
        __Vtemp_1 = VL_NULL_CHECK(record, "../../uvm/distrib/src/base/uvm_resource.svh", 832)
            ->__PVT__name;
        __Vtemp_2 = VL_NULL_CHECK(record, "../../uvm/distrib/src/base/uvm_resource.svh", 832)
            ->__PVT__scope;
        qs.push_back(VL_SFORMATF_N_NX("get: name=%s  scope=%s  %s @ %0t\n",5, 'T',-12
                                      , 'S',&(__Vtemp_1)
                                      , 'S',&(__Vtemp_2)
                                      , '#',56,((IData)(success)
                                                 ? 0x0073756363657373ULL
                                                 : 0x000000006661696cULL)
                                      , '#',64,VL_NULL_CHECK(record, "../../uvm/distrib/src/base/uvm_resource.svh", 834)
                                      ->__PVT__t) );
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    this->__Vfunc_uvm_report_enabled__14__id = "UVM/RESOURCE/GETRECORD"s;
    __Vfunc_uvm_report_enabled__14__severity = 0U;
    __Vfunc_uvm_report_enabled__14__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__15__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__15__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__16__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), this->__Vfunc_uvm_report_enabled__14__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__Vfunc_m_uvm_string_queue_join__18__Vfuncout = ""s;
        this->__Vfunc_m_uvm_string_queue_join__18__Vfuncout 
            = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, qs, 1U));
        __VlefCall_1__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__18__Vfuncout;
        __Vtask_uvm_report_info__19__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__19__context_name = ""s;
        __Vtask_uvm_report_info__19__line = 0x00000344U;
        this->__Vtask_uvm_report_info__19__filename = "../../uvm/distrib/src/base/uvm_resource.svh"s;
        __Vtask_uvm_report_info__19__verbosity = 0U;
        this->__Vtask_uvm_report_info__19__message 
            = VL_CVT_PACK_STR_NN(__VlefCall_1__m_uvm_string_queue_join);
        this->__Vtask_uvm_report_info__19__id = "UVM/RESOURCE/GETRECORD"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__20__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__20__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__21__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__19__id, this->__Vtask_uvm_report_info__19__message, __Vtask_uvm_report_info__19__verbosity, this->__Vtask_uvm_report_info__19__filename, __Vtask_uvm_report_info__19__line, this->__Vtask_uvm_report_info__19__context_name, (IData)(__Vtask_uvm_report_info__19__report_enabled_checked));
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_name\n"); );
    // Locals
    CData/*0:0*/ __Vtask_spell_check__27__Vfuncout;
    __Vtask_spell_check__27__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogOr_2;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> __VlefCall_1__get_type_handle;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<VUVM_Register8b_std__03a__03aprocess> unnamedblk2__DOT__p;
    std::string unnamedblk2__DOT__s;
    IData/*31:0*/ unnamedblk3__DOT__i;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> q;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> r;
    {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk2__DOT__p);
        unnamedblk2__DOT__s = ""s;
        if ((VlNull{} != unnamedblk2__DOT__p)) {
            VL_NULL_CHECK(unnamedblk2__DOT__p, "../../uvm/distrib/src/base/uvm_resource.svh", 881)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk2__DOT__s);
        }
        q = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
        if ((VlNull{} != unnamedblk2__DOT__p)) {
            VL_NULL_CHECK(unnamedblk2__DOT__p, "../../uvm/distrib/src/base/uvm_resource.svh", 883)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk2__DOT__s);
        }
        if ((""s == name)) {
            lookup_name__Vfuncrtn = q;
            goto __Vlabel0;
        }
        if ((! this->__PVT__rtab.exists(name))) {
            if (rpterr) {
                this->__VnoInFunc_spell_check(vlProcess, vlSymsp, name, __Vtask_spell_check__27__Vfuncout);
            }
            lookup_name__Vfuncrtn = q;
            goto __Vlabel0;
        }
        rq = this->__PVT__rtab.at(name);
        unnamedblk3__DOT__i = 0U;
        unnamedblk3__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 900)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk3__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 901)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__i, r);
            __VlefLogOr_2 = (VlNull{} == type_handle);
            if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 903)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, __VlefCall_1__get_type_handle);
                __VlefLogOr_2 = (__VlefCall_1__get_type_handle 
                                 == type_handle);
            }
            if (__VlefLogOr_2) {
                VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 904)->__VnoInFunc_match_scope(vlSymsp, scope, __VlefLogOr_2);
            }
            if (__VlefLogOr_2) {
                VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 905)->__VnoInFunc_push_back(vlSymsp, r);
            }
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        }
        lookup_name__Vfuncrtn = q;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &q, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_highest_precedence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk4__DOT__i;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ prec;
    {
        prec = 0U;
        VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 926)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 930)->__VnoInFunc_get(vlProcess, vlSymsp, 0U, rsrc);
        prec = VL_NULL_CHECK(rsrc, "../../uvm/distrib/src/base/uvm_resource.svh", 931)
            ->__PVT__precedence;
        unnamedblk4__DOT__i = 0U;
        unnamedblk4__DOT__i = 1U;
        while (true) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 934)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            if (!(VL_LTS_III(32, unnamedblk4__DOT__i, __VlefCall_1__size))) break;
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 935)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk4__DOT__i, r);
            if ((VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 936)
                 ->__PVT__precedence > prec)) {
                rsrc = r;
                prec = VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 938)
                    ->__PVT__precedence;
            }
            unnamedblk4__DOT__i = ((IData)(1U) + unnamedblk4__DOT__i);
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_name\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> __Vfunc_get_highest_precedence__40__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> q;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        this->__VnoInFunc_lookup_name(vlProcess, vlSymsp, scope, name, type_handle, rpterr, q);
        VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 992)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            this->__VnoInFunc_push_get_record(vlSymsp, name, scope, VlNull{});
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, q, __Vfunc_get_highest_precedence__40__Vfuncout);
        rsrc = __Vfunc_get_highest_precedence__40__Vfuncout;
        this->__VnoInFunc_push_get_record(vlSymsp, name, scope, rsrc);
        get_by_name__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_type(VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__match_scope;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk8__DOT__i;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> q;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> r;
    {
        q = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
        if (((VlNull{} == type_handle) | (! this->__PVT__ttab.exists(type_handle)))) {
            lookup_type__Vfuncrtn = q;
            goto __Vlabel0;
        }
        rq = this->__PVT__ttab.at(type_handle);
        unnamedblk8__DOT__i = 0U;
        unnamedblk8__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 1023)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk8__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 1024)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk8__DOT__i, r);
            VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 1025)->__VnoInFunc_match_scope(vlSymsp, scope, __VlefCall_1__match_scope);
            if (__VlefCall_1__match_scope) {
                VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1026)->__VnoInFunc_push_back(vlSymsp, r);
            }
            unnamedblk8__DOT__i = ((IData)(1U) + unnamedblk8__DOT__i);
        }
        lookup_type__Vfuncrtn = q;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_type(VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> q;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        this->__VnoInFunc_lookup_type(vlSymsp, scope, type_handle, q);
        VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1046)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            this->__VnoInFunc_push_get_record(vlSymsp, "<type>"s, scope, VlNull{});
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1051)->__VnoInFunc_get(vlProcess, vlSymsp, 0U, rsrc);
        this->__VnoInFunc_push_get_record(vlSymsp, "<type>"s, scope, rsrc);
        get_by_type__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex_names(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_regex_names__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex_names\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_lookup_name(vlProcess, vlSymsp, scope, name, type_handle, 0U, lookup_regex_names__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex(VUVM_Register8b__Syms* __restrict vlSymsp, std::string re, std::string scope, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_regex__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_re_match__55____Vincrement1;
    __Vfunc_uvm_re_match__55____Vincrement1 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_2__match_scope;
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__uvm_re_match;
    std::string unnamedblk9__DOT__name;
    std::string unnamedblk9__DOT__name__Vnext;
    CData/*0:0*/ unnamedblk9__DOT__name__Vmore;
    unnamedblk9__DOT__name__Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> result_q;
    IData/*31:0*/ i;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> r;
    i = 0U;
    this->__Vfunc_uvm_glob_to_re__53__glob = re;
    re = this->__Vfunc_uvm_glob_to_re__53__glob;
    result_q = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
    unnamedblk9__DOT__name__Vmore = (0U != this->__PVT__rtab.first(unnamedblk9__DOT__name__Vnext));
    while (unnamedblk9__DOT__name__Vmore) {
        unnamedblk9__DOT__name = unnamedblk9__DOT__name__Vnext;
        unnamedblk9__DOT__name__Vmore = (0U != this->__PVT__rtab.next(unnamedblk9__DOT__name__Vnext));
        {
            this->__Vfunc_uvm_re_match__55__str = unnamedblk9__DOT__name;
            this->__Vfunc_uvm_re_match__55__re = re;
            __Vfunc_uvm_re_match__55____Vincrement1 = 0U;
            {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__55__re))) {
                    __VlefCall_0__uvm_re_match = 0U;
                    goto __Vlabel1;
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__55__re,0U))) {
                    this->__Vfunc_uvm_re_match__55__re 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__55__re,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__55__re) 
                                       - (IData)(1U)));
                }
                while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__55__str)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__55__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__55__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__55__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__55__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __VlefCall_0__uvm_re_match = 1U;
                        goto __Vlabel1;
                    }
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                }
                while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__55__str))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__55__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__55__re))) {
                            __VlefCall_0__uvm_re_match = 0U;
                            goto __Vlabel1;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__55__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__55__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__55__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                        __Vfunc_uvm_re_match__55____Vincrement1 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = __Vfunc_uvm_re_match__55____Vincrement1;
                    }
                }
                while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__55__re)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__55__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                }
                __VlefCall_0__uvm_re_match = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                               == VL_LEN_IN(this->__Vfunc_uvm_re_match__55__re))
                                               ? 0U
                                               : 1U);
                __Vlabel1: ;
            }
            if ((0U != __VlefCall_0__uvm_re_match)) {
                goto __Vlabel0;
            }
            rq = this->__PVT__rtab.at(unnamedblk9__DOT__name);
            i = 0U;
            while (true) {
                VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 1090)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
                if (!((i < __VlefCall_1__size))) break;
                VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 1091)->__VnoInFunc_get(vlProcess, vlSymsp, i, r);
                VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 1092)->__VnoInFunc_match_scope(vlSymsp, scope, __VlefCall_2__match_scope);
                if (__VlefCall_2__match_scope) {
                    VL_NULL_CHECK(result_q, "../../uvm/distrib/src/base/uvm_resource.svh", 1093)->__VnoInFunc_push_back(vlSymsp, r);
                }
                i = ((IData)(1U) + i);
            }
            __Vlabel0: ;
        }
    }
    lookup_regex__Vfuncrtn = result_q;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_scope(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_scope\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefCall_2__match_scope;
    IData/*31:0*/ __VlefCall_1__size;
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk10__DOT__i;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> r;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> q;
    std::string name;
    q = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
    name = ""s;
    __VlefExpr_0 = (0U != this->__PVT__rtab.last(name));
    if (__VlefExpr_0) {
        do {
            rq = this->__PVT__rtab.at(name);
            unnamedblk10__DOT__i = 0U;
            unnamedblk10__DOT__i = 0U;
            while (true) {
                VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 1125)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
                if (!(VL_LTS_III(32, unnamedblk10__DOT__i, __VlefCall_1__size))) break;
                VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 1126)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk10__DOT__i, r);
                VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 1127)->__VnoInFunc_match_scope(vlSymsp, scope, __VlefCall_2__match_scope);
                if (__VlefCall_2__match_scope) {
                    VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1128)->__VnoInFunc_push_back(vlSymsp, r);
                }
                unnamedblk10__DOT__i = ((IData)(1U) 
                                        + unnamedblk10__DOT__i);
            }
            __VlefExpr_3 = (0U != this->__PVT__rtab.prev(name));
        } while (__VlefExpr_3);
    }
    lookup_scope__Vfuncrtn = q;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_queue(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &q, IData/*31:0*/ &pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_queue\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__68__verbosity;
    __Vtask_uvm_report_error__68__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__68__line;
    __Vtask_uvm_report_error__68__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__68__report_enabled_checked;
    __Vtask_uvm_report_error__68__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__69__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__70__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ i;
    std::string msg;
    std::string name;
    {
        i = 0U;
        msg = ""s;
        VL_NULL_CHECK(rsrc, "../../uvm/distrib/src/base/uvm_resource.svh", 1165)->__VnoInFunc_get_name(vlSymsp, name);
        i = 0U;
        {
            while (true) {
                VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1167)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
                if (!((i < __VlefCall_0__size))) break;
                VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1168)->__VnoInFunc_get(vlProcess, vlSymsp, i, r);
                if ((r == rsrc)) {
                    goto __Vlabel1;
                }
                i = ((IData)(1U) + i);
            }
            __Vlabel1: ;
        }
        if ((r != rsrc)) {
            VL_SFORMAT_NX(msg,"Handle for resource named %s is not in the name name; cannot change its priority",1
                          , 'S',&(name));
            __Vtask_uvm_report_error__68__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__68__context_name = ""s;
            __Vtask_uvm_report_error__68__line = 0U;
            this->__Vtask_uvm_report_error__68__filename = ""s;
            __Vtask_uvm_report_error__68__verbosity = 0x00000064U;
            this->__Vtask_uvm_report_error__68__message 
                = msg;
            this->__Vtask_uvm_report_error__68__id = "NORSRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__69__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__69__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__70__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__70__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__68__id, this->__Vtask_uvm_report_error__68__message, __Vtask_uvm_report_error__68__verbosity, this->__Vtask_uvm_report_error__68__filename, __Vtask_uvm_report_error__68__line, this->__Vtask_uvm_report_error__68__context_name, (IData)(__Vtask_uvm_report_error__68__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1178)->__VnoInFunc_delete(vlProcess, vlSymsp, i);
        if ((0U == pri)) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1181)->__VnoInFunc_push_front(vlSymsp, rsrc);
        } else if ((1U == pri)) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1182)->__VnoInFunc_push_back(vlSymsp, rsrc);
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_type\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__75__verbosity;
    __Vtask_uvm_report_warning__75__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__75__line;
    __Vtask_uvm_report_warning__75__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__75__report_enabled_checked;
    __Vtask_uvm_report_warning__75__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__76__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__77__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__81__verbosity;
    __Vtask_uvm_report_error__81__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__81__line;
    __Vtask_uvm_report_error__81__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__81__report_enabled_checked;
    __Vtask_uvm_report_error__81__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__82__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__83__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle;
    std::string msg;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> q;
    {
        msg = ""s;
        if ((VlNull{} == rsrc)) {
            __Vtask_uvm_report_warning__75__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__75__context_name = ""s;
            __Vtask_uvm_report_warning__75__line = 0U;
            this->__Vtask_uvm_report_warning__75__filename = ""s;
            __Vtask_uvm_report_warning__75__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__75__message = "attempting to change the serach priority of a null resource"s;
            this->__Vtask_uvm_report_warning__75__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__76__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__76__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__77__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__77__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__75__id, this->__Vtask_uvm_report_warning__75__message, __Vtask_uvm_report_warning__75__verbosity, this->__Vtask_uvm_report_warning__75__filename, __Vtask_uvm_report_warning__75__line, this->__Vtask_uvm_report_warning__75__context_name, (IData)(__Vtask_uvm_report_warning__75__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "../../uvm/distrib/src/base/uvm_resource.svh", 1206)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, type_handle);
        if ((! this->__PVT__ttab.exists(type_handle))) {
            VL_NULL_CHECK(rsrc, "../../uvm/distrib/src/base/uvm_resource.svh", 1208)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            VL_SFORMAT_NX(msg,"Type handle for resrouce named %s not found in type map; cannot change its search priority",1
                          , 'S',&(__VlefCall_0__get_name));
            __Vtask_uvm_report_error__81__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__81__context_name = ""s;
            __Vtask_uvm_report_error__81__line = 0U;
            this->__Vtask_uvm_report_error__81__filename = ""s;
            __Vtask_uvm_report_error__81__verbosity = 0x00000064U;
            this->__Vtask_uvm_report_error__81__message 
                = msg;
            this->__Vtask_uvm_report_error__81__id = "RNFTYPE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__82__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__82__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__83__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__83__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__81__id, this->__Vtask_uvm_report_error__81__message, __Vtask_uvm_report_error__81__verbosity, this->__Vtask_uvm_report_error__81__filename, __Vtask_uvm_report_error__81__line, this->__Vtask_uvm_report_error__81__context_name, (IData)(__Vtask_uvm_report_error__81__report_enabled_checked));
            goto __Vlabel0;
        }
        q = this->__PVT__ttab.at(type_handle);
        this->__VnoInFunc_set_priority_queue(vlProcess, vlSymsp, rsrc, q, pri);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__86__verbosity;
    __Vtask_uvm_report_warning__86__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__86__line;
    __Vtask_uvm_report_warning__86__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__86__report_enabled_checked;
    __Vtask_uvm_report_warning__86__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__87__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__88__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__91__verbosity;
    __Vtask_uvm_report_error__91__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__91__line;
    __Vtask_uvm_report_error__91__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__91__report_enabled_checked;
    __Vtask_uvm_report_error__91__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string name;
    std::string msg;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> q;
    {
        name = ""s;
        msg = ""s;
        if ((VlNull{} == rsrc)) {
            __Vtask_uvm_report_warning__86__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__86__context_name = ""s;
            __Vtask_uvm_report_warning__86__line = 0U;
            this->__Vtask_uvm_report_warning__86__filename = ""s;
            __Vtask_uvm_report_warning__86__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__86__message = "attempting to change the serach priority of a null resource"s;
            this->__Vtask_uvm_report_warning__86__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__87__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__87__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__88__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__88__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__86__id, this->__Vtask_uvm_report_warning__86__message, __Vtask_uvm_report_warning__86__verbosity, this->__Vtask_uvm_report_warning__86__filename, __Vtask_uvm_report_warning__86__line, this->__Vtask_uvm_report_warning__86__context_name, (IData)(__Vtask_uvm_report_warning__86__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "../../uvm/distrib/src/base/uvm_resource.svh", 1236)->__VnoInFunc_get_name(vlSymsp, name);
        if ((! this->__PVT__rtab.exists(name))) {
            VL_SFORMAT_NX(msg,"Resrouce named %s not found in name map; cannot change its search priority",1
                          , 'S',&(name));
            __Vtask_uvm_report_error__91__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__91__context_name = ""s;
            __Vtask_uvm_report_error__91__line = 0U;
            this->__Vtask_uvm_report_error__91__filename = ""s;
            __Vtask_uvm_report_error__91__verbosity = 0x00000064U;
            this->__Vtask_uvm_report_error__91__message 
                = msg;
            this->__Vtask_uvm_report_error__91__id = "RNFNAME"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__92__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__92__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__93__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__91__id, this->__Vtask_uvm_report_error__91__message, __Vtask_uvm_report_error__91__verbosity, this->__Vtask_uvm_report_error__91__filename, __Vtask_uvm_report_error__91__line, this->__Vtask_uvm_report_error__91__context_name, (IData)(__Vtask_uvm_report_error__91__report_enabled_checked));
            goto __Vlabel0;
        }
        q = this->__PVT__rtab.at(name);
        this->__VnoInFunc_set_priority_queue(vlProcess, vlSymsp, rsrc, q, pri);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_set_priority_type(vlSymsp, rsrc, pri);
    this->__VnoInFunc_set_priority_name(vlProcess, vlSymsp, rsrc, pri);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_find_unused_resources(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &find_unused_resources__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_find_unused_resources\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__size;
    std::string unnamedblk11__DOT__name;
    std::string unnamedblk11__DOT__name__Vnext;
    CData/*0:0*/ unnamedblk11__DOT__name__Vmore;
    unnamedblk11__DOT__name__Vmore = 0;
    IData/*31:0*/ unnamedblk11__DOT__unnamedblk12__DOT__i;
    std::string unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str;
    std::string unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vnext;
    CData/*0:0*/ unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vmore;
    unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> q;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> r;
    VUVM_Register8b_access_t__struct__0 a;
    IData/*31:0*/ reads;
    IData/*31:0*/ writes;
    q = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
    a.__PVT__read_time = 0;
    a.__PVT__write_time = 0;
    a.__PVT__read_count = 0;
    a.__PVT__write_count = 0;
    reads = 0U;
    writes = 0U;
    unnamedblk11__DOT__name__Vmore = (0U != this->__PVT__rtab.first(unnamedblk11__DOT__name__Vnext));
    while (unnamedblk11__DOT__name__Vmore) {
        unnamedblk11__DOT__name = unnamedblk11__DOT__name__Vnext;
        unnamedblk11__DOT__name__Vmore = (0U != this->__PVT__rtab.next(unnamedblk11__DOT__name__Vnext));
        rq = this->__PVT__rtab.at(unnamedblk11__DOT__name);
        unnamedblk11__DOT__unnamedblk12__DOT__i = 0U;
        unnamedblk11__DOT__unnamedblk12__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 1281)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk11__DOT__unnamedblk12__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 1282)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk11__DOT__unnamedblk12__DOT__i, r);
            reads = 0U;
            writes = 0U;
            unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vmore 
                = (0U != VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 1285)
                   ->__PVT__access.first(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vnext));
            while (unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vmore) {
                unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str 
                    = unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vnext;
                unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vmore 
                    = (0U != VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 1285)
                       ->__PVT__access.next(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vnext));
                a = VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 1286)
                    ->__PVT__access.at(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str);
                reads = (reads + a.__PVT__read_count);
                writes = (writes + a.__PVT__write_count);
            }
            if ((VL_LTS_III(32, 0U, writes) & (0U == reads))) {
                VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_resource.svh", 1291)->__VnoInFunc_push_back(vlSymsp, r);
            }
            unnamedblk11__DOT__unnamedblk12__DOT__i 
                = ((IData)(1U) + unnamedblk11__DOT__unnamedblk12__DOT__i);
        }
    }
    find_unused_resources__Vfuncrtn = q;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_print_resources(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> rq, CData/*0:0*/ audit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_print_resources\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__103__verbosity;
    __Vfunc_uvm_report_enabled__103__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__103__severity;
    __Vfunc_uvm_report_enabled__103__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__104__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__105__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__107__verbosity;
    __Vtask_uvm_report_info__107__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__107__line;
    __Vtask_uvm_report_info__107__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__107__report_enabled_checked;
    __Vtask_uvm_report_info__107__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__108__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__109__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__size;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk14__DOT__i;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> r;
    {
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "../../uvm/distrib/src/base/uvm_resource.svh", 1314)
                      ->__PVT__knobs, "../../uvm/distrib/src/base/uvm_resource.svh", 1314)->__PVT__separator = ""s;
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "../../uvm/distrib/src/base/uvm_resource.svh", 1315)
                      ->__PVT__knobs, "../../uvm/distrib/src/base/uvm_resource.svh", 1315)->__PVT__full_name = 0U;
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "../../uvm/distrib/src/base/uvm_resource.svh", 1316)
                      ->__PVT__knobs, "../../uvm/distrib/src/base/uvm_resource.svh", 1316)->__PVT__identifier = 0U;
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "../../uvm/distrib/src/base/uvm_resource.svh", 1317)
                      ->__PVT__knobs, "../../uvm/distrib/src/base/uvm_resource.svh", 1317)->__PVT__type_name = 0U;
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "../../uvm/distrib/src/base/uvm_resource.svh", 1318)
                      ->__PVT__knobs, "../../uvm/distrib/src/base/uvm_resource.svh", 1318)->__PVT__reference = 0U;
        __VlefLogOr_1 = (VlNull{} == rq);
        if ((1U & (~ (IData)(__VlefLogOr_1)))) {
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 1320)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            __VlefLogOr_1 = (0U == __VlefCall_0__size);
        }
        if (__VlefLogOr_1) {
            this->__Vfunc_uvm_report_enabled__103__id = "UVM/RESOURCE/PRINT"s;
            __Vfunc_uvm_report_enabled__103__severity = 0U;
            __Vfunc_uvm_report_enabled__103__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__104__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__104__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__105__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__105__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__103__verbosity, (IData)(__Vfunc_uvm_report_enabled__103__severity), this->__Vfunc_uvm_report_enabled__103__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                __Vtask_uvm_report_info__107__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__107__context_name = ""s;
                __Vtask_uvm_report_info__107__line = 0x00000529U;
                this->__Vtask_uvm_report_info__107__filename = "../../uvm/distrib/src/base/uvm_resource.svh"s;
                __Vtask_uvm_report_info__107__verbosity = 0U;
                this->__Vtask_uvm_report_info__107__message = "<none>"s;
                this->__Vtask_uvm_report_info__107__id = "UVM/RESOURCE/PRINT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__108__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__108__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__109__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__109__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__107__id, this->__Vtask_uvm_report_info__107__message, __Vtask_uvm_report_info__107__verbosity, this->__Vtask_uvm_report_info__107__filename, __Vtask_uvm_report_info__107__line, this->__Vtask_uvm_report_info__107__context_name, (IData)(__Vtask_uvm_report_info__107__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        unnamedblk14__DOT__i = 0U;
        unnamedblk14__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 1325)->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
            if (!(VL_LTS_III(32, unnamedblk14__DOT__i, __VlefCall_3__size))) break;
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_resource.svh", 1326)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk14__DOT__i, r);
            VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 1327)->__VnoInFunc_print(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer);
            if (audit) {
                VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_resource.svh", 1329)->__VnoInFunc_print_accessors(vlSymsp);
            }
            unnamedblk14__DOT__i = ((IData)(1U) + unnamedblk14__DOT__i);
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ audit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__115__verbosity;
    __Vfunc_uvm_report_enabled__115__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__115__severity;
    __Vfunc_uvm_report_enabled__115__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__116__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__117__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__119__verbosity;
    __Vtask_uvm_report_info__119__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__119__line;
    __Vtask_uvm_report_info__119__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__119__report_enabled_checked;
    __Vtask_uvm_report_info__119__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__120__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__121__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__124__verbosity;
    __Vfunc_uvm_report_enabled__124__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__124__severity;
    __Vfunc_uvm_report_enabled__124__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__125__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__126__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__128__verbosity;
    __Vtask_uvm_report_info__128__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__128__line;
    __Vtask_uvm_report_info__128__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__128__report_enabled_checked;
    __Vtask_uvm_report_info__128__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__129__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__130__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string unnamedblk15__DOT__name;
    std::string unnamedblk15__DOT__name__Vnext;
    CData/*0:0*/ unnamedblk15__DOT__name__Vmore;
    unnamedblk15__DOT__name__Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    this->__Vfunc_uvm_report_enabled__115__id = "UVM/RESOURCE/DUMP"s;
    __Vfunc_uvm_report_enabled__115__severity = 0U;
    __Vfunc_uvm_report_enabled__115__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__116__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__116__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__117__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__117__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__115__verbosity, (IData)(__Vfunc_uvm_report_enabled__115__severity), this->__Vfunc_uvm_report_enabled__115__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_info__119__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__119__context_name = ""s;
        __Vtask_uvm_report_info__119__line = 0x00000543U;
        this->__Vtask_uvm_report_info__119__filename = "../../uvm/distrib/src/base/uvm_resource.svh"s;
        __Vtask_uvm_report_info__119__verbosity = 0U;
        this->__Vtask_uvm_report_info__119__message = "\n=== resource pool ==="s;
        this->__Vtask_uvm_report_info__119__id = "UVM/RESOURCE/DUMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__120__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__120__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__121__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__121__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__119__id, this->__Vtask_uvm_report_info__119__message, __Vtask_uvm_report_info__119__verbosity, this->__Vtask_uvm_report_info__119__filename, __Vtask_uvm_report_info__119__line, this->__Vtask_uvm_report_info__119__context_name, (IData)(__Vtask_uvm_report_info__119__report_enabled_checked));
    }
    unnamedblk15__DOT__name__Vmore = (0U != this->__PVT__rtab.first(unnamedblk15__DOT__name__Vnext));
    while (unnamedblk15__DOT__name__Vmore) {
        unnamedblk15__DOT__name = unnamedblk15__DOT__name__Vnext;
        unnamedblk15__DOT__name__Vmore = (0U != this->__PVT__rtab.next(unnamedblk15__DOT__name__Vnext));
        rq = this->__PVT__rtab.at(unnamedblk15__DOT__name);
        this->__VnoInFunc_print_resources(vlSymsp, rq, audit);
    }
    this->__Vfunc_uvm_report_enabled__124__id = "UVM/RESOURCE/DUMP"s;
    __Vfunc_uvm_report_enabled__124__severity = 0U;
    __Vfunc_uvm_report_enabled__124__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__125__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__125__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__126__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__126__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__124__verbosity, (IData)(__Vfunc_uvm_report_enabled__124__severity), this->__Vfunc_uvm_report_enabled__124__id, __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        __Vtask_uvm_report_info__128__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__128__context_name = ""s;
        __Vtask_uvm_report_info__128__line = 0x0000054aU;
        this->__Vtask_uvm_report_info__128__filename = "../../uvm/distrib/src/base/uvm_resource.svh"s;
        __Vtask_uvm_report_info__128__verbosity = 0U;
        this->__Vtask_uvm_report_info__128__message = "=== end of resource pool ==="s;
        this->__Vtask_uvm_report_info__128__id = "UVM/RESOURCE/DUMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__129__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__129__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__130__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__130__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__128__id, this->__Vtask_uvm_report_info__128__message, __Vtask_uvm_report_info__128__verbosity, this->__Vtask_uvm_report_info__128__filename, __Vtask_uvm_report_info__128__line, this->__Vtask_uvm_report_info__128__context_name, (IData)(__Vtask_uvm_report_info__128__report_enabled_checked));
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
