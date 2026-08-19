// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_SEQUENCE_PROCESS_WRAPPER__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_SEQUENCE_PROCESS_WRAPPER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_std__03a__03aprocess;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vhello_uvm_std__03a__03aprocess> __PVT__pid;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> __PVT__seq;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequence_process_wrapper"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper(*this); }
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp);
    ~Vhello_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper() {}
};


#endif  // guard
