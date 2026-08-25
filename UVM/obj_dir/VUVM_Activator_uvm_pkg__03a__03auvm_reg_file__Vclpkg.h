// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_REG_FILE__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_REG_FILE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_comparer;
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_object;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz109;
class VUVM_Activator_uvm_pkg__03a__03auvm_packer;
class VUVM_Activator_uvm_pkg__03a__03auvm_printer;
class VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz2;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_block;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_file;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_reg_file__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_file__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_reg_file__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_reg_file__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_reg_file : public VUVM_Activator_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__default_hdl_path;
    std::string __Vfunc_uvm_report_enabled__2__id;
    std::string __Vtask_uvm_report_error__8__id;
    std::string __Vtask_uvm_report_error__8__message;
    std::string __Vtask_uvm_report_error__8__filename;
    std::string __Vtask_uvm_report_error__8__context_name;
    std::string __Vfunc_uvm_report_enabled__17__id;
    std::string __Vtask_uvm_report_warning__21__id;
    std::string __Vtask_uvm_report_warning__21__message;
    std::string __Vtask_uvm_report_warning__21__filename;
    std::string __Vtask_uvm_report_warning__21__context_name;
    std::string __Vfunc_uvm_report_enabled__34__id;
    std::string __Vtask_uvm_report_error__38__id;
    std::string __Vtask_uvm_report_error__38__message;
    std::string __Vtask_uvm_report_error__38__filename;
    std::string __Vtask_uvm_report_error__38__context_name;
    std::string __Vfunc_uvm_report_enabled__47__id;
    std::string __Vtask_uvm_report_error__51__id;
    std::string __Vtask_uvm_report_error__51__message;
    std::string __Vtask_uvm_report_error__51__filename;
    std::string __Vtask_uvm_report_error__51__context_name;
    std::string __Vfunc_uvm_report_enabled__64__id;
    std::string __Vtask_uvm_report_error__68__id;
    std::string __Vtask_uvm_report_error__68__message;
    std::string __Vtask_uvm_report_error__68__filename;
    std::string __Vtask_uvm_report_error__68__context_name;
    std::string __Vfunc_uvm_report_enabled__76__id;
    std::string __Vtask_uvm_report_fatal__80__id;
    std::string __Vtask_uvm_report_fatal__80__message;
    std::string __Vtask_uvm_report_fatal__80__filename;
    std::string __Vtask_uvm_report_fatal__80__context_name;
    std::string __Vfunc_uvm_report_enabled__85__id;
    std::string __Vtask_uvm_report_fatal__89__id;
    std::string __Vtask_uvm_report_fatal__89__message;
    std::string __Vtask_uvm_report_fatal__89__filename;
    std::string __Vtask_uvm_report_fatal__89__context_name;
    std::string __Vfunc_uvm_report_enabled__93__id;
    std::string __Vtask_uvm_report_fatal__97__id;
    std::string __Vtask_uvm_report_fatal__97__message;
    std::string __Vtask_uvm_report_fatal__97__filename;
    std::string __Vtask_uvm_report_fatal__97__context_name;
    std::string __Vfunc_uvm_report_enabled__101__id;
    std::string __Vtask_uvm_report_warning__105__id;
    std::string __Vtask_uvm_report_warning__105__message;
    std::string __Vtask_uvm_report_warning__105__filename;
    std::string __Vtask_uvm_report_warning__105__context_name;
    std::string __Vfunc_uvm_report_enabled__109__id;
    std::string __Vtask_uvm_report_warning__113__id;
    std::string __Vtask_uvm_report_warning__113__message;
    std::string __Vtask_uvm_report_warning__113__filename;
    std::string __Vtask_uvm_report_warning__113__context_name;
    std::string __Vfunc_uvm_report_enabled__117__id;
    std::string __Vtask_uvm_report_warning__121__id;
    std::string __Vtask_uvm_report_warning__121__message;
    std::string __Vtask_uvm_report_warning__121__filename;
    std::string __Vtask_uvm_report_warning__121__context_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_file> __PVT__m_rf;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz109> __PVT__hdl_paths_pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_file"; }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, std::string path, std::string kind);
    void __VnoInFunc_clear_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_block(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    void __VnoInFunc_get_default_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind);
    virtual void __VnoInFunc_get_parent(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_regfile(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_default_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, std::string kind);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_file() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_reg_file();
};


#endif  // guard
