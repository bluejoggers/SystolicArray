// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_REPORT_MESSAGE_ELEMENT_CONTAINER__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_REPORT_MESSAGE_ELEMENT_CONTAINER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_std__03a__03aprocess;
class VUVM_regblock_uvm_pkg__03a__03auvm_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi8;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_printer;
class VUVM_regblock_uvm_pkg__03a__03auvm_recorder;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_container;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_message_int_element;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_message_object_element;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_message_string_element;
class VUVM_regblock_uvm_pkg__03a__03auvm_status_container;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi8> &get_type__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_container : public VUVM_regblock_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_base>> __PVT__elements;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_message_element_container"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_container(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_add_int(VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_object(VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_string(VUVM_regblock__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_delete(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    virtual void __VnoInFunc_delete_elements(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_get_elements(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_base>> &get_elements__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_container() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_container();
};


#endif  // guard
