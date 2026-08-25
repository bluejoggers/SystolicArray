// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_CONFIG_DB_OPTIONS__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_CONFIG_DB_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_config_db_options__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__ready;
    CData/*0:0*/ __PVT__tracing;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_config_db_options__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_config_db_options__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_config_db_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_is_tracing(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn);
    void __VnoInFunc_turn_off_tracing(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_tracing(VUVM_Register8b__Syms* __restrict vlSymsp);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_config_db_options : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db_options"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_config_db_options(*this); }
    VUVM_Register8b_uvm_pkg__03a__03auvm_config_db_options() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp) {}
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_config_db_options() {}
};


#endif  // guard
