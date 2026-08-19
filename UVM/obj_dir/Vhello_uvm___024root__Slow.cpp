// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm___024root___ctor_var_reset(Vhello_uvm___024root* vlSelf);

Vhello_uvm___024root::Vhello_uvm___024root(Vhello_uvm__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vhello_uvm___024root___ctor_var_reset(this);
}

void Vhello_uvm___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhello_uvm___024root::~Vhello_uvm___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
