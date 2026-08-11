// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP8.h for the primary calling header

#include "VP8__pch.h"

VL_ATTR_COLD void VP8___024root___eval_static(VP8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP8___024root___eval_static\n"); );
    VP8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VP8___024root___eval_initial__TOP(VP8___024root* vlSelf);

VL_ATTR_COLD void VP8___024root___eval_initial(VP8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP8___024root___eval_initial\n"); );
    VP8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VP8___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VP8___024root___eval_initial__TOP(VP8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP8___024root___eval_initial__TOP\n"); );
    VP8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<VP8___024unit__03a__03amypacket> testbench__DOT__pkt;
    IData/*31:0*/ testbench__DOT__unnamedblk1__DOT__i;
    testbench__DOT__unnamedblk1__DOT__i = 0;
    // Body
    testbench__DOT__pkt = VL_NEW(VP8___024unit__03a__03amypacket, vlSymsp);
    testbench__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000014U, testbench__DOT__unnamedblk1__DOT__i)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if ((VlNull{} != testbench__DOT__pkt)) {
                VL_NULL_CHECK(testbench__DOT__pkt, "P8.sv", 28)->__VnoInFunc_randomize(vlSymsp, vlSelfRef.testbench__DOT____VlemCall_0__randomize);
                vlSelfRef.testbench__DOT____VlemCond_1 
                    = vlSelfRef.testbench__DOT____VlemCall_0__randomize;
            } else {
                vlSelfRef.testbench__DOT____VlemCond_1 = 0U;
            }
            if (VL_LIKELY(((1U != vlSelfRef.testbench__DOT____VlemCond_1)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: P8.sv:28: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"testbench.unnamedblk1", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("P8.sv", 28, "", false);
                }
            }
        }
        VL_NULL_CHECK(testbench__DOT__pkt, "P8.sv", 29)->__VnoInFunc_display(vlSymsp);
        testbench__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                               + testbench__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void VP8___024root___eval_final(VP8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP8___024root___eval_final\n"); );
    VP8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VP8___024root___eval_settle(VP8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP8___024root___eval_settle\n"); );
    VP8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool VP8___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VP8___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP8___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VP8___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VP8___024root___ctor_var_reset(VP8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP8___024root___ctor_var_reset\n"); );
    VP8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
