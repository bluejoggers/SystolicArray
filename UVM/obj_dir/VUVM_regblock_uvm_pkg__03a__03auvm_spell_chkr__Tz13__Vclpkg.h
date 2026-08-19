// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ13__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ13__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz5;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_spell_chkr__Tz13__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__max;
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_info__5__id;
    std::string __Vtask_uvm_report_info__5__message;
    std::string __Vtask_uvm_report_info__5__filename;
    std::string __Vtask_uvm_report_info__5__context_name;
    std::string __Vfunc_uvm_report_enabled__9__id;
    std::string __Vfunc_m_uvm_string_queue_join__13__Vfuncout;
    std::string __Vtask_uvm_report_info__14__id;
    std::string __Vtask_uvm_report_info__14__message;
    std::string __Vtask_uvm_report_info__14__filename;
    std::string __Vtask_uvm_report_info__14__context_name;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_spell_chkr__Tz13__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_spell_chkr__Tz13__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_spell_chkr__Tz13__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_check(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz5>> &strtab, std::string s, CData/*0:0*/ &check__Vfuncrtn);
    void __VnoInFunc_levenshtein_distance(VUVM_regblock__Syms* __restrict vlSymsp, std::string s, std::string t, IData/*31:0*/ &levenshtein_distance__Vfuncrtn);
    void __VnoInFunc_minimum(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ c, IData/*31:0*/ &minimum__Vfuncrtn);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_spell_chkr__Tz13 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_spell_chkr__Tz13"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_spell_chkr__Tz13(*this); }
    VUVM_regblock_uvm_pkg__03a__03auvm_spell_chkr__Tz13() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp) {}
    ~VUVM_regblock_uvm_pkg__03a__03auvm_spell_chkr__Tz13() {}
};


#endif  // guard
