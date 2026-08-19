// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ30__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ30__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_spell_chkr__Tz30__Vclpkg final {
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
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_spell_chkr__Tz30__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_spell_chkr__Tz30__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_spell_chkr__Tz30__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_check(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29>> &strtab, std::string s, CData/*0:0*/ &check__Vfuncrtn);
    void __VnoInFunc_levenshtein_distance(Vhello_uvm__Syms* __restrict vlSymsp, std::string s, std::string t, IData/*31:0*/ &levenshtein_distance__Vfuncrtn);
    void __VnoInFunc_minimum(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ c, IData/*31:0*/ &minimum__Vfuncrtn);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_spell_chkr__Tz30 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_spell_chkr__Tz30"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_spell_chkr__Tz30(*this); }
    Vhello_uvm_uvm_pkg__03a__03auvm_spell_chkr__Tz30() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp) {}
    ~Vhello_uvm_uvm_pkg__03a__03auvm_spell_chkr__Tz30() {}
};


#endif  // guard
