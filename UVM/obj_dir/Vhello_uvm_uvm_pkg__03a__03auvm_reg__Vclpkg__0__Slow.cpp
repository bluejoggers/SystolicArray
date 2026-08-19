// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

VL_ATTR_COLD void Vhello_uvm_uvm_pkg__03a__03auvm_reg__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_reg__Vclpkg(Vhello_uvm_uvm_pkg__03a__03auvm_reg__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_reg__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_reg__Vclpkg\n"); );
    Vhello_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz18_TBz19__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_reg"s, "uvm_reg_cbs"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_reg_cbs = __Vfunc_m_register_pair__0__Vfuncout;
}

VL_ATTR_COLD void Vhello_uvm_uvm_pkg__03a__03auvm_reg__Vclpkg___ctor_var_reset(Vhello_uvm_uvm_pkg__03a__03auvm_reg__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_reg__Vclpkg___ctor_var_reset\n"); );
    Vhello_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_max_size = 0;
}
