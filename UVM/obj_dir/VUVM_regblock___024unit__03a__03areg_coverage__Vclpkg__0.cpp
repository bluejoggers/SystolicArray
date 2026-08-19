// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock___024unit__03a__03areg_coverage__Vclpkg::__VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__pi15> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock___024unit__03a__03areg_coverage__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi15__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__pi15> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi15__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "reg_coverage"s;
}

void VUVM_regblock___024unit__03a__03areg_coverage::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_regblock_uvm_pkg__03a__03auvm_subscriber__Tz59::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_coverage::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__reg_cg = VL_NEW(VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg, vlSymsp);
}

void VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc_write(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    this->__PVT__txn = t;
    VL_NULL_CHECK(this->__PVT__reg_cg, "UVM_regblock.sv", 183)->__VnoInFunc_sample(vlSymsp);
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x0000012cU, 0U, 
                                         VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), VL_SFORMATF_N_NX("Sampled Address: %0h",1
                                                                                , '#',4,VL_NULL_CHECK(this->__PVT__txn, "UVM_regblock.sv", 184)
                                                                                ->__PVT__address) , 0x0000012cU, "UVM_regblock.sv"s, 0x000000b8U, ""s, 1U);
    }
}

void VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_coverage::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_regblock___024unit__03a__03areg_coverage::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_coverage::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_regblock___024unit__03a__03areg_coverage::~VUVM_regblock___024unit__03a__03areg_coverage() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_coverage::~\n"); );
}
