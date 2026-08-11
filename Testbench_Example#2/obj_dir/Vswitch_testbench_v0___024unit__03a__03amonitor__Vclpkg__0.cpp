// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v0.h for the primary calling header

#include "Vswitch_testbench_v0__pch.h"

void Vswitch_testbench_v0___024unit__03a__03amonitor::init(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v0___024unit__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__sema4 = VL_NEW(Vswitch_testbench_v0_std__03a__03asemaphore, vlSymsp, 1U);
}

void Vswitch_testbench_v0___024unit__03a__03amonitor::__VnoInFunc_run(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v0___024unit__03a__03amonitor::__VnoInFunc_run\n"); );
    // Body
    VL_WRITEF_NX("T=%0t [MONITOR] Starting...\n",2, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp);
}

VlCoroutine Vswitch_testbench_v0___024unit__03a__03amonitor::__VnoInFunc_run____Vfork_1__1(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v0___024unit__03a__03amonitor::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "switch_testbench_v0.sv", 
                                            156);
    co_await this->__VnoInFunc_sample_port(vlSymsp, "Thread1"s);
    co_return;
}

VlCoroutine Vswitch_testbench_v0___024unit__03a__03amonitor::__VnoInFunc_run____Vfork_1__0(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v0___024unit__03a__03amonitor::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "switch_testbench_v0.sv", 
                                            156);
    co_await this->__VnoInFunc_sample_port(vlSymsp, "Thread0"s);
    co_return;
}

VlCoroutine Vswitch_testbench_v0___024unit__03a__03amonitor::__VnoInFunc_sample_port(Vswitch_testbench_v0__Syms* __restrict vlSymsp, std::string tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v0___024unit__03a__03amonitor::__VnoInFunc_sample_port\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h6bdfb46f__1;
    __Vtrigprevexpr_h6bdfb46f__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h6bdfb46f__0;
    __Vtrigprevexpr_h6bdfb46f__0 = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vswitch_testbench_v0___024unit__03a__03atxn_object> unnamedblk1__DOT__txn;
    while (true) {
        CData/*0:0*/ __VdynTrigger_h9a1ee694__0;
        __VdynTrigger_h9a1ee694__0 = 0;
        __VdynTrigger_h9a1ee694__0 = 0U;
        __Vtrigprevexpr_h6bdfb46f__0 = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 164)
            ->clock;
        while ((1U & (~ (IData)(__VdynTrigger_h9a1ee694__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::monitor.virtual_if.clock)", 
                                                         "switch_testbench_v0.sv", 
                                                         164);
            __VdynTrigger_h9a1ee694__0 = (VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 164)
                                          ->clock & 
                                          (~ (IData)(__Vtrigprevexpr_h6bdfb46f__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9a1ee694__0);
            __Vtrigprevexpr_h6bdfb46f__0 = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 164)
                ->clock;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::monitor.virtual_if.clock)", 
                                                     "switch_testbench_v0.sv", 
                                                     164);
        if (VL_UNLIKELY((((1U & (~ VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 166)
                                 ->reset)) && VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 166)
                          ->valid)))) {
            unnamedblk1__DOT__txn = VL_NEW(Vswitch_testbench_v0___024unit__03a__03atxn_object, vlSymsp);
            co_await VL_NULL_CHECK(this->__PVT__sema4, "switch_testbench_v0.sv", 168)->__VnoInFunc_get(vlSymsp, 1U);
            VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v0.sv", 170)->__PVT__address 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 170)
                ->address;
            VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v0.sv", 171)->__PVT__data 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 171)
                ->data;
            VL_WRITEF_NX("T=%0t [MONITOR] %s: First part finished.\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(tag));
            CData/*0:0*/ __VdynTrigger_h9a1ee694__1;
            __VdynTrigger_h9a1ee694__1 = 0;
            __VdynTrigger_h9a1ee694__1 = 0U;
            __Vtrigprevexpr_h6bdfb46f__1 = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 175)
                ->clock;
            while ((1U & (~ (IData)(__VdynTrigger_h9a1ee694__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@(posedge $unit::monitor.virtual_if.clock)", 
                                                             "switch_testbench_v0.sv", 
                                                             175);
                __VdynTrigger_h9a1ee694__1 = (VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 175)
                                              ->clock 
                                              & (~ (IData)(__Vtrigprevexpr_h6bdfb46f__1)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9a1ee694__1);
                __Vtrigprevexpr_h6bdfb46f__1 = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 175)
                    ->clock;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@(posedge $unit::monitor.virtual_if.clock)", 
                                                         "switch_testbench_v0.sv", 
                                                         175);
            VL_NULL_CHECK(this->__PVT__sema4, "switch_testbench_v0.sv", 176)->__VnoInFunc_put(vlSymsp, 1U);
            VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v0.sv", 178)->__PVT__address_a 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 178)
                ->address_a;
            VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v0.sv", 179)->__PVT__address_b 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 179)
                ->address_b;
            VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v0.sv", 180)->__PVT__data_a 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 180)
                ->data_a;
            VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v0.sv", 181)->__PVT__data_b 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v0.sv", 181)
                ->data_b;
            VL_WRITEF_NX("T=%0t [MONITOR] %s: Second part finished.\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(tag));
            co_await VL_NULL_CHECK(this->__PVT__monitor_mbox, "switch_testbench_v0.sv", 185)->__VnoInFunc_put(vlSymsp, unnamedblk1__DOT__txn);
            VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v0.sv", 186)->__VnoInFunc_print(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Monitor_"s, tag)));
        }
    }
    co_return;
}

void Vswitch_testbench_v0___024unit__03a__03amonitor::_ctor_var_reset(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v0___024unit__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__virtual_if = nullptr;
}
