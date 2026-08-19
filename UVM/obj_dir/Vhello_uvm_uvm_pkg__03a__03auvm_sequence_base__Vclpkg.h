// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_std__03a__03aprocess;
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_factory;
class Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz11;
class Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vhello_uvm_uvm_pkg__03a__03auvm_phase;
class Vhello_uvm_uvm_pkg__03a__03auvm_recorder;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_tr_stream;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base : public Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__response_queue_error_report_disabled;
    CData/*0:0*/ __PVT__do_not_randomize;
    CData/*0:0*/ __PVT__m_use_response_handler;
    CData/*0:0*/ __PVT__is_rel_default;
    CData/*0:0*/ __PVT__wait_rel_default;
    CData/*0:0*/ __PVT__m_warn_deprecated_set;
    IData/*31:0*/ __PVT__m_sequence_state;
    IData/*31:0*/ __PVT__m_next_transaction_id;
    IData/*31:0*/ __PVT__m_priority;
    IData/*31:0*/ __PVT__m_wait_for_grant_semaphore;
    IData/*31:0*/ __PVT__response_queue_depth;
    IData/*31:0*/ __PVT__seq_kind;
    VlAssocArray<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>, CData/*0:0*/> __PVT__children_array;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__m_sqr_seq_ids;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_recorder> __PVT__m_tr_recorder;
    VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item>> __PVT__response_queue;
    VlClassRef<Vhello_uvm_std__03a__03aprocess> __PVT__m_sequence_process;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40> __PVT__m_automatic_phase_objection_dap;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz11> __PVT__m_starting_phase_dap;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> __PVT__starting_phase;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> __PVT__m_set_starting_phase;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequence_base"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clear_response_queue(Vhello_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_create_and_start_sequence_by_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string seq_name);
    void __VnoInFunc_create_item(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> type_var, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> l_sequencer, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &create_item__Vfuncrtn);
    virtual void __VnoInFunc_do_kill(Vhello_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_do_sequence_kind(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind);
    virtual VlCoroutine __VnoInFunc_finish_item(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority);
    void __VnoInFunc_get_automatic_phase_objection(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_automatic_phase_objection__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_get_base_response(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &response, IData/*31:0*/ transaction_id);
    void __VnoInFunc_get_priority(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_priority__Vfuncrtn);
    void __VnoInFunc_get_response_queue_depth(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_queue_depth__Vfuncrtn);
    void __VnoInFunc_get_response_queue_error_report_disabled(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_response_queue_error_report_disabled__Vfuncrtn);
    void __VnoInFunc_get_seq_kind(Vhello_uvm__Syms* __restrict vlSymsp, std::string type_name, IData/*31:0*/ &get_seq_kind__Vfuncrtn);
    void __VnoInFunc_get_sequence(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> &get_sequence__Vfuncrtn);
    void __VnoInFunc_get_sequence_by_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string seq_name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> &get_sequence_by_name__Vfuncrtn);
    void __VnoInFunc_get_sequence_state(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_state__Vfuncrtn);
    void __VnoInFunc_get_starting_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> &get_starting_phase__Vfuncrtn);
    void __VnoInFunc_get_tr_handle(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn);
    void __VnoInFunc_get_use_response_handler(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_response_handler__Vfuncrtn);
    VlCoroutine __VnoInFunc_grab(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_has_lock(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &has_lock__Vfuncrtn);
    void __VnoInFunc_is_blocked(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_blocked__Vfuncrtn);
    virtual void __VnoInFunc_is_item(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn);
    virtual void __VnoInFunc_is_relevant(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_relevant__Vfuncrtn);
    void __VnoInFunc_kill(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_lock(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_m_get_sqr_sequence_id(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, CData/*0:0*/ update_sequence_id, IData/*31:0*/ &m_get_sqr_sequence_id__Vfuncrtn);
    void __VnoInFunc_m_init_phase_daps(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ create);
    void __VnoInFunc_m_kill(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_safe_drop_starting_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_m_safe_raise_starting_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_m_set_sqr_sequence_id(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, IData/*31:0*/ sequence_id);
    virtual void __VnoInFunc_mid_do(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> this_item);
    void __VnoInFunc_num_sequences(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &num_sequences__Vfuncrtn);
    void __VnoInFunc_pick_sequence_setup_constraint(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_body(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_do(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> this_item);
    virtual void __VnoInFunc_post_start(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_body(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_do(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ is_item);
    virtual void __VnoInFunc_pre_start(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_put_base_response(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> response_item);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_response_handler(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_send_request(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_automatic_phase_objection(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    void __VnoInFunc_set_priority(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_response_queue_depth(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_response_queue_error_report_disabled(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    void __VnoInFunc_set_starting_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_start(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, IData/*31:0*/ this_priority, CData/*0:0*/ call_pre_post);
  private:
    VlCoroutine __VnoInFunc_start____Vfork_1__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync, CData/*0:0*/ &__VlefCall_8__get_automatic_phase_objection, CData/*0:0*/ &call_pre_post, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> &parent_sequence, CData/*0:0*/ &__VlefCall_9__get_automatic_phase_objection);
  public:
    virtual VlCoroutine __VnoInFunc_start_item(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_ungrab(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_unlock(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_use_response_handler(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ enable);
    virtual VlCoroutine __VnoInFunc_wait_for_grant(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request);
    virtual VlCoroutine __VnoInFunc_wait_for_item_done(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ transaction_id);
    virtual VlCoroutine __VnoInFunc_wait_for_relevant(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_sequence_state(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ state_mask);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base();
};


#endif  // guard
