// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vswitch_testbench_v0.h for the primary calling header

#ifndef VERILATED_VSWITCH_TESTBENCH_V0___024UNIT__03A__03ATXN_OBJECT__VCLPKG_H_
#define VERILATED_VSWITCH_TESTBENCH_V0___024UNIT__03A__03ATXN_OBJECT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vswitch_testbench_v0__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vswitch_testbench_v0___024unit__03a__03atxn_object__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vswitch_testbench_v0__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vswitch_testbench_v0___024unit__03a__03atxn_object__Vclpkg();
    ~Vswitch_testbench_v0___024unit__03a__03atxn_object__Vclpkg();
    void ctor(Vswitch_testbench_v0__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vswitch_testbench_v0___024unit__03a__03atxn_object__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vswitch_testbench_v0__Syms;

class Vswitch_testbench_v0___024unit__03a__03atxn_object : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__valid;
    CData/*7:0*/ __PVT__address;
    CData/*7:0*/ __PVT__address_a;
    CData/*7:0*/ __PVT__address_b;
    SData/*15:0*/ __PVT__data;
    SData/*15:0*/ __PVT__data_a;
    SData/*15:0*/ __PVT__data_b;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::txn_object"; }
    VlClass* clone() const { return new Vswitch_testbench_v0___024unit__03a__03atxn_object(*this); }
    void __VnoInFunc___VBasicRand(Vswitch_testbench_v0__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    void __VnoInFunc_print(Vswitch_testbench_v0__Syms* __restrict vlSymsp, std::string tag);
    void __VnoInFunc_randomize(Vswitch_testbench_v0__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vswitch_testbench_v0__Syms* __restrict vlSymsp);
  public:
    Vswitch_testbench_v0___024unit__03a__03atxn_object() = default;
    void init(Vswitch_testbench_v0__Syms* __restrict vlSymsp);
    ~Vswitch_testbench_v0___024unit__03a__03atxn_object() {}
};


#endif  // guard
