// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TEXT_TR_DATABASE__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TEXT_TR_DATABASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_link_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Register8b_uvm_pkg__03a__03auvm_parent_child_link;
class VUVM_Register8b_uvm_pkg__03a__03auvm_recorder;
class VUVM_Register8b_uvm_pkg__03a__03auvm_related_link;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_simple_lock_dap__Tz2;
class VUVM_Register8b_uvm_pkg__03a__03auvm_status_container;
class VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_database;
class VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_stream;
class VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database;
class VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7> &get_type__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_database : public VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_file;
    std::string __Vfunc_uvm_report_enabled__18__id;
    std::string __Vtask_uvm_report_warning__22__id;
    std::string __Vtask_uvm_report_warning__22__message;
    std::string __Vtask_uvm_report_warning__22__filename;
    std::string __Vtask_uvm_report_warning__22__context_name;
    std::string __Vfunc_uvm_report_enabled__27__id;
    std::string __Vtask_uvm_report_warning__31__id;
    std::string __Vtask_uvm_report_warning__31__message;
    std::string __Vtask_uvm_report_warning__31__filename;
    std::string __Vtask_uvm_report_warning__31__context_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_simple_lock_dap__Tz2> __PVT__m_filename_dap;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_text_tr_database"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_database(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_close_db(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn);
  private:
    VlCoroutine __VnoInFunc_do_close_db____Vfork_1__0(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    virtual void __VnoInFunc_do_establish_link(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_link_base> link);
    virtual void __VnoInFunc_do_open_db(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn);
    virtual void __VnoInFunc_do_open_stream(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_file_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string filename);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_database() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_database();
};


#endif  // guard
