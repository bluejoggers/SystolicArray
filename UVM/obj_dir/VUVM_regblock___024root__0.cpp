// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

VlCoroutine VUVM_regblock___024root___eval_initial__TOP__Vtiming__0(VUVM_regblock___024root* vlSelf);
VlCoroutine VUVM_regblock___024root___eval_initial__TOP__Vtiming__1(VUVM_regblock___024root* vlSelf, VlProcessRef vlProcess);
VlCoroutine VUVM_regblock___024root___eval_initial__TOP__Vtiming__2(VUVM_regblock___024root* vlSelf);

void VUVM_regblock___024root___eval_initial(VUVM_regblock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___eval_initial\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VUVM_regblock___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VUVM_regblock___024root___eval_initial__TOP__Vtiming__1(vlSelf, std::make_shared<VlProcess>());
    VUVM_regblock___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine VUVM_regblock___024root___eval_initial__TOP__Vtiming__0(VUVM_regblock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___eval_initial__TOP__Vtiming__0\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("regblock_testbench.vcd"s);
    VL_PRINTF_MT("-Info: UVM_regblock.sv:382: $dumpvar ignored, as Verilated without --trace\n");
    vlSelfRef.UVM_regblock__DOT__clock = 0U;
    vlSymsp->TOP__UVM_regblock__DOT__rif.reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "UVM_regblock.sv", 
                                         387);
    vlSymsp->TOP__UVM_regblock__DOT__rif.reset = 0U;
    co_return;
}

VlCoroutine VUVM_regblock___024root___eval_initial__TOP__Vtiming__1(VUVM_regblock___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___eval_initial__TOP__Vtiming__1\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, VlNull{}, "*"s, "vif"s, (&vlSymsp->TOP__UVM_regblock__DOT__rif));
    vlSelfRef.__Vtask_run_test__1__test_name = "reg_test"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
    vlSymsp->TOP__uvm_pkg.run_test__Vstatic__cs = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.run_test__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 42)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
    vlSymsp->TOP__uvm_pkg.run_test__Vstatic__top = __Vtask_get_root__3__Vfuncout;
    co_await VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.run_test__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 43)->__VnoInFunc_run_test(vlProcess, vlSymsp, vlSelfRef.__Vtask_run_test__1__test_name);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine VUVM_regblock___024root___eval_initial__TOP__Vtiming__2(VUVM_regblock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___eval_initial__TOP__Vtiming__2\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "UVM_regblock.sv", 
                                             364);
        vlSelfRef.UVM_regblock__DOT__clock = (1U & 
                                              (~ (IData)(vlSelfRef.UVM_regblock__DOT__clock)));
    }
    co_return;
}

void VUVM_regblock___024root___eval_triggers_ext__act(VUVM_regblock___024root* vlSelf, const VlUnpacked<QData/*63:0*/, 3> &latched) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___eval_triggers_ext__act\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VactTrigPreLoopCounter;
    // Body
    __VactTrigPreLoopCounter = 0U;
    do {
        vlSelfRef.__VactTriggered[((IData)(3U) + __VactTrigPreLoopCounter)] 
            = (vlSelfRef.__VactTriggered[__VactTrigPreLoopCounter] 
               & (~ latched[__VactTrigPreLoopCounter]));
        __VactTrigPreLoopCounter = ((IData)(1U) + __VactTrigPreLoopCounter);
    } while ((1U > __VactTrigPreLoopCounter));
}

bool VUVM_regblock___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((3U > n));
    return (0U);
}

void VUVM_regblock___024root___timing_ready(VUVM_regblock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___timing_ready\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_h5af0e26d__0.ready("@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
}

void VUVM_regblock___024root___timing_resume(VUVM_regblock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___timing_resume\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h5af0e26d__0.moveToResumeQueue(
                                                          "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    vlSelfRef.__VdynSched.resume();
    vlSelfRef.__VtrigSched_h5af0e26d__0.resume("@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    if ((1ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VUVM_regblock___024root___trigger_orInto__act_vec_ext(VlUnpacked<QData/*63:0*/, 4> &out, const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___trigger_orInto__act_vec_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U >= n));
}

void VUVM_regblock___024root___trigger_orInto__act_ext_vec(VlUnpacked<QData/*63:0*/, 3> &out, const VlUnpacked<QData/*63:0*/, 4> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___trigger_orInto__act_ext_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUVM_regblock___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 4> &ext, const std::string &tag);
#endif  // VL_DEBUG
bool VUVM_regblock___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 4> &in);

bool VUVM_regblock___024root___eval_phase__act(VUVM_regblock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___eval_phase__act\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0 = 0;
        vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffff7ULL 
                                          & vlSelfRef.__VactTriggered[2U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__UVM_regblock__DOT__rif.w_enable) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__UVM_regblock__DOT__rif__w_enable)))) 
                                            << 3U));
        vlSelfRef.__Vtrigprevvif_act_TOP__UVM_regblock__DOT__rif__w_enable 
            = vlSymsp->TOP__UVM_regblock__DOT__rif.w_enable;
        vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffbULL 
                                          & vlSelfRef.__VactTriggered[2U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__UVM_regblock__DOT__rif.w_data) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__UVM_regblock__DOT__rif__w_data)))) 
                                            << 2U));
        vlSelfRef.__Vtrigprevvif_act_TOP__UVM_regblock__DOT__rif__w_data 
            = vlSymsp->TOP__UVM_regblock__DOT__rif.w_data;
        vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffdULL 
                                          & vlSelfRef.__VactTriggered[2U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__UVM_regblock__DOT__rif.r_enable) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__UVM_regblock__DOT__rif__r_enable)))) 
                                            << 1U));
        vlSelfRef.__Vtrigprevvif_act_TOP__UVM_regblock__DOT__rif__r_enable 
            = vlSymsp->TOP__UVM_regblock__DOT__rif.r_enable;
        vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VactTriggered[2U]) 
                                         | (IData)((IData)(
                                                           ((IData)(vlSymsp->TOP__UVM_regblock__DOT__rif.address) 
                                                            != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__UVM_regblock__DOT__rif__address)))));
        vlSelfRef.__Vtrigprevvif_act_TOP__UVM_regblock__DOT__rif__address 
            = vlSymsp->TOP__UVM_regblock__DOT__rif.address;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0 
            = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSymsp->TOP__UVM_regblock__DOT__rif.reset) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__UVM_regblock__DOT__rif__reset__0))) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.UVM_regblock__DOT__clock) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__UVM_regblock__DOT__clock__0))))));
        vlSelfRef.__VactTriggered[1U] = VL_EXTEND_QI(64,4, 
                                                     (((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr_hcb469948__1)) 
                                                       << 2U) 
                                                      | ((vlSelfRef.__VdynSched.evaluate() 
                                                          << 1U) 
                                                         | vlSelfRef.__VdlySched.awaitingCurrentTime())));
        vlSelfRef.__Vtrigprevexpr___TOP__UVM_regblock__DOT__clock__0 
            = vlSelfRef.UVM_regblock__DOT__clock;
        vlSelfRef.__Vtrigprevexpr___TOP__UVM_regblock__DOT__rif__reset__0 
            = vlSymsp->TOP__UVM_regblock__DOT__rif.reset;
        vlSelfRef.__Vtrigprevexpr_hcb469948__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0;
        vlSelfRef.__VdynSched.doPostUpdates();
    }
    VUVM_regblock___024root___timing_ready(vlSelf);
    VUVM_regblock___024root___trigger_orInto__act_vec_ext(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
    VUVM_regblock___024root___eval_triggers_ext__act(vlSelf, vlSelfRef.__VnbaTriggered);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VUVM_regblock___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VUVM_regblock___024root___trigger_orInto__act_ext_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VUVM_regblock___024root___trigger_anySet__act_ext(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VUVM_regblock___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSelfRef.__VdlySet__UVM_regblock__DOT__DUT__DOT__mem__v0 = 0U;
                    vlSelfRef.__Vdly__UVM_regblock__DOT____Vcellout__DUT__r_data 
                        = vlSelfRef.UVM_regblock__DOT____Vcellout__DUT__r_data;
                }
            }
            if ((1ULL & vlSelfRef.__VactTriggered[1U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__1
                    vlSymsp->TOP__UVM_regblock__DOT__rif.clock 
                        = vlSelfRef.UVM_regblock__DOT__clock;
                }
            }
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__2
                    if ((1U & (~ (IData)(vlSymsp->TOP__UVM_regblock__DOT__rif.reset)))) {
                        if (vlSymsp->TOP__UVM_regblock__DOT__rif.w_enable) {
                            vlSelfRef.__VdlyVal__UVM_regblock__DOT__DUT__DOT__mem__v0 
                                = vlSymsp->TOP__UVM_regblock__DOT__rif.w_data;
                            vlSelfRef.__VdlyDim0__UVM_regblock__DOT__DUT__DOT__mem__v0 
                                = vlSymsp->TOP__UVM_regblock__DOT__rif.address;
                            vlSelfRef.__VdlySet__UVM_regblock__DOT__DUT__DOT__mem__v0 = 1U;
                        }
                    }
                    if (vlSymsp->TOP__UVM_regblock__DOT__rif.reset) {
                        vlSelfRef.__Vdly__UVM_regblock__DOT____Vcellout__DUT__r_data = 0U;
                    } else if ((1U & (~ (IData)(vlSymsp->TOP__UVM_regblock__DOT__rif.w_enable)))) {
                        if (vlSymsp->TOP__UVM_regblock__DOT__rif.r_enable) {
                            vlSelfRef.__Vdly__UVM_regblock__DOT____Vcellout__DUT__r_data 
                                = vlSelfRef.UVM_regblock__DOT__DUT__DOT__mem
                                [vlSymsp->TOP__UVM_regblock__DOT__rif.address];
                        }
                    }
                }
            }
        }
    }
    return (__VactExecute);
}

bool VUVM_regblock___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 4> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___trigger_anySet__act_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((4U > n));
    return (0U);
}

bool VUVM_regblock___024root___eval_phase__inact(VUVM_regblock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___eval_phase__inact\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VUVM_regblock___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 3> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((3U > n));
}

bool VUVM_regblock___024root___eval_phase__nba(VUVM_regblock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___eval_phase__nba\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VUVM_regblock___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if (vlSelfRef.__VdlySet__UVM_regblock__DOT__DUT__DOT__mem__v0) {
                        vlSelfRef.UVM_regblock__DOT__DUT__DOT__mem[vlSelfRef.__VdlyDim0__UVM_regblock__DOT__DUT__DOT__mem__v0] 
                            = vlSelfRef.__VdlyVal__UVM_regblock__DOT__DUT__DOT__mem__v0;
                    }
                    vlSelfRef.UVM_regblock__DOT____Vcellout__DUT__r_data 
                        = vlSelfRef.__Vdly__UVM_regblock__DOT____Vcellout__DUT__r_data;
                    vlSymsp->TOP__UVM_regblock__DOT__rif.r_data 
                        = vlSelfRef.UVM_regblock__DOT____Vcellout__DUT__r_data;
                }
            }
        }
        VUVM_regblock___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUVM_regblock___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 3> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VUVM_regblock___024root___eval(VUVM_regblock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___eval\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VUVM_regblock___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("UVM_regblock.sv", 362, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("UVM_regblock.sv", 362, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VUVM_regblock___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("UVM_regblock.sv", 362, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VUVM_regblock___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VUVM_regblock___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VUVM_regblock___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void VUVM_regblock___024root____VbeforeTrig_h5af0e26d__0(VUVM_regblock___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root____VbeforeTrig_h5af0e26d__0\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 3> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_hcb469948__0;
    __Vtrigprevexpr_hcb469948__0 = 0;
    // Body
    __Vtrigprevexpr_hcb469948__0 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(__Vtrigprevexpr_hcb469948__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_hcb469948__1)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr_hcb469948__1 = __Vtrigprevexpr_hcb469948__0;
    if ((4ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_h5af0e26d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

#ifdef VL_DEBUG
void VUVM_regblock___024root___eval_debug_assertions(VUVM_regblock___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUVM_regblock___024root___eval_debug_assertions\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
