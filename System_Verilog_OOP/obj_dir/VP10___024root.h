// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP10.h for the primary calling header

#ifndef VERILATED_VP10___024ROOT_H_
#define VERILATED_VP10___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
class VP10_cover_tb;
class VP10_cover_tb__03a__03acg__Vclpkg;
class VP10_std;
class VP10_std__03a__03aprocess__Vclpkg;
class VP10_std__03a__03asemaphore__Vclpkg;


class VP10__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP10___024root final {
  public:
    // CELLS
    VP10_cover_tb* __PVT__cover_tb;
    VP10_std* __PVT__std;
    VP10_cover_tb__03a__03acg__Vclpkg* cover_tb__03a__03acg__Vclpkg;
    VP10_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    VP10_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cover_tb____PVT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h5439cdbc__0;
    VlDynamicTriggerScheduler __VdynSched;

    // INTERNAL VARIABLES
    VP10__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP10___024root(VP10__Syms* symsp, const char* namep);
    ~VP10___024root();
    VL_UNCOPYABLE(VP10___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
