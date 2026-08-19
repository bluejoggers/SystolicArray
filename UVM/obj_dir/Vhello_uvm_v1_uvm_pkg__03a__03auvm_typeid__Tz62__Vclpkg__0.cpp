// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz62__Vclpkg::__VnoInFunc_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz62> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz62__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz62, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz62::init(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz62::new\n"); );
    // Body
    /*super.new*/;
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz62::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz62() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz62::~\n"); );
}
