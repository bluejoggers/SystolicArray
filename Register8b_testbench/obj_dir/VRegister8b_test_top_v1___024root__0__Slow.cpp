// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"

VL_ATTR_COLD void VRegister8b_test_top_v1___024root___eval_static(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval_static\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__rif__data_in 
        = vlSymsp->TOP__tb__DOT__rif.data_in;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__rif__enable 
        = vlSymsp->TOP__tb__DOT__rif.enable;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__rif__reset 
        = vlSymsp->TOP__tb__DOT__rif.reset;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((1U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root___eval_final(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval_final\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister8b_test_top_v1___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRegister8b_test_top_v1___024root___eval_phase__stl(VRegister8b_test_top_v1___024root* vlSelf);

VL_ATTR_COLD void VRegister8b_test_top_v1___024root___eval_settle(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval_settle\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VRegister8b_test_top_v1___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("Register8b_test_top_v1.sv", 251, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VRegister8b_test_top_v1___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool VRegister8b_test_top_v1___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister8b_test_top_v1___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VRegister8b_test_top_v1___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VRegister8b_test_top_v1___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD bool VRegister8b_test_top_v1___024root___eval_phase__stl(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval_phase__stl\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRegister8b_test_top_v1___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VRegister8b_test_top_v1___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSymsp->TOP__tb__DOT__rif.clk 
                        = vlSelfRef.tb__DOT__clk;
                    vlSymsp->TOP__tb__DOT__rif.data_out 
                        = vlSelfRef.tb__DOT____Vcellout__DUT__data_out;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool VRegister8b_test_top_v1___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister8b_test_top_v1___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VRegister8b_test_top_v1___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdynSched.evaluate())\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'act' trigger - virtual interface member: reg_if.data_in\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: Internal 'act' trigger - virtual interface member: reg_if.enable\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: Internal 'act' trigger - virtual interface member: reg_if.reset\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRegister8b_test_top_v1___024root___ctor_var_reset(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___ctor_var_reset\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb__DOT__clk = 0;
    vlSelf->tb__DOT____Vcellout__DUT__data_out = 0;
    vlSelf->__VnbaEventTrigger = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__rif__data_in = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__rif__enable = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__rif__reset = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
