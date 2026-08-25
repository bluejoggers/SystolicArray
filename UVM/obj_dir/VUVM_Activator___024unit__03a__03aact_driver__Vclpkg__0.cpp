// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator___024unit__03a__03aact_driver__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi12> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator___024unit__03a__03aact_driver__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi12__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi12> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi12__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "act_driver"s;
}

void VUVM_Activator___024unit__03a__03aact_driver::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_driver::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_build_phase\n"); );
    // Locals
    VUVM_Activator_act_if* __Vfunc_get__3__value;
    __Vfunc_get__3__value = nullptr;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_type_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_type_name;
    CData/*0:0*/ __VlefCall_0__get;
    VUVM_Activator_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    __Vfunc_get__3__value = this->__PVT__vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<VUVM_Activator___024unit__03a__03aact_driver>{this}, ""s, "vif"s, __Vfunc_get__3__value, __VlefCall_0__get);
    this->__PVT__vif = __Vfunc_get__3__value;
    if ((1U & (~ (IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, 
                                             VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_3__get_type_name), "Virtual handle not found!"s, 0U, "UVM_Activator.sv"s, 0x0000003dU, ""s, 1U);
        }
    }
}

VlCoroutine VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_run_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_run_phase\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h2ccea0ba__0;
    __Vtrigprevexpr_h2ccea0ba__0 = 0;
    VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> __Vtask_get_next_item__8__t;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> txn;
    while (true) {
        co_await VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__PVT__seq_item_port, "UVM_Activator.sv", 69)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__8__t);
        txn = __Vtask_get_next_item__8__t;
        CData/*0:0*/ __VdynTrigger_h56b0da19__0;
        __VdynTrigger_h56b0da19__0 = 0;
        __VdynTrigger_h56b0da19__0 = 0U;
        __Vtrigprevexpr_h2ccea0ba__0 = VL_NULL_CHECK(this->__PVT__vif, "UVM_Activator.sv", 71)
            ->clock;
        while ((1U & (~ (IData)(__VdynTrigger_h56b0da19__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::act_driver.vif.clock)", 
                                                         "UVM_Activator.sv", 
                                                         71);
            __VdynTrigger_h56b0da19__0 = (VL_NULL_CHECK(this->__PVT__vif, "UVM_Activator.sv", 71)
                                          ->clock & 
                                          (~ (IData)(__Vtrigprevexpr_h2ccea0ba__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h56b0da19__0);
            __Vtrigprevexpr_h2ccea0ba__0 = VL_NULL_CHECK(this->__PVT__vif, "UVM_Activator.sv", 71)
                ->clock;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::act_driver.vif.clock)", 
                                                     "UVM_Activator.sv", 
                                                     71);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        IData/*31:0*/ __Vintraval_hddafe227__0;
        __Vintraval_hddafe227__0 = 0;
        __Vintraval_hddafe227__0 = VL_NULL_CHECK(txn, "UVM_Activator.sv", 72)
            ->__PVT__data_in;
        this->__VnoInFunc_run_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_hddafe227__0);
        VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61::__PVT__seq_item_port, "UVM_Activator.sv", 74)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    }
    co_return;
}

VlCoroutine VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_run_phase____Vfork_1__0(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hddafe227__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_run_phase____Vfork_1__0\n"); );
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
                                                     "UVM_Activator.sv", 
                                                     72);
        __VdynTrigger_h2615856f__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "UVM_Activator.sv", 
                                                     72);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "UVM_Activator.sv", 
                                                 72);
    VL_NULL_CHECK(this->__PVT__vif, "UVM_Activator.sv", 72)->data_in 
        = __Vintraval_hddafe227__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_driver::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator___024unit__03a__03aact_driver::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_driver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

VUVM_Activator___024unit__03a__03aact_driver::~VUVM_Activator___024unit__03a__03aact_driver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_driver::~\n"); );
}
