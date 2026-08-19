// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_DRIVER__TZ59_TBZ59__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_DRIVER__TZ59_TBZ59__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock___024unit__03a__03areg_txn_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_analysis_port__Tz59;
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_driver__Tz59_TBz59;
class VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi22;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_driver__Tz59_TBz59__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_driver__Tz59_TBz59__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_driver__Tz59_TBz59__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_driver__Tz59_TBz59__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_driver__Tz59_TBz59 : public VUVM_regblock_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi22> __PVT__seq_item_port;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi22> __PVT__seq_item_prod_if;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_analysis_port__Tz59> __PVT__rsp_port;
    VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> __PVT__req;
    VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> __PVT__rsp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_driver__Tz59_TBz59"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_driver__Tz59_TBz59(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_driver__Tz59_TBz59() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_driver__Tz59_TBz59();
};


#endif  // guard
