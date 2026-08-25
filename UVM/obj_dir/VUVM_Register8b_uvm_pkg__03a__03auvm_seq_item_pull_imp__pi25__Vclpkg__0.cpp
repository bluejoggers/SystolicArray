// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_> imp) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz115::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz115::__PVT__m_if_mask = 0x000001ffU;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_imp"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_disable_auto_item_recording(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_is_auto_item_recording_enabled(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, is_auto_item_recording_enabled__Vfuncrtn);
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_get_next_item(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_next_item__3__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_try_next_item(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_item_done(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_item_done\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_item_done(vlSymsp, t);
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_wait_for_sequences(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_has_do_available(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_has_do_available\n"); );
    // Body
    has_do_available__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_has_do_available(vlSymsp, has_do_available__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_put_response(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_put_response\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__9__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_get(vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_peek(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__10__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_put(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_put(vlSymsp, t);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::~VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi25::~\n"); );
}
