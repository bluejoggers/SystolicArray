// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_RESOURCE_DB_OPTIONS__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_RESOURCE_DB_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_cmdline_processor;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__ready;
    CData/*0:0*/ __PVT__tracing;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_init(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_is_tracing(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn);
    void __VnoInFunc_turn_off_tracing(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_tracing(VUVM_regblock__Syms* __restrict vlSymsp);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_resource_db_options : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_db_options"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_resource_db_options(*this); }
    VUVM_regblock_uvm_pkg__03a__03auvm_resource_db_options() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp) {}
    ~VUVM_regblock_uvm_pkg__03a__03auvm_resource_db_options() {}
};


#endif  // guard
