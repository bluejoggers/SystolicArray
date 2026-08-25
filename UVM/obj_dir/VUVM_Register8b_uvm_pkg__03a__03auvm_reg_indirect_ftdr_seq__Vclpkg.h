// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_REG_INDIRECT_FTDR_SEQ__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_REG_INDIRECT_FTDR_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_frontdoor;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_reg_frontdoor__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq : public VUVM_Register8b_uvm_pkg__03a__03auvm_reg_frontdoor {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_idx;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> __PVT__m_addr_reg;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> __PVT__m_data_reg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_indirect_ftdr_seq"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> addr_reg, IData/*31:0*/ idx, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> data_reg);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq();
};


#endif  // guard
