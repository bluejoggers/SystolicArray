// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_std__03a__03aprocess;
class VUVM_Activator_uvm_pkg__03a__03am_uvm_tr_stream_cfg;
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_object;
class VUVM_Activator_uvm_pkg__03a__03auvm_recorder;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;
class VUVM_Activator_uvm_pkg__03a__03auvm_set_before_get_dap__Tz20;
class VUVM_Activator_uvm_pkg__03a__03auvm_tr_database;
class VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream>, IData/*31:0*/> __PVT__m_ids_by_stream;
    VlAssocArray<IData/*31:0*/, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream>> __PVT__m_streams_by_id;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_stream_from_handle(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream> &get_stream_from_handle__Vfuncrtn);
    void __VnoInFunc_m_free_id(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ id);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream : public VUVM_Activator_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_warn_null_cfg;
    CData/*0:0*/ __PVT__m_is_opened;
    CData/*0:0*/ __PVT__m_is_closed;
    VlAssocArray<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder>, CData/*0:0*/> __PVT__m_records;
    std::string __Vfunc_uvm_report_enabled__3__id;
    std::string __Vtask_uvm_report_warning__8__id;
    std::string __Vtask_uvm_report_warning__8__message;
    std::string __Vtask_uvm_report_warning__8__filename;
    std::string __Vtask_uvm_report_warning__8__context_name;
    std::string __Vfunc_uvm_report_enabled__13__id;
    std::string __Vtask_uvm_report_warning__18__id;
    std::string __Vtask_uvm_report_warning__18__message;
    std::string __Vtask_uvm_report_warning__18__filename;
    std::string __Vtask_uvm_report_warning__18__context_name;
    std::string __Vfunc_uvm_report_enabled__23__id;
    std::string __Vtask_uvm_report_warning__28__id;
    std::string __Vtask_uvm_report_warning__28__message;
    std::string __Vtask_uvm_report_warning__28__filename;
    std::string __Vtask_uvm_report_warning__28__context_name;
    std::string __Vfunc_uvm_report_enabled__49__id;
    std::string __Vtask_uvm_report_error__54__id;
    std::string __Vtask_uvm_report_error__54__message;
    std::string __Vtask_uvm_report_error__54__filename;
    std::string __Vtask_uvm_report_error__54__context_name;
    std::string __Vfunc_uvm_report_enabled__59__id;
    std::string __Vtask_uvm_report_error__64__id;
    std::string __Vtask_uvm_report_error__64__message;
    std::string __Vtask_uvm_report_error__64__filename;
    std::string __Vtask_uvm_report_error__64__context_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_set_before_get_dap__Tz20> __PVT__m_cfg_dap;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tr_stream"; }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc_close(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_close(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_free(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name);
    virtual void __VnoInFunc_do_open_recorder(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn);
    void __VnoInFunc_free(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_db(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_database> &get_db__Vfuncrtn);
    void __VnoInFunc_get_handle(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn);
    void __VnoInFunc_get_recorders(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder>> &q, CData/*0:0*/ &get_recorders__Vfuncrtn);
    void __VnoInFunc_get_scope(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn);
    void __VnoInFunc_get_stream_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_stream_type_name__Vfuncrtn);
    void __VnoInFunc_is_closed(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn);
    void __VnoInFunc_is_open(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn);
    void __VnoInFunc_m_do_open(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name);
    void __VnoInFunc_m_free_recorder(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_m_get_handle(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_handle__Vfuncrtn);
    void __VnoInFunc_open_recorder(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> &open_recorder__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream();
};


#endif  // guard
