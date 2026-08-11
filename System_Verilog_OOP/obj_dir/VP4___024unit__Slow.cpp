// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP4.h for the primary calling header

#include "VP4__pch.h"


VP4___024unit::VP4___024unit() = default;
VP4___024unit::~VP4___024unit() = default;

void VP4___024unit::ctor(VP4__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VP4___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VP4___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
