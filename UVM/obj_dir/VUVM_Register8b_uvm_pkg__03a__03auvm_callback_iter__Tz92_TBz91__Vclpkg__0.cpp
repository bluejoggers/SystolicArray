// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::init(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_backdoor> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_obj = obj;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::__VnoInFunc_first(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> &first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::__VnoInFunc_first\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> __Vfunc_get_first__0__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz92_TBz91__Vclpkg.__VnoInFunc_get_first(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_first__0__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_first__0__Vfuncout;
    first__Vfuncrtn = this->__PVT__m_cb;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::__VnoInFunc_last(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> &last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::__VnoInFunc_last\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> __Vfunc_get_last__1__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz92_TBz91__Vclpkg.__VnoInFunc_get_last(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_last__1__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_last__1__Vfuncout;
    last__Vfuncrtn = this->__PVT__m_cb;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::__VnoInFunc_next(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> &next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::__VnoInFunc_next\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> __Vfunc_get_next__2__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz92_TBz91__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_next__2__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_next__2__Vfuncout;
    next__Vfuncrtn = this->__PVT__m_cb;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::__VnoInFunc_prev(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> &prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::__VnoInFunc_prev\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> __Vfunc_get_prev__3__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz92_TBz91__Vclpkg.__VnoInFunc_get_prev(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_prev__3__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_prev__3__Vfuncout;
    prev__Vfuncrtn = this->__PVT__m_cb;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::__VnoInFunc_get_cb(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> &get_cb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::__VnoInFunc_get_cb\n"); );
    // Body
    get_cb__Vfuncrtn = this->__PVT__m_cb;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz91::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_i = 0;
}
