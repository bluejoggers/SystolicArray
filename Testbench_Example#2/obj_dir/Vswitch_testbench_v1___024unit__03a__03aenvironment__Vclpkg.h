// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vswitch_testbench_v1.h for the primary calling header

#ifndef VERILATED_VSWITCH_TESTBENCH_V1___024UNIT__03A__03AENVIRONMENT__VCLPKG_H_
#define VERILATED_VSWITCH_TESTBENCH_V1___024UNIT__03A__03AENVIRONMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vswitch_testbench_v1___024unit__03a__03adriver;
class Vswitch_testbench_v1___024unit__03a__03agenerator;
class Vswitch_testbench_v1___024unit__03a__03amonitor;
class Vswitch_testbench_v1___024unit__03a__03ascoreboard;
class Vswitch_testbench_v1_std__03a__03amailbox__Tz1;


class Vswitch_testbench_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vswitch_testbench_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg();
    ~Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg();
    void ctor(Vswitch_testbench_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vswitch_testbench_v1___024unit__03a__03aenvironment__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vswitch_testbench_v1__Syms;

class Vswitch_testbench_v1___024unit__03a__03aenvironment : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlEvent __PVT__drv_done;
    VlClassRef<Vswitch_testbench_v1___024unit__03a__03adriver> __PVT__DRV;
    VlClassRef<Vswitch_testbench_v1___024unit__03a__03agenerator> __PVT__GEN;
    VlClassRef<Vswitch_testbench_v1___024unit__03a__03amonitor> __PVT__MON;
    VlClassRef<Vswitch_testbench_v1___024unit__03a__03ascoreboard> __PVT__SCB;
    VlClassRef<Vswitch_testbench_v1_std__03a__03amailbox__Tz1> __PVT__GEN_DRV_MBX;
    VlClassRef<Vswitch_testbench_v1_std__03a__03amailbox__Tz1> __PVT__MON_SCB_MBX;
    Vswitch_testbench_v1_switch_if* __PVT__vif;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::environment"; }
    VlClass* clone() const { return new Vswitch_testbench_v1___024unit__03a__03aenvironment(*this); }
    virtual void __VnoInFunc_run(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run____Vfork_1__1(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run____Vfork_1__2(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run____Vfork_1__3(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
    void _ctor_var_reset(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
  public:
    Vswitch_testbench_v1___024unit__03a__03aenvironment() = default;
    void init(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
    ~Vswitch_testbench_v1___024unit__03a__03aenvironment() {}
};


#endif  // guard
