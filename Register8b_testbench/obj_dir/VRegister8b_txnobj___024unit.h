// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister8b_txnobj.h for the primary calling header

#ifndef VERILATED_VREGISTER8B_TXNOBJ___024UNIT_H_
#define VERILATED_VREGISTER8B_TXNOBJ___024UNIT_H_  // guard

#include "verilated.h"


class VRegister8b_txnobj__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister8b_txnobj___024unit final {
  public:

    // INTERNAL VARIABLES
    VRegister8b_txnobj__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VRegister8b_txnobj___024unit();
    ~VRegister8b_txnobj___024unit();
    void ctor(VRegister8b_txnobj__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VRegister8b_txnobj___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
