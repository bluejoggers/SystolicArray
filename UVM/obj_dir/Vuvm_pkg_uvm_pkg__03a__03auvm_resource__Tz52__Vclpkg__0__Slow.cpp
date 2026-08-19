// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz52__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz52__Vclpkg(Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz52__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz52__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz52__Vclpkg\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz52> __Vfunc_get_type__0__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__0__Vfuncout);
    vlSelfRef.__PVT__my_type = __Vfunc_get_type__0__Vfuncout;
}

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz52__Vclpkg___ctor_var_reset(Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz52__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz52__Vclpkg___ctor_var_reset\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
