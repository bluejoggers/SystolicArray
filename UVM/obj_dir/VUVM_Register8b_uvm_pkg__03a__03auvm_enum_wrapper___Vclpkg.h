// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<std::string, CData/*0:0*/> __PVT__map;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_from_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &value, CData/*0:0*/ &from_name__Vfuncrtn);
    void __VnoInFunc_m_init_map(VUVM_Register8b__Syms* __restrict vlSymsp);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_enum_wrapper_ : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_enum_wrapper_"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_enum_wrapper_(*this); }
    VUVM_Register8b_uvm_pkg__03a__03auvm_enum_wrapper_() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp) {}
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_enum_wrapper_() {}
};


#endif  // guard
