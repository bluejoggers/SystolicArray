// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_SEQUENCER_BASE__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_SEQUENCER_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_std__03a__03aprocess;
class Vhello_uvm_uvm_pkg__03a__03a__VDynScope_32;
class Vhello_uvm_uvm_pkg__03a__03a__VDynScope_38;
class Vhello_uvm_uvm_pkg__03a__03a__VDynScope_39;
class Vhello_uvm_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_domain;
class Vhello_uvm_uvm_pkg__03a__03auvm_factory;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vhello_uvm_uvm_pkg__03a__03auvm_phase;
class Vhello_uvm_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz16;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz6;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_uvm_pkg__03a__03auvm_seed_map;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_request;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__g_request_id;
    IData/*31:0*/ __PVT__g_sequence_id;
    IData/*31:0*/ __PVT__g_sequencer_id;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base : public Vhello_uvm_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_auto_item_recording;
    CData/*0:0*/ __PVT__m_default_seq_set;
    IData/*31:0*/ __PVT__m_sequencer_id;
    IData/*31:0*/ __PVT__m_lock_arb_size;
    IData/*31:0*/ __PVT__m_arb_size;
    IData/*31:0*/ __PVT__m_wait_for_item_sequence_id;
    IData/*31:0*/ __PVT__m_wait_for_item_transaction_id;
    IData/*31:0*/ __PVT__m_wait_relevant_count;
    IData/*31:0*/ __PVT__m_max_zero_time_wait_relevant_count;
    IData/*31:0*/ __PVT__m_arbitration;
    IData/*31:0*/ __PVT__m_is_relevant_completed;
    IData/*31:0*/ __PVT__count;
    IData/*31:0*/ __PVT__m_random_count;
    IData/*31:0*/ __PVT__m_exhaustive_count;
    IData/*31:0*/ __PVT__m_simple_count;
    IData/*31:0*/ __PVT__max_random_count;
    IData/*31:0*/ __PVT__max_random_depth;
    IData/*31:0*/ __PVT__seq_kind;
    QData/*63:0*/ __PVT__m_last_wait_relevant_time;
    VlAssocArray<IData/*31:0*/, CData/*0:0*/> __PVT__arb_completed;
    VlAssocArray<std::string, IData/*31:0*/> __PVT__sequence_ids;
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_2__74__is_relevant_entries;
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_1__75__is_relevant_entries;
    VlQueue<std::string> __PVT__sequences;
    std::string __PVT__default_sequence;
    std::string __Vfunc_get__3__value;
    std::string __Vtask___VforkTask_3__204____VlefCall_2__get_full_name;
    std::string __Vtask___VforkTask_3__204____VlefCall_1__get_type_name;
    std::string __Vtask_get_type_name__207__Vfuncout;
    std::string __Vfunc_get_full_name__208__Vfuncout;
    std::string __Vfunc_uvm_create_random_seed__209__type_id;
    std::string __Vfunc_uvm_create_random_seed__209__inst_id;
    std::string __Vfunc_uvm_create_random_seed__209____VlefCall_1__uvm_instance_scope;
    std::string __Vfunc_uvm_instance_scope__211__Vfuncout;
    std::string __Vtask_uvm_report_error__212__id;
    std::string __Vtask_uvm_report_error__212__message;
    std::string __Vtask_uvm_report_error__212__filename;
    std::string __Vtask_uvm_report_error__212__context_name;
    std::string __Vfunc_uvm_oneway_hash__216__string_in;
    VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_request>> __PVT__arb_sequence_q;
    VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>> __PVT__lock_list;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base>> __PVT__reg_sequences;
    VlAssocArray<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase>, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper>> __PVT__m_default_sequences;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03a__VDynScope_32> __Vtask___VforkTask_2__74____VDynScope_m_wait_for_available_sequence_0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03a__VDynScope_38> __Vtask___VforkTask_1__75___Vwrapped_unnamedblk241_6__DOT____VDynScope_unnamedblk241_6;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer_base"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_sequence(Vhello_uvm__Syms* __restrict vlSymsp, std::string type_name);
    virtual void __VnoInFunc_analysis_write(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_build(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_current_grabber(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> &current_grabber__Vfuncrtn);
    virtual void __VnoInFunc_disable_auto_item_recording(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_execute_item(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> item);
    void __VnoInFunc_get_arbitration(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_arbitration__Vfuncrtn);
    void __VnoInFunc_get_seq_kind(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string type_name, IData/*31:0*/ &get_seq_kind__Vfuncrtn);
    void __VnoInFunc_get_sequence(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> &get_sequence__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_grab(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_grant_queued_locks(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_has_do_available(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    void __VnoInFunc_has_lock(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &has_lock__Vfuncrtn);
    virtual void __VnoInFunc_is_auto_item_recording_enabled(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    void __VnoInFunc_is_blocked(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &is_blocked__Vfuncrtn);
    void __VnoInFunc_is_child(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> child, CData/*0:0*/ &is_child__Vfuncrtn);
    virtual void __VnoInFunc_is_grabbed(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_grabbed__Vfuncrtn);
    void __VnoInFunc_kill_sequence(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual VlCoroutine __VnoInFunc_lock(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_m_add_builtin_seqs(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ add_simple);
    void __VnoInFunc_m_choose_next_request(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &m_choose_next_request__Vfuncrtn);
    virtual void __VnoInFunc_m_find_number_driver_connections(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn);
    void __VnoInFunc_m_find_sequence(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> &m_find_sequence__Vfuncrtn);
    void __VnoInFunc_m_get_seq_item_priority(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_request> seq_q_entry, IData/*31:0*/ &m_get_seq_item_priority__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_lock_req(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ lock);
    virtual void __VnoInFunc_m_register_sequence(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ &m_register_sequence__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_select_sequence(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_sequence_exiting(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_m_set_arbitration_completed(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ request_id);
    void __VnoInFunc_m_unlock_req(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_m_unregister_sequence(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id);
    void __VnoInFunc_m_update_lists(Vhello_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_arb_not_equal(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_arbitration_completed(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ request_id);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync, VlQueue<IData/*31:0*/> &is_relevant_entries, VlClassRef<Vhello_uvm_uvm_pkg__03a__03a__VDynScope_32> &__VDynScope_m_wait_for_available_sequence_0);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync, VlQueue<IData/*31:0*/> is_relevant_entries, VlClassRef<Vhello_uvm_uvm_pkg__03a__03a__VDynScope_32> __VDynScope_m_wait_for_available_sequence_0);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync);
  public:
    void __VnoInFunc_num_sequences(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &num_sequences__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_remove_sequence(Vhello_uvm__Syms* __restrict vlSymsp, std::string type_name);
    void __VnoInFunc_remove_sequence_from_queues(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_send_request(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_arbitration(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ val);
    virtual void __VnoInFunc_set_max_zero_time_wait_relevant_count(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ new_val);
    void __VnoInFunc_set_sequences_queue(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<std::string> &sequencer_sequence_lib);
    virtual VlCoroutine __VnoInFunc_start_default_sequence(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_start_phase_sequence(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_start_phase_sequence____Vfork_7__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03a__VDynScope_39> __VDynScope_start_phase_sequence_7);
  public:
    virtual void __VnoInFunc_stop_phase_sequence(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_stop_sequences(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_ungrab(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_unlock(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_user_priority_arbitration(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> avail_sequences, IData/*31:0*/ &user_priority_arbitration__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_wait_for_grant(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request);
    virtual VlCoroutine __VnoInFunc_wait_for_item_done(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ transaction_id);
    virtual VlCoroutine __VnoInFunc_wait_for_sequences(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_wait_for_sequences____Vfork_5__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h8b5250ea__4);
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base();
};


#endif  // guard
