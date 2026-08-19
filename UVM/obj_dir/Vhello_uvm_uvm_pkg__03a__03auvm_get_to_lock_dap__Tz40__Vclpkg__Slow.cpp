// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"


Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40__Vclpkg::Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40__Vclpkg() = default;
Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40__Vclpkg::~Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40__Vclpkg() = default;

void Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40__Vclpkg::ctor(Vhello_uvm__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
