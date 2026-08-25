// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_callback::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callback::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__m_enabled = 1U;
    /*super.new*/;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc_callback_mode(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ on, CData/*0:0*/ &callback_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc_callback_mode\n"); );
    // Body
    callback_mode__Vfuncrtn = this->__PVT__m_enabled;
    if ((0U == on)) {
        this->__PVT__m_enabled = 0U;
    }
    if ((1U == on)) {
        this->__PVT__m_enabled = 1U;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc_is_enabled(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc_is_enabled\n"); );
    // Body
    is_enabled__Vfuncrtn = 0U;
    this->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, is_enabled__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_callback"s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

VUVM_Activator_uvm_pkg__03a__03auvm_callback::~VUVM_Activator_uvm_pkg__03a__03auvm_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callback::~\n"); );
}
