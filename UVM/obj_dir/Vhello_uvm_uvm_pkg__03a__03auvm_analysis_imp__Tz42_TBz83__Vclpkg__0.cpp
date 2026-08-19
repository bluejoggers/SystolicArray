// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> imp) {
    Vhello_uvm_uvm_pkg__03a__03auvm_port_base__Tz82::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vhello_uvm_uvm_pkg__03a__03auvm_port_base__Tz82::__PVT__m_if_mask = 0x00000100U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83::__VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83::__VnoInFunc_write(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_analysis_port.svh", 114)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83::~Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83::~\n"); );
}
