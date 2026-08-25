// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_DRIVER__TZ61_TBZ61__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_DRIVER__TZ61_TBZ61__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator___024unit__03a__03aact_txn;
class VUVM_Activator_uvm_pkg__03a__03auvm_analysis_port__Tz61;
class VUVM_Activator_uvm_pkg__03a__03auvm_component;
class VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61;
class VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61 : public VUVM_Activator_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21> __PVT__seq_item_port;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_seq_item_pull_port__pi21> __PVT__seq_item_prod_if;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_analysis_port__Tz61> __PVT__rsp_port;
    VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> __PVT__req;
    VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> __PVT__rsp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_driver__Tz61_TBz61"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_driver__Tz61_TBz61();
};


#endif  // guard
