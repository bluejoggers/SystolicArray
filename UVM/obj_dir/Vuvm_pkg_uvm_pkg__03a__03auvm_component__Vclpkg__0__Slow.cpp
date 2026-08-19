// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_component__Vclpkg(Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_component__Vclpkg\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__print_config_settings__Vstatic__have_been_warned = 0U;
    vlSelfRef.__PVT__m_set_cl_verb__Vstatic__values.clear();
    vlSelfRef.__PVT__m_set_cl_verb__Vstatic__values.atDefault().clear();
    vlSelfRef.__PVT__m_set_cl_verb__Vstatic__first = 1U;
    vlSelfRef.__PVT__m_set_cl_action__Vstatic__initialized = 0U;
    vlSelfRef.__PVT__m_set_cl_sev__Vstatic__initialized = 0U;
}

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg___ctor_var_reset(Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg___ctor_var_reset\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_config_deprecated_warned = 0;
    vlSelf->__PVT__print_config_matches = 0;
    vlSelf->__PVT__m_time_settings.atDefault().__PVT__offset = VL_SCOPED_RAND_RESET_Q(64, 11392884900788368740ULL, 17276060201503852868ull);
    vlSelf->__PVT__m_time_settings.atDefault().__PVT__verbosity = 0;
    vlSelf->__PVT__m_uvm_applied_cl_action.atDefault().__PVT__used = 0;
    vlSelf->__PVT__m_uvm_applied_cl_sev.atDefault().__PVT__used = 0;
}
