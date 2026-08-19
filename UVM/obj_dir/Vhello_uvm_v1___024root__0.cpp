// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

VlCoroutine Vhello_uvm_v1___024root___eval_initial__TOP__Vtiming__0(Vhello_uvm_v1___024root* vlSelf, VlProcessRef vlProcess);

void Vhello_uvm_v1___024root___eval_initial(Vhello_uvm_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___eval_initial\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhello_uvm_v1___024root___eval_initial__TOP__Vtiming__0(vlSelf, std::make_shared<VlProcess>());
}

VlCoroutine Vhello_uvm_v1___024root___eval_initial__TOP__Vtiming__0(Vhello_uvm_v1___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__Vtask_run_test__0__test_name = "test"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
    vlSymsp->TOP__uvm_pkg.run_test__Vstatic__cs = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.run_test__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 42)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
    vlSymsp->TOP__uvm_pkg.run_test__Vstatic__top = __Vtask_get_root__2__Vfuncout;
    co_await VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.run_test__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 43)->__VnoInFunc_run_test(vlProcess, vlSymsp, vlSelfRef.__Vtask_run_test__0__test_name);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

bool Vhello_uvm_v1___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___trigger_anySet__act\n"); );
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

void Vhello_uvm_v1___024root___timing_ready(Vhello_uvm_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___timing_ready\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5af0e26d__0.ready("@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
}

void Vhello_uvm_v1___024root___timing_resume(Vhello_uvm_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___timing_resume\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h5af0e26d__0.moveToResumeQueue(
                                                          "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    vlSelfRef.__VdynSched.resume();
    vlSelfRef.__VtrigSched_h5af0e26d__0.resume("@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vhello_uvm_v1___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vhello_uvm_v1___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vhello_uvm_v1___024root___eval_phase__act(Vhello_uvm_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___eval_phase__act\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0 = 0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0 
            = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
        vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                     (((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr_hcb469948__1)) 
                                                       << 2U) 
                                                      | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | vlSelfRef.__VdynSched.evaluate())));
        vlSelfRef.__Vtrigprevexpr_hcb469948__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hcb469948__0;
        vlSelfRef.__VdynSched.doPostUpdates();
    }
    Vhello_uvm_v1___024root___timing_ready(vlSelf);
    Vhello_uvm_v1___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhello_uvm_v1___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vhello_uvm_v1___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vhello_uvm_v1___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vhello_uvm_v1___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vhello_uvm_v1___024root___eval_phase__inact(Vhello_uvm_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___eval_phase__inact\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vhello_uvm_v1___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vhello_uvm_v1___024root___eval_phase__nba(Vhello_uvm_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___eval_phase__nba\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vhello_uvm_v1___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vhello_uvm_v1___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void Vhello_uvm_v1___024root___eval(Vhello_uvm_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___eval\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vhello_uvm_v1___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("hello_uvm_v1.sv", 99, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("hello_uvm_v1.sv", 99, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vhello_uvm_v1___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("hello_uvm_v1.sv", 99, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vhello_uvm_v1___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vhello_uvm_v1___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vhello_uvm_v1___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vhello_uvm_v1___024root____VbeforeTrig_h5af0e26d__0(Vhello_uvm_v1___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root____VbeforeTrig_h5af0e26d__0\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
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
void Vhello_uvm_v1___024root___eval_debug_assertions(Vhello_uvm_v1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_uvm_v1___024root___eval_debug_assertions\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
