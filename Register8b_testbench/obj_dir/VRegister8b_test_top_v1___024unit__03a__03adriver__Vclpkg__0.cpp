// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03adriver::__VnoInFunc_run(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VRegister8b_test_top_v1___024unit__03a__03adriver::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hbfe35d5a__0;
    __Vtrigprevexpr_hbfe35d5a__0 = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atxn_object> unnamedblk1__DOT__txn;
    VL_WRITEF_NX("T=%0t [DRIVER] Starting\n",2, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__driver_mbox, "Register8b_test_top_v1.sv", 60)->__VnoInFunc_get(vlSymsp, unnamedblk1__DOT__txn);
        CData/*0:0*/ __VdynTrigger_hc60b8f79__0;
        __VdynTrigger_hc60b8f79__0 = 0;
        __VdynTrigger_hc60b8f79__0 = 0U;
        __Vtrigprevexpr_hbfe35d5a__0 = VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 62)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_hc60b8f79__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::driver.virtual_if.clk)", 
                                                         "Register8b_test_top_v1.sv", 
                                                         62);
            __VdynTrigger_hc60b8f79__0 = (VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 62)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_hbfe35d5a__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc60b8f79__0);
            __Vtrigprevexpr_hbfe35d5a__0 = VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 62)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::driver.virtual_if.clk)", 
                                                     "Register8b_test_top_v1.sv", 
                                                     62);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h49fec966__0;
        __Vintraval_h49fec966__0 = 0;
        __Vintraval_h49fec966__0 = VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 63)
            ->__PVT__reset;
        this->__VnoInFunc_run____Vfork_1__0(vlSymsp, __Vintraval_h49fec966__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_hd4e5978c__0;
        __Vintraval_hd4e5978c__0 = 0;
        __Vintraval_hd4e5978c__0 = VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 64)
            ->__PVT__enable;
        this->__VnoInFunc_run____Vfork_2__0(vlSymsp, __Vintraval_hd4e5978c__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*7:0*/ __Vintraval_hf5a020bc__0;
        __Vintraval_hf5a020bc__0 = 0;
        __Vintraval_hf5a020bc__0 = VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 65)
            ->__PVT__data;
        this->__VnoInFunc_run____Vfork_3__0(vlSymsp, __Vintraval_hf5a020bc__0);
        VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 67)->__VnoInFunc_print(vlSymsp, "DRIVER"s);
        vlSymsp->fireEvent(this->__PVT__driver_done);
    }
    co_return;
}

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_3__0(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_hf5a020bc__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VRegister8b_test_top_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_3__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h2615856f__2;
    __VdynTrigger_h2615856f__2 = 0;
    __VdynTrigger_h2615856f__2 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h2615856f__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "Register8b_test_top_v1.sv", 
                                                     65);
        __VdynTrigger_h2615856f__2 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__2);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "Register8b_test_top_v1.sv", 
                                                     65);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "Register8b_test_top_v1.sv", 
                                                 65);
    VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 65)->data_in 
        = __Vintraval_hf5a020bc__0;
    co_return;
}

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_2__0(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hd4e5978c__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VRegister8b_test_top_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h2615856f__1;
    __VdynTrigger_h2615856f__1 = 0;
    __VdynTrigger_h2615856f__1 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h2615856f__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "Register8b_test_top_v1.sv", 
                                                     64);
        __VdynTrigger_h2615856f__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "Register8b_test_top_v1.sv", 
                                                     64);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "Register8b_test_top_v1.sv", 
                                                 64);
    VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 64)->enable 
        = __Vintraval_hd4e5978c__0;
    co_return;
}

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_1__0(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h49fec966__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VRegister8b_test_top_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h2615856f__0;
    __VdynTrigger_h2615856f__0 = 0;
    __VdynTrigger_h2615856f__0 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h2615856f__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "Register8b_test_top_v1.sv", 
                                                     63);
        __VdynTrigger_h2615856f__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "Register8b_test_top_v1.sv", 
                                                     63);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "Register8b_test_top_v1.sv", 
                                                 63);
    VL_NULL_CHECK(this->__PVT__virtual_if, "Register8b_test_top_v1.sv", 63)->reset 
        = __Vintraval_h49fec966__0;
    co_return;
}

void VRegister8b_test_top_v1___024unit__03a__03adriver::init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VRegister8b_test_top_v1___024unit__03a__03adriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VRegister8b_test_top_v1___024unit__03a__03adriver::_ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VRegister8b_test_top_v1___024unit__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__virtual_if = nullptr;
}
