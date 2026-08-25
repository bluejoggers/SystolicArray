// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ61_TBZ77__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ61_TBZ77__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b___024unit__03a__03areg_scoreboard;
class VUVM_Register8b___024unit__03a__03areg_txn;
class VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz78;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz77__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz77__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz77__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz77__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz78__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz77 : public VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz78 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_scoreboard> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_analysis_imp__Tz61_TBz77"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz77(*this); }
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> t);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz77() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b___024unit__03a__03areg_scoreboard> imp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz77();
};


#endif  // guard
