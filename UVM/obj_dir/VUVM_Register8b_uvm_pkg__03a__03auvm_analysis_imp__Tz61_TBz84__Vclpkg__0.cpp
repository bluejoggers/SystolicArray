// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz84::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24> imp) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz78::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz84::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz78::__PVT__m_if_mask = 0x00000100U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz84::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz84::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz84::__VnoInFunc_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz84::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_analysis_port.svh", 114)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz84::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz84::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz84::~VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz84() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz84::~\n"); );
}
