// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v1.h for the primary calling header

#include "Vswitch_testbench_v1__pch.h"

VlCoroutine Vswitch_testbench_v1___024unit__03a__03amonitor::__VnoInFunc_run(Vswitch_testbench_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v1___024unit__03a__03amonitor::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    VL_WRITEF_NX("T=%0t [MONITOR] Running...\n",2, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    co_await this->__VnoInFunc_sample_port(vlSymsp);
    co_return;
}

VlCoroutine Vswitch_testbench_v1___024unit__03a__03amonitor::__VnoInFunc_sample_port(Vswitch_testbench_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v1___024unit__03a__03amonitor::__VnoInFunc_sample_port\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h6bdfb46f__0;
    __Vtrigprevexpr_h6bdfb46f__0 = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vswitch_testbench_v1___024unit__03a__03atxn_object> unnamedblk1__DOT__txn_out;
    VlClassRef<Vswitch_testbench_v1___024unit__03a__03atxn_object> unnamedblk2__DOT__txn_in;
    while (true) {
        CData/*0:0*/ __VdynTrigger_h9a1ee694__0;
        __VdynTrigger_h9a1ee694__0 = 0;
        __VdynTrigger_h9a1ee694__0 = 0U;
        __Vtrigprevexpr_h6bdfb46f__0 = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 157)
            ->clock;
        while ((1U & (~ (IData)(__VdynTrigger_h9a1ee694__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::monitor.virtual_if.clock)", 
                                                         "switch_testbench_v1.sv", 
                                                         157);
            __VdynTrigger_h9a1ee694__0 = (VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 157)
                                          ->clock & 
                                          (~ (IData)(__Vtrigprevexpr_h6bdfb46f__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9a1ee694__0);
            __Vtrigprevexpr_h6bdfb46f__0 = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 157)
                ->clock;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::monitor.virtual_if.clock)", 
                                                     "switch_testbench_v1.sv", 
                                                     157);
        if (VL_LTS_III(32, 0U, this->__PVT__pipeline_queue.size())) {
            unnamedblk1__DOT__txn_out = this->__PVT__pipeline_queue.pop_front();
            VL_NULL_CHECK(unnamedblk1__DOT__txn_out, "switch_testbench_v1.sv", 163)->__PVT__address_a 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 163)
                ->address_a;
            VL_NULL_CHECK(unnamedblk1__DOT__txn_out, "switch_testbench_v1.sv", 164)->__PVT__data_a 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 164)
                ->data_a;
            VL_NULL_CHECK(unnamedblk1__DOT__txn_out, "switch_testbench_v1.sv", 165)->__PVT__address_b 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 165)
                ->address_b;
            VL_NULL_CHECK(unnamedblk1__DOT__txn_out, "switch_testbench_v1.sv", 166)->__PVT__data_b 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 166)
                ->data_b;
            co_await VL_NULL_CHECK(this->__PVT__monitor_mbox, "switch_testbench_v1.sv", 168)->__VnoInFunc_put(vlSymsp, unnamedblk1__DOT__txn_out);
            VL_NULL_CHECK(unnamedblk1__DOT__txn_out, "switch_testbench_v1.sv", 169)->__VnoInFunc_print(vlSymsp, "MONTIOR"s);
        }
        if (((1U & (~ VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 172)
                    ->reset)) && VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 172)
             ->valid)) {
            unnamedblk2__DOT__txn_in = VL_NEW(Vswitch_testbench_v1___024unit__03a__03atxn_object, vlSymsp);
            VL_NULL_CHECK(unnamedblk2__DOT__txn_in, "switch_testbench_v1.sv", 175)->__PVT__address 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 175)
                ->address;
            VL_NULL_CHECK(unnamedblk2__DOT__txn_in, "switch_testbench_v1.sv", 176)->__PVT__data 
                = VL_NULL_CHECK(this->__PVT__virtual_if, "switch_testbench_v1.sv", 176)
                ->data;
            this->__PVT__pipeline_queue.push_back(unnamedblk2__DOT__txn_in);
        }
    }
    co_return;
}

void Vswitch_testbench_v1___024unit__03a__03amonitor::init(Vswitch_testbench_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v1___024unit__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vswitch_testbench_v1___024unit__03a__03amonitor::_ctor_var_reset(Vswitch_testbench_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vswitch_testbench_v1___024unit__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__virtual_if = nullptr;
}
