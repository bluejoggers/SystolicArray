// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_TYPEID__TZ18__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_TYPEID__TZ18__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz18;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid_base;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz18__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz18> __PVT__m_b_inst;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz18__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz18__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz18__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz18> &get__Vfuncrtn);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid_base__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz18 : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid_base {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typeid__Tz18"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz18(*this); }
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz18() = default;
    void init(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz18();
};


#endif  // guard
