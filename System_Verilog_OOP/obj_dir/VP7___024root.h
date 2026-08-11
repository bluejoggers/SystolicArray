// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP7.h for the primary calling header

#ifndef VERILATED_VP7___024ROOT_H_
#define VERILATED_VP7___024ROOT_H_  // guard

#include "verilated.h"
class VP7___024unit;
class VP7___024unit__03a__03acomponent;
class VP7___024unit__03a__03acomponent__Vclpkg;
class VP7___024unit__03a__03adriver;
class VP7___024unit__03a__03adriver__Vclpkg;
class VP7___024unit__03a__03amonitor;
class VP7___024unit__03a__03amonitor__Vclpkg;


class VP7__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP7___024root final {
  public:
    // CELLS
    VP7___024unit* __PVT____024unit;
    VP7___024unit__03a__03acomponent__Vclpkg* __024unit__03a__03acomponent__Vclpkg;
    VP7___024unit__03a__03adriver__Vclpkg* __024unit__03a__03adriver__Vclpkg;
    VP7___024unit__03a__03amonitor__Vclpkg* __024unit__03a__03amonitor__Vclpkg;

    // DESIGN SPECIFIC STATE
    VlUnpacked<VlClassRef<VP7___024unit__03a__03acomponent>, 2> testbench__DOT__env;

    // INTERNAL VARIABLES
    VP7__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP7___024root(VP7__Syms* symsp, const char* namep);
    ~VP7___024root();
    VL_UNCOPYABLE(VP7___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
