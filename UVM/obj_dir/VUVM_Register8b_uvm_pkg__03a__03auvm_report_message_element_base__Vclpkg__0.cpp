// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_get_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT___name;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_set_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_set_name\n"); );
    // Body
    this->__PVT___name = name;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_get_action(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_get_action\n"); );
    // Body
    get_action__Vfuncrtn = this->__PVT___action;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_set_action(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_set_action\n"); );
    // Body
    this->__PVT___action = action;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((0U != (3U & this->__PVT___action))) {
        this->__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_record(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_record\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((0U != (0x00000040U & this->__PVT___action))) {
        this->__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_copy(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_copy\n"); );
    // Body
    this->__VnoInFunc_do_copy(vlSymsp, rhs);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_clone(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_clone\n"); );
    // Body
    this->__VnoInFunc_do_clone(vlSymsp, clone__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_print\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_record(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_record\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_copy(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_copy\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_clone(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base> &do_clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_clone\n"); );
    // Body
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::init(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT___action = 0;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::~VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_base::~\n"); );
}
