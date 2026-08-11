// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP8.h for the primary calling header

#include "VP8__pch.h"

void VP8___024root___ctor_var_reset(VP8___024root* vlSelf);

VP8___024root::VP8___024root(VP8__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VP8___024root___ctor_var_reset(this);
}

void VP8___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VP8___024root::~VP8___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
