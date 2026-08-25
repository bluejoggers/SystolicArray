// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz89__Vclpkg::__VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz89> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz89__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz89, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz89::init(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_typeid_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz89::new\n"); );
    // Body
    /*super.new*/;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz89::~VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz89() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz89::~\n"); );
}
