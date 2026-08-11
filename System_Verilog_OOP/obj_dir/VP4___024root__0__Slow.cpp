// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP4.h for the primary calling header

#include "VP4__pch.h"

VL_ATTR_COLD void VP4___024root___eval_static(VP4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP4___024root___eval_static\n"); );
    VP4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VP4___024root___eval_initial(VP4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP4___024root___eval_initial\n"); );
    VP4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VlClassRef<VP4___024unit__03a__03apacket> __Vinline_0__eval_initial__TOP_top__DOT__bc;
        VlClassRef<VP4___024unit__03a__03asub_packet> __Vinline_0__eval_initial__TOP_top__DOT__sc;
        __Vinline_0__eval_initial__TOP_top__DOT__bc 
            = VL_NEW(VP4___024unit__03a__03apacket, vlSymsp, 0xfacecafeU);
        VL_NULL_CHECK(__Vinline_0__eval_initial__TOP_top__DOT__bc, "P4.sv", 38)->__VnoInFunc_display(vlSymsp);
        __Vinline_0__eval_initial__TOP_top__DOT__sc 
            = VL_NEW(VP4___024unit__03a__03asub_packet, vlSymsp, 0xfeedfeedU, 0x12345678U);
        VL_NULL_CHECK(__Vinline_0__eval_initial__TOP_top__DOT__sc, "P4.sv", 41)->__VnoInFunc_display(vlSymsp);
    }
}

VL_ATTR_COLD void VP4___024root___eval_final(VP4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP4___024root___eval_final\n"); );
    VP4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VP4___024root___eval_settle(VP4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP4___024root___eval_settle\n"); );
    VP4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
