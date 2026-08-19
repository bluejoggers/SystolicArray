// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ min_size, IData/*31:0*/ max_size) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::init(vlProcess, vlSymsp, name, parent, 0U, min_size, max_size);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if_mask = 0x000001ffU;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_get_type_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_port"s;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_disable_auto_item_recording(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_is_auto_item_recording_enabled(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, is_auto_item_recording_enabled__Vfuncrtn);
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_get_next_item(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_next_item__3__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_try_next_item(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
    co_return;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_item_done(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_item_done\n"); );
    // Body
    VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_item_done(vlSymsp, t);
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_wait_for_sequences(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_wait_for_sequences(vlSymsp);
    co_return;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_has_do_available(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_has_do_available\n"); );
    // Body
    has_do_available__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_has_do_available(vlSymsp, has_do_available__Vfuncrtn);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_put_response(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_put_response\n"); );
    // Body
    VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_put_response(vlSymsp, t);
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__9__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_get(vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_peek(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__10__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
    co_return;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_put(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90::__PVT__m_if, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_put(vlSymsp, t);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::_ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__print_enabled = 0;
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15::~\n"); );
}
