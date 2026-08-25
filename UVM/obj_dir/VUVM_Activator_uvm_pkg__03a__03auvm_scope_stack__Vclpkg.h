// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_SCOPE_STACK__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_SCOPE_STACK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__m_stack;
    std::string __PVT__m_arg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_scope_stack"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack(*this); }
    void __VnoInFunc_depth(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &depth__Vfuncrtn);
    void __VnoInFunc_down(VUVM_Activator__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_down_element(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ element);
    void __VnoInFunc_get(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get__Vfuncrtn);
    void __VnoInFunc_get_arg(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_arg__Vfuncrtn);
    void __VnoInFunc_set(VUVM_Activator__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_arg(VUVM_Activator__Syms* __restrict vlSymsp, std::string arg);
    void __VnoInFunc_set_arg_element(VUVM_Activator__Syms* __restrict vlSymsp, std::string arg, IData/*31:0*/ ele);
    void __VnoInFunc_unset_arg(VUVM_Activator__Syms* __restrict vlSymsp, std::string arg);
    void __VnoInFunc_up(VUVM_Activator__Syms* __restrict vlSymsp, CData/*7:0*/ separator);
    void __VnoInFunc_up_element(VUVM_Activator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp);
    ~VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack() {}
};


#endif  // guard
