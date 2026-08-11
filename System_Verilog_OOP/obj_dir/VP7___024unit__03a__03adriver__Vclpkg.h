// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP7.h for the primary calling header

#ifndef VERILATED_VP7___024UNIT__03A__03ADRIVER__VCLPKG_H_
#define VERILATED_VP7___024UNIT__03A__03ADRIVER__VCLPKG_H_  // guard

#include "verilated.h"
class VP7___024unit__03a__03acomponent;


class VP7__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP7___024unit__03a__03adriver__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VP7__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP7___024unit__03a__03adriver__Vclpkg();
    ~VP7___024unit__03a__03adriver__Vclpkg();
    void ctor(VP7__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP7___024unit__03a__03adriver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VP7___024unit__03a__03acomponent__Vclpkg.h"

class VP7__Syms;

class VP7___024unit__03a__03adriver : public VP7___024unit__03a__03acomponent {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::driver"; }
    VlClass* clone() const { return new VP7___024unit__03a__03adriver(*this); }
    void __VnoInFunc_run(VP7__Syms* __restrict vlSymsp);
    VP7___024unit__03a__03adriver() = default;
    void init(VP7__Syms* __restrict vlSymsp);
    virtual ~VP7___024unit__03a__03adriver();
};


#endif  // guard
