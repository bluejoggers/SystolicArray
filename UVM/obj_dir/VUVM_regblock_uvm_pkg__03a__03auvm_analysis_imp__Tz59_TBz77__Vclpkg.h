// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ59_TBZ77__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ59_TBZ77__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock___024unit__03a__03areg_scoreboard;
class VUVM_regblock___024unit__03a__03areg_txn_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz79;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz59_TBz77__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz59_TBz77__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz59_TBz77__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz59_TBz77__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz79__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz59_TBz77 : public VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz79 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_regblock___024unit__03a__03areg_scoreboard> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_analysis_imp__Tz59_TBz77"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz59_TBz77(*this); }
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> t);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz59_TBz77() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock___024unit__03a__03areg_scoreboard> imp);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz59_TBz77();
};


#endif  // guard
