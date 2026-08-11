// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister8b_test_top_v1.h for the primary calling header

#ifndef VERILATED_VREGISTER8B_TEST_TOP_V1___024UNIT__03A__03AMONITOR__VCLPKG_H_
#define VERILATED_VREGISTER8B_TEST_TOP_V1___024UNIT__03A__03AMONITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VRegister8b_test_top_v1___024unit__03a__03atxn_object;
class VRegister8b_test_top_v1_std__03a__03amailbox__Tz1;


class VRegister8b_test_top_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister8b_test_top_v1___024unit__03a__03amonitor__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VRegister8b_test_top_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VRegister8b_test_top_v1___024unit__03a__03amonitor__Vclpkg();
    ~VRegister8b_test_top_v1___024unit__03a__03amonitor__Vclpkg();
    void ctor(VRegister8b_test_top_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VRegister8b_test_top_v1___024unit__03a__03amonitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VRegister8b_test_top_v1__Syms;

class VRegister8b_test_top_v1___024unit__03a__03amonitor : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VRegister8b_test_top_v1_reg_if* __PVT__virtual_if;
    VlClassRef<VRegister8b_test_top_v1_std__03a__03amailbox__Tz1> __PVT__monitor_mbox;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::monitor"; }
    VlClass* clone() const { return new VRegister8b_test_top_v1___024unit__03a__03amonitor(*this); }
    VlCoroutine __VnoInFunc_run(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
  public:
    VRegister8b_test_top_v1___024unit__03a__03amonitor() = default;
    void init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
    ~VRegister8b_test_top_v1___024unit__03a__03amonitor() {}
};


#endif  // guard
