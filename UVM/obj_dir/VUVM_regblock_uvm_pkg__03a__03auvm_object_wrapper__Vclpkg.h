// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_OBJECT_WRAPPER__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_OBJECT_WRAPPER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_object;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_object_wrapper"; }
    virtual void __VnoInFunc_create_component(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn);
    virtual void __VnoInFunc_create_object(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp) {}
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper();
};


#endif  // guard
