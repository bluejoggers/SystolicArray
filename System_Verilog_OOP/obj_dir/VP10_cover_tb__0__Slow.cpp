// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP10.h for the primary calling header

#include "VP10__pch.h"

VL_ATTR_COLD void VP10_cover_tb___stl_sequent__TOP__cover_tb__0(VP10_cover_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VP10_cover_tb___stl_sequent__TOP__cover_tb__0\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U != ((IData)(vlSelfRef.__PVT__mode) ^ (IData)(vlSelfRef.__Vtogcov__mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 0, vlSelfRef.__PVT__mode, vlSelfRef.__Vtogcov__mode);
        vlSelfRef.__Vtogcov__mode = vlSelfRef.__PVT__mode;
    }
    if ((0U != ((IData)(vlSelfRef.__PVT__cfg) ^ (IData)(vlSelfRef.__Vtogcov__cfg)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 4, vlSelfRef.__PVT__cfg, vlSelfRef.__Vtogcov__cfg);
        vlSelfRef.__Vtogcov__cfg = vlSelfRef.__PVT__cfg;
    }
    if (((IData)(vlSelfRef.__PVT__clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10, vlSelfRef.__PVT__clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.__PVT__clk;
    }
}

VL_ATTR_COLD void VP10_cover_tb___ctor_var_reset(VP10_cover_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VP10_cover_tb___ctor_var_reset\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__mode = 0;
    vlSelf->__PVT__cfg = 0;
    vlSelf->__PVT__clk = 0;
    vlSelf->__Vtogcov__mode = 0;
    vlSelf->__Vtogcov__cfg = 0;
    vlSelf->__Vtogcov__clk = 0;
}

VL_ATTR_COLD void VP10_cover_tb___configure_coverage(VP10_cover_tb* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VP10_cover_tb___configure_coverage\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 0, first, true, "P10.sv", 2, 15, "", "v_toggle/cover_tb", "mode");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 4, first, true, "P10.sv", 3, 15, "", "v_toggle/cover_tb", "cfg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 10, first, true, "P10.sv", 5, 9, "", "v_toggle/cover_tb", "clk");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 12, first, true, "P10.sv", 6, 22, "", "v_expr/cover_tb", "(clk==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 12, first, false, "P10.sv", 6, 22, "", "v_expr/cover_tb", "(clk==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 13, first, true, "P10.sv", 6, 22, "", "v_expr/cover_tb", "(clk==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 13, first, false, "P10.sv", 6, 22, "", "v_expr/cover_tb", "(clk==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 14, first, true, "P10.sv", 6, 5, "", "v_line/cover_tb", "block", "6", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 14, first, false, "P10.sv", 6, 5, "", "v_line/cover_tb", "block", "6", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 15, first, true, "P10.sv", 18, 9, "", "v_line/cover_tb", "block", "18-21,23", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 15, first, false, "P10.sv", 18, 9, "", "v_line/cover_tb", "block", "18-21,23", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 16, first, true, "P10.sv", 15, 5, "", "v_line/cover_tb", "block", "15-16,18,26-27", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 16, first, false, "P10.sv", 15, 5, "", "v_line/cover_tb", "block", "15-16,18,26-27", "", "", "", "");
}
