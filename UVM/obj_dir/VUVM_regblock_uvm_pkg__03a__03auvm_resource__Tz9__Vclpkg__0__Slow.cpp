// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

VL_ATTR_COLD void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz9__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz9__Vclpkg(VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz9__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz9__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz9__Vclpkg\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz9> __Vfunc_get_type__0__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__0__Vfuncout);
    vlSelfRef.__PVT__my_type = __Vfunc_get_type__0__Vfuncout;
}

VL_ATTR_COLD void VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz9__Vclpkg___ctor_var_reset(VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz9__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz9__Vclpkg___ctor_var_reset\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
