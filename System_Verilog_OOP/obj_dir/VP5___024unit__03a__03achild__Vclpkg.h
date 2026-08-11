// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP5.h for the primary calling header

#ifndef VERILATED_VP5___024UNIT__03A__03ACHILD__VCLPKG_H_
#define VERILATED_VP5___024UNIT__03A__03ACHILD__VCLPKG_H_  // guard

#include "verilated.h"
class VP5___024unit__03a__03abase;


class VP5__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP5___024unit__03a__03achild__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VP5__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP5___024unit__03a__03achild__Vclpkg();
    ~VP5___024unit__03a__03achild__Vclpkg();
    void ctor(VP5__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP5___024unit__03a__03achild__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VP5___024unit__03a__03abase__Vclpkg.h"

class VP5__Syms;

class VP5___024unit__03a__03achild : public VP5___024unit__03a__03abase {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__en;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::child"; }
    VlClass* clone() const { return new VP5___024unit__03a__03achild(*this); }
    void __VnoInFunc_display(VP5__Syms* __restrict vlSymsp, std::string tag);
  private:
    void _ctor_var_reset(VP5__Syms* __restrict vlSymsp);
  public:
    VP5___024unit__03a__03achild() = default;
    void init(VP5__Syms* __restrict vlSymsp, CData/*7:0*/ address, CData/*7:0*/ data, CData/*0:0*/ en);
    virtual ~VP5___024unit__03a__03achild();
};


#endif  // guard
