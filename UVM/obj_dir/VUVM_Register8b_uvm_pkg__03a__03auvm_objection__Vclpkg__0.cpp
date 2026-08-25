// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b___024root____VbeforeTrig_h5af0e26d__0(VUVM_Register8b___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_22> unnamedblk5__DOT____VDynScope_unnamedblk5_2;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_23> unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3;
    while (true) {
        while ((0U == this->__PVT__m_scheduled_list.size())) {
            VUVM_Register8b___024root____VbeforeTrig_h5af0e26d__0((&vlSymsp->TOP), 
                                                                  "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
            co_await vlSymsp->TOP.__VtrigSched_h5af0e26d__0.trigger(1U, 
                                                                    vlProcess, 
                                                                    "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))", 
                                                                    "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                    689);
        }
        if ((0U != this->__PVT__m_scheduled_list.size())) {
            unnamedblk5__DOT____VDynScope_unnamedblk5_2 
                = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_22, vlSymsp);
            VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "../../uvm/distrib/src/base/uvm_objection.svh", 694)->__PVT__c 
                = this->__PVT__m_scheduled_list.pop_front();
            VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "../../uvm/distrib/src/base/uvm_objection.svh", 696)
                                        ->__PVT__c, "../../uvm/distrib/src/base/uvm_objection.svh", 696)
                          ->__PVT__objection, "../../uvm/distrib/src/base/uvm_objection.svh", 696)->__PVT__m_scheduled_contexts.at(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "../../uvm/distrib/src/base/uvm_objection.svh", 696)
                                                                                ->__PVT__c, "../../uvm/distrib/src/base/uvm_objection.svh", 696)
                                                                                ->__PVT__obj) 
                = VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "../../uvm/distrib/src/base/uvm_objection.svh", 696)
                ->__PVT__c;
            VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "../../uvm/distrib/src/base/uvm_objection.svh", 698)
                                        ->__PVT__c, "../../uvm/distrib/src/base/uvm_objection.svh", 698)
                          ->__PVT__objection, "../../uvm/distrib/src/base/uvm_objection.svh", 698)->__PVT__m_forked_list.push_back(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "../../uvm/distrib/src/base/uvm_objection.svh", 698)
                                                                                ->__PVT__c);
            unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3 
                = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_23, vlSymsp);
            VL_NULL_CHECK(unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3, "../../uvm/distrib/src/base/uvm_objection.svh", 703)->__PVT__objection 
                = VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "../../uvm/distrib/src/base/uvm_objection.svh", 703)
                                ->__PVT__c, "../../uvm/distrib/src/base/uvm_objection.svh", 703)
                ->__PVT__objection;
            this->__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3);
        }
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_23> unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_23> __Vtask___VforkTask_0__3____VDynScope_guard_3;
    VlClassRef<VUVM_Register8b_std__03a__03aprocess> __Vtask___VforkTask_0__3____VlefCall_0__self;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection_context_object> __Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt;
    VlClassRef<VUVM_Register8b_std__03a__03aprocess> __Vfunc_self__4__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask___VforkTask_0__3____VDynScope_guard_3 = unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/base/uvm_objection.svh", 
                                            702);
    if (VL_LTS_III(32, 0U, VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "../../uvm/distrib/src/base/uvm_objection.svh", 706)
                                         ->__PVT__objection, "../../uvm/distrib/src/base/uvm_objection.svh", 706)
                   ->__PVT__m_forked_list.size())) {
        __Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt 
            = VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "../../uvm/distrib/src/base/uvm_objection.svh", 708)
                            ->__PVT__objection, "../../uvm/distrib/src/base/uvm_objection.svh", 708)
            ->__PVT__m_forked_list.pop_front();
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "../../uvm/distrib/src/base/uvm_objection.svh", 710)
                      ->__PVT__objection, "../../uvm/distrib/src/base/uvm_objection.svh", 710)->__PVT__m_scheduled_contexts.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 710)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "../../uvm/distrib/src/base/uvm_objection.svh", 712)
                      ->__PVT__objection, "../../uvm/distrib/src/base/uvm_objection.svh", 712)->__PVT__m_forked_contexts.at(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 712)
                                                                                ->__PVT__obj) 
            = __Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__4__Vfuncout);
        __Vtask___VforkTask_0__3____VlefCall_0__self 
            = __Vfunc_self__4__Vfuncout;
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "../../uvm/distrib/src/base/uvm_objection.svh", 715)
                      ->__PVT__objection, "../../uvm/distrib/src/base/uvm_objection.svh", 715)->__PVT__m_drain_proc.at(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 715)
                                                                                ->__PVT__obj) 
            = __Vtask___VforkTask_0__3____VlefCall_0__self;
        co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "../../uvm/distrib/src/base/uvm_objection.svh", 723)
                               ->__PVT__objection, "../../uvm/distrib/src/base/uvm_objection.svh", 723)->__VnoInFunc_m_forked_drain(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 723)
                                                                                ->__PVT__obj, VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 723)
                                                                                ->__PVT__source_obj, 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 723)
                                                                                ->__PVT__description), VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 723)
                                                                                ->__PVT__count, 1U);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "../../uvm/distrib/src/base/uvm_objection.svh", 725)
                      ->__PVT__objection, "../../uvm/distrib/src/base/uvm_objection.svh", 725)->__PVT__m_drain_proc.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 725)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "../../uvm/distrib/src/base/uvm_objection.svh", 726)
                      ->__PVT__objection, "../../uvm/distrib/src/base/uvm_objection.svh", 726)->__PVT__m_forked_contexts.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 726)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 728)->__VnoInFunc_clear(vlSymsp);
        this->__PVT__m_context_pool.push_back(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_init_objections____Vfork_2__0(std::make_shared<VlProcess>(vlProcess));
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections____Vfork_2__0(VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections____Vfork_2__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/base/uvm_objection.svh", 
                                            789);
    co_await this->__VnoInFunc_m_execute_scheduled_forks(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi1> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::new\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_matches__6__Vfuncout;
    __Vtask_get_arg_matches__6__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_prop_mode = 1U;
    IData/*31:0*/ __VlefCall_1__get_arg_matches;
    IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> cs_;
    VlQueue<std::string> trace_args;
    trace_args.clear();
    trace_args.atDefault().clear();
    /*super.new*/;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs_);
    VL_NULL_CHECK(cs_, "../../uvm/distrib/src/base/uvm_objection.svh", 133)->__VnoInFunc_get_root(vlProcess, vlSymsp, this->__PVT__m_top);
    VL_NULL_CHECK(this->__PVT__m_top, "../../uvm/distrib/src/base/uvm_objection.svh", 135)->__VnoInFunc_get_report_verbosity_level(vlSymsp, 0U, ""s, __VlefCall_0__get_report_verbosity_level);
    this->__VnoInFunc_set_report_verbosity_level(vlSymsp, __VlefCall_0__get_report_verbosity_level);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
    VL_NULL_CHECK(clp, "../../uvm/distrib/src/base/uvm_objection.svh", 139)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_OBJECTION_TRACE"s, trace_args, __Vtask_get_arg_matches__6__Vfuncout);
    __VlefCall_1__get_arg_matches = __Vtask_get_arg_matches__6__Vfuncout;
    if ((0U != __VlefCall_1__get_arg_matches)) {
        this->__PVT__m_trace_mode = 1U;
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_objections.push_back(
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this});
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_trace_mode(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ mode, CData/*0:0*/ &trace_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_trace_mode\n"); );
    // Body
    trace_mode__Vfuncrtn = this->__PVT__m_trace_mode;
    if ((0U == mode)) {
        this->__PVT__m_trace_mode = 0U;
    } else if ((1U == mode)) {
        this->__PVT__m_trace_mode = 1U;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_report(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, std::string action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_report\n"); );
    // Locals
    std::string __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1__DOT__cpath;
    IData/*31:0*/ unnamedblk1__DOT__last_dot;
    std::string unnamedblk1__DOT__sname;
    std::string unnamedblk1__DOT__nm;
    IData/*31:0*/ unnamedblk1__DOT__max;
    IData/*31:0*/ _count;
    IData/*31:0*/ _total;
    {
        _count = (this->__PVT__m_source_count.exists(obj)
                   ? this->__PVT__m_source_count.at(obj)
                   : 0U);
        _total = (this->__PVT__m_total_count.exists(obj)
                   ? this->__PVT__m_total_count.at(obj)
                   : 0U);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, "OBJTN_TRC"s, __VlefCall_0__uvm_report_enabled);
        if (((1U & (~ (0U != __VlefCall_0__uvm_report_enabled))) 
             || (1U & (~ (IData)(this->__PVT__m_trace_mode))))) {
            goto __Vlabel0;
        }
        if ((source_obj == obj)) {
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_objection.svh", 175)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            if ((""s == __VlefCall_1__get_full_name)) {
                __VlefCall_2__get_full_name = "uvm_top"s;
            } else {
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_objection.svh", 175)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            }
            __Vtemp_1 = ((""s != description) ? VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(" ("s, description), ")"s)
                          : ""s);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "OBJTN_TRC"s, VL_SFORMATF_N_NX("Object %0s %0s %0d objection(s)%s: count=%0d  total=%0d",6
                                                                                , 'S',&(__VlefCall_2__get_full_name)
                                                                                , 'S',&(action)
                                                                                , '~',32,count
                                                                                , 'S',&(__Vtemp_1)
                                                                                , '~',32,_count
                                                                                , '~',32,_total) , 0U, ""s, 0U, ""s, 0U);
        } else {
            unnamedblk1__DOT__cpath = 0U;
            unnamedblk1__DOT__last_dot = 0U;
            VL_NULL_CHECK(source_obj, "../../uvm/distrib/src/base/uvm_objection.svh", 179)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk1__DOT__sname);
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_objection.svh", 179)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk1__DOT__nm);
            unnamedblk1__DOT__max = (VL_GTS_III(32, 
                                                VL_LEN_IN(unnamedblk1__DOT__sname), 
                                                VL_LEN_IN(unnamedblk1__DOT__nm))
                                      ? VL_LEN_IN(unnamedblk1__DOT__nm)
                                      : VL_LEN_IN(unnamedblk1__DOT__sname));
            while (((VL_GETC_N(unnamedblk1__DOT__sname,unnamedblk1__DOT__cpath) 
                     == VL_GETC_N(unnamedblk1__DOT__nm,unnamedblk1__DOT__cpath)) 
                    & VL_LTS_III(32, unnamedblk1__DOT__cpath, unnamedblk1__DOT__max))) {
                if ((0x2eU == VL_GETC_N(unnamedblk1__DOT__sname,unnamedblk1__DOT__cpath))) {
                    unnamedblk1__DOT__last_dot = unnamedblk1__DOT__cpath;
                }
                unnamedblk1__DOT__cpath = ((IData)(1U) 
                                           + unnamedblk1__DOT__cpath);
            }
            if ((0U != unnamedblk1__DOT__last_dot)) {
                unnamedblk1__DOT__sname = VL_SUBSTR_N(unnamedblk1__DOT__sname,
                                                      ((IData)(1U) 
                                                       + unnamedblk1__DOT__last_dot),
                                                      VL_LEN_IN(unnamedblk1__DOT__sname));
            }
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_objection.svh", 192)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            if ((""s == __VlefCall_3__get_full_name)) {
                __VlefCall_4__get_full_name = "uvm_top"s;
            } else {
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_objection.svh", 192)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            }
            if (("raised"s == action)) {
                __Vtemp_2[0U] = 0x64646564U;
                __Vtemp_2[1U] = 0x00000061U;
                __Vtemp_2[2U] = 0U;
            } else {
                __Vtemp_2[0U] = 0x63746564U;
                __Vtemp_2[1U] = 0x62747261U;
                __Vtemp_2[2U] = 0x00007375U;
            }
            __Vtemp_3 = ((""s != description) ? VL_CONCATN_NNN(", "s, description)
                          : ""s);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "OBJTN_TRC"s, VL_SFORMATF_N_NX("Object %0s %0s %0d objection(s) %0s its total (%s from source object %s%s): count=%0d  total=%0d",9
                                                                                , 'S',&(__VlefCall_4__get_full_name)
                                                                                , '#',80,__Vtemp_2.data()
                                                                                , '~',32,count
                                                                                , '#',32,
                                                                                (("raised"s 
                                                                                == action)
                                                                                 ? 0x0000746fU
                                                                                 : 0x66726f6dU)
                                                                                , 'S',&(action)
                                                                                , 'S',&(unnamedblk1__DOT__sname)
                                                                                , 'S',&(__Vtemp_3)
                                                                                , '~',32,_count
                                                                                , '~',32,_total) , 0U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_get_parent(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &m_get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_get_parent\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> __Vtask_get_parent__16__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__17__Vfuncout;
    // Body
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> comp;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> seq;
    __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
    if (__VlefExpr_0) {
        VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_objection.svh", 208)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__16__Vfuncout);
        obj = __Vtask_get_parent__16__Vfuncout;
    } else {
        __VlefExpr_1 = VL_CAST_DYNAMIC(obj, seq);
        if (__VlefExpr_1) {
            VL_NULL_CHECK(seq, "../../uvm/distrib/src/base/uvm_objection.svh", 211)->__VnoInFunc_get_sequencer(vlSymsp, __Vtask_get_sequencer__17__Vfuncout);
            obj = __Vtask_get_sequencer__17__Vfuncout;
        } else {
            obj = this->__PVT__m_top;
        }
    }
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    m_get_parent__Vfuncrtn = obj;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_propagate(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, CData/*0:0*/ raise, IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_propagate\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if (((VlNull{} != obj) & (obj != this->__PVT__m_top))) {
        this->__VnoInFunc_m_get_parent(vlSymsp, obj, obj);
        if (raise) {
            this->__VnoInFunc_m_raise(vlProcess, vlSymsp, obj, source_obj, description, count);
        } else {
            this->__VnoInFunc_m_drop(vlProcess, vlSymsp, obj, source_obj, description, count, in_top_thread);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_propagate_mode(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ prop_mode) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_propagate_mode\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__get_objection_total;
    {
        __VlefLogAnd_1 = (1U & (~ (IData)(this->__PVT__m_top_all_dropped)));
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __VlefCall_0__get_objection_total);
            __VlefLogAnd_1 = (0U != __VlefCall_0__get_objection_total);
        }
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "UVM/BASE/OBJTN/PROP_MODE"s, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM/BASE/OBJTN/PROP_MODE"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("The propagation mode of '"s, __VlefCall_3__get_full_name), "' cannot be changed while the objection is raised "s), "or draining!"s)), 0U, "../../uvm/distrib/src/base/uvm_objection.svh"s, 0x0000012aU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__PVT__m_prop_mode = prop_mode;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_propagate_mode(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &get_propagate_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_propagate_mode\n"); );
    // Body
    get_propagate_mode__Vfuncrtn = this->__PVT__m_prop_mode;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raise_objection(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raise_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    this->__PVT__m_cleared = 0U;
    this->__PVT__m_top_all_dropped = 0U;
    this->__VnoInFunc_m_raise(vlProcess, vlSymsp, obj, obj, description, count);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_raise(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_raise\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk2__DOT__diff_count;
    IData/*31:0*/ idx;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection_context_object> ctxt;
    {
        idx = 0U;
        if ((0U == count)) {
            goto __Vlabel0;
        }
        if (this->__PVT__m_total_count.exists(obj)) {
            __VlefExpr_0 = (this->__PVT__m_total_count
                            .at(obj) + count);
            this->__PVT__m_total_count.at(obj) = __VlefExpr_0;
        } else {
            this->__PVT__m_total_count.at(obj) = count;
        }
        if ((source_obj == obj)) {
            if (this->__PVT__m_source_count.exists(obj)) {
                __VlefExpr_1 = (this->__PVT__m_source_count
                                .at(obj) + count);
                this->__PVT__m_source_count.at(obj) 
                    = __VlefExpr_1;
            } else {
                this->__PVT__m_source_count.at(obj) 
                    = count;
            }
        }
        if (this->__PVT__m_trace_mode) {
            this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "raised"s);
        }
        this->__VnoInFunc_raised(vlProcess, vlSymsp, obj, source_obj, description, count);
        idx = 0U;
        {
            while (VL_LTS_III(32, idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size())) {
                if (((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "../../uvm/distrib/src/base/uvm_objection.svh", 375)
                      ->__PVT__obj == obj) && (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "../../uvm/distrib/src/base/uvm_objection.svh", 376)
                                               ->__PVT__objection 
                                               == VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this}))) {
                    ctxt = vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.erase(idx);
                    goto __Vlabel1;
                }
                idx = ((IData)(1U) + idx);
            }
            __Vlabel1: ;
        }
        if ((VlNull{} == ctxt)) {
            idx = 0U;
            {
                while (VL_LTS_III(32, idx, this->__PVT__m_forked_list.size())) {
                    if ((VL_NULL_CHECK(this->__PVT__m_forked_list.at(idx), "../../uvm/distrib/src/base/uvm_objection.svh", 389)
                         ->__PVT__obj == obj)) {
                        ctxt = this->__PVT__m_forked_list.at(idx);
                        this->__PVT__m_forked_list.erase(idx);
                        this->__PVT__m_scheduled_contexts.erase(VL_NULL_CHECK(ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 394)
                                                                ->__PVT__obj);
                        goto __Vlabel2;
                    }
                    idx = ((IData)(1U) + idx);
                }
                __Vlabel2: ;
            }
        }
        if ((VlNull{} == ctxt)) {
            if (this->__PVT__m_forked_contexts.exists(obj)) {
                ctxt = this->__PVT__m_forked_contexts
                    .at(obj);
                this->__PVT__m_forked_contexts.erase(obj);
                VL_NULL_CHECK(this->__PVT__m_drain_proc
                              .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 409)->__VnoInFunc_kill(vlSymsp);
                this->__PVT__m_drain_proc.erase(obj);
            }
        }
        if ((VlNull{} == ctxt)) {
            if (((~ (IData)(this->__PVT__m_prop_mode)) 
                 & (obj != this->__PVT__m_top))) {
                this->__VnoInFunc_m_raise(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count);
            } else if ((obj != this->__PVT__m_top)) {
                this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 1U, 0U);
            }
        } else {
            unnamedblk2__DOT__diff_count = 0U;
            unnamedblk2__DOT__diff_count = (count - VL_NULL_CHECK(ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 435)
                                            ->__PVT__count);
            if ((0U != unnamedblk2__DOT__diff_count)) {
                if (VL_LTS_III(32, 0U, unnamedblk2__DOT__diff_count)) {
                    if (((~ (IData)(this->__PVT__m_prop_mode)) 
                         & (obj != this->__PVT__m_top))) {
                        this->__VnoInFunc_m_raise(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, unnamedblk2__DOT__diff_count);
                    } else if ((obj != this->__PVT__m_top)) {
                        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, unnamedblk2__DOT__diff_count, 1U, 0U);
                    }
                } else {
                    unnamedblk2__DOT__diff_count = 
                        (- unnamedblk2__DOT__diff_count);
                    if (((~ (IData)(this->__PVT__m_prop_mode)) 
                         & (obj != this->__PVT__m_top))) {
                        this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, unnamedblk2__DOT__diff_count, 0U);
                    } else if ((obj != this->__PVT__m_top)) {
                        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, unnamedblk2__DOT__diff_count, 0U, 0U);
                    }
                }
            }
            VL_NULL_CHECK(ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 458)->__VnoInFunc_clear(vlSymsp);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(ctxt);
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_drop_objection(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_drop_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    this->__VnoInFunc_m_drop(vlProcess, vlSymsp, obj, obj, description, count, 0U);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_drop(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_drop\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefExpr_8;
    IData/*31:0*/ __VlefExpr_7;
    IData/*31:0*/ __VlefExpr_6;
    std::string __VlefCall_5__get_name;
    std::string __VlefCall_4__get_full_name;
    CData/*0:0*/ __VlefExpr_3;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection_context_object> unnamedblk3__DOT__ctxt;
    {
        if ((0U == count)) {
            goto __Vlabel0;
        }
        __VlefExpr_0 = (! this->__PVT__m_total_count.exists(obj));
        if ((1U & (~ (IData)(__VlefExpr_0)))) {
            __VlefExpr_0 = VL_GTS_III(32, count, this->__PVT__m_total_count
                                      .at(obj));
        }
        if (__VlefExpr_0) {
            if (this->__PVT__m_cleared) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_objection.svh", 548)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "OBJTN_ZERO"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object \""s, __VlefCall_1__get_full_name), "\" attempted to drop objection '"s), __VlefCall_2__get_name), "' count below zero"s)), 0U, ""s, 0U, ""s, 0U);
                goto __Vlabel0;
            }
            if ((obj == source_obj)) {
                __VlefExpr_3 = (! this->__PVT__m_source_count.exists(obj));
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = VL_GTS_III(32, count, this->__PVT__m_source_count
                                              .at(obj));
                }
                if (__VlefExpr_3) {
                    if (this->__PVT__m_cleared) {
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_objection.svh", 557)
                                               ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                    this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "OBJTN_ZERO"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object \""s, __VlefCall_4__get_full_name), "\" attempted to drop objection '"s), __VlefCall_5__get_name), "' count below zero"s)), 0U, ""s, 0U, ""s, 0U);
                        goto __Vlabel0;
                    }
                    __VlefExpr_6 = (this->__PVT__m_source_count
                                    .at(obj) - count);
                    this->__PVT__m_source_count.at(obj) 
                        = __VlefExpr_6;
                }
                __VlefExpr_7 = (this->__PVT__m_total_count
                                .at(obj) - count);
                this->__PVT__m_total_count.at(obj) 
                    = __VlefExpr_7;
                if (this->__PVT__m_trace_mode) {
                    this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "dropped"s);
                }
                this->__VnoInFunc_dropped(vlProcess, vlSymsp, obj, source_obj, description, count);
                __VlefExpr_8 = (0U != this->__PVT__m_total_count
                                .at(obj));
                if (__VlefExpr_8) {
                    if (((~ (IData)(this->__PVT__m_prop_mode)) 
                         & (obj != this->__PVT__m_top))) {
                        this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count, in_top_thread);
                    } else if ((obj != this->__PVT__m_top)) {
                        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 0U, in_top_thread);
                    }
                } else {
                    if ((0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.size())) {
                        unnamedblk3__DOT__ctxt = vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.pop_front();
                    } else {
                        unnamedblk3__DOT__ctxt = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_objection_context_object, vlSymsp);
                    }
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 587)
                                                       ->__PVT__obj 
                        = obj;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 588)
                                                       ->__PVT__source_obj 
                        = source_obj;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 589)
                                                       ->__PVT__description 
                        = description;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 590)
                                                       ->__PVT__count 
                        = count;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "../../uvm/distrib/src/base/uvm_objection.svh", 591)
                                                       ->__PVT__objection 
                        = VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this};
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.push_back(unnamedblk3__DOT__ctxt);
                }
                __Vlabel0: ;
            }
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_clear(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_clear\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_2__get_name;
            CData/*0:0*/ __VlefLogAnd_1;
            IData/*31:0*/ __VlefCall_0__get_objection_total;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk4__DOT__o;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk4__DOT__o__Vnext;
            CData/*0:0*/ unnamedblk4__DOT__o__Vmore;
            unnamedblk4__DOT__o__Vmore = 0;
            std::string name;
            IData/*31:0*/ idx;
            name = ""s;
            idx = 0U;
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
            }
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_objection.svh", 627)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
            if ((""s == name)) {
                name = "uvm_top"s;
            } else {
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_objection.svh", 631)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
            }
            __VlefLogAnd_1 = (1U & (~ (IData)(this->__PVT__m_top_all_dropped)));
            if (__VlefLogAnd_1) {
                this->__VnoInFunc_get_objection_total(vlSymsp, this->__PVT__m_top, __VlefCall_0__get_objection_total);
                __VlefLogAnd_1 = (0U != __VlefCall_0__get_objection_total);
            }
            if (__VlefLogAnd_1) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "OBJTN_CLEAR"s, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object '"s, name), "' cleared objection counts for "s), __VlefCall_2__get_name)), 0x000000c8U, ""s, 0U, ""s, 0U);
            }
            this->__PVT__m_source_count.clear();
            this->__PVT__m_total_count.clear();
            idx = 0U;
            while (VL_LTS_III(32, idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size())) {
                if ((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "../../uvm/distrib/src/base/uvm_objection.svh", 642)
                     ->__PVT__objection == VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this})) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "../../uvm/distrib/src/base/uvm_objection.svh", 643)
                                                       ->__VnoInFunc_clear(vlSymsp);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx));
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.erase(idx);
                } else {
                    idx = ((IData)(1U) + idx);
                }
            }
            this->__PVT__m_scheduled_contexts.clear();
            while ((0U != this->__PVT__m_forked_list.size())) {
                VL_NULL_CHECK(this->__PVT__m_forked_list.at(0U), "../../uvm/distrib/src/base/uvm_objection.svh", 656)
                                                       ->__VnoInFunc_clear(vlSymsp);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(this->__PVT__m_forked_list.at(0U));
                std::ignore = this->__PVT__m_forked_list.pop_front();
            }
            unnamedblk4__DOT__o__Vmore = (0U != this->__PVT__m_forked_contexts.first(unnamedblk4__DOT__o__Vnext));
            while (unnamedblk4__DOT__o__Vmore) {
                unnamedblk4__DOT__o = unnamedblk4__DOT__o__Vnext;
                unnamedblk4__DOT__o__Vmore = (0U != this->__PVT__m_forked_contexts.next(unnamedblk4__DOT__o__Vnext));
                VL_NULL_CHECK(this->__PVT__m_drain_proc
                              .at(unnamedblk4__DOT__o), "../../uvm/distrib/src/base/uvm_objection.svh", 664)
                                                       ->__VnoInFunc_kill(vlSymsp);
                this->__PVT__m_drain_proc.erase(unnamedblk4__DOT__o);
                VL_NULL_CHECK(this->__PVT__m_forked_contexts
                              .at(unnamedblk4__DOT__o), "../../uvm/distrib/src/base/uvm_objection.svh", 671)
                                                       ->__VnoInFunc_clear(vlSymsp);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(this->__PVT__m_forked_contexts
                                                                                .at(unnamedblk4__DOT__o));
                this->__PVT__m_forked_contexts.erase(unnamedblk4__DOT__o);
            }
            this->__PVT__m_top_all_dropped = 0U;
            this->__PVT__m_cleared = 1U;
            if (this->__PVT__m_events.exists(this->__PVT__m_top)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(this->__PVT__m_top), "../../uvm/distrib/src/base/uvm_objection.svh", 679)
                                   ->__PVT__all_dropped);
            }
        }

        VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_forked_drain(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_forked_drain\n"); );
            // Locals
            CData/*0:0*/ __Vtrigprevexpr_h25273df4__0;
            __Vtrigprevexpr_h25273df4__0 = 0;
            // Body
            VlProcess::currentp(vlProcess.get());
            VL_KEEP_THIS;
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            if (this->__PVT__m_drain_time.exists(obj)) {
                co_await vlSymsp->TOP.__VdlySched.delay(this->__PVT__m_drain_time
                                                        .at(obj), 
                                                        vlProcess, 
                                                        "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                        751);
            }
            if (this->__PVT__m_trace_mode) {
                this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "all_dropped"s);
            }
            co_await this->__VnoInFunc_all_dropped(vlProcess, vlSymsp, obj, source_obj, description, count);
            if ((1U & (~ (IData)(vlProcess->completedFork())))) {
                CData/*0:0*/ __VdynTrigger_h1f476ea2__0;
                __VdynTrigger_h1f476ea2__0 = 0;
                __VdynTrigger_h1f476ea2__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h1f476ea2__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] $_CEXPR(vlProcess->completedFork()))", 
                                                                 "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                 759);
                    __Vtrigprevexpr_h25273df4__0 = 
                        vlProcess->completedFork();
                    __VdynTrigger_h1f476ea2__0 = __Vtrigprevexpr_h25273df4__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h1f476ea2__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] $_CEXPR(vlProcess->completedFork()))", 
                                                             "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                             759);
            }
            __VlefExpr_0 = this->__PVT__m_source_count.exists(obj);
            if (__VlefExpr_0) {
                __VlefExpr_0 = (0U == this->__PVT__m_source_count
                                .at(obj));
            }
            if (__VlefExpr_0) {
                this->__PVT__m_source_count.erase(obj);
            }
            __VlefExpr_1 = this->__PVT__m_total_count.exists(obj);
            if (__VlefExpr_1) {
                __VlefExpr_1 = (0U == this->__PVT__m_total_count
                                .at(obj));
            }
            if (__VlefExpr_1) {
                this->__PVT__m_total_count.erase(obj);
            }
            if (((~ (IData)(this->__PVT__m_prop_mode)) 
                 & (obj != this->__PVT__m_top))) {
                this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count, 1U);
            } else if ((obj != this->__PVT__m_top)) {
                this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 0U, 1U);
            }
            co_return;
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_drain_time(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ drain) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_drain_time\n"); );
            // Body
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
            }
            this->__PVT__m_drain_time.at(obj) = drain;
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raised(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raised\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefExpr_0;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz17_TBz18> unnamedblk7__DOT__iter;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback> unnamedblk7__DOT__cb;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> comp;
            __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
            if (__VlefExpr_0) {
                VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_objection.svh", 829)
                                                       ->__VnoInFunc_raised(vlSymsp, 
                                                                            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
            }
            unnamedblk7__DOT__iter = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz17_TBz18, vlSymsp, 
                                            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this});
            VL_NULL_CHECK(unnamedblk7__DOT__iter, "../../uvm/distrib/src/base/uvm_objection.svh", 830)
                                                       ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk7__DOT__cb);
            while ((VlNull{} != unnamedblk7__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk7__DOT__cb, "../../uvm/distrib/src/base/uvm_objection.svh", 830)
                                                       ->__VnoInFunc_raised(vlSymsp, 
                                                                            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
                VL_NULL_CHECK(unnamedblk7__DOT__iter, "../../uvm/distrib/src/base/uvm_objection.svh", 830)
                                                       ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk7__DOT__cb);
            }
            if (this->__PVT__m_events.exists(obj)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 832)
                                   ->__PVT__raised);
            }
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_dropped(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_dropped\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefExpr_0;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz17_TBz18> unnamedblk8__DOT__iter;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback> unnamedblk8__DOT__cb;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> comp;
            __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
            if (__VlefExpr_0) {
                VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_objection.svh", 847)
                                                       ->__VnoInFunc_dropped(vlSymsp, 
                                                                             VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
            }
            unnamedblk8__DOT__iter = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz17_TBz18, vlSymsp, 
                                            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this});
            VL_NULL_CHECK(unnamedblk8__DOT__iter, "../../uvm/distrib/src/base/uvm_objection.svh", 848)
                                                       ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk8__DOT__cb);
            while ((VlNull{} != unnamedblk8__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk8__DOT__cb, "../../uvm/distrib/src/base/uvm_objection.svh", 848)
                                                       ->__VnoInFunc_dropped(vlSymsp, 
                                                                             VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
                VL_NULL_CHECK(unnamedblk8__DOT__iter, "../../uvm/distrib/src/base/uvm_objection.svh", 848)
                                                       ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk8__DOT__cb);
            }
            if (this->__PVT__m_events.exists(obj)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 850)
                                   ->__PVT__dropped);
            }
        }

        VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_all_dropped(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_all_dropped\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            VL_KEEP_THIS;
            IData/*31:0*/ __VlefExpr_0;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz17_TBz18> unnamedblk9__DOT__iter;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection_callback> unnamedblk9__DOT__cb;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> comp;
            __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
            if (__VlefExpr_0) {
                VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_objection.svh", 867)
                                                       ->__VnoInFunc_all_dropped(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
            }
            unnamedblk9__DOT__iter = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz17_TBz18, vlSymsp, 
                                            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this});
            VL_NULL_CHECK(unnamedblk9__DOT__iter, "../../uvm/distrib/src/base/uvm_objection.svh", 868)
                                                       ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk9__DOT__cb);
            while ((VlNull{} != unnamedblk9__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk9__DOT__cb, "../../uvm/distrib/src/base/uvm_objection.svh", 868)
                                                       ->__VnoInFunc_all_dropped(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
                VL_NULL_CHECK(unnamedblk9__DOT__iter, "../../uvm/distrib/src/base/uvm_objection.svh", 868)
                                                       ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk9__DOT__cb);
            }
            if (this->__PVT__m_events.exists(obj)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 870)
                                   ->__PVT__all_dropped);
            }
            if ((obj == this->__PVT__m_top)) {
                this->__PVT__m_top_all_dropped = 1U;
            }
            co_return;
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objectors(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>> &list) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objectors\n"); );
            // Body
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk10__DOT__obj;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk10__DOT__obj__Vnext;
            CData/*0:0*/ unnamedblk10__DOT__obj__Vmore;
            unnamedblk10__DOT__obj__Vmore = 0;
            list.clear();
            unnamedblk10__DOT__obj__Vmore = (0U != this->__PVT__m_source_count.first(unnamedblk10__DOT__obj__Vnext));
            while (unnamedblk10__DOT__obj__Vmore) {
                unnamedblk10__DOT__obj = unnamedblk10__DOT__obj__Vnext;
                unnamedblk10__DOT__obj__Vmore = (0U 
                                                 != this->__PVT__m_source_count.next(unnamedblk10__DOT__obj__Vnext));
                list.push_back(unnamedblk10__DOT__obj);
            }
        }

        VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ objt_event, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for\n"); );
            // Locals
            IData/*31:0*/ __Vtemp_1;
            IData/*31:0*/ __Vtemp_2;
            // Body
            VlProcess::currentp(vlProcess.get());
            VL_KEEP_THIS;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection_events> __VlefCall_0__new;
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
            }
            if ((! this->__PVT__m_events.exists(obj))) {
                __VlefCall_0__new = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_objection_events, vlSymsp);
                this->__PVT__m_events.at(obj) = __VlefCall_0__new;
            }
            __Vtemp_1 = ((IData)(1U) + VL_NULL_CHECK(this->__PVT__m_events
                                                     .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 906)
                         ->__PVT__waiters);
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 906)
                                                       ->__PVT__waiters 
                = __Vtemp_1;
            if ((1U == objt_event)) {
                CData/*0:0*/ __VdynTrigger_h6fd109ed__0;
                __VdynTrigger_h6fd109ed__0 = 0;
                __VdynTrigger_h6fd109ed__0 = 0U;
                if ((VlNull{} != this->__PVT__m_events
                     .at(obj))) {
                    VL_NULL_CHECK(this->__PVT__m_events
                                  .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 908)
                                                       ->__PVT__raised.clearFired();
                }
                while ((1U & (~ (IData)(__VdynTrigger_h6fd109ed__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                                 "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                 908);
                    __VdynTrigger_h6fd109ed__0 = ((VlNull{} 
                                                   != this->__PVT__m_events
                                                   .at(obj)) 
                                                  && VL_NULL_CHECK(this->__PVT__m_events
                                                                   .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 908)
                                                  ->__PVT__raised.isFired());
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h6fd109ed__0);
                    co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                                 "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                 908);
                    if ((VlNull{} != this->__PVT__m_events
                         .at(obj))) {
                        VL_NULL_CHECK(this->__PVT__m_events
                                      .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 908)
                                                       ->__PVT__raised.clearFired();
                    }
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                             "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                             908);
            } else if ((2U == objt_event)) {
                CData/*0:0*/ __VdynTrigger_h46b156cf__0;
                __VdynTrigger_h46b156cf__0 = 0;
                __VdynTrigger_h46b156cf__0 = 0U;
                if ((VlNull{} != this->__PVT__m_events
                     .at(obj))) {
                    VL_NULL_CHECK(this->__PVT__m_events
                                  .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 909)
                                                       ->__PVT__dropped.clearFired();
                }
                while ((1U & (~ (IData)(__VdynTrigger_h46b156cf__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                                 "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                 909);
                    __VdynTrigger_h46b156cf__0 = ((VlNull{} 
                                                   != this->__PVT__m_events
                                                   .at(obj)) 
                                                  && VL_NULL_CHECK(this->__PVT__m_events
                                                                   .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 909)
                                                  ->__PVT__dropped.isFired());
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h46b156cf__0);
                    co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                                 "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                 909);
                    if ((VlNull{} != this->__PVT__m_events
                         .at(obj))) {
                        VL_NULL_CHECK(this->__PVT__m_events
                                      .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 909)
                                                       ->__PVT__dropped.clearFired();
                    }
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                             "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                             909);
            } else if ((4U == objt_event)) {
                CData/*0:0*/ __VdynTrigger_ha01e374f__0;
                __VdynTrigger_ha01e374f__0 = 0;
                __VdynTrigger_ha01e374f__0 = 0U;
                if ((VlNull{} != this->__PVT__m_events
                     .at(obj))) {
                    VL_NULL_CHECK(this->__PVT__m_events
                                  .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 910)
                                                       ->__PVT__all_dropped.clearFired();
                }
                while ((1U & (~ (IData)(__VdynTrigger_ha01e374f__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                                 "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                 910);
                    __VdynTrigger_ha01e374f__0 = ((VlNull{} 
                                                   != this->__PVT__m_events
                                                   .at(obj)) 
                                                  && VL_NULL_CHECK(this->__PVT__m_events
                                                                   .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 910)
                                                  ->__PVT__all_dropped.isFired());
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_ha01e374f__0);
                    co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                                 "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                 910);
                    if ((VlNull{} != this->__PVT__m_events
                         .at(obj))) {
                        VL_NULL_CHECK(this->__PVT__m_events
                                      .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 910)
                                                       ->__PVT__all_dropped.clearFired();
                    }
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                             "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                             910);
            }
            __Vtemp_2 = (VL_NULL_CHECK(this->__PVT__m_events
                                       .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 913)
                         ->__PVT__waiters - (IData)(1U));
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 913)
                                                       ->__PVT__waiters 
                = __Vtemp_2;
            if ((0U == VL_NULL_CHECK(this->__PVT__m_events
                                     .at(obj), "../../uvm/distrib/src/base/uvm_objection.svh", 915)
                 ->__PVT__waiters)) {
                this->__PVT__m_events.erase(obj);
            }
            co_return;
        }

        VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for_total_count(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for_total_count\n"); );
            // Locals
            CData/*0:0*/ __Vtrigprevexpr_h70f5669c__0;
            __Vtrigprevexpr_h70f5669c__0 = 0;
            // Body
            VL_KEEP_THIS;
            CData/*0:0*/ __VlefExpr_0;
            {
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                }
                if (((! this->__PVT__m_total_count.exists(obj)) 
                     & (0U == count))) {
                    goto __Vlabel0;
                }
                if ((0U == count)) {
                    if ((1U & (~ ((! this->__PVT__m_total_count.exists(obj)) 
                                  & (0U == count))))) {
                        CData/*0:0*/ __VdynTrigger_h92f993fa__0;
                        __VdynTrigger_h92f993fa__0 = 0;
                        __VdynTrigger_h92f993fa__0 = 0U;
                        while ((1U & (~ (IData)(__VdynTrigger_h92f993fa__0)))) {
                            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                         nullptr, 
                                                                         "@([true] ((! uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj)) & (32'sh0 == uvm_pkg::uvm_objection.count)))", 
                                                                         "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                         928);
                            __Vtrigprevexpr_h70f5669c__0 
                                = ((! this->__PVT__m_total_count.exists(obj)) 
                                   & (0U == count));
                            __VdynTrigger_h92f993fa__0 
                                = __Vtrigprevexpr_h70f5669c__0;
                            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h92f993fa__0);
                        }
                        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                     nullptr, 
                                                                     "@([true] ((! uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj)) & (32'sh0 == uvm_pkg::uvm_objection.count)))", 
                                                                     "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                     928);
                    }
                } else {
                    __VlefExpr_0 = this->__PVT__m_total_count.exists(obj);
                    if (__VlefExpr_0) {
                        __VlefExpr_0 = (this->__PVT__m_total_count
                                        .at(obj) == count);
                    }
                    if ((1U & (~ (IData)(__VlefExpr_0)))) {
                        CData/*0:0*/ __VdynTrigger_hf4c22a22__0;
                        __VdynTrigger_hf4c22a22__0 = 0;
                        __VdynTrigger_hf4c22a22__0 = 0U;
                        while ((1U & (~ (IData)(__VdynTrigger_hf4c22a22__0)))) {
                            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                         nullptr, 
                                                                         "@([true] uvm_pkg::uvm_objection.__VlefExpr_0)", 
                                                                         "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                         930);
                            __VdynTrigger_hf4c22a22__0 
                                = __VlefExpr_0;
                            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf4c22a22__0);
                        }
                        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                     nullptr, 
                                                                     "@([true] uvm_pkg::uvm_objection.__VlefExpr_0)", 
                                                                     "../../uvm/distrib/src/base/uvm_objection.svh", 
                                                                     930);
                    }
                }
                __Vlabel0: ;
            }
            co_return;
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_count(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_count\n"); );
            // Body
            {
                get_objection_count__Vfuncrtn = 0U;
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                }
                if ((! this->__PVT__m_source_count.exists(obj))) {
                    get_objection_count__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                get_objection_count__Vfuncrtn = this->__PVT__m_source_count
                    .at(obj);
                __Vlabel0: ;
            }
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_total(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_total__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_total\n"); );
            // Body
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
            }
            if (this->__PVT__m_total_count.exists(obj)) {
                get_objection_total__Vfuncrtn = this->__PVT__m_total_count
                    .at(obj);
            } else {
                get_objection_total__Vfuncrtn = 0U;
            }
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_drain_time(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ &get_drain_time__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_drain_time\n"); );
            // Body
            {
                get_drain_time__Vfuncrtn = 0;
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                }
                if ((! this->__PVT__m_drain_time.exists(obj))) {
                    get_drain_time__Vfuncrtn = 0ULL;
                    goto __Vlabel0;
                }
                get_drain_time__Vfuncrtn = this->__PVT__m_drain_time
                    .at(obj);
                __Vlabel0: ;
            }
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_display_objections(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header, std::string &m_display_objections__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_display_objections\n"); );
            // Locals
            std::string __Vtemp_1;
            // Body
            VlProcess::currentp(vlProcess.get());
            CData/*0:0*/ __VlefExpr_2;
            std::string __VlefCall_1__get_full_name;
            CData/*0:0*/ __VlefExpr_0;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk11__DOT__o;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk11__DOT__o__Vnext;
            CData/*0:0*/ unnamedblk11__DOT__o__Vmore;
            unnamedblk11__DOT__o__Vmore = 0;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk11__DOT__unnamedblk12__DOT__theobj;
            IData/*31:0*/ unnamedblk13__DOT__i;
            unnamedblk13__DOT__i = 0;
            IData/*31:0*/ unnamedblk14__DOT__i;
            std::string s;
            IData/*31:0*/ total;
            VlAssocArray<std::string, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>> list;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> curr_obj;
            IData/*31:0*/ depth;
            std::string name;
            std::string this_obj_name;
            std::string curr_obj_name;
            {
                m_display_objections__Vfuncrtn = ""s;
                s = ""s;
                total = 0U;
                list.clear();
                depth = 0U;
                name = ""s;
                this_obj_name = ""s;
                curr_obj_name = ""s;
                unnamedblk11__DOT__o__Vmore = (0U != this->__PVT__m_total_count.first(unnamedblk11__DOT__o__Vnext));
                while (unnamedblk11__DOT__o__Vmore) {
                    unnamedblk11__DOT__o = unnamedblk11__DOT__o__Vnext;
                    unnamedblk11__DOT__o__Vmore = (0U 
                                                   != this->__PVT__m_total_count.next(unnamedblk11__DOT__o__Vnext));
                    unnamedblk11__DOT__unnamedblk12__DOT__theobj 
                        = unnamedblk11__DOT__o;
                    __VlefExpr_0 = VL_LTS_III(32, 0U, this->__PVT__m_total_count
                                              .at(unnamedblk11__DOT__o));
                    if (__VlefExpr_0) {
                        VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__theobj, "../../uvm/distrib/src/base/uvm_objection.svh", 998)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                        list.at(__VlefCall_1__get_full_name) 
                            = unnamedblk11__DOT__unnamedblk12__DOT__theobj;
                    }
                }
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                }
                this->__VnoInFunc_get_objection_total(vlSymsp, obj, total);
                VL_SFORMAT_NX(s,"The total objection count is %0d\n",1
                              , '~',32,total);
                if ((0U == total)) {
                    m_display_objections__Vfuncrtn 
                        = s;
                    goto __Vlabel0;
                }
                s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
                s = VL_CONCATN_NNN(s, "Source  Total   \n"s);
                s = VL_CONCATN_NNN(s, "Count   Count   Object\n"s);
                s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_objection.svh", 1017)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this_obj_name);
                curr_obj_name = this_obj_name;
                do {
                    curr_obj = list.at(curr_obj_name);
                    depth = 0U;
                    unnamedblk13__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk13__DOT__i, 
                                      VL_LEN_IN(curr_obj_name))) {
                        if ((0x2eU == VL_GETC_N(curr_obj_name,unnamedblk13__DOT__i))) {
                            depth = ((IData)(1U) + depth);
                        }
                        unnamedblk13__DOT__i = ((IData)(1U) 
                                                + unnamedblk13__DOT__i);
                    }
                    name = curr_obj_name;
                    unnamedblk14__DOT__i = 0U;
                    unnamedblk14__DOT__i = (VL_LEN_IN(curr_obj_name) 
                                            - (IData)(1U));
                    {
                        while (VL_LTES_III(32, 0U, unnamedblk14__DOT__i)) {
                            if ((0x2eU == VL_GETC_N(curr_obj_name,unnamedblk14__DOT__i))) {
                                name = VL_SUBSTR_N(curr_obj_name,
                                                   ((IData)(1U) 
                                                    + unnamedblk14__DOT__i),
                                                   (VL_LEN_IN(curr_obj_name) 
                                                    - (IData)(1U)));
                                goto __Vlabel1;
                            }
                            unnamedblk14__DOT__i = 
                                (unnamedblk14__DOT__i 
                                 - (IData)(1U));
                        }
                        __Vlabel1: ;
                    }
                    if ((""s == curr_obj_name)) {
                        name = "uvm_top"s;
                    } else {
                        depth = ((IData)(1U) + depth);
                    }
                    __Vtemp_1 = VL_SUBSTR_N("                                                                                   "s,0U,
                                            VL_MULS_III(32, (IData)(2U), depth));
                    s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("%-6d  %-6d %s%s\n",4
                                                           , '~',32,
                                                           (this->__PVT__m_source_count.exists(curr_obj)
                                                             ? this->__PVT__m_source_count
                                                            .at(curr_obj)
                                                             : 0U)
                                                           , '~',32,
                                                           (this->__PVT__m_total_count.exists(curr_obj)
                                                             ? this->__PVT__m_total_count
                                                            .at(curr_obj)
                                                             : 0U)
                                                           , 'S',&(__Vtemp_1)
                                                           , 'S',&(name)) );
                    __VlefExpr_2 = (0U != list.next(curr_obj_name));
                } while (((IData)(__VlefExpr_2) && 
                          (VL_SUBSTR_N(curr_obj_name,0U,
                                       (VL_LEN_IN(this_obj_name) 
                                        - (IData)(1U))) 
                           == this_obj_name)));
                s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
                m_display_objections__Vfuncrtn = s;
                __Vlabel0: ;
            }
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_convert2string\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            convert2string__Vfuncrtn = ""s;
            this->__VnoInFunc_m_display_objections(vlProcess, vlSymsp, this->__PVT__m_top, 1U, convert2string__Vfuncrtn);
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_display_objections(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_display_objections\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            std::string m;
            this->__VnoInFunc_m_display_objections(vlProcess, vlSymsp, obj, show_header, m);
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, "UVM/OBJ/DISPLAY"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/OBJ/DISPLAY"s, m, 0U, "../../uvm/distrib/src/base/uvm_objection.svh"s, 0x00000430U, ""s, 1U);
            }
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_create\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection> tmp;
            tmp = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_objection, vlProcess, vlSymsp, name);
            create__Vfuncrtn = tmp;
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_type_name\n"); );
            // Body
            get_type_name__Vfuncrtn = "uvm_objection"s;
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_do_copy\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefExpr_0;
            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_objection> _rhs;
            __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, _rhs);
            if (VL_UNLIKELY(((! __VlefExpr_0)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_objection.svh:1095: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_objection.do_copy", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("../../uvm/distrib/src/base/uvm_objection.svh", 1095, "");
            }
            this->__PVT__m_source_count = VL_NULL_CHECK(_rhs, "../../uvm/distrib/src/base/uvm_objection.svh", 1096)
                ->__PVT__m_source_count;
            this->__PVT__m_total_count = VL_NULL_CHECK(_rhs, "../../uvm/distrib/src/base/uvm_objection.svh", 1097)
                ->__PVT__m_total_count;
            this->__PVT__m_drain_time = VL_NULL_CHECK(_rhs, "../../uvm/distrib/src/base/uvm_objection.svh", 1098)
                ->__PVT__m_drain_time;
            this->__PVT__m_prop_mode = VL_NULL_CHECK(_rhs, "../../uvm/distrib/src/base/uvm_objection.svh", 1099)
                ->__PVT__m_prop_mode;
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc_randomize\n"); );
            // Body
            IData/*31:0*/ __VlefCall_0____VBasicRand;
            VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
            this->__VnoInFunc___Vsetup_constraints(vlSymsp);
            randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
            this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
            randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                   & __VlefCall_0____VBasicRand);
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc___Vsetup_constraints\n"); );
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::__VnoInFunc___VBasicRand\n"); );
            // Body
            __VBasicRand__Vfuncrtn = 1U;
        }

        void VUVM_Register8b_uvm_pkg__03a__03auvm_objection::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::_ctor_var_reset\n"); );
            // Body
            (void)vlSymsp;  // Prevent unused variable warning
            __PVT__m_trace_mode = 0;
            __PVT__m_source_count.atDefault() = 0;
            __PVT__m_total_count.atDefault() = 0;
            __PVT__m_drain_time.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 17709275628653521742ULL, 4102563340287712520ull);
            __PVT__m_top_all_dropped = 0;
            __PVT__m_cleared = 0;
        }

        VUVM_Register8b_uvm_pkg__03a__03auvm_objection::~VUVM_Register8b_uvm_pkg__03a__03auvm_objection() {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_objection::~\n"); );
        }
