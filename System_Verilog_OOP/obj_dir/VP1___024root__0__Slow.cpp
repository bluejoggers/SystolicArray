// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP1.h for the primary calling header

#include "VP1__pch.h"

VL_ATTR_COLD void VP1___024root___eval_static(VP1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP1___024root___eval_static\n"); );
    VP1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VP1___024root___eval_initial(VP1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP1___024root___eval_initial\n"); );
    VP1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VlClassRef<VP1___024unit__03a__03amy_config> __Vinline_0__eval_initial__TOP_top__DOT__config1;
        VlClassRef<VP1___024unit__03a__03amy_config> __Vinline_0__eval_initial__TOP_top__DOT__config2;
        __Vinline_0__eval_initial__TOP_top__DOT__config1 
            = VL_NEW(VP1___024unit__03a__03amy_config, vlSymsp, 8U, 0x00000020U);
        __Vinline_0__eval_initial__TOP_top__DOT__config2 
            = VL_NEW(VP1___024unit__03a__03amy_config, vlSymsp, 0x10U, 0x00000040U);
        VL_NULL_CHECK(__Vinline_0__eval_initial__TOP_top__DOT__config1, "P1.sv", 23)->__VnoInFunc_display(vlSymsp);
        VL_NULL_CHECK(__Vinline_0__eval_initial__TOP_top__DOT__config2, "P1.sv", 24)->__VnoInFunc_display(vlSymsp);
    }
}

VL_ATTR_COLD void VP1___024root___eval_final(VP1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP1___024root___eval_final\n"); );
    VP1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VP1___024root___eval_settle(VP1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP1___024root___eval_settle\n"); );
    VP1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
