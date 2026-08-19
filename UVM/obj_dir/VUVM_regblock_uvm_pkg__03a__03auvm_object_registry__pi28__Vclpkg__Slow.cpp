// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg___ctor_var_reset(VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg* vlSelf);

VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg::VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg() = default;
VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg::~VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg() = default;

void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg::ctor(VUVM_regblock__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg___ctor_var_reset(this);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
