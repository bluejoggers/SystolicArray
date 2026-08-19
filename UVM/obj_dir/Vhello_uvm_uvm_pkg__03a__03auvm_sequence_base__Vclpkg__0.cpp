// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name) {
    Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_next_transaction_id = 1U;
    this->__PVT__m_priority = 0xffffffffU;
    this->__PVT__response_queue_depth = 8U;
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.size())) {
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(1U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
    this->__PVT__m_sequence_state = 1U;
    this->__PVT__m_wait_for_grant_semaphore = 0U;
    this->__VnoInFunc_m_init_phase_daps(vlProcess, vlSymsp, 1U);
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__seq_kind, 0x0000000000000020ULL, 
                                                                      "seq_kind", 0ULL, 0ULL);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_item(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_item\n"); );
    // Body
    is_item__Vfuncrtn = 0U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_state(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_state__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_state\n"); );
    // Body
    get_sequence_state__Vfuncrtn = this->__PVT__m_sequence_state;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_sequence_state(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ state_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_sequence_state\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hb95cff8b__0;
    __Vtrigprevexpr_hb95cff8b__0 = 0;
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (0U != (this->__PVT__m_sequence_state 
                         & state_mask))))) {
        CData/*0:0*/ __VdynTrigger_hcba23c29__0;
        __VdynTrigger_hcba23c29__0 = 0;
        __VdynTrigger_hcba23c29__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hcba23c29__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (| (uvm_pkg::uvm_sequence_base.m_sequence_state & uvm_pkg::uvm_sequence_base.state_mask)))", 
                                                         "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                                         213);
            __Vtrigprevexpr_hb95cff8b__0 = (0U != (this->__PVT__m_sequence_state 
                                                   & state_mask));
            __VdynTrigger_hcba23c29__0 = __Vtrigprevexpr_hb95cff8b__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hcba23c29__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (| (uvm_pkg::uvm_sequence_base.m_sequence_state & uvm_pkg::uvm_sequence_base.state_mask)))", 
                                                     "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                                     213);
    }
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_tr_handle(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_tr_handle\n"); );
    // Body
    get_tr_handle__Vfuncrtn = 0;
    if ((VlNull{} != this->__PVT__m_tr_recorder)) {
        VL_NULL_CHECK(this->__PVT__m_tr_recorder, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 225)->__VnoInFunc_get_handle(vlSymsp, get_tr_handle__Vfuncrtn);
    } else {
        get_tr_handle__Vfuncrtn = 0U;
    }
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, IData/*31:0*/ this_priority, CData/*0:0*/ call_pre_post) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start\n"); );
    // Locals
    IData/*31:0*/ __Vtask_m_register_sequence__21__Vfuncout;
    __Vtask_m_register_sequence__21__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefCall_9__get_automatic_phase_objection;
    CData/*0:0*/ __VlefCall_8__get_automatic_phase_objection;
    std::string __VlefCall_7__get_root_sequence_name;
    IData/*31:0*/ __VlefCond_6;
    IData/*31:0*/ __VlefCall_5__get_handle;
    std::string __VlefCall_4__get_root_sequence_name;
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk1__DOT__handle;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_tr_stream> unnamedblk1__DOT__stream;
    CData/*0:0*/ old_automatic_phase_objection;
    old_automatic_phase_objection = 0U;
    this->__VnoInFunc_set_item_context(vlProcess, vlSymsp, parent_sequence, sequencer);
    if ((1U & (~ (((1U == this->__PVT__m_sequence_state) 
                   | (0x00000080U == this->__PVT__m_sequence_state)) 
                  | (0x00000100U == this->__PVT__m_sequence_state))))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQ_NOT_DONE"s, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN("Sequence "s, __VlefCall_0__get_full_name), " already started"s)), 0U, ""s, 0U, ""s, 0U);
    }
    if ((VlNull{} != Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence)) {
        VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 272)->__PVT__children_array.at(
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}) = 1U;
    }
    if (VL_GTS_III(32, 0xffffffffU, this_priority)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQPRI"s, VL_SFORMATF_N_NX("Sequence %s start has illegal priority: %0d",2
                                                                                , 'S',&(__VlefCall_1__get_full_name)
                                                                                , '~',32,this_priority) , 0U, ""s, 0U, ""s, 0U);
    }
    if (VL_GTS_III(32, 0U, this_priority)) {
        if ((VlNull{} == parent_sequence)) {
            this_priority = 0x00000064U;
        } else {
            VL_NULL_CHECK(parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 282)->__VnoInFunc_get_priority(vlSymsp, this_priority);
        }
    }
    this->__VnoInFunc_clear_response_queue(vlSymsp);
    this->__PVT__m_priority = this_priority;
    if ((VlNull{} != Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        unnamedblk1__DOT__handle = 0;
        if ((VlNull{} == Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 294)->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name), "Transactions"s, unnamedblk1__DOT__stream);
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
            VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 295)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_name), ""s, ""s, 0ULL, 0U, unnamedblk1__DOT__handle);
        } else {
            this->__VnoInFunc_get_root_sequence_name(vlSymsp, __VlefCall_4__get_root_sequence_name);
            VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 298)->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_root_sequence_name), "Transactions"s, unnamedblk1__DOT__stream);
            if ((VlNull{} == VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 300)
                 ->__PVT__m_tr_recorder)) {
                __VlefCond_6 = 0U;
            } else {
                VL_NULL_CHECK(VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 300)
                              ->__PVT__m_tr_recorder, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 300)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_5__get_handle);
                __VlefCond_6 = __VlefCall_5__get_handle;
            }
            this->__VnoInFunc_get_root_sequence_name(vlSymsp, __VlefCall_7__get_root_sequence_name);
            VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 299)->__VnoInFunc_begin_child_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, __VlefCond_6, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_7__get_root_sequence_name), ""s, ""s, 0ULL, unnamedblk1__DOT__handle);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, unnamedblk1__DOT__handle, this->__PVT__m_tr_recorder);
    }
    this->__VnoInFunc_set_sequence_id(vlSymsp, 0xffffffffU);
    this->__PVT__m_sqr_seq_ids.clear();
    if ((VlNull{} != Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 313)->__VnoInFunc_m_register_sequence(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, __Vtask_m_register_sequence__21__Vfuncout);
    }
    this->__PVT__m_sequence_state = 2U;
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(1U, vlProcess);
        this->__VnoInFunc_start____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync, __VlefCall_8__get_automatic_phase_objection, call_pre_post, parent_sequence, __VlefCall_9__get_automatic_phase_objection);
        co_await __Vfork_1__sync.join(vlProcess, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                      319);
    }
    if ((VlNull{} != Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 378)->__VnoInFunc_end_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, 0ULL, 1U);
    }
    if ((0x00000080U != this->__PVT__m_sequence_state)) {
        if ((VlNull{} != Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 385)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                            388);
    if (((VlNull{} != Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
         && VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 390)
         ->__PVT__children_array.exists(VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}))) {
        VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 391)->__PVT__children_array.erase(
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, old_automatic_phase_objection);
    this->__VnoInFunc_m_init_phase_daps(vlProcess, vlSymsp, 1U);
    this->__VnoInFunc_set_automatic_phase_objection(vlProcess, vlSymsp, old_automatic_phase_objection);
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_1__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync, CData/*0:0*/ &__VlefCall_8__get_automatic_phase_objection, CData/*0:0*/ &call_pre_post, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> &parent_sequence, CData/*0:0*/ &__VlefCall_9__get_automatic_phase_objection) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, this->__PVT__m_sequence_process);
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                            324);
    this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_8__get_automatic_phase_objection);
    if (__VlefCall_8__get_automatic_phase_objection) {
        this->__VnoInFunc_m_safe_raise_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
    }
    this->__VnoInFunc_pre_start(vlSymsp);
    if (call_pre_post) {
        this->__PVT__m_sequence_state = 4U;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                                336);
        this->__VnoInFunc_pre_body(vlSymsp);
    }
    if ((VlNull{} != parent_sequence)) {
        VL_NULL_CHECK(parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 341)->__VnoInFunc_pre_do(vlSymsp, 0U);
        VL_NULL_CHECK(parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 342)->__VnoInFunc_mid_do(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    this->__PVT__m_sequence_state = 8U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                            346);
    co_await this->__VnoInFunc_body(vlProcess, vlSymsp);
    this->__PVT__m_sequence_state = 0x00000040U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                            350);
    if ((VlNull{} != parent_sequence)) {
        VL_NULL_CHECK(parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 353)->__VnoInFunc_post_do(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    if (call_pre_post) {
        this->__PVT__m_sequence_state = 0x00000010U;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                                358);
        this->__VnoInFunc_post_body(vlSymsp);
    }
    this->__PVT__m_sequence_state = 0x00000020U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                            363);
    this->__VnoInFunc_post_start(vlSymsp);
    this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_9__get_automatic_phase_objection);
    if (__VlefCall_9__get_automatic_phase_objection) {
        this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
    }
    this->__PVT__m_sequence_state = 0x00000100U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                            372);
    __Vfork_1__sync.done("../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                         320);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_start(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_start\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_body(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_body\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_do(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ is_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_do\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_mid_do(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> this_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_mid_do\n"); );
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_body(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_sequence_base"s, "Body definition undefined"s, 0x000000c8U, ""s, 0U, ""s, 0U);
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_do(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> this_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_do\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_body(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_body\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_start(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_start\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_init_phase_daps(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ create) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_init_phase_daps\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_3__get_sequencer;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_2__get_sequencer;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    std::string apo_name;
    std::string sp_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_SFORMAT_NX(apo_name,"%s.automatic_phase_objection",1
                  , 'S',&(__VlefCall_0__get_full_name));
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_SFORMAT_NX(sp_name,"%s.starting_phase",1, 'S',&(__VlefCall_1__get_full_name));
    if (create) {
        this->__VnoInFunc_get_sequencer(vlSymsp, __VlefCall_2__get_sequencer);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz79__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, apo_name, __VlefCall_2__get_sequencer, ""s, this->__PVT__m_automatic_phase_objection_dap);
        this->__VnoInFunc_get_sequencer(vlSymsp, __VlefCall_3__get_sequencer);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz80__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, sp_name, __VlefCall_3__get_sequencer, ""s, this->__PVT__m_starting_phase_dap);
    } else {
        VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 520)->__VnoInFunc_set_name(vlProcess, vlSymsp, apo_name);
        VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 521)->__VnoInFunc_set_name(vlProcess, vlSymsp, sp_name);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_starting_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> &get_starting_phase__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_starting_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__try_set;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> unnamedblk2__DOT__unnamedblk3__DOT__dap_phase;
    if ((this->__PVT__starting_phase != this->__PVT__m_set_starting_phase)) {
        if ((1U & (~ (IData)(this->__PVT__m_warn_deprecated_set)))) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "'starting_phase' is deprecated and not part of the UVM standard.  See documentation for uvm_sequence_base::set_starting_phase"s, 0U, "../../uvm/distrib/src/seq/uvm_sequence_base.svh"s, 0x0000022fU, ""s, 1U);
            }
            this->__PVT__m_warn_deprecated_set = 1U;
        }
        VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 563)->__VnoInFunc_try_set(vlSymsp, this->__PVT__starting_phase, __VlefCall_1__try_set);
        if (__VlefCall_1__try_set) {
            this->__PVT__m_set_starting_phase = this->__PVT__starting_phase;
        } else {
            VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 566)->__VnoInFunc_get(vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__dap_phase);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "UVM/SEQ/LOCK_DEPR"s, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                if ((VlNull{} == this->__PVT__starting_phase)) {
                    __VlefCall_3__get_full_name = "<null>"s;
                } else {
                    VL_NULL_CHECK(this->__PVT__starting_phase, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 572)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                }
                if ((VlNull{} == unnamedblk2__DOT__unnamedblk3__DOT__dap_phase)) {
                    __VlefCall_4__get_full_name = "<null>"s;
                } else {
                    VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__dap_phase, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 572)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                }
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM/SEQ/LOCK_DEPR"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("The deprecated 'starting_phase' variable has been set to '"s, __VlefCall_3__get_full_name), "' after a call to get_starting_phase locked the value to '"s), __VlefCall_4__get_full_name), "'.  See documentation for uvm_sequence_base::set_starting_phase."s)), 0U, "../../uvm/distrib/src/seq/uvm_sequence_base.svh"s, 0x0000023cU, ""s, 1U);
            }
        }
    }
    VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 578)->__VnoInFunc_get(vlSymsp, get_starting_phase__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_starting_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_starting_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if ((this->__PVT__starting_phase != this->__PVT__m_set_starting_phase)) {
        if ((1U & (~ (IData)(this->__PVT__m_warn_deprecated_set)))) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__starting_phase, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 598)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("The deprecated 'starting_phase' variable has been set to '"s, __VlefCall_1__get_full_name), "' manually.  See documentation for uvm_sequence_base::set_starting_phase."s)), 0U, "../../uvm/distrib/src/seq/uvm_sequence_base.svh"s, 0x00000256U, ""s, 1U);
            }
            this->__PVT__m_warn_deprecated_set = 1U;
        }
        this->__PVT__starting_phase = phase;
        this->__PVT__m_set_starting_phase = phase;
    }
    VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 608)->__VnoInFunc_set(vlProcess, vlSymsp, phase);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_automatic_phase_objection(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_automatic_phase_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 657)->__VnoInFunc_set(vlProcess, vlSymsp, value);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_automatic_phase_objection(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_automatic_phase_objection__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_automatic_phase_objection\n"); );
    // Body
    get_automatic_phase_objection__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 670)->__VnoInFunc_get(vlSymsp, get_automatic_phase_objection__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_raise_starting_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_raise_starting_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> starting_phase;
    this->__VnoInFunc_get_starting_phase(vlProcess, vlSymsp, starting_phase);
    if ((VlNull{} != starting_phase)) {
        VL_NULL_CHECK(starting_phase, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 678)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, description, count);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_drop_starting_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_drop_starting_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> starting_phase;
    this->__VnoInFunc_get_starting_phase(vlProcess, vlSymsp, starting_phase);
    if ((VlNull{} != starting_phase)) {
        VL_NULL_CHECK(starting_phase, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 686)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, description, count);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_priority(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_priority\n"); );
    // Body
    this->__PVT__m_priority = value;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_priority(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_priority__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_priority\n"); );
    // Body
    get_priority__Vfuncrtn = this->__PVT__m_priority;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_relevant(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_relevant__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_relevant\n"); );
    // Body
    this->__PVT__is_rel_default = 1U;
    is_relevant__Vfuncrtn = 1U;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_relevant(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_relevant\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlAssignableEvent e;
    this->__PVT__wait_rel_default = 1U;
    if ((1U & (~ (IData)(this->__PVT__is_rel_default)))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RELMSM"s, "is_relevant() was implemented without defining wait_for_relevant()"s, 0U, ""s, 0U, ""s, 0U);
    }
    CData/*0:0*/ __VdynTrigger_hfd8aa8a1__0;
    __VdynTrigger_hfd8aa8a1__0 = 0;
    __VdynTrigger_hfd8aa8a1__0 = 0U;
    e.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_hfd8aa8a1__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                     "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                                     762);
        __VdynTrigger_hfd8aa8a1__0 = e.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfd8aa8a1__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                     "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                                     762);
        e.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                 "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                                 762);
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_lock(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_lock\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((VlNull{} == sequencer)) {
        sequencer = Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer;
    }
    if ((VlNull{} == sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "LOCKSEQR"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    co_await VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 784)->__VnoInFunc_lock(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_grab(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_grab\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((VlNull{} == sequencer)) {
        if ((VlNull{} == Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "GRAB"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
        }
        co_await VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 804)->__VnoInFunc_grab(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
    } else {
        co_await VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 807)->__VnoInFunc_grab(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_unlock(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_unlock\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == sequencer)) {
        if ((VlNull{} == Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "UNLOCK"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 823)->__VnoInFunc_unlock(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
    } else {
        VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 825)->__VnoInFunc_unlock(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_ungrab(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_ungrab\n"); );
    // Body
    this->__VnoInFunc_unlock(vlSymsp, sequencer);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_blocked(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_blocked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_blocked\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    is_blocked__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 851)->__VnoInFunc_is_blocked(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, is_blocked__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_has_lock(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &has_lock__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_has_lock\n"); );
    // Body
    has_lock__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 864)->__VnoInFunc_has_lock(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, has_lock__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_kill(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_kill\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__get_automatic_phase_objection;
    CData/*0:0*/ __VlefCall_0__get_automatic_phase_objection;
    {
        if ((VlNull{} != this->__PVT__m_sequence_process)) {
            if ((VlNull{} == Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
                {
                    // Inlined CFunc: __VnoInFunc_m_kill
                    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> __Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i;
                    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> __Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i__Vnext;
                    CData/*0:0*/ __Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i__Vmore;
                    __Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i__Vmore = 0;
                    this->__VnoInFunc_do_kill(vlSymsp);
                    __Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i__Vmore 
                        = (0U != this->__PVT__children_array.first(__Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i__Vnext));
                    while (__Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i__Vmore) {
                        __Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i 
                            = __Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i__Vnext;
                        __Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i__Vmore 
                            = (0U != this->__PVT__children_array.next(__Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i__Vnext));
                        VL_NULL_CHECK(__Vinline_0___VnoInFunc_m_kill_unnamedblk4__DOT__i, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 917)->__VnoInFunc_kill(vlProcess, vlSymsp);
                    }
                    if ((VlNull{} != this->__PVT__m_sequence_process)) {
                        VL_NULL_CHECK(this->__PVT__m_sequence_process, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 920)->__VnoInFunc_kill(vlSymsp);
                        this->__PVT__m_sequence_process = VlNull{};
                    }
                    this->__PVT__m_sequence_state = 0x00000080U;
                    if (((VlNull{} != Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
                         && VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 924)
                         ->__PVT__children_array.exists(
                                                        VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}))) {
                        VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 925)->__PVT__children_array.erase(
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
                    }
                }
                this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_0__get_automatic_phase_objection);
                if (__VlefCall_0__get_automatic_phase_objection) {
                    this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 894)->__VnoInFunc_kill_sequence(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
            this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_1__get_automatic_phase_objection);
            if (__VlefCall_1__get_automatic_phase_objection) {
                this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
            }
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_kill(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_kill\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_kill(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_kill\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> unnamedblk4__DOT__i;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> unnamedblk4__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk4__DOT__i__Vmore;
    unnamedblk4__DOT__i__Vmore = 0;
    this->__VnoInFunc_do_kill(vlSymsp);
    unnamedblk4__DOT__i__Vmore = (0U != this->__PVT__children_array.first(unnamedblk4__DOT__i__Vnext));
    while (unnamedblk4__DOT__i__Vmore) {
        unnamedblk4__DOT__i = unnamedblk4__DOT__i__Vnext;
        unnamedblk4__DOT__i__Vmore = (0U != this->__PVT__children_array.next(unnamedblk4__DOT__i__Vnext));
        VL_NULL_CHECK(unnamedblk4__DOT__i, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 917)->__VnoInFunc_kill(vlProcess, vlSymsp);
    }
    if ((VlNull{} != this->__PVT__m_sequence_process)) {
        VL_NULL_CHECK(this->__PVT__m_sequence_process, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 920)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_sequence_process = VlNull{};
    }
    this->__PVT__m_sequence_state = 0x00000080U;
    if (((VlNull{} != Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
         && VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 924)
         ->__PVT__children_array.exists(VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}))) {
        VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 925)->__PVT__children_array.erase(
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_item(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> type_var, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> l_sequencer, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &create_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_item\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> __VlefCall_1__create_object_by_type;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 943)->__VnoInFunc_get_factory(vlSymsp, factory);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 944)->__VnoInFunc_create_object_by_type(vlProcess, vlSymsp, type_var, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name, __VlefCall_1__create_object_by_type);
    __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__create_object_by_type, create_item__Vfuncrtn);
    if (VL_UNLIKELY(((! __VlefExpr_2)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_sequence_base.svh:944: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.create_item", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("../../uvm/distrib/src/seq/uvm_sequence_base.svh", 944, "");
    }
    VL_NULL_CHECK(create_item__Vfuncrtn, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 946)->__VnoInFunc_set_item_context(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, l_sequencer);
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start_item(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start_item\n"); );
    // Locals
    IData/*31:0*/ __Vtask_begin_child_tr__108__Vfuncout;
    __Vtask_begin_child_tr__108__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_7__get_root_sequence_name;
    IData/*31:0*/ __VlefCond_6;
    IData/*31:0*/ __VlefCall_5__get_handle;
    CData/*0:0*/ __VlefCall_4__is_auto_item_recording_enabled;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefExpr_1;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> seq;
    {
        if ((VlNull{} == item)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NULLITM"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("attempting to start a null item from sequence '"s, __VlefCall_0__get_full_name), "'"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        __VlefExpr_1 = VL_CAST_DYNAMIC(item, seq);
        if (__VlefExpr_1) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQNOTITM"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("attempting to start a sequence using start_item() from sequence '"s, __VlefCall_2__get_full_name), "'. Use seq.start() instead."s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((VlNull{} == sequencer)) {
            VL_NULL_CHECK(item, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 979)->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
        }
        if ((VlNull{} == sequencer)) {
            this->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
        }
        if ((VlNull{} == sequencer)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQ"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN("neither the item's sequencer nor dedicated sequencer has been supplied to start item in "s, __VlefCall_3__get_full_name)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(item, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 989)->__VnoInFunc_set_item_context(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, sequencer);
        if (VL_GTS_III(32, 0U, set_priority)) {
            this->__VnoInFunc_get_priority(vlSymsp, set_priority);
        }
        co_await VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 994)->__VnoInFunc_wait_for_grant(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, set_priority, 0U);
        VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 996)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __VlefCall_4__is_auto_item_recording_enabled);
        if (__VlefCall_4__is_auto_item_recording_enabled) {
            if ((VlNull{} == this->__PVT__m_tr_recorder)) {
                __VlefCond_6 = 0U;
            } else {
                VL_NULL_CHECK(this->__PVT__m_tr_recorder, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 998)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_5__get_handle);
                __VlefCond_6 = __VlefCall_5__get_handle;
            }
            VL_NULL_CHECK(item, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 999)->__VnoInFunc_get_root_sequence_name(vlSymsp, __VlefCall_7__get_root_sequence_name);
            VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 997)->__VnoInFunc_begin_child_tr(vlProcess, vlSymsp, item, __VlefCond_6, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_7__get_root_sequence_name), "Transactions"s, ""s, 0ULL, __Vtask_begin_child_tr__108__Vfuncout);
        }
        this->__VnoInFunc_pre_do(vlSymsp, 1U);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_finish_item(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_finish_item\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefCall_0__is_auto_item_recording_enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    VL_NULL_CHECK(item, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1020)->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
    if ((VlNull{} == sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "STRITM"s, "sequence_item has null sequencer"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_mid_do(vlSymsp, item);
    VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1027)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, item, 0U);
    co_await VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1028)->__VnoInFunc_wait_for_item_done(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, 0xffffffffU);
    VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1030)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __VlefCall_0__is_auto_item_recording_enabled);
    if (__VlefCall_0__is_auto_item_recording_enabled) {
        VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1031)->__VnoInFunc_end_tr(vlProcess, vlSymsp, item, 0ULL, 1U);
    }
    this->__VnoInFunc_post_do(vlSymsp, item);
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_grant(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_grant\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((VlNull{} == Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "WAITGRANT"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    co_await VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1056)->__VnoInFunc_wait_for_grant(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, item_priority, (IData)(lock_request));
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_send_request(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_send_request\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SENDREQ"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1071)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, request, rerandomize);
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_item_done(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_item_done\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((VlNull{} == Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "WAITITEMDONE"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    co_await VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1092)->__VnoInFunc_wait_for_item_done(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, transaction_id);
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_use_response_handler(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_use_response_handler\n"); );
    // Body
    this->__PVT__m_use_response_handler = enable;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_use_response_handler(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_response_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_use_response_handler\n"); );
    // Body
    get_use_response_handler__Vfuncrtn = this->__PVT__m_use_response_handler;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_response_handler(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> response) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_response_handler\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_error_report_disabled(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_error_report_disabled\n"); );
    // Body
    this->__PVT__response_queue_error_report_disabled 
        = value;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_error_report_disabled(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_response_queue_error_report_disabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_error_report_disabled\n"); );
    // Body
    get_response_queue_error_report_disabled__Vfuncrtn 
        = this->__PVT__response_queue_error_report_disabled;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_depth(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_depth\n"); );
    // Body
    this->__PVT__response_queue_depth = value;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_depth(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_queue_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_depth\n"); );
    // Body
    get_response_queue_depth__Vfuncrtn = this->__PVT__response_queue_depth;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clear_response_queue(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clear_response_queue\n"); );
    // Body
    this->__PVT__response_queue.clear();
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_base_response(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> response) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_base_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    {
        if (((0xffffffffU == this->__PVT__response_queue_depth) 
             | VL_LTS_III(32, this->__PVT__response_queue.size(), this->__PVT__response_queue_depth))) {
            this->__PVT__response_queue.push_back(response);
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(this->__PVT__response_queue_error_report_disabled)))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "Response queue overflow, response was dropped"s, 0U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_response(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_base_response(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &response, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_base_response\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h2ac82dc1__0;
    __Vtrigprevexpr_h2ac82dc1__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hbea67585__0;
    __Vtrigprevexpr_hbea67585__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__get_transaction_id;
    IData/*31:0*/ queue_size;
    IData/*31:0*/ i;
    {
        queue_size = 0U;
        i = 0U;
        if ((0U == this->__PVT__response_queue.size())) {
            if ((0U == this->__PVT__response_queue.size())) {
                CData/*0:0*/ __VdynTrigger_hc4c8a62b__0;
                __VdynTrigger_hc4c8a62b__0 = 0;
                __VdynTrigger_hc4c8a62b__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_hc4c8a62b__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (32'sh0 != uvm_pkg::uvm_sequence_base.response_queue.size()))", 
                                                                 "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                                                 1217);
                    __Vtrigprevexpr_hbea67585__0 = 
                        (0U != this->__PVT__response_queue.size());
                    __VdynTrigger_hc4c8a62b__0 = __Vtrigprevexpr_hbea67585__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc4c8a62b__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 != uvm_pkg::uvm_sequence_base.response_queue.size()))", 
                                                             "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                                             1217);
            }
        }
        if ((0xffffffffU == transaction_id)) {
            response = this->__PVT__response_queue.pop_front();
            goto __Vlabel0;
        }
        while (true) {
            queue_size = this->__PVT__response_queue.size();
            i = 0U;
            while (VL_LTS_III(32, i, queue_size)) {
                VL_NULL_CHECK(this->__PVT__response_queue.at(i), "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1227)->__VnoInFunc_get_transaction_id(vlSymsp, __VlefCall_0__get_transaction_id);
                if ((__VlefCall_0__get_transaction_id 
                     == transaction_id)) {
                    response = this->__PVT__response_queue.at(i);
                    this->__PVT__response_queue.erase(i);
                    goto __Vlabel0;
                }
                i = ((IData)(1U) + i);
            }
            if ((this->__PVT__response_queue.size() 
                 == queue_size)) {
                CData/*0:0*/ __VdynTrigger_h58a75e5f__0;
                __VdynTrigger_h58a75e5f__0 = 0;
                __VdynTrigger_h58a75e5f__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h58a75e5f__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (uvm_pkg::uvm_sequence_base.response_queue.size() != uvm_pkg::uvm_sequence_base.queue_size))", 
                                                                 "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                                                 1234);
                    __Vtrigprevexpr_h2ac82dc1__0 = 
                        (this->__PVT__response_queue.size() 
                         != queue_size);
                    __VdynTrigger_h58a75e5f__0 = __Vtrigprevexpr_h2ac82dc1__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h58a75e5f__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequence_base.response_queue.size() != uvm_pkg::uvm_sequence_base.queue_size))", 
                                                             "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 
                                                             1234);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_num_sequences(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &num_sequences__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_num_sequences\n"); );
    // Body
    {
        num_sequences__Vfuncrtn = 0U;
        if ((VlNull{} == Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            num_sequences__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1266)->__VnoInFunc_num_sequences(vlSymsp, num_sequences__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_seq_kind(Vhello_uvm__Syms* __restrict vlSymsp, std::string type_name, IData/*31:0*/ &get_seq_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_seq_kind\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_type_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    get_seq_kind__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m deprecated.",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.get_seq_kind") , 0U, "../../uvm/distrib/src/seq/uvm_sequence_base.svh"s, 0x000004feU, ""s, 1U);
    }
    if ((VlNull{} != Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1280)->__VnoInFunc_get_seq_kind(vlProcess, vlSymsp, type_name, get_seq_kind__Vfuncrtn);
    } else {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NULLSQ"s, VL_SFORMATF_N_NX("%0s sequencer is null.",1
                                                                                , 'S',&(__VlefCall_1__get_type_name)) , 0U, ""s, 0U, ""s, 0U);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> &get_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> __VlefCall_2__create_object_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    std::string m_seq_type;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_factory> factory;
    m_seq_type = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1296)->__VnoInFunc_get_factory(vlSymsp, factory);
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m deprecated.",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.get_sequence") , 0U, "../../uvm/distrib/src/seq/uvm_sequence_base.svh"s, 0x00000511U, ""s, 1U);
    }
    if ((req_kind >= VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1298)
         ->__PVT__sequences.size())) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQRNG"s, VL_SFORMATF_N_NX("Kind arg '%0d' out of range. Need 0-%0d",2
                                                                                , '#',32,req_kind
                                                                                , '~',32,
                                                                                (VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1301)
                                                                                ->__PVT__sequences.size() 
                                                                                - (IData)(1U))) , 0U, ""s, 0U, ""s, 0U);
    }
    m_seq_type = VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1303)
        ->__PVT__sequences.at(req_kind);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1304)->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, m_seq_type, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), m_seq_type, __VlefCall_2__create_object_by_name);
    __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__create_object_by_name, m_seq);
    if ((! __VlefExpr_3)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "FCTSEQ"s, VL_SFORMATF_N_NX("Factory cannot produce a sequence of type %0s.",1
                                                                                , 'S',&(m_seq_type)) , 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1309)->__VnoInFunc_set_use_sequence_info(vlSymsp, 1U);
    get_sequence__Vfuncrtn = m_seq;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_sequence_kind(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_sequence_kind\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_6__get_priority;
    IData/*31:0*/ __VlefCond_5;
    IData/*31:0*/ __VlefCall_4__randomize;
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> __VlefCall_2__create_object_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string m_seq_type;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_factory> factory;
    m_seq_type = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1323)->__VnoInFunc_get_factory(vlSymsp, factory);
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m deprecated.",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.do_sequence_kind") , 0U, "../../uvm/distrib/src/seq/uvm_sequence_base.svh"s, 0x0000052cU, ""s, 1U);
    }
    m_seq_type = VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1325)
        ->__PVT__sequences.at(req_kind);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1326)->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, m_seq_type, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), m_seq_type, __VlefCall_2__create_object_by_name);
    __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__create_object_by_name, m_seq);
    if ((! __VlefExpr_3)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "FCTSEQ"s, VL_SFORMATF_N_NX("Factory cannot produce a sequence of type %0s.",1
                                                                                , 'S',&(m_seq_type)) , 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1331)->__VnoInFunc_set_item_context(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer);
    if ((VlNull{} != m_seq)) {
        VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1333)->__VnoInFunc_randomize(vlSymsp, __VlefCall_4__randomize);
        __VlefCond_5 = __VlefCall_4__randomize;
    } else {
        __VlefCond_5 = 0U;
    }
    if ((1U & (~ (0U != __VlefCond_5)))) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "RNDFLD"s, "Randomization failed in do_sequence_kind()"s, 0x000000c8U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_get_priority(vlSymsp, __VlefCall_6__get_priority);
    co_await VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1336)->__VnoInFunc_start(vlProcess, vlSymsp, Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, __VlefCall_6__get_priority, 0U);
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_by_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string seq_name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> &get_sequence_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> __VlefCall_2__create_object_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1347)->__VnoInFunc_get_factory(vlSymsp, factory);
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m deprecated.",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.get_sequence_by_name") , 0U, "../../uvm/distrib/src/seq/uvm_sequence_base.svh"s, 0x00000544U, ""s, 1U);
    }
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1349)->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, seq_name, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), seq_name, __VlefCall_2__create_object_by_name);
    __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__create_object_by_name, m_seq);
    if ((! __VlefExpr_3)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "FCTSEQ"s, VL_SFORMATF_N_NX("Factory cannot produce a sequence of type %0s.",1
                                                                                , 'S',&(seq_name)) , 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1353)->__VnoInFunc_set_use_sequence_info(vlSymsp, 1U);
    get_sequence_by_name__Vfuncrtn = m_seq;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_and_start_sequence_by_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string seq_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_and_start_sequence_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_1__get_priority;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m deprecated.",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_base.create_and_start_sequence_by_name") , 0U, "../../uvm/distrib/src/seq/uvm_sequence_base.svh"s, 0x00000554U, ""s, 1U);
    }
    this->__VnoInFunc_get_sequence_by_name(vlSymsp, seq_name, m_seq);
    this->__VnoInFunc_get_priority(vlSymsp, __VlefCall_1__get_priority);
    co_await VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 1366)->__VnoInFunc_start(vlProcess, vlSymsp, Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>{this}, __VlefCall_1__get_priority, 0U);
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_get_sqr_sequence_id(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, CData/*0:0*/ update_sequence_id, IData/*31:0*/ &m_get_sqr_sequence_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_get_sqr_sequence_id\n"); );
    // Body
    {
        m_get_sqr_sequence_id__Vfuncrtn = 0U;
        if (this->__PVT__m_sqr_seq_ids.exists(sequencer_id)) {
            if (update_sequence_id) {
                this->__VnoInFunc_set_sequence_id(vlSymsp, this->__PVT__m_sqr_seq_ids
                                                  .at(sequencer_id));
            }
            m_get_sqr_sequence_id__Vfuncrtn = this->__PVT__m_sqr_seq_ids
                .at(sequencer_id);
            goto __Vlabel0;
        }
        if (update_sequence_id) {
            this->__VnoInFunc_set_sequence_id(vlSymsp, 0xffffffffU);
        }
        m_get_sqr_sequence_id__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_set_sqr_sequence_id(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, IData/*31:0*/ sequence_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_set_sqr_sequence_id\n"); );
    // Body
    this->__PVT__m_sqr_seq_ids.at(sequencer_id) = sequence_id;
    this->__VnoInFunc_set_sequence_id(vlSymsp, sequence_id);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pick_sequence_setup_constraint(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pick_sequence_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    // Body
    IData/*31:0*/ __VlefCall_1__num_sequences;
    IData/*31:0*/ __VlefCall_0__num_sequences;
    if (Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.at(0U)) {
        this->__VnoInFunc_num_sequences(vlSymsp, __VlefCall_0__num_sequences);
        VL_SFORMAT_NX(__Vtemp_2,"#b%b",1, '#',1,VL_GTES_III(32, 2U, __VlefCall_0__num_sequences));
        __Vtemp_1 = (Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.at(0U)
                      ? "seq_kind"s : VL_SFORMATF_N_NX("#x%x",1
                                                       , '#',32,this->__PVT__seq_kind) );
        VL_SFORMAT_NX(__Vtemp_3,"(__Vbv (bvuge %s #x00000002))",1
                      , 'S',&(__Vtemp_1));
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(bvor %s %s)",2
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__Vtemp_3)) , "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 0x000004e7U, 
                                                                     "       (num_sequences() <= 2) || (seq_kind >= 2);");
        this->__VnoInFunc_num_sequences(vlSymsp, __VlefCall_1__num_sequences);
        if (Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.at(0U)) {
            __Vtemp_4 = "seq_kind"s;
            __Vtemp_6 = "seq_kind"s;
        } else {
            __Vtemp_4 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__seq_kind) ;
            __Vtemp_6 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__seq_kind) ;
        }
        VL_SFORMAT_NX(__Vtemp_5,"#x%x",1, '#',32,__VlefCall_1__num_sequences);
        VL_SFORMAT_NX(__Vtemp_7,"(__Vbv (bvult %s %s))",2
                      , 'S',&(__Vtemp_4), 'S',&(__Vtemp_5));
        VL_SFORMAT_NX(__Vtemp_8,"(__Vbv (= %s #x00000000))",1
                      , 'S',&(__Vtemp_6));
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(bvor %s %s)",2
                                                                                , 'S',&(__Vtemp_7)
                                                                                , 'S',&(__Vtemp_8)) , "../../uvm/distrib/src/seq/uvm_sequence_base.svh", 0x000004e8U, 
                                                                     "       (seq_kind <  num_sequences()) || (seq_kind == 0); }");
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_sequence_state = 0;
    __PVT__m_wait_for_grant_semaphore = 0;
    __PVT__m_sqr_seq_ids.atDefault() = 0;
    __PVT__children_array.atDefault() = 0;
    __PVT__response_queue_error_report_disabled = 0;
    __PVT__do_not_randomize = 0;
    __PVT__m_use_response_handler = 0;
    __PVT__is_rel_default = 0;
    __PVT__wait_rel_default = 0;
    __PVT__m_warn_deprecated_set = 0;
    __PVT__seq_kind = 0;
}

Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::~Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::~\n"); );
}
