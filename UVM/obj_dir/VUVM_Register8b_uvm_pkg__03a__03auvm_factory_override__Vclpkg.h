// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__selected;
    IData/*31:0*/ __PVT__used;
    std::string __PVT__full_inst_path;
    std::string __PVT__orig_type_name;
    std::string __PVT__ovrd_type_name;
    std::string __Vtask_uvm_report_fatal__0__id;
    std::string __Vtask_uvm_report_fatal__0__message;
    std::string __Vtask_uvm_report_fatal__0__filename;
    std::string __Vtask_uvm_report_fatal__0__context_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> __PVT__orig_type;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> __PVT__ovrd_type;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_factory_override"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override(*this); }
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type);
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override() {}
};


#endif  // guard
