// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP1.h for the primary calling header

#include "VP1__pch.h"


VP1___024root::VP1___024root(VP1__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
}

void VP1___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VP1___024root::~VP1___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
