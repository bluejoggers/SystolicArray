// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_RESOURCE__TZ109__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_RESOURCE__TZ109__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block;
class VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109;
class VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__4__id;
    std::string __Vtask_uvm_report_warning__8__id;
    std::string __Vtask_uvm_report_warning__8__message;
    std::string __Vtask_uvm_report_warning__8__filename;
    std::string __Vtask_uvm_report_warning__8__context_name;
    std::string __Vfunc_uvm_report_enabled__14__id;
    std::string __Vtask_uvm_report_warning__18__id;
    std::string __Vtask_uvm_report_warning__18__message;
    std::string __Vtask_uvm_report_warning__18__filename;
    std::string __Vtask_uvm_report_warning__18__context_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109> __PVT__my_type;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(VUVM_Register8b__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109> &get_by_type__Vfuncrtn);
    void __VnoInFunc_get_highest_precedence(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> &q, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_get_type(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109> &get_type__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109 : public VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_warning__5__id;
    std::string __Vtask_uvm_report_warning__5__message;
    std::string __Vtask_uvm_report_warning__5__filename;
    std::string __Vtask_uvm_report_warning__5__context_name;
    std::string __Vtask_uvm_report_error__17__id;
    std::string __Vtask_uvm_report_error__17__message;
    std::string __Vtask_uvm_report_error__17__filename;
    std::string __Vtask_uvm_report_error__17__context_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> __PVT__val;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource__Tz109"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_get_type_handle(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_read(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> &read__Vfuncrtn);
    void __VnoInFunc_set(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_override(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*1:0*/ __SYM__override);
    void __VnoInFunc_set_priority(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ pri);
    void __VnoInFunc_write(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> t, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> accessor);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string scope);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109();
};


#endif  // guard
