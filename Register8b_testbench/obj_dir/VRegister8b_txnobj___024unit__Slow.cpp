// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_txnobj.h for the primary calling header

#include "VRegister8b_txnobj__pch.h"


VRegister8b_txnobj___024unit::VRegister8b_txnobj___024unit() = default;
VRegister8b_txnobj___024unit::~VRegister8b_txnobj___024unit() = default;

void VRegister8b_txnobj___024unit::ctor(VRegister8b_txnobj__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VRegister8b_txnobj___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VRegister8b_txnobj___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
