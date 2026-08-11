// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister8b_test_top_v1.h for the primary calling header

#ifndef VERILATED_VREGISTER8B_TEST_TOP_V1___024UNIT__03A__03AENVIRONMENT__VCLPKG_H_
#define VERILATED_VREGISTER8B_TEST_TOP_V1___024UNIT__03A__03AENVIRONMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VRegister8b_test_top_v1___024unit__03a__03adriver;
class VRegister8b_test_top_v1___024unit__03a__03amonitor;
class VRegister8b_test_top_v1___024unit__03a__03ascoreboard;
class VRegister8b_test_top_v1_std__03a__03amailbox__Tz1;


class VRegister8b_test_top_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister8b_test_top_v1___024unit__03a__03aenvironment__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VRegister8b_test_top_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VRegister8b_test_top_v1___024unit__03a__03aenvironment__Vclpkg();
    ~VRegister8b_test_top_v1___024unit__03a__03aenvironment__Vclpkg();
    void ctor(VRegister8b_test_top_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VRegister8b_test_top_v1___024unit__03a__03aenvironment__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VRegister8b_test_top_v1__Syms;

class VRegister8b_test_top_v1___024unit__03a__03aenvironment : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VRegister8b_test_top_v1___024unit__03a__03adriver> __PVT__DRV;
    VlClassRef<VRegister8b_test_top_v1___024unit__03a__03amonitor> __PVT__MON;
    VlClassRef<VRegister8b_test_top_v1___024unit__03a__03ascoreboard> __PVT__SCB;
    VRegister8b_test_top_v1_reg_if* __PVT__virtual_if;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::environment"; }
    VlClass* clone() const { return new VRegister8b_test_top_v1___024unit__03a__03aenvironment(*this); }
    virtual void __VnoInFunc_run(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run____Vfork_1__1(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run____Vfork_1__2(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
    void _ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
  public:
    VRegister8b_test_top_v1___024unit__03a__03aenvironment() = default;
    void init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
    ~VRegister8b_test_top_v1___024unit__03a__03aenvironment() {}
};


#endif  // guard
