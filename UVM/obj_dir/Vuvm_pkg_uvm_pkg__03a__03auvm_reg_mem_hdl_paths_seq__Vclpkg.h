// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vuvm_pkg_uvm_pkg.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_comparer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vuvm_pkg_uvm_pkg__03a__03auvm_mem;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi46;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper;
class Vuvm_pkg_uvm_pkg__03a__03auvm_packer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer_knobs;
class Vuvm_pkg_uvm_pkg__03a__03auvm_recorder;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;
class Vuvm_pkg_uvm_pkg__03a__03auvm_scope_stack;
class Vuvm_pkg_uvm_pkg__03a__03auvm_status_container;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi46> &get_type__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence___Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq : public Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_ {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__abstractions;
    std::string __Vfunc_uvm_is_match__36__expr;
    std::string __Vfunc_uvm_is_match__36__str;
    std::string __Vfunc_uvm_glob_to_re__37__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__37__glob;
    std::string __Vfunc_uvm_re_match__38__re;
    std::string __Vfunc_uvm_re_match__38__str;
    std::string __Vfunc_uvm_get_array_index_int__42__arg;
    std::string __Vfunc_uvm_is_array__43__arg;
    std::string __Vfunc_uvm_is_match__45__expr;
    std::string __Vfunc_uvm_is_match__45__str;
    std::string __Vfunc_uvm_glob_to_re__46__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__46__glob;
    std::string __Vfunc_uvm_re_match__47__re;
    std::string __Vfunc_uvm_re_match__47__str;
    std::string __Vfunc_uvm_is_match__51__expr;
    std::string __Vfunc_uvm_is_match__51__str;
    std::string __Vfunc_uvm_glob_to_re__52__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__52__glob;
    std::string __Vfunc_uvm_re_match__53__re;
    std::string __Vfunc_uvm_re_match__53__str;
    std::string __Vtask_uvm_report_fatal__77__id;
    std::string __Vtask_uvm_report_fatal__77__message;
    std::string __Vtask_uvm_report_fatal__77__filename;
    std::string __Vtask_uvm_report_fatal__77__context_name;
    std::string __Vtask_uvm_report_fatal__85__id;
    std::string __Vtask_uvm_report_fatal__85__message;
    std::string __Vtask_uvm_report_fatal__85__filename;
    std::string __Vtask_uvm_report_fatal__85__context_name;
    std::string __Vtask_uvm_report_fatal__95__id;
    std::string __Vtask_uvm_report_fatal__95__message;
    std::string __Vtask_uvm_report_fatal__95__filename;
    std::string __Vtask_uvm_report_fatal__95__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_mem_hdl_paths_seq"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_check_mem(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_mem> m, std::string kind);
    virtual void __VnoInFunc_check_reg(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> r, std::string kind);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_block(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> blk, std::string kind);
    virtual void __VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset_blk(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> blk);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq();
};


#endif  // guard
