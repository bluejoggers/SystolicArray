// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> cntxt, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection> objection) {
    VUVM_regblock_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::new\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> cs;
    /*super.new*/;
    this->__PVT__m_objection = objection;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    if ((VlNull{} != cntxt)) {
        this->__PVT__m_cntxt = cntxt;
    } else {
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 88)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
        this->__PVT__m_cntxt = __Vtask_get_root__2__Vfuncout;
    }
    this->__PVT__m_cb = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat_callback, vlProcess, vlSymsp, 
                               VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(name, "_cb"s)), this->__PVT__m_cntxt);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_mode(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ mode, IData/*31:0*/ &set_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_mode\n"); );
    // Body
    set_mode__Vfuncrtn = this->__PVT__m_mode;
    if ((((2U == mode) | (1U == mode)) | (0U == mode))) {
        this->__PVT__m_mode = mode;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_heartbeat(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_event_> e, VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>> &comps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_heartbeat\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> c;
    {
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, comps.size())) {
            c = comps.at(unnamedblk1__DOT__i);
            if ((! VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 124)
                 ->__PVT__cnt.exists(c))) {
                VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 125)->__PVT__cnt.at(c) = 0U;
            }
            if ((! VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 126)
                 ->__PVT__last_trigger.exists(c))) {
                VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 127)->__PVT__last_trigger.at(c) = 0ULL;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        if (((VlNull{} == e) & (VlNull{} == this->__PVT__m_event))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_start(vlSymsp, e);
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_add(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_add\n"); );
    // Body
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> c;
    {
        c = comp;
        if (VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 143)
            ->__PVT__cnt.exists(c)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 144)->__PVT__cnt.at(c) = 0U;
        VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 145)->__PVT__last_trigger.at(c) = 0ULL;
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_remove(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_remove\n"); );
    // Body
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> c;
    c = comp;
    if (VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 156)
        ->__PVT__cnt.exists(c)) {
        VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 156)->__PVT__cnt.erase(c);
    }
    if (VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 157)
        ->__PVT__last_trigger.exists(c)) {
        VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 157)->__PVT__last_trigger.erase(c);
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_start(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_event_> e) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_start\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    {
        if (((VlNull{} == this->__PVT__m_event) & (VlNull{} 
                                                   == e))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            VL_NULL_CHECK(this->__PVT__m_cntxt, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 171)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NOEVNT"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("start() was called for: "s, __VlefCall_0__get_name), " with a null trigger and no currently set trigger"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((((VlNull{} != this->__PVT__m_event) & 
              (e != this->__PVT__m_event)) & (IData)(this->__PVT__m_started))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            VL_NULL_CHECK(e, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 178)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            VL_NULL_CHECK(this->__PVT__m_event, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 179)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
            VL_NULL_CHECK(this->__PVT__m_cntxt, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 177)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILHBVNT"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("start() was called for: "s, __VlefCall_1__get_name), " with trigger "s), __VlefCall_2__get_name), " which is different "s), "from the original trigger "s), __VlefCall_3__get_name)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((VlNull{} != e)) {
            this->__PVT__m_event = e;
        }
        {
            // Inlined CFunc: __VnoInFunc_m_enable_cb
            CData/*0:0*/ __Vinline_0___VnoInFunc_m_enable_cb___Vtask_callback_mode__15__Vfuncout;
            __Vinline_0___VnoInFunc_m_enable_cb___Vtask_callback_mode__15__Vfuncout = 0;
            {
                VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 209)->__VnoInFunc_callback_mode(vlSymsp, 1U, __Vinline_0___VnoInFunc_m_enable_cb___Vtask_callback_mode__15__Vfuncout);
                if ((VlNull{} == this->__PVT__m_objection)) {
                    goto __Vlabel1;
                }
                if ((1U & (~ (IData)(this->__PVT__m_added)))) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz17_TBz89__Vclpkg.__VnoInFunc_add(vlSymsp, this->__PVT__m_objection, this->__PVT__m_cb, 0U);
                }
                this->__PVT__m_added = 1U;
                __Vlabel1: ;
            }
        }
        {
            // Inlined CFunc: __VnoInFunc_m_start_hb_process
            {
                if (this->__PVT__m_started) {
                    goto __Vlabel2;
                }
                this->__PVT__m_started = 1U;
                this->__VnoInFunc_m_start_hb_process____Vfork_1__0(std::make_shared<VlProcess>(), vlSymsp);
                __Vlabel2: ;
            }
        }
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_stop(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_stop\n"); );
    // Body
    this->__PVT__m_started = 0U;
    vlSymsp->fireEvent(this->__PVT__m_stop_event);
    {
        // Inlined CFunc: __VnoInFunc_m_disable_cb
        CData/*0:0*/ __Vinline_0___VnoInFunc_m_disable_cb___Vtask_callback_mode__17__Vfuncout;
        __Vinline_0___VnoInFunc_m_disable_cb___Vtask_callback_mode__17__Vfuncout = 0;
        VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 217)->__VnoInFunc_callback_mode(vlSymsp, 0U, __Vinline_0___VnoInFunc_m_disable_cb___Vtask_callback_mode__17__Vfuncout);
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process\n"); );
    // Body
    {
        if (this->__PVT__m_started) {
            goto __Vlabel0;
        }
        this->__PVT__m_started = 1U;
        this->__VnoInFunc_m_start_hb_process____Vfork_1__0(std::make_shared<VlProcess>(), vlSymsp);
        __Vlabel0: ;
    }
}

VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process____Vfork_1__0(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/base/uvm_heartbeat.svh", 
                                            202);
    co_await this->__VnoInFunc_m_hb_process(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_enable_cb(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_enable_cb\n"); );
    // Locals
    CData/*0:0*/ __Vtask_callback_mode__15__Vfuncout;
    __Vtask_callback_mode__15__Vfuncout = 0;
    // Body
    {
        VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 209)->__VnoInFunc_callback_mode(vlSymsp, 1U, __Vtask_callback_mode__15__Vfuncout);
        if ((VlNull{} == this->__PVT__m_objection)) {
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(this->__PVT__m_added)))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz17_TBz89__Vclpkg.__VnoInFunc_add(vlSymsp, this->__PVT__m_objection, this->__PVT__m_cb, 0U);
        }
        this->__PVT__m_added = 1U;
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_disable_cb(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_disable_cb\n"); );
    // Locals
    CData/*0:0*/ __Vtask_callback_mode__17__Vfuncout;
    __Vtask_callback_mode__17__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 217)->__VnoInFunc_callback_mode(vlSymsp, 0U, __Vtask_callback_mode__17__Vfuncout);
}

VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03a__VDynScope_36> __VDynScope_m_hb_process_1;
    __VDynScope_m_hb_process_1 = VL_NEW(VUVM_regblock_uvm_pkg__03a__03a__VDynScope_36, vlSymsp);
    VL_NULL_CHECK(__VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 222)->__PVT__triggered = 0U;
    VL_NULL_CHECK(__VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 223)->__PVT__last_trigger = 0ULL;
    {
        VlForkSync __Vfork_2__sync;
        __Vfork_2__sync.init(1U, vlProcess);
        this->__VnoInFunc_m_hb_process____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_2__sync, __VDynScope_m_hb_process_1);
        this->__VnoInFunc_m_hb_process____Vfork_2__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_2__sync);
        co_await __Vfork_2__sync.join(vlProcess, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 
                                      224);
    }
    vlProcess->disableFork();
    co_return;
}

VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__1(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__1\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_2__sync.onKill(vlProcess);
    CData/*0:0*/ __VdynTrigger_hed79fee4__0;
    __VdynTrigger_hed79fee4__0 = 0;
    __VdynTrigger_hed79fee4__0 = 0U;
    this->__PVT__m_stop_event.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_hed79fee4__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_heartbeat.m_stop_event)", 
                                                     "../../uvm/distrib/src/base/uvm_heartbeat.svh", 
                                                     285);
        __VdynTrigger_hed79fee4__0 = this->__PVT__m_stop_event.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hed79fee4__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_heartbeat.m_stop_event)", 
                                                     "../../uvm/distrib/src/base/uvm_heartbeat.svh", 
                                                     285);
        this->__PVT__m_stop_event.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_heartbeat.m_stop_event)", 
                                                 "../../uvm/distrib/src/base/uvm_heartbeat.svh", 
                                                 285);
    __Vfork_2__sync.done("../../uvm/distrib/src/base/uvm_heartbeat.svh", 
                         285);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__0(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync, VlClassRef<VUVM_regblock_uvm_pkg__03a__03a__VDynScope_36> __VDynScope_m_hb_process_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__0\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03a__VDynScope_36> __Vtask___VforkTask_0__19____VDynScope_m_hb_process_1;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefLogAnd_12;
    __Vtask___VforkTask_0__19____VlefLogAnd_12 = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__19____VlefCall_11__objects_triggered;
    __Vtask___VforkTask_0__19____VlefCall_11__objects_triggered = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_8;
    __Vtask___VforkTask_0__19____VlefExpr_8 = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__19____VlefCall_7__objects_triggered;
    __Vtask___VforkTask_0__19____VlefCall_7__objects_triggered = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefLogAnd_4;
    __Vtask___VforkTask_0__19____VlefLogAnd_4 = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__19____VlefCall_3__objects_triggered;
    __Vtask___VforkTask_0__19____VlefCall_3__objects_triggered = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_0;
    __Vtask___VforkTask_0__19____VlefExpr_0 = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vnext;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vmore;
    __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vmore = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vnext;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vmore;
    __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vmore = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vnext;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vmore;
    __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vmore = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vnext;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vmore;
    __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vmore = 0;
    IData/*31:0*/ __Vtask_objects_triggered__24__Vfuncout;
    __Vtask_objects_triggered__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_objects_triggered__28__Vfuncout;
    __Vtask_objects_triggered__28__Vfuncout = 0;
    IData/*31:0*/ __Vtask_objects_triggered__32__Vfuncout;
    __Vtask_objects_triggered__32__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_2__sync.onKill(vlProcess);
    __Vtask___VforkTask_0__19____VDynScope_m_hb_process_1 
        = __VDynScope_m_hb_process_1;
    __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vmore = 0U;
    __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vmore = 0U;
    __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vmore = 0U;
    __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vmore = 0U;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__m_event, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 230)->__VnoInFunc_wait_trigger(vlProcess, vlSymsp);
        if (VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 231)
            ->__PVT__triggered) {
            if ((0U == this->__PVT__m_mode)) {
                __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vmore 
                    = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 235)
                       ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vnext));
                while (__Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vmore) {
                    __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx 
                        = __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vnext;
                    __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vmore 
                        = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 235)
                           ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vnext));
                    VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 236)->__PVT__obj 
                        = __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx;
                    __Vtask___VforkTask_0__19____VlefExpr_0 
                        = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 237)
                           ->__PVT__cnt.at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 237)
                                           ->__PVT__obj));
                    if ((1U & (~ (IData)(__Vtask___VforkTask_0__19____VlefExpr_0)))) {
                        VL_NULL_CHECK(this->__PVT__m_objection, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 239)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__21__Vfuncout);
                        this->__Vtask___VforkTask_0__19____VlefCall_1__get_name 
                            = this->__Vtask_get_name__21__Vfuncout;
                        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 239)
                                      ->__PVT__obj, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 239)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__22__Vfuncout);
                        this->__Vtask___VforkTask_0__19____VlefCall_2__get_full_name 
                            = this->__Vtask_get_full_name__22__Vfuncout;
                        VL_NULL_CHECK(this->__PVT__m_cntxt, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 238)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Did not recieve an update of %s for component %s since last event trigger at time %0t : last update time was %0t",5, 'T',-12
                                                                                , 'S',&(this->__Vtask___VforkTask_0__19____VlefCall_1__get_name)
                                                                                , 'S',&(this->__Vtask___VforkTask_0__19____VlefCall_2__get_full_name)
                                                                                , '#',64,VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 240)
                                                                                ->__PVT__last_trigger
                                                                                , '#',64,VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 240)
                                                                                ->__PVT__last_trigger
                                                                                .at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 240)
                                                                                ->__PVT__obj)) , 0U, ""s, 0U, ""s, 0U);
                    }
                }
            } else if ((2U == this->__PVT__m_mode)) {
                __Vtask___VforkTask_0__19____VlefLogAnd_4 
                    = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 246)
                       ->__PVT__cnt.size());
                if (__Vtask___VforkTask_0__19____VlefLogAnd_4) {
                    VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 246)->__VnoInFunc_objects_triggered(vlSymsp, __Vtask_objects_triggered__24__Vfuncout);
                    __Vtask___VforkTask_0__19____VlefCall_3__objects_triggered 
                        = __Vtask_objects_triggered__24__Vfuncout;
                    __Vtask___VforkTask_0__19____VlefLogAnd_4 
                        = (1U & (~ (0U != __Vtask___VforkTask_0__19____VlefCall_3__objects_triggered)));
                }
                if (__Vtask___VforkTask_0__19____VlefLogAnd_4) {
                    this->__Vtask___VforkTask_0__19__unnamedblk3__DOT__s = ""s;
                    __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vmore 
                        = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 248)
                           ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vnext));
                    while (__Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vmore) {
                        __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx 
                            = __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vnext;
                        __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vmore 
                            = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 248)
                               ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vnext));
                        VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 249)->__PVT__obj 
                            = __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx;
                        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 250)
                                      ->__PVT__obj, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 250)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__25__Vfuncout);
                        this->__Vtask___VforkTask_0__19____VlefCall_5__get_full_name 
                            = this->__Vtask_get_full_name__25__Vfuncout;
                        this->__Vtask___VforkTask_0__19__unnamedblk3__DOT__s 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vtask___VforkTask_0__19__unnamedblk3__DOT__s, "\n  "s), this->__Vtask___VforkTask_0__19____VlefCall_5__get_full_name);
                    }
                    VL_NULL_CHECK(this->__PVT__m_objection, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 253)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__26__Vfuncout);
                    this->__Vtask___VforkTask_0__19____VlefCall_6__get_name 
                        = this->__Vtask_get_name__26__Vfuncout;
                    VL_NULL_CHECK(this->__PVT__m_cntxt, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 252)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Did not recieve an update of %s on any component since last event trigger at time %0t. The list of registered components is:%s",4, 'T',-12
                                                                                , 'S',&(this->__Vtask___VforkTask_0__19____VlefCall_6__get_name)
                                                                                , '#',64,VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 253)
                                                                                ->__PVT__last_trigger
                                                                                , 'S',&(this->__Vtask___VforkTask_0__19__unnamedblk3__DOT__s)) , 0U, ""s, 0U, ""s, 0U);
                }
            } else if ((1U == this->__PVT__m_mode)) {
                VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 258)->__VnoInFunc_objects_triggered(vlSymsp, __Vtask_objects_triggered__28__Vfuncout);
                __Vtask___VforkTask_0__19____VlefCall_7__objects_triggered 
                    = __Vtask_objects_triggered__28__Vfuncout;
                if (VL_LTS_III(32, 1U, __Vtask___VforkTask_0__19____VlefCall_7__objects_triggered)) {
                    this->__Vtask___VforkTask_0__19__unnamedblk5__DOT__s = ""s;
                    __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vmore 
                        = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 260)
                           ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vnext));
                    while (__Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vmore) {
                        __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx 
                            = __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vnext;
                        __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vmore 
                            = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 260)
                               ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vnext));
                        VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 261)->__PVT__obj 
                            = __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx;
                        __Vtask___VforkTask_0__19____VlefExpr_8 
                            = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 262)
                               ->__PVT__cnt.at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 262)
                                               ->__PVT__obj));
                        if (__Vtask___VforkTask_0__19____VlefExpr_8) {
                            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 263)
                                          ->__PVT__obj, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 263)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__29__Vfuncout);
                            this->__Vtask___VforkTask_0__19____VlefCall_9__get_full_name 
                                = this->__Vtask_get_full_name__29__Vfuncout;
                            VL_SFORMAT_NX(this->__Vtask___VforkTask_0__19__unnamedblk5__DOT__s
                                          ,"%s\n  %s (updated: %0t)",4, 'T',-12
                                          , 'S',&(this->__Vtask___VforkTask_0__19__unnamedblk5__DOT__s)
                                          , 'S',&(this->__Vtask___VforkTask_0__19____VlefCall_9__get_full_name)
                                          , '#',64,VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 263)
                                          ->__PVT__last_trigger
                                          .at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 263)
                                              ->__PVT__obj));
                        }
                    }
                    VL_NULL_CHECK(this->__PVT__m_objection, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 266)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__30__Vfuncout);
                    this->__Vtask___VforkTask_0__19____VlefCall_10__get_name 
                        = this->__Vtask_get_name__30__Vfuncout;
                    VL_NULL_CHECK(this->__PVT__m_cntxt, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 265)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Recieved update of %s from more than one component since last event trigger at time %0t. The list of triggered components is:%s",4, 'T',-12
                                                                                , 'S',&(this->__Vtask___VforkTask_0__19____VlefCall_10__get_name)
                                                                                , '#',64,VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 266)
                                                                                ->__PVT__last_trigger
                                                                                , 'S',&(this->__Vtask___VforkTask_0__19__unnamedblk5__DOT__s)) , 0U, ""s, 0U, ""s, 0U);
                }
                __Vtask___VforkTask_0__19____VlefLogAnd_12 
                    = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 268)
                       ->__PVT__cnt.size());
                if (__Vtask___VforkTask_0__19____VlefLogAnd_12) {
                    VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 268)->__VnoInFunc_objects_triggered(vlSymsp, __Vtask_objects_triggered__32__Vfuncout);
                    __Vtask___VforkTask_0__19____VlefCall_11__objects_triggered 
                        = __Vtask_objects_triggered__32__Vfuncout;
                    __Vtask___VforkTask_0__19____VlefLogAnd_12 
                        = (1U & (~ (0U != __Vtask___VforkTask_0__19____VlefCall_11__objects_triggered)));
                }
                if (__Vtask___VforkTask_0__19____VlefLogAnd_12) {
                    this->__Vtask___VforkTask_0__19__unnamedblk7__DOT__s = ""s;
                    __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vmore 
                        = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 270)
                           ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vnext));
                    while (__Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vmore) {
                        __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx 
                            = __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vnext;
                        __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vmore 
                            = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 270)
                               ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vnext));
                        VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 271)->__PVT__obj 
                            = __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx;
                        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 272)
                                      ->__PVT__obj, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 272)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__33__Vfuncout);
                        this->__Vtask___VforkTask_0__19____VlefCall_13__get_full_name 
                            = this->__Vtask_get_full_name__33__Vfuncout;
                        this->__Vtask___VforkTask_0__19__unnamedblk7__DOT__s 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vtask___VforkTask_0__19__unnamedblk7__DOT__s, "\n  "s), this->__Vtask___VforkTask_0__19____VlefCall_13__get_full_name);
                    }
                    VL_NULL_CHECK(this->__PVT__m_objection, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 275)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__34__Vfuncout);
                    this->__Vtask___VforkTask_0__19____VlefCall_14__get_name 
                        = this->__Vtask_get_name__34__Vfuncout;
                    VL_NULL_CHECK(this->__PVT__m_cntxt, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 274)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Did not recieve an update of %s on any component since last event trigger at time %0t. The list of registered components is:%s",4, 'T',-12
                                                                                , 'S',&(this->__Vtask___VforkTask_0__19____VlefCall_14__get_name)
                                                                                , '#',64,VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 275)
                                                                                ->__PVT__last_trigger
                                                                                , 'S',&(this->__Vtask___VforkTask_0__19__unnamedblk7__DOT__s)) , 0U, ""s, 0U, ""s, 0U);
                }
            }
        }
        VL_NULL_CHECK(this->__PVT__m_cb, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 280)->__VnoInFunc_reset_counts(vlSymsp);
        VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 281)->__PVT__last_trigger 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 282)->__PVT__triggered = 1U;
    }
    __Vfork_2__sync.done("../../uvm/distrib/src/base/uvm_heartbeat.svh", 
                         225);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_mode = 0;
    __PVT__m_started = 0;
    __PVT__m_added = 0;
}

VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::~VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_heartbeat::~\n"); );
}
