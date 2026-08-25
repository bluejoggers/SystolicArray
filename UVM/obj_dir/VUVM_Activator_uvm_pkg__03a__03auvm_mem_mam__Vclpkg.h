// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_mem;
class VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam;
class VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_cfg;
class VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_policy;
class VUVM_Activator_uvm_pkg__03a__03auvm_mem_region;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__for_each_idx;
    IData/*31:0*/ __PVT__lineno;
    std::string __PVT__fname;
    std::string __Vfunc_uvm_report_enabled__9__id;
    std::string __Vtask_uvm_report_error__13__id;
    std::string __Vtask_uvm_report_error__13__message;
    std::string __Vtask_uvm_report_error__13__filename;
    std::string __Vtask_uvm_report_error__13__context_name;
    std::string __Vfunc_uvm_report_enabled__17__id;
    std::string __Vtask_uvm_report_error__21__id;
    std::string __Vtask_uvm_report_error__21__message;
    std::string __Vtask_uvm_report_error__21__filename;
    std::string __Vtask_uvm_report_error__21__context_name;
    std::string __Vfunc_uvm_report_enabled__25__id;
    std::string __Vtask_uvm_report_error__29__id;
    std::string __Vtask_uvm_report_error__29__message;
    std::string __Vtask_uvm_report_error__29__filename;
    std::string __Vtask_uvm_report_error__29__context_name;
    std::string __Vfunc_uvm_report_enabled__33__id;
    std::string __Vtask_uvm_report_info__37__id;
    std::string __Vtask_uvm_report_info__37__message;
    std::string __Vtask_uvm_report_info__37__filename;
    std::string __Vtask_uvm_report_info__37__context_name;
    std::string __Vfunc_uvm_report_enabled__43__id;
    std::string __Vtask_uvm_report_error__48__id;
    std::string __Vtask_uvm_report_error__48__message;
    std::string __Vtask_uvm_report_error__48__filename;
    std::string __Vtask_uvm_report_error__48__context_name;
    std::string __Vfunc_uvm_report_enabled__56__id;
    std::string __Vtask_uvm_report_error__60__id;
    std::string __Vtask_uvm_report_error__60__message;
    std::string __Vtask_uvm_report_error__60__filename;
    std::string __Vtask_uvm_report_error__60__context_name;
    std::string __Vfunc_uvm_report_enabled__65__id;
    std::string __Vtask_uvm_report_error__70__id;
    std::string __Vtask_uvm_report_error__70__message;
    std::string __Vtask_uvm_report_error__70__filename;
    std::string __Vtask_uvm_report_error__70__context_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_policy> __PVT__default_alloc;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem> __PVT__memory;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_cfg> __PVT__cfg;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_region>> __PVT__in_use;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem_mam"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam(*this); }
    void __VnoInFunc_convert2string(VUVM_Activator__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_for_each(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ reset, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_region> &for_each__Vfuncrtn);
    void __VnoInFunc_get_memory(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    void __VnoInFunc_reconfigure(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_cfg> &reconfigure__Vfuncrtn);
    void __VnoInFunc_release_all_regions(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc_release_region(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_region> region);
    void __VnoInFunc_request_region(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ n_bytes, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, std::string fname, IData/*31:0*/ lineno, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_region> &request_region__Vfuncrtn);
    void __VnoInFunc_reserve_region(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, IData/*31:0*/ n_bytes, std::string fname, IData/*31:0*/ lineno, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_region> &reserve_region__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem> mem);
    ~VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam() {}
};


#endif  // guard
