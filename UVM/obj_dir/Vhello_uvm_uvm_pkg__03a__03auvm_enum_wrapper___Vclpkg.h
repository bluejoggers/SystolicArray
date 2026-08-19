// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<std::string, CData/*0:0*/> __PVT__map;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_from_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &value, CData/*0:0*/ &from_name__Vfuncrtn);
    void __VnoInFunc_m_init_map(Vhello_uvm__Syms* __restrict vlSymsp);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper_ : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_enum_wrapper_"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper_(*this); }
    Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper_() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp) {}
    ~Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper_() {}
};


#endif  // guard
