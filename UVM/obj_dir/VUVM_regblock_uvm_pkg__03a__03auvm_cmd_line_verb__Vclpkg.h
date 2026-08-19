// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_CMD_LINE_VERB__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_CMD_LINE_VERB__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_cmd_line_verb__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_cmd_line_verb__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_cmd_line_verb__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_cmd_line_verb__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_cmd_line_verb : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__verb;
    IData/*31:0*/ __PVT__exec_time;
    std::string __PVT__comp_path;
    std::string __PVT__id;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_cmd_line_verb"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_cmd_line_verb(*this); }
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_cmd_line_verb() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp);
    ~VUVM_regblock_uvm_pkg__03a__03auvm_cmd_line_verb() {}
};


#endif  // guard
