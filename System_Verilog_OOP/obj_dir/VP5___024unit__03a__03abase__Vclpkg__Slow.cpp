// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP5.h for the primary calling header

#include "VP5__pch.h"


VP5___024unit__03a__03abase__Vclpkg::VP5___024unit__03a__03abase__Vclpkg() = default;
VP5___024unit__03a__03abase__Vclpkg::~VP5___024unit__03a__03abase__Vclpkg() = default;

void VP5___024unit__03a__03abase__Vclpkg::ctor(VP5__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VP5___024unit__03a__03abase__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VP5___024unit__03a__03abase__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
