// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b___024unit__03a__03areg_scoreboard__Vclpkg::__VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__Tz76> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b___024unit__03a__03areg_scoreboard__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz76__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__Tz76> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz76__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Register8b___024unit__03a__03areg_scoreboard::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_scoreboard::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Register8b___024unit__03a__03areg_scoreboard::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VUVM_Register8b_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    this->__PVT__scoreboard_imp = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz76, vlProcess, vlSymsp, "scoreboard_imp"s, 
                                         VlClassRef<VUVM_Register8b___024unit__03a__03areg_scoreboard>{this});
}

void VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> txn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_5__get_type_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    if (VL_NULL_CHECK(txn, "UVM_Register8b.sv", 248)
        ->__PVT__enable) {
        if ((VL_NULL_CHECK(txn, "UVM_Register8b.sv", 249)
             ->__PVT__data_in == VL_NULL_CHECK(txn, "UVM_Register8b.sv", 249)
             ->__PVT__data_out)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000064U, 0U, 
                                                 VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), VL_SFORMATF_N_NX("(%0t): [PASS] Match! [DATA IN] %0h [DATA OUT] %0h",4, 'T',-12
                                                                                , '#',64,VL_TIME_UNITED_Q(1)
                                                                                , '#',8,VL_NULL_CHECK(txn, "UVM_Register8b.sv", 250)
                                                                                ->__PVT__data_in
                                                                                , '#',8,VL_NULL_CHECK(txn, "UVM_Register8b.sv", 250)
                                                                                ->__PVT__data_out) , 0x00000064U, "UVM_Register8b.sv"s, 0x000000faU, ""s, 1U);
            }
        } else {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000064U, 0U, 
                                                 VL_CVT_PACK_STR_NN(__VlefCall_3__get_type_name), __VlefCall_4__uvm_report_enabled);
            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(__VlefCall_5__get_type_name), VL_SFORMATF_N_NX("(%0t): [FAIL] Mismatch! [DATA IN] %0h [DATA OUT] %0h",4, 'T',-12
                                                                                , '#',64,VL_TIME_UNITED_Q(1)
                                                                                , '#',8,VL_NULL_CHECK(txn, "UVM_Register8b.sv", 253)
                                                                                ->__PVT__data_in
                                                                                , '#',8,VL_NULL_CHECK(txn, "UVM_Register8b.sv", 253)
                                                                                ->__PVT__data_out) , 0x00000064U, "UVM_Register8b.sv"s, 0x000000fdU, ""s, 1U);
            }
        }
    }
}

void VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Register8b___024unit__03a__03areg_scoreboard::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b___024unit__03a__03areg_scoreboard::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Register8b___024unit__03a__03areg_scoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Register8b___024unit__03a__03areg_scoreboard::~VUVM_Register8b___024unit__03a__03areg_scoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Register8b___024unit__03a__03areg_scoreboard::~\n"); );
}
