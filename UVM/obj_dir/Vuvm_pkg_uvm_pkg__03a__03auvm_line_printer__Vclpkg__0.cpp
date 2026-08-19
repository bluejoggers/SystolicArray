// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_line_printer::init(Vuvm_pkg__Syms* __restrict vlSymsp) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_line_printer::new\n"); );
    // Body
    /*super.new*/;
    Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer::__PVT__newline = " "s;
    VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 400)->__PVT__indent = 0U;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_line_printer::~Vuvm_pkg_uvm_pkg__03a__03auvm_line_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_line_printer::~\n"); );
}
