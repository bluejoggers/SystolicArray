// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v0.h for the primary calling header

#include "Vswitch_testbench_v0__pch.h"

VL_ATTR_COLD void Vswitch_testbench_v0___024root___eval_static(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval_static\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clock__0 
        = vlSelfRef.tb__DOT__clock;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__sif__address 
        = vlSymsp->TOP__tb__DOT__sif.address;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__sif__data 
        = vlSymsp->TOP__tb__DOT__sif.data;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__sif__valid 
        = vlSymsp->TOP__tb__DOT__sif.valid;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((1U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root___eval_final(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval_final\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vswitch_testbench_v0___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vswitch_testbench_v0___024root___eval_phase__stl(Vswitch_testbench_v0___024root* vlSelf);

VL_ATTR_COLD void Vswitch_testbench_v0___024root___eval_settle(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval_settle\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vswitch_testbench_v0___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("switch_testbench_v0.sv", 280, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vswitch_testbench_v0___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vswitch_testbench_v0___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vswitch_testbench_v0___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vswitch_testbench_v0___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vswitch_testbench_v0___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vswitch_testbench_v0___024root___eval_phase__stl(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval_phase__stl\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vswitch_testbench_v0___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vswitch_testbench_v0___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSymsp->TOP__tb__DOT__sif.clock 
                        = vlSelfRef.tb__DOT__clock;
                    vlSymsp->TOP__tb__DOT__sif.data_b 
                        = vlSelfRef.tb__DOT____Vcellout__DUT__data_b;
                    vlSymsp->TOP__tb__DOT__sif.address_b 
                        = vlSelfRef.tb__DOT____Vcellout__DUT__addr_b;
                    vlSymsp->TOP__tb__DOT__sif.data_a 
                        = vlSelfRef.tb__DOT____Vcellout__DUT__data_a;
                    vlSymsp->TOP__tb__DOT__sif.address_a 
                        = vlSelfRef.tb__DOT____Vcellout__DUT__addr_a;
                }
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vswitch_testbench_v0___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vswitch_testbench_v0___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vswitch_testbench_v0___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb.clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([initial_nba])\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdynSched.evaluate())\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'act' trigger - virtual interface member: switch_if.address\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: Internal 'act' trigger - virtual interface member: switch_if.data\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: Internal 'act' trigger - virtual interface member: switch_if.valid\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vswitch_testbench_v0___024root___ctor_var_reset(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___ctor_var_reset\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15416580966322914461ull);
    vlSelf->tb__DOT____Vcellout__DUT__data_b = 0;
    vlSelf->tb__DOT____Vcellout__DUT__addr_b = 0;
    vlSelf->tb__DOT____Vcellout__DUT__data_a = 0;
    vlSelf->tb__DOT____Vcellout__DUT__addr_a = 0;
    vlSelf->__VnbaEventTrigger = 0;
    vlSelf->__VdlySet__reset__v0_hierarchical = 0;
    vlSelf->__VdlySet__reset__v1_hierarchical = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clock__0 = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__sif__address = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__sif__data = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__sif__valid = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
