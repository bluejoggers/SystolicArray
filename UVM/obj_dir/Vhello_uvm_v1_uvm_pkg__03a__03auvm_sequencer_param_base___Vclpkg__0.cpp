// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_current_item(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> &get_current_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_current_item\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_peek__0__t;
    // Body
    CData/*0:0*/ __VlefCall_0__try_peek;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> t;
    {
        VL_NULL_CHECK(this->__PVT__m_req_fifo, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 83)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__0__t, __VlefCall_0__try_peek);
        t = __Vtask_try_peek__0__t;
        if ((1U & (~ (IData)(__VlefCall_0__try_peek)))) {
            get_current_item__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_current_item__Vfuncrtn = t;
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_last_req(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> &last_req__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_last_req\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    {
        if ((n > this->__PVT__m_num_last_reqs)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, VL_SFORMATF_N_NX("Invalid last access (%0d), the max history is %0d",2
                                                                                , '#',32,n
                                                                                , '~',32,this->__PVT__m_num_last_reqs) , 0x000000c8U, ""s, 0U, ""s, 0U);
            last_req__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((n == this->__PVT__m_last_req_buffer.size())) {
            last_req__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        last_req__Vfuncrtn = this->__PVT__m_last_req_buffer.at(n);
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_last_rsp(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> &last_rsp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_last_rsp\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    {
        if ((n > this->__PVT__m_num_last_rsps)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, VL_SFORMATF_N_NX("Invalid last access (%0d), the max history is %0d",2
                                                                                , '#',32,n
                                                                                , '~',32,this->__PVT__m_num_last_rsps) , 0x000000c8U, ""s, 0U, ""s, 0U);
            last_rsp__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((n == this->__PVT__m_last_rsp_buffer.size())) {
            last_rsp__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        last_rsp__Vfuncrtn = this->__PVT__m_last_rsp_buffer.at(n);
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_base::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_num_last_reqs = 1U;
    this->__PVT__num_last_items = 1U;
    this->__PVT__m_num_last_rsps = 1U;
    /*super.new*/;
    this->__PVT__rsp_export = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_analysis_export__Tz26, vlProcess, vlSymsp, "rsp_export"s, 
                                     VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_>{this});
    this->__PVT__sqr_rsp_analysis_fifo = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_, vlProcess, vlSymsp, "sqr_rsp_analysis_fifo"s, 
                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_>{this});
    VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 230)->__PVT__print_enabled = 0U;
    this->__PVT__m_req_fifo = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_fifo__Tz26, vlProcess, vlSymsp, "req_fifo"s, 
                                     VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_>{this}, 1U);
    VL_NULL_CHECK(this->__PVT__m_req_fifo, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 232)->__PVT__print_enabled = 0U;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 241)->__VnoInFunc_print_field_int(vlSymsp, "num_last_reqs"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__m_num_last_reqs), 0x00000020U, 0x02000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 242)->__VnoInFunc_print_field_int(vlSymsp, "num_last_rsps"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__m_num_last_rsps), 0x00000020U, 0x02000000U, 0x2eU, ""s);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_connect_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(this->__PVT__rsp_export, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 251)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 251)
                                                                                ->__PVT__analysis_export);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 260)->__PVT__sequencer_ptr 
        = VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_>{this};
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_send_request(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_send_request\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__try_put;
    IData/*31:0*/ __VlefCall_4__m_get_sqr_sequence_id;
    IData/*31:0*/ __VlefCall_2__get_transaction_id;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> param_t;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SNDREQ"s, "Send request sequence_ptr is null"s, 0U, ""s, 0U, ""s, 0U);
    }
    if (VL_GTS_III(32, 1U, VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 276)
                   ->__PVT__m_wait_for_grant_semaphore)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SNDREQ"s, "Send request called without wait_for_grant"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 279)->__PVT__m_wait_for_grant_semaphore 
        = (VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 279)
           ->__PVT__m_wait_for_grant_semaphore - (IData)(1U));
    param_t = t;
    if (rerandomize) {
        if ((VlNull{} != param_t)) {
            VL_NULL_CHECK(param_t, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 283)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
            __VlefCond_1 = __VlefCall_0__randomize;
        } else {
            __VlefCond_1 = 0U;
        }
        if ((1U & (~ (0U != __VlefCond_1)))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SQRSNDREQ"s, "Failed to rerandomize sequence item in send_request"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        }
    }
    VL_NULL_CHECK(param_t, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 287)->__VnoInFunc_get_transaction_id(vlSymsp, __VlefCall_2__get_transaction_id);
    if ((0xffffffffU == __VlefCall_2__get_transaction_id)) {
        __Vincrement1 = VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 288)
            ->__PVT__m_next_transaction_id;
        VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 288)->__PVT__m_next_transaction_id 
            = ((IData)(1U) + VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 288)
               ->__PVT__m_next_transaction_id);
        VL_NULL_CHECK(param_t, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 288)->__VnoInFunc_set_transaction_id(vlSymsp, __Vincrement1);
    }
    this->__VnoInFunc_m_last_req_push_front(vlSymsp, param_t);
    VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 295)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_sequencer_id, 1U, __VlefCall_4__m_get_sqr_sequence_id);
    VL_NULL_CHECK(param_t, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 295)->__VnoInFunc_set_sequence_id(vlSymsp, __VlefCall_4__m_get_sqr_sequence_id);
    VL_NULL_CHECK(t, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 296)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_>{this});
    VL_NULL_CHECK(this->__PVT__m_req_fifo, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 297)->__VnoInFunc_try_put(vlProcess, vlSymsp, param_t, __VlefCall_5__try_put);
    if ((1U & (~ (IData)(__VlefCall_5__try_put)))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(__VlefCall_6__get_full_name), "Concurrent calls to get_next_item() not supported. Consider using a semaphore to ensure that concurrent processes take turns in the driver"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__PVT__m_num_reqs_sent = ((IData)(1U) + this->__PVT__m_num_reqs_sent);
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_put_response(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__get_sequence_id;
    CData/*0:0*/ __VlefCall_2__get_use_response_handler;
    IData/*31:0*/ __VlefCall_1__get_sequence_id;
    IData/*31:0*/ __VlefCall_0__get_sequence_id;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr;
    {
        if ((VlNull{} == t)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRPUT"s, "Driver put a null response"s, 0U, ""s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_m_last_rsp_push_front(vlSymsp, t);
        this->__PVT__m_num_rsps_received = ((IData)(1U) 
                                            + this->__PVT__m_num_rsps_received);
        VL_NULL_CHECK(t, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 321)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_0__get_sequence_id);
        if ((0xffffffffU == __VlefCall_0__get_sequence_id)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRPUT"s, "Driver put a response with null sequence_id"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(t, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 328)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_1__get_sequence_id);
        this->__VnoInFunc_m_find_sequence(vlSymsp, __VlefCall_1__get_sequence_id, sequence_ptr);
        if ((VlNull{} != sequence_ptr)) {
            VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 332)->__VnoInFunc_get_use_response_handler(vlSymsp, __VlefCall_2__get_use_response_handler);
            if (__VlefCall_2__get_use_response_handler) {
                VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 333)->__VnoInFunc_response_handler(vlSymsp, t);
                goto __Vlabel0;
            }
            VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 337)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
        } else {
            VL_NULL_CHECK(t, "../../uvm/distrib/src/seq/uvm_sequencer_param_base.svh", 342)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_3__get_sequence_id);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "Sequencer"s, VL_SFORMATF_N_NX("Dropping response for sequence %0d, sequence not found.  Probable cause: sequence exited or has been killed",1
                                                                                , '~',32,__VlefCall_3__get_sequence_id) , 0x000000c8U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_analysis_write(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_analysis_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> response;
    response = t;
    this->__VnoInFunc_put_response(vlProcess, vlSymsp, response);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_reqs_sent(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_reqs_sent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_reqs_sent\n"); );
    // Body
    get_num_reqs_sent__Vfuncrtn = this->__PVT__m_num_reqs_sent;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_rsps_received(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_rsps_received__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_rsps_received\n"); );
    // Body
    get_num_rsps_received__Vfuncrtn = this->__PVT__m_num_rsps_received;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_set_num_last_reqs(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_set_num_last_reqs\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((0x00000400U < max)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, "Invalid last size; 1024 is the maximum and will be used"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        max = 0x00000400U;
    }
    while (((0U != this->__PVT__m_last_req_buffer.size()) 
            & (this->__PVT__m_last_req_buffer.size() 
               > max))) {
        std::ignore = this->__PVT__m_last_req_buffer.pop_back();
    }
    this->__PVT__m_num_last_reqs = max;
    this->__PVT__num_last_items = max;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_last_reqs(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_reqs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_last_reqs\n"); );
    // Body
    get_num_last_reqs__Vfuncrtn = this->__PVT__m_num_last_reqs;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_m_last_req_push_front(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_m_last_req_push_front\n"); );
    // Body
    {
        if ((1U & (~ (0U != this->__PVT__m_num_last_reqs)))) {
            goto __Vlabel0;
        }
        if ((this->__PVT__m_last_req_buffer.size() 
             == this->__PVT__m_num_last_reqs)) {
            std::ignore = this->__PVT__m_last_req_buffer.pop_back();
        }
        this->__PVT__m_last_req_buffer.push_front(item);
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_set_num_last_rsps(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_set_num_last_rsps\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((0x00000400U < max)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, "Invalid last size; 1024 is the maximum and will be used"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        max = 0x00000400U;
    }
    while (((0U != this->__PVT__m_last_rsp_buffer.size()) 
            & (this->__PVT__m_last_rsp_buffer.size() 
               > max))) {
        std::ignore = this->__PVT__m_last_rsp_buffer.pop_back();
    }
    this->__PVT__m_num_last_rsps = max;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_last_rsps(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_rsps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_last_rsps\n"); );
    // Body
    get_num_last_rsps__Vfuncrtn = this->__PVT__m_num_last_rsps;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_m_last_rsp_push_front(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_m_last_rsp_push_front\n"); );
    // Body
    {
        if ((1U & (~ (0U != this->__PVT__m_num_last_rsps)))) {
            goto __Vlabel0;
        }
        if ((this->__PVT__m_last_rsp_buffer.size() 
             == this->__PVT__m_num_last_rsps)) {
            std::ignore = this->__PVT__m_last_rsp_buffer.pop_back();
        }
        this->__PVT__m_last_rsp_buffer.push_front(item);
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_base::__PVT__seq_kind 
        = VL_RANDOM_RNG_I(__Vm_rng);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::_ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_num_reqs_sent = 0;
    __PVT__m_num_rsps_received = 0;
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequencer_param_base_::~\n"); );
}
