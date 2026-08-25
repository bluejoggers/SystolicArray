// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v1.h for the primary calling header

#include "Vswitch_testbench_v1__pch.h"

void Vswitch_testbench_v1_switch_if___ctor_var_reset(Vswitch_testbench_v1_switch_if* vlSelf);

Vswitch_testbench_v1_switch_if::Vswitch_testbench_v1_switch_if() = default;
Vswitch_testbench_v1_switch_if::~Vswitch_testbench_v1_switch_if() = default;

void Vswitch_testbench_v1_switch_if::ctor(Vswitch_testbench_v1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vswitch_testbench_v1_switch_if___ctor_var_reset(this);
}

void Vswitch_testbench_v1_switch_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vswitch_testbench_v1_switch_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
