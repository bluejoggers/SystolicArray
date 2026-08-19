// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg__03a__03auvm_object__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object__Vclpkg(Vuvm_pkg_uvm_pkg__03a__03auvm_object__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_object__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object__Vclpkg\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT_____05Fm_uvm_status_container = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_status_container, vlSymsp);
    vlSelfRef.__PVT__copy__Vstatic__depth = 0U;
}

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg__03a__03auvm_object__Vclpkg___ctor_var_reset(Vuvm_pkg_uvm_pkg__03a__03auvm_object__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_object__Vclpkg___ctor_var_reset\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_inst_count = 0;
}
