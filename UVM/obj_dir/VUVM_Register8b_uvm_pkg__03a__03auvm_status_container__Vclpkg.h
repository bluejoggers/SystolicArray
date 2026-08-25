// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_STATUS_CONTAINER__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_STATUS_CONTAINER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_comparer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_packer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_recorder;
class VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_status_container__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_matches;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__field_array;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_status_container__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_status_container__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_status_container__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_status_container : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clone;
    CData/*0:0*/ __PVT__warning;
    CData/*0:0*/ __PVT__status;
    CData/*0:0*/ __PVT__array_warning_done;
    VlWide<128>/*4095:0*/ __PVT__bitstream;
    IData/*31:0*/ __PVT__intv;
    IData/*31:0*/ __PVT__element;
    VlAssocArray<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>, CData/*0:0*/> __PVT__cycle_check;
    std::string __PVT__stringv;
    std::string __PVT__scratch1;
    std::string __PVT__scratch2;
    std::string __PVT__key;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> __PVT__object;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack> __PVT__scope;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_comparer> __PVT__comparer;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> __PVT__packer;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_recorder> __PVT__recorder;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> __PVT__printer;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>> __PVT__m_uvm_cycle_scopes;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_status_container"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_status_container(*this); }
    void __VnoInFunc_do_field_check(VUVM_Register8b__Syms* __restrict vlSymsp, std::string field, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj);
    void __VnoInFunc_get_full_scope_arg(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_full_scope_arg__Vfuncrtn);
    void __VnoInFunc_get_function_type(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ what, std::string &get_function_type__Vfuncrtn);
    void __VnoInFunc_m_do_cycle_check(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> scope, CData/*0:0*/ &m_do_cycle_check__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_status_container() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_status_container() {}
};


#endif  // guard
