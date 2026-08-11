// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vswitch_testbench_v1.h for the primary calling header

#ifndef VERILATED_VSWITCH_TESTBENCH_V1___024ROOT_H_
#define VERILATED_VSWITCH_TESTBENCH_V1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vswitch_testbench_v1___024unit;
class Vswitch_testbench_v1___024unit__03a__03adriver__Vclpkg;
class Vswitch_testbench_v1___024unit__03a__03aenvironment;
class Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg;
class Vswitch_testbench_v1___024unit__03a__03agenerator__Vclpkg;
class Vswitch_testbench_v1___024unit__03a__03amonitor__Vclpkg;
class Vswitch_testbench_v1___024unit__03a__03ascoreboard__Vclpkg;
class Vswitch_testbench_v1___024unit__03a__03atest;
class Vswitch_testbench_v1___024unit__03a__03atest__Vclpkg;
class Vswitch_testbench_v1___024unit__03a__03atxn_object__Vclpkg;
class Vswitch_testbench_v1_std;
class Vswitch_testbench_v1_std__03a__03amailbox__Tz1__Vclpkg;
class Vswitch_testbench_v1_std__03a__03aprocess__Vclpkg;
class Vswitch_testbench_v1_std__03a__03asemaphore__Vclpkg;
class Vswitch_testbench_v1_switch_if;


class Vswitch_testbench_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vswitch_testbench_v1___024root final {
  public:
    // CELLS
    Vswitch_testbench_v1___024unit* __PVT____024unit;
    Vswitch_testbench_v1_std* __PVT__std;
    Vswitch_testbench_v1_switch_if* __PVT__tb__DOT__sif;
    Vswitch_testbench_v1___024unit__03a__03atxn_object__Vclpkg* __024unit__03a__03atxn_object__Vclpkg;
    Vswitch_testbench_v1___024unit__03a__03adriver__Vclpkg* __024unit__03a__03adriver__Vclpkg;
    Vswitch_testbench_v1___024unit__03a__03agenerator__Vclpkg* __024unit__03a__03agenerator__Vclpkg;
    Vswitch_testbench_v1___024unit__03a__03amonitor__Vclpkg* __024unit__03a__03amonitor__Vclpkg;
    Vswitch_testbench_v1___024unit__03a__03ascoreboard__Vclpkg* __024unit__03a__03ascoreboard__Vclpkg;
    Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg* __024unit__03a__03aenvironment__Vclpkg;
    Vswitch_testbench_v1___024unit__03a__03atest__Vclpkg* __024unit__03a__03atest__Vclpkg;
    Vswitch_testbench_v1_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vswitch_testbench_v1_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vswitch_testbench_v1_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clock;
    CData/*7:0*/ tb__DOT____Vcellout__DUT__addr_b;
    CData/*7:0*/ tb__DOT____Vcellout__DUT__addr_a;
    CData/*0:0*/ __VnbaEventTrigger;
    CData/*0:0*/ __VdlySet__reset__v0_hierarchical;
    CData/*0:0*/ __VdlySet__reset__v1_hierarchical;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clock__0;
    CData/*7:0*/ __Vtrigprevvif_act_TOP__tb__DOT__sif__address;
    CData/*0:0*/ __Vtrigprevvif_act_TOP__tb__DOT__sif__valid;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb__DOT____Vcellout__DUT__data_b;
    SData/*15:0*/ tb__DOT____Vcellout__DUT__data_a;
    SData/*15:0*/ __Vtrigprevvif_act_TOP__tb__DOT__sif__data;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlDynamicTriggerScheduler __VdynSched;
    VlEvent __VnbaEvent;

    // INTERNAL VARIABLES
    Vswitch_testbench_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vswitch_testbench_v1___024root(Vswitch_testbench_v1__Syms* symsp, const char* namep);
    ~Vswitch_testbench_v1___024root();
    VL_UNCOPYABLE(Vswitch_testbench_v1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
