// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TYPEID__TZ20__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TYPEID__TZ20__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz20;
class Vuvm_pkg_uvm_pkg__03a__03auvm_typeid_base;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz20__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz20> __PVT__m_b_inst;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz20__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz20__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz20__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz20> &get__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_typeid_base__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz20 : public Vuvm_pkg_uvm_pkg__03a__03auvm_typeid_base {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typeid__Tz20"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz20(*this); }
    Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz20() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz20();
};


#endif  // guard
