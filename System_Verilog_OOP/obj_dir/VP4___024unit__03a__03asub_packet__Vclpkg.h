// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP4.h for the primary calling header

#ifndef VERILATED_VP4___024UNIT__03A__03ASUB_PACKET__VCLPKG_H_
#define VERILATED_VP4___024UNIT__03A__03ASUB_PACKET__VCLPKG_H_  // guard

#include "verilated.h"
class VP4___024unit__03a__03apacket;


class VP4__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP4___024unit__03a__03asub_packet__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VP4__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP4___024unit__03a__03asub_packet__Vclpkg();
    ~VP4___024unit__03a__03asub_packet__Vclpkg();
    void ctor(VP4__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP4___024unit__03a__03asub_packet__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VP4___024unit__03a__03apacket__Vclpkg.h"

class VP4__Syms;

class VP4___024unit__03a__03asub_packet : public VP4___024unit__03a__03apacket {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__data;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::sub_packet"; }
    VlClass* clone() const { return new VP4___024unit__03a__03asub_packet(*this); }
    void __VnoInFunc_display(VP4__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VP4__Syms* __restrict vlSymsp);
  public:
    VP4___024unit__03a__03asub_packet() = default;
    void init(VP4__Syms* __restrict vlSymsp, IData/*31:0*/ address, IData/*31:0*/ data);
    virtual ~VP4___024unit__03a__03asub_packet();
};


#endif  // guard
