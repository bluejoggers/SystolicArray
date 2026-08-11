// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP7.h for the primary calling header

#ifndef VERILATED_VP7___024UNIT_H_
#define VERILATED_VP7___024UNIT_H_  // guard

#include "verilated.h"


class VP7__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP7___024unit final {
  public:

    // INTERNAL VARIABLES
    VP7__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP7___024unit();
    ~VP7___024unit();
    void ctor(VP7__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP7___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
