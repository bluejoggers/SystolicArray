// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP1.h for the primary calling header

#include "VP1__pch.h"


VP1___024unit::VP1___024unit() = default;
VP1___024unit::~VP1___024unit() = default;

void VP1___024unit::ctor(VP1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VP1___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VP1___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
