// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vswitch_testbench_v0.h for the primary calling header

#ifndef VERILATED_VSWITCH_TESTBENCH_V0___024UNIT__03A__03AMONITOR__VCLPKG_H_
#define VERILATED_VSWITCH_TESTBENCH_V0___024UNIT__03A__03AMONITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vswitch_testbench_v0___024unit__03a__03atxn_object;
class Vswitch_testbench_v0_std__03a__03amailbox__Tz1;
class Vswitch_testbench_v0_std__03a__03asemaphore;


class Vswitch_testbench_v0__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vswitch_testbench_v0___024unit__03a__03amonitor__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vswitch_testbench_v0__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vswitch_testbench_v0___024unit__03a__03amonitor__Vclpkg();
    ~Vswitch_testbench_v0___024unit__03a__03amonitor__Vclpkg();
    void ctor(Vswitch_testbench_v0__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vswitch_testbench_v0___024unit__03a__03amonitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vswitch_testbench_v0__Syms;

class Vswitch_testbench_v0___024unit__03a__03amonitor : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vswitch_testbench_v0_switch_if* __PVT__virtual_if;
    VlClassRef<Vswitch_testbench_v0_std__03a__03amailbox__Tz1> __PVT__monitor_mbox;
    VlClassRef<Vswitch_testbench_v0_std__03a__03asemaphore> __PVT__sema4;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::monitor"; }
    VlClass* clone() const { return new Vswitch_testbench_v0___024unit__03a__03amonitor(*this); }
    void __VnoInFunc_run(Vswitch_testbench_v0__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(Vswitch_testbench_v0__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run____Vfork_1__1(Vswitch_testbench_v0__Syms* __restrict vlSymsp);
  public:
    VlCoroutine __VnoInFunc_sample_port(Vswitch_testbench_v0__Syms* __restrict vlSymsp, std::string tag);
  private:
    void _ctor_var_reset(Vswitch_testbench_v0__Syms* __restrict vlSymsp);
  public:
    Vswitch_testbench_v0___024unit__03a__03amonitor() = default;
    void init(Vswitch_testbench_v0__Syms* __restrict vlSymsp);
    ~Vswitch_testbench_v0___024unit__03a__03amonitor() {}
};


#endif  // guard
