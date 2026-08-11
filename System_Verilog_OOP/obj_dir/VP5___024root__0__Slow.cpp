// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP5.h for the primary calling header

#include "VP5__pch.h"

VL_ATTR_COLD void VP5___024root___eval_static(VP5___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP5___024root___eval_static\n"); );
    VP5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VP5___024root___eval_initial(VP5___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP5___024root___eval_initial\n"); );
    VP5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VlClassRef<VP5___024unit__03a__03abase> __Vinline_0__eval_initial__TOP_top__DOT__bc;
        VlClassRef<VP5___024unit__03a__03abase> __Vinline_0__eval_initial__TOP_top__DOT__bc1;
        VlClassRef<VP5___024unit__03a__03achild> __Vinline_0__eval_initial__TOP_top__DOT__sc;
        __Vinline_0__eval_initial__TOP_top__DOT__bc 
            = VL_NEW(VP5___024unit__03a__03abase, vlSymsp, 0x12U, 0x34U);
        __Vinline_0__eval_initial__TOP_top__DOT__sc 
            = VL_NEW(VP5___024unit__03a__03achild, vlSymsp, 0x56U, 0x78U, 1U);
        __Vinline_0__eval_initial__TOP_top__DOT__bc1 
            = __Vinline_0__eval_initial__TOP_top__DOT__sc;
        VL_NULL_CHECK(__Vinline_0__eval_initial__TOP_top__DOT__bc, "P5.sv", 45)->__VnoInFunc_display(vlSymsp, "Thread 1"s);
        VL_NULL_CHECK(__Vinline_0__eval_initial__TOP_top__DOT__sc, "P5.sv", 46)->__VnoInFunc_display(vlSymsp, "Thread 2"s);
        VL_NULL_CHECK(__Vinline_0__eval_initial__TOP_top__DOT__bc1, "P5.sv", 47)->__VnoInFunc_display(vlSymsp, "Thread 3"s);
    }
}

VL_ATTR_COLD void VP5___024root___eval_final(VP5___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP5___024root___eval_final\n"); );
    VP5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VP5___024root___eval_settle(VP5___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP5___024root___eval_settle\n"); );
    VP5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
