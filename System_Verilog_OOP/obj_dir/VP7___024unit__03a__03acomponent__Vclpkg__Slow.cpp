// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP7.h for the primary calling header

#include "VP7__pch.h"


VP7___024unit__03a__03acomponent__Vclpkg::VP7___024unit__03a__03acomponent__Vclpkg() = default;
VP7___024unit__03a__03acomponent__Vclpkg::~VP7___024unit__03a__03acomponent__Vclpkg() = default;

void VP7___024unit__03a__03acomponent__Vclpkg::ctor(VP7__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VP7___024unit__03a__03acomponent__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VP7___024unit__03a__03acomponent__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
