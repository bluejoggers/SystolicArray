// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_FACTORY_QUEUE_CLASS__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_FACTORY_QUEUE_CLASS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_factory_override;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_factory_queue_class__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_factory_queue_class__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_factory_queue_class__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_factory_queue_class__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_factory_queue_class : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_factory_override>> __PVT__queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_factory_queue_class"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_factory_queue_class(*this); }
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_factory_queue_class() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp);
    ~VUVM_Activator_uvm_pkg__03a__03auvm_factory_queue_class() {}
};


#endif  // guard
