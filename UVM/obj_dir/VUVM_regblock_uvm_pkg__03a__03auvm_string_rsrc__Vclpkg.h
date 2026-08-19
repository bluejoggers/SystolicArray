// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_STRING_RSRC__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_STRING_RSRC__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz2;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;
class VUVM_regblock_uvm_pkg__03a__03auvm_string_rsrc;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_fatal__5__id;
    std::string __Vtask_uvm_report_fatal__5__message;
    std::string __Vtask_uvm_report_fatal__5__filename;
    std::string __Vtask_uvm_report_fatal__5__context_name;
    std::string __Vfunc_uvm_report_enabled__10__id;
    std::string __Vtask_uvm_report_fatal__14__id;
    std::string __Vtask_uvm_report_fatal__14__message;
    std::string __Vtask_uvm_report_fatal__14__filename;
    std::string __Vtask_uvm_report_fatal__14__context_name;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_by_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_string_rsrc> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_string_rsrc> &get_by_type__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz2__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_string_rsrc : public VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz2 {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_string_rsrc"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_string_rsrc(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VUVM_regblock_uvm_pkg__03a__03auvm_string_rsrc() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, std::string s);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_string_rsrc();
};


#endif  // guard
