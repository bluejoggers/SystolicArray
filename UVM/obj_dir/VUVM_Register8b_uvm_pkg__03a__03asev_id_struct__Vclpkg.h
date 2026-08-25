// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03ASEV_ID_STRUCT__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03ASEV_ID_STRUCT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03asev_id_struct__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03asev_id_struct__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03asev_id_struct__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03asev_id_struct__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03asev_id_struct : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__sev_specified;
    CData/*0:0*/ __PVT__id_specified;
    CData/*1:0*/ __PVT__sev;
    CData/*0:0*/ __PVT__is_on;
    std::string __PVT__id;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::sev_id_struct"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03asev_id_struct(*this); }
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03asev_id_struct() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    ~VUVM_Register8b_uvm_pkg__03a__03asev_id_struct() {}
};


#endif  // guard
