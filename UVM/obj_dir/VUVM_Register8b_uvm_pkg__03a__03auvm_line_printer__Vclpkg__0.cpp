// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_line_printer::init(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_tree_printer::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_line_printer::new\n"); );
    // Body
    /*super.new*/;
    VUVM_Register8b_uvm_pkg__03a__03auvm_tree_printer::__PVT__newline = " "s;
    VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 400)->__PVT__indent = 0U;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_line_printer::~VUVM_Register8b_uvm_pkg__03a__03auvm_line_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_line_printer::~\n"); );
}
