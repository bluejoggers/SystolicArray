// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_DEFAULT_REPORT_SERVER__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_DEFAULT_REPORT_SERVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_std__03a__03aprocess;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_default_report_server;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer_knobs;
class Vuvm_pkg_uvm_pkg__03a__03auvm_recorder;
class Vuvm_pkg_uvm_pkg__03a__03auvm_report_handler;
class Vuvm_pkg_uvm_pkg__03a__03auvm_report_message;
class Vuvm_pkg_uvm_pkg__03a__03auvm_report_message_element_container;
class Vuvm_pkg_uvm_pkg__03a__03auvm_report_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_report_server;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;
class Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database;
class Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_default_report_server__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_default_report_server__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_default_report_server__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_default_report_server__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_report_server__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_default_report_server : public Vuvm_pkg_uvm_pkg__03a__03auvm_report_server {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__max_quit_overridable;
    CData/*0:0*/ __PVT__enable_report_id_count_summary;
    CData/*0:0*/ __PVT__record_all_messages;
    CData/*0:0*/ __PVT__show_verbosity;
    CData/*0:0*/ __PVT__show_terminator;
    IData/*31:0*/ __PVT__m_quit_count;
    IData/*31:0*/ __PVT__m_max_quit_count;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__m_severity_count;
    VlAssocArray<std::string, IData/*31:0*/> __PVT__m_id_count;
    std::string __Vtask_uvm_report_info__17__id;
    std::string __Vtask_uvm_report_info__17__message;
    std::string __Vtask_uvm_report_info__17__filename;
    std::string __Vtask_uvm_report_info__17__context_name;
    std::string __Vfunc_uvm_report_enabled__105__id;
    std::string __Vfunc_m_uvm_string_queue_join__109__Vfuncout;
    std::string __Vtask_uvm_report_info__110__id;
    std::string __Vtask_uvm_report_info__110__message;
    std::string __Vtask_uvm_report_info__110__filename;
    std::string __Vtask_uvm_report_info__110__context_name;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> __PVT__m_message_db;
    VlAssocArray<std::string, VlAssocArray<std::string, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream>>> __PVT__m_streams;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_default_report_server"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_default_report_server(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_compose_message(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, std::string filename, IData/*31:0*/ line, std::string &compose_message__Vfuncrtn);
    virtual void __VnoInFunc_compose_report_message(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_report_message> report_message, std::string report_object_name, std::string &compose_report_message__Vfuncrtn);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_execute_report_message(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_report_message> report_message, std::string composed_message);
    void __VnoInFunc_f_display(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ file, std::string str);
    void __VnoInFunc_get_id_count(Vuvm_pkg__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn);
    virtual void __VnoInFunc_get_id_set(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<std::string> &q);
    void __VnoInFunc_get_max_quit_count(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn);
    virtual void __VnoInFunc_get_message_database(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn);
    void __VnoInFunc_get_quit_count(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn);
    void __VnoInFunc_get_severity_count(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn);
    virtual void __VnoInFunc_get_severity_set(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*1:0*/> &q);
    void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_incr_id_count(Vuvm_pkg__Syms* __restrict vlSymsp, std::string id);
    void __VnoInFunc_incr_quit_count(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_incr_severity_count(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*1:0*/ severity);
    void __VnoInFunc_is_quit_count_reached(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_quit_count_reached__Vfuncrtn);
    virtual void __VnoInFunc_process_report(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ action, IData/*31:0*/ file, std::string filename, IData/*31:0*/ line, std::string composed_message, IData/*31:0*/ verbosity_level, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_report_object> client);
    virtual void __VnoInFunc_process_report_message(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_summarize(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_reset_quit_count(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_reset_severity_counts(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_id_count(Vuvm_pkg__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count);
    void __VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable);
    virtual void __VnoInFunc_set_message_database(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> database);
    void __VnoInFunc_set_quit_count(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count);
    void __VnoInFunc_set_severity_count(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_default_report_server() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_default_report_server();
};


#endif  // guard
