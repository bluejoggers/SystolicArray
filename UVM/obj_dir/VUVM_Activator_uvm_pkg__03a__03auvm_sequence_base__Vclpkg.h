// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_std__03a__03aprocess;
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_factory;
class VUVM_Activator_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz15;
class VUVM_Activator_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz28;
class VUVM_Activator_uvm_pkg__03a__03auvm_object;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Activator_uvm_pkg__03a__03auvm_phase;
class VUVM_Activator_uvm_pkg__03a__03auvm_recorder;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base;
class VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base : public VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item {
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
    VlAssocArray<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base>, CData/*0:0*/> __PVT__children_array;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__m_sqr_seq_ids;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> __PVT__m_tr_recorder;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item>> __PVT__response_queue;
    VlClassRef<VUVM_Activator_std__03a__03aprocess> __PVT__m_sequence_process;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz28> __PVT__m_automatic_phase_objection_dap;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz15> __PVT__m_starting_phase_dap;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> __PVT__starting_phase;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> __PVT__m_set_starting_phase;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequence_base"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clear_response_queue(VUVM_Activator__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_create_and_start_sequence_by_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string seq_name);
    void __VnoInFunc_create_item(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> type_var, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> l_sequencer, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> &create_item__Vfuncrtn);
    virtual void __VnoInFunc_do_kill(VUVM_Activator__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_do_sequence_kind(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind);
    virtual VlCoroutine __VnoInFunc_finish_item(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority);
    void __VnoInFunc_get_automatic_phase_objection(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &get_automatic_phase_objection__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_get_base_response(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> &response, IData/*31:0*/ transaction_id);
    void __VnoInFunc_get_priority(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_priority__Vfuncrtn);
    void __VnoInFunc_get_response_queue_depth(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_queue_depth__Vfuncrtn);
    void __VnoInFunc_get_response_queue_error_report_disabled(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &get_response_queue_error_report_disabled__Vfuncrtn);
    void __VnoInFunc_get_seq_kind(VUVM_Activator__Syms* __restrict vlSymsp, std::string type_name, IData/*31:0*/ &get_seq_kind__Vfuncrtn);
    void __VnoInFunc_get_sequence(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> &get_sequence__Vfuncrtn);
    void __VnoInFunc_get_sequence_by_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string seq_name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> &get_sequence_by_name__Vfuncrtn);
    void __VnoInFunc_get_sequence_state(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_state__Vfuncrtn);
    void __VnoInFunc_get_starting_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> &get_starting_phase__Vfuncrtn);
    void __VnoInFunc_get_tr_handle(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn);
    void __VnoInFunc_get_use_response_handler(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_response_handler__Vfuncrtn);
    VlCoroutine __VnoInFunc_grab(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_has_lock(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &has_lock__Vfuncrtn);
    void __VnoInFunc_is_blocked(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_blocked__Vfuncrtn);
    virtual void __VnoInFunc_is_item(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn);
    virtual void __VnoInFunc_is_relevant(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_relevant__Vfuncrtn);
    void __VnoInFunc_kill(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_lock(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_m_get_sqr_sequence_id(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, CData/*0:0*/ update_sequence_id, IData/*31:0*/ &m_get_sqr_sequence_id__Vfuncrtn);
    void __VnoInFunc_m_init_phase_daps(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ create);
    void __VnoInFunc_m_kill(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_safe_drop_starting_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_m_safe_raise_starting_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_m_set_sqr_sequence_id(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, IData/*31:0*/ sequence_id);
    virtual void __VnoInFunc_mid_do(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> this_item);
    void __VnoInFunc_num_sequences(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &num_sequences__Vfuncrtn);
    void __VnoInFunc_pick_sequence_setup_constraint(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_body(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_do(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> this_item);
    virtual void __VnoInFunc_post_start(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_body(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_do(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ is_item);
    virtual void __VnoInFunc_pre_start(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_put_base_response(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> response_item);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_response_handler(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_send_request(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_automatic_phase_objection(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    void __VnoInFunc_set_priority(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_response_queue_depth(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_response_queue_error_report_disabled(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    void __VnoInFunc_set_starting_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_start(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, IData/*31:0*/ this_priority, CData/*0:0*/ call_pre_post);
  private:
    VlCoroutine __VnoInFunc_start____Vfork_1__0(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync, CData/*0:0*/ &__VlefCall_8__get_automatic_phase_objection, CData/*0:0*/ &call_pre_post, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> &parent_sequence, CData/*0:0*/ &__VlefCall_9__get_automatic_phase_objection);
  public:
    virtual VlCoroutine __VnoInFunc_start_item(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_ungrab(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_unlock(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_use_response_handler(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ enable);
    virtual VlCoroutine __VnoInFunc_wait_for_grant(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request);
    virtual VlCoroutine __VnoInFunc_wait_for_item_done(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ transaction_id);
    virtual VlCoroutine __VnoInFunc_wait_for_relevant(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_sequence_state(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ state_mask);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base();
};


#endif  // guard
