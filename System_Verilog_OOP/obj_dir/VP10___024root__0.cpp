// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP10.h for the primary calling header

#include "VP10__pch.h"

VlCoroutine VP10_cover_tb___eval_initial__TOP__cover_tb__Vtiming__0(VP10_cover_tb* vlSelf);
VlCoroutine VP10_cover_tb___eval_initial__TOP__cover_tb__Vtiming__1(VP10_cover_tb* vlSelf);

void VP10___024root___eval_initial(VP10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root___eval_initial\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VP10_cover_tb___eval_initial__TOP__cover_tb__Vtiming__0((&vlSymsp->TOP__cover_tb));
    VP10_cover_tb___eval_initial__TOP__cover_tb__Vtiming__1((&vlSymsp->TOP__cover_tb));
}

bool VP10___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root___trigger_anySet__act\n"); );
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

void VP10___024root___timing_ready(VP10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root___timing_ready\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5439cdbc__0.ready("@(negedge cover_tb.clk)");
    }
}

void VP10___024root___timing_resume(VP10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root___timing_resume\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h5439cdbc__0.moveToResumeQueue(
                                                          "@(negedge cover_tb.clk)");
    vlSelfRef.__VtrigSched_h5439cdbc__0.resume("@(negedge cover_tb.clk)");
    vlSelfRef.__VdynSched.resume();
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VP10___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VP10___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void VP10_cover_tb___act_comb__TOP__cover_tb__0(VP10_cover_tb* vlSelf);
void VP10_cover_tb___act_sequent__TOP__cover_tb__0(VP10_cover_tb* vlSelf);

bool VP10___024root___eval_phase__act(VP10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root___eval_phase__act\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                     (((vlSelfRef.__VdynSched.evaluate() 
                                                        << 3U) 
                                                       | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U)) 
                                                      | ((((~ (IData)(vlSymsp->TOP__cover_tb.__PVT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cover_tb____PVT__clk__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSymsp->TOP__cover_tb.__PVT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cover_tb____PVT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__cover_tb____PVT__clk__0 
            = vlSymsp->TOP__cover_tb.__PVT__clk;
        vlSelfRef.__VdynSched.doPostUpdates();
    }
    VP10___024root___timing_ready(vlSelf);
    VP10___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VP10___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VP10___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VP10___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VP10___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((6ULL & vlSelfRef.__VactTriggered[0U])) {
                VP10_cover_tb___act_comb__TOP__cover_tb__0((&vlSymsp->TOP__cover_tb));
            }
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                VP10_cover_tb___act_sequent__TOP__cover_tb__0((&vlSymsp->TOP__cover_tb));
            }
        }
    }
    return (__VactExecute);
}

bool VP10___024root___eval_phase__inact(VP10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root___eval_phase__inact\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("P10.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VP10___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void VP10_cover_tb___nba_sequent__TOP__cover_tb__0(VP10_cover_tb* vlSelf);

bool VP10___024root___eval_phase__nba(VP10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root___eval_phase__nba\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VP10___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                VP10_cover_tb___nba_sequent__TOP__cover_tb__0((&vlSymsp->TOP__cover_tb));
            }
            if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
                VP10_cover_tb___act_comb__TOP__cover_tb__0((&vlSymsp->TOP__cover_tb));
            }
            if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
                VP10_cover_tb___act_sequent__TOP__cover_tb__0((&vlSymsp->TOP__cover_tb));
            }
        }
        VP10___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VP10___024root___eval(VP10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root___eval\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VP10___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("P10.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("P10.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VP10___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("P10.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VP10___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VP10___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VP10___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void VP10___024root____VbeforeTrig_h5439cdbc__0(VP10___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root____VbeforeTrig_h5439cdbc__0\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSymsp->TOP__cover_tb.__PVT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cover_tb____PVT__clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__cover_tb____PVT__clk__0 
        = vlSymsp->TOP__cover_tb.__PVT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h5439cdbc__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void VP10___024root___eval_debug_assertions(VP10___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root___eval_debug_assertions\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
