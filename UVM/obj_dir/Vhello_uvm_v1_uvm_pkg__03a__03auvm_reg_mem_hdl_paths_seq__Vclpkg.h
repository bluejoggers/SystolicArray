// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vhello_uvm_v1_uvm_pkg.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_registry__pi48;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_packer;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer_knobs;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_recorder;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_sequence_;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_scope_stack;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_registry__pi48> &get_type__Vfuncrtn);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_sequence___Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_sequence_ {
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
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_check_mem(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem> m, std::string kind);
    virtual void __VnoInFunc_check_reg(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> r, std::string kind);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_block(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> blk, std::string kind);
    virtual void __VnoInFunc_get_object_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset_blk(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> blk);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq();
};


#endif  // guard
