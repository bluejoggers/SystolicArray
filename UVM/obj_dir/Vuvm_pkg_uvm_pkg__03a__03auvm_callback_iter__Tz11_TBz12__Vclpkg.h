// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ11_TBZ12__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ11_TBZ12__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_phase;
class Vuvm_pkg_uvm_pkg__03a__03auvm_phase_cb;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz11_TBz12__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz11_TBz12__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz11_TBz12__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz11_TBz12__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz11_TBz12 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> __PVT__m_obj;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase_cb> __PVT__m_cb;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callback_iter__Tz11_TBz12"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz11_TBz12(*this); }
    void __VnoInFunc_first(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase_cb> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase_cb> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase_cb> &last__Vfuncrtn);
    void __VnoInFunc_next(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase_cb> &next__Vfuncrtn);
    void __VnoInFunc_prev(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase_cb> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz11_TBz12() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> obj);
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz11_TBz12() {}
};


#endif  // guard
