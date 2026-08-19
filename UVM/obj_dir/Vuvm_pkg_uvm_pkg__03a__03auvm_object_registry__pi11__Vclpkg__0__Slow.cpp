// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg(Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi11> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    vlSelfRef.__PVT__me = __Vfunc_get__0__Vfuncout;
}

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg___ctor_var_reset(Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg___ctor_var_reset\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
