// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz50__Vclpkg::__VnoInFunc_get(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz50> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz50__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz50, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz50::init(VUVM_regblock__Syms* __restrict vlSymsp) {
    VUVM_regblock_uvm_pkg__03a__03auvm_typeid_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz50::new\n"); );
    // Body
    /*super.new*/;
}

VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz50::~VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz50() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz50::~\n"); );
}
