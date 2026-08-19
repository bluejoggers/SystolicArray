// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

VL_ATTR_COLD void Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz40__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz40__Vclpkg(Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz40__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz40__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz40__Vclpkg\n"); );
    Vhello_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz40> __Vfunc_get_type__0__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__0__Vfuncout);
    vlSelfRef.__PVT__my_type = __Vfunc_get_type__0__Vfuncout;
}

VL_ATTR_COLD void Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz40__Vclpkg___ctor_var_reset(Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz40__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz40__Vclpkg___ctor_var_reset\n"); );
    Vhello_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
