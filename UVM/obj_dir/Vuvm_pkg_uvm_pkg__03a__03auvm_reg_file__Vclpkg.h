// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_REG_FILE__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_REG_FILE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_comparer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz65;
class Vuvm_pkg_uvm_pkg__03a__03auvm_packer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz5;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_file;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_reg_file__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_file__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_file__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_file__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_file : public Vuvm_pkg_uvm_pkg__03a__03auvm_object {
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
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_file> __PVT__m_rf;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz65> __PVT__hdl_paths_pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_file"; }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string path, std::string kind);
    void __VnoInFunc_clear_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_block(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    void __VnoInFunc_get_default_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind);
    virtual void __VnoInFunc_get_parent(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_regfile(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_default_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string kind);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_file() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_file();
};


#endif  // guard
