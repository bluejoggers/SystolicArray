// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister8b_test_top_v1.h for the primary calling header

#ifndef VERILATED_VREGISTER8B_TEST_TOP_V1_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VREGISTER8B_TEST_TOP_V1_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VRegister8b_test_top_v1___024unit__03a__03atxn_object;


class VRegister8b_test_top_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister8b_test_top_v1_std__03a__03amailbox__Tz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VRegister8b_test_top_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VRegister8b_test_top_v1_std__03a__03amailbox__Tz1__Vclpkg();
    ~VRegister8b_test_top_v1_std__03a__03amailbox__Tz1__Vclpkg();
    void ctor(VRegister8b_test_top_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VRegister8b_test_top_v1_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VRegister8b_test_top_v1__Syms;

class VRegister8b_test_top_v1_std__03a__03amailbox__Tz1 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atxn_object>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz1"; }
    VlClass* clone() const { return new VRegister8b_test_top_v1_std__03a__03amailbox__Tz1(*this); }
    VlCoroutine __VnoInFunc_get(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atxn_object> &message);
    void __VnoInFunc_num(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atxn_object> &message);
    VlCoroutine __VnoInFunc_put(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atxn_object> message);
    void __VnoInFunc_try_get(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atxn_object> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atxn_object> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atxn_object> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
  public:
    VRegister8b_test_top_v1_std__03a__03amailbox__Tz1() = default;
    void init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    ~VRegister8b_test_top_v1_std__03a__03amailbox__Tz1() {}
};


#endif  // guard
