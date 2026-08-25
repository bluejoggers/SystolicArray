// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

VL_ATTR_COLD void VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object__Vclpkg(VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object__Vclpkg\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT_____05Fm_uvm_status_container = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_status_container, vlSymsp);
    vlSelfRef.__PVT__copy__Vstatic__depth = 0U;
}

VL_ATTR_COLD void VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg___ctor_var_reset(VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg___ctor_var_reset\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_inst_count = 0;
}

VL_ATTR_COLD void VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg___configure_coverage(VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg___configure_coverage\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}

VL_ATTR_COLD void VUVM_Activator_uvm_pkg__03a__03auvm_object___configure_coverage(VUVM_Activator_uvm_pkg__03a__03auvm_object* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_object___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
