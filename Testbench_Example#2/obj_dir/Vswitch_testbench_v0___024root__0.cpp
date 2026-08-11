// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v0.h for the primary calling header

#include "Vswitch_testbench_v0__pch.h"

VlCoroutine Vswitch_testbench_v0___024root___eval_initial__TOP__Vtiming__0(Vswitch_testbench_v0___024root* vlSelf);
VlCoroutine Vswitch_testbench_v0___024root___eval_initial__TOP__Vtiming__1(Vswitch_testbench_v0___024root* vlSelf);

void Vswitch_testbench_v0___024root___eval_initial(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval_initial\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vswitch_testbench_v0___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vswitch_testbench_v0___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vswitch_testbench_v0___024root___eval_initial__TOP__Vtiming__0(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vswitch_testbench_v0___024unit__03a__03atest> tb__DOT__T;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("switch_testbench.vcd"s);
    vlSymsp->_traceDumpOpen();
    tb__DOT__T = VL_NEW(Vswitch_testbench_v0___024unit__03a__03atest, vlSymsp);
    vlSelfRef.tb__DOT__clock = 0U;
    vlSelfRef.__VdlySet__reset__v0_hierarchical = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "switch_testbench_v0.sv", 
                                         311);
    vlSelfRef.__VdlySet__reset__v1_hierarchical = 1U;
    VL_NULL_CHECK(VL_NULL_CHECK(tb__DOT__T, "switch_testbench_v0.sv", 312)
                  ->__PVT__ENV, "switch_testbench_v0.sv", 312)->__PVT__vif 
        = (&vlSymsp->TOP__tb__DOT__sif);
    VL_NULL_CHECK(tb__DOT__T, "switch_testbench_v0.sv", 313)->__VnoInFunc_run(vlSymsp);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "switch_testbench_v0.sv", 
                                         315);
    VL_FINISH_MT("switch_testbench_v0.sv", 315, "");
    co_return;
}

VlCoroutine Vswitch_testbench_v0___024root___eval_initial__TOP__Vtiming__1(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "switch_testbench_v0.sv", 
                                             286);
        vlSelfRef.tb__DOT__clock = (1U & (~ (IData)(vlSelfRef.tb__DOT__clock)));
    }
    co_return;
}

bool Vswitch_testbench_v0___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___trigger_anySet__act\n"); );
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

void Vswitch_testbench_v0___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vswitch_testbench_v0___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vswitch_testbench_v0___024root___eval_phase__act(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval_phase__act\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffbULL 
                                          & vlSelfRef.__VactTriggered[1U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__tb__DOT__sif.valid) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__sif__valid)))) 
                                            << 2U));
        vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__sif__valid 
            = vlSymsp->TOP__tb__DOT__sif.valid;
        vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffdULL 
                                          & vlSelfRef.__VactTriggered[1U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__tb__DOT__sif.data) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__sif__data)))) 
                                            << 1U));
        vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__sif__data 
            = vlSymsp->TOP__tb__DOT__sif.data;
        vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VactTriggered[1U]) 
                                         | (IData)((IData)(
                                                           ((IData)(vlSymsp->TOP__tb__DOT__sif.address) 
                                                            != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__sif__address)))));
        vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__sif__address 
            = vlSymsp->TOP__tb__DOT__sif.address;
        vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                     ((vlSelfRef.__VdynSched.evaluate() 
                                                       << 3U) 
                                                      | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((IData)(vlSelfRef.tb__DOT__clock) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clock__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clock__0 
            = vlSelfRef.tb__DOT__clock;
        vlSelfRef.__VdynSched.doPostUpdates();
    }
    Vswitch_testbench_v0___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vswitch_testbench_v0___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vswitch_testbench_v0___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vswitch_testbench_v0___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            vlSelfRef.__VdynSched.resume();
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
        {
            // Inlined CFunc: _eval_act
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSymsp->TOP__tb__DOT__sif.clock 
                        = vlSelfRef.tb__DOT__clock;
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vswitch_testbench_v0___024root___eval_phase__inact(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval_phase__inact\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("switch_testbench_v0.sv", 280, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vswitch_testbench_v0___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

void Vswitch_testbench_v0_switch_if___nba_sequent__TOP__tb__DOT__sif__0(Vswitch_testbench_v0_switch_if* vlSelf);

bool Vswitch_testbench_v0___024root___eval_phase__nba(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval_phase__nba\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vswitch_testbench_v0___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSymsp->TOP__tb__DOT__sif.clock 
                        = vlSelfRef.tb__DOT__clock;
                }
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    if (vlSymsp->TOP__tb__DOT__sif.reset) {
                        vlSelfRef.tb__DOT____Vcellout__DUT__addr_a = 0U;
                        vlSelfRef.tb__DOT____Vcellout__DUT__addr_b = 0U;
                        vlSelfRef.tb__DOT____Vcellout__DUT__data_a = 0U;
                        vlSelfRef.tb__DOT____Vcellout__DUT__data_b = 0U;
                    } else if (vlSymsp->TOP__tb__DOT__sif.valid) {
                        if ((0x3fU >= (IData)(vlSymsp->TOP__tb__DOT__sif.address))) {
                            vlSelfRef.tb__DOT____Vcellout__DUT__addr_a 
                                = vlSymsp->TOP__tb__DOT__sif.address;
                            vlSelfRef.tb__DOT____Vcellout__DUT__addr_b = 0U;
                            vlSelfRef.tb__DOT____Vcellout__DUT__data_a 
                                = vlSymsp->TOP__tb__DOT__sif.data;
                            vlSelfRef.tb__DOT____Vcellout__DUT__data_b = 0U;
                        } else {
                            vlSelfRef.tb__DOT____Vcellout__DUT__addr_a = 0U;
                            vlSelfRef.tb__DOT____Vcellout__DUT__addr_b 
                                = vlSymsp->TOP__tb__DOT__sif.address;
                            vlSelfRef.tb__DOT____Vcellout__DUT__data_a = 0U;
                            vlSelfRef.tb__DOT____Vcellout__DUT__data_b 
                                = vlSymsp->TOP__tb__DOT__sif.data;
                        }
                    }
                    vlSymsp->TOP__tb__DOT__sif.address_a 
                        = vlSelfRef.tb__DOT____Vcellout__DUT__addr_a;
                    vlSymsp->TOP__tb__DOT__sif.address_b 
                        = vlSelfRef.tb__DOT____Vcellout__DUT__addr_b;
                    vlSymsp->TOP__tb__DOT__sif.data_a 
                        = vlSelfRef.tb__DOT____Vcellout__DUT__data_a;
                    vlSymsp->TOP__tb__DOT__sif.data_b 
                        = vlSelfRef.tb__DOT____Vcellout__DUT__data_b;
                }
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
            if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vswitch_testbench_v0_switch_if___nba_sequent__TOP__tb__DOT__sif__0((&vlSymsp->TOP__tb__DOT__sif));
            }
        }
        Vswitch_testbench_v0___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void Vswitch_testbench_v0___024root___eval(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vswitch_testbench_v0___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("switch_testbench_v0.sv", 280, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("switch_testbench_v0.sv", 280, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vswitch_testbench_v0___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("switch_testbench_v0.sv", 280, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vswitch_testbench_v0___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vswitch_testbench_v0___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vswitch_testbench_v0___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vswitch_testbench_v0___024root___eval_debug_assertions(Vswitch_testbench_v0___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root___eval_debug_assertions\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
