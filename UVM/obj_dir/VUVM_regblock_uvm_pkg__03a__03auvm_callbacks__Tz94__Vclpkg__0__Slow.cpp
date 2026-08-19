// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

VL_ATTR_COLD void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz94__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_callbacks__Tz94__Vclpkg(VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz94__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz94__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_callbacks__Tz94__Vclpkg\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__PVT__reporter = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_report_object, vlProcess, vlSymsp, "cb_tracer"s);
}

VL_ATTR_COLD void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz94__Vclpkg___ctor_var_reset(VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz94__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz94__Vclpkg___ctor_var_reset\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
