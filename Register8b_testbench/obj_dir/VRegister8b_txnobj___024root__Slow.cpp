// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_txnobj.h for the primary calling header

#include "VRegister8b_txnobj__pch.h"


VRegister8b_txnobj___024root::VRegister8b_txnobj___024root(VRegister8b_txnobj__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
}

void VRegister8b_txnobj___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VRegister8b_txnobj___024root::~VRegister8b_txnobj___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
