// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

VL_ATTR_COLD void Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg(Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_pool__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg\n"); );
    Vhello_uvm_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__0__Vfuncout;
    // Body
    vlSelfRef.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    vlSelfRef.__PVT__rp = __Vfunc_get__0__Vfuncout;
    vlSelfRef.__PVT__print_resources__Vstatic__printer 
        = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer, vlSymsp);
}
