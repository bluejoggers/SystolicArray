// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_SEQUENCER__TZ59_TBZ59__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_SEQUENCER__TZ59_TBZ59__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock___024unit__03a__03areg_txn_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__Tz81;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_port_component_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi23;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequence_request;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequencer_param_base__pi24;
class VUVM_regblock_uvm_pkg__03a__03auvm_tlm_fifo__Tz59;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__Tz81> &get_type__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_sequencer_param_base__pi24__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59 : public VUVM_regblock_uvm_pkg__03a__03auvm_sequencer_param_base__pi24 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__sequence_item_requested;
    CData/*0:0*/ __PVT__get_next_item_called;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi23> __PVT__seq_item_export;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer__Tz59_TBz59"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_get(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> &t);
    virtual void __VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_item_done(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> item);
    void __VnoInFunc_item_done_get_trigger_data(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> &item_done_get_trigger_data__Vfuncrtn);
    void __VnoInFunc_item_done_trigger(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> item);
    virtual void __VnoInFunc_m_find_number_driver_connections(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> &t);
    virtual void __VnoInFunc_put(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> t);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_stop_sequences(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_try_next_item(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> &t);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_sequencer__Tz59_TBz59();
};


#endif  // guard
