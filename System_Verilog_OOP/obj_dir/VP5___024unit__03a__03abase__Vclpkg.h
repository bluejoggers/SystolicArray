// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP5.h for the primary calling header

#ifndef VERILATED_VP5___024UNIT__03A__03ABASE__VCLPKG_H_
#define VERILATED_VP5___024UNIT__03A__03ABASE__VCLPKG_H_  // guard

#include "verilated.h"


class VP5__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP5___024unit__03a__03abase__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VP5__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP5___024unit__03a__03abase__Vclpkg();
    ~VP5___024unit__03a__03abase__Vclpkg();
    void ctor(VP5__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP5___024unit__03a__03abase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VP5__Syms;

class VP5___024unit__03a__03abase : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__address;
    CData/*7:0*/ __PVT__data;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::base"; }
    VlClass* clone() const { return new VP5___024unit__03a__03abase(*this); }
    virtual void __VnoInFunc_display(VP5__Syms* __restrict vlSymsp, std::string tag);
  private:
    void _ctor_var_reset(VP5__Syms* __restrict vlSymsp);
  public:
    VP5___024unit__03a__03abase() = default;
    void init(VP5__Syms* __restrict vlSymsp, CData/*7:0*/ address, CData/*7:0*/ data);
    virtual ~VP5___024unit__03a__03abase();
};


#endif  // guard
