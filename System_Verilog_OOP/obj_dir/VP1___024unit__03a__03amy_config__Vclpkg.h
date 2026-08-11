// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP1.h for the primary calling header

#ifndef VERILATED_VP1___024UNIT__03A__03AMY_CONFIG__VCLPKG_H_
#define VERILATED_VP1___024UNIT__03A__03AMY_CONFIG__VCLPKG_H_  // guard

#include "verilated.h"


class VP1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP1___024unit__03a__03amy_config__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VP1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP1___024unit__03a__03amy_config__Vclpkg();
    ~VP1___024unit__03a__03amy_config__Vclpkg();
    void ctor(VP1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP1___024unit__03a__03amy_config__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VP1__Syms;

class VP1___024unit__03a__03amy_config : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__a_width;
    IData/*31:0*/ __PVT__d_width;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::my_config"; }
    VlClass* clone() const { return new VP1___024unit__03a__03amy_config(*this); }
    void __VnoInFunc_display(VP1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VP1__Syms* __restrict vlSymsp);
  public:
    VP1___024unit__03a__03amy_config() = default;
    void init(VP1__Syms* __restrict vlSymsp, CData/*7:0*/ a_width, IData/*31:0*/ d_width);
    ~VP1___024unit__03a__03amy_config() {}
};


#endif  // guard
