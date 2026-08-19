// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz42> imp) {
    Vhello_uvm_uvm_pkg__03a__03auvm_port_base__Tz82::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vhello_uvm_uvm_pkg__03a__03auvm_port_base__Tz82::__PVT__m_if_mask = 0x00000066U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_get_peek_imp"s;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_get(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__1__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_get(vlSymsp, __Vtask_get__1__t);
    t = __Vtask_get__1__t;
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_peek(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__2__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__2__t);
    t = __Vtask_peek__2__t;
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_try_get(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_try_get\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_get__3__t;
    // Body
    try_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__3__t, try_get__Vfuncrtn);
    t = __Vtask_try_get__3__t;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_can_get(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_can_get\n"); );
    // Body
    can_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_can_get(vlSymsp, can_get__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_try_peek(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_try_peek\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_peek__5__t;
    // Body
    try_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__5__t, try_peek__Vfuncrtn);
    t = __Vtask_try_peek__5__t;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_can_peek(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::__VnoInFunc_can_peek\n"); );
    // Body
    can_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_can_peek(vlSymsp, can_peek__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::~Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92::~\n"); );
}
