// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_SIMPLE_SEQUENCE__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_SIMPLE_SEQUENCE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi28;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi4;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_simple_sequence;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_simple_sequence__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_simple_sequence__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_simple_sequence__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_simple_sequence__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi28> &get_type__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_sequence___Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_simple_sequence : public Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_ {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> __PVT__item;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_simple_sequence"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_simple_sequence(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    void __VnoInFunc___VrandCb_post(Vuvm_pkg__Syms* __restrict vlSymsp) {}
    void __VnoInFunc___VrandCb_pre(Vuvm_pkg__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_simple_sequence() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_simple_sequence();
};


#endif  // guard
