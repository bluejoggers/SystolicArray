// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v0.h for the primary calling header

#include "Vswitch_testbench_v0__pch.h"

void Vswitch_testbench_v0_switch_if___nba_sequent__TOP__tb__DOT__sif__0(Vswitch_testbench_v0_switch_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vswitch_testbench_v0_switch_if___nba_sequent__TOP__tb__DOT__sif__0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.__VdlySet__reset__v0_hierarchical) {
        vlSymsp->TOP.__VdlySet__reset__v0_hierarchical = 0U;
        vlSelfRef.reset = 1U;
    }
    if (vlSymsp->TOP.__VdlySet__reset__v1_hierarchical) {
        vlSymsp->TOP.__VdlySet__reset__v1_hierarchical = 0U;
        vlSelfRef.reset = 0U;
    }
}
