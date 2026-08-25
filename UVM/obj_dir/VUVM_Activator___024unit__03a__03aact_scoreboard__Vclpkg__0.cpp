// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator___024unit__03a__03aact_scoreboard__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi20> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator___024unit__03a__03aact_scoreboard__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi20__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi20> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi20__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "act_scoreboard"s;
}

void VUVM_Activator___024unit__03a__03aact_scoreboard::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_Activator_uvm_pkg__03a__03auvm_scoreboard::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_scoreboard::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VUVM_Activator_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    this->__PVT__scoreboard_analysis_imp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz76, vlProcess, vlSymsp, "scoreboard_analysis_imp"s, 
                                                  VlClassRef<VUVM_Activator___024unit__03a__03aact_scoreboard>{this});
}

void VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> txn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_8__get_type_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_type_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ expected_data;
    expected_data = ((VL_NULL_CHECK(txn, "UVM_Activator.sv", 209)
                      ->__PVT__data_in >> 0x1fU) ? 0U
                      : VL_NULL_CHECK(txn, "UVM_Activator.sv", 213)
                     ->__PVT__data_in);
    if ((expected_data == VL_NULL_CHECK(txn, "UVM_Activator.sv", 216)
         ->__PVT__data_out)) {
        if (((0U == expected_data) && (0U != VL_NULL_CHECK(txn, "UVM_Activator.sv", 217)
                                       ->__PVT__data_in))) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000064U, 0U, 
                                                 VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), VL_SFORMATF_N_NX("[CLAMPED] Data_out : %0h Data_in : %0h",2
                                                                                , '#',32,VL_NULL_CHECK(txn, "UVM_Activator.sv", 218)
                                                                                ->__PVT__data_out
                                                                                , '#',32,VL_NULL_CHECK(txn, "UVM_Activator.sv", 218)
                                                                                ->__PVT__data_in) , 0x00000064U, "UVM_Activator.sv"s, 0x000000daU, ""s, 1U);
            }
        } else {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000064U, 0U, 
                                                 VL_CVT_PACK_STR_NN(__VlefCall_3__get_type_name), __VlefCall_4__uvm_report_enabled);
            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(__VlefCall_5__get_type_name), VL_SFORMATF_N_NX("[PASSED] Data_out : %0h Data_in : %0h",2
                                                                                , '#',32,VL_NULL_CHECK(txn, "UVM_Activator.sv", 221)
                                                                                ->__PVT__data_out
                                                                                , '#',32,VL_NULL_CHECK(txn, "UVM_Activator.sv", 221)
                                                                                ->__PVT__data_in) , 0x00000064U, "UVM_Activator.sv"s, 0x000000ddU, ""s, 1U);
            }
        }
    } else {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, 
                                             VL_CVT_PACK_STR_NN(__VlefCall_6__get_type_name), __VlefCall_7__uvm_report_enabled);
        if ((0U != __VlefCall_7__uvm_report_enabled)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name), VL_SFORMATF_N_NX("[FAIL] IN: %0h | ACTUAL OUT: %0h | EXPECTED: %0h",3
                                                                                , '#',32,VL_NULL_CHECK(txn, "UVM_Activator.sv", 226)
                                                                                ->__PVT__data_in
                                                                                , '#',32,VL_NULL_CHECK(txn, "UVM_Activator.sv", 226)
                                                                                ->__PVT__data_out
                                                                                , '#',32,expected_data) , 0U, "UVM_Activator.sv"s, 0x000000e2U, ""s, 1U);
        }
    }
}

void VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_scoreboard::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator___024unit__03a__03aact_scoreboard::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_scoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Activator___024unit__03a__03aact_scoreboard::~VUVM_Activator___024unit__03a__03aact_scoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_scoreboard::~\n"); );
}
