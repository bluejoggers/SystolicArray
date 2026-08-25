// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ threshold) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_event = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_event_, vlProcess, vlSymsp, 
                                  VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN("barrier_"s, name)));
    this->__PVT__threshold = threshold;
    this->__PVT__num_waiters = 0U;
    this->__PVT__auto_reset = 1U;
    this->__PVT__at_threshold = 0U;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_wait_for(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_wait_for\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    {
        if (this->__PVT__at_threshold) {
            goto __Vlabel0;
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        if (VL_GTES_III(32, this->__PVT__num_waiters, this->__PVT__threshold)) {
            if ((1U & (~ (IData)(this->__PVT__auto_reset)))) {
                this->__PVT__at_threshold = 1U;
            }
            co_await this->__VnoInFunc_m_trigger(vlSymsp);
            goto __Vlabel0;
        }
        co_await VL_NULL_CHECK(this->__PVT__m_event, "../../uvm/distrib/src/base/uvm_barrier.svh", 77)->__VnoInFunc_wait_trigger(vlProcess, vlSymsp);
        __Vlabel0: ;
    }
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_reset(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_reset\n"); );
    // Body
    this->__PVT__at_threshold = 0U;
    if ((0U != this->__PVT__num_waiters)) {
        if (wakeup) {
            VL_NULL_CHECK(this->__PVT__m_event, "../../uvm/distrib/src/base/uvm_barrier.svh", 96)->__VnoInFunc_trigger(vlSymsp, VlNull{});
        } else {
            VL_NULL_CHECK(this->__PVT__m_event, "../../uvm/distrib/src/base/uvm_barrier.svh", 98)->__VnoInFunc_reset(vlSymsp, 0U);
        }
    }
    this->__PVT__num_waiters = 0U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_auto_reset(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_auto_reset\n"); );
    // Body
    this->__PVT__at_threshold = 0U;
    this->__PVT__auto_reset = value;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_threshold(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ threshold) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_threshold\n"); );
    // Body
    this->__PVT__threshold = threshold;
    if (VL_LTES_III(32, threshold, this->__PVT__num_waiters)) {
        this->__VnoInFunc_reset(vlSymsp, 1U);
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_threshold(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_threshold__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_threshold\n"); );
    // Body
    get_threshold__Vfuncrtn = this->__PVT__threshold;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_num_waiters(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_num_waiters\n"); );
    // Body
    get_num_waiters__Vfuncrtn = this->__PVT__num_waiters;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_cancel(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_cancel\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_event, "../../uvm/distrib/src/base/uvm_barrier.svh", 165)->__VnoInFunc_cancel(vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_event, "../../uvm/distrib/src/base/uvm_barrier.svh", 166)->__VnoInFunc_get_num_waiters(vlSymsp, this->__PVT__num_waiters);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_barrier> v;
    v = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_barrier, vlProcess, vlSymsp, name, 0U);
    create__Vfuncrtn = v;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_barrier"s;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_m_trigger(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_m_trigger\n"); );
    // Body
    VL_KEEP_THIS;
    VL_NULL_CHECK(this->__PVT__m_event, "../../uvm/distrib/src/base/uvm_barrier.svh", 183)->__VnoInFunc_trigger(vlSymsp, VlNull{});
    this->__PVT__num_waiters = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, nullptr, 
                                            "../../uvm/distrib/src/base/uvm_barrier.svh", 
                                            185);
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_barrier.svh", 189)->__VnoInFunc_print_field_int(vlSymsp, "threshold"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__threshold), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_barrier.svh", 190)->__VnoInFunc_print_field_int(vlSymsp, "num_waiters"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__num_waiters), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_barrier.svh", 191)->__VnoInFunc_print_field_int(vlSymsp, "at_threshold"s, (QData)((IData)(this->__PVT__at_threshold)), 1U, 0x01000000U, 0x2eU, "bit"s);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_barrier.svh", 192)->__VnoInFunc_print_field_int(vlSymsp, "auto_reset"s, (QData)((IData)(this->__PVT__auto_reset)), 1U, 0x01000000U, 0x2eU, "bit"s);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_barrier> b;
    {
        VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, b);
        if (((! __VlefExpr_0) || (VlNull{} == b))) {
            goto __Vlabel0;
        }
        this->__PVT__threshold = VL_NULL_CHECK(b, "../../uvm/distrib/src/base/uvm_barrier.svh", 200)
            ->__PVT__threshold;
        this->__PVT__num_waiters = VL_NULL_CHECK(b, "../../uvm/distrib/src/base/uvm_barrier.svh", 201)
            ->__PVT__num_waiters;
        this->__PVT__at_threshold = VL_NULL_CHECK(b, "../../uvm/distrib/src/base/uvm_barrier.svh", 202)
            ->__PVT__at_threshold;
        this->__PVT__auto_reset = VL_NULL_CHECK(b, "../../uvm/distrib/src/base/uvm_barrier.svh", 203)
            ->__PVT__auto_reset;
        this->__PVT__m_event = VL_NULL_CHECK(b, "../../uvm/distrib/src/base/uvm_barrier.svh", 204)
            ->__PVT__m_event;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__threshold = 0;
    __PVT__num_waiters = 0;
    __PVT__at_threshold = 0;
    __PVT__auto_reset = 0;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::~VUVM_Register8b_uvm_pkg__03a__03auvm_barrier() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_barrier::~\n"); );
}
