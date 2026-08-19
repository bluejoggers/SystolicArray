// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name) {
    Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.size())) {
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(1U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_send_request(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_send_request\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> m_request;
    if ((VlNull{} == Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SSENDREQ"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    __VlefExpr_0 = VL_CAST_DYNAMIC(request, m_request);
    if ((! __VlefExpr_0)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SSENDREQ"s, "Failure to cast uvm_sequence_item to request"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence.svh", 78)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69>{this}, m_request, rerandomize);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_get_current_item(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> &get_current_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_get_current_item\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    __VlefExpr_0 = VL_CAST_DYNAMIC(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__param_sequencer);
    if ((! __VlefExpr_0)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SGTCURR"s, "Failure to cast m_sequencer to the parameterized sequencer"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(this->__PVT__param_sequencer, "../../uvm/distrib/src/seq/uvm_sequence.svh", 96)->__VnoInFunc_get_current_item(vlSymsp, get_current_item__Vfuncrtn);
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_get_response(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> &response, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_get_response\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_base_response__6__response;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> rsp;
    co_await this->__VnoInFunc_get_base_response(vlProcess, vlSymsp, __Vtask_get_base_response__6__response, transaction_id);
    rsp = __Vtask_get_base_response__6__response;
    __VlefExpr_0 = VL_CAST_DYNAMIC(rsp, response);
    if (VL_UNLIKELY(((! __VlefExpr_0)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_sequence.svh:121: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence__Tz69_TBz69.get_response", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("../../uvm/distrib/src/seq/uvm_sequence.svh", 121, "");
    }
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_put_response(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> response;
    __VlefExpr_0 = VL_CAST_DYNAMIC(response_item, response);
    if ((! __VlefExpr_0)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "PUTRSP"s, "Failure to cast response in put_response"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequence.svh", 143)->__VnoInFunc_print_object(vlProcess, vlSymsp, "req"s, this->__PVT__req, 0x2eU);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequence.svh", 144)->__VnoInFunc_print_object(vlProcess, vlSymsp, "rsp"s, this->__PVT__rsp, 0x2eU);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::~Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vhello_uvm_uvm_pkg__03a__03auvm_sequence__Tz69_TBz69::~\n"); );
}
