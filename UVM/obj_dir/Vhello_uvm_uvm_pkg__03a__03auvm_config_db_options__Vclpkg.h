// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_CONFIG_DB_OPTIONS__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_CONFIG_DB_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_cmdline_processor;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_config_db_options__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__ready;
    CData/*0:0*/ __PVT__tracing;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_config_db_options__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_config_db_options__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_config_db_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_is_tracing(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn);
    void __VnoInFunc_turn_off_tracing(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_tracing(Vhello_uvm__Syms* __restrict vlSymsp);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_config_db_options : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db_options"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_config_db_options(*this); }
    Vhello_uvm_uvm_pkg__03a__03auvm_config_db_options() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp) {}
    ~Vhello_uvm_uvm_pkg__03a__03auvm_config_db_options() {}
};


#endif  // guard
