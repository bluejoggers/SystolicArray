// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ42_TBZ83__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ42_TBZ83__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz82;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz82__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83 : public Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz82 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_analysis_imp__Tz42_TBz83"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83(*this); }
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> t);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> imp);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz83();
};


#endif  // guard
