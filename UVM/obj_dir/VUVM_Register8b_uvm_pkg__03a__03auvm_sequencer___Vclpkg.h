// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_SEQUENCER___VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_SEQUENCER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__Tz100;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Register8b_uvm_pkg__03a__03auvm_port_component_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi24;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_request;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base_;
class VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_fifo__Tz26;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer___Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer___Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer___Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__Tz100> &get_type__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base___Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_ : public VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base_ {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__sequence_item_requested;
    CData/*0:0*/ __PVT__get_next_item_called;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi24> __PVT__seq_item_export;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer_"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual void __VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_item_done(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> item);
    void __VnoInFunc_item_done_get_trigger_data(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &item_done_get_trigger_data__Vfuncrtn);
    void __VnoInFunc_item_done_trigger(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> item);
    virtual void __VnoInFunc_m_find_number_driver_connections(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual void __VnoInFunc_put(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_stop_sequences(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_try_next_item(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &t);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_();
};


#endif  // guard
