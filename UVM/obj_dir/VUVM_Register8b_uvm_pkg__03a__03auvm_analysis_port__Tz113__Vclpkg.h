// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_ANALYSIS_PORT__TZ113__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_ANALYSIS_PORT__TZ113__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz126;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_if_base__Tz113_TBz113;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_port__Tz113__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_port__Tz113__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_port__Tz113__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_port__Tz113__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz126__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_port__Tz113 : public VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz126 {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_fatal__4__id;
    std::string __Vtask_uvm_report_fatal__4__message;
    std::string __Vtask_uvm_report_fatal__4__filename;
    std::string __Vtask_uvm_report_fatal__4__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_analysis_port__Tz113"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_port__Tz113(*this); }
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> t);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_port__Tz113() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_port__Tz113();
};


#endif  // guard
