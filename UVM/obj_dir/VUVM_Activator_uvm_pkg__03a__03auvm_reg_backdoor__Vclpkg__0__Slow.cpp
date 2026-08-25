// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

VL_ATTR_COLD void VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg(VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__1__Vfuncout;
    __Vfunc_m_register_pair__1__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz92_TBz91__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_reg_backdoor"s, "uvm_reg_cbs"s, __Vfunc_m_register_pair__1__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_reg_cbs = __Vfunc_m_register_pair__1__Vfuncout;
}

VL_ATTR_COLD void VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg___configure_coverage(VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg___configure_coverage\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}

VL_ATTR_COLD void VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor___configure_coverage(VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
