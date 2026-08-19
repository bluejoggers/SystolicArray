// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_std__03a__03aprocess;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_factory;
class Vuvm_pkg_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz11;
class Vuvm_pkg_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper;
class Vuvm_pkg_uvm_pkg__03a__03auvm_phase;
class Vuvm_pkg_uvm_pkg__03a__03auvm_recorder;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base : public Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item {
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
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base>, CData/*0:0*/> __PVT__children_array;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__m_sqr_seq_ids;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> __PVT__m_tr_recorder;
    VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item>> __PVT__response_queue;
    VlClassRef<Vuvm_pkg_std__03a__03aprocess> __PVT__m_sequence_process;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40> __PVT__m_automatic_phase_objection_dap;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz11> __PVT__m_starting_phase_dap;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> __PVT__starting_phase;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> __PVT__m_set_starting_phase;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequence_base"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clear_response_queue(Vuvm_pkg__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_create_and_start_sequence_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string seq_name);
    void __VnoInFunc_create_item(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> type_var, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base> l_sequencer, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> &create_item__Vfuncrtn);
    virtual void __VnoInFunc_do_kill(Vuvm_pkg__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_do_sequence_kind(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind);
    virtual VlCoroutine __VnoInFunc_finish_item(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority);
    void __VnoInFunc_get_automatic_phase_objection(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &get_automatic_phase_objection__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_get_base_response(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> &response, IData/*31:0*/ transaction_id);
    void __VnoInFunc_get_priority(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_priority__Vfuncrtn);
    void __VnoInFunc_get_response_queue_depth(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_queue_depth__Vfuncrtn);
    void __VnoInFunc_get_response_queue_error_report_disabled(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &get_response_queue_error_report_disabled__Vfuncrtn);
    void __VnoInFunc_get_seq_kind(Vuvm_pkg__Syms* __restrict vlSymsp, std::string type_name, IData/*31:0*/ &get_seq_kind__Vfuncrtn);
    void __VnoInFunc_get_sequence(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> &get_sequence__Vfuncrtn);
    void __VnoInFunc_get_sequence_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string seq_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> &get_sequence_by_name__Vfuncrtn);
    void __VnoInFunc_get_sequence_state(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_state__Vfuncrtn);
    void __VnoInFunc_get_starting_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> &get_starting_phase__Vfuncrtn);
    void __VnoInFunc_get_tr_handle(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn);
    void __VnoInFunc_get_use_response_handler(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_response_handler__Vfuncrtn);
    VlCoroutine __VnoInFunc_grab(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_has_lock(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &has_lock__Vfuncrtn);
    void __VnoInFunc_is_blocked(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_blocked__Vfuncrtn);
    virtual void __VnoInFunc_is_item(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn);
    virtual void __VnoInFunc_is_relevant(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_relevant__Vfuncrtn);
    void __VnoInFunc_kill(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_lock(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_m_get_sqr_sequence_id(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, CData/*0:0*/ update_sequence_id, IData/*31:0*/ &m_get_sqr_sequence_id__Vfuncrtn);
    void __VnoInFunc_m_init_phase_daps(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ create);
    void __VnoInFunc_m_kill(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_safe_drop_starting_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_m_safe_raise_starting_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_m_set_sqr_sequence_id(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, IData/*31:0*/ sequence_id);
    virtual void __VnoInFunc_mid_do(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> this_item);
    void __VnoInFunc_num_sequences(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &num_sequences__Vfuncrtn);
    void __VnoInFunc_pick_sequence_setup_constraint(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_body(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_do(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> this_item);
    virtual void __VnoInFunc_post_start(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_body(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_do(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ is_item);
    virtual void __VnoInFunc_pre_start(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_put_base_response(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> response_item);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_response_handler(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_send_request(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_automatic_phase_objection(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    void __VnoInFunc_set_priority(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_response_queue_depth(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_response_queue_error_report_disabled(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    void __VnoInFunc_set_starting_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_start(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, IData/*31:0*/ this_priority, CData/*0:0*/ call_pre_post);
  private:
    VlCoroutine __VnoInFunc_start____Vfork_1__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync, CData/*0:0*/ &__VlefCall_8__get_automatic_phase_objection, CData/*0:0*/ &call_pre_post, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> &parent_sequence, CData/*0:0*/ &__VlefCall_9__get_automatic_phase_objection);
  public:
    virtual VlCoroutine __VnoInFunc_start_item(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_ungrab(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_unlock(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_use_response_handler(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ enable);
    virtual VlCoroutine __VnoInFunc_wait_for_grant(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request);
    virtual VlCoroutine __VnoInFunc_wait_for_item_done(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ transaction_id);
    virtual VlCoroutine __VnoInFunc_wait_for_relevant(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_sequence_state(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ state_mask);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base();
};


#endif  // guard
