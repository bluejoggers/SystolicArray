// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_phase::init(vlProcess, vlSymsp, name, 0U, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc_traverse(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> comp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc_traverse\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_task_phase.svh", 80)->__PVT__m_num_procs_not_yet_returned = 0U;
    this->__VnoInFunc_m_traverse(vlProcess, vlSymsp, comp, phase, state);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc_m_traverse(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> comp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc_m_traverse\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_first_child__4__Vfuncout;
    __Vtask_get_first_child__4__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_next_child__7__Vfuncout;
    __Vtask_get_next_child__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__verbosity;
    __Vfunc_uvm_report_enabled__8__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__8__severity;
    __Vfunc_uvm_report_enabled__8__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__16__verbosity;
    __Vtask_uvm_report_info__16__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__16__line;
    __Vtask_uvm_report_info__16__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__16__report_enabled_checked;
    __Vtask_uvm_report_info__16__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28__verbosity;
    __Vfunc_uvm_report_enabled__28__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__28__severity;
    __Vfunc_uvm_report_enabled__28__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__32__verbosity;
    __Vtask_uvm_report_fatal__32__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__32__line;
    __Vtask_uvm_report_fatal__32__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__32__report_enabled_checked;
    __Vtask_uvm_report_fatal__32__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_10;
    IData/*31:0*/ __VlefExpr_9;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_domain> __VlefCall_8__get_common_domain;
    std::string __VlefCall_7__get_name;
    std::string __VlefCall_6__get_name;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__get_next_child;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> __VlefCall_1__get_child;
    IData/*31:0*/ __VlefCall_0__get_first_child;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__ph;
    std::string name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_domain> phase_domain;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_domain> comp_domain;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> seqr;
    name = ""s;
    VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_task_phase.svh", 88)->__VnoInFunc_get_domain(vlProcess, vlSymsp, phase_domain);
    VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 89)->__VnoInFunc_get_domain(vlSymsp, comp_domain);
    VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 92)->__VnoInFunc_get_first_child(vlSymsp, name, __Vtask_get_first_child__4__Vfuncout);
    __VlefCall_0__get_first_child = __Vtask_get_first_child__4__Vfuncout;
    if ((0U != __VlefCall_0__get_first_child)) {
        do {
            VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 94)->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_1__get_child);
            this->__VnoInFunc_m_traverse(vlProcess, vlSymsp, __VlefCall_1__get_child, phase, state);
            VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 95)->__VnoInFunc_get_next_child(vlSymsp, name, __Vtask_get_next_child__7__Vfuncout);
            __VlefCall_2__get_next_child = __Vtask_get_next_child__7__Vfuncout;
        } while ((0U != __VlefCall_2__get_next_child));
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        this->__Vfunc_uvm_report_enabled__8__id = "PH_TRACE"s;
        __Vfunc_uvm_report_enabled__8__severity = 0U;
        __Vfunc_uvm_report_enabled__8__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__10__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__8__verbosity, (IData)(__Vfunc_uvm_report_enabled__8__severity), this->__Vfunc_uvm_report_enabled__8__id, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_task_phase.svh", 100)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 100)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            VL_NULL_CHECK(comp_domain, "../../uvm/distrib/src/base/uvm_task_phase.svh", 100)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
            VL_NULL_CHECK(phase_domain, "../../uvm/distrib/src/base/uvm_task_phase.svh", 100)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
            __Vtask_uvm_report_info__16__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__16__context_name = ""s;
            __Vtask_uvm_report_info__16__line = 0x00000064U;
            this->__Vtask_uvm_report_info__16__filename = "../../uvm/distrib/src/base/uvm_task_phase.svh"s;
            __Vtask_uvm_report_info__16__verbosity = 0x000001f4U;
            __Vtemp_1 = VUVM_Activator___024unit::__Venumtab_enum_name37
                .at(state);
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__16__message
                          ,"topdown-phase phase=%s state=%s comp=%s comp.domain=%s phase.domain=%s",5
                          , 'S',&(__VlefCall_4__get_name)
                          , 'S',&(__Vtemp_1), 'S',&(__VlefCall_5__get_full_name)
                          , 'S',&(__VlefCall_6__get_name)
                          , 'S',&(__VlefCall_7__get_name));
            this->__Vtask_uvm_report_info__16__id = "PH_TRACE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__16__id, this->__Vtask_uvm_report_info__16__message, __Vtask_uvm_report_info__16__verbosity, this->__Vtask_uvm_report_info__16__filename, __Vtask_uvm_report_info__16__line, this->__Vtask_uvm_report_info__16__context_name, (IData)(__Vtask_uvm_report_info__16__report_enabled_checked));
        }
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __VlefCall_8__get_common_domain);
    if (((phase_domain == __VlefCall_8__get_common_domain) 
         || (phase_domain == comp_domain))) {
        if ((8U == state)) {
            VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 106)->__PVT__m_current_phase 
                = phase;
            VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 107)->__VnoInFunc_m_apply_verbosity_settings(vlProcess, vlSymsp, phase);
            VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 108)->__VnoInFunc_phase_started(vlProcess, vlSymsp, phase);
            __VlefExpr_9 = VL_CAST_DYNAMIC(comp, seqr);
            if (__VlefExpr_9) {
                VL_NULL_CHECK(seqr, "../../uvm/distrib/src/base/uvm_task_phase.svh", 110)->__VnoInFunc_start_phase_sequence(vlProcess, vlSymsp, phase);
            }
        } else if ((0x00000010U == state)) {
            unnamedblk1__DOT__ph = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_task_phase>{this};
            if (VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 114)
                ->__PVT__m_phase_imps.exists(VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_task_phase>{this})) {
                unnamedblk1__DOT__ph = VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 115)
                    ->__PVT__m_phase_imps.at(VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_task_phase>{this});
            }
            VL_NULL_CHECK(unnamedblk1__DOT__ph, "../../uvm/distrib/src/base/uvm_task_phase.svh", 116)->__VnoInFunc_execute(vlProcess, vlSymsp, comp, phase);
        } else if ((0x00000020U == state)) {
            VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 119)->__VnoInFunc_phase_ready_to_end(vlSymsp, phase);
        } else if ((0x00000040U == state)) {
            __VlefExpr_10 = VL_CAST_DYNAMIC(comp, seqr);
            if (__VlefExpr_10) {
                VL_NULL_CHECK(seqr, "../../uvm/distrib/src/base/uvm_task_phase.svh", 123)->__VnoInFunc_stop_phase_sequence(vlProcess, vlSymsp, phase);
            }
            VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 124)->__VnoInFunc_phase_ended(vlSymsp, phase);
            VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 125)->__PVT__m_current_phase = VlNull{};
        } else {
            this->__Vfunc_uvm_report_enabled__28__id = "PH_BADEXEC"s;
            __Vfunc_uvm_report_enabled__28__severity = 3U;
            __Vfunc_uvm_report_enabled__28__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__29__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__29__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__30__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__28__verbosity, (IData)(__Vfunc_uvm_report_enabled__28__severity), this->__Vfunc_uvm_report_enabled__28__id, __VlefCall_11__uvm_report_enabled);
            if ((0U != __VlefCall_11__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__32__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__32__context_name = ""s;
                __Vtask_uvm_report_fatal__32__line = 0x00000080U;
                this->__Vtask_uvm_report_fatal__32__filename = "../../uvm/distrib/src/base/uvm_task_phase.svh"s;
                __Vtask_uvm_report_fatal__32__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__32__message = "task phase traverse internal error"s;
                this->__Vtask_uvm_report_fatal__32__id = "PH_BADEXEC"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__33__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__33__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__32__id, this->__Vtask_uvm_report_fatal__32__message, __Vtask_uvm_report_fatal__32__verbosity, this->__Vtask_uvm_report_fatal__32__filename, __Vtask_uvm_report_fatal__32__line, this->__Vtask_uvm_report_fatal__32__context_name, (IData)(__Vtask_uvm_report_fatal__32__report_enabled_checked));
            }
        }
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc_execute(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> comp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc_execute\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03a__VDynScope_10> __VDynScope_execute_0;
    __VDynScope_execute_0 = VL_NEW(VUVM_Activator_uvm_pkg__03a__03a__VDynScope_10, vlSymsp);
    VL_NULL_CHECK(__VDynScope_execute_0, "../../uvm/distrib/src/base/uvm_task_phase.svh", 140)->__PVT__phase 
        = phase;
    VL_NULL_CHECK(__VDynScope_execute_0, "../../uvm/distrib/src/base/uvm_task_phase.svh", 139)->__PVT__comp 
        = comp;
    this->__VnoInFunc_execute____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_execute_0);
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc_execute____Vfork_1__0(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03a__VDynScope_10> __VDynScope_execute_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc_execute____Vfork_1__0\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03a__VDynScope_10> __Vtask___VforkTask_0__37____VDynScope_execute_0;
    IData/*31:0*/ __Vtask___VforkTask_0__37____VlefCall_2__uvm_create_random_seed;
    __Vtask___VforkTask_0__37____VlefCall_2__uvm_create_random_seed = 0;
    VlClassRef<VUVM_Activator_std__03a__03aprocess> __Vtask___VforkTask_0__37__proc;
    VlClassRef<VUVM_Activator_std__03a__03aprocess> __Vfunc_self__38__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__41__Vfuncout;
    __Vfunc_uvm_create_random_seed__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__41____VlefExpr_4;
    __Vfunc_uvm_create_random_seed__41____VlefExpr_4 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__41____VlefExpr_3;
    __Vfunc_uvm_create_random_seed__41____VlefExpr_3 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__41____VlefCall_2__uvm_oneway_hash;
    __Vfunc_uvm_create_random_seed__41____VlefCall_2__uvm_oneway_hash = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed__41____VlefCall_0__new;
    IData/*31:0*/ __Vfunc_uvm_instance_scope__43____Vincrement2;
    __Vfunc_uvm_instance_scope__43____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__44__verbosity;
    __Vtask_uvm_report_error__44__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__44__line;
    __Vtask_uvm_report_error__44__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__44__report_enabled_checked;
    __Vtask_uvm_report_error__44__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__45__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__46__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__48__Vfuncout;
    __Vfunc_uvm_oneway_hash__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__48__seed;
    __Vfunc_uvm_oneway_hash__48__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__48__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__48__unnamedblk1__DOT___byte = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__37____VDynScope_execute_0 
        = __VDynScope_execute_0;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/base/uvm_task_phase.svh", 
                                            142);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__38__Vfuncout);
    __Vtask___VforkTask_0__37__proc = __Vfunc_self__38__Vfuncout;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_execute_0, "../../uvm/distrib/src/base/uvm_task_phase.svh", 148)
                  ->__PVT__phase, "../../uvm/distrib/src/base/uvm_task_phase.svh", 148)->__VnoInFunc_get_type_name(vlSymsp, this->__Vtask_get_type_name__39__Vfuncout);
    this->__Vtask___VforkTask_0__37____VlefCall_0__get_type_name 
        = this->__Vtask_get_type_name__39__Vfuncout;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_execute_0, "../../uvm/distrib/src/base/uvm_task_phase.svh", 148)
                  ->__PVT__comp, "../../uvm/distrib/src/base/uvm_task_phase.svh", 148)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__40__Vfuncout);
    this->__Vtask___VforkTask_0__37____VlefCall_1__get_full_name 
        = this->__Vtask_get_full_name__40__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__41__inst_id 
        = VL_CVT_PACK_STR_NN(this->__Vtask___VforkTask_0__37____VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__41__type_id 
        = VL_CVT_PACK_STR_NN(this->__Vtask___VforkTask_0__37____VlefCall_0__get_type_name);
    if ((""s == this->__Vfunc_uvm_create_random_seed__41__inst_id)) {
        this->__Vfunc_uvm_create_random_seed__41__inst_id = "__global__"s;
    }
    if ((! vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__41__inst_id))) {
        __Vfunc_uvm_create_random_seed__41____VlefCall_0__new 
            = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.at(this->__Vfunc_uvm_create_random_seed__41__inst_id) 
            = __Vfunc_uvm_create_random_seed__41____VlefCall_0__new;
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
        .at(this->__Vfunc_uvm_create_random_seed__41__inst_id);
    __Vfunc_uvm_instance_scope__43____Vincrement2 = 0U;
    {
        if ((""s != this->__Vfunc_uvm_instance_scope__43__Vfuncout)) {
            goto __Vlabel0;
        }
        VL_SFORMAT_NX(this->__Vfunc_uvm_instance_scope__43__Vfuncout
                      ,"%m",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_instance_scope");
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
            = (VL_LEN_IN(this->__Vfunc_uvm_instance_scope__43__Vfuncout) 
               - (IData)(1U));
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
            = VL_GETC_N(this->__Vfunc_uvm_instance_scope__43__Vfuncout,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        while ((((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                 & (0x2eU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                & (0x3aU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
            __Vfunc_uvm_instance_scope__43____Vincrement2 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                   - (IData)(1U));
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                = __Vfunc_uvm_instance_scope__43____Vincrement2;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                = VL_GETC_N(this->__Vfunc_uvm_instance_scope__43__Vfuncout,__Vfunc_uvm_instance_scope__43____Vincrement2);
        }
        if ((0U == vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)) {
            __Vtask_uvm_report_error__44__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__44__context_name = ""s;
            __Vtask_uvm_report_error__44__line = 0U;
            this->__Vtask_uvm_report_error__44__filename = ""s;
            __Vtask_uvm_report_error__44__verbosity = 0x00000064U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__44__message
                          ,"Illegal name %s in scope string",1
                          , 'S',&(this->__Vfunc_uvm_instance_scope__43__Vfuncout));
            this->__Vtask_uvm_report_error__44__id = "SCPSTR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__45__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__45__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__46__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__46__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__44__id, this->__Vtask_uvm_report_error__44__message, __Vtask_uvm_report_error__44__verbosity, this->__Vtask_uvm_report_error__44__filename, __Vtask_uvm_report_error__44__line, this->__Vtask_uvm_report_error__44__context_name, (IData)(__Vtask_uvm_report_error__44__report_enabled_checked));
        }
        this->__Vfunc_uvm_instance_scope__43__Vfuncout 
            = VL_SUBSTR_N(this->__Vfunc_uvm_instance_scope__43__Vfuncout,0U,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        __Vlabel0: ;
    }
    this->__Vfunc_uvm_create_random_seed__41____VlefCall_1__uvm_instance_scope 
        = this->__Vfunc_uvm_instance_scope__43__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__41__type_id 
        = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__41____VlefCall_1__uvm_instance_scope, this->__Vfunc_uvm_create_random_seed__41__type_id);
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 414)
         ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__41__type_id))) {
        __Vfunc_uvm_oneway_hash__48__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        this->__Vfunc_uvm_oneway_hash__48__string_in 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__41__type_id, "::"s), this->__Vfunc_uvm_create_random_seed__41__inst_id));
        if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__48__seed)))) {
            __Vfunc_uvm_oneway_hash__48__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        }
        __Vfunc_uvm_oneway_hash__48__Vfuncout = __Vfunc_uvm_oneway_hash__48__seed;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
        __Vfunc_uvm_oneway_hash__48__unnamedblk1__DOT___byte = 0U;
        __Vfunc_uvm_oneway_hash__48__unnamedblk1__DOT___byte = 0U;
        {
            while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__48__unnamedblk1__DOT___byte, 
                              VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__48__string_in))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                    = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__48__string_in,__Vfunc_uvm_oneway_hash__48__unnamedblk1__DOT___byte);
                if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                    goto __Vlabel1;
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 1U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 2U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 3U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 4U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 5U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 6U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                     ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                        >> 7U))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                __Vfunc_uvm_oneway_hash__48__unnamedblk1__DOT___byte 
                    = ((IData)(1U) + __Vfunc_uvm_oneway_hash__48__unnamedblk1__DOT___byte);
            }
            __Vlabel1: ;
        }
        __Vfunc_uvm_oneway_hash__48__Vfuncout = (__Vfunc_uvm_oneway_hash__48__Vfuncout 
                                                 + 
                                                 (~ 
                                                  ((((0x0000ff00U 
                                                      & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                           >> 8U))) 
                                                    << 0x00000010U) 
                                                   | ((0x0000ff00U 
                                                       & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          >> 8U)) 
                                                      | (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                         >> 0x18U)))));
        __Vfunc_uvm_create_random_seed__41____VlefCall_2__uvm_oneway_hash 
            = __Vfunc_uvm_oneway_hash__48__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 415)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__41__type_id) 
            = __Vfunc_uvm_create_random_seed__41____VlefCall_2__uvm_oneway_hash;
    }
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 417)
         ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__41__type_id))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 418)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__41__type_id) = 0U;
    }
    __Vfunc_uvm_create_random_seed__41____VlefExpr_3 
        = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 424)
           ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__41__type_id) 
           + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 424)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__41__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 424)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__41__type_id) 
        = __Vfunc_uvm_create_random_seed__41____VlefExpr_3;
    __Vfunc_uvm_create_random_seed__41____VlefExpr_4 
        = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 425)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__41__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 425)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__41__type_id) 
        = __Vfunc_uvm_create_random_seed__41____VlefExpr_4;
    __Vfunc_uvm_create_random_seed__41__Vfuncout = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 427)
        ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__41__type_id);
    __Vtask___VforkTask_0__37____VlefCall_2__uvm_create_random_seed 
        = __Vfunc_uvm_create_random_seed__41__Vfuncout;
    VL_NULL_CHECK(__Vtask___VforkTask_0__37__proc, "../../uvm/distrib/src/base/uvm_task_phase.svh", 148)->__VnoInFunc_srandom(vlSymsp, __Vtask___VforkTask_0__37____VlefCall_2__uvm_create_random_seed);
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_execute_0, "../../uvm/distrib/src/base/uvm_task_phase.svh", 150)
                  ->__PVT__phase, "../../uvm/distrib/src/base/uvm_task_phase.svh", 150)->__PVT__m_num_procs_not_yet_returned 
        = ((IData)(1U) + VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_execute_0, "../../uvm/distrib/src/base/uvm_task_phase.svh", 150)
                                       ->__PVT__phase, "../../uvm/distrib/src/base/uvm_task_phase.svh", 150)
           ->__PVT__m_num_procs_not_yet_returned);
    co_await this->__VnoInFunc_exec_task(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_execute_0, "../../uvm/distrib/src/base/uvm_task_phase.svh", 152)
                                         ->__PVT__comp, VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_execute_0, "../../uvm/distrib/src/base/uvm_task_phase.svh", 152)
                                         ->__PVT__phase);
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_execute_0, "../../uvm/distrib/src/base/uvm_task_phase.svh", 154)
                  ->__PVT__phase, "../../uvm/distrib/src/base/uvm_task_phase.svh", 154)->__PVT__m_num_procs_not_yet_returned 
        = (VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_execute_0, "../../uvm/distrib/src/base/uvm_task_phase.svh", 154)
                         ->__PVT__phase, "../../uvm/distrib/src/base/uvm_task_phase.svh", 154)
           ->__PVT__m_num_procs_not_yet_returned - (IData)(1U));
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::~VUVM_Activator_uvm_pkg__03a__03auvm_task_phase() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_task_phase::~\n"); );
}
