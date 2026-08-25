// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_REG_ITEM__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_REG_ITEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi31;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item;
class VUVM_Register8b_uvm_pkg__03a__03auvm_status_container;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi31> &get_type__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item : public VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__element_kind;
    IData/*31:0*/ __PVT__kind;
    IData/*31:0*/ __PVT__status;
    IData/*31:0*/ __PVT__path;
    IData/*31:0*/ __PVT__prior;
    IData/*31:0*/ __PVT__lineno;
    IData/*31:0*/ __Vvalue_size;
    QData/*63:0*/ __PVT__offset;
    VlQueue<QData/*63:0*/> __PVT__value;
    std::string __PVT__bd_kind;
    std::string __PVT__fname;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> __PVT__element;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> __PVT__local_map;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> __PVT__map;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> __PVT__parent;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> __PVT__extension;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_item"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    void __VnoInFunc___VrandCb_post(VUVM_Register8b__Syms* __restrict vlSymsp) {}
    void __VnoInFunc___VrandCb_pre(VUVM_Register8b__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc___Vresize_constrained_arrays(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_max_values_resize_constrained_array(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_max_values_setup_constraint(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item();
};


#endif  // guard
