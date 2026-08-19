// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vuvm_pkg_uvm_pkg.h"


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<Vuvm_pkg_uvm_hdl_path_slice__struct__0> __PVT__slices;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_hdl_path_concat"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat(*this); }
    void __VnoInFunc_add_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string path, IData/*31:0*/ offset, IData/*31:0*/ size);
    void __VnoInFunc_add_slice(Vuvm_pkg__Syms* __restrict vlSymsp, Vuvm_pkg_uvm_hdl_path_slice__struct__0 slice);
    void __VnoInFunc_set(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<Vuvm_pkg_uvm_hdl_path_slice__struct__0> t);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp);
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat() {}
};


#endif  // guard
