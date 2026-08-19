// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_fifo__Tz88::init(vlProcess, vlSymsp, name, parent, 0U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__analysis_export = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_analysis_imp__Tz88_TBz100, vlProcess, vlSymsp, "analysis_export"s, 
                                          VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24>{this});
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::__VnoInFunc_write(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__sequencer_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQRNULL"s, "The sequencer pointer is null when attempting a write"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(this->__PVT__sequencer_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_analysis_fifo.svh", 36)->__VnoInFunc_analysis_write(vlProcess, vlSymsp, t);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::__VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::__VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::__VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::_ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi24::~\n"); );
}
