// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz118::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> imp) {
    VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz117::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz118::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz117::__PVT__m_if_mask = 0x00000100U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz118::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz118::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz118::__VnoInFunc_write(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz118::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_analysis_port.svh", 114)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz118::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz118::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz118::~VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz118() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz118::~\n"); );
}
