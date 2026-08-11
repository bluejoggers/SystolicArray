// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP4.h for the primary calling header

#ifndef VERILATED_VP4___024ROOT_H_
#define VERILATED_VP4___024ROOT_H_  // guard

#include "verilated.h"
class VP4___024unit;
class VP4___024unit__03a__03apacket;
class VP4___024unit__03a__03apacket__Vclpkg;
class VP4___024unit__03a__03asub_packet;
class VP4___024unit__03a__03asub_packet__Vclpkg;


class VP4__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP4___024root final {
  public:
    // CELLS
    VP4___024unit* __PVT____024unit;
    VP4___024unit__03a__03apacket__Vclpkg* __024unit__03a__03apacket__Vclpkg;
    VP4___024unit__03a__03asub_packet__Vclpkg* __024unit__03a__03asub_packet__Vclpkg;

    // INTERNAL VARIABLES
    VP4__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP4___024root(VP4__Syms* symsp, const char* namep);
    ~VP4___024root();
    VL_UNCOPYABLE(VP4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
