// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP7.h for the primary calling header

#include "VP7__pch.h"

void VP7___024root___ctor_var_reset(VP7___024root* vlSelf);

VP7___024root::VP7___024root(VP7__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VP7___024root___ctor_var_reset(this);
}

void VP7___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VP7___024root::~VP7___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
