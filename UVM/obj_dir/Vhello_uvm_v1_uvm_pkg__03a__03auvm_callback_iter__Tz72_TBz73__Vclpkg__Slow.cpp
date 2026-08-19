// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"


Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz72_TBz73__Vclpkg::Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz72_TBz73__Vclpkg() = default;
Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz72_TBz73__Vclpkg::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz72_TBz73__Vclpkg() = default;

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz72_TBz73__Vclpkg::ctor(Vhello_uvm_v1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz72_TBz73__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz72_TBz73__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
