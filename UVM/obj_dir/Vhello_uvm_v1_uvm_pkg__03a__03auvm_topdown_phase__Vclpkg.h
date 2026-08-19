// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_TOPDOWN_PHASE__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_TOPDOWN_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_std__03a__03aprocess;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_seed_map;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_topdown_phase;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_topdown_phase__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_topdown_phase__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_topdown_phase__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_topdown_phase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_topdown_phase : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__3__id;
    std::string __Vtask_uvm_report_info__11__id;
    std::string __Vtask_uvm_report_info__11__message;
    std::string __Vtask_uvm_report_info__11__filename;
    std::string __Vtask_uvm_report_info__11__context_name;
    std::string __Vfunc_uvm_report_enabled__22__id;
    std::string __Vtask_uvm_report_fatal__26__id;
    std::string __Vtask_uvm_report_fatal__26__message;
    std::string __Vtask_uvm_report_fatal__26__filename;
    std::string __Vtask_uvm_report_fatal__26__context_name;
    std::string __Vfunc_uvm_create_random_seed__37__type_id;
    std::string __Vfunc_uvm_create_random_seed__37__inst_id;
    std::string __Vfunc_uvm_create_random_seed__37____VlefCall_1__uvm_instance_scope;
    std::string __Vfunc_uvm_instance_scope__39__Vfuncout;
    std::string __Vtask_uvm_report_error__40__id;
    std::string __Vtask_uvm_report_error__40__message;
    std::string __Vtask_uvm_report_error__40__filename;
    std::string __Vtask_uvm_report_error__40__context_name;
    std::string __Vfunc_uvm_oneway_hash__44__string_in;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_topdown_phase"; }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_execute(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_traverse(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_topdown_phase() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_topdown_phase();
};


#endif  // guard
