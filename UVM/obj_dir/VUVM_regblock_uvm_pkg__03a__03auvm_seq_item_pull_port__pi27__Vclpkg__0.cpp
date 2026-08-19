// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ min_size, IData/*31:0*/ max_size) {
    VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::init(vlProcess, vlSymsp, name, parent, 0U, min_size, max_size);
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if_mask = 0x000001ffU;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_port"s;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_disable_auto_item_recording(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_is_auto_item_recording_enabled(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, is_auto_item_recording_enabled__Vfuncrtn);
}

VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_get_next_item(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_next_item__3__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
    co_return;
}

VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_try_next_item(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
    co_return;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_item_done(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_item_done\n"); );
    // Body
    VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_item_done(vlSymsp, t);
}

VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_wait_for_sequences(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_wait_for_sequences(vlSymsp);
    co_return;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_has_do_available(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_has_do_available\n"); );
    // Body
    has_do_available__Vfuncrtn = 0U;
    VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_has_do_available(vlSymsp, has_do_available__Vfuncrtn);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_put_response(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_put_response\n"); );
    // Body
    VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_put_response(vlSymsp, t);
}

VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_get(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__9__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_get(vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
    co_return;
}

VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_peek(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__10__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
    co_return;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_put(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz116::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_put(vlSymsp, t);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__print_enabled = 0;
}

VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::~VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi27::~\n"); );
}
