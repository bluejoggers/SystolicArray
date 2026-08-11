// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v1.h for the primary calling header

#include "Vswitch_testbench_v1__pch.h"


Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg::Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg() = default;
Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg::~Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg() = default;

void Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg::ctor(Vswitch_testbench_v1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
