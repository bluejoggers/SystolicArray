// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vswitch_testbench_v0.h for the primary calling header

#ifndef VERILATED_VSWITCH_TESTBENCH_V0_SWITCH_IF_H_
#define VERILATED_VSWITCH_TESTBENCH_V0_SWITCH_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vswitch_testbench_v0__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vswitch_testbench_v0_switch_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clock;
    CData/*0:0*/ reset;
    CData/*0:0*/ valid;
    CData/*7:0*/ address;
    CData/*7:0*/ address_a;
    CData/*7:0*/ address_b;
    SData/*15:0*/ data;
    SData/*15:0*/ data_a;
    SData/*15:0*/ data_b;

    // INTERNAL VARIABLES
    Vswitch_testbench_v0__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vswitch_testbench_v0_switch_if();
    ~Vswitch_testbench_v0_switch_if();
    void ctor(Vswitch_testbench_v0__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vswitch_testbench_v0_switch_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
