// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister8b_test_top_v1.h for the primary calling header

#ifndef VERILATED_VREGISTER8B_TEST_TOP_V1___024UNIT__03A__03ADRIVER__VCLPKG_H_
#define VERILATED_VREGISTER8B_TEST_TOP_V1___024UNIT__03A__03ADRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VRegister8b_test_top_v1___024unit__03a__03atxn_object;
class VRegister8b_test_top_v1_std__03a__03amailbox__Tz1;


class VRegister8b_test_top_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister8b_test_top_v1___024unit__03a__03adriver__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VRegister8b_test_top_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VRegister8b_test_top_v1___024unit__03a__03adriver__Vclpkg();
    ~VRegister8b_test_top_v1___024unit__03a__03adriver__Vclpkg();
    void ctor(VRegister8b_test_top_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VRegister8b_test_top_v1___024unit__03a__03adriver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VRegister8b_test_top_v1__Syms;

class VRegister8b_test_top_v1___024unit__03a__03adriver : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlEvent __PVT__driver_done;
    VRegister8b_test_top_v1_reg_if* __PVT__virtual_if;
    VlClassRef<VRegister8b_test_top_v1_std__03a__03amailbox__Tz1> __PVT__driver_mbox;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::driver"; }
    VlClass* clone() const { return new VRegister8b_test_top_v1___024unit__03a__03adriver(*this); }
    VlCoroutine __VnoInFunc_run(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h49fec966__0);
    VlCoroutine __VnoInFunc_run____Vfork_2__0(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hd4e5978c__0);
    VlCoroutine __VnoInFunc_run____Vfork_3__0(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_hf5a020bc__0);
    void _ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
  public:
    VRegister8b_test_top_v1___024unit__03a__03adriver() = default;
    void init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
    ~VRegister8b_test_top_v1___024unit__03a__03adriver() {}
};


#endif  // guard
