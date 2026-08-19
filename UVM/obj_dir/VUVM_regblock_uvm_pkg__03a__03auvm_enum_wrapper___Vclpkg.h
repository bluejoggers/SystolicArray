// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<std::string, CData/*0:0*/> __PVT__map;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_from_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &value, CData/*0:0*/ &from_name__Vfuncrtn);
    void __VnoInFunc_m_init_map(VUVM_regblock__Syms* __restrict vlSymsp);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_enum_wrapper_ : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_enum_wrapper_"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_enum_wrapper_(*this); }
    VUVM_regblock_uvm_pkg__03a__03auvm_enum_wrapper_() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp) {}
    ~VUVM_regblock_uvm_pkg__03a__03auvm_enum_wrapper_() {}
};


#endif  // guard
