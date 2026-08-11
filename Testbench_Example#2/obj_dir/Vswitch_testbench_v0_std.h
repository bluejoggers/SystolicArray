// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vswitch_testbench_v0.h for the primary calling header

#ifndef VERILATED_VSWITCH_TESTBENCH_V0_STD_H_
#define VERILATED_VSWITCH_TESTBENCH_V0_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vswitch_testbench_v0__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vswitch_testbench_v0_std final {
  public:

    // INTERNAL VARIABLES
    Vswitch_testbench_v0__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vswitch_testbench_v0_std();
    ~Vswitch_testbench_v0_std();
    void ctor(Vswitch_testbench_v0__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vswitch_testbench_v0_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
