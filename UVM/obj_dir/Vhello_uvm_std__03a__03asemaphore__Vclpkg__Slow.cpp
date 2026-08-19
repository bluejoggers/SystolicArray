// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"


Vhello_uvm_std__03a__03asemaphore__Vclpkg::Vhello_uvm_std__03a__03asemaphore__Vclpkg() = default;
Vhello_uvm_std__03a__03asemaphore__Vclpkg::~Vhello_uvm_std__03a__03asemaphore__Vclpkg() = default;

void Vhello_uvm_std__03a__03asemaphore__Vclpkg::ctor(Vhello_uvm__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vhello_uvm_std__03a__03asemaphore__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vhello_uvm_std__03a__03asemaphore__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
