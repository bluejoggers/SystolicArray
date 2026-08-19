// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

VL_ATTR_COLD void VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg(VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__0__Vfuncout;
    // Body
    vlSelfRef.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    vlSelfRef.__PVT__rp = __Vfunc_get__0__Vfuncout;
    vlSelfRef.__PVT__print_resources__Vstatic__printer 
        = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_line_printer, vlSymsp);
}
