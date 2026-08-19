// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP10.h for the primary calling header

#include "VP10__pch.h"

void VP10_cover_tb__03a__03acg__Vclpkg::__VnoInFunc_get_coverage(VP10__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VP10_cover_tb__03a__03acg__Vclpkg::__VnoInFunc_get_coverage\n"); );
    // Body
    get_coverage__Vfuncrtn = 0.0;
}

void VP10_cover_tb__03a__03acg::init(VP10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VP10_cover_tb__03a__03acg::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT____Vcp_mode.init("cg.mode", 1, 4);
    this->__PVT____Vcp_mode.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_0", "P10.sv", 9, 9);
    this->__PVT____Vcp_mode.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_1", "P10.sv", 9, 9);
    this->__PVT____Vcp_mode.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_2", "P10.sv", 9, 9);
    this->__PVT____Vcp_mode.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_3", "P10.sv", 9, 9);
    this->__PVT____Vcp_mode.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cg");
    this->__PVT____Vcp_cfg.init("cg.cfg", 1, 8);
    this->__PVT____Vcp_cfg.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_0", "P10.sv", 10, 9);
    this->__PVT____Vcp_cfg.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_1", "P10.sv", 10, 9);
    this->__PVT____Vcp_cfg.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_2", "P10.sv", 10, 9);
    this->__PVT____Vcp_cfg.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_3", "P10.sv", 10, 9);
    this->__PVT____Vcp_cfg.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_4", "P10.sv", 10, 9);
    this->__PVT____Vcp_cfg.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_5", "P10.sv", 10, 9);
    this->__PVT____Vcp_cfg.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_6", "P10.sv", 10, 9);
    this->__PVT____Vcp_cfg.addSingleNamer(VlCovBinKind::KIND_NORMAL, "auto_7", "P10.sv", 10, 9);
    this->__PVT____Vcp_cfg.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cg");
}

void VP10_cover_tb__03a__03acg::__VnoInFunc_sample(VP10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VP10_cover_tb__03a__03acg::__VnoInFunc_sample\n"); );
    // Body
    if ((0U == (IData)(vlSymsp->TOP__cover_tb.__PVT__mode))) {
        this->__PVT____Vcp_mode.incrementBin(0);
    }
    if ((1U == (IData)(vlSymsp->TOP__cover_tb.__PVT__mode))) {
        this->__PVT____Vcp_mode.incrementBin(1);
    }
    if ((2U == (IData)(vlSymsp->TOP__cover_tb.__PVT__mode))) {
        this->__PVT____Vcp_mode.incrementBin(2);
    }
    if ((3U == (IData)(vlSymsp->TOP__cover_tb.__PVT__mode))) {
        this->__PVT____Vcp_mode.incrementBin(3);
    }
    if ((0U == (IData)(vlSymsp->TOP__cover_tb.__PVT__cfg))) {
        this->__PVT____Vcp_cfg.incrementBin(0);
    }
    if ((1U == (IData)(vlSymsp->TOP__cover_tb.__PVT__cfg))) {
        this->__PVT____Vcp_cfg.incrementBin(1);
    }
    if ((2U == (IData)(vlSymsp->TOP__cover_tb.__PVT__cfg))) {
        this->__PVT____Vcp_cfg.incrementBin(2);
    }
    if ((3U == (IData)(vlSymsp->TOP__cover_tb.__PVT__cfg))) {
        this->__PVT____Vcp_cfg.incrementBin(3);
    }
    if ((4U == (IData)(vlSymsp->TOP__cover_tb.__PVT__cfg))) {
        this->__PVT____Vcp_cfg.incrementBin(4);
    }
    if ((5U == (IData)(vlSymsp->TOP__cover_tb.__PVT__cfg))) {
        this->__PVT____Vcp_cfg.incrementBin(5);
    }
    if ((6U == (IData)(vlSymsp->TOP__cover_tb.__PVT__cfg))) {
        this->__PVT____Vcp_cfg.incrementBin(6);
    }
    if ((7U == (IData)(vlSymsp->TOP__cover_tb.__PVT__cfg))) {
        this->__PVT____Vcp_cfg.incrementBin(7);
    }
}

void VP10_cover_tb__03a__03acg::__VnoInFunc_get_inst_coverage(VP10__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_inst_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VP10_cover_tb__03a__03acg::__VnoInFunc_get_inst_coverage\n"); );
    // Body
    get_inst_coverage__Vfuncrtn = 0.0;
    double __Vcov = 0.0; double __Vtot = 0.0;
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_mode.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_cfg.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    get_inst_coverage__Vfuncrtn = (__Vtot != 0.0) ? (100.0 * __Vcov / __Vtot) : 100.0;
}

void VP10_cover_tb__03a__03acg::__VnoInFunc_get_inst_coverage__Vtcwrap_1_2(VP10__Syms* __restrict vlSymsp, double &get_inst_coverage__Vtcwrap_1_2__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VP10_cover_tb__03a__03acg::__VnoInFunc_get_inst_coverage__Vtcwrap_1_2\n"); );
    // Body
    std::string covered_bins;
    covered_bins = VL_CVT_PACK_STR_NI(vlSymsp->TOP__cover_tb__03a__03acg__Vclpkg.__PVT____Vint);
    std::string total_bins;
    total_bins = VL_CVT_PACK_STR_NI(vlSymsp->TOP__cover_tb__03a__03acg__Vclpkg.__PVT____Vint);
    this->__VnoInFunc_get_inst_coverage(vlSymsp, covered_bins, total_bins, get_inst_coverage__Vtcwrap_1_2__Vfuncrtn);
}

void VP10_cover_tb__03a__03acg::__VnoInFunc_set_inst_name(VP10__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VP10_cover_tb__03a__03acg::__VnoInFunc_set_inst_name\n"); );
}

void VP10_cover_tb__03a__03acg::_ctor_var_reset(VP10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VP10_cover_tb__03a__03acg::_ctor_var_reset\n"); );
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
