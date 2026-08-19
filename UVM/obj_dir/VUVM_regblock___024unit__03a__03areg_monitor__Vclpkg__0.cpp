// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock___024unit__03a__03areg_monitor__Vclpkg::__VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__pi14> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock___024unit__03a__03areg_monitor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi14__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__pi14> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi14__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "reg_monitor"s;
}

void VUVM_regblock___024unit__03a__03areg_monitor::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_regblock_uvm_pkg__03a__03auvm_monitor::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_regblock___024unit__03a__03areg_monitor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc_build_phase\n"); );
    // Locals
    VUVM_regblock_reg_if* __Vfunc_get__4__value;
    __Vfunc_get__4__value = nullptr;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_type_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_type_name;
    CData/*0:0*/ __VlefCall_0__get;
    VUVM_regblock_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    this->__PVT__monitor_analysis_port = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_analysis_port__Tz59, vlProcess, vlSymsp, "monitor_analysis_port"s, 
                                                VlClassRef<VUVM_regblock___024unit__03a__03areg_monitor>{this});
    __Vfunc_get__4__value = this->__PVT__vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<VUVM_regblock___024unit__03a__03areg_monitor>{this}, ""s, "vif"s, __Vfunc_get__4__value, __VlefCall_0__get);
    this->__PVT__vif = __Vfunc_get__4__value;
    if ((1U & (~ (IData)(__VlefCall_0__get)))) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, 
                                             VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_3__get_type_name), "Virtual handle not found"s, 0U, "UVM_regblock.sv"s, 0x0000007cU, ""s, 1U);
        }
    }
}

VlCoroutine VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc_run_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc_run_phase\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hb8426c97__1;
    __Vtrigprevexpr_hb8426c97__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hb8426c97__0;
    __Vtrigprevexpr_hb8426c97__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> txn;
    while (true) {
        CData/*0:0*/ __VdynTrigger_hce2ca16c__0;
        __VdynTrigger_hce2ca16c__0 = 0;
        __VdynTrigger_hce2ca16c__0 = 0U;
        __Vtrigprevexpr_hb8426c97__0 = VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 133)
            ->clock;
        while ((1U & (~ (IData)(__VdynTrigger_hce2ca16c__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::reg_monitor.vif.clock)", 
                                                         "UVM_regblock.sv", 
                                                         133);
            __VdynTrigger_hce2ca16c__0 = (VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 133)
                                          ->clock & 
                                          (~ (IData)(__Vtrigprevexpr_hb8426c97__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hce2ca16c__0);
            __Vtrigprevexpr_hb8426c97__0 = VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 133)
                ->clock;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::reg_monitor.vif.clock)", 
                                                     "UVM_regblock.sv", 
                                                     133);
        if (VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 135)
            ->w_enable) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi12__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "txn"s, VlNull{}, ""s, txn);
            VL_NULL_CHECK(txn, "UVM_regblock.sv", 138)->__PVT__w_enable 
                = VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 138)
                ->w_enable;
            VL_NULL_CHECK(txn, "UVM_regblock.sv", 139)->__PVT__address 
                = VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 139)
                ->address;
            VL_NULL_CHECK(txn, "UVM_regblock.sv", 140)->__PVT__w_data 
                = VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 140)
                ->w_data;
            VL_NULL_CHECK(this->__PVT__monitor_analysis_port, "UVM_regblock.sv", 142)->__VnoInFunc_write(vlProcess, vlSymsp, txn);
        } else if (VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 144)
                   ->r_enable) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi12__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "txn"s, VlNull{}, ""s, txn);
            VL_NULL_CHECK(txn, "UVM_regblock.sv", 147)->__PVT__r_enable 
                = VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 147)
                ->r_enable;
            VL_NULL_CHECK(txn, "UVM_regblock.sv", 148)->__PVT__address 
                = VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 148)
                ->address;
            CData/*0:0*/ __VdynTrigger_hce2ca16c__1;
            __VdynTrigger_hce2ca16c__1 = 0;
            __VdynTrigger_hce2ca16c__1 = 0U;
            __Vtrigprevexpr_hb8426c97__1 = VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 150)
                ->clock;
            while ((1U & (~ (IData)(__VdynTrigger_hce2ca16c__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@(posedge $unit::reg_monitor.vif.clock)", 
                                                             "UVM_regblock.sv", 
                                                             150);
                __VdynTrigger_hce2ca16c__1 = (VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 150)
                                              ->clock 
                                              & (~ (IData)(__Vtrigprevexpr_hb8426c97__1)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hce2ca16c__1);
                __Vtrigprevexpr_hb8426c97__1 = VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 150)
                    ->clock;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@(posedge $unit::reg_monitor.vif.clock)", 
                                                         "UVM_regblock.sv", 
                                                         150);
            VL_NULL_CHECK(txn, "UVM_regblock.sv", 151)->__PVT__r_data 
                = VL_NULL_CHECK(this->__PVT__vif, "UVM_regblock.sv", 151)
                ->r_data;
            VL_NULL_CHECK(this->__PVT__monitor_analysis_port, "UVM_regblock.sv", 153)->__VnoInFunc_write(vlProcess, vlSymsp, txn);
        }
    }
    co_return;
}

void VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_regblock___024unit__03a__03areg_monitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_regblock___024unit__03a__03areg_monitor::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_regblock___024unit__03a__03areg_monitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

VUVM_regblock___024unit__03a__03areg_monitor::~VUVM_regblock___024unit__03a__03areg_monitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VUVM_regblock___024unit__03a__03areg_monitor::~\n"); );
}
