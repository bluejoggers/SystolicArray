// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"


VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59__Vclpkg::VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59__Vclpkg() = default;
VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59__Vclpkg::~VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59__Vclpkg() = default;

void VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59__Vclpkg::ctor(VUVM_regblock__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
