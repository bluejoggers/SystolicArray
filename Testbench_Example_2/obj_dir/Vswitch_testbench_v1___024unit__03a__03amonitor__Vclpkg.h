// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vswitch_testbench_v1.h for the primary calling header

#ifndef VERILATED_VSWITCH_TESTBENCH_V1___024UNIT__03A__03AMONITOR__VCLPKG_H_
#define VERILATED_VSWITCH_TESTBENCH_V1___024UNIT__03A__03AMONITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vswitch_testbench_v1___024unit__03a__03atxn_object;
class Vswitch_testbench_v1_std__03a__03amailbox__Tz1;


class Vswitch_testbench_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vswitch_testbench_v1___024unit__03a__03amonitor__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vswitch_testbench_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vswitch_testbench_v1___024unit__03a__03amonitor__Vclpkg();
    ~Vswitch_testbench_v1___024unit__03a__03amonitor__Vclpkg();
    void ctor(Vswitch_testbench_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vswitch_testbench_v1___024unit__03a__03amonitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vswitch_testbench_v1__Syms;

class Vswitch_testbench_v1___024unit__03a__03amonitor : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vswitch_testbench_v1_std__03a__03amailbox__Tz1> __PVT__monitor_mbox;
    Vswitch_testbench_v1_switch_if* __PVT__virtual_if;
    VlQueue<VlClassRef<Vswitch_testbench_v1___024unit__03a__03atxn_object>> __PVT__pipeline_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::monitor"; }
    VlClass* clone() const { return new Vswitch_testbench_v1___024unit__03a__03amonitor(*this); }
    VlCoroutine __VnoInFunc_run(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_sample_port(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
  public:
    Vswitch_testbench_v1___024unit__03a__03amonitor() = default;
    void init(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
    ~Vswitch_testbench_v1___024unit__03a__03amonitor() {}
};


#endif  // guard
