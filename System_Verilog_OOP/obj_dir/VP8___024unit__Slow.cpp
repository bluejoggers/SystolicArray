// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP8.h for the primary calling header

#include "VP8__pch.h"


VP8___024unit::VP8___024unit() = default;
VP8___024unit::~VP8___024unit() = default;

void VP8___024unit::ctor(VP8__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VP8___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VP8___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
