// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_COMPARER__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_COMPARER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_init(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer> &init__Vfuncrtn);
};


class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ __PVT__sev;
    CData/*0:0*/ __PVT__physical;
    CData/*0:0*/ __PVT__abstract;
    CData/*0:0*/ __PVT__check_type;
    IData/*31:0*/ __PVT__policy;
    IData/*31:0*/ __PVT__show_max;
    IData/*31:0*/ __PVT__verbosity;
    IData/*31:0*/ __PVT__result;
    IData/*31:0*/ __PVT__depth;
    std::string __PVT__miscompares;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object>, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object>> __PVT__compare_map;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack> __PVT__scope;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_comparer"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer(*this); }
    virtual void __VnoInFunc_compare_field(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ lhs, VlWide<128>/*4095:0*/ rhs, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*0:0*/ &compare_field__Vfuncrtn);
    virtual void __VnoInFunc_compare_field_int(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ lhs, QData/*63:0*/ rhs, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*0:0*/ &compare_field_int__Vfuncrtn);
    virtual void __VnoInFunc_compare_field_real(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, double lhs, double rhs, CData/*0:0*/ &compare_field_real__Vfuncrtn);
    virtual void __VnoInFunc_compare_object(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> rhs, CData/*0:0*/ &compare_object__Vfuncrtn);
    virtual void __VnoInFunc_compare_string(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, std::string lhs, std::string rhs, CData/*0:0*/ &compare_string__Vfuncrtn);
    void __VnoInFunc_print_msg(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string msg);
    void __VnoInFunc_print_msg_object(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_print_rollup(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> lhs);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer() = default;
    void init(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer() {}
};


#endif  // guard
