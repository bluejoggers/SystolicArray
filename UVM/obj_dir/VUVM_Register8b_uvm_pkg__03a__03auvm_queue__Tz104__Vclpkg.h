// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_QUEUE__TZ104__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_QUEUE__TZ104__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz104;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz104__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz104> __PVT__m_global_queue;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz104__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz104__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz104__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_queue(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz104> &get_global_queue__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz104 : public VUVM_Register8b_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_warning__3__id;
    std::string __Vtask_uvm_report_warning__3__message;
    std::string __Vtask_uvm_report_warning__3__filename;
    std::string __Vtask_uvm_report_warning__3__context_name;
    std::string __Vtask_uvm_report_warning__9__id;
    std::string __Vtask_uvm_report_warning__9__message;
    std::string __Vtask_uvm_report_warning__9__filename;
    std::string __Vtask_uvm_report_warning__9__context_name;
    std::string __Vtask_uvm_report_warning__15__id;
    std::string __Vtask_uvm_report_warning__15__message;
    std::string __Vtask_uvm_report_warning__15__filename;
    std::string __Vtask_uvm_report_warning__15__context_name;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat>> __PVT__queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_queue__Tz104"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz104(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_delete(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_insert(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat> item);
    virtual void __VnoInFunc_pop_back(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_back__Vfuncrtn);
    virtual void __VnoInFunc_pop_front(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_front__Vfuncrtn);
    virtual void __VnoInFunc_push_back(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat> item);
    virtual void __VnoInFunc_push_front(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat> item);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz104() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz104();
};


#endif  // guard
