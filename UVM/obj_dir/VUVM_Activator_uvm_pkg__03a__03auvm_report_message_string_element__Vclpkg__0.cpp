// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_get_value(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_get_value\n"); );
    // Body
    get_value__Vfuncrtn = this->__PVT___val;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_set_value(VUVM_Activator__Syms* __restrict vlSymsp, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_set_value\n"); );
    // Body
    this->__PVT___val = value;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_message.svh", 199)->__VnoInFunc_print_string(vlSymsp, VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val, 0x2eU);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_record(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_record\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_report_message.svh", 203)->__VnoInFunc_record_string(vlProcess, vlSymsp, VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_copy(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_copy\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element> _rhs;
    __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, _rhs);
    if (VL_UNLIKELY(((! __VlefExpr_0)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_report_message.svh:208: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_report_message_string_element.do_copy", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("../../uvm/distrib/src/base/uvm_report_message.svh", 208, "");
    }
    VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name 
        = VL_NULL_CHECK(_rhs, "../../uvm/distrib/src/base/uvm_report_message.svh", 209)
        ->__PVT___name;
    this->__PVT___val = VL_NULL_CHECK(_rhs, "../../uvm/distrib/src/base/uvm_report_message.svh", 210)
        ->__PVT___val;
    VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___action 
        = VL_NULL_CHECK(rhs, "../../uvm/distrib/src/base/uvm_report_message.svh", 211)
        ->__PVT___action;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_clone(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base> &do_clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_clone\n"); );
    // Body
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element> tmp;
    tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element, vlSymsp);
    VL_NULL_CHECK(tmp, "../../uvm/distrib/src/base/uvm_report_message.svh", 216)->__VnoInFunc_copy(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element>{this});
    do_clone__Vfuncrtn = tmp;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::init(VUVM_Activator__Syms* __restrict vlSymsp) {
    VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::~VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_string_element::~\n"); );
}
