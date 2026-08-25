// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__seq_item_port = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_port__pi20, vlProcess, vlSymsp, "seq_item_port"s, 
                                        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61>{this}, 0U, 1U);
    this->__PVT__rsp_port = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_port__Tz61, vlProcess, vlSymsp, "rsp_port"s, 
                                   VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61>{this});
    this->__PVT__seq_item_prod_if = this->__PVT__seq_item_port;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_driver #(REQ,RSP)"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::~VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::~\n"); );
}
