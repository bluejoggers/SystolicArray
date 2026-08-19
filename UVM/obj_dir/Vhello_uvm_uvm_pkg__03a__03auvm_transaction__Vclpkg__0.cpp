// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> initiator) {
    Vhello_uvm_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__events = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_object_string_pool__Tz3, vlProcess, vlSymsp, ""s);
    this->__PVT__m_transaction_id = 0xffffffffU;
    this->__PVT__begin_time = 0xffffffffffffffffULL;
    this->__PVT__end_time = 0xffffffffffffffffULL;
    this->__PVT__accept_time = 0xffffffffffffffffULL;
    /*super.new*/;
    this->__PVT__initiator = initiator;
    this->__PVT__m_transaction_id = 0xffffffffU;
    VL_NULL_CHECK(this->__PVT__events, "../../uvm/distrib/src/base/uvm_transaction.svh", 487)->__VnoInFunc_get(vlProcess, vlSymsp, "begin"s, this->__PVT__begin_event);
    VL_NULL_CHECK(this->__PVT__events, "../../uvm/distrib/src/base/uvm_transaction.svh", 488)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, this->__PVT__end_event);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_transaction_id(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_transaction_id\n"); );
    // Body
    this->__PVT__m_transaction_id = id;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_transaction_id(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_transaction_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_transaction_id\n"); );
    // Body
    get_transaction_id__Vfuncrtn = this->__PVT__m_transaction_id;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_initiator(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> initiator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_initiator\n"); );
    // Body
    this->__PVT__initiator = initiator;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_initiator(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> &get_initiator__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_initiator\n"); );
    // Body
    get_initiator__Vfuncrtn = this->__PVT__initiator;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_event_pool(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_string_pool__Tz3> &get_event_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_event_pool\n"); );
    // Body
    get_event_pool__Vfuncrtn = this->__PVT__events;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_active(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_active__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_active\n"); );
    // Body
    is_active__Vfuncrtn = (0xffffffffffffffffULL == this->__PVT__end_time);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_begin_time(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &get_begin_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_begin_time\n"); );
    // Body
    get_begin_time__Vfuncrtn = this->__PVT__begin_time;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_end_time(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_end_time\n"); );
    // Body
    get_end_time__Vfuncrtn = this->__PVT__end_time;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_accept_time(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &get_accept_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_accept_time\n"); );
    // Body
    get_accept_time__Vfuncrtn = this->__PVT__accept_time;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_accept_tr(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_accept_tr\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_begin_tr(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_begin_tr\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_end_tr(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_end_tr\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_type_name;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    std::string str;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> tmp_initiator;
    str = ""s;
    Vhello_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    if ((0xffffffffffffffffULL != this->__PVT__accept_time)) {
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_transaction.svh", 588)->__VnoInFunc_print_time(vlSymsp, "accept_time"s, this->__PVT__accept_time, 0x2eU);
    }
    if ((0xffffffffffffffffULL != this->__PVT__begin_time)) {
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_transaction.svh", 590)->__VnoInFunc_print_time(vlSymsp, "begin_time"s, this->__PVT__begin_time, 0x2eU);
    }
    if ((0xffffffffffffffffULL != this->__PVT__end_time)) {
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_transaction.svh", 592)->__VnoInFunc_print_time(vlSymsp, "end_time"s, this->__PVT__end_time, 0x2eU);
    }
    if ((VlNull{} != this->__PVT__initiator)) {
        tmp_initiator = this->__PVT__initiator;
        VL_NULL_CHECK(tmp_initiator, "../../uvm/distrib/src/base/uvm_transaction.svh", 595)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
        VL_SFORMAT_NX(str,"@%0d",1, '~',32,__VlefCall_0__get_inst_id);
        VL_NULL_CHECK(this->__PVT__initiator, "../../uvm/distrib/src/base/uvm_transaction.svh", 596)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_transaction.svh", 596)->__VnoInFunc_print_generic(vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xffffffffU, str, 0x2eU);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_transaction> txn;
    {
        Vhello_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if ((VlNull{} == rhs)) {
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, txn);
        if ((! __VlefExpr_0)) {
            goto __Vlabel0;
        }
        this->__PVT__accept_time = VL_NULL_CHECK(txn, "../../uvm/distrib/src/base/uvm_transaction.svh", 606)
            ->__PVT__accept_time;
        this->__PVT__begin_time = VL_NULL_CHECK(txn, "../../uvm/distrib/src/base/uvm_transaction.svh", 607)
            ->__PVT__begin_time;
        this->__PVT__end_time = VL_NULL_CHECK(txn, "../../uvm/distrib/src/base/uvm_transaction.svh", 608)
            ->__PVT__end_time;
        this->__PVT__initiator = VL_NULL_CHECK(txn, "../../uvm/distrib/src/base/uvm_transaction.svh", 609)
            ->__PVT__initiator;
        this->__PVT__stream_handle = VL_NULL_CHECK(txn, "../../uvm/distrib/src/base/uvm_transaction.svh", 610)
            ->__PVT__stream_handle;
        this->__PVT__tr_recorder = VL_NULL_CHECK(txn, "../../uvm/distrib/src/base/uvm_transaction.svh", 611)
            ->__PVT__tr_recorder;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk83__DOT__p;
    Vhello_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    if ((0xffffffffffffffffULL != this->__PVT__accept_time)) {
        __Vtemp_1[0U] = (IData)(this->__PVT__accept_time);
        __Vtemp_1[1U] = (IData)((this->__PVT__accept_time 
                                 >> 0x00000020U));
        __Vilp1 = 2U;
        while ((__Vilp1 <= 0x0000007fU)) {
            __Vtemp_1[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_transaction.svh", 621)->__VnoInFunc_record_field(vlProcess, vlSymsp, "accept_time"s, __Vtemp_1, 0x00000040U, 0x09000000U);
    }
    if ((VlNull{} != this->__PVT__initiator)) {
        unnamedblk83__DOT__p = VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_transaction.svh", 623)
            ->__PVT__policy;
        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_transaction.svh", 624)->__PVT__policy = 0x00001000U;
        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_transaction.svh", 625)->__VnoInFunc_record_object(vlProcess, vlSymsp, "initiator"s, this->__PVT__initiator);
        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_transaction.svh", 626)->__PVT__policy 
            = unnamedblk83__DOT__p;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_tr_handle(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_tr_handle\n"); );
    // Body
    get_tr_handle__Vfuncrtn = 0;
    if ((VlNull{} != this->__PVT__tr_recorder)) {
        VL_NULL_CHECK(this->__PVT__tr_recorder, "../../uvm/distrib/src/base/uvm_transaction.svh", 635)->__VnoInFunc_get_handle(vlSymsp, get_tr_handle__Vfuncrtn);
    } else {
        get_tr_handle__Vfuncrtn = 0U;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_disable_recording(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_disable_recording\n"); );
    // Body
    this->__PVT__stream_handle = VlNull{};
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_enable_recording(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_tr_stream> stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_enable_recording\n"); );
    // Body
    this->__PVT__stream_handle = stream;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_recording_enabled(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_recording_enabled\n"); );
    // Body
    is_recording_enabled__Vfuncrtn = (VlNull{} != this->__PVT__stream_handle);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_accept_tr(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ accept_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_accept_tr\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_> e;
    if ((0ULL != accept_time)) {
        this->__PVT__accept_time = accept_time;
    } else {
        this->__PVT__accept_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
    }
    this->__VnoInFunc_do_accept_tr(vlSymsp);
    VL_NULL_CHECK(this->__PVT__events, "../../uvm/distrib/src/base/uvm_transaction.svh", 676)->__VnoInFunc_get(vlProcess, vlSymsp, "accept"s, e);
    if ((VlNull{} != e)) {
        VL_NULL_CHECK(e, "../../uvm/distrib/src/base/uvm_transaction.svh", 679)->__VnoInFunc_trigger(vlSymsp, VlNull{});
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_tr(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    begin_tr__Vfuncrtn = 0;
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, begin_time, 0U, begin_tr__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_child_tr(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_child_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_child_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    begin_child_tr__Vfuncrtn = 0;
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, begin_time, parent_handle, begin_child_tr__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &m_begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_m_begin_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_parent_child_link> __VlefCall_3__get_link;
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_type_name;
    CData/*0:0*/ __VlefCall_0__is_recording_enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_tr_database> unnamedblk84__DOT__db;
    m_begin_tr__Vfuncrtn = 0;
    QData/*63:0*/ tmp_time;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_recorder> parent_recorder;
    tmp_time = VL_RTOIROUND_Q_D(((0ULL == begin_time)
                                  ? VL_TIME_UNITED_D(1)
                                  : VL_ITOR_D_Q(64, begin_time)));
    if ((0U != parent_handle)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, parent_handle, parent_recorder);
    }
    if ((VlNull{} != this->__PVT__tr_recorder)) {
        this->__VnoInFunc_end_tr(vlProcess, vlSymsp, tmp_time, 1U);
    }
    this->__VnoInFunc_is_recording_enabled(vlSymsp, __VlefCall_0__is_recording_enabled);
    if (__VlefCall_0__is_recording_enabled) {
        VL_NULL_CHECK(this->__PVT__stream_handle, "../../uvm/distrib/src/base/uvm_transaction.svh", 717)->__VnoInFunc_get_db(vlProcess, vlSymsp, unnamedblk84__DOT__db);
        this->__PVT__end_time = 0xffffffffffffffffULL;
        this->__PVT__begin_time = tmp_time;
        if ((VlNull{} == parent_recorder)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
            VL_NULL_CHECK(this->__PVT__stream_handle, "../../uvm/distrib/src/base/uvm_transaction.svh", 723)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), this->__PVT__begin_time, "Begin_No_Parent, Link"s, this->__PVT__tr_recorder);
        } else {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            VL_NULL_CHECK(this->__PVT__stream_handle, "../../uvm/distrib/src/base/uvm_transaction.svh", 727)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), this->__PVT__begin_time, "Begin_End, Link"s, this->__PVT__tr_recorder);
            if ((VlNull{} != this->__PVT__tr_recorder)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_parent_child_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, parent_recorder, this->__PVT__tr_recorder, "pc_link"s, __VlefCall_3__get_link);
                VL_NULL_CHECK(unnamedblk84__DOT__db, "../../uvm/distrib/src/base/uvm_transaction.svh", 732)->__VnoInFunc_establish_link(vlProcess, vlSymsp, __VlefCall_3__get_link);
            }
        }
        if ((VlNull{} != this->__PVT__tr_recorder)) {
            VL_NULL_CHECK(this->__PVT__tr_recorder, "../../uvm/distrib/src/base/uvm_transaction.svh", 736)->__VnoInFunc_get_handle(vlSymsp, m_begin_tr__Vfuncrtn);
        } else {
            m_begin_tr__Vfuncrtn = 0U;
        }
    } else {
        this->__PVT__tr_recorder = VlNull{};
        this->__PVT__end_time = 0xffffffffffffffffULL;
        this->__PVT__begin_time = tmp_time;
        m_begin_tr__Vfuncrtn = 0U;
    }
    this->__VnoInFunc_do_begin_tr(vlSymsp);
    VL_NULL_CHECK(this->__PVT__begin_event, "../../uvm/distrib/src/base/uvm_transaction.svh", 750)->__VnoInFunc_trigger(vlSymsp, VlNull{});
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_end_tr(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ end_time, CData/*0:0*/ free_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_end_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_recording_enabled;
    this->__PVT__end_time = VL_RTOIROUND_Q_D(((0ULL 
                                               == end_time)
                                               ? VL_TIME_UNITED_D(1)
                                               : VL_ITOR_D_Q(64, end_time)));
    this->__VnoInFunc_do_end_tr(vlSymsp);
    this->__VnoInFunc_is_recording_enabled(vlSymsp, __VlefCall_0__is_recording_enabled);
    if (((IData)(__VlefCall_0__is_recording_enabled) 
         & (VlNull{} != this->__PVT__tr_recorder))) {
        this->__VnoInFunc_record(vlProcess, vlSymsp, this->__PVT__tr_recorder);
        VL_NULL_CHECK(this->__PVT__tr_recorder, "../../uvm/distrib/src/base/uvm_transaction.svh", 766)->__VnoInFunc_close(vlSymsp, this->__PVT__end_time);
        if (free_handle) {
            VL_NULL_CHECK(this->__PVT__tr_recorder, "../../uvm/distrib/src/base/uvm_transaction.svh", 771)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
        }
    }
    this->__PVT__tr_recorder = VlNull{};
    VL_NULL_CHECK(this->__PVT__end_event, "../../uvm/distrib/src/base/uvm_transaction.svh", 777)->__VnoInFunc_trigger(vlSymsp, VlNull{});
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_transaction::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vhello_uvm_uvm_pkg__03a__03auvm_transaction::~Vhello_uvm_uvm_pkg__03a__03auvm_transaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_transaction::~\n"); );
}
