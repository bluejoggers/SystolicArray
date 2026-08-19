// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_MEM_MAM_POLICY__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_MEM_MAM_POLICY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_mem_region;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_policy : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__len;
    QData/*63:0*/ __PVT__start_offset;
    QData/*63:0*/ __PVT__min_offset;
    QData/*63:0*/ __PVT__max_offset;
    VlRandomizer __PVT__constraint;
    VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem_region>> __PVT__in_use;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem_mam_policy"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_policy(*this); }
    void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint(VUVM_regblock__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_policy() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp);
    ~VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_policy() {}
};


#endif  // guard
