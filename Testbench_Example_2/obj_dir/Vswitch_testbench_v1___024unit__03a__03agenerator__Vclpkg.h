// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vswitch_testbench_v1.h for the primary calling header

#ifndef VERILATED_VSWITCH_TESTBENCH_V1___024UNIT__03A__03AGENERATOR__VCLPKG_H_
#define VERILATED_VSWITCH_TESTBENCH_V1___024UNIT__03A__03AGENERATOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vswitch_testbench_v1___024unit__03a__03atxn_object;
class Vswitch_testbench_v1_std__03a__03amailbox__Tz1;


class Vswitch_testbench_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vswitch_testbench_v1___024unit__03a__03agenerator__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vswitch_testbench_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vswitch_testbench_v1___024unit__03a__03agenerator__Vclpkg();
    ~Vswitch_testbench_v1___024unit__03a__03agenerator__Vclpkg();
    void ctor(Vswitch_testbench_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vswitch_testbench_v1___024unit__03a__03agenerator__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vswitch_testbench_v1__Syms;

class Vswitch_testbench_v1___024unit__03a__03agenerator : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__num_txns;
    VlEvent __PVT__generator_done;
    VlClassRef<Vswitch_testbench_v1_std__03a__03amailbox__Tz1> __PVT__generator_mbox;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::generator"; }
    VlClass* clone() const { return new Vswitch_testbench_v1___024unit__03a__03agenerator(*this); }
    VlCoroutine __VnoInFunc_run(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
  public:
    Vswitch_testbench_v1___024unit__03a__03agenerator() = default;
    void init(Vswitch_testbench_v1__Syms* __restrict vlSymsp);
    ~Vswitch_testbench_v1___024unit__03a__03agenerator() {}
};


#endif  // guard
