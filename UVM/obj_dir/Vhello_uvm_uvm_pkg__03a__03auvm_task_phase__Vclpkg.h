// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_TASK_PHASE__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_TASK_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_std__03a__03aprocess;
class Vhello_uvm_uvm_pkg__03a__03a__VDynScope_8;
class Vhello_uvm_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_domain;
class Vhello_uvm_uvm_pkg__03a__03auvm_phase;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_uvm_pkg__03a__03auvm_seed_map;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_task_phase;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_task_phase__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_task_phase__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_task_phase__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_task_phase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_task_phase : public Vhello_uvm_uvm_pkg__03a__03auvm_phase {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__8__id;
    std::string __Vtask_uvm_report_info__16__id;
    std::string __Vtask_uvm_report_info__16__message;
    std::string __Vtask_uvm_report_info__16__filename;
    std::string __Vtask_uvm_report_info__16__context_name;
    std::string __Vfunc_uvm_report_enabled__28__id;
    std::string __Vtask_uvm_report_fatal__32__id;
    std::string __Vtask_uvm_report_fatal__32__message;
    std::string __Vtask_uvm_report_fatal__32__filename;
    std::string __Vtask_uvm_report_fatal__32__context_name;
    std::string __Vtask___VforkTask_0__37____VlefCall_1__get_full_name;
    std::string __Vtask___VforkTask_0__37____VlefCall_0__get_type_name;
    std::string __Vtask_get_type_name__39__Vfuncout;
    std::string __Vtask_get_full_name__40__Vfuncout;
    std::string __Vfunc_uvm_create_random_seed__41__type_id;
    std::string __Vfunc_uvm_create_random_seed__41__inst_id;
    std::string __Vfunc_uvm_create_random_seed__41____VlefCall_1__uvm_instance_scope;
    std::string __Vfunc_uvm_instance_scope__43__Vfuncout;
    std::string __Vtask_uvm_report_error__44__id;
    std::string __Vtask_uvm_report_error__44__message;
    std::string __Vtask_uvm_report_error__44__filename;
    std::string __Vtask_uvm_report_error__44__context_name;
    std::string __Vfunc_uvm_oneway_hash__48__string_in;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_task_phase"; }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_execute(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_execute____Vfork_1__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03a__VDynScope_8> __VDynScope_execute_0);
  public:
    void __VnoInFunc_m_traverse(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_traverse(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_task_phase() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_task_phase();
};


#endif  // guard
