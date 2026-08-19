// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg___ctor_var_reset(Vuvm_pkg_uvm_pkg* vlSelf);

Vuvm_pkg_uvm_pkg::Vuvm_pkg_uvm_pkg() = default;
Vuvm_pkg_uvm_pkg::~Vuvm_pkg_uvm_pkg() = default;

void Vuvm_pkg_uvm_pkg::ctor(Vuvm_pkg__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vuvm_pkg_uvm_pkg___ctor_var_reset(this);
}

void Vuvm_pkg_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vuvm_pkg_uvm_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
