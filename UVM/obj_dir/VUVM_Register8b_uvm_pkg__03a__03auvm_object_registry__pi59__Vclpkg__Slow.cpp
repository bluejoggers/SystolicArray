// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi59__Vclpkg___ctor_var_reset(VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi59__Vclpkg* vlSelf);

VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi59__Vclpkg::VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi59__Vclpkg() = default;
VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi59__Vclpkg::~VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi59__Vclpkg() = default;

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi59__Vclpkg::ctor(VUVM_Register8b__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi59__Vclpkg___ctor_var_reset(this);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi59__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi59__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
