// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_regblock_uvm_pkg__03a__03auvm_component__Vclpkg.h"
class VUVM_regblock_std__03a__03aprocess;
class VUVM_regblock_uvm_pkg__03a__03auvm_build_phase;
class VUVM_regblock_uvm_pkg__03a__03auvm_cmdline_processor;
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_config_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_domain;
class VUVM_regblock_uvm_pkg__03a__03auvm_event_;
class VUVM_regblock_uvm_pkg__03a__03auvm_factory;
class VUVM_regblock_uvm_pkg__03a__03auvm_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_string_pool__Tz6;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_objection;
class VUVM_regblock_uvm_pkg__03a__03auvm_parent_child_link;
class VUVM_regblock_uvm_pkg__03a__03auvm_phase;
class VUVM_regblock_uvm_pkg__03a__03auvm_printer;
class VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz5;
class VUVM_regblock_uvm_pkg__03a__03auvm_recorder;
class VUVM_regblock_uvm_pkg__03a__03auvm_related_link;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_handler;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource_;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz10;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz11;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz12;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz2;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz7;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz8;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz9;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;
class VUVM_regblock_uvm_pkg__03a__03auvm_run_phase;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item;
class VUVM_regblock_uvm_pkg__03a__03auvm_tr_database;
class VUVM_regblock_uvm_pkg__03a__03auvm_tr_stream;
class VUVM_regblock_uvm_pkg__03a__03auvm_transaction;


class VUVM_regblock__Syms;
struct VUVM_regblock_m_verbosity_setting__struct__0 {
    std::string __PVT__comp;
    std::string __PVT__phase;
    QData/*63:0*/ __PVT__offset;
    IData/*31:0*/ __PVT__verbosity;
    std::string __PVT__id;

    bool operator==(const VUVM_regblock_m_verbosity_setting__struct__0& rhs) const {
        return __PVT__comp == rhs.__PVT__comp
            && __PVT__phase == rhs.__PVT__phase
            && __PVT__offset == rhs.__PVT__offset
            && __PVT__verbosity == rhs.__PVT__verbosity
            && __PVT__id == rhs.__PVT__id;
    }
    bool operator!=(const VUVM_regblock_m_verbosity_setting__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VUVM_regblock_m_verbosity_setting__struct__0& rhs) const {
        if (__PVT__comp < rhs.__PVT__comp) return true;
        if (rhs.__PVT__comp < __PVT__comp) return false;
        if (__PVT__phase < rhs.__PVT__phase) return true;
        if (rhs.__PVT__phase < __PVT__phase) return false;
        if (__PVT__offset < rhs.__PVT__offset) return true;
        if (rhs.__PVT__offset < __PVT__offset) return false;
        if (__PVT__verbosity < rhs.__PVT__verbosity) return true;
        if (rhs.__PVT__verbosity < __PVT__verbosity) return false;
        if (__PVT__id < rhs.__PVT__id) return true;
        if (rhs.__PVT__id < __PVT__id) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<VUVM_regblock_m_verbosity_setting__struct__0> : public std::true_type {};
struct VUVM_regblock_uvm_cmdline_parsed_arg_t__struct__0 {
    std::string __PVT__arg;
    VlQueue<std::string> __PVT__args;
    IData/*31:0*/ __PVT__used;

    bool operator==(const VUVM_regblock_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
        return __PVT__arg == rhs.__PVT__arg
            && __PVT__args == rhs.__PVT__args
            && __PVT__used == rhs.__PVT__used;
    }
    bool operator!=(const VUVM_regblock_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VUVM_regblock_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
        if (__PVT__arg < rhs.__PVT__arg) return true;
        if (rhs.__PVT__arg < __PVT__arg) return false;
        if (__PVT__args < rhs.__PVT__args) return true;
        if (rhs.__PVT__args < __PVT__args) return false;
        if (__PVT__used < rhs.__PVT__used) return true;
        if (rhs.__PVT__used < __PVT__used) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<VUVM_regblock_uvm_cmdline_parsed_arg_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_component__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_config_deprecated_warned;
    CData/*0:0*/ __PVT__m_config_set;
    CData/*0:0*/ __PVT__print_config_matches;
    CData/*0:0*/ __PVT__print_config_settings__Vstatic__have_been_warned;
    CData/*0:0*/ __PVT__m_set_cl_verb__Vstatic__first;
    CData/*0:0*/ __PVT__m_set_cl_action__Vstatic__initialized;
    CData/*0:0*/ __PVT__m_set_cl_sev__Vstatic__initialized;
    VlQueue<VUVM_regblock_m_verbosity_setting__struct__0> __PVT__m_time_settings;
    VlQueue<VUVM_regblock_uvm_cmdline_parsed_arg_t__struct__0> __PVT__m_uvm_applied_cl_action;
    VlQueue<VUVM_regblock_uvm_cmdline_parsed_arg_t__struct__0> __PVT__m_uvm_applied_cl_sev;
    VlQueue<std::string> __PVT__m_set_cl_verb__Vstatic__values;
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_component__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_component__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_component__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_set_type_override(VUVM_regblock__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    void __VnoInFunc_set_type_override_by_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_component : public VUVM_regblock_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_enabled;
    CData/*0:0*/ __PVT__m_build_done;
    IData/*31:0*/ __PVT__enable_stop_interrupt;
    IData/*31:0*/ __PVT__m_phasing_active;
    IData/*31:0*/ __PVT__recording_detail;
    VlQueue<VUVM_regblock_m_verbosity_setting__struct__0> __PVT__m_verbosity_settings;
    std::string __PVT__m_name;
    std::string __Vtask_m_extract_name__62__leaf;
    std::string __Vtask_m_extract_name__62__remainder;
    std::string __Vtask_m_extract_name__63__leaf;
    std::string __Vtask_m_extract_name__63__remainder;
    std::string __Vfunc_get__254__value;
    std::string __Vfunc_uvm_is_match__308__expr;
    std::string __Vfunc_uvm_is_match__308__str;
    std::string __Vfunc_uvm_glob_to_re__309__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__309__glob;
    std::string __Vfunc_uvm_re_match__310__re;
    std::string __Vfunc_uvm_re_match__310__str;
    std::string __Vtask_uvm_split_string__318__str;
    std::string __Vfunc_uvm_is_match__322__expr;
    std::string __Vfunc_uvm_is_match__322__str;
    std::string __Vfunc_uvm_glob_to_re__323__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__323__glob;
    std::string __Vfunc_uvm_re_match__324__re;
    std::string __Vfunc_uvm_re_match__324__str;
    std::string __Vtask_uvm_split_string__332__str;
    std::string __Vfunc_uvm_string_to_severity__335__sev_str;
    std::string __Vfunc_uvm_string_to_action__338__action_str;
    std::string __Vtask_uvm_split_string__339__str;
    std::string __Vfunc_uvm_is_match__343__expr;
    std::string __Vfunc_uvm_is_match__343__str;
    std::string __Vfunc_uvm_glob_to_re__344__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__344__glob;
    std::string __Vfunc_uvm_re_match__345__re;
    std::string __Vfunc_uvm_re_match__345__str;
    std::string __Vtask_uvm_string_to_severity__346__sev_str;
    std::string __Vtask_uvm_string_to_action__347__action_str;
    std::string __Vtask_uvm_split_string__348__str;
    std::string __Vtask_uvm_split_string__357__str;
    std::string __Vfunc_uvm_string_to_severity__360__sev_str;
    std::string __Vfunc_uvm_string_to_severity__363__sev_str;
    std::string __Vfunc_uvm_is_match__367__expr;
    std::string __Vfunc_uvm_is_match__367__str;
    std::string __Vfunc_uvm_glob_to_re__368__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__368__glob;
    std::string __Vfunc_uvm_re_match__369__re;
    std::string __Vfunc_uvm_re_match__369__str;
    std::string __Vtask_uvm_string_to_severity__370__sev_str;
    std::string __Vtask_uvm_string_to_severity__371__sev_str;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tr_database> __PVT__tr_database;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_domain> __PVT__m_domain;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase>, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase>> __PVT__m_phase_imps;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> __PVT__m_current_phase;
    VlClassRef<VUVM_regblock_std__03a__03aprocess> __PVT__m_phase_process;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> __PVT__m_parent;
    VlAssocArray<std::string, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>> __PVT__m_children;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>> __PVT__m_children_by_handle;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tr_stream> __PVT__m_main_stream;
    VlAssocArray<std::string, VlAssocArray<std::string, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tr_stream>>> __PVT__m_streams;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_transaction>, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_recorder>> __PVT__m_tr_h;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_string_pool__Tz6> __PVT__event_pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_component"; }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_accept_tr(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ accept_time);
    virtual void __VnoInFunc_all_dropped(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_apply_config_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ verbose);
    void __VnoInFunc_begin_child_tr(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_child_tr__Vfuncrtn);
    void __VnoInFunc_begin_tr(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_build(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_check(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_check_config_usage(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_check_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_configure_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_create_component(VUVM_regblock__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn);
    void __VnoInFunc_create_object(VUVM_regblock__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn);
    virtual void __VnoInFunc_define_domain(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_domain> domain);
    virtual void __VnoInFunc_do_accept_tr(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_transaction> tr);
    virtual void __VnoInFunc_do_begin_tr(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, IData/*31:0*/ tr_handle);
    virtual void __VnoInFunc_do_end_tr(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ tr_handle);
    void __VnoInFunc_do_flush(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_kill_all(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_do_resolve_bindings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_dropped(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_end_of_elaboration(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_end_tr(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ end_time, CData/*0:0*/ free_handle);
    virtual void __VnoInFunc_extract(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_extract_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_final_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_flush(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_free_tr_stream(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tr_stream> stream);
    void __VnoInFunc_get_child(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> &get_child__Vfuncrtn);
    void __VnoInFunc_get_children(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>> &children);
    virtual void __VnoInFunc_get_config_int(VUVM_regblock__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ &value, CData/*0:0*/ &get_config_int__Vfuncrtn);
    virtual void __VnoInFunc_get_config_object(VUVM_regblock__Syms* __restrict vlSymsp, std::string field_name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &value, CData/*0:0*/ clone, CData/*0:0*/ &get_config_object__Vfuncrtn);
    virtual void __VnoInFunc_get_config_string(VUVM_regblock__Syms* __restrict vlSymsp, std::string field_name, std::string &value, CData/*0:0*/ &get_config_string__Vfuncrtn);
    void __VnoInFunc_get_depth(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn);
    void __VnoInFunc_get_domain(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn);
    void __VnoInFunc_get_first_child(VUVM_regblock__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_first_child__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_next_child(VUVM_regblock__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_next_child__Vfuncrtn);
    void __VnoInFunc_get_num_children(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_children__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_tr_stream(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, std::string stream_type_name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tr_stream> &get_tr_stream__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_child(VUVM_regblock__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ &has_child__Vfuncrtn);
    virtual void __VnoInFunc_kill(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_lookup(VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> &lookup__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_apply_verbosity_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ unnamedblk226__DOT__i);
  public:
    void __VnoInFunc_m_begin_tr(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &m_begin_tr__Vfuncrtn);
    void __VnoInFunc_m_do_pre_abort(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_extract_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string name, std::string &leaf, std::string &remainder);
    virtual void __VnoInFunc_m_get_tr_database(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tr_database> &m_get_tr_database__Vfuncrtn);
    void __VnoInFunc_m_set_cl_action(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_msg_args(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_sev(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_verb(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_set_cl_verb____Vfork_1__0(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> top);
  public:
    virtual void __VnoInFunc_m_set_full_name(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_main_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_massage_scope(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, std::string &massage_scope__Vfuncrtn);
    virtual void __VnoInFunc_phase_ended(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_phase_ready_to_end(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_phase_started(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_configure_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_main_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_reset_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_shutdown_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_abort(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_configure_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_main_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_reset_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_shutdown_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_print_config(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ recurse, CData/*0:0*/ audit);
    void __VnoInFunc_print_config_settings(VUVM_regblock__Syms* __restrict vlSymsp, std::string field, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> comp, CData/*0:0*/ recurse);
    void __VnoInFunc_print_config_with_audit(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ recurse);
    void __VnoInFunc_print_override_info(VUVM_regblock__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name);
    virtual void __VnoInFunc_raised(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record_error_tr(VUVM_regblock__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ error_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_error_tr__Vfuncrtn);
    void __VnoInFunc_record_event_tr(VUVM_regblock__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ event_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_event_tr__Vfuncrtn);
    virtual void __VnoInFunc_report(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_report_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_reset_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_resume(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_run(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_set_config_int(VUVM_regblock__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, VlWide<128>/*4095:0*/ value);
    virtual void __VnoInFunc_set_config_object(VUVM_regblock__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> value, CData/*0:0*/ clone);
    virtual void __VnoInFunc_set_config_string(VUVM_regblock__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, std::string value);
    void __VnoInFunc_set_domain(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_domain> domain, IData/*31:0*/ hier);
    void __VnoInFunc_set_inst_override(VUVM_regblock__Syms* __restrict vlSymsp, std::string relative_inst_path, std::string original_type_name, std::string override_type_name);
    void __VnoInFunc_set_inst_override_by_type(VUVM_regblock__Syms* __restrict vlSymsp, std::string relative_inst_path, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> override_type);
    void __VnoInFunc_set_int_local(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ value, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_set_name(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_set_phase_imp(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> imp, IData/*31:0*/ hier);
    void __VnoInFunc_set_report_default_file_hier(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_action_hier(VUVM_regblock__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_id_file_hier(VUVM_regblock__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_verbosity_hier(VUVM_regblock__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_severity_action_hier(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_file_hier(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_action_hier(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_id_file_hier(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_verbosity_hier(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_verbosity_level_hier(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity);
    virtual void __VnoInFunc_shutdown_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_start_of_simulation(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_start_of_simulation_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_status(VUVM_regblock__Syms* __restrict vlSymsp, std::string &status__Vfuncrtn);
    virtual void __VnoInFunc_stop(VUVM_regblock__Syms* __restrict vlSymsp, std::string ph_name);
    virtual void __VnoInFunc_stop_phase(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_suspend(VUVM_regblock__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_component() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_component();
};


#endif  // guard
