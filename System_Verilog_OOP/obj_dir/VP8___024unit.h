// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP8.h for the primary calling header

#ifndef VERILATED_VP8___024UNIT_H_
#define VERILATED_VP8___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VP8__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP8___024unit final {
  public:

    // INTERNAL VARIABLES
    VP8__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP8___024unit();
    ~VP8___024unit();
    void ctor(VP8__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP8___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
