// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_HEARTBEAT_CALLBACK__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_HEARTBEAT_CALLBACK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_objection;
class Vhello_uvm_uvm_pkg__03a__03auvm_objection_callback;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_objection_callback__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback : public Vhello_uvm_uvm_pkg__03a__03auvm_objection_callback {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object>, IData/*31:0*/> __PVT__cnt;
    VlAssocArray<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object>, QData/*63:0*/> __PVT__last_trigger;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> __PVT__target;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __PVT__cs;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_heartbeat_callback"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_dropped(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_objects_triggered(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &objects_triggered__Vfuncrtn);
    virtual void __VnoInFunc_raised(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_reset_counts(Vhello_uvm__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> target);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback();
};


#endif  // guard
