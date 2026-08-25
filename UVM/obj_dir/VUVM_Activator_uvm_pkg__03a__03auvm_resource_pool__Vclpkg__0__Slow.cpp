// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

VL_ATTR_COLD void VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg(VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__0__Vfuncout;
    // Body
    vlSelfRef.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    vlSelfRef.__PVT__rp = __Vfunc_get__0__Vfuncout;
    vlSelfRef.__PVT__print_resources__Vstatic__printer 
        = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_line_printer, vlSymsp);
}

VL_ATTR_COLD void VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___configure_coverage(VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___configure_coverage\n"); );
    VUVM_Activator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}

VL_ATTR_COLD void VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool___configure_coverage(VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
