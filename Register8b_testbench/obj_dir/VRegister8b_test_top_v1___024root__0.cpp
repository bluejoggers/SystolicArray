// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"

VlCoroutine VRegister8b_test_top_v1___024root___eval_initial__TOP__Vtiming__0(VRegister8b_test_top_v1___024root* vlSelf);
VlCoroutine VRegister8b_test_top_v1___024root___eval_initial__TOP__Vtiming__1(VRegister8b_test_top_v1___024root* vlSelf);

void VRegister8b_test_top_v1___024root___eval_initial(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval_initial\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRegister8b_test_top_v1___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VRegister8b_test_top_v1___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine VRegister8b_test_top_v1___024root___eval_initial__TOP__Vtiming__0(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval_initial__TOP__Vtiming__0\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atest> tb__DOT__T;
    // Body
    tb__DOT__T = VL_NEW(VRegister8b_test_top_v1___024unit__03a__03atest, vlSymsp);
    vlSymsp->_vm_contextp__->dumpfile("Register8b_testbench.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb__DOT__clk = 0U;
    VL_NULL_CHECK(VL_NULL_CHECK(tb__DOT__T, "Register8b_test_top_v1.sv", 280)
                  ->__PVT__ENV, "Register8b_test_top_v1.sv", 280)->__PVT__virtual_if 
        = (&vlSymsp->TOP__tb__DOT__rif);
    co_await VL_NULL_CHECK(tb__DOT__T, "Register8b_test_top_v1.sv", 281)->__VnoInFunc_run(vlSymsp);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000000faULL, 
                                         nullptr, "Register8b_test_top_v1.sv", 
                                         283);
    VL_FINISH_MT("Register8b_test_top_v1.sv", 283, "");
    co_return;
}

VlCoroutine VRegister8b_test_top_v1___024root___eval_initial__TOP__Vtiming__1(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval_initial__TOP__Vtiming__1\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "Register8b_test_top_v1.sv", 
                                             255);
        vlSelfRef.tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb__DOT__clk)));
    }
    co_return;
}

bool VRegister8b_test_top_v1___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void VRegister8b_test_top_v1___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister8b_test_top_v1___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VRegister8b_test_top_v1___024root___eval_phase__act(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval_phase__act\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffbULL 
                                          & vlSelfRef.__VactTriggered[1U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__tb__DOT__rif.reset) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__rif__reset)))) 
                                            << 2U));
        vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__rif__reset 
            = vlSymsp->TOP__tb__DOT__rif.reset;
        vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffdULL 
                                          & vlSelfRef.__VactTriggered[1U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__tb__DOT__rif.enable) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__rif__enable)))) 
                                            << 1U));
        vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__rif__enable 
            = vlSymsp->TOP__tb__DOT__rif.enable;
        vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VactTriggered[1U]) 
                                         | (IData)((IData)(
                                                           ((IData)(vlSymsp->TOP__tb__DOT__rif.data_in) 
                                                            != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__rif__data_in)))));
        vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__rif__data_in 
            = vlSymsp->TOP__tb__DOT__rif.data_in;
        vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                     ((VL_EXTEND_II(2,1, vlSelfRef.__VdynSched.evaluate()) 
                                                       << 2U) 
                                                      | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.tb__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
            = vlSelfRef.tb__DOT__clk;
        vlSelfRef.__VdynSched.doPostUpdates();
    }
    VRegister8b_test_top_v1___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRegister8b_test_top_v1___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VRegister8b_test_top_v1___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VRegister8b_test_top_v1___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            vlSelfRef.__VdynSched.resume();
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
        {
            // Inlined CFunc: _eval_act
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSymsp->TOP__tb__DOT__rif.clk 
                        = vlSelfRef.tb__DOT__clk;
                }
            }
        }
    }
    return (__VactExecute);
}

bool VRegister8b_test_top_v1___024root___eval_phase__inact(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval_phase__inact\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("Register8b_test_top_v1.sv", 251, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VRegister8b_test_top_v1___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool VRegister8b_test_top_v1___024root___eval_phase__nba(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval_phase__nba\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VRegister8b_test_top_v1___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSymsp->TOP__tb__DOT__rif.clk 
                        = vlSelfRef.tb__DOT__clk;
                }
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    if (vlSymsp->TOP__tb__DOT__rif.reset) {
                        vlSelfRef.tb__DOT____Vcellout__DUT__data_out = 0U;
                    } else if (vlSymsp->TOP__tb__DOT__rif.enable) {
                        vlSelfRef.tb__DOT____Vcellout__DUT__data_out 
                            = vlSymsp->TOP__tb__DOT__rif.data_in;
                    }
                    vlSymsp->TOP__tb__DOT__rif.data_out 
                        = vlSelfRef.tb__DOT____Vcellout__DUT__data_out;
                }
            }
        }
        VRegister8b_test_top_v1___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void VRegister8b_test_top_v1___024root___eval(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VRegister8b_test_top_v1___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("Register8b_test_top_v1.sv", 251, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("Register8b_test_top_v1.sv", 251, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VRegister8b_test_top_v1___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("Register8b_test_top_v1.sv", 251, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VRegister8b_test_top_v1___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VRegister8b_test_top_v1___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VRegister8b_test_top_v1___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VRegister8b_test_top_v1___024root___eval_debug_assertions(VRegister8b_test_top_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root___eval_debug_assertions\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
