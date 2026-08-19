// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg___eval_static__TOP__uvm_pkg(Vuvm_pkg_uvm_pkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuvm_pkg_uvm_pkg___eval_static__TOP__uvm_pkg\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_table_printer> __PVT__uvm_default_table_printer;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer> __PVT__uvm_default_tree_printer;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_line_printer> __PVT__uvm_default_line_printer;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__12__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__PVT__uvm_re_match__Vstatic__e = 0U;
    vlSelfRef.__PVT__uvm_re_match__Vstatic__es = 0U;
    vlSelfRef.__PVT__uvm_re_match__Vstatic__s = 0U;
    vlSelfRef.__PVT__uvm_re_match__Vstatic__ss = 0U;
    __PVT__uvm_default_table_printer = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_table_printer, vlSymsp);
    __PVT__uvm_default_tree_printer = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer, vlSymsp);
    __PVT__uvm_default_line_printer = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_line_printer, vlSymsp);
    vlSelfRef.__PVT__uvm_default_printer = __PVT__uvm_default_table_printer;
    vlSelfRef.__PVT__uvm_default_packer = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_packer, vlSymsp);
    vlSelfRef.__PVT__uvm_default_comparer = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_comparer, vlSymsp);
    vlSelfRef.__PVT__uvm_global_random_seed = VL_RANDOM_I();
    vlSelfRef.__PVT__uvm_instance_scope__Vstatic__c = 0U;
    vlSelfRef.__PVT__uvm_instance_scope__Vstatic__pos = 0U;
    vlSelfRef.__PVT__uvm_oneway_hash__Vstatic__msb = 0U;
    vlSelfRef.__PVT__uvm_oneway_hash__Vstatic__current_byte = 0U;
    vlSelfRef.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0U;
    vlSelfRef.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
    vlSelfRef.__PVT__uvm_leaf_scope__Vstatic__pos = 0U;
    vlSelfRef.__PVT__uvm_leaf_scope__Vstatic__bmatches = 0U;
    vlSelfRef.__PVT__uvm_get_array_index_int__Vstatic__i = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__5__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
    vlSelfRef.__PVT__uvm_top = __Vfunc_get__6__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_test_done_objection__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
    vlSelfRef.__PVT__uvm_is_match__Vstatic__s = ""s;
    vlSelfRef.__PVT__uvm_wait_for_nba_region__Vstatic__nba = 0U;
    vlSelfRef.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__12__Vfuncout);
    vlSelfRef.__PVT__uvm_cmdline_proc = __Vfunc_get_inst__12__Vfuncout;
}

VL_ATTR_COLD void Vuvm_pkg_uvm_pkg___ctor_var_reset(Vuvm_pkg_uvm_pkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuvm_pkg_uvm_pkg___ctor_var_reset\n"); );
    Vuvm_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
