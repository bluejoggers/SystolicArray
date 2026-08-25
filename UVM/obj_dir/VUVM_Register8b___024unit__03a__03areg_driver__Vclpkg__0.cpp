// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b___024unit__03a__03areg_driver__Vclpkg::__VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi12> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b___024unit__03a__03areg_driver__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi12__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi12> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi12__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "reg_driver"s;
}

void VUVM_Register8b___024unit__03a__03areg_driver::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_build_phase\n"); );
    // Locals
    VUVM_Register8b_reg_if* __Vfunc_get__3__value;
    __Vfunc_get__3__value = nullptr;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_type_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_type_name;
    CData/*0:0*/ __VlefCall_0__get;
    VUVM_Register8b_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    __Vfunc_get__3__value = this->__PVT__vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<VUVM_Register8b___024unit__03a__03areg_driver>{this}, ""s, "vif"s, __Vfunc_get__3__value, __VlefCall_0__get);
    this->__PVT__vif = __Vfunc_get__3__value;
    if ((1U & (~ (IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, 
                                             VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_3__get_type_name), "Virtual handle not found"s, 0U, "UVM_Register8b.sv"s, 0x00000053U, ""s, 1U);
        }
    }
}

VlCoroutine VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_run_phase(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_run_phase\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hbaed59d6__2;
    __Vtrigprevexpr_hbaed59d6__2 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hbaed59d6__1;
    __Vtrigprevexpr_hbaed59d6__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hbaed59d6__0;
    __Vtrigprevexpr_hbaed59d6__0 = 0;
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __Vtask_get_next_item__8__t;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> txn;
    while (true) {
        co_await VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__PVT__seq_item_port, "UVM_Register8b.sv", 91)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__8__t);
        txn = __Vtask_get_next_item__8__t;
        CData/*0:0*/ __VdynTrigger_hc91193ad__0;
        __VdynTrigger_hc91193ad__0 = 0;
        __VdynTrigger_hc91193ad__0 = 0U;
        __Vtrigprevexpr_hbaed59d6__0 = VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 93)
            ->clock;
        while ((1U & (~ (IData)(__VdynTrigger_hc91193ad__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::reg_driver.vif.clock)", 
                                                         "UVM_Register8b.sv", 
                                                         93);
            __VdynTrigger_hc91193ad__0 = (VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 93)
                                          ->clock & 
                                          (~ (IData)(__Vtrigprevexpr_hbaed59d6__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc91193ad__0);
            __Vtrigprevexpr_hbaed59d6__0 = VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 93)
                ->clock;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::reg_driver.vif.clock)", 
                                                     "UVM_Register8b.sv", 
                                                     93);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h1abc6ea7__0;
        __Vintraval_h1abc6ea7__0 = 0;
        __Vintraval_h1abc6ea7__0 = VL_NULL_CHECK(txn, "UVM_Register8b.sv", 94)
            ->__PVT__enable;
        this->__VnoInFunc_run_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h1abc6ea7__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*7:0*/ __Vintraval_hef9ada7b__0;
        __Vintraval_hef9ada7b__0 = 0;
        __Vintraval_hef9ada7b__0 = VL_NULL_CHECK(txn, "UVM_Register8b.sv", 95)
            ->__PVT__data_in;
        this->__VnoInFunc_run_phase____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_hef9ada7b__0);
        CData/*0:0*/ __VdynTrigger_hc91193ad__1;
        __VdynTrigger_hc91193ad__1 = 0;
        __VdynTrigger_hc91193ad__1 = 0U;
        __Vtrigprevexpr_hbaed59d6__1 = VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 97)
            ->clock;
        while ((1U & (~ (IData)(__VdynTrigger_hc91193ad__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::reg_driver.vif.clock)", 
                                                         "UVM_Register8b.sv", 
                                                         97);
            __VdynTrigger_hc91193ad__1 = (VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 97)
                                          ->clock & 
                                          (~ (IData)(__Vtrigprevexpr_hbaed59d6__1)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc91193ad__1);
            __Vtrigprevexpr_hbaed59d6__1 = VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 97)
                ->clock;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::reg_driver.vif.clock)", 
                                                     "UVM_Register8b.sv", 
                                                     97);
        if (VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 98)
            ->enable) {
            CData/*0:0*/ __VdynTrigger_hc91193ad__2;
            __VdynTrigger_hc91193ad__2 = 0;
            __VdynTrigger_hc91193ad__2 = 0U;
            __Vtrigprevexpr_hbaed59d6__2 = VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 99)
                ->clock;
            while ((1U & (~ (IData)(__VdynTrigger_hc91193ad__2)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@(posedge $unit::reg_driver.vif.clock)", 
                                                             "UVM_Register8b.sv", 
                                                             99);
                __VdynTrigger_hc91193ad__2 = (VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 99)
                                              ->clock 
                                              & (~ (IData)(__Vtrigprevexpr_hbaed59d6__2)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc91193ad__2);
                __Vtrigprevexpr_hbaed59d6__2 = VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 99)
                    ->clock;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@(posedge $unit::reg_driver.vif.clock)", 
                                                         "UVM_Register8b.sv", 
                                                         99);
            VL_NULL_CHECK(txn, "UVM_Register8b.sv", 100)->__PVT__data_out 
                = VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 100)
                ->data_out;
        }
        VL_NULL_CHECK(VUVM_Register8b_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__PVT__seq_item_port, "UVM_Register8b.sv", 102)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    }
    co_return;
}

VlCoroutine VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_run_phase____Vfork_2__0(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_hef9ada7b__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_run_phase____Vfork_2__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h2615856f__1;
    __VdynTrigger_h2615856f__1 = 0;
    __VdynTrigger_h2615856f__1 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h2615856f__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "UVM_Register8b.sv", 
                                                     95);
        __VdynTrigger_h2615856f__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "UVM_Register8b.sv", 
                                                     95);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "UVM_Register8b.sv", 
                                                 95);
    VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 95)->data_in 
        = __Vintraval_hef9ada7b__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_run_phase____Vfork_1__0(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h1abc6ea7__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_run_phase____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h2615856f__0;
    __VdynTrigger_h2615856f__0 = 0;
    __VdynTrigger_h2615856f__0 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h2615856f__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "UVM_Register8b.sv", 
                                                     94);
        __VdynTrigger_h2615856f__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "UVM_Register8b.sv", 
                                                     94);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "UVM_Register8b.sv", 
                                                 94);
    VL_NULL_CHECK(this->__PVT__vif, "UVM_Register8b.sv", 94)->enable 
        = __Vintraval_h1abc6ea7__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b___024unit__03a__03areg_driver::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

VUVM_Register8b___024unit__03a__03areg_driver::~VUVM_Register8b___024unit__03a__03areg_driver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Register8b___024unit__03a__03areg_driver::~\n"); );
}
