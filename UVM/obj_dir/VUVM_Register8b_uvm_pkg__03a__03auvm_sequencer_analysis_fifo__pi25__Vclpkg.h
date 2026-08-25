// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_SEQUENCER_ANALYSIS_FIFO__PI25__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_SEQUENCER_ANALYSIS_FIFO__PI25__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b___024unit__03a__03areg_txn;
class VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz85;
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi25;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_fifo__Tz61;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi25__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi25__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi25__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi25__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_fifo__Tz61__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi25 : public VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_fifo__Tz61 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz85> __PVT__analysis_export;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base> __PVT__sequencer_ptr;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer_analysis_fifo__pi25"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi25(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> t);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi25() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi25();
};


#endif  // guard
