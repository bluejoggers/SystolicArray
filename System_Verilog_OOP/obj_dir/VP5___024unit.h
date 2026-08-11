// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP5.h for the primary calling header

#ifndef VERILATED_VP5___024UNIT_H_
#define VERILATED_VP5___024UNIT_H_  // guard

#include "verilated.h"


class VP5__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP5___024unit final {
  public:

    // INTERNAL VARIABLES
    VP5__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP5___024unit();
    ~VP5___024unit();
    void ctor(VP5__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP5___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
