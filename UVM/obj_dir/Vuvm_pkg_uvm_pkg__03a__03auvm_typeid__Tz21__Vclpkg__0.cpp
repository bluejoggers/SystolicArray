// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz21__Vclpkg::__VnoInFunc_get(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz21> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz21__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz21, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz21::init(Vuvm_pkg__Syms* __restrict vlSymsp) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_typeid_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz21::new\n"); );
    // Body
    /*super.new*/;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz21::~Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz21() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz21::~\n"); );
}
