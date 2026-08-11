// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP1.h for the primary calling header

#ifndef VERILATED_VP1___024ROOT_H_
#define VERILATED_VP1___024ROOT_H_  // guard

#include "verilated.h"
class VP1___024unit;
class VP1___024unit__03a__03amy_config;
class VP1___024unit__03a__03amy_config__Vclpkg;


class VP1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP1___024root final {
  public:
    // CELLS
    VP1___024unit* __PVT____024unit;
    VP1___024unit__03a__03amy_config__Vclpkg* __024unit__03a__03amy_config__Vclpkg;

    // INTERNAL VARIABLES
    VP1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP1___024root(VP1__Syms* symsp, const char* namep);
    ~VP1___024root();
    VL_UNCOPYABLE(VP1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
