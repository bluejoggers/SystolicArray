// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg___ctor_var_reset(VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg* vlSelf);

VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg::VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg() = default;
VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg::~VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg() = default;

void VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg::ctor(VUVM_regblock__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg___ctor_var_reset(this);
}

void VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
