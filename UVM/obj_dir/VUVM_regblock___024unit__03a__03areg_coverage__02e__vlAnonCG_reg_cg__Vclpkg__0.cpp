// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg::__VnoInFunc_get_coverage(VUVM_regblock__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg::__VnoInFunc_get_coverage\n"); );
    // Body
    get_coverage__Vfuncrtn = 0.0;
}

void VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg::init(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg::__VnoInFunc_get_inst_coverage(VUVM_regblock__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_inst_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg::__VnoInFunc_get_inst_coverage\n"); );
    // Body
    get_inst_coverage__Vfuncrtn = 0.0;
}

void VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg::__VnoInFunc_set_inst_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg::__VnoInFunc_set_inst_name\n"); );
}

void VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__option.__PVT__weight = 0;
    __PVT__option.__PVT__goal = 0;
    __PVT__option.__PVT__at_least = 0;
    __PVT__option.__PVT__auto_bin_max = 0;
    __PVT__option.__PVT__cross_num_print_missing = 0;
    __PVT__option.__PVT__cross_retain_auto_bins = 0;
    __PVT__option.__PVT__detect_overlap = 0;
    __PVT__option.__PVT__per_instance = 0;
    __PVT__option.__PVT__get_inst_coverage = 0;
    __PVT__type_option.__PVT__weight = 0;
    __PVT__type_option.__PVT__goal = 0;
    __PVT__type_option.__PVT__strobe = 0;
    __PVT__type_option.__PVT__merge_instances = 0;
    __PVT__type_option.__PVT__distribute_first = 0;
    __PVT__type_option.__PVT__real_interval = 0;
}
