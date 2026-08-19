// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1___024root___ctor_var_reset(Vhello_uvm_v1___024root* vlSelf);

Vhello_uvm_v1___024root::Vhello_uvm_v1___024root(Vhello_uvm_v1__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vhello_uvm_v1___024root___ctor_var_reset(this);
}

void Vhello_uvm_v1___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhello_uvm_v1___024root::~Vhello_uvm_v1___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
