// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP8.h for the primary calling header

#ifndef VERILATED_VP8___024UNIT__03A__03AMYPACKET__VCLPKG_H_
#define VERILATED_VP8___024UNIT__03A__03AMYPACKET__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VP8__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP8___024unit__03a__03amypacket__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VP8__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP8___024unit__03a__03amypacket__Vclpkg();
    ~VP8___024unit__03a__03amypacket__Vclpkg();
    void ctor(VP8__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP8___024unit__03a__03amypacket__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VP8__Syms;

class VP8___024unit__03a__03amypacket : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ __PVT__mode;
    CData/*2:0*/ __PVT__key;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::mypacket"; }
    VlClass* clone() const { return new VP8___024unit__03a__03amypacket(*this); }
    void __VnoInFunc___VBasicRand(VP8__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VP8__Syms* __restrict vlSymsp);
    void __VnoInFunc_display(VP8__Syms* __restrict vlSymsp);
    void __VnoInFunc_key_c_setup_constraint(VP8__Syms* __restrict vlSymsp);
    void __VnoInFunc_mode_c_setup_constraint(VP8__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(VP8__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VP8__Syms* __restrict vlSymsp);
  public:
    VP8___024unit__03a__03amypacket() = default;
    void init(VP8__Syms* __restrict vlSymsp);
    ~VP8___024unit__03a__03amypacket() {}
};


#endif  // guard
