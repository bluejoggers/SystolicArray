// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP4.h for the primary calling header

#ifndef VERILATED_VP4___024UNIT_H_
#define VERILATED_VP4___024UNIT_H_  // guard

#include "verilated.h"


class VP4__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP4___024unit final {
  public:

    // INTERNAL VARIABLES
    VP4__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP4___024unit();
    ~VP4___024unit();
    void ctor(VP4__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP4___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
