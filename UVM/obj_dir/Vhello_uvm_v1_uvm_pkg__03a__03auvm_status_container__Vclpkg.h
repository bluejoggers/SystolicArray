// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_STATUS_CONTAINER__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_STATUS_CONTAINER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_packer;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_recorder;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_matches;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__field_array;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clone;
    CData/*0:0*/ __PVT__warning;
    CData/*0:0*/ __PVT__status;
    CData/*0:0*/ __PVT__array_warning_done;
    VlWide<128>/*4095:0*/ __PVT__bitstream;
    IData/*31:0*/ __PVT__intv;
    IData/*31:0*/ __PVT__element;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object>, CData/*0:0*/> __PVT__cycle_check;
    std::string __PVT__stringv;
    std::string __PVT__scratch1;
    std::string __PVT__scratch2;
    std::string __PVT__key;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> __PVT__object;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack> __PVT__scope;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer> __PVT__comparer;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_packer> __PVT__packer;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_recorder> __PVT__recorder;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer> __PVT__printer;
    VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object>> __PVT__m_uvm_cycle_scopes;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_status_container"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container(*this); }
    void __VnoInFunc_do_field_check(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string field, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> obj);
    void __VnoInFunc_get_full_scope_arg(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_full_scope_arg__Vfuncrtn);
    void __VnoInFunc_get_function_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ what, std::string &get_function_type__Vfuncrtn);
    void __VnoInFunc_m_do_cycle_check(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> scope, CData/*0:0*/ &m_do_cycle_check__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container() = default;
    void init(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container() {}
};


#endif  // guard
