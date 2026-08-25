// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Activator_uvm_pkg.h"


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VUVM_Activator_uvm_hdl_path_slice__struct__0> __PVT__slices;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_hdl_path_concat"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat(*this); }
    void __VnoInFunc_add_path(VUVM_Activator__Syms* __restrict vlSymsp, std::string path, IData/*31:0*/ offset, IData/*31:0*/ size);
    void __VnoInFunc_add_slice(VUVM_Activator__Syms* __restrict vlSymsp, VUVM_Activator_uvm_hdl_path_slice__struct__0 slice);
    void __VnoInFunc_set(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VUVM_Activator_uvm_hdl_path_slice__struct__0> t);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp);
    ~VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat() {}
};


#endif  // guard
