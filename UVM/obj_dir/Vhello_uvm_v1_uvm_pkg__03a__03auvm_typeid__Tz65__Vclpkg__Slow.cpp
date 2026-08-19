// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz65__Vclpkg___ctor_var_reset(Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz65__Vclpkg* vlSelf);

Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz65__Vclpkg::Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz65__Vclpkg() = default;
Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz65__Vclpkg::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz65__Vclpkg() = default;

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz65__Vclpkg::ctor(Vhello_uvm_v1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz65__Vclpkg___ctor_var_reset(this);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz65__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz65__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
