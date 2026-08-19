// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg___ctor_var_reset(Vhello_uvm_uvm_pkg* vlSelf);

Vhello_uvm_uvm_pkg::Vhello_uvm_uvm_pkg() = default;
Vhello_uvm_uvm_pkg::~Vhello_uvm_uvm_pkg() = default;

void Vhello_uvm_uvm_pkg::ctor(Vhello_uvm__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vhello_uvm_uvm_pkg___ctor_var_reset(this);
}

void Vhello_uvm_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vhello_uvm_uvm_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
