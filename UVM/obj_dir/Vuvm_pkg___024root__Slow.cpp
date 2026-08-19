// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg___024root___ctor_var_reset(Vuvm_pkg___024root* vlSelf);

Vuvm_pkg___024root::Vuvm_pkg___024root(Vuvm_pkg__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vuvm_pkg___024root___ctor_var_reset(this);
}

void Vuvm_pkg___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vuvm_pkg___024root::~Vuvm_pkg___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
