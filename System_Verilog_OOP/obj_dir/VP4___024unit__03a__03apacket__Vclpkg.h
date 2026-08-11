// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP4.h for the primary calling header

#ifndef VERILATED_VP4___024UNIT__03A__03APACKET__VCLPKG_H_
#define VERILATED_VP4___024UNIT__03A__03APACKET__VCLPKG_H_  // guard

#include "verilated.h"


class VP4__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP4___024unit__03a__03apacket__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VP4__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP4___024unit__03a__03apacket__Vclpkg();
    ~VP4___024unit__03a__03apacket__Vclpkg();
    void ctor(VP4__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP4___024unit__03a__03apacket__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VP4__Syms;

class VP4___024unit__03a__03apacket : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__address;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::packet"; }
    VlClass* clone() const { return new VP4___024unit__03a__03apacket(*this); }
    void __VnoInFunc_display(VP4__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VP4__Syms* __restrict vlSymsp);
  public:
    VP4___024unit__03a__03apacket() = default;
    void init(VP4__Syms* __restrict vlSymsp, IData/*31:0*/ address);
    virtual ~VP4___024unit__03a__03apacket();
};


#endif  // guard
