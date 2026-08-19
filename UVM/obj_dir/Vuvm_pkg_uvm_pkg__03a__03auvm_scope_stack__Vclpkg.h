// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_SCOPE_STACK__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_SCOPE_STACK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_scope_stack__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_scope_stack__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_scope_stack__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_scope_stack__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_scope_stack : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__m_stack;
    std::string __PVT__m_arg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_scope_stack"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_scope_stack(*this); }
    void __VnoInFunc_depth(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &depth__Vfuncrtn);
    void __VnoInFunc_down(Vuvm_pkg__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_down_element(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ element);
    void __VnoInFunc_get(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get__Vfuncrtn);
    void __VnoInFunc_get_arg(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_arg__Vfuncrtn);
    void __VnoInFunc_set(Vuvm_pkg__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_arg(Vuvm_pkg__Syms* __restrict vlSymsp, std::string arg);
    void __VnoInFunc_set_arg_element(Vuvm_pkg__Syms* __restrict vlSymsp, std::string arg, IData/*31:0*/ ele);
    void __VnoInFunc_unset_arg(Vuvm_pkg__Syms* __restrict vlSymsp, std::string arg);
    void __VnoInFunc_up(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*7:0*/ separator);
    void __VnoInFunc_up_element(Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_scope_stack() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp);
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_scope_stack() {}
};


#endif  // guard
