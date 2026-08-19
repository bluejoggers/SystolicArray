// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock___024unit__03a__03areg_scoreboard__Vclpkg::__VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__pi21> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock___024unit__03a__03areg_scoreboard__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi21__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__pi21> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi21__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "reg_scoreboard"s;
}

void VUVM_regblock___024unit__03a__03areg_scoreboard::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_regblock_uvm_pkg__03a__03auvm_scoreboard::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_scoreboard::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VUVM_regblock_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    this->__PVT__scoreboard_imp = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz59_TBz77, vlProcess, vlSymsp, "scoreboard_imp"s, 
                                         VlClassRef<VUVM_regblock___024unit__03a__03areg_scoreboard>{this});
}

void VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc_write(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> txn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc_write\n"); );
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
    if (VL_NULL_CHECK(txn, "UVM_regblock.sv", 246)->__PVT__w_enable) {
        this->__PVT__expected_mem[VL_NULL_CHECK(txn, "UVM_regblock.sv", 247)->__PVT__address] 
            = VL_NULL_CHECK(txn, "UVM_regblock.sv", 247)
            ->__PVT__w_data;
        this->__PVT__written[VL_NULL_CHECK(txn, "UVM_regblock.sv", 248)->__PVT__address] = 1U;
    } else if (VL_NULL_CHECK(txn, "UVM_regblock.sv", 250)
               ->__PVT__r_enable) {
        if (this->__PVT__written[VL_NULL_CHECK(txn, "UVM_regblock.sv", 251)
            ->__PVT__address]) {
            if ((VL_NULL_CHECK(txn, "UVM_regblock.sv", 254)
                 ->__PVT__r_data != this->__PVT__expected_mem
                 [VL_NULL_CHECK(txn, "UVM_regblock.sv", 254)
                 ->__PVT__address])) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000064U, 0U, 
                                                     VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                                      VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), VL_SFORMATF_N_NX("[ADDRESS] %0h : Mismatch! [EXPECTED] %0h | [FOUND] %0h",3
                                                                                , '#',4,VL_NULL_CHECK(txn, "UVM_regblock.sv", 255)
                                                                                ->__PVT__address
                                                                                , '#',8,this->__PVT__expected_mem
                                                                                [VL_NULL_CHECK(txn, "UVM_regblock.sv", 255)
                                                                                ->__PVT__address]
                                                                                , '#',8,VL_NULL_CHECK(txn, "UVM_regblock.sv", 255)
                                                                                ->__PVT__r_data) , 0x00000064U, "UVM_regblock.sv"s, 0x000000ffU, ""s, 1U);
                }
            } else {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000064U, 0U, 
                                                     VL_CVT_PACK_STR_NN(__VlefCall_3__get_type_name), __VlefCall_4__uvm_report_enabled);
                if ((0U != __VlefCall_4__uvm_report_enabled)) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                                      VL_CVT_PACK_STR_NN(__VlefCall_5__get_type_name), VL_SFORMATF_N_NX("[ADDRESS] %0h : Match! [EXPECTED] %0h | [FOUND] %0h",3
                                                                                , '#',4,VL_NULL_CHECK(txn, "UVM_regblock.sv", 258)
                                                                                ->__PVT__address
                                                                                , '#',8,this->__PVT__expected_mem
                                                                                [VL_NULL_CHECK(txn, "UVM_regblock.sv", 258)
                                                                                ->__PVT__address]
                                                                                , '#',8,VL_NULL_CHECK(txn, "UVM_regblock.sv", 258)
                                                                                ->__PVT__r_data) , 0x00000064U, "UVM_regblock.sv"s, 0x00000102U, ""s, 1U);
                }
            }
        } else {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000064U, 0U, 
                                                 VL_CVT_PACK_STR_NN(__VlefCall_6__get_type_name), __VlefCall_7__uvm_report_enabled);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name), VL_SFORMATF_N_NX("[ADDRESS] %0h : Read before a write, skpping check!",1
                                                                                , '#',4,VL_NULL_CHECK(txn, "UVM_regblock.sv", 252)
                                                                                ->__PVT__address) , 0x00000064U, "UVM_regblock.sv"s, 0x000000fcU, ""s, 1U);
            }
        }
    }
}

void VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_scoreboard::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_regblock___024unit__03a__03areg_scoreboard::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_scoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __PVT__expected_mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __PVT__written[__Vi0] = 0;
    }
}

VUVM_regblock___024unit__03a__03areg_scoreboard::~VUVM_regblock___024unit__03a__03areg_scoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_scoreboard::~\n"); );
}
