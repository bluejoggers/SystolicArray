// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi22> imp) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz97::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz97::__PVT__m_if_mask = 0x00000100U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96::__VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96::__VnoInFunc_write(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/tlm1/uvm_analysis_port.svh", 114)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96::~Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96::~\n"); );
}
