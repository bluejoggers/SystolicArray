// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61> imp) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz78::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz78::__PVT__m_if_mask = 0x00000066U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_get_peek_imp"s;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __Vtask_get__1__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_get(vlSymsp, __Vtask_get__1__t);
    t = __Vtask_get__1__t;
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_peek(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __Vtask_peek__2__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__2__t);
    t = __Vtask_peek__2__t;
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_try_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_try_get\n"); );
    // Locals
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __Vtask_try_get__3__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_try_get(vlProcess, vlSymsp, __Vtask_try_get__3__t, try_get__Vfuncrtn);
    t = __Vtask_try_get__3__t;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_can_get(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_can_get\n"); );
    // Body
    can_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_can_get(vlSymsp, can_get__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_try_peek(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_try_peek\n"); );
    // Locals
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __Vtask_try_peek__5__t;
    // Body
    try_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__5__t, try_peek__Vfuncrtn);
    t = __Vtask_try_peek__5__t;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_can_peek(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::__VnoInFunc_can_peek\n"); );
    // Body
    can_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_can_peek(vlSymsp, can_peek__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::~VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85::~\n"); );
}
