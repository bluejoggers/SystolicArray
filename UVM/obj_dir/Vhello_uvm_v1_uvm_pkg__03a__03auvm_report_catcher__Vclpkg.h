// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_REPORT_CATCHER__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_REPORT_CATCHER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_std__03a__03aprocess;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz52_TBz62;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_catcher;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_handler;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_message;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_message_element_container;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_server;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_catcher__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_report_catcher;
    CData/*0:0*/ __PVT__m_set_action_called;
    CData/*0:0*/ __PVT__do_report;
    CData/*0:0*/ __PVT__process_all_report_catchers__Vstatic__in_catcher;
    IData/*31:0*/ __PVT__m_demoted_fatal;
    IData/*31:0*/ __PVT__m_demoted_error;
    IData/*31:0*/ __PVT__m_demoted_warning;
    IData/*31:0*/ __PVT__m_caught_fatal;
    IData/*31:0*/ __PVT__m_caught_error;
    IData/*31:0*/ __PVT__m_caught_warning;
    IData/*31:0*/ __PVT__DO_NOT_CATCH;
    IData/*31:0*/ __PVT__DO_NOT_MODIFY;
    IData/*31:0*/ __PVT__m_debug_flags;
    std::string __Vfunc_m_uvm_string_queue_join__11__Vfuncout;
    std::string __Vfunc_m_uvm_string_queue_join__35__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_message> __PVT__m_modified_report_message;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_message> __PVT__m_orig_report_message;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz52_TBz62> __PVT__get_report_catcher__Vstatic__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz52_TBz62> __PVT__print_catcher__Vstatic__iter;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_catcher__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_catcher__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_catcher__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_debug_report_catcher(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ what);
    void __VnoInFunc_get_report_catcher(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_catcher> &get_report_catcher__Vfuncrtn);
    void __VnoInFunc_print_catcher(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_process_all_report_catchers(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_message> rm, IData/*31:0*/ &process_all_report_catchers__Vfuncrtn);
    void __VnoInFunc_summarize(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_catcher : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__26__id;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_catcher"; }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_int(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, IData/*31:0*/ action);
    void __VnoInFunc_add_object(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action);
    void __VnoInFunc_add_string(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action);
    virtual void __VnoInFunc_catch(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &catch__Vfuncrtn);
    void __VnoInFunc_get_action(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn);
    void __VnoInFunc_get_client(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_object> &get_client__Vfuncrtn);
    void __VnoInFunc_get_context(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn);
    void __VnoInFunc_get_element_container(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn);
    void __VnoInFunc_get_fname(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_fname__Vfuncrtn);
    void __VnoInFunc_get_id(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn);
    void __VnoInFunc_get_line(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn);
    void __VnoInFunc_get_message(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn);
    void __VnoInFunc_get_severity(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn);
    void __VnoInFunc_get_verbosity(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn);
    void __VnoInFunc_issue(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_process_report_catcher(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &process_report_catcher__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_action(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ action);
    void __VnoInFunc_set_context(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string context_str);
    void __VnoInFunc_set_id(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string id);
    void __VnoInFunc_set_message(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string message);
    void __VnoInFunc_set_severity(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*1:0*/ severity);
    void __VnoInFunc_set_verbosity(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity);
    void __VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_message> msg);
    void __VnoInFunc_uvm_report(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_fatal(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_info(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_warning(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_catcher() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_catcher();
};


#endif  // guard
