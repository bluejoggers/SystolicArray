// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TR_DATABASE__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TR_DATABASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_std__03a__03aprocess;
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_link_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_recorder;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database;
class VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database : public VUVM_Register8b_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_is_opened;
    VlAssocArray<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream>, CData/*0:0*/> __PVT__m_streams;
    std::string __Vfunc_uvm_report_enabled__11__id;
    std::string __Vtask_uvm_report_warning__15__id;
    std::string __Vtask_uvm_report_warning__15__message;
    std::string __Vtask_uvm_report_warning__15__filename;
    std::string __Vtask_uvm_report_warning__15__context_name;
    std::string __Vfunc_uvm_report_enabled__19__id;
    std::string __Vtask_uvm_report_warning__23__id;
    std::string __Vtask_uvm_report_warning__23__message;
    std::string __Vtask_uvm_report_warning__23__filename;
    std::string __Vtask_uvm_report_warning__23__context_name;
    std::string __Vfunc_uvm_report_enabled__27__id;
    std::string __Vtask_uvm_report_warning__32__id;
    std::string __Vtask_uvm_report_warning__32__message;
    std::string __Vtask_uvm_report_warning__32__filename;
    std::string __Vtask_uvm_report_warning__32__context_name;
    std::string __Vfunc_uvm_report_enabled__36__id;
    std::string __Vtask_uvm_report_warning__41__id;
    std::string __Vtask_uvm_report_warning__41__message;
    std::string __Vtask_uvm_report_warning__41__filename;
    std::string __Vtask_uvm_report_warning__41__context_name;
    std::string __Vfunc_uvm_report_enabled__49__id;
    std::string __Vtask_uvm_report_warning__55__id;
    std::string __Vtask_uvm_report_warning__55__message;
    std::string __Vtask_uvm_report_warning__55__filename;
    std::string __Vtask_uvm_report_warning__55__context_name;
    std::string __Vfunc_uvm_report_enabled__61__id;
    std::string __Vtask_uvm_report_warning__67__id;
    std::string __Vtask_uvm_report_warning__67__message;
    std::string __Vtask_uvm_report_warning__67__filename;
    std::string __Vtask_uvm_report_warning__67__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tr_database"; }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_close_db(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &close_db__Vfuncrtn);
    virtual void __VnoInFunc_do_close_db(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn);
    virtual void __VnoInFunc_do_establish_link(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_link_base> link);
    virtual void __VnoInFunc_do_open_db(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn);
    virtual void __VnoInFunc_do_open_stream(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn);
    void __VnoInFunc_establish_link(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_link_base> link);
    void __VnoInFunc_get_streams(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream>> &q, CData/*0:0*/ &get_streams__Vfuncrtn);
    void __VnoInFunc_is_open(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn);
    void __VnoInFunc_m_free_stream(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream> stream);
    void __VnoInFunc_open_db(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &open_db__Vfuncrtn);
    void __VnoInFunc_open_stream(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream> &open_stream__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database();
};


#endif  // guard
