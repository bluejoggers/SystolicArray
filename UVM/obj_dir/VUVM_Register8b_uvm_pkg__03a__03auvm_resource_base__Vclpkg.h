// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_RESOURCE_BASE__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_RESOURCE_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Register8b_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__default_precedence;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base : public VUVM_Register8b_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__modified;
    CData/*0:0*/ __PVT__read_only;
    IData/*31:0*/ __PVT__precedence;
    VlAssocArray<std::string, VUVM_Register8b_access_t__struct__0> __PVT__access;
    std::string __PVT__scope;
    std::string __Vfunc_uvm_glob_to_re__2__glob;
    std::string __Vfunc_uvm_re_match__3__re;
    std::string __Vfunc_uvm_re_match__3__str;
    std::string __Vfunc_uvm_report_enabled__14__id;
    std::string __Vfunc_m_uvm_string_queue_join__18__Vfuncout;
    std::string __Vtask_uvm_report_info__19__id;
    std::string __Vtask_uvm_report_info__19__message;
    std::string __Vtask_uvm_report_info__19__filename;
    std::string __Vtask_uvm_report_info__19__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_base"; }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_scope(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn);
    virtual void __VnoInFunc_get_type_handle(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn);
    void __VnoInFunc_init_access_record(VUVM_Register8b__Syms* __restrict vlSymsp, VUVM_Register8b_access_t__struct__0 &access_record);
    void __VnoInFunc_is_read_only(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read_only__Vfuncrtn);
    void __VnoInFunc_match_scope(VUVM_Register8b__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &match_scope__Vfuncrtn);
    virtual void __VnoInFunc_print_accessors(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record_read_access(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_record_write_access(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> accessor);
    virtual void __VnoInFunc_set_priority(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ pri);
    void __VnoInFunc_set_read_only(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_read_write(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_scope(VUVM_Register8b__Syms* __restrict vlSymsp, std::string s);
    VlCoroutine __VnoInFunc_wait_modified(VUVM_Register8b__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string s);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base();
};


#endif  // guard
