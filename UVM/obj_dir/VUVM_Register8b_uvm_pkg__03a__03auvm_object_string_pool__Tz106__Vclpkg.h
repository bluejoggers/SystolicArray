// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ106__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ106__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz106;
class VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz106;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz105;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz106__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz106> __PVT__m_global_pool;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz106__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz106__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz106__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(VUVM_Register8b__Syms* __restrict vlSymsp, std::string key, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz105> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_pool(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz106> &get_global_pool__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz106__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz106 : public VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz106 {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_warning__3__id;
    std::string __Vtask_uvm_report_warning__3__message;
    std::string __Vtask_uvm_report_warning__3__filename;
    std::string __Vtask_uvm_report_warning__3__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_object_string_pool__Tz106"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz106(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_delete(VUVM_Register8b__Syms* __restrict vlSymsp, std::string key);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string key, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz105> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz106() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz106();
};


#endif  // guard
