// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

VL_ATTR_COLD void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__PVT__reporter = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_object, vlProcess, vlSymsp, "cb_tracer"s);
}

VL_ATTR_COLD void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg___ctor_var_reset(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg___ctor_var_reset\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
