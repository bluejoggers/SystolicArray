// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ51_TBZ87__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ51_TBZ87__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher;
class VUVM_Register8b_uvm_pkg__03a__03auvm_report_object;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz51_TBz87__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz51_TBz87__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz51_TBz87__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz51_TBz87__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz51_TBz87 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_object> __PVT__m_obj;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher> __PVT__m_cb;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callback_iter__Tz51_TBz87"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz51_TBz87(*this); }
    void __VnoInFunc_first(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher> &last__Vfuncrtn);
    void __VnoInFunc_next(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher> &next__Vfuncrtn);
    void __VnoInFunc_prev(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_catcher> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz51_TBz87() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_object> obj);
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz51_TBz87() {}
};


#endif  // guard
