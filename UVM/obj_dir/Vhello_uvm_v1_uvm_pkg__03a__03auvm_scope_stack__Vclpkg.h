// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_SCOPE_STACK__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_SCOPE_STACK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__m_stack;
    std::string __PVT__m_arg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_scope_stack"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack(*this); }
    void __VnoInFunc_depth(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &depth__Vfuncrtn);
    void __VnoInFunc_down(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_down_element(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ element);
    void __VnoInFunc_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get__Vfuncrtn);
    void __VnoInFunc_get_arg(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_arg__Vfuncrtn);
    void __VnoInFunc_set(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_arg(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string arg);
    void __VnoInFunc_set_arg_element(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string arg, IData/*31:0*/ ele);
    void __VnoInFunc_unset_arg(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string arg);
    void __VnoInFunc_up(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*7:0*/ separator);
    void __VnoInFunc_up_element(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack() = default;
    void init(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack() {}
};


#endif  // guard
