// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP10.h for the primary calling header

#ifndef VERILATED_VP10_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VP10_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"


class VP10__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP10_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VP10__Syms* vlSymsp;
    const char* vlNamep;
    uint32_t __Vcoverage[14]{};

    // CONSTRUCTORS
    VP10_std__03a__03asemaphore__Vclpkg();
    ~VP10_std__03a__03asemaphore__Vclpkg();
    void ctor(VP10__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP10_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


class VP10__Syms;

class VP10_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    IData/*31:0*/ __PVT__m_nextKeyCount;
    QData/*63:0*/ __PVT__m_ticket;
    QData/*63:0*/ __PVT__m_nextTicket;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new VP10_std__03a__03asemaphore(*this); }
    VlCoroutine __VnoInFunc_get(VP10__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(VP10__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(VP10__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(VP10__Syms* __restrict vlSymsp);
  public:
    VP10_std__03a__03asemaphore() = default;
    void init(VP10__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    ~VP10_std__03a__03asemaphore() {}
};


#endif  // guard
