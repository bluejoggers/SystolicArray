// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"

void VRegister8b_test_top_v1_reg_if___ctor_var_reset(VRegister8b_test_top_v1_reg_if* vlSelf);

VRegister8b_test_top_v1_reg_if::VRegister8b_test_top_v1_reg_if() = default;
VRegister8b_test_top_v1_reg_if::~VRegister8b_test_top_v1_reg_if() = default;

void VRegister8b_test_top_v1_reg_if::ctor(VRegister8b_test_top_v1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VRegister8b_test_top_v1_reg_if___ctor_var_reset(this);
}

void VRegister8b_test_top_v1_reg_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VRegister8b_test_top_v1_reg_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
