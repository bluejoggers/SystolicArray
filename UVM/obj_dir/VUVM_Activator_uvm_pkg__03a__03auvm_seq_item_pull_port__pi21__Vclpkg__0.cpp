// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ min_size, IData/*31:0*/ max_size) {
    VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::init(vlProcess, vlSymsp, name, parent, 0U, min_size, max_size);
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if_mask = 0x000001ffU;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_port"s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_disable_auto_item_recording(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_is_auto_item_recording_enabled(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, is_auto_item_recording_enabled__Vfuncrtn);
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_get_next_item(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> __Vtask_get_next_item__3__t;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_try_next_item(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
    co_return;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_item_done(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_item_done\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_item_done(vlProcess, vlSymsp, t);
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_wait_for_sequences(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_wait_for_sequences(vlSymsp);
    co_return;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_has_do_available(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_has_do_available\n"); );
    // Body
    has_do_available__Vfuncrtn = 0U;
    VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_has_do_available(vlSymsp, has_do_available__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_put_response(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_get(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> __Vtask_get__9__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_get(vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_peek(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> __Vtask_peek__10__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
    co_return;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_put(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz81::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_put(vlSymsp, t);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__print_enabled = 0;
}

VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::~VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21::~\n"); );
}
