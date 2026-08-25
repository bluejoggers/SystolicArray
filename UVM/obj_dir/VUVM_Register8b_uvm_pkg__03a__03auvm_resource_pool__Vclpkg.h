// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Register8b_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"
class VUVM_Register8b_std__03a__03aprocess;
class VUVM_Register8b_uvm_pkg__03a__03aget_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_line_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer_knobs;
class VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5;
class VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool> __PVT__rp;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_line_printer> __PVT__print_resources__Vstatic__printer;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn);
    void __VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &q);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool : public virtual VlClass {
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
    VlAssocArray<std::string, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5>> __PVT__rtab;
    VlAssocArray<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base>, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5>> __PVT__ttab;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03aget_t>> __PVT__get_record;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_pool"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool(*this); }
    void __VnoInFunc_dump(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ audit);
    void __VnoInFunc_dump_get_records(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_find_unused_resources(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &find_unused_resources__Vfuncrtn);
    void __VnoInFunc_get_by_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> &get_by_type__Vfuncrtn);
    void __VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &q, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_lookup_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_name__Vfuncrtn);
    void __VnoInFunc_lookup_regex(VUVM_Register8b__Syms* __restrict vlSymsp, std::string re, std::string scope, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_regex__Vfuncrtn);
    void __VnoInFunc_lookup_regex_names(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_regex_names__Vfuncrtn);
    void __VnoInFunc_lookup_scope(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_scope__Vfuncrtn);
    void __VnoInFunc_lookup_type(VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_type__Vfuncrtn);
    void __VnoInFunc_print_resources(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> rq, CData/*0:0*/ audit);
    void __VnoInFunc_push_get_record(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string scope, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc, CData/*1:0*/ __SYM__override);
    void __VnoInFunc_set_name_override(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set_override(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set_priority(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_queue(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &q, IData/*31:0*/ &pri);
    void __VnoInFunc_set_priority_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_type_override(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_spell_check(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &spell_check__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool() {}
};


#endif  // guard
