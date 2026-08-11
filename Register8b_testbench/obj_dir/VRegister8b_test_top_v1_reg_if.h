// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister8b_test_top_v1.h for the primary calling header

#ifndef VERILATED_VREGISTER8B_TEST_TOP_V1_REG_IF_H_
#define VERILATED_VREGISTER8B_TEST_TOP_V1_REG_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VRegister8b_test_top_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister8b_test_top_v1_reg_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ reset;
    CData/*0:0*/ enable;
    CData/*7:0*/ data_in;
    CData/*7:0*/ data_out;

    // INTERNAL VARIABLES
    VRegister8b_test_top_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VRegister8b_test_top_v1_reg_if();
    ~VRegister8b_test_top_v1_reg_if();
    void ctor(VRegister8b_test_top_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VRegister8b_test_top_v1_reg_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
