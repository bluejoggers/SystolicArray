// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_HEARTBEAT_CALLBACK__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_HEARTBEAT_CALLBACK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_object;
class VUVM_Activator_uvm_pkg__03a__03auvm_objection;
class VUVM_Activator_uvm_pkg__03a__03auvm_objection_callback;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_objection_callback__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback : public VUVM_Activator_uvm_pkg__03a__03auvm_objection_callback {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object>, IData/*31:0*/> __PVT__cnt;
    VlAssocArray<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object>, QData/*63:0*/> __PVT__last_trigger;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> __PVT__target;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __PVT__cs;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_heartbeat_callback"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_dropped(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_objects_triggered(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &objects_triggered__Vfuncrtn);
    virtual void __VnoInFunc_raised(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_reset_counts(VUVM_Activator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> target);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback();
};


#endif  // guard
