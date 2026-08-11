// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP1.h for the primary calling header

#ifndef VERILATED_VP1___024UNIT_H_
#define VERILATED_VP1___024UNIT_H_  // guard

#include "verilated.h"


class VP1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP1___024unit final {
  public:

    // INTERNAL VARIABLES
    VP1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP1___024unit();
    ~VP1___024unit();
    void ctor(VP1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP1___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
