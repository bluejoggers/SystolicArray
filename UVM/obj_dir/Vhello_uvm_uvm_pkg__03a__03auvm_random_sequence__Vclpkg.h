// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_RANDOM_SEQUENCE__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_RANDOM_SEQUENCE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_comparer;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi26;
class Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vhello_uvm_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_uvm_pkg__03a__03auvm_random_sequence;
class Vhello_uvm_uvm_pkg__03a__03auvm_recorder;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_random_sequence__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_random_sequence__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_random_sequence__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_random_sequence__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi26> &get_type__Vfuncrtn);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_sequence___Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_random_sequence : public Vhello_uvm_uvm_pkg__03a__03auvm_sequence_ {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_success;
    IData/*31:0*/ __PVT__l_count;
    IData/*31:0*/ __PVT__l_exhaustive_seq_kind;
    IData/*31:0*/ __PVT__max_kind;
    IData/*31:0*/ __PVT__l_kind;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_random_sequence"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_random_sequence(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    void __VnoInFunc___Vrandwith_h509d7fc5__0(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_random_sequence> __Vthis, IData/*31:0*/ &__Vrandwith_h509d7fc5__0__Vfuncrtn);
    void __VnoInFunc___Vrandwith_h509d7fc5__1(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_random_sequence> __Vthis, IData/*31:0*/ &__Vrandwith_h509d7fc5__1__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_do_compare(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_do_record(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_get_count(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_count__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_random_sequence() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_random_sequence();
};


#endif  // guard
