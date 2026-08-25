// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator___024unit__03a__03aact_coverage__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi14> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator___024unit__03a__03aact_coverage__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi14__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi14> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi14__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "act_coverage"s;
}

void VUVM_Activator___024unit__03a__03aact_coverage::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_Activator_uvm_pkg__03a__03auvm_subscriber__Tz61::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_coverage::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__act_cg = VL_NEW(VUVM_Activator___024unit__03a__03aact_coverage__02e__vlAnonCG_act_cg, vlSymsp);
}

void VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    this->__PVT__txn = t;
    VL_NULL_CHECK(this->__PVT__act_cg, "UVM_Activator.sv", 146)->__VnoInFunc_sample(vlSymsp);
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x0000012cU, 0U, 
                                         VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), VL_SFORMATF_N_NX("[SAMPLED] %0h",1
                                                                                , '#',32,VL_NULL_CHECK(this->__PVT__txn, "UVM_Activator.sv", 147)
                                                                                ->__PVT__data_in) , 0x0000012cU, "UVM_Activator.sv"s, 0x00000093U, ""s, 1U);
    }
}

void VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc_report_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc_report_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_15__get_type_name;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    std::string __VlefCall_13__get_type_name;
    double __VlefCall_12__get_inst_coverage__Vtcwrap_1_2;
    std::string __VlefCall_11__get_type_name;
    IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
    std::string __VlefCall_9__get_type_name;
    std::string __VlefCall_8__get_type_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_type_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, 
                                         VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), "========================================"s, 0U, "UVM_Activator.sv"s, 0x00000097U, ""s, 1U);
    }
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, 
                                         VL_CVT_PACK_STR_NN(__VlefCall_3__get_type_name), __VlefCall_4__uvm_report_enabled);
    if ((0U != __VlefCall_4__uvm_report_enabled)) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_5__get_type_name), "       FUNCTIONAL COVERAGE REPORT       "s, 0U, "UVM_Activator.sv"s, 0x00000098U, ""s, 1U);
    }
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, 
                                         VL_CVT_PACK_STR_NN(__VlefCall_6__get_type_name), __VlefCall_7__uvm_report_enabled);
    if ((0U != __VlefCall_7__uvm_report_enabled)) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name), "========================================"s, 0U, "UVM_Activator.sv"s, 0x00000099U, ""s, 1U);
    }
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, 
                                         VL_CVT_PACK_STR_NN(__VlefCall_9__get_type_name), __VlefCall_10__uvm_report_enabled);
    if ((0U != __VlefCall_10__uvm_report_enabled)) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
        VL_NULL_CHECK(this->__PVT__act_cg, "UVM_Activator.sv", 154)->__VnoInFunc_get_inst_coverage__Vtcwrap_1_2(vlSymsp, __VlefCall_12__get_inst_coverage__Vtcwrap_1_2);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_11__get_type_name), VL_SFORMATF_N_NX(" Total Covergroup Hit: %0.2f%%",1
                                                                                , 'D',__VlefCall_12__get_inst_coverage__Vtcwrap_1_2) , 0U, "UVM_Activator.sv"s, 0x0000009aU, ""s, 1U);
    }
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_13__get_type_name);
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, 
                                         VL_CVT_PACK_STR_NN(__VlefCall_13__get_type_name), __VlefCall_14__uvm_report_enabled);
    if ((0U != __VlefCall_14__uvm_report_enabled)) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_15__get_type_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_15__get_type_name), "========================================"s, 0U, "UVM_Activator.sv"s, 0x0000009bU, ""s, 1U);
    }
}

void VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_coverage::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator___024unit__03a__03aact_coverage::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_coverage::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Activator___024unit__03a__03aact_coverage::~VUVM_Activator___024unit__03a__03aact_coverage() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_coverage::~\n"); );
}
