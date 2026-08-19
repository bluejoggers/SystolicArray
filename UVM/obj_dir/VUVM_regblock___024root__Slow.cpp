// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock___024root___ctor_var_reset(VUVM_regblock___024root* vlSelf);

VUVM_regblock___024root::VUVM_regblock___024root(VUVM_regblock__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VUVM_regblock___024root___ctor_var_reset(this);
}

void VUVM_regblock___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VUVM_regblock___024root::~VUVM_regblock___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
