// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<std::string, CData/*0:0*/> __PVT__map;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_from_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &value, CData/*0:0*/ &from_name__Vfuncrtn);
    void __VnoInFunc_m_init_map(Vuvm_pkg__Syms* __restrict vlSymsp);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_enum_wrapper_ : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_enum_wrapper_"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_enum_wrapper_(*this); }
    Vuvm_pkg_uvm_pkg__03a__03auvm_enum_wrapper_() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp) {}
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_enum_wrapper_() {}
};


#endif  // guard
