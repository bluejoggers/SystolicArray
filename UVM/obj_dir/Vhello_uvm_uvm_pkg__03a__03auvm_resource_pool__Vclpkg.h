// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vhello_uvm_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"
class Vhello_uvm_std__03a__03aprocess;
class Vhello_uvm_uvm_pkg__03a__03aget_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_line_printer;
class Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs;
class Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool> __PVT__rp;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_line_printer> __PVT__print_resources__Vstatic__printer;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn);
    void __VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> &q);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__14__id;
    std::string __Vfunc_m_uvm_string_queue_join__18__Vfuncout;
    std::string __Vtask_uvm_report_info__19__id;
    std::string __Vtask_uvm_report_info__19__message;
    std::string __Vtask_uvm_report_info__19__filename;
    std::string __Vtask_uvm_report_info__19__context_name;
    std::string __Vfunc_uvm_glob_to_re__53__glob;
    std::string __Vfunc_uvm_re_match__55__re;
    std::string __Vfunc_uvm_re_match__55__str;
    std::string __Vtask_uvm_report_error__68__id;
    std::string __Vtask_uvm_report_error__68__message;
    std::string __Vtask_uvm_report_error__68__filename;
    std::string __Vtask_uvm_report_error__68__context_name;
    std::string __Vtask_uvm_report_warning__75__id;
    std::string __Vtask_uvm_report_warning__75__message;
    std::string __Vtask_uvm_report_warning__75__filename;
    std::string __Vtask_uvm_report_warning__75__context_name;
    std::string __Vtask_uvm_report_error__81__id;
    std::string __Vtask_uvm_report_error__81__message;
    std::string __Vtask_uvm_report_error__81__filename;
    std::string __Vtask_uvm_report_error__81__context_name;
    std::string __Vtask_uvm_report_warning__86__id;
    std::string __Vtask_uvm_report_warning__86__message;
    std::string __Vtask_uvm_report_warning__86__filename;
    std::string __Vtask_uvm_report_warning__86__context_name;
    std::string __Vtask_uvm_report_error__91__id;
    std::string __Vtask_uvm_report_error__91__message;
    std::string __Vtask_uvm_report_error__91__filename;
    std::string __Vtask_uvm_report_error__91__context_name;
    std::string __Vfunc_uvm_report_enabled__103__id;
    std::string __Vtask_uvm_report_info__107__id;
    std::string __Vtask_uvm_report_info__107__message;
    std::string __Vtask_uvm_report_info__107__filename;
    std::string __Vtask_uvm_report_info__107__context_name;
    std::string __Vfunc_uvm_report_enabled__115__id;
    std::string __Vtask_uvm_report_info__119__id;
    std::string __Vtask_uvm_report_info__119__message;
    std::string __Vtask_uvm_report_info__119__filename;
    std::string __Vtask_uvm_report_info__119__context_name;
    std::string __Vfunc_uvm_report_enabled__124__id;
    std::string __Vtask_uvm_report_info__128__id;
    std::string __Vtask_uvm_report_info__128__message;
    std::string __Vtask_uvm_report_info__128__filename;
    std::string __Vtask_uvm_report_info__128__context_name;
    VlAssocArray<std::string, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29>> __PVT__rtab;
    VlAssocArray<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base>, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29>> __PVT__ttab;
    VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03aget_t>> __PVT__get_record;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_pool"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool(*this); }
    void __VnoInFunc_dump(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ audit);
    void __VnoInFunc_dump_get_records(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_find_unused_resources(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> &find_unused_resources__Vfuncrtn);
    void __VnoInFunc_get_by_name(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> &get_by_type__Vfuncrtn);
    void __VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> &q, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_lookup_name(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> &lookup_name__Vfuncrtn);
    void __VnoInFunc_lookup_regex(Vhello_uvm__Syms* __restrict vlSymsp, std::string re, std::string scope, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> &lookup_regex__Vfuncrtn);
    void __VnoInFunc_lookup_regex_names(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> &lookup_regex_names__Vfuncrtn);
    void __VnoInFunc_lookup_scope(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> &lookup_scope__Vfuncrtn);
    void __VnoInFunc_lookup_type(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> &lookup_type__Vfuncrtn);
    void __VnoInFunc_print_resources(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> rq, CData/*0:0*/ audit);
    void __VnoInFunc_push_get_record(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, std::string scope, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> rsrc, CData/*1:0*/ __SYM__override);
    void __VnoInFunc_set_name_override(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set_override(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set_priority(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_name(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_queue(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> rsrc, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> &q, IData/*31:0*/ &pri);
    void __VnoInFunc_set_priority_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_type_override(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_spell_check(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &spell_check__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp);
    ~Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool() {}
};


#endif  // guard
