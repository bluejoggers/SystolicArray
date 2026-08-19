// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_REG_IF_H_
#define VERILATED_VUVM_REGBLOCK_REG_IF_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_reg_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clock;
    CData/*0:0*/ reset;
    CData/*0:0*/ w_enable;
    CData/*0:0*/ r_enable;
    CData/*3:0*/ address;
    CData/*7:0*/ w_data;
    CData/*7:0*/ r_data;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_reg_if();
    ~VUVM_regblock_reg_if();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_reg_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
