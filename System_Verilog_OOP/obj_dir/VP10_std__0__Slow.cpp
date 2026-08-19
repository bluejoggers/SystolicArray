// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP10.h for the primary calling header

#include "VP10__pch.h"

VL_ATTR_COLD void VP10_std___configure_coverage(VP10_std* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VP10_std___configure_coverage\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 0, first, true, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 246, 16, "", "v_line/std", "block", "246-247", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 17, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 246, 16, "", "v_line/std", "block", "246-247", "", "", "", "");
}
