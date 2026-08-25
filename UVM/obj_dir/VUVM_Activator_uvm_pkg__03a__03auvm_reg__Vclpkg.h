// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_REG__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_REG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Activator_uvm_pkg.h"
class VUVM_Activator_std__03a__03aprocess;
class VUVM_Activator_std__03a__03asemaphore;
class VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz90_TBz91;
class VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz94_TBz91;
class VUVM_Activator_uvm_pkg__03a__03auvm_comparer;
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat;
class VUVM_Activator_uvm_pkg__03a__03auvm_object;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz105;
class VUVM_Activator_uvm_pkg__03a__03auvm_packer;
class VUVM_Activator_uvm_pkg__03a__03auvm_printer;
class VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz104;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_block;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_cbs;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_field;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_file;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_frontdoor;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_item;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_map;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_reg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_reg__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_reg__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_reg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_max_size(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
    void __VnoInFunc_include_coverage(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ models, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> accessor);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_reg : public VUVM_Activator_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_locked;
    CData/*0:0*/ __PVT__m_read_in_progress;
    CData/*0:0*/ __PVT__m_write_in_progress;
    CData/*0:0*/ __PVT__m_update_in_progress;
    CData/*0:0*/ __PVT__m_is_busy;
    CData/*0:0*/ __PVT__m_is_locked_by_field;
    IData/*31:0*/ __PVT__m_n_bits;
    IData/*31:0*/ __PVT__m_n_used_bits;
    IData/*31:0*/ __PVT__m_has_cover;
    IData/*31:0*/ __PVT__m_cover_on;
    IData/*31:0*/ __PVT__m_lineno;
    VlAssocArray<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__m_maps;
    std::string __PVT__m_fname;
    std::string __Vfunc_uvm_report_enabled__2__id;
    std::string __Vtask_uvm_report_error__7__id;
    std::string __Vtask_uvm_report_error__7__message;
    std::string __Vtask_uvm_report_error__7__filename;
    std::string __Vtask_uvm_report_error__7__context_name;
    std::string __Vfunc_uvm_report_enabled__13__id;
    std::string __Vtask_uvm_report_error__19__id;
    std::string __Vtask_uvm_report_error__19__message;
    std::string __Vtask_uvm_report_error__19__filename;
    std::string __Vtask_uvm_report_error__19__context_name;
    std::string __Vfunc_uvm_report_enabled__25__id;
    std::string __Vtask_uvm_report_error__29__id;
    std::string __Vtask_uvm_report_error__29__message;
    std::string __Vtask_uvm_report_error__29__filename;
    std::string __Vtask_uvm_report_error__29__context_name;
    std::string __Vfunc_uvm_report_enabled__33__id;
    std::string __Vtask_uvm_report_fatal__37__id;
    std::string __Vtask_uvm_report_fatal__37__message;
    std::string __Vtask_uvm_report_fatal__37__filename;
    std::string __Vtask_uvm_report_fatal__37__context_name;
    std::string __Vfunc_uvm_report_enabled__44__id;
    std::string __Vtask_uvm_report_error__49__id;
    std::string __Vtask_uvm_report_error__49__message;
    std::string __Vtask_uvm_report_error__49__filename;
    std::string __Vtask_uvm_report_error__49__context_name;
    std::string __Vfunc_uvm_report_enabled__55__id;
    std::string __Vtask_uvm_report_error__62__id;
    std::string __Vtask_uvm_report_error__62__message;
    std::string __Vtask_uvm_report_error__62__filename;
    std::string __Vtask_uvm_report_error__62__context_name;
    std::string __Vfunc_uvm_report_enabled__68__id;
    std::string __Vtask_uvm_report_error__75__id;
    std::string __Vtask_uvm_report_error__75__message;
    std::string __Vtask_uvm_report_error__75__filename;
    std::string __Vtask_uvm_report_error__75__context_name;
    std::string __Vfunc_uvm_report_enabled__85__id;
    std::string __Vtask_uvm_report_warning__89__id;
    std::string __Vtask_uvm_report_warning__89__message;
    std::string __Vtask_uvm_report_warning__89__filename;
    std::string __Vtask_uvm_report_warning__89__context_name;
    std::string __Vfunc_uvm_report_enabled__100__id;
    std::string __Vtask_uvm_report_warning__104__id;
    std::string __Vtask_uvm_report_warning__104__message;
    std::string __Vtask_uvm_report_warning__104__filename;
    std::string __Vtask_uvm_report_warning__104__context_name;
    std::string __Vfunc_uvm_report_enabled__128__id;
    std::string __Vtask_uvm_report_error__132__id;
    std::string __Vtask_uvm_report_error__132__message;
    std::string __Vtask_uvm_report_error__132__filename;
    std::string __Vtask_uvm_report_error__132__context_name;
    std::string __Vfunc_uvm_report_enabled__142__id;
    std::string __Vtask_uvm_report_error__147__id;
    std::string __Vtask_uvm_report_error__147__message;
    std::string __Vtask_uvm_report_error__147__filename;
    std::string __Vtask_uvm_report_error__147__context_name;
    std::string __Vfunc_uvm_report_enabled__159__id;
    std::string __Vtask_uvm_report_error__164__id;
    std::string __Vtask_uvm_report_error__164__message;
    std::string __Vtask_uvm_report_error__164__filename;
    std::string __Vtask_uvm_report_error__164__context_name;
    std::string __Vfunc_uvm_report_enabled__181__id;
    std::string __Vtask_uvm_report_warning__187__id;
    std::string __Vtask_uvm_report_warning__187__message;
    std::string __Vtask_uvm_report_warning__187__filename;
    std::string __Vtask_uvm_report_warning__187__context_name;
    std::string __Vfunc_uvm_report_enabled__191__id;
    std::string __Vtask_uvm_report_warning__196__id;
    std::string __Vtask_uvm_report_warning__196__message;
    std::string __Vtask_uvm_report_warning__196__filename;
    std::string __Vtask_uvm_report_warning__196__context_name;
    std::string __Vfunc_uvm_report_enabled__207__id;
    std::string __Vtask_uvm_report_warning__214__id;
    std::string __Vtask_uvm_report_warning__214__message;
    std::string __Vtask_uvm_report_warning__214__filename;
    std::string __Vtask_uvm_report_warning__214__context_name;
    std::string __Vfunc_uvm_report_enabled__220__id;
    std::string __Vtask_uvm_report_warning__227__id;
    std::string __Vtask_uvm_report_warning__227__message;
    std::string __Vtask_uvm_report_warning__227__filename;
    std::string __Vtask_uvm_report_warning__227__context_name;
    std::string __Vfunc_uvm_report_enabled__235__id;
    std::string __Vtask_uvm_report_warning__240__id;
    std::string __Vtask_uvm_report_warning__240__message;
    std::string __Vtask_uvm_report_warning__240__filename;
    std::string __Vtask_uvm_report_warning__240__context_name;
    std::string __Vfunc_uvm_report_enabled__253__id;
    std::string __Vtask_uvm_report_warning__258__id;
    std::string __Vtask_uvm_report_warning__258__message;
    std::string __Vtask_uvm_report_warning__258__filename;
    std::string __Vtask_uvm_report_warning__258__context_name;
    std::string __Vfunc_uvm_report_enabled__333__id;
    std::string __Vtask_uvm_report_info__340__id;
    std::string __Vtask_uvm_report_info__340__message;
    std::string __Vtask_uvm_report_info__340__filename;
    std::string __Vtask_uvm_report_info__340__context_name;
    std::string __Vfunc_uvm_report_enabled__404__id;
    std::string __Vtask_uvm_report_info__411__id;
    std::string __Vtask_uvm_report_info__411__message;
    std::string __Vtask_uvm_report_info__411__filename;
    std::string __Vtask_uvm_report_info__411__context_name;
    std::string __Vfunc_uvm_report_enabled__418__id;
    std::string __Vtask_uvm_report_warning__423__id;
    std::string __Vtask_uvm_report_warning__423__message;
    std::string __Vtask_uvm_report_warning__423__filename;
    std::string __Vtask_uvm_report_warning__423__context_name;
    std::string __Vfunc_uvm_report_enabled__430__id;
    std::string __Vtask_uvm_report_error__436__id;
    std::string __Vtask_uvm_report_error__436__message;
    std::string __Vtask_uvm_report_error__436__filename;
    std::string __Vtask_uvm_report_error__436__context_name;
    std::string __Vfunc_uvm_report_enabled__441__id;
    std::string __Vtask_uvm_report_error__448__id;
    std::string __Vtask_uvm_report_error__448__message;
    std::string __Vtask_uvm_report_error__448__filename;
    std::string __Vtask_uvm_report_error__448__context_name;
    std::string __Vfunc_uvm_report_enabled__453__id;
    std::string __Vtask_uvm_report_info__457__id;
    std::string __Vtask_uvm_report_info__457__message;
    std::string __Vtask_uvm_report_info__457__filename;
    std::string __Vtask_uvm_report_info__457__context_name;
    std::string __Vtask_uvm_report_fatal__462__id;
    std::string __Vtask_uvm_report_fatal__462__message;
    std::string __Vtask_uvm_report_fatal__462__filename;
    std::string __Vtask_uvm_report_fatal__462__context_name;
    std::string __Vtask_uvm_report_fatal__467__id;
    std::string __Vtask_uvm_report_fatal__467__message;
    std::string __Vtask_uvm_report_fatal__467__filename;
    std::string __Vtask_uvm_report_fatal__467__context_name;
    std::string __Vfunc_uvm_report_enabled__473__id;
    std::string __Vtask_uvm_report_info__477__id;
    std::string __Vtask_uvm_report_info__477__message;
    std::string __Vtask_uvm_report_info__477__filename;
    std::string __Vtask_uvm_report_info__477__context_name;
    std::string __Vtask_uvm_report_fatal__482__id;
    std::string __Vtask_uvm_report_fatal__482__message;
    std::string __Vtask_uvm_report_fatal__482__filename;
    std::string __Vtask_uvm_report_fatal__482__context_name;
    std::string __Vtask_uvm_report_fatal__487__id;
    std::string __Vtask_uvm_report_fatal__487__message;
    std::string __Vtask_uvm_report_fatal__487__filename;
    std::string __Vtask_uvm_report_fatal__487__context_name;
    std::string __Vfunc_uvm_report_enabled__491__id;
    std::string __Vfunc_uvm_hdl_concat2string__496__image;
    std::string __Vfunc_uvm_hdl_concat2string__497__image;
    std::string __Vtask_uvm_report_error__498__id;
    std::string __Vtask_uvm_report_error__498__message;
    std::string __Vtask_uvm_report_error__498__filename;
    std::string __Vtask_uvm_report_error__498__context_name;
    std::string __Vfunc_uvm_report_enabled__502__id;
    std::string __Vtask_uvm_report_info__506__id;
    std::string __Vtask_uvm_report_info__506__message;
    std::string __Vtask_uvm_report_info__506__filename;
    std::string __Vtask_uvm_report_info__506__context_name;
    std::string __Vfunc_uvm_report_enabled__512__id;
    std::string __Vtask_uvm_report_error__517__id;
    std::string __Vtask_uvm_report_error__517__message;
    std::string __Vtask_uvm_report_error__517__filename;
    std::string __Vtask_uvm_report_error__517__context_name;
    std::string __Vfunc_uvm_report_enabled__526__id;
    std::string __Vtask_uvm_report_info__531__id;
    std::string __Vtask_uvm_report_info__531__message;
    std::string __Vtask_uvm_report_info__531__filename;
    std::string __Vtask_uvm_report_info__531__context_name;
    std::string __Vfunc_uvm_report_enabled__539__id;
    std::string __Vtask_uvm_report_error__544__id;
    std::string __Vtask_uvm_report_error__544__message;
    std::string __Vtask_uvm_report_error__544__filename;
    std::string __Vtask_uvm_report_error__544__context_name;
    std::string __Vfunc_uvm_report_enabled__553__id;
    std::string __Vtask_uvm_report_info__558__id;
    std::string __Vtask_uvm_report_info__558__message;
    std::string __Vtask_uvm_report_info__558__filename;
    std::string __Vtask_uvm_report_info__558__context_name;
    std::string __Vfunc_uvm_report_enabled__568__id;
    std::string __Vtask_uvm_report_error__573__id;
    std::string __Vtask_uvm_report_error__573__message;
    std::string __Vtask_uvm_report_error__573__filename;
    std::string __Vtask_uvm_report_error__573__context_name;
    std::string __Vfunc_uvm_report_enabled__582__id;
    std::string __Vtask_uvm_report_info__593__id;
    std::string __Vtask_uvm_report_info__593__message;
    std::string __Vtask_uvm_report_info__593__filename;
    std::string __Vtask_uvm_report_info__593__context_name;
    std::string __Vfunc_uvm_report_enabled__628__id;
    std::string __Vtask_uvm_report_fatal__632__id;
    std::string __Vtask_uvm_report_fatal__632__message;
    std::string __Vtask_uvm_report_fatal__632__filename;
    std::string __Vtask_uvm_report_fatal__632__context_name;
    std::string __Vfunc_uvm_report_enabled__636__id;
    std::string __Vtask_uvm_report_fatal__640__id;
    std::string __Vtask_uvm_report_fatal__640__message;
    std::string __Vtask_uvm_report_fatal__640__filename;
    std::string __Vtask_uvm_report_fatal__640__context_name;
    std::string __Vfunc_uvm_report_enabled__644__id;
    std::string __Vtask_uvm_report_warning__648__id;
    std::string __Vtask_uvm_report_warning__648__message;
    std::string __Vtask_uvm_report_warning__648__filename;
    std::string __Vtask_uvm_report_warning__648__context_name;
    std::string __Vfunc_uvm_report_enabled__652__id;
    std::string __Vtask_uvm_report_warning__656__id;
    std::string __Vtask_uvm_report_warning__656__message;
    std::string __Vtask_uvm_report_warning__656__filename;
    std::string __Vtask_uvm_report_warning__656__context_name;
    std::string __Vfunc_uvm_report_enabled__660__id;
    std::string __Vtask_uvm_report_warning__664__id;
    std::string __Vtask_uvm_report_warning__664__message;
    std::string __Vtask_uvm_report_warning__664__filename;
    std::string __Vtask_uvm_report_warning__664__context_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_file> __PVT__m_regfile_parent;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_field>> __PVT__m_fields;
    VlClassRef<VUVM_Activator_std__03a__03asemaphore> __PVT__m_atomic;
    VlClassRef<VUVM_Activator_std__03a__03aprocess> __PVT__m_process;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__m_backdoor;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz105> __PVT__m_hdl_paths_pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg"; }
    VlCoroutine __VnoInFunc_XatomicX(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    virtual void __VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    void __VnoInFunc_Xget_fields_accessX(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, std::string &Xget_fields_accessX__Vfuncrtn);
    void __VnoInFunc_Xis_locked_by_fieldX(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &Xis_locked_by_fieldX__Vfuncrtn);
    void __VnoInFunc_Xlock_modelX(VUVM_Activator__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_XreadX(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_XsampleX(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_Xset_busyX(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ busy);
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_coverage(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    virtual void __VnoInFunc_add_field(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_field> field);
    void __VnoInFunc_add_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VUVM_Activator_uvm_hdl_path_slice__struct__0> slices, std::string kind);
    void __VnoInFunc_add_hdl_path_slice(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind);
    virtual void __VnoInFunc_add_map(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_backdoor_read(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn);
    virtual void __VnoInFunc_backdoor_watch(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_backdoor_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_build_coverage(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    void __VnoInFunc_clear_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_check(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ expected, QData/*63:0*/ actual, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &do_check__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_addresses(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn);
    void __VnoInFunc_get_backdoor(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_coverage(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    virtual void __VnoInFunc_get_default_map(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string caller, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_field>> &fields);
    void __VnoInFunc_get_frontdoor(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind);
    void __VnoInFunc_get_hdl_path_kinds(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds);
    virtual void __VnoInFunc_get_local_map(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_mirrored_value(VUVM_Activator__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bytes(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_offset(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_regfile(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn);
    virtual void __VnoInFunc_get_reset(VUVM_Activator__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    virtual void __VnoInFunc_has_reset(VUVM_Activator__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn);
    void __VnoInFunc_is_busy(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_busy__Vfuncrtn);
    void __VnoInFunc_is_in_map(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_predict(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_reset(VUVM_Activator__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_sample(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_sample_values(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_set_backdoor(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_frontdoor(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_offset(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_set_parent(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_file> regfile_parent);
    virtual void __VnoInFunc_set_reset(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind);
    virtual VlCoroutine __VnoInFunc_update(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_reg() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_coverage);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_reg();
};


#endif  // guard
