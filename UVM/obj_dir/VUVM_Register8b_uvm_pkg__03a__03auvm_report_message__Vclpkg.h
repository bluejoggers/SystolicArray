// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_std__03a__03aprocess;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi6;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_recorder;
class VUVM_Register8b_uvm_pkg__03a__03auvm_report_handler;
class VUVM_Register8b_uvm_pkg__03a__03auvm_report_message;
class VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_container;
class VUVM_Register8b_uvm_pkg__03a__03auvm_report_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_report_server;
class VUVM_Register8b_uvm_pkg__03a__03auvm_status_container;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_report_message__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_report_message__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_report_message__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_report_message__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi6> &get_type__Vfuncrtn);
    void __VnoInFunc_new_report_message(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_message> &new_report_message__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_report_message : public VUVM_Register8b_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ __PVT___severity;
    IData/*31:0*/ __PVT___verbosity;
    IData/*31:0*/ __PVT___line;
    IData/*31:0*/ __PVT___action;
    IData/*31:0*/ __PVT___file;
    std::string __PVT___id;
    std::string __PVT___message;
    std::string __PVT___filename;
    std::string __PVT___context_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_object> __PVT___report_object;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_handler> __PVT___report_handler;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_server> __PVT___report_server;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_container> __PVT___report_message_element_container;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_message"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_report_message(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_add_int(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_object(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_string(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_get_action(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn);
    virtual void __VnoInFunc_get_context(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn);
    virtual void __VnoInFunc_get_element_container(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn);
    virtual void __VnoInFunc_get_file(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn);
    virtual void __VnoInFunc_get_filename(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_filename__Vfuncrtn);
    virtual void __VnoInFunc_get_id(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn);
    virtual void __VnoInFunc_get_line(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn);
    virtual void __VnoInFunc_get_message(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_report_handler(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn);
    virtual void __VnoInFunc_get_report_object(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_object> &get_report_object__Vfuncrtn);
    virtual void __VnoInFunc_get_report_server(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn);
    virtual void __VnoInFunc_get_severity(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_verbosity(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn);
    virtual void __VnoInFunc_m_record_core_properties(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_m_record_message(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_action(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ act);
    virtual void __VnoInFunc_set_context(VUVM_Register8b__Syms* __restrict vlSymsp, std::string cn);
    virtual void __VnoInFunc_set_file(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ fl);
    virtual void __VnoInFunc_set_filename(VUVM_Register8b__Syms* __restrict vlSymsp, std::string fname);
    virtual void __VnoInFunc_set_id(VUVM_Register8b__Syms* __restrict vlSymsp, std::string id);
    virtual void __VnoInFunc_set_line(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ ln);
    virtual void __VnoInFunc_set_message(VUVM_Register8b__Syms* __restrict vlSymsp, std::string msg);
    virtual void __VnoInFunc_set_report_handler(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_handler> rh);
    virtual void __VnoInFunc_set_report_message(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name);
    virtual void __VnoInFunc_set_report_object(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_object> ro);
    virtual void __VnoInFunc_set_report_server(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_server> rs);
    virtual void __VnoInFunc_set_severity(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*1:0*/ sev);
    virtual void __VnoInFunc_set_verbosity(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ ver);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_report_message() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_report_message();
};


#endif  // guard
