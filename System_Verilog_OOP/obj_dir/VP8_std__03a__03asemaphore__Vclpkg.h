// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP8.h for the primary calling header

#ifndef VERILATED_VP8_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VP8_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VP8__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP8_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VP8__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP8_std__03a__03asemaphore__Vclpkg();
    ~VP8_std__03a__03asemaphore__Vclpkg();
    void ctor(VP8__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP8_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VP8__Syms;

class VP8_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    IData/*31:0*/ __PVT__m_nextKeyCount;
    QData/*63:0*/ __PVT__m_ticket;
    QData/*63:0*/ __PVT__m_nextTicket;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new VP8_std__03a__03asemaphore(*this); }
    VlCoroutine __VnoInFunc_get(VP8__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(VP8__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(VP8__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(VP8__Syms* __restrict vlSymsp);
  public:
    VP8_std__03a__03asemaphore() = default;
    void init(VP8__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    ~VP8_std__03a__03asemaphore() {}
};


#endif  // guard
