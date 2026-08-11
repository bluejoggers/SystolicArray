// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"


VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg::VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg() = default;
VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg::~VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg() = default;

void VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg::ctor(VRegister8b_test_top_v1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
