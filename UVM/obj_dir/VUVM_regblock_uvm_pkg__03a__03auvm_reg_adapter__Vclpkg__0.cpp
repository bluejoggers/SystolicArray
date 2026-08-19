// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name) {
    VUVM_regblock_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_reg2bus(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, const VUVM_regblock_uvm_reg_bus_op__struct__0 &rw, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> &reg2bus__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_reg2bus\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_bus2reg(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> bus_item, VUVM_regblock_uvm_reg_bus_op__struct__0 &rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_bus2reg\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_get_item(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> &get_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_get_item\n"); );
    // Body
    get_item__Vfuncrtn = this->__PVT__m_item;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_m_set_item(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_m_set_item\n"); );
    // Body
    this->__PVT__m_item = item;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__supports_byte_enable = 0;
    __PVT__provides_responses = 0;
}

VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::~VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_adapter::~\n"); );
}
