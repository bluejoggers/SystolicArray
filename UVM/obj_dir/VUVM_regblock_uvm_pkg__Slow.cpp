// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg___ctor_var_reset(VUVM_regblock_uvm_pkg* vlSelf);

VUVM_regblock_uvm_pkg::VUVM_regblock_uvm_pkg() = default;
VUVM_regblock_uvm_pkg::~VUVM_regblock_uvm_pkg() = default;

void VUVM_regblock_uvm_pkg::ctor(VUVM_regblock__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VUVM_regblock_uvm_pkg___ctor_var_reset(this);
}

void VUVM_regblock_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VUVM_regblock_uvm_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
