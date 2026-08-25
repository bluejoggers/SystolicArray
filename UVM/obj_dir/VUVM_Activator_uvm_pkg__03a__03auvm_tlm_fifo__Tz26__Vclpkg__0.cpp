// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ size) {
    VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m = VL_NEW(VUVM_Activator_std__03a__03amailbox__Tz26, vlSymsp, size);
    this->__PVT__m_size = size;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_tlm_fifo #(T)"s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_size(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__m_size;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_used(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_used\n"); );
    // Body
    used__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 89)->__VnoInFunc_num(vlSymsp, used__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_is_empty(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_is_empty\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    is_empty__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 98)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    is_empty__Vfuncrtn = (0U == __VlefCall_0__num);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_is_full(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_is_full\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__num;
    is_full__Vfuncrtn = 0U;
    __VlefLogAnd_1 = (0U != this->__PVT__m_size);
    if (__VlefLogAnd_1) {
        VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 108)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        __VlefLogAnd_1 = (__VlefCall_0__num == this->__PVT__m_size);
    }
    is_full__Vfuncrtn = __VlefLogAnd_1;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_put(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 114)->__VnoInFunc_put(vlSymsp, t);
    VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26::__PVT__put_ap, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 115)->__VnoInFunc_write(vlProcess, vlSymsp, t);
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_get(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__PVT__m_pending_blocked_gets = ((IData)(1U) 
                                           + this->__PVT__m_pending_blocked_gets);
    co_await VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 120)->__VnoInFunc_get(vlSymsp, t);
    this->__PVT__m_pending_blocked_gets = (this->__PVT__m_pending_blocked_gets 
                                           - (IData)(1U));
    VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26::__PVT__get_ap, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 122)->__VnoInFunc_write(vlProcess, vlSymsp, t);
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_peek(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_peek\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 126)->__VnoInFunc_peek(vlSymsp, t);
    co_return;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_get(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_get\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__10__Vfuncout;
    __Vtask_try_get__10__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__try_get;
    {
        try_get__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 130)->__VnoInFunc_try_get(vlSymsp, t, __Vtask_try_get__10__Vfuncout);
        __VlefCall_0__try_get = __Vtask_try_get__10__Vfuncout;
        if ((1U & (~ (0U != __VlefCall_0__try_get)))) {
            try_get__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26::__PVT__get_ap, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 134)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        try_get__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_peek(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_peek\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_peek__12__Vfuncout;
    __Vtask_try_peek__12__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefCall_0__try_peek;
    {
        try_peek__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 139)->__VnoInFunc_try_peek(vlSymsp, t, __Vtask_try_peek__12__Vfuncout);
        __VlefCall_0__try_peek = __Vtask_try_peek__12__Vfuncout;
        if ((1U & (~ (0U != __VlefCall_0__try_peek)))) {
            try_peek__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        try_peek__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_put(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_put\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__try_put;
    {
        try_put__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 146)->__VnoInFunc_try_put(vlSymsp, t, __VlefCall_0__try_put);
        if ((1U & (~ (0U != __VlefCall_0__try_put)))) {
            try_put__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26::__PVT__put_ap, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 150)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        try_put__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_put(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_put\n"); );
    // Body
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__num;
    can_put__Vfuncrtn = 0U;
    __VlefLogOr_1 = (0U == this->__PVT__m_size);
    if ((1U & (~ (IData)(__VlefLogOr_1)))) {
        VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 155)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        __VlefLogOr_1 = VL_LTS_III(32, __VlefCall_0__num, this->__PVT__m_size);
    }
    can_put__Vfuncrtn = __VlefLogOr_1;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_get(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_get\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    can_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 159)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    can_get__Vfuncrtn = (VL_LTS_III(32, 0U, __VlefCall_0__num) 
                         & (0U == this->__PVT__m_pending_blocked_gets));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_peek(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_peek\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    can_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 163)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    can_peek__Vfuncrtn = VL_LTS_III(32, 0U, __VlefCall_0__num);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_flush(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_flush\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> __Vfunc_try_get__18__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__num;
    CData/*0:0*/ r;
    r = 1U;
    while (r) {
        this->__VnoInFunc_try_get(vlSymsp, __Vfunc_try_get__18__t, r);
    }
    VL_NULL_CHECK(this->__PVT__m, "../../uvm/distrib/src/tlm1/uvm_tlm_fifos.svh", 179)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    if ((VL_LTS_III(32, 0U, __VlefCall_0__num) & (0U 
                                                  != this->__PVT__m_pending_blocked_gets))) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "flush failed"s, "there are blocked gets preventing the flush"s, 0U, ""s, 0U, ""s, 0U);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_size = 0;
    __PVT__m_pending_blocked_gets = 0;
}

VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::~VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::~\n"); );
}
