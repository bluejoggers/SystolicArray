// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v1.h for the primary calling header

#include "Vswitch_testbench_v1__pch.h"


Vswitch_testbench_v1___024unit::Vswitch_testbench_v1___024unit() = default;
Vswitch_testbench_v1___024unit::~Vswitch_testbench_v1___024unit() = default;

void Vswitch_testbench_v1___024unit::ctor(Vswitch_testbench_v1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vswitch_testbench_v1___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vswitch_testbench_v1___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
