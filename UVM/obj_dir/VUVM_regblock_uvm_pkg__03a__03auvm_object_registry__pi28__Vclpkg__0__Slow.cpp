// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

VL_ATTR_COLD void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg(VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    vlSelfRef.__PVT__me = __Vfunc_get__0__Vfuncout;
}

VL_ATTR_COLD void VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg___ctor_var_reset(VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg___ctor_var_reset\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
