// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"


Vuvm_pkg_uvm_pkg__03a__03auvm_factory__Vclpkg::Vuvm_pkg_uvm_pkg__03a__03auvm_factory__Vclpkg() = default;
Vuvm_pkg_uvm_pkg__03a__03auvm_factory__Vclpkg::~Vuvm_pkg_uvm_pkg__03a__03auvm_factory__Vclpkg() = default;

void Vuvm_pkg_uvm_pkg__03a__03auvm_factory__Vclpkg::ctor(Vuvm_pkg__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_factory__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_factory__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
