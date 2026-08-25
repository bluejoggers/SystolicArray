// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_SCOPE_STACK__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_SCOPE_STACK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__m_stack;
    std::string __PVT__m_arg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_scope_stack"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack(*this); }
    void __VnoInFunc_depth(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &depth__Vfuncrtn);
    void __VnoInFunc_down(VUVM_Register8b__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_down_element(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ element);
    void __VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get__Vfuncrtn);
    void __VnoInFunc_get_arg(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_arg__Vfuncrtn);
    void __VnoInFunc_set(VUVM_Register8b__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_arg(VUVM_Register8b__Syms* __restrict vlSymsp, std::string arg);
    void __VnoInFunc_set_arg_element(VUVM_Register8b__Syms* __restrict vlSymsp, std::string arg, IData/*31:0*/ ele);
    void __VnoInFunc_unset_arg(VUVM_Register8b__Syms* __restrict vlSymsp, std::string arg);
    void __VnoInFunc_up(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*7:0*/ separator);
    void __VnoInFunc_up_element(VUVM_Register8b__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack() {}
};


#endif  // guard
