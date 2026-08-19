// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer::init(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer::new\n"); );
    // Body
    /*super.new*/;
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer::__PVT__newline = " "s;
    VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 400)->__PVT__indent = 0U;
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer::~\n"); );
}
