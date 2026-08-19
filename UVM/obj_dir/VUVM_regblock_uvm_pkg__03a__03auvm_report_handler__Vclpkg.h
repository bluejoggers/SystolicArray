// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_std__03a__03aprocess;
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi2;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz23_TBz23;
class VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz2_TBz22;
class VUVM_regblock_uvm_pkg__03a__03auvm_printer;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_handler;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_message;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_server;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;
class VUVM_regblock_uvm_pkg__03a__03auvm_status_container;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_report_handler__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_report_handler__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_report_handler__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_report_handler__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_format_action(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ action, std::string &format_action__Vfuncrtn);
    void __VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi2> &get_type__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_report_handler : public VUVM_regblock_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_max_verbosity_level;
    IData/*31:0*/ __PVT__default_file_handle;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__severity_actions;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__severity_file_handles;
    std::string __Vfunc_uvm_report_enabled__134__id;
    std::string __Vfunc_uvm_report_enabled__173__id;
    std::string __Vfunc_m_uvm_string_queue_join__177__Vfuncout;
    std::string __Vtask_uvm_report_info__178__id;
    std::string __Vtask_uvm_report_info__178__message;
    std::string __Vtask_uvm_report_info__178__filename;
    std::string __Vtask_uvm_report_info__178__context_name;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __PVT__id_verbosities;
    VlAssocArray<CData/*1:0*/, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz2_TBz22>> __PVT__severity_id_verbosities;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __PVT__id_actions;
    VlAssocArray<CData/*1:0*/, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz2_TBz22>> __PVT__severity_id_actions;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> __PVT__sev_overrides;
    VlAssocArray<std::string, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz23_TBz23>> __PVT__sev_id_overrides;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __PVT__id_file_handles;
    VlAssocArray<CData/*1:0*/, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz2_TBz22>> __PVT__severity_id_file_handles;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_handler"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_report_handler(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_dump_state(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_action(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_action__Vfuncrtn);
    void __VnoInFunc_get_file_handle(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_file_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_severity_id_file(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_severity_id_file__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_get_verbosity_level(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_verbosity_level__Vfuncrtn);
    void __VnoInFunc_initialize(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_process_report_message(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_object> client);
    virtual void __VnoInFunc_run_hooks(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_object> client, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &run_hooks__Vfuncrtn);
    void __VnoInFunc_set_default_file(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_id_action(VUVM_regblock__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_id_file(VUVM_regblock__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_id_verbosity(VUVM_regblock__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_severity_action(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_severity_file(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_severity_id_action(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_severity_id_file(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_severity_id_override(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_severity_id_verbosity(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_severity_override(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_verbosity_level(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_report_handler() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_report_handler();
};


#endif  // guard
