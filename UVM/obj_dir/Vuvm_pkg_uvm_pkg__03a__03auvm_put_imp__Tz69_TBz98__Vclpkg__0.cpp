// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69> imp) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz97::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz97::__PVT__m_if_mask = 0x00000011U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::__VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_put_imp"s;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::__VnoInFunc_put(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::__VnoInFunc_put\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 97)->__VnoInFunc_put(vlSymsp, t);
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::__VnoInFunc_try_put(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::__VnoInFunc_try_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_put__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 97)->__VnoInFunc_try_put(vlProcess, vlSymsp, t, try_put__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::__VnoInFunc_can_put(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::__VnoInFunc_can_put\n"); );
    // Body
    can_put__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_imps.svh", 97)->__VnoInFunc_can_put(vlSymsp, can_put__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::~Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98::~\n"); );
}
