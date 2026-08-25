// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_get_value(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &size, IData/*31:0*/ &radix, VlWide<128>/*4095:0*/ &get_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_get_value\n"); );
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    size = this->__PVT___size;
    radix = this->__PVT___radix;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        get_value__Vfuncrtn[__Vilp1] = this->__PVT___val
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_set_value(VUVM_Activator__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_set_value\n"); );
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    this->__PVT___size = size;
    this->__PVT___radix = radix;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        this->__PVT___val[__Vilp1] = value[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_message.svh", 143)->__VnoInFunc_print_int(vlSymsp, VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val, this->__PVT___size, this->__PVT___radix, 0x2eU, ""s);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_record(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_record\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_report_message.svh", 147)->__VnoInFunc_record_field(vlProcess, vlSymsp, VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val, this->__PVT___size, this->__PVT___radix);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_copy(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_copy\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element> _rhs;
    __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, _rhs);
    if (VL_UNLIKELY(((! __VlefExpr_0)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_report_message.svh:152: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_report_message_int_element.do_copy", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("../../uvm/distrib/src/base/uvm_report_message.svh", 152, "");
    }
    VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name 
        = VL_NULL_CHECK(_rhs, "../../uvm/distrib/src/base/uvm_report_message.svh", 153)
        ->__PVT___name;
    VL_ASSIGN_W(4096, this->__PVT___val, VL_NULL_CHECK(_rhs, "../../uvm/distrib/src/base/uvm_report_message.svh", 154)
                ->__PVT___val);
    this->__PVT___size = VL_NULL_CHECK(_rhs, "../../uvm/distrib/src/base/uvm_report_message.svh", 155)
        ->__PVT___size;
    this->__PVT___radix = VL_NULL_CHECK(_rhs, "../../uvm/distrib/src/base/uvm_report_message.svh", 156)
        ->__PVT___radix;
    VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___action 
        = VL_NULL_CHECK(rhs, "../../uvm/distrib/src/base/uvm_report_message.svh", 157)
        ->__PVT___action;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_clone(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base> &do_clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_clone\n"); );
    // Body
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element> tmp;
    tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element, vlSymsp);
    VL_NULL_CHECK(tmp, "../../uvm/distrib/src/base/uvm_report_message.svh", 162)->__VnoInFunc_copy(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element>{this});
    do_clone__Vfuncrtn = tmp;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::init(VUVM_Activator__Syms* __restrict vlSymsp) {
    VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    VL_SCOPED_RAND_RESET_W(4096, __PVT___val, 7558448463692394339ULL, 1123822410863971104ull);
    __PVT___size = 0;
    __PVT___radix = 0;
}

VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::~VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message_int_element::~\n"); );
}
