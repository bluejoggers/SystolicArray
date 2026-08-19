// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_line_printer::init(VUVM_regblock__Syms* __restrict vlSymsp) {
    VUVM_regblock_uvm_pkg__03a__03auvm_tree_printer::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_line_printer::new\n"); );
    // Body
    /*super.new*/;
    VUVM_regblock_uvm_pkg__03a__03auvm_tree_printer::__PVT__newline = " "s;
    VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 400)->__PVT__indent = 0U;
}

VUVM_regblock_uvm_pkg__03a__03auvm_line_printer::~VUVM_regblock_uvm_pkg__03a__03auvm_line_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_line_printer::~\n"); );
}
