// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP7.h for the primary calling header

#include "VP7__pch.h"

VL_ATTR_COLD void VP7___024root___eval_static(VP7___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP7___024root___eval_static\n"); );
    VP7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VP7___024root___eval_initial(VP7___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP7___024root___eval_initial\n"); );
    VP7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VlClassRef<VP7___024unit__03a__03adriver> __Vinline_0__eval_initial__TOP_testbench__DOT__drv;
        VlClassRef<VP7___024unit__03a__03amonitor> __Vinline_0__eval_initial__TOP_testbench__DOT__mon;
        IData/*31:0*/ __Vinline_0__eval_initial__TOP_testbench__DOT__unnamedblk1__DOT__i;
        __Vinline_0__eval_initial__TOP_testbench__DOT__unnamedblk1__DOT__i = 0;
        __Vinline_0__eval_initial__TOP_testbench__DOT__drv 
            = VL_NEW(VP7___024unit__03a__03adriver, vlSymsp);
        __Vinline_0__eval_initial__TOP_testbench__DOT__mon 
            = VL_NEW(VP7___024unit__03a__03amonitor, vlSymsp);
        vlSelfRef.testbench__DOT__env[0U] = __Vinline_0__eval_initial__TOP_testbench__DOT__drv;
        vlSelfRef.testbench__DOT__env[1U] = __Vinline_0__eval_initial__TOP_testbench__DOT__mon;
        __Vinline_0__eval_initial__TOP_testbench__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTES_III(32, 1U, __Vinline_0__eval_initial__TOP_testbench__DOT__unnamedblk1__DOT__i)) {
            VL_NULL_CHECK(vlSelfRef.testbench__DOT__env
                          [(1U & __Vinline_0__eval_initial__TOP_testbench__DOT__unnamedblk1__DOT__i)], "P7.sv", 34)->__VnoInFunc_run(vlSymsp);
            __Vinline_0__eval_initial__TOP_testbench__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vinline_0__eval_initial__TOP_testbench__DOT__unnamedblk1__DOT__i);
        }
    }
}

VL_ATTR_COLD void VP7___024root___eval_final(VP7___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP7___024root___eval_final\n"); );
    VP7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VP7___024root___eval_settle(VP7___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP7___024root___eval_settle\n"); );
    VP7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VP7___024root___ctor_var_reset(VP7___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP7___024root___ctor_var_reset\n"); );
    VP7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
