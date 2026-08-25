// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_RESOURCE_OPTIONS__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_RESOURCE_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_resource_options__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__auditing;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_resource_options__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_resource_options__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_resource_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_is_auditing(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auditing__Vfuncrtn);
    void __VnoInFunc_turn_off_auditing(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_auditing(VUVM_Activator__Syms* __restrict vlSymsp);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_resource_options : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_options"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_resource_options(*this); }
    VUVM_Activator_uvm_pkg__03a__03auvm_resource_options() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp) {}
    ~VUVM_Activator_uvm_pkg__03a__03auvm_resource_options() {}
};


#endif  // guard
