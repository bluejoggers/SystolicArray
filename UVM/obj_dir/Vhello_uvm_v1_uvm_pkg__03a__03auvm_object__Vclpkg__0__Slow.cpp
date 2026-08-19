// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

VL_ATTR_COLD void Vhello_uvm_v1_uvm_pkg__03a__03auvm_object__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object__Vclpkg(Vhello_uvm_v1_uvm_pkg__03a__03auvm_object__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_object__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object__Vclpkg\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT_____05Fm_uvm_status_container = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container, vlSymsp);
    vlSelfRef.__PVT__copy__Vstatic__depth = 0U;
}

VL_ATTR_COLD void Vhello_uvm_v1_uvm_pkg__03a__03auvm_object__Vclpkg___ctor_var_reset(Vhello_uvm_v1_uvm_pkg__03a__03auvm_object__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_object__Vclpkg___ctor_var_reset\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_inst_count = 0;
}
