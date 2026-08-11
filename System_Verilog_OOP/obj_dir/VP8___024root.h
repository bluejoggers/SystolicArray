// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP8.h for the primary calling header

#ifndef VERILATED_VP8___024ROOT_H_
#define VERILATED_VP8___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VP8___024unit;
class VP8___024unit__03a__03amypacket;
class VP8___024unit__03a__03amypacket__Vclpkg;
class VP8_std;
class VP8_std__03a__03aprocess__Vclpkg;
class VP8_std__03a__03asemaphore__Vclpkg;


class VP8__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP8___024root final {
  public:
    // CELLS
    VP8_std* __PVT__std;
    VP8___024unit* __PVT____024unit;
    VP8_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    VP8_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    VP8___024unit__03a__03amypacket__Vclpkg* __024unit__03a__03amypacket__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ testbench__DOT____VlemCond_1;
    IData/*31:0*/ testbench__DOT____VlemCall_0__randomize;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDynamicTriggerScheduler __VdynSched;

    // INTERNAL VARIABLES
    VP8__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP8___024root(VP8__Syms* symsp, const char* namep);
    ~VP8___024root();
    VL_UNCOPYABLE(VP8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
