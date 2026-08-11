// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister8b_test_top_v1.h for the primary calling header

#ifndef VERILATED_VREGISTER8B_TEST_TOP_V1___024ROOT_H_
#define VERILATED_VREGISTER8B_TEST_TOP_V1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VRegister8b_test_top_v1___024unit;
class VRegister8b_test_top_v1___024unit__03a__03adriver__Vclpkg;
class VRegister8b_test_top_v1___024unit__03a__03aenvironment;
class VRegister8b_test_top_v1___024unit__03a__03aenvironment__Vclpkg;
class VRegister8b_test_top_v1___024unit__03a__03amonitor__Vclpkg;
class VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg;
class VRegister8b_test_top_v1___024unit__03a__03atest;
class VRegister8b_test_top_v1___024unit__03a__03atest__Vclpkg;
class VRegister8b_test_top_v1___024unit__03a__03atxn_object__Vclpkg;
class VRegister8b_test_top_v1_reg_if;
class VRegister8b_test_top_v1_std;
class VRegister8b_test_top_v1_std__03a__03amailbox__Tz1__Vclpkg;
class VRegister8b_test_top_v1_std__03a__03aprocess__Vclpkg;
class VRegister8b_test_top_v1_std__03a__03asemaphore__Vclpkg;


class VRegister8b_test_top_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister8b_test_top_v1___024root final {
  public:
    // CELLS
    VRegister8b_test_top_v1___024unit* __PVT____024unit;
    VRegister8b_test_top_v1_std* __PVT__std;
    VRegister8b_test_top_v1_reg_if* __PVT__tb__DOT__rif;
    VRegister8b_test_top_v1___024unit__03a__03atxn_object__Vclpkg* __024unit__03a__03atxn_object__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03adriver__Vclpkg* __024unit__03a__03adriver__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03amonitor__Vclpkg* __024unit__03a__03amonitor__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg* __024unit__03a__03ascoreboard__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03aenvironment__Vclpkg* __024unit__03a__03aenvironment__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03atest__Vclpkg* __024unit__03a__03atest__Vclpkg;
    VRegister8b_test_top_v1_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    VRegister8b_test_top_v1_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    VRegister8b_test_top_v1_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk;
    CData/*7:0*/ tb__DOT____Vcellout__DUT__data_out;
    CData/*0:0*/ __VnbaEventTrigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
    CData/*7:0*/ __Vtrigprevvif_act_TOP__tb__DOT__rif__data_in;
    CData/*0:0*/ __Vtrigprevvif_act_TOP__tb__DOT__rif__enable;
    CData/*0:0*/ __Vtrigprevvif_act_TOP__tb__DOT__rif__reset;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlDynamicTriggerScheduler __VdynSched;
    VlEvent __VnbaEvent;

    // INTERNAL VARIABLES
    VRegister8b_test_top_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VRegister8b_test_top_v1___024root(VRegister8b_test_top_v1__Syms* symsp, const char* namep);
    ~VRegister8b_test_top_v1___024root();
    VL_UNCOPYABLE(VRegister8b_test_top_v1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
