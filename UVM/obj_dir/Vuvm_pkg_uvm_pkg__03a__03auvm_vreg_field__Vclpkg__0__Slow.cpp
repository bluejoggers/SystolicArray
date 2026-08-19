// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_vreg_field__Vclpkg(Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_vreg_field__Vclpkg\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__1__Vfuncout;
    __Vfunc_m_register_pair__1__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz23_TBz24__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_vreg_field"s, "uvm_vreg_field_cbs"s, __Vfunc_m_register_pair__1__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_vreg_field_cbs 
        = __Vfunc_m_register_pair__1__Vfuncout;
}
