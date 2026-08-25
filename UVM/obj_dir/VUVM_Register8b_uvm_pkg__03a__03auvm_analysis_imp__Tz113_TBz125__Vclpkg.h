// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ113_TBZ125__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ113_TBZ125__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz126;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi35;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz113_TBz125__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz113_TBz125__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz113_TBz125__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz113_TBz125__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz126__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz113_TBz125 : public VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz126 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi35> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_analysis_imp__Tz113_TBz125"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz113_TBz125(*this); }
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> t);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz113_TBz125() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi35> imp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz113_TBz125();
};


#endif  // guard
