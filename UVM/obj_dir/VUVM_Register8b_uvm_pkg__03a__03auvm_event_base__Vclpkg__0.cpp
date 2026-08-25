// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__trigger_time = 0ULL;
    /*super.new*/;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_on(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ delta) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_on\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0;
    __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    {
        if (this->__PVT__on) {
            if (delta) {
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "../../uvm/distrib/src/base/uvm_event.svh", 
                                                        69);
            }
            goto __Vlabel0;
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        CData/*0:0*/ __VdynTrigger_h73e282ae__0;
        __VdynTrigger_h73e282ae__0 = 0;
        __VdynTrigger_h73e282ae__0 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0 
            = this->__PVT__on;
        while ((1U & (~ (IData)(__VdynTrigger_h73e282ae__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@( uvm_pkg::uvm_event_base.on)", 
                                                         "../../uvm/distrib/src/base/uvm_event.svh", 
                                                         73);
            __VdynTrigger_h73e282ae__0 = ((IData)(this->__PVT__on) 
                                          != (IData)(__Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h73e282ae__0);
            __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0 
                = this->__PVT__on;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@( uvm_pkg::uvm_event_base.on)", 
                                                     "../../uvm/distrib/src/base/uvm_event.svh", 
                                                     73);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_off(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ delta) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_off\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__1;
    __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__1 = 0;
    // Body
    VL_KEEP_THIS;
    {
        if ((1U & (~ (IData)(this->__PVT__on)))) {
            if (delta) {
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        nullptr, 
                                                        "../../uvm/distrib/src/base/uvm_event.svh", 
                                                        90);
            }
            goto __Vlabel0;
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        CData/*0:0*/ __VdynTrigger_h73e282ae__1;
        __VdynTrigger_h73e282ae__1 = 0;
        __VdynTrigger_h73e282ae__1 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__1 
            = this->__PVT__on;
        while ((1U & (~ (IData)(__VdynTrigger_h73e282ae__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@( uvm_pkg::uvm_event_base.on)", 
                                                         "../../uvm/distrib/src/base/uvm_event.svh", 
                                                         94);
            __VdynTrigger_h73e282ae__1 = ((IData)(this->__PVT__on) 
                                          != (IData)(__Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__1));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h73e282ae__1);
            __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__1 
                = this->__PVT__on;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@( uvm_pkg::uvm_event_base.on)", 
                                                     "../../uvm/distrib/src/base/uvm_event.svh", 
                                                     94);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_trigger(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_trigger\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
    CData/*0:0*/ __VdynTrigger_h56f533cf__0;
    __VdynTrigger_h56f533cf__0 = 0;
    __VdynTrigger_h56f533cf__0 = 0U;
    this->__PVT__m_event.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h56f533cf__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                     "../../uvm/distrib/src/base/uvm_event.svh", 
                                                     110);
        __VdynTrigger_h56f533cf__0 = this->__PVT__m_event.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h56f533cf__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                     "../../uvm/distrib/src/base/uvm_event.svh", 
                                                     110);
        this->__PVT__m_event.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                 "../../uvm/distrib/src/base/uvm_event.svh", 
                                                 110);
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_ptrigger(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_ptrigger\n"); );
    // Body
    VL_KEEP_THIS;
    {
        if (this->__PVT__m_event.isTriggered()) {
            goto __Vlabel0;
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        CData/*0:0*/ __VdynTrigger_h56f533cf__1;
        __VdynTrigger_h56f533cf__1 = 0;
        __VdynTrigger_h56f533cf__1 = 0U;
        this->__PVT__m_event.clearFired();
        while ((1U & (~ (IData)(__VdynTrigger_h56f533cf__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                         "../../uvm/distrib/src/base/uvm_event.svh", 
                                                         125);
            __VdynTrigger_h56f533cf__1 = this->__PVT__m_event.isFired();
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h56f533cf__1);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         nullptr, 
                                                         "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                         "../../uvm/distrib/src/base/uvm_event.svh", 
                                                         125);
            this->__PVT__m_event.clearFired();
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                     "../../uvm/distrib/src/base/uvm_event.svh", 
                                                     125);
        __Vlabel0: ;
    }
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_trigger_time(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ &get_trigger_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_trigger_time\n"); );
    // Body
    get_trigger_time__Vfuncrtn = this->__PVT__trigger_time;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_is_on(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_on__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_is_on\n"); );
    // Body
    is_on__Vfuncrtn = this->__PVT__on;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_is_off(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_off__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_is_off\n"); );
    // Body
    is_off__Vfuncrtn = (1U & (~ (IData)(this->__PVT__on)));
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_reset(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_reset\n"); );
    // Body
    VlAssignableEvent e;
    if (wakeup) {
        vlSymsp->fireEvent(this->__PVT__m_event);
    }
    this->__PVT__m_event = e;
    this->__PVT__num_waiters = 0U;
    this->__PVT__on = 0U;
    this->__PVT__trigger_time = 0ULL;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_cancel(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_cancel\n"); );
    // Body
    if (VL_LTS_III(32, 0U, this->__PVT__num_waiters)) {
        this->__PVT__num_waiters = (this->__PVT__num_waiters 
                                    - (IData)(1U));
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_num_waiters(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_num_waiters\n"); );
    // Body
    get_num_waiters__Vfuncrtn = this->__PVT__num_waiters;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_event_base"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk1__DOT__e;
    unnamedblk1__DOT__e = 0;
    IData/*31:0*/ unnamedblk1__DOT__e__Vloopsize;
    unnamedblk1__DOT__e__Vloopsize = 0;
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_event.svh", 216)->__VnoInFunc_print_field_int(vlSymsp, "num_waiters"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__num_waiters), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_event.svh", 217)->__VnoInFunc_print_field_int(vlSymsp, "on"s, (QData)((IData)(this->__PVT__on)), 1U, 0x01000000U, 0x2eU, "bit"s);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_event.svh", 218)->__VnoInFunc_print_time(vlSymsp, "trigger_time"s, this->__PVT__trigger_time, 0x2eU);
    VL_NULL_CHECK(VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_event.svh", 219)
                  ->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_event.svh", 219)->__VnoInFunc_down(vlSymsp, "callbacks"s);
    unnamedblk1__DOT__e = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__e, this->__PVT__callbacks.size())) {
        unnamedblk1__DOT__e__Vloopsize = this->__PVT__callbacks.size();
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_event.svh", 221)->__VnoInFunc_print_object(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk1__DOT__e) , this->__PVT__callbacks.at(unnamedblk1__DOT__e), 0x5bU);
        if ((unnamedblk1__DOT__e__Vloopsize <= this->__PVT__callbacks.size())) {
            unnamedblk1__DOT__e = ((IData)(1U) + unnamedblk1__DOT__e);
        }
    }
    VL_NULL_CHECK(VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_event.svh", 223)
                  ->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_event.svh", 223)->__VnoInFunc_up(vlSymsp, 0x2eU);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_event_base> e;
    {
        VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, e);
        if (((! __VlefExpr_0) || (VlNull{} == e))) {
            goto __Vlabel0;
        }
        this->__PVT__m_event = VL_NULL_CHECK(e, "../../uvm/distrib/src/base/uvm_event.svh", 232)
            ->__PVT__m_event;
        this->__PVT__num_waiters = VL_NULL_CHECK(e, "../../uvm/distrib/src/base/uvm_event.svh", 233)
            ->__PVT__num_waiters;
        this->__PVT__on = VL_NULL_CHECK(e, "../../uvm/distrib/src/base/uvm_event.svh", 234)
            ->__PVT__on;
        this->__PVT__trigger_time = VL_NULL_CHECK(e, "../../uvm/distrib/src/base/uvm_event.svh", 235)
            ->__PVT__trigger_time;
        this->__PVT__callbacks.clear();
        this->__PVT__callbacks = VL_NULL_CHECK(e, "../../uvm/distrib/src/base/uvm_event.svh", 237)
            ->__PVT__callbacks;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__num_waiters = 0;
    __PVT__on = 0;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::~VUVM_Register8b_uvm_pkg__03a__03auvm_event_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_event_base::~\n"); );
}
