// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61__Vclpkg::__VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__Tz79> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz79__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__Tz79> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz79__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_item_done_get_trigger_data(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &item_done_get_trigger_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_item_done_get_trigger_data\n"); );
    // Body
    this->__VnoInFunc_last_rsp(vlSymsp, 0U, item_done_get_trigger_data__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base__pi22::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__seq_item_export = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi21, vlProcess, vlSymsp, "seq_item_export"s, 
                                          VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61>{this});
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_stop_sequences(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_stop_sequences\n"); );
    // Locals
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __Vtask_try_get__8__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_2__try_get;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__used;
    VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences(vlSymsp);
    this->__PVT__sequence_item_requested = 0U;
    this->__PVT__get_next_item_called = 0U;
    VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base__pi22::__PVT__m_req_fifo, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 169)->__VnoInFunc_used(vlSymsp, __VlefCall_0__used);
    if ((0U != __VlefCall_0__used)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), "Sequences stopped.  Removing request from sequencer fifo"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        do {
            VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base__pi22::__PVT__m_req_fifo, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 171)->__VnoInFunc_try_get(vlProcess, vlSymsp, __Vtask_try_get__8__t, __VlefCall_2__try_get);
        } while (__VlefCall_2__try_get);
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequencer"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_m_find_number_driver_connections(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_m_find_number_driver_connections\n"); );
    // Body
    VlAssocArray<std::string, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_port_component_base>> provided_to_port_list;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_port_component_base> seq_port_base;
    m_find_number_driver_connections__Vfuncrtn = 0U;
    provided_to_port_list.clear();
    VL_NULL_CHECK(this->__PVT__seq_item_export, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 197)->__VnoInFunc_get_comp(vlSymsp, seq_port_base);
    VL_NULL_CHECK(seq_port_base, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 198)->__VnoInFunc_get_provided_to(vlSymsp, provided_to_port_list);
    m_find_number_driver_connections__Vfuncrtn = provided_to_port_list.size();
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_get_next_item(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __Vtask_peek__14__t;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    if (this->__PVT__get_next_item_called) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "Get_next_item called twice without item_done or get in between"s, 0U, ""s, 0U, ""s, 0U);
    }
    if ((1U & (~ (IData)(this->__PVT__sequence_item_requested)))) {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
    }
    this->__PVT__sequence_item_requested = 1U;
    this->__PVT__get_next_item_called = 1U;
    co_await VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base__pi22::__PVT__m_req_fifo, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 223)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__14__t);
    t = __Vtask_peek__14__t;
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_try_next_item(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __Vtask_try_peek__22__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__try_peek;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ selected_sequence;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> seq;
    {
        selected_sequence = 0U;
        if (this->__PVT__get_next_item_called) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "get_next_item/try_next_item called twice without item_done or get in between"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
        this->__VnoInFunc_m_choose_next_request(vlProcess, vlSymsp, selected_sequence);
        if ((0xffffffffU == selected_sequence)) {
            t = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_sequence_q.at(selected_sequence), "../../uvm/distrib/src/seq/uvm_sequencer.svh", 254)
                                                      ->__PVT__request_id);
        seq = VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_sequence_q.at(selected_sequence), "../../uvm/distrib/src/seq/uvm_sequencer.svh", 255)
            ->__PVT__sequence_ptr;
        VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_sequence_q.erase(selected_sequence);
        this->__VnoInFunc_m_update_lists(vlSymsp);
        this->__PVT__sequence_item_requested = 1U;
        this->__PVT__get_next_item_called = 1U;
        co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
        VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base__pi22::__PVT__m_req_fifo, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 265)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__22__t, __VlefCall_1__try_peek);
        t = __Vtask_try_peek__22__t;
        if ((1U & (~ (IData)(__VlefCall_1__try_peek)))) {
            VL_NULL_CHECK(seq, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 267)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "TRY_NEXT_BLOCKED"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("try_next_item: the selected sequence '"s, __VlefCall_2__get_full_name), "' did not produce an item within an NBA delay. "s), "Sequences should not consume time between calls to start_item and finish_item. "s), "Returning null item."s)), 0U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_item_done(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_item_done\n"); );
    // Locals
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __Vtask_try_get__25__t;
    IData/*31:0*/ __Vtask_get_transaction_id__27__Vfuncout;
    __Vtask_get_transaction_id__27__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__try_get;
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> t;
    this->__PVT__sequence_item_requested = 0U;
    this->__PVT__get_next_item_called = 0U;
    VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base__pi22::__PVT__m_req_fifo, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 284)->__VnoInFunc_try_get(vlProcess, vlSymsp, __Vtask_try_get__25__t, __VlefCall_0__try_get);
    t = __Vtask_try_get__25__t;
    if (__VlefCall_0__try_get) {
        VL_NULL_CHECK(t, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 288)->__VnoInFunc_get_sequence_id(vlSymsp, VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_item_sequence_id);
        VL_NULL_CHECK(t, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 289)->__VnoInFunc_get_transaction_id(vlSymsp, __Vtask_get_transaction_id__27__Vfuncout);
        VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_item_transaction_id 
            = __Vtask_get_transaction_id__27__Vfuncout;
    } else {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), "Item_done() called with no outstanding requests. Each call to item_done() must be paired with a previous call to get_next_item()."s, 0U, ""s, 0U, ""s, 0U);
    }
    if ((VlNull{} != item)) {
        VL_NULL_CHECK(this->__PVT__seq_item_export, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 293)->__VnoInFunc_put_response(vlProcess, vlSymsp, item);
    }
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_put(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __Vtask_peek__34__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((1U & (~ (IData)(this->__PVT__sequence_item_requested)))) {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
    }
    this->__PVT__sequence_item_requested = 1U;
    co_await VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base__pi22::__PVT__m_req_fifo, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 317)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__34__t);
    t = __Vtask_peek__34__t;
    this->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_peek(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __Vtask_peek__37__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((1U & (~ (IData)(this->__PVT__sequence_item_requested)))) {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
    }
    this->__PVT__sequence_item_requested = 1U;
    co_await VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base__pi22::__PVT__m_req_fifo, "../../uvm/distrib/src/seq/uvm_sequencer.svh", 334)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__37__t);
    t = __Vtask_peek__37__t;
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_item_done_trigger(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_item_done_trigger\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_item_done(vlProcess, vlSymsp, item);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base::__PVT__seq_kind 
        = VL_RANDOM_RNG_I(__Vm_rng);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__sequence_item_requested = 0;
    __PVT__get_next_item_called = 0;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::~VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer__Tz61_TBz61::~\n"); );
}
