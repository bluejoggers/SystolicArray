// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP5.h for the primary calling header

#ifndef VERILATED_VP5___024ROOT_H_
#define VERILATED_VP5___024ROOT_H_  // guard

#include "verilated.h"
class VP5___024unit;
class VP5___024unit__03a__03abase;
class VP5___024unit__03a__03abase__Vclpkg;
class VP5___024unit__03a__03achild;
class VP5___024unit__03a__03achild__Vclpkg;


class VP5__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP5___024root final {
  public:
    // CELLS
    VP5___024unit* __PVT____024unit;
    VP5___024unit__03a__03abase__Vclpkg* __024unit__03a__03abase__Vclpkg;
    VP5___024unit__03a__03achild__Vclpkg* __024unit__03a__03achild__Vclpkg;

    // INTERNAL VARIABLES
    VP5__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP5___024root(VP5__Syms* symsp, const char* namep);
    ~VP5___024root();
    VL_UNCOPYABLE(VP5___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
