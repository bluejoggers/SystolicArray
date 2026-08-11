// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vswitch_testbench_v1.h for the primary calling header

#ifndef VERILATED_VSWITCH_TESTBENCH_V1___024UNIT__03A__03ATEST__VCLPKG_H_
#define VERILATED_VSWITCH_TESTBENCH_V1___024UNIT__03A__03ATEST__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vswitch_testbench_v1___024unit__03a__03aenvironment;


class Vswitch_testbench_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vswitch_testbench_v1___024unit__03a__03atest__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vswitch_testbench_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vswitch_testbench_v1___024unit__03a__03atest__Vclpkg();
    ~Vswitch_testbench_v1___024unit__03a__03atest__Vclpkg();
    void ctor(Vswitch_testbench_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vswitch_testbench_v1___024unit__03a__03atest__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vswitch_testbench_v1__Syms;

class Vswitch_testbench_v1___024unit__03a__03atest : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vswitch_testbench_v1___024unit__03a__03aenvironment> __PVT__ENV;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::test"; }
    VlClass* clone() const { return new Vswitch_testbench_v1___024unit__03a__03atest(*this); }
    void __VnoInFunc_run(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
  public:
    Vswitch_testbench_v1___024unit__03a__03atest() = default;
    void init(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
    ~Vswitch_testbench_v1___024unit__03a__03atest() {}
};


#endif  // guard
