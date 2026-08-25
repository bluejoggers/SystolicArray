// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_SEQUENCE_REQUEST__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_SEQUENCE_REQUEST__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_std__03a__03aprocess;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__grant;
    IData/*31:0*/ __PVT__sequence_id;
    IData/*31:0*/ __PVT__request_id;
    IData/*31:0*/ __PVT__item_priority;
    IData/*31:0*/ __PVT__request;
    VlClassRef<VUVM_Activator_std__03a__03aprocess> __PVT__process_id;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> __PVT__sequence_ptr;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequence_request"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request(*this); }
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp);
    ~VUVM_Activator_uvm_pkg__03a__03auvm_sequence_request() {}
};


#endif  // guard
