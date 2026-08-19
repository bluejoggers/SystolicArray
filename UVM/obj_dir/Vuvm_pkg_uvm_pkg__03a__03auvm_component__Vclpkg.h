// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg.h"
class Vuvm_pkg_std__03a__03aprocess;
class Vuvm_pkg_uvm_pkg__03a__03auvm_build_phase;
class Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor;
class Vuvm_pkg_uvm_pkg__03a__03auvm_component;
class Vuvm_pkg_uvm_pkg__03a__03auvm_config_object_wrapper;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_domain;
class Vuvm_pkg_uvm_pkg__03a__03auvm_event_;
class Vuvm_pkg_uvm_pkg__03a__03auvm_factory;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz3;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper;
class Vuvm_pkg_uvm_pkg__03a__03auvm_objection;
class Vuvm_pkg_uvm_pkg__03a__03auvm_parent_child_link;
class Vuvm_pkg_uvm_pkg__03a__03auvm_phase;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz29;
class Vuvm_pkg_uvm_pkg__03a__03auvm_recorder;
class Vuvm_pkg_uvm_pkg__03a__03auvm_related_link;
class Vuvm_pkg_uvm_pkg__03a__03auvm_report_handler;
class Vuvm_pkg_uvm_pkg__03a__03auvm_report_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz1;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz4;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz52;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz53;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz54;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz55;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz5;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_pool;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;
class Vuvm_pkg_uvm_pkg__03a__03auvm_run_phase;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item;
class Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database;
class Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream;
class Vuvm_pkg_uvm_pkg__03a__03auvm_transaction;


class Vuvm_pkg__Syms;
struct Vuvm_pkg_m_verbosity_setting__struct__0 {
    std::string __PVT__comp;
    std::string __PVT__phase;
    QData/*63:0*/ __PVT__offset;
    IData/*31:0*/ __PVT__verbosity;
    std::string __PVT__id;

    bool operator==(const Vuvm_pkg_m_verbosity_setting__struct__0& rhs) const {
        return __PVT__comp == rhs.__PVT__comp
            && __PVT__phase == rhs.__PVT__phase
            && __PVT__offset == rhs.__PVT__offset
            && __PVT__verbosity == rhs.__PVT__verbosity
            && __PVT__id == rhs.__PVT__id;
    }
    bool operator!=(const Vuvm_pkg_m_verbosity_setting__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vuvm_pkg_m_verbosity_setting__struct__0& rhs) const {
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
struct VlIsCustomStruct<Vuvm_pkg_m_verbosity_setting__struct__0> : public std::true_type {};
struct Vuvm_pkg_uvm_cmdline_parsed_arg_t__struct__0 {
    std::string __PVT__arg;
    VlQueue<std::string> __PVT__args;
    IData/*31:0*/ __PVT__used;

    bool operator==(const Vuvm_pkg_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
        return __PVT__arg == rhs.__PVT__arg
            && __PVT__args == rhs.__PVT__args
            && __PVT__used == rhs.__PVT__used;
    }
    bool operator!=(const Vuvm_pkg_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vuvm_pkg_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
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
struct VlIsCustomStruct<Vuvm_pkg_uvm_cmdline_parsed_arg_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_config_deprecated_warned;
    CData/*0:0*/ __PVT__m_config_set;
    CData/*0:0*/ __PVT__print_config_matches;
    CData/*0:0*/ __PVT__print_config_settings__Vstatic__have_been_warned;
    CData/*0:0*/ __PVT__m_set_cl_verb__Vstatic__first;
    CData/*0:0*/ __PVT__m_set_cl_action__Vstatic__initialized;
    CData/*0:0*/ __PVT__m_set_cl_sev__Vstatic__initialized;
    VlQueue<Vuvm_pkg_m_verbosity_setting__struct__0> __PVT__m_time_settings;
    VlQueue<Vuvm_pkg_uvm_cmdline_parsed_arg_t__struct__0> __PVT__m_uvm_applied_cl_action;
    VlQueue<Vuvm_pkg_uvm_cmdline_parsed_arg_t__struct__0> __PVT__m_uvm_applied_cl_sev;
    VlQueue<std::string> __PVT__m_set_cl_verb__Vstatic__values;
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_set_type_override(Vuvm_pkg__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    void __VnoInFunc_set_type_override_by_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_component : public Vuvm_pkg_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_enabled;
    CData/*0:0*/ __PVT__m_build_done;
    IData/*31:0*/ __PVT__enable_stop_interrupt;
    IData/*31:0*/ __PVT__m_phasing_active;
    IData/*31:0*/ __PVT__recording_detail;
    VlQueue<Vuvm_pkg_m_verbosity_setting__struct__0> __PVT__m_verbosity_settings;
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
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> __PVT__tr_database;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_domain> __PVT__m_domain;
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase>, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase>> __PVT__m_phase_imps;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> __PVT__m_current_phase;
    VlClassRef<Vuvm_pkg_std__03a__03aprocess> __PVT__m_phase_process;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> __PVT__m_parent;
    VlAssocArray<std::string, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component>> __PVT__m_children;
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component>, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component>> __PVT__m_children_by_handle;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> __PVT__m_main_stream;
    VlAssocArray<std::string, VlAssocArray<std::string, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream>>> __PVT__m_streams;
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_transaction>, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder>> __PVT__m_tr_h;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz3> __PVT__event_pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_component"; }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_accept_tr(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ accept_time);
    virtual void __VnoInFunc_all_dropped(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_apply_config_settings(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ verbose);
    void __VnoInFunc_begin_child_tr(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_child_tr__Vfuncrtn);
    void __VnoInFunc_begin_tr(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_build(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_check(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_check_config_usage(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_check_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_configure_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_create_component(Vuvm_pkg__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn);
    void __VnoInFunc_create_object(Vuvm_pkg__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn);
    virtual void __VnoInFunc_define_domain(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_domain> domain);
    virtual void __VnoInFunc_do_accept_tr(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_transaction> tr);
    virtual void __VnoInFunc_do_begin_tr(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, IData/*31:0*/ tr_handle);
    virtual void __VnoInFunc_do_end_tr(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ tr_handle);
    void __VnoInFunc_do_flush(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_kill_all(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_do_resolve_bindings(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_dropped(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_end_of_elaboration(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_end_tr(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ end_time, CData/*0:0*/ free_handle);
    virtual void __VnoInFunc_extract(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_extract_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_final_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_flush(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_free_tr_stream(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> stream);
    void __VnoInFunc_get_child(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> &get_child__Vfuncrtn);
    void __VnoInFunc_get_children(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component>> &children);
    virtual void __VnoInFunc_get_config_int(Vuvm_pkg__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ &value, CData/*0:0*/ &get_config_int__Vfuncrtn);
    virtual void __VnoInFunc_get_config_object(Vuvm_pkg__Syms* __restrict vlSymsp, std::string field_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &value, CData/*0:0*/ clone, CData/*0:0*/ &get_config_object__Vfuncrtn);
    virtual void __VnoInFunc_get_config_string(Vuvm_pkg__Syms* __restrict vlSymsp, std::string field_name, std::string &value, CData/*0:0*/ &get_config_string__Vfuncrtn);
    void __VnoInFunc_get_depth(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn);
    void __VnoInFunc_get_domain(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn);
    void __VnoInFunc_get_first_child(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_first_child__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_next_child(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_next_child__Vfuncrtn);
    void __VnoInFunc_get_num_children(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_children__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_tr_stream(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, std::string stream_type_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream> &get_tr_stream__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_child(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ &has_child__Vfuncrtn);
    virtual void __VnoInFunc_kill(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_lookup(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> &lookup__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_apply_verbosity_settings(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ unnamedblk226__DOT__i);
  public:
    void __VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &m_begin_tr__Vfuncrtn);
    void __VnoInFunc_m_do_pre_abort(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_extract_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, std::string &leaf, std::string &remainder);
    virtual void __VnoInFunc_m_get_tr_database(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> &m_get_tr_database__Vfuncrtn);
    void __VnoInFunc_m_set_cl_action(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_msg_args(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_sev(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_verb(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_set_cl_verb____Vfork_1__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> top);
  public:
    virtual void __VnoInFunc_m_set_full_name(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_main_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_massage_scope(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, std::string &massage_scope__Vfuncrtn);
    virtual void __VnoInFunc_phase_ended(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_phase_ready_to_end(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_phase_started(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_configure_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_main_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_reset_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_shutdown_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_abort(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_configure_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_main_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_reset_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_shutdown_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_print_config(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ recurse, CData/*0:0*/ audit);
    void __VnoInFunc_print_config_settings(Vuvm_pkg__Syms* __restrict vlSymsp, std::string field, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> comp, CData/*0:0*/ recurse);
    void __VnoInFunc_print_config_with_audit(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ recurse);
    void __VnoInFunc_print_override_info(Vuvm_pkg__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name);
    virtual void __VnoInFunc_raised(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record_error_tr(Vuvm_pkg__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ error_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_error_tr__Vfuncrtn);
    void __VnoInFunc_record_event_tr(Vuvm_pkg__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ event_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_event_tr__Vfuncrtn);
    virtual void __VnoInFunc_report(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_report_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_reset_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_resume(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_run(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_set_config_int(Vuvm_pkg__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, VlWide<128>/*4095:0*/ value);
    virtual void __VnoInFunc_set_config_object(Vuvm_pkg__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> value, CData/*0:0*/ clone);
    virtual void __VnoInFunc_set_config_string(Vuvm_pkg__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, std::string value);
    void __VnoInFunc_set_domain(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_domain> domain, IData/*31:0*/ hier);
    void __VnoInFunc_set_inst_override(Vuvm_pkg__Syms* __restrict vlSymsp, std::string relative_inst_path, std::string original_type_name, std::string override_type_name);
    void __VnoInFunc_set_inst_override_by_type(Vuvm_pkg__Syms* __restrict vlSymsp, std::string relative_inst_path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> override_type);
    void __VnoInFunc_set_int_local(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ value, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_set_name(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_set_phase_imp(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> imp, IData/*31:0*/ hier);
    void __VnoInFunc_set_report_default_file_hier(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_action_hier(Vuvm_pkg__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_id_file_hier(Vuvm_pkg__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_verbosity_hier(Vuvm_pkg__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_severity_action_hier(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_file_hier(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_action_hier(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_id_file_hier(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_verbosity_hier(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_verbosity_level_hier(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity);
    virtual void __VnoInFunc_shutdown_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_start_of_simulation(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_start_of_simulation_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_status(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &status__Vfuncrtn);
    virtual void __VnoInFunc_stop(Vuvm_pkg__Syms* __restrict vlSymsp, std::string ph_name);
    virtual void __VnoInFunc_stop_phase(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_suspend(Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_component() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_component();
};


#endif  // guard
