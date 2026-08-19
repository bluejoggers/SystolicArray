// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_regblock_uvm_pkg.h"


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_hdl_path_concat : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VUVM_regblock_uvm_hdl_path_slice__struct__0> __PVT__slices;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_hdl_path_concat"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_hdl_path_concat(*this); }
    void __VnoInFunc_add_path(VUVM_regblock__Syms* __restrict vlSymsp, std::string path, IData/*31:0*/ offset, IData/*31:0*/ size);
    void __VnoInFunc_add_slice(VUVM_regblock__Syms* __restrict vlSymsp, VUVM_regblock_uvm_hdl_path_slice__struct__0 slice);
    void __VnoInFunc_set(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<VUVM_regblock_uvm_hdl_path_slice__struct__0> t);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_hdl_path_concat() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp);
    ~VUVM_regblock_uvm_pkg__03a__03auvm_hdl_path_concat() {}
};


#endif  // guard
