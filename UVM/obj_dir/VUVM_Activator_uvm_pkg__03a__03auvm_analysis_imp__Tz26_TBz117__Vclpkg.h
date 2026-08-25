// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ26_TBZ117__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ26_TBZ117__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz116;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz117__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz117__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz117__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz117__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz116__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz117 : public VUVM_Activator_uvm_pkg__03a__03auvm_port_base__Tz116 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_analysis_imp__Tz26_TBz117"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz117(*this); }
    virtual void __VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> t);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz117() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> imp);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz26_TBz117();
};


#endif  // guard
