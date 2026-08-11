// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"


VRegister8b_test_top_v1_std::VRegister8b_test_top_v1_std() = default;
VRegister8b_test_top_v1_std::~VRegister8b_test_top_v1_std() = default;

void VRegister8b_test_top_v1_std::ctor(VRegister8b_test_top_v1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VRegister8b_test_top_v1_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VRegister8b_test_top_v1_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
