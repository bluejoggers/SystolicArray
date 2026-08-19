// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_OBJECTION__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_OBJECTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_std__03a__03aprocess;
class VUVM_regblock_uvm_pkg__03a__03a__VDynScope_26;
class VUVM_regblock_uvm_pkg__03a__03a__VDynScope_27;
class VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz17_TBz18;
class VUVM_regblock_uvm_pkg__03a__03auvm_cmdline_processor;
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi1;
class VUVM_regblock_uvm_pkg__03a__03auvm_objection;
class VUVM_regblock_uvm_pkg__03a__03auvm_objection_callback;
class VUVM_regblock_uvm_pkg__03a__03auvm_objection_context_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_objection_events;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequencer_base;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_objection__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_objection_callback;
    VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection>> __PVT__m_objections;
    VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_context_pool;
    VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_scheduled_list;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_objection__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_objection__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_objection__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi1> &get_type__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_execute_scheduled_forks(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<VUVM_regblock_uvm_pkg__03a__03a__VDynScope_27> unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3);
  public:
    void __VnoInFunc_m_init_objections(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_init_objections____Vfork_2__0(VlProcessRef vlProcess);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_objection : public VUVM_regblock_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_trace_mode;
    CData/*0:0*/ __PVT__m_top_all_dropped;
    CData/*0:0*/ __PVT__m_prop_mode;
    CData/*0:0*/ __PVT__m_cleared;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object>, IData/*31:0*/> __PVT__m_source_count;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object>, IData/*31:0*/> __PVT__m_total_count;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object>, QData/*63:0*/> __PVT__m_drain_time;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object>, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection_events>> __PVT__m_events;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __PVT__m_top;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object>, VlClassRef<VUVM_regblock_std__03a__03aprocess>> __PVT__m_drain_proc;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object>, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_scheduled_contexts;
    VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_forked_list;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object>, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_forked_contexts;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_objection"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_objection(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_all_dropped(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_clear(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_display_objections(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header);
    void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_dropped(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_get_drain_time(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ &get_drain_time__Vfuncrtn);
    void __VnoInFunc_get_objection_count(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn);
    void __VnoInFunc_get_objection_total(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_total__Vfuncrtn);
    void __VnoInFunc_get_objectors(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object>> &list);
    void __VnoInFunc_get_propagate_mode(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &get_propagate_mode__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_m_display_objections(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header, std::string &m_display_objections__Vfuncrtn);
    void __VnoInFunc_m_drop(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread);
    VlCoroutine __VnoInFunc_m_forked_drain(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread);
    void __VnoInFunc_m_get_parent(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &m_get_parent__Vfuncrtn);
    void __VnoInFunc_m_propagate(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, CData/*0:0*/ raise, IData/*31:0*/ in_top_thread);
    void __VnoInFunc_m_raise(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_m_report(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, std::string action);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_raised(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_drain_time(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ drain);
    void __VnoInFunc_set_propagate_mode(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ prop_mode);
    void __VnoInFunc_trace_mode(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ mode, CData/*0:0*/ &trace_mode__Vfuncrtn);
    VlCoroutine __VnoInFunc_wait_for(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ objt_event, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj);
    VlCoroutine __VnoInFunc_wait_for_total_count(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ count);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_objection() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_objection();
};


#endif  // guard
