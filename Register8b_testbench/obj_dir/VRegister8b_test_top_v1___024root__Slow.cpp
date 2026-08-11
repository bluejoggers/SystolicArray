// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"

void VRegister8b_test_top_v1___024root___ctor_var_reset(VRegister8b_test_top_v1___024root* vlSelf);

VRegister8b_test_top_v1___024root::VRegister8b_test_top_v1___024root(VRegister8b_test_top_v1__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VRegister8b_test_top_v1___024root___ctor_var_reset(this);
}

void VRegister8b_test_top_v1___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VRegister8b_test_top_v1___024root::~VRegister8b_test_top_v1___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
