// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"


VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg::VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg() = default;
VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg::~VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg() = default;

void VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg::ctor(VUVM_regblock__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
