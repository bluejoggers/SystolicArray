// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TOP_DOWN_VISITOR_ADAPTER___VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TOP_DOWN_VISITOR_ADAPTER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_structure_proxy_;
class VUVM_Register8b_uvm_pkg__03a__03auvm_visitor_;
class VUVM_Register8b_uvm_pkg__03a__03auvm_visitor_adapter_;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_visitor_adapter___Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_top_down_visitor_adapter_ : public VUVM_Register8b_uvm_pkg__03a__03auvm_visitor_adapter_ {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_top_down_visitor_adapter_"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_top_down_visitor_adapter_(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_accept(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> s, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_visitor_> v, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_structure_proxy_> p, CData/*0:0*/ invoke_begin_end);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VUVM_Register8b_uvm_pkg__03a__03auvm_top_down_visitor_adapter_() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_top_down_visitor_adapter_();
};


#endif  // guard
