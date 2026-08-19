// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg__03a__03auvm_vreg__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_vreg__Vclpkg(Vuvm_pkg_uvm_pkg__03a__03auvm_vreg__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_vreg__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_vreg__Vclpkg\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz25_TBz26__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_vreg"s, "uvm_vreg_cbs"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_vreg_cbs = __Vfunc_m_register_pair__0__Vfuncout;
}
