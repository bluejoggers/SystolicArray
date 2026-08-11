// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"

void VRegister8b_test_top_v1___024unit__03a__03amonitor::init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VRegister8b_test_top_v1___024unit__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__monitor_mbox = VL_NEW(VRegister8b_test_top_v1_std__03a__03amailbox__Tz1, vlSymsp, 0U);
}

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03amonitor::__VnoInFunc_run(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VRegister8b_test_top_v1___024unit__03a__03amonitor::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h158ecda1__0;
    __Vtrigprevexpr_h158ecda1__0 = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atxn_object> unnamedblk1__DOT__txn;
    VL_WRITEF_NX("T=%0t [MONITOR] Starting unified bus monitoring\n",2, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    while (true) {
        CData/*0:0*/ __VdynTrigger_h2f6ffed2__0;
        __VdynTrigger_h2f6ffed2__0 = 0;
        __VdynTrigger_h2f6ffed2__0 = 0U;
        __Vtrigprevexpr_h158ecda1__0 = VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 88)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h2f6ffed2__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::monitor.virtual_if.clk)", 
                                                         "Register8b_test_top_v1.sv", 
                                                         88);
            __VdynTrigger_h2f6ffed2__0 = (VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 88)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h158ecda1__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2f6ffed2__0);
            __Vtrigprevexpr_h158ecda1__0 = VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 88)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::monitor.virtual_if.clk)", 
                                                     "Register8b_test_top_v1.sv", 
                                                     88);
        co_await vlSymsp->TOP.__VdlySched.delay(1ULL, 
                                                nullptr, 
                                                "Register8b_test_top_v1.sv", 
                                                89);
        unnamedblk1__DOT__txn = VL_NEW(VRegister8b_test_top_v1___024unit__03a__03atxn_object, vlSymsp);
        VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 95)->__PVT__reset 
            = VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 95)
            ->reset;
        VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 96)->__PVT__enable 
            = VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 96)
            ->enable;
        VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 97)->__PVT__data 
            = VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 97)
            ->data_in;
        VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 100)->__PVT__data_out 
            = VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 100)
            ->data_out;
        VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 102)->__VnoInFunc_print(vlSymsp, "MONITOR"s);
        co_await VL_NULL_CHECK(this->__PVT__monitor_mbox, "Register8b_test_top_v1.sv", 103)->__VnoInFunc_put(vlSymsp, unnamedblk1__DOT__txn);
    }
    co_return;
}

void VRegister8b_test_top_v1___024unit__03a__03amonitor::_ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VRegister8b_test_top_v1___024unit__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__virtual_if = nullptr;
}
