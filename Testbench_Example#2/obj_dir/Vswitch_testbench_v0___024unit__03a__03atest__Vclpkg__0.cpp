// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v0.h for the primary calling header

#include "Vswitch_testbench_v0__pch.h"

void Vswitch_testbench_v0___024unit__03a__03atest::init(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v0___024unit__03a__03atest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__ENV = VL_NEW(Vswitch_testbench_v0___024unit__03a__03aenvironment, vlSymsp);
}

void Vswitch_testbench_v0___024unit__03a__03atest::__VnoInFunc_run(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v0___024unit__03a__03atest::__VnoInFunc_run\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__ENV, "switch_testbench_v0.sv", 276)->__VnoInFunc_run(vlSymsp);
}

void Vswitch_testbench_v0___024unit__03a__03atest::_ctor_var_reset(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v0___024unit__03a__03atest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
