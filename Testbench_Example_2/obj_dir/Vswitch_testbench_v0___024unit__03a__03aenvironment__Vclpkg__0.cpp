// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v0.h for the primary calling header

#include "Vswitch_testbench_v0__pch.h"

void Vswitch_testbench_v0___024unit__03a__03aenvironment::init(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vswitch_testbench_v0___024unit__03a__03aenvironment::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__DRV = VL_NEW(Vswitch_testbench_v0___024unit__03a__03adriver, vlSymsp);
    this->__PVT__GEN = VL_NEW(Vswitch_testbench_v0___024unit__03a__03agenerator, vlSymsp);
    this->__PVT__MON = VL_NEW(Vswitch_testbench_v0___024unit__03a__03amonitor, vlSymsp);
    this->__PVT__SCB = VL_NEW(Vswitch_testbench_v0___024unit__03a__03ascoreboard, vlSymsp);
    this->__PVT__GEN_DRV_MBX = VL_NEW(Vswitch_testbench_v0_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__MON_SCB_MBX = VL_NEW(Vswitch_testbench_v0_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    VL_NULL_CHECK(this->__PVT__DRV, "switch_testbench_v0.sv", 248)->__PVT__driver_mbox 
        = this->__PVT__GEN_DRV_MBX;
    VL_NULL_CHECK(this->__PVT__GEN, "switch_testbench_v0.sv", 249)->__PVT__generator_mbox 
        = this->__PVT__GEN_DRV_MBX;
    VL_NULL_CHECK(this->__PVT__MON, "switch_testbench_v0.sv", 251)->__PVT__monitor_mbox 
        = this->__PVT__MON_SCB_MBX;
    VL_NULL_CHECK(this->__PVT__SCB, "switch_testbench_v0.sv", 252)->__PVT__scoreboard_mbox 
        = this->__PVT__MON_SCB_MBX;
}

void Vswitch_testbench_v0___024unit__03a__03aenvironment::__VnoInFunc_run(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vswitch_testbench_v0___024unit__03a__03aenvironment::__VnoInFunc_run\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__DRV, "switch_testbench_v0.sv", 256)->__PVT__virtual_if 
        = this->__PVT__vif;
    VL_NULL_CHECK(this->__PVT__MON, "switch_testbench_v0.sv", 257)->__PVT__virtual_if 
        = this->__PVT__vif;
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp);
    this->__VnoInFunc_run____Vfork_1__2(vlSymsp);
    this->__VnoInFunc_run____Vfork_1__3(vlSymsp);
}

VlCoroutine Vswitch_testbench_v0___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__3(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vswitch_testbench_v0___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__3\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "switch_testbench_v0.sv", 
                                            259);
    co_await VL_NULL_CHECK(this->__PVT__SCB, "switch_testbench_v0.sv", 263)->__VnoInFunc_run(vlSymsp);
    co_return;
}

VlCoroutine Vswitch_testbench_v0___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vswitch_testbench_v0___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "switch_testbench_v0.sv", 
                                            259);
    VL_NULL_CHECK(this->__PVT__MON, "switch_testbench_v0.sv", 262)->__VnoInFunc_run(vlSymsp);
    co_return;
}

VlCoroutine Vswitch_testbench_v0___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vswitch_testbench_v0___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "switch_testbench_v0.sv", 
                                            259);
    co_await VL_NULL_CHECK(this->__PVT__GEN, "switch_testbench_v0.sv", 261)->__VnoInFunc_run(vlSymsp);
    co_return;
}

VlCoroutine Vswitch_testbench_v0___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vswitch_testbench_v0___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "switch_testbench_v0.sv", 
                                            259);
    co_await VL_NULL_CHECK(this->__PVT__DRV, "switch_testbench_v0.sv", 260)->__VnoInFunc_run(vlSymsp);
    co_return;
}

void Vswitch_testbench_v0___024unit__03a__03aenvironment::_ctor_var_reset(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vswitch_testbench_v0___024unit__03a__03aenvironment::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}
