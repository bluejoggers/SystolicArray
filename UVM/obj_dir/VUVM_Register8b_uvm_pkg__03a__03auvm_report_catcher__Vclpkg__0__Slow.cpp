// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

VL_ATTR_COLD void VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg(VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg\n"); );
    VUVM_Register8b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz51_TBz86__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_report_object"s, "uvm_report_catcher"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_report_catcher 
        = __Vfunc_m_register_pair__0__Vfuncout;
    vlSelfRef.__PVT__get_report_catcher__Vstatic__iter 
        = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz51_TBz86, vlSymsp, VlNull{});
    vlSelfRef.__PVT__print_catcher__Vstatic__iter = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz51_TBz86, vlSymsp, VlNull{});
    vlSelfRef.__PVT__process_all_report_catchers__Vstatic__in_catcher = 0U;
}

VL_ATTR_COLD void VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___ctor_var_reset(VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___ctor_var_reset\n"); );
    VUVM_Register8b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_set_action_called = 0;
    vlSelf->__PVT__m_demoted_fatal = 0;
    vlSelf->__PVT__m_demoted_error = 0;
    vlSelf->__PVT__m_demoted_warning = 0;
    vlSelf->__PVT__m_caught_fatal = 0;
    vlSelf->__PVT__m_caught_error = 0;
    vlSelf->__PVT__m_caught_warning = 0;
    vlSelf->__PVT__m_debug_flags = 0;
    vlSelf->__PVT__do_report = 0;
}

VL_ATTR_COLD void VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___configure_coverage(VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___configure_coverage\n"); );
    VUVM_Register8b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}

VL_ATTR_COLD void VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher___configure_coverage(VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
