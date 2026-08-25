// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator___024unit__03a__03aact_monitor__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi13> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator___024unit__03a__03aact_monitor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi13__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi13> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi13__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "act_monitor"s;
}

void VUVM_Activator___024unit__03a__03aact_monitor::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_Activator_uvm_pkg__03a__03auvm_monitor::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_monitor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc_build_phase\n"); );
    // Locals
    VUVM_Activator_act_if* __Vfunc_get__4__value;
    __Vfunc_get__4__value = nullptr;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_type_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_type_name;
    CData/*0:0*/ __VlefCall_0__get;
    VUVM_Activator_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    this->__PVT__monitor_analysis_port = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_analysis_port__Tz61, vlProcess, vlSymsp, "monitor_analysis_port"s, 
                                                VlClassRef<VUVM_Activator___024unit__03a__03aact_monitor>{this});
    __Vfunc_get__4__value = this->__PVT__vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<VUVM_Activator___024unit__03a__03aact_monitor>{this}, ""s, "vif"s, __Vfunc_get__4__value, __VlefCall_0__get);
    this->__PVT__vif = __Vfunc_get__4__value;
    if ((1U & (~ (IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, 
                                             VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_3__get_type_name), "Virtual Interface not found!"s, 0U, "UVM_Activator.sv"s, 0x00000060U, ""s, 1U);
        }
    }
}

VlCoroutine VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc_run_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc_run_phase\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_he3ff7b5e__0;
    __Vtrigprevexpr_he3ff7b5e__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> txn;
    while (true) {
        CData/*0:0*/ __VdynTrigger_he1ffb046__0;
        __VdynTrigger_he1ffb046__0 = 0;
        __VdynTrigger_he1ffb046__0 = 0U;
        __Vtrigprevexpr_he3ff7b5e__0 = VL_NULL_CHECK(this->__PVT__vif, "UVM_Activator.sv", 104)
            ->clock;
        while ((1U & (~ (IData)(__VdynTrigger_he1ffb046__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(negedge $unit::act_monitor.vif.clock)", 
                                                         "UVM_Activator.sv", 
                                                         104);
            __VdynTrigger_he1ffb046__0 = ((~ VL_NULL_CHECK(this->__PVT__vif, "UVM_Activator.sv", 104)
                                           ->clock) 
                                          & (IData)(__Vtrigprevexpr_he3ff7b5e__0));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he1ffb046__0);
            __Vtrigprevexpr_he3ff7b5e__0 = VL_NULL_CHECK(this->__PVT__vif, "UVM_Activator.sv", 104)
                ->clock;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(negedge $unit::act_monitor.vif.clock)", 
                                                     "UVM_Activator.sv", 
                                                     104);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz61__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "txn"s, VlNull{}, ""s, txn);
        VL_NULL_CHECK(txn, "UVM_Activator.sv", 108)->__PVT__data_in 
            = VL_NULL_CHECK(this->__PVT__vif, "UVM_Activator.sv", 108)
            ->data_in;
        VL_NULL_CHECK(txn, "UVM_Activator.sv", 109)->__PVT__data_out 
            = VL_NULL_CHECK(this->__PVT__vif, "UVM_Activator.sv", 109)
            ->data_out;
        VL_NULL_CHECK(this->__PVT__monitor_analysis_port, "UVM_Activator.sv", 111)->__VnoInFunc_write(vlProcess, vlSymsp, txn);
    }
    co_return;
}

void VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_monitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator___024unit__03a__03aact_monitor::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_monitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

VUVM_Activator___024unit__03a__03aact_monitor::~VUVM_Activator___024unit__03a__03aact_monitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_Activator___024unit__03a__03aact_monitor::~\n"); );
}
