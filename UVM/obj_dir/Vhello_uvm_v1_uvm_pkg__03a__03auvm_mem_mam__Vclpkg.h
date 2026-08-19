// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam_cfg;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam_policy;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_region;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam : public virtual VlClass {
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
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam_policy> __PVT__default_alloc;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem> __PVT__memory;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam_cfg> __PVT__cfg;
    VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_region>> __PVT__in_use;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem_mam"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam(*this); }
    void __VnoInFunc_convert2string(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_for_each(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ reset, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_region> &for_each__Vfuncrtn);
    void __VnoInFunc_get_memory(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    void __VnoInFunc_reconfigure(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam_cfg> &reconfigure__Vfuncrtn);
    void __VnoInFunc_release_all_regions(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_release_region(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_region> region);
    void __VnoInFunc_request_region(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ n_bytes, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_region> &request_region__Vfuncrtn);
    void __VnoInFunc_reserve_region(Vhello_uvm_v1__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, IData/*31:0*/ n_bytes, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_region> &reserve_region__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam() = default;
    void init(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem> mem);
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem_mam() {}
};


#endif  // guard
