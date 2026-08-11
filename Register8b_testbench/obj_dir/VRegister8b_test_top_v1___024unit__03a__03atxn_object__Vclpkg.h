// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister8b_test_top_v1.h for the primary calling header

#ifndef VERILATED_VREGISTER8B_TEST_TOP_V1___024UNIT__03A__03ATXN_OBJECT__VCLPKG_H_
#define VERILATED_VREGISTER8B_TEST_TOP_V1___024UNIT__03A__03ATXN_OBJECT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VRegister8b_test_top_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister8b_test_top_v1___024unit__03a__03atxn_object__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VRegister8b_test_top_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VRegister8b_test_top_v1___024unit__03a__03atxn_object__Vclpkg();
    ~VRegister8b_test_top_v1___024unit__03a__03atxn_object__Vclpkg();
    void ctor(VRegister8b_test_top_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VRegister8b_test_top_v1___024unit__03a__03atxn_object__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VRegister8b_test_top_v1__Syms;

class VRegister8b_test_top_v1___024unit__03a__03atxn_object : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__data;
    CData/*0:0*/ __PVT__enable;
    CData/*0:0*/ __PVT__reset;
    CData/*7:0*/ __PVT__data_out;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::txn_object"; }
    VlClass* clone() const { return new VRegister8b_test_top_v1___024unit__03a__03atxn_object(*this); }
    void __VnoInFunc___VBasicRand(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    void __VnoInFunc___Vrandwith_h71018274__0(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vrandwith_h71018274__0__Vfuncrtn);
    void __VnoInFunc_print(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, std::string tag);
    void __VnoInFunc_randomize(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
  public:
    VRegister8b_test_top_v1___024unit__03a__03atxn_object() = default;
    void init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
    ~VRegister8b_test_top_v1___024unit__03a__03atxn_object() {}
};


#endif  // guard
