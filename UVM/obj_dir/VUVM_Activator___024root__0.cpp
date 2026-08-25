// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

VlCoroutine VUVM_Activator___024root___eval_initial__TOP__Vtiming__0(VUVM_Activator___024root* vlSelf, VlProcessRef vlProcess);
VlCoroutine VUVM_Activator___024root___eval_initial__TOP__Vtiming__1(VUVM_Activator___024root* vlSelf);

void VUVM_Activator___024root___eval_initial(VUVM_Activator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___eval_initial\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VUVM_Activator___024root___eval_initial__TOP__Vtiming__0(vlSelf, std::make_shared<VlProcess>());
    VUVM_Activator___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine VUVM_Activator___024root___eval_initial__TOP__Vtiming__0(VUVM_Activator___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___eval_initial__TOP__Vtiming__0\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->_vm_contextp__->dumpfile("Activator_dumpfile.vcd"s);
    VL_PRINTF_MT("-Info: UVM_Activator.sv:331: $dumpvar ignored, as Verilated without --trace\n");
    vlSelfRef.UVM_Activator__DOT__clock = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, VlNull{}, "*"s, "vif"s, (&vlSymsp->TOP__UVM_Activator__DOT__aif));
    vlSelfRef.__Vtask_run_test__1__test_name = "act_test"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
    vlSymsp->TOP__uvm_pkg.run_test__Vstatic__cs = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.run_test__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 42)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
    vlSymsp->TOP__uvm_pkg.run_test__Vstatic__top = __Vtask_get_root__3__Vfuncout;
    co_await VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.run_test__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 43)->__VnoInFunc_run_test(vlProcess, vlSymsp, vlSelfRef.__Vtask_run_test__1__test_name);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine VUVM_Activator___024root___eval_initial__TOP__Vtiming__1(VUVM_Activator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___eval_initial__TOP__Vtiming__1\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "UVM_Activator.sv", 
                                             320);
        vlSelfRef.UVM_Activator__DOT__clock = (1U & 
                                               (~ (IData)(vlSelfRef.UVM_Activator__DOT__clock)));
    }
    co_return;
}

bool VUVM_Activator___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___trigger_anySet__ico\n"); );
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

#ifdef VL_DEBUG
VL_ATTR_COLD void VUVM_Activator___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VUVM_Activator___024root___eval_phase__ico(VUVM_Activator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___eval_phase__ico\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffdULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((QData)((IData)(
                                                            (vlSymsp->TOP__UVM_Activator__DOT__aif.data_in 
                                                             != vlSelfRef.__Vtrigprevvif_ico_TOP__UVM_Activator__DOT__aif__data_in))) 
                                            << 1U));
        vlSelfRef.__Vtrigprevvif_ico_TOP__UVM_Activator__DOT__aif__data_in 
            = vlSymsp->TOP__UVM_Activator__DOT__aif.data_in;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VUVM_Activator___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VUVM_Activator___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSymsp->TOP__UVM_Activator__DOT__aif.data_out 
                        = (vlSymsp->TOP__UVM_Activator__DOT__aif.data_in 
                           & (- (IData)((1U & (~ (vlSymsp->TOP__UVM_Activator__DOT__aif.data_in 
                                                  >> 0x0000001fU))))));
                }
            }
        }
    }
    return (__VicoExecute);
}

bool VUVM_Activator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___trigger_anySet__act\n"); );
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

void VUVM_Activator___024root___timing_ready(VUVM_Activator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___timing_ready\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5af0e26d__0.ready("@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
}

void VUVM_Activator___024root___timing_resume(VUVM_Activator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___timing_resume\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h5af0e26d__0.moveToResumeQueue(
                                                          "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    vlSelfRef.__VdynSched.resume();
    vlSelfRef.__VtrigSched_h5af0e26d__0.resume("@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VUVM_Activator___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void VUVM_Activator___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VUVM_Activator___024root___eval_phase__act(VUVM_Activator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___eval_phase__act\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0 = 0;
        vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VactTriggered[1U]) 
                                         | (IData)((IData)(
                                                           (vlSymsp->TOP__UVM_Activator__DOT__aif.data_in 
                                                            != vlSelfRef.__Vtrigprevvif_act_TOP__UVM_Activator__DOT__aif__data_in))));
        vlSelfRef.__Vtrigprevvif_act_TOP__UVM_Activator__DOT__aif__data_in 
            = vlSymsp->TOP__UVM_Activator__DOT__aif.data_in;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0 
            = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
        vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                     (((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr_hcb469948__1)) 
                                                       << 2U) 
                                                      | ((vlSelfRef.__VdynSched.evaluate() 
                                                          << 1U) 
                                                         | vlSelfRef.__VdlySched.awaitingCurrentTime())));
        vlSelfRef.__Vtrigprevexpr_hcb469948__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0;
        vlSelfRef.__VdynSched.doPostUpdates();
    }
    VUVM_Activator___024root___timing_ready(vlSelf);
    VUVM_Activator___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VUVM_Activator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VUVM_Activator___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VUVM_Activator___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VUVM_Activator___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSymsp->TOP__UVM_Activator__DOT__aif.clock 
                        = vlSelfRef.UVM_Activator__DOT__clock;
                }
            }
            if ((1ULL & vlSelfRef.__VactTriggered[1U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSymsp->TOP__UVM_Activator__DOT__aif.data_out 
                        = (vlSymsp->TOP__UVM_Activator__DOT__aif.data_in 
                           & (- (IData)((1U & (~ (vlSymsp->TOP__UVM_Activator__DOT__aif.data_in 
                                                  >> 0x0000001fU))))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool VUVM_Activator___024root___eval_phase__inact(VUVM_Activator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___eval_phase__inact\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        vlSelfRef.__VdlySched.resumeZeroDelay();
    }
    return (__VinactExecute);
}

void VUVM_Activator___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool VUVM_Activator___024root___eval_phase__nba(VUVM_Activator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___eval_phase__nba\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VUVM_Activator___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VUVM_Activator___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void VUVM_Activator___024root___eval(VUVM_Activator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___eval\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VUVM_Activator___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("UVM_Activator.sv", 318, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VUVM_Activator___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VUVM_Activator___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("UVM_Activator.sv", 318, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("UVM_Activator.sv", 318, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VUVM_Activator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("UVM_Activator.sv", 318, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VUVM_Activator___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VUVM_Activator___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VUVM_Activator___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void VUVM_Activator___024root____VbeforeTrig_h5af0e26d__0(VUVM_Activator___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root____VbeforeTrig_h5af0e26d__0\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_hcb469948__0;
    __Vtrigprevexpr_hcb469948__0 = 0;
    // Body
    __Vtrigprevexpr_hcb469948__0 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_hcb469948__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_hcb469948__1)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr_hcb469948__1 = __Vtrigprevexpr_hcb469948__0;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h5af0e26d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void VUVM_Activator___024root___eval_debug_assertions(VUVM_Activator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_Activator___024root___eval_debug_assertions\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
