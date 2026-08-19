// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_SEQUENCER__TZ114_TBZ114__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_SEQUENCER__TZ114_TBZ114__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__Tz123;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_port_component_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_reg_item;
class VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi34;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequence_request;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz114_TBz114;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequencer_param_base__pi35;
class VUVM_regblock_uvm_pkg__03a__03auvm_tlm_fifo__Tz114;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz114_TBz114__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz114_TBz114__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz114_TBz114__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz114_TBz114__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__Tz123> &get_type__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_sequencer_param_base__pi35__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz114_TBz114 : public VUVM_regblock_uvm_pkg__03a__03auvm_sequencer_param_base__pi35 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__sequence_item_requested;
    CData/*0:0*/ __PVT__get_next_item_called;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi34> __PVT__seq_item_export;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer__Tz114_TBz114"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz114_TBz114(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_item_done(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> item);
    void __VnoInFunc_item_done_get_trigger_data(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> &item_done_get_trigger_data__Vfuncrtn);
    void __VnoInFunc_item_done_trigger(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> item);
    virtual void __VnoInFunc_m_find_number_driver_connections(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_put(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_stop_sequences(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_try_next_item(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> &t);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz114_TBz114() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz114_TBz114();
};


#endif  // guard
