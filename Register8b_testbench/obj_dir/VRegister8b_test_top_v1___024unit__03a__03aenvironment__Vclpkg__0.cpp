// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"

void VRegister8b_test_top_v1___024unit__03a__03aenvironment::init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRegister8b_test_top_v1___024unit__03a__03aenvironment::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__DRV = VL_NEW(VRegister8b_test_top_v1___024unit__03a__03adriver, vlSymsp);
    this->__PVT__MON = VL_NEW(VRegister8b_test_top_v1___024unit__03a__03amonitor, vlSymsp);
    this->__PVT__SCB = VL_NEW(VRegister8b_test_top_v1___024unit__03a__03ascoreboard, vlSymsp, VL_NULL_CHECK(this->__PVT__MON, "Register8b_test_top_v1.sv", 182)
                              ->__PVT__monitor_mbox);
}

void VRegister8b_test_top_v1___024unit__03a__03aenvironment::__VnoInFunc_run(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRegister8b_test_top_v1___024unit__03a__03aenvironment::__VnoInFunc_run\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__DRV, "Register8b_test_top_v1.sv", 186)->__PVT__virtual_if 
        = this->__PVT__virtual_if;
    VL_NULL_CHECK(this->__PVT__MON, "Register8b_test_top_v1.sv", 187)->__PVT__virtual_if 
        = this->__PVT__virtual_if;
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp);
    this->__VnoInFunc_run____Vfork_1__2(vlSymsp);
}

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRegister8b_test_top_v1___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "Register8b_test_top_v1.sv", 
                                            189);
    co_await VL_NULL_CHECK(this->__PVT__SCB, "Register8b_test_top_v1.sv", 192)->__VnoInFunc_run(vlSymsp);
    co_return;
}

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRegister8b_test_top_v1___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "Register8b_test_top_v1.sv", 
                                            189);
    co_await VL_NULL_CHECK(this->__PVT__MON, "Register8b_test_top_v1.sv", 191)->__VnoInFunc_run(vlSymsp);
    co_return;
}

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRegister8b_test_top_v1___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "Register8b_test_top_v1.sv", 
                                            189);
    co_await VL_NULL_CHECK(this->__PVT__DRV, "Register8b_test_top_v1.sv", 190)->__VnoInFunc_run(vlSymsp);
    co_return;
}

void VRegister8b_test_top_v1___024unit__03a__03aenvironment::_ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRegister8b_test_top_v1___024unit__03a__03aenvironment::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__virtual_if = nullptr;
}
