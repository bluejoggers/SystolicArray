// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v1.h for the primary calling header

#include "Vswitch_testbench_v1__pch.h"

void Vswitch_testbench_v1___024root___ctor_var_reset(Vswitch_testbench_v1___024root* vlSelf);

Vswitch_testbench_v1___024root::Vswitch_testbench_v1___024root(Vswitch_testbench_v1__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vswitch_testbench_v1___024root___ctor_var_reset(this);
}

void Vswitch_testbench_v1___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vswitch_testbench_v1___024root::~Vswitch_testbench_v1___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
