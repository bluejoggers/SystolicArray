// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP10.h for the primary calling header

#ifndef VERILATED_VP10_COVER_TB_H_
#define VERILATED_VP10_COVER_TB_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
class VP10_cover_tb__03a__03acg;


class VP10__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP10_cover_tb final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ __PVT__mode;
    CData/*2:0*/ __PVT__cfg;
    CData/*0:0*/ __PVT__clk;
    CData/*1:0*/ __Vtogcov__mode;
    CData/*2:0*/ __Vtogcov__cfg;
    CData/*0:0*/ __Vtogcov__clk;
    double __VlemCall_0__get_inst_coverage__Vtcwrap_1_2;
    VlClassRef<VP10_cover_tb__03a__03acg> __PVT__cg_inst;

    // INTERNAL VARIABLES
    VP10__Syms* vlSymsp;
    const char* vlNamep;
    uint32_t __Vcoverage[17]{};

    // CONSTRUCTORS
    VP10_cover_tb();
    ~VP10_cover_tb();
    void ctor(VP10__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP10_cover_tb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
