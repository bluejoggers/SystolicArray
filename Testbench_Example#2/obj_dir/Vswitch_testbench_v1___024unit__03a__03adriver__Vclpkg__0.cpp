// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v1.h for the primary calling header

#include "Vswitch_testbench_v1__pch.h"

VlCoroutine Vswitch_testbench_v1___024unit__03a__03adriver::__VnoInFunc_run(Vswitch_testbench_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v1___024unit__03a__03adriver::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hb5272488__1;
    __Vtrigprevexpr_hb5272488__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hb5272488__0;
    __Vtrigprevexpr_hb5272488__0 = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vswitch_testbench_v1___024unit__03a__03atxn_object> unnamedblk1__DOT__txn;
    VL_WRITEF_NX("T=%0t [DRIVER] Running...\n",2, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    CData/*0:0*/ __VdynTrigger_hcf4855eb__0;
    __VdynTrigger_hcf4855eb__0 = 0;
    __VdynTrigger_hcf4855eb__0 = 0U;
    __Vtrigprevexpr_hb5272488__0 = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 94)
        ->clock;
    while ((1U & (~ (IData)(__VdynTrigger_hcf4855eb__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge $unit::driver.virtual_if.clock)", 
                                                     "switch_testbench_v1.sv", 
                                                     94);
        __VdynTrigger_hcf4855eb__0 = (VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 94)
                                      ->clock & (~ (IData)(__Vtrigprevexpr_hb5272488__0)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hcf4855eb__0);
        __Vtrigprevexpr_hb5272488__0 = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 94)
            ->clock;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge $unit::driver.virtual_if.clock)", 
                                                 "switch_testbench_v1.sv", 
                                                 94);
    while (true) {
        VL_WRITEF_NX("T=%0t [DRIVER] Waiting for transaction from mailbox...\n",2, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        co_await VL_NULL_CHECK(this->__PVT__driver_mbox, "switch_testbench_v1.sv", 99)->__VnoInFunc_get(vlSymsp, unnamedblk1__DOT__txn);
        VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 100)->__VnoInFunc_print(vlSymsp, "DRIVER"s);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h052e2c7a__0;
        __Vintraval_h052e2c7a__0 = 0;
        __Vintraval_h052e2c7a__0 = VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 102)
            ->__PVT__valid;
        this->__VnoInFunc_run____Vfork_1__0(vlSymsp, __Vintraval_h052e2c7a__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*7:0*/ __Vintraval_h1001d49e__0;
        __Vintraval_h1001d49e__0 = 0;
        __Vintraval_h1001d49e__0 = VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 104)
            ->__PVT__address;
        this->__VnoInFunc_run____Vfork_2__0(vlSymsp, __Vintraval_h1001d49e__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        SData/*15:0*/ __Vintraval_h66436eac__0;
        __Vintraval_h66436eac__0 = 0;
        __Vintraval_h66436eac__0 = VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 105)
            ->__PVT__data;
        this->__VnoInFunc_run____Vfork_3__0(vlSymsp, __Vintraval_h66436eac__0);
        CData/*0:0*/ __VdynTrigger_hcf4855eb__1;
        __VdynTrigger_hcf4855eb__1 = 0;
        __VdynTrigger_hcf4855eb__1 = 0U;
        __Vtrigprevexpr_hb5272488__1 = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 107)
            ->clock;
        while ((1U & (~ (IData)(__VdynTrigger_hcf4855eb__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::driver.virtual_if.clock)", 
                                                         "switch_testbench_v1.sv", 
                                                         107);
            __VdynTrigger_hcf4855eb__1 = (VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 107)
                                          ->clock & 
                                          (~ (IData)(__Vtrigprevexpr_hb5272488__1)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hcf4855eb__1);
            __Vtrigprevexpr_hb5272488__1 = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 107)
                ->clock;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::driver.virtual_if.clock)", 
                                                     "switch_testbench_v1.sv", 
                                                     107);
        vlSymsp->fireEvent(this->__PVT__driver_done);
    }
    co_return;
}

VlCoroutine Vswitch_testbench_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_3__0(Vswitch_testbench_v1__Syms* __restrict vlSymsp, SData/*15:0*/ __Vintraval_h66436eac__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_3__0\n"); );
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
                                                     "switch_testbench_v1.sv", 
                                                     105);
        __VdynTrigger_h2615856f__2 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__2);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "switch_testbench_v1.sv", 
                                                     105);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "switch_testbench_v1.sv", 
                                                 105);
    VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 105)->data 
        = __Vintraval_h66436eac__0;
    co_return;
}

VlCoroutine Vswitch_testbench_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_2__0(Vswitch_testbench_v1__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_h1001d49e__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_2__0\n"); );
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
                                                     "switch_testbench_v1.sv", 
                                                     104);
        __VdynTrigger_h2615856f__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "switch_testbench_v1.sv", 
                                                     104);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "switch_testbench_v1.sv", 
                                                 104);
    VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 104)->address 
        = __Vintraval_h1001d49e__0;
    co_return;
}

VlCoroutine Vswitch_testbench_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_1__0(Vswitch_testbench_v1__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h052e2c7a__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v1___024unit__03a__03adriver::__VnoInFunc_run____Vfork_1__0\n"); );
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
                                                     "switch_testbench_v1.sv", 
                                                     102);
        __VdynTrigger_h2615856f__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "switch_testbench_v1.sv", 
                                                     102);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "switch_testbench_v1.sv", 
                                                 102);
    VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 102)->valid 
        = __Vintraval_h052e2c7a__0;
    co_return;
}

void Vswitch_testbench_v1___024unit__03a__03adriver::init(Vswitch_testbench_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v1___024unit__03a__03adriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vswitch_testbench_v1___024unit__03a__03adriver::_ctor_var_reset(Vswitch_testbench_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v1___024unit__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__virtual_if = nullptr;
}
