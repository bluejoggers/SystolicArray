// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi8__Vclpkg___ctor_var_reset(Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi8__Vclpkg* vlSelf);

Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi8__Vclpkg::Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi8__Vclpkg() = default;
Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi8__Vclpkg::~Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi8__Vclpkg() = default;

void Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi8__Vclpkg::ctor(Vuvm_pkg__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi8__Vclpkg___ctor_var_reset(this);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi8__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi8__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
