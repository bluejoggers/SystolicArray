// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

VL_ATTR_COLD void VUVM_regblock_uvm_pkg__03a__03auvm_phase__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_phase__Vclpkg(VUVM_regblock_uvm_pkg__03a__03auvm_phase__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_phase__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_phase__Vclpkg\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz15_TBz16__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_phase"s, "uvm_phase_cb"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_phase_cb = __Vfunc_m_register_pair__0__Vfuncout;
    vlSelfRef.__PVT__m_phase_hopper = VL_NEW(VUVM_regblock_std__03a__03amailbox__Tz15, vlSymsp, 0U);
    vlSelfRef.__PVT__m_print_successors__Vstatic__spaces = "                                                 "s;
    vlSelfRef.__PVT__m_print_successors__Vstatic__level = 0U;
}

VL_ATTR_COLD void VUVM_regblock_uvm_pkg__03a__03auvm_phase__Vclpkg___ctor_var_reset(VUVM_regblock_uvm_pkg__03a__03auvm_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_phase__Vclpkg___ctor_var_reset\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_executing_phases.atDefault() = 0;
    vlSelf->__PVT__m_phase_trace = 0;
    vlSelf->__PVT__m_use_ovm_run_semantic = 0;
}
