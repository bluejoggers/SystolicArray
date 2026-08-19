// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ69_TBZ96__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ69_TBZ96__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_port_base__Tz97;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_item;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi22;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_port_base__Tz97__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96 : public Vhello_uvm_uvm_pkg__03a__03auvm_port_base__Tz97 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi22> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_analysis_imp__Tz69_TBz96"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96(*this); }
    virtual void __VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> t);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi22> imp);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz69_TBz96();
};


#endif  // guard
