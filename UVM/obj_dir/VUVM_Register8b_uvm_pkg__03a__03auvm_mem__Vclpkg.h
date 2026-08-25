// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Register8b_uvm_pkg.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz92_TBz90;
class VUVM_Register8b_uvm_pkg__03a__03auvm_comparer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat;
class VUVM_Register8b_uvm_pkg__03a__03auvm_mem;
class VUVM_Register8b_uvm_pkg__03a__03auvm_mem_mam;
class VUVM_Register8b_uvm_pkg__03a__03auvm_mem_mam_cfg;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz104;
class VUVM_Register8b_uvm_pkg__03a__03auvm_packer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz103;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_backdoor;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_frontdoor;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_vreg;
class VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_mem__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_mem__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_mem__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_mem__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_max_size(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_mem : public VUVM_Register8b_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_locked;
    CData/*0:0*/ __PVT__m_read_in_progress;
    CData/*0:0*/ __PVT__m_write_in_progress;
    CData/*0:0*/ __PVT__m_is_powered_down;
    IData/*31:0*/ __PVT__m_n_bits;
    IData/*31:0*/ __PVT__m_has_cover;
    IData/*31:0*/ __PVT__m_cover_on;
    IData/*31:0*/ __PVT__m_lineno;
    QData/*63:0*/ __PVT__m_size;
    VlAssocArray<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__m_maps;
    VlAssocArray<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg>, CData/*0:0*/> __PVT__m_vregs;
    std::string __PVT__m_access;
    std::string __PVT__m_fname;
    std::string __Vfunc_uvm_report_enabled__2__id;
    std::string __Vtask_uvm_report_error__7__id;
    std::string __Vtask_uvm_report_error__7__message;
    std::string __Vtask_uvm_report_error__7__filename;
    std::string __Vtask_uvm_report_error__7__context_name;
    std::string __Vfunc_uvm_report_enabled__12__id;
    std::string __Vtask_uvm_report_fatal__16__id;
    std::string __Vtask_uvm_report_fatal__16__message;
    std::string __Vtask_uvm_report_fatal__16__filename;
    std::string __Vtask_uvm_report_fatal__16__context_name;
    std::string __Vfunc_uvm_report_enabled__20__id;
    std::string __Vtask_uvm_report_error__25__id;
    std::string __Vtask_uvm_report_error__25__message;
    std::string __Vtask_uvm_report_error__25__filename;
    std::string __Vtask_uvm_report_error__25__context_name;
    std::string __Vfunc_uvm_report_enabled__34__id;
    std::string __Vtask_uvm_report_error__39__id;
    std::string __Vtask_uvm_report_error__39__message;
    std::string __Vtask_uvm_report_error__39__filename;
    std::string __Vtask_uvm_report_error__39__context_name;
    std::string __Vfunc_uvm_report_enabled__53__id;
    std::string __Vtask_uvm_report_warning__59__id;
    std::string __Vtask_uvm_report_warning__59__message;
    std::string __Vtask_uvm_report_warning__59__filename;
    std::string __Vtask_uvm_report_warning__59__context_name;
    std::string __Vfunc_uvm_report_enabled__63__id;
    std::string __Vtask_uvm_report_warning__68__id;
    std::string __Vtask_uvm_report_warning__68__message;
    std::string __Vtask_uvm_report_warning__68__filename;
    std::string __Vtask_uvm_report_warning__68__context_name;
    std::string __Vfunc_uvm_report_enabled__78__id;
    std::string __Vtask_uvm_report_error__84__id;
    std::string __Vtask_uvm_report_error__84__message;
    std::string __Vtask_uvm_report_error__84__filename;
    std::string __Vtask_uvm_report_error__84__context_name;
    std::string __Vfunc_uvm_report_enabled__88__id;
    std::string __Vtask_uvm_report_error__93__id;
    std::string __Vtask_uvm_report_error__93__message;
    std::string __Vtask_uvm_report_error__93__filename;
    std::string __Vtask_uvm_report_error__93__context_name;
    std::string __Vfunc_uvm_report_enabled__97__id;
    std::string __Vtask_uvm_report_error__103__id;
    std::string __Vtask_uvm_report_error__103__message;
    std::string __Vtask_uvm_report_error__103__filename;
    std::string __Vtask_uvm_report_error__103__context_name;
    std::string __Vfunc_uvm_report_enabled__107__id;
    std::string __Vtask_uvm_report_error__112__id;
    std::string __Vtask_uvm_report_error__112__message;
    std::string __Vtask_uvm_report_error__112__filename;
    std::string __Vtask_uvm_report_error__112__context_name;
    std::string __Vfunc_uvm_report_enabled__116__id;
    std::string __Vtask_uvm_report_error__122__id;
    std::string __Vtask_uvm_report_error__122__message;
    std::string __Vtask_uvm_report_error__122__filename;
    std::string __Vtask_uvm_report_error__122__context_name;
    std::string __Vfunc_uvm_report_enabled__130__id;
    std::string __Vtask_uvm_report_warning__137__id;
    std::string __Vtask_uvm_report_warning__137__message;
    std::string __Vtask_uvm_report_warning__137__filename;
    std::string __Vtask_uvm_report_warning__137__context_name;
    std::string __Vfunc_uvm_report_enabled__144__id;
    std::string __Vtask_uvm_report_warning__149__id;
    std::string __Vtask_uvm_report_warning__149__message;
    std::string __Vtask_uvm_report_warning__149__filename;
    std::string __Vtask_uvm_report_warning__149__context_name;
    std::string __Vfunc_uvm_report_enabled__154__id;
    std::string __Vtask_uvm_report_warning__159__id;
    std::string __Vtask_uvm_report_warning__159__message;
    std::string __Vtask_uvm_report_warning__159__filename;
    std::string __Vtask_uvm_report_warning__159__context_name;
    std::string __Vfunc_uvm_report_enabled__163__id;
    std::string __Vtask_uvm_report_error__167__id;
    std::string __Vtask_uvm_report_error__167__message;
    std::string __Vtask_uvm_report_error__167__filename;
    std::string __Vtask_uvm_report_error__167__context_name;
    std::string __Vfunc_uvm_report_enabled__173__id;
    std::string __Vtask_uvm_report_warning__180__id;
    std::string __Vtask_uvm_report_warning__180__message;
    std::string __Vtask_uvm_report_warning__180__filename;
    std::string __Vtask_uvm_report_warning__180__context_name;
    std::string __Vfunc_uvm_report_enabled__221__id;
    std::string __Vtask_uvm_report_info__228__id;
    std::string __Vtask_uvm_report_info__228__message;
    std::string __Vtask_uvm_report_info__228__filename;
    std::string __Vtask_uvm_report_info__228__context_name;
    std::string __Vfunc_uvm_report_enabled__251__id;
    std::string __Vtask_uvm_report_info__258__id;
    std::string __Vtask_uvm_report_info__258__message;
    std::string __Vtask_uvm_report_info__258__filename;
    std::string __Vtask_uvm_report_info__258__context_name;
    std::string __Vfunc_uvm_report_enabled__263__id;
    std::string __Vtask_uvm_report_error__268__id;
    std::string __Vtask_uvm_report_error__268__message;
    std::string __Vtask_uvm_report_error__268__filename;
    std::string __Vtask_uvm_report_error__268__context_name;
    std::string __Vfunc_uvm_report_enabled__275__id;
    std::string __Vtask_uvm_report_warning__280__id;
    std::string __Vtask_uvm_report_warning__280__message;
    std::string __Vtask_uvm_report_warning__280__filename;
    std::string __Vtask_uvm_report_warning__280__context_name;
    std::string __Vfunc_uvm_report_enabled__287__id;
    std::string __Vtask_uvm_report_error__293__id;
    std::string __Vtask_uvm_report_error__293__message;
    std::string __Vtask_uvm_report_error__293__filename;
    std::string __Vtask_uvm_report_error__293__context_name;
    std::string __Vfunc_uvm_report_enabled__298__id;
    std::string __Vtask_uvm_report_error__304__id;
    std::string __Vtask_uvm_report_error__304__message;
    std::string __Vtask_uvm_report_error__304__filename;
    std::string __Vtask_uvm_report_error__304__context_name;
    std::string __Vfunc_uvm_report_enabled__310__id;
    std::string __Vtask_uvm_report_error__316__id;
    std::string __Vtask_uvm_report_error__316__message;
    std::string __Vtask_uvm_report_error__316__filename;
    std::string __Vtask_uvm_report_error__316__context_name;
    std::string __Vfunc_uvm_report_enabled__320__id;
    std::string __Vtask_uvm_report_error__324__id;
    std::string __Vtask_uvm_report_error__324__message;
    std::string __Vtask_uvm_report_error__324__filename;
    std::string __Vtask_uvm_report_error__324__context_name;
    std::string __Vfunc_uvm_report_enabled__330__id;
    std::string __Vtask_uvm_report_error__335__id;
    std::string __Vtask_uvm_report_error__335__message;
    std::string __Vtask_uvm_report_error__335__filename;
    std::string __Vtask_uvm_report_error__335__context_name;
    std::string __Vfunc_uvm_report_enabled__343__id;
    std::string __Vtask_uvm_report_info__348__id;
    std::string __Vtask_uvm_report_info__348__message;
    std::string __Vtask_uvm_report_info__348__filename;
    std::string __Vtask_uvm_report_info__348__context_name;
    std::string __Vfunc_uvm_report_enabled__354__id;
    std::string __Vtask_uvm_report_error__359__id;
    std::string __Vtask_uvm_report_error__359__message;
    std::string __Vtask_uvm_report_error__359__filename;
    std::string __Vtask_uvm_report_error__359__context_name;
    std::string __Vfunc_uvm_report_enabled__367__id;
    std::string __Vtask_uvm_report_info__372__id;
    std::string __Vtask_uvm_report_info__372__message;
    std::string __Vtask_uvm_report_info__372__filename;
    std::string __Vtask_uvm_report_info__372__context_name;
    std::string __Vfunc_uvm_report_enabled__377__id;
    std::string __Vtask_uvm_report_error__383__id;
    std::string __Vtask_uvm_report_error__383__message;
    std::string __Vtask_uvm_report_error__383__filename;
    std::string __Vtask_uvm_report_error__383__context_name;
    std::string __Vfunc_uvm_report_enabled__389__id;
    std::string __Vtask_uvm_report_error__395__id;
    std::string __Vtask_uvm_report_error__395__message;
    std::string __Vtask_uvm_report_error__395__filename;
    std::string __Vtask_uvm_report_error__395__context_name;
    std::string __Vfunc_uvm_report_enabled__404__id;
    std::string __Vtask_uvm_report_info__408__id;
    std::string __Vtask_uvm_report_info__408__message;
    std::string __Vtask_uvm_report_info__408__filename;
    std::string __Vtask_uvm_report_info__408__context_name;
    std::string __Vtask_uvm_report_fatal__413__id;
    std::string __Vtask_uvm_report_fatal__413__message;
    std::string __Vtask_uvm_report_fatal__413__filename;
    std::string __Vtask_uvm_report_fatal__413__context_name;
    std::string __Vtask_uvm_report_fatal__418__id;
    std::string __Vtask_uvm_report_fatal__418__message;
    std::string __Vtask_uvm_report_fatal__418__filename;
    std::string __Vtask_uvm_report_fatal__418__context_name;
    std::string __Vfunc_uvm_report_enabled__422__id;
    std::string __Vfunc_uvm_hdl_concat2string__427__image;
    std::string __Vfunc_uvm_hdl_concat2string__428__image;
    std::string __Vtask_uvm_report_error__429__id;
    std::string __Vtask_uvm_report_error__429__message;
    std::string __Vtask_uvm_report_error__429__filename;
    std::string __Vtask_uvm_report_error__429__context_name;
    std::string __Vfunc_uvm_report_enabled__435__id;
    std::string __Vtask_uvm_report_info__439__id;
    std::string __Vtask_uvm_report_info__439__message;
    std::string __Vtask_uvm_report_info__439__filename;
    std::string __Vtask_uvm_report_info__439__context_name;
    std::string __Vtask_uvm_report_fatal__444__id;
    std::string __Vtask_uvm_report_fatal__444__message;
    std::string __Vtask_uvm_report_fatal__444__filename;
    std::string __Vtask_uvm_report_fatal__444__context_name;
    std::string __Vtask_uvm_report_fatal__449__id;
    std::string __Vtask_uvm_report_fatal__449__message;
    std::string __Vtask_uvm_report_fatal__449__filename;
    std::string __Vtask_uvm_report_fatal__449__context_name;
    std::string __Vfunc_uvm_report_enabled__456__id;
    std::string __Vtask_uvm_report_warning__460__id;
    std::string __Vtask_uvm_report_warning__460__message;
    std::string __Vtask_uvm_report_warning__460__filename;
    std::string __Vtask_uvm_report_warning__460__context_name;
    std::string __Vfunc_uvm_report_enabled__480__id;
    std::string __Vtask_uvm_report_error__484__id;
    std::string __Vtask_uvm_report_error__484__message;
    std::string __Vtask_uvm_report_error__484__filename;
    std::string __Vtask_uvm_report_error__484__context_name;
    std::string __Vfunc_uvm_report_enabled__495__id;
    std::string __Vtask_uvm_report_error__499__id;
    std::string __Vtask_uvm_report_error__499__message;
    std::string __Vtask_uvm_report_error__499__filename;
    std::string __Vtask_uvm_report_error__499__context_name;
    std::string __Vfunc_uvm_report_enabled__527__id;
    std::string __Vtask_uvm_report_fatal__531__id;
    std::string __Vtask_uvm_report_fatal__531__message;
    std::string __Vtask_uvm_report_fatal__531__filename;
    std::string __Vtask_uvm_report_fatal__531__context_name;
    std::string __Vfunc_uvm_report_enabled__535__id;
    std::string __Vtask_uvm_report_fatal__539__id;
    std::string __Vtask_uvm_report_fatal__539__message;
    std::string __Vtask_uvm_report_fatal__539__filename;
    std::string __Vtask_uvm_report_fatal__539__context_name;
    std::string __Vfunc_uvm_report_enabled__543__id;
    std::string __Vtask_uvm_report_warning__547__id;
    std::string __Vtask_uvm_report_warning__547__message;
    std::string __Vtask_uvm_report_warning__547__filename;
    std::string __Vtask_uvm_report_warning__547__context_name;
    std::string __Vfunc_uvm_report_enabled__551__id;
    std::string __Vtask_uvm_report_warning__555__id;
    std::string __Vtask_uvm_report_warning__555__message;
    std::string __Vtask_uvm_report_warning__555__filename;
    std::string __Vtask_uvm_report_warning__555__context_name;
    std::string __Vfunc_uvm_report_enabled__559__id;
    std::string __Vtask_uvm_report_warning__563__id;
    std::string __Vtask_uvm_report_warning__563__message;
    std::string __Vtask_uvm_report_warning__563__filename;
    std::string __Vtask_uvm_report_warning__563__context_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__m_backdoor;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz104> __PVT__m_hdl_paths_pool;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem_mam> __PVT__mam;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_mem(*this); }
    void __VnoInFunc_Xadd_vregX(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    void __VnoInFunc_Xdelete_vregX(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_Xlock_modelX(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_XsampleX(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    void __VnoInFunc_add_hdl_path(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VUVM_Register8b_uvm_hdl_path_slice__struct__0> slices, std::string kind);
    void __VnoInFunc_add_hdl_path_slice(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind);
    void __VnoInFunc_add_map(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_backdoor_read(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn);
    virtual void __VnoInFunc_backdoor_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_build_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_burst_read(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_burst_write(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_clear_hdl_path(VUVM_Register8b__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_addresses(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn);
    void __VnoInFunc_get_backdoor(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    void __VnoInFunc_get_default_map(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string caller, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    void __VnoInFunc_get_frontdoor(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind);
    void __VnoInFunc_get_hdl_path_kinds(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds);
    void __VnoInFunc_get_local_map(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>> &maps);
    void __VnoInFunc_get_n_bits(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    void __VnoInFunc_get_n_bytes(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_offset(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    void __VnoInFunc_get_size(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_get_vfield_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>> &fields);
    virtual void __VnoInFunc_get_virtual_registers(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg>> &regs);
    virtual void __VnoInFunc_get_vreg_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_vreg_by_offset(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(VUVM_Register8b__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_in_map(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_sample(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_set_backdoor(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_frontdoor(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_offset(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_set_parent(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_mem() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ size, IData/*31:0*/ n_bits, std::string access, IData/*31:0*/ has_coverage);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_mem();
};


#endif  // guard
