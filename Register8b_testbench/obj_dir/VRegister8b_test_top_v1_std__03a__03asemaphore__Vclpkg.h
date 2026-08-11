// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister8b_test_top_v1.h for the primary calling header

#ifndef VERILATED_VREGISTER8B_TEST_TOP_V1_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VREGISTER8B_TEST_TOP_V1_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VRegister8b_test_top_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister8b_test_top_v1_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VRegister8b_test_top_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VRegister8b_test_top_v1_std__03a__03asemaphore__Vclpkg();
    ~VRegister8b_test_top_v1_std__03a__03asemaphore__Vclpkg();
    void ctor(VRegister8b_test_top_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VRegister8b_test_top_v1_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VRegister8b_test_top_v1__Syms;

class VRegister8b_test_top_v1_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    IData/*31:0*/ __PVT__m_nextKeyCount;
    QData/*63:0*/ __PVT__m_ticket;
    QData/*63:0*/ __PVT__m_nextTicket;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new VRegister8b_test_top_v1_std__03a__03asemaphore(*this); }
    VlCoroutine __VnoInFunc_get(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
  public:
    VRegister8b_test_top_v1_std__03a__03asemaphore() = default;
    void init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    ~VRegister8b_test_top_v1_std__03a__03asemaphore() {}
};


#endif  // guard
