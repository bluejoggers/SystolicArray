// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Activator_uvm_pkg.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_comparer;
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat;
class VUVM_Activator_uvm_pkg__03a__03auvm_mem;
class VUVM_Activator_uvm_pkg__03a__03auvm_object;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi59;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Activator_uvm_pkg__03a__03auvm_packer;
class VUVM_Activator_uvm_pkg__03a__03auvm_printer;
class VUVM_Activator_uvm_pkg__03a__03auvm_printer_knobs;
class VUVM_Activator_uvm_pkg__03a__03auvm_recorder;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_block;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence_;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;
class VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack;
class VUVM_Activator_uvm_pkg__03a__03auvm_status_container;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi59> &get_type__Vfuncrtn);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence___Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq : public VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence_ {
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
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_check_mem(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem> m, std::string kind);
    virtual void __VnoInFunc_check_reg(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg> r, std::string kind);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_block(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> blk, std::string kind);
    virtual void __VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset_blk(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> blk);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq();
};


#endif  // guard
