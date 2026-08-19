// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_SEQUENCER_ANALYSIS_FIFO___VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_SEQUENCER_ANALYSIS_FIFO___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83;
class Vhello_uvm_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_tlm_fifo__Tz42;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo___Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo___Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo___Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_tlm_fifo__Tz42__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_ : public Vhello_uvm_uvm_pkg__03a__03auvm_tlm_fifo__Tz42 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83> __PVT__analysis_export;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> __PVT__sequencer_ptr;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer_analysis_fifo_"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> t);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_();
};


#endif  // guard
