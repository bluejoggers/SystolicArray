// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_adapter_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_accept(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> s, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_> v, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_structure_proxy_> p, CData/*0:0*/ invoke_begin_end) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_accept\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk1__DOT__idx;
    unnamedblk1__DOT__idx = 0;
    IData/*31:0*/ unnamedblk1__DOT__idx__Vloopsize;
    unnamedblk1__DOT__idx__Vloopsize = 0;
    VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component>> c;
    c.clear();
    if (invoke_begin_end) {
        VL_NULL_CHECK(v, "../../uvm/distrib/src/base/uvm_traversal.svh", 124)->__VnoInFunc_begin_v(vlProcess, vlSymsp);
    }
    VL_NULL_CHECK(v, "../../uvm/distrib/src/base/uvm_traversal.svh", 126)->__VnoInFunc_visit(vlSymsp, s);
    VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_traversal.svh", 127)->__VnoInFunc_get_immediate_children(vlSymsp, s, c);
    unnamedblk1__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__idx, c.size())) {
        unnamedblk1__DOT__idx__Vloopsize = c.size();
        this->__VnoInFunc_accept(vlProcess, vlSymsp, c.at(unnamedblk1__DOT__idx), v, p, 0U);
        if ((unnamedblk1__DOT__idx__Vloopsize <= c.size())) {
            unnamedblk1__DOT__idx = ((IData)(1U) + unnamedblk1__DOT__idx);
        }
    }
    if (invoke_begin_end) {
        VL_NULL_CHECK(v, "../../uvm/distrib/src/base/uvm_traversal.svh", 133)->__VnoInFunc_end_v(vlSymsp);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::~Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::~\n"); );
}
