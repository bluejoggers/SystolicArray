// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vswitch_testbench_v1.h for the primary calling header

#ifndef VERILATED_VSWITCH_TESTBENCH_V1___024UNIT__03A__03ADRIVER__VCLPKG_H_
#define VERILATED_VSWITCH_TESTBENCH_V1___024UNIT__03A__03ADRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vswitch_testbench_v1___024unit__03a__03atxn_object;
class Vswitch_testbench_v1_std__03a__03amailbox__Tz1;


class Vswitch_testbench_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vswitch_testbench_v1___024unit__03a__03adriver__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vswitch_testbench_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vswitch_testbench_v1___024unit__03a__03adriver__Vclpkg();
    ~Vswitch_testbench_v1___024unit__03a__03adriver__Vclpkg();
    void ctor(Vswitch_testbench_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vswitch_testbench_v1___024unit__03a__03adriver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vswitch_testbench_v1__Syms;

class Vswitch_testbench_v1___024unit__03a__03adriver : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlEvent __PVT__driver_done;
    Vswitch_testbench_v1_switch_if* __PVT__virtual_if;
    VlClassRef<Vswitch_testbench_v1_std__03a__03amailbox__Tz1> __PVT__driver_mbox;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::driver"; }
    VlClass* clone() const { return new Vswitch_testbench_v1___024unit__03a__03adriver(*this); }
    VlCoroutine __VnoInFunc_run(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(Vswitch_testbench_v1__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h052e2c7a__0);
    VlCoroutine __VnoInFunc_run____Vfork_2__0(Vswitch_testbench_v1__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_h1001d49e__0);
    VlCoroutine __VnoInFunc_run____Vfork_3__0(Vswitch_testbench_v1__Syms* __restrict vlSymsp, SData/*15:0*/ __Vintraval_h66436eac__0);
    void _ctor_var_reset(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
  public:
    Vswitch_testbench_v1___024unit__03a__03adriver() = default;
    void init(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
    ~Vswitch_testbench_v1___024unit__03a__03adriver() {}
};


#endif  // guard
