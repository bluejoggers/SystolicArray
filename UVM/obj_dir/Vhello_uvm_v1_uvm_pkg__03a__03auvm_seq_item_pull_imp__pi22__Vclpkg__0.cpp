// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer__Tz88_TBz88> imp) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz98::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz98::__PVT__m_if_mask = 0x000001ffU;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_get_type_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_imp"s;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_disable_auto_item_recording(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_is_auto_item_recording_enabled(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, is_auto_item_recording_enabled__Vfuncrtn);
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_get_next_item(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> __Vtask_get_next_item__3__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_try_next_item(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
    co_return;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_item_done(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_item_done\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_item_done(vlProcess, vlSymsp, t);
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_wait_for_sequences(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
    co_return;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_has_do_available(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_has_do_available\n"); );
    // Body
    has_do_available__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_has_do_available(vlSymsp, has_do_available__Vfuncrtn);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_put_response(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> __Vtask_get__9__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_peek(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__10__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
    co_return;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_put(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_put(vlSymsp, t);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::_ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_v1_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi22::~\n"); );
}
