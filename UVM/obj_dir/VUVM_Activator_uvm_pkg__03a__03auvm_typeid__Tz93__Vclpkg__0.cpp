// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz93__Vclpkg::__VnoInFunc_get(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz93> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz93__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz93, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz93::init(VUVM_Activator__Syms* __restrict vlSymsp) {
    VUVM_Activator_uvm_pkg__03a__03auvm_typeid_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz93::new\n"); );
    // Body
    /*super.new*/;
}

VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz93::~VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz93() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz93::~\n"); );
}
