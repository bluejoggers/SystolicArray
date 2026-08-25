// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

VL_ATTR_COLD void VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg(VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg\n"); );
    VUVM_Register8b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__PVT__reporter = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_report_object, vlProcess, vlSymsp, "cb_tracer"s);
}

VL_ATTR_COLD void VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg___ctor_var_reset(VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg___ctor_var_reset\n"); );
    VUVM_Register8b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg___configure_coverage(VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg___configure_coverage\n"); );
    VUVM_Register8b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}

VL_ATTR_COLD void VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90___configure_coverage(VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
