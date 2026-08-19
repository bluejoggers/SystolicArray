// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_std__03a__03asemaphore;
class VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz96_TBz97;
class VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz98_TBz99;
class VUVM_regblock_uvm_pkg__03a__03auvm_comparer;
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_mem;
class VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam;
class VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_policy;
class VUVM_regblock_uvm_pkg__03a__03auvm_mem_region;
class VUVM_regblock_uvm_pkg__03a__03auvm_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_packer;
class VUVM_regblock_uvm_pkg__03a__03auvm_printer;
class VUVM_regblock_uvm_pkg__03a__03auvm_reg_block;
class VUVM_regblock_uvm_pkg__03a__03auvm_reg_map;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_vreg;
class VUVM_regblock_uvm_pkg__03a__03auvm_vreg_cbs;
class VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field;
class VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_vreg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_vreg_cbs;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_vreg__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_vreg__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_vreg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_vreg : public VUVM_regblock_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__locked;
    CData/*0:0*/ __PVT__is_static;
    CData/*0:0*/ __PVT__read_in_progress;
    CData/*0:0*/ __PVT__write_in_progress;
    IData/*31:0*/ __PVT__n_bits;
    IData/*31:0*/ __PVT__n_used_bits;
    IData/*31:0*/ __PVT__incr;
    IData/*31:0*/ __PVT__lineno;
    QData/*63:0*/ __PVT__offset;
    QData/*63:0*/ __PVT__size;
    std::string __PVT__fname;
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_error__6__id;
    std::string __Vtask_uvm_report_error__6__message;
    std::string __Vtask_uvm_report_error__6__filename;
    std::string __Vtask_uvm_report_error__6__context_name;
    std::string __Vfunc_uvm_report_enabled__10__id;
    std::string __Vtask_uvm_report_error__15__id;
    std::string __Vtask_uvm_report_error__15__message;
    std::string __Vtask_uvm_report_error__15__filename;
    std::string __Vtask_uvm_report_error__15__context_name;
    std::string __Vfunc_uvm_report_enabled__22__id;
    std::string __Vtask_uvm_report_error__26__id;
    std::string __Vtask_uvm_report_error__26__message;
    std::string __Vtask_uvm_report_error__26__filename;
    std::string __Vtask_uvm_report_error__26__context_name;
    std::string __Vfunc_uvm_report_enabled__30__id;
    std::string __Vtask_uvm_report_fatal__34__id;
    std::string __Vtask_uvm_report_fatal__34__message;
    std::string __Vtask_uvm_report_fatal__34__filename;
    std::string __Vtask_uvm_report_fatal__34__context_name;
    std::string __Vfunc_uvm_report_enabled__41__id;
    std::string __Vtask_uvm_report_error__46__id;
    std::string __Vtask_uvm_report_error__46__message;
    std::string __Vtask_uvm_report_error__46__filename;
    std::string __Vtask_uvm_report_error__46__context_name;
    std::string __Vfunc_uvm_report_enabled__52__id;
    std::string __Vtask_uvm_report_error__59__id;
    std::string __Vtask_uvm_report_error__59__message;
    std::string __Vtask_uvm_report_error__59__filename;
    std::string __Vtask_uvm_report_error__59__context_name;
    std::string __Vfunc_uvm_report_enabled__65__id;
    std::string __Vtask_uvm_report_error__72__id;
    std::string __Vtask_uvm_report_error__72__message;
    std::string __Vtask_uvm_report_error__72__filename;
    std::string __Vtask_uvm_report_error__72__context_name;
    std::string __Vfunc_uvm_report_enabled__85__id;
    std::string __Vtask_uvm_report_error__90__id;
    std::string __Vtask_uvm_report_error__90__message;
    std::string __Vtask_uvm_report_error__90__filename;
    std::string __Vtask_uvm_report_error__90__context_name;
    std::string __Vfunc_uvm_report_enabled__94__id;
    std::string __Vtask_uvm_report_error__99__id;
    std::string __Vtask_uvm_report_error__99__message;
    std::string __Vtask_uvm_report_error__99__filename;
    std::string __Vtask_uvm_report_error__99__context_name;
    std::string __Vfunc_uvm_report_enabled__103__id;
    std::string __Vtask_uvm_report_error__108__id;
    std::string __Vtask_uvm_report_error__108__message;
    std::string __Vtask_uvm_report_error__108__filename;
    std::string __Vtask_uvm_report_error__108__context_name;
    std::string __Vfunc_uvm_report_enabled__113__id;
    std::string __Vtask_uvm_report_error__119__id;
    std::string __Vtask_uvm_report_error__119__message;
    std::string __Vtask_uvm_report_error__119__filename;
    std::string __Vtask_uvm_report_error__119__context_name;
    std::string __Vfunc_uvm_report_enabled__125__id;
    std::string __Vtask_uvm_report_error__131__id;
    std::string __Vtask_uvm_report_error__131__message;
    std::string __Vtask_uvm_report_error__131__filename;
    std::string __Vtask_uvm_report_error__131__context_name;
    std::string __Vfunc_uvm_report_enabled__136__id;
    std::string __Vtask_uvm_report_error__142__id;
    std::string __Vtask_uvm_report_error__142__message;
    std::string __Vtask_uvm_report_error__142__filename;
    std::string __Vtask_uvm_report_error__142__context_name;
    std::string __Vfunc_uvm_report_enabled__148__id;
    std::string __Vtask_uvm_report_error__153__id;
    std::string __Vtask_uvm_report_error__153__message;
    std::string __Vtask_uvm_report_error__153__filename;
    std::string __Vtask_uvm_report_error__153__context_name;
    std::string __Vfunc_uvm_report_enabled__157__id;
    std::string __Vtask_uvm_report_info__164__id;
    std::string __Vtask_uvm_report_info__164__message;
    std::string __Vtask_uvm_report_info__164__filename;
    std::string __Vtask_uvm_report_info__164__context_name;
    std::string __Vfunc_uvm_report_enabled__170__id;
    std::string __Vtask_uvm_report_error__175__id;
    std::string __Vtask_uvm_report_error__175__message;
    std::string __Vtask_uvm_report_error__175__filename;
    std::string __Vtask_uvm_report_error__175__context_name;
    std::string __Vfunc_uvm_report_enabled__179__id;
    std::string __Vtask_uvm_report_error__184__id;
    std::string __Vtask_uvm_report_error__184__message;
    std::string __Vtask_uvm_report_error__184__filename;
    std::string __Vtask_uvm_report_error__184__context_name;
    std::string __Vfunc_uvm_report_enabled__188__id;
    std::string __Vtask_uvm_report_error__193__id;
    std::string __Vtask_uvm_report_error__193__message;
    std::string __Vtask_uvm_report_error__193__filename;
    std::string __Vtask_uvm_report_error__193__context_name;
    std::string __Vfunc_uvm_report_enabled__199__id;
    std::string __Vtask_uvm_report_error__205__id;
    std::string __Vtask_uvm_report_error__205__message;
    std::string __Vtask_uvm_report_error__205__filename;
    std::string __Vtask_uvm_report_error__205__context_name;
    std::string __Vfunc_uvm_report_enabled__211__id;
    std::string __Vtask_uvm_report_error__217__id;
    std::string __Vtask_uvm_report_error__217__message;
    std::string __Vtask_uvm_report_error__217__filename;
    std::string __Vtask_uvm_report_error__217__context_name;
    std::string __Vfunc_uvm_report_enabled__223__id;
    std::string __Vtask_uvm_report_error__228__id;
    std::string __Vtask_uvm_report_error__228__message;
    std::string __Vtask_uvm_report_error__228__filename;
    std::string __Vtask_uvm_report_error__228__context_name;
    std::string __Vfunc_uvm_report_enabled__232__id;
    std::string __Vtask_uvm_report_info__240__id;
    std::string __Vtask_uvm_report_info__240__message;
    std::string __Vtask_uvm_report_info__240__filename;
    std::string __Vtask_uvm_report_info__240__context_name;
    std::string __Vfunc_uvm_report_enabled__248__id;
    std::string __Vtask_uvm_report_error__253__id;
    std::string __Vtask_uvm_report_error__253__message;
    std::string __Vtask_uvm_report_error__253__filename;
    std::string __Vtask_uvm_report_error__253__context_name;
    std::string __Vfunc_uvm_report_enabled__260__id;
    std::string __Vtask_uvm_report_error__265__id;
    std::string __Vtask_uvm_report_error__265__message;
    std::string __Vtask_uvm_report_error__265__filename;
    std::string __Vtask_uvm_report_error__265__context_name;
    std::string __Vfunc_uvm_report_enabled__269__id;
    std::string __Vtask_uvm_report_error__274__id;
    std::string __Vtask_uvm_report_error__274__message;
    std::string __Vtask_uvm_report_error__274__filename;
    std::string __Vtask_uvm_report_error__274__context_name;
    std::string __Vfunc_uvm_report_enabled__280__id;
    std::string __Vtask_uvm_report_error__285__id;
    std::string __Vtask_uvm_report_error__285__message;
    std::string __Vtask_uvm_report_error__285__filename;
    std::string __Vtask_uvm_report_error__285__context_name;
    std::string __Vfunc_uvm_report_enabled__289__id;
    std::string __Vtask_uvm_report_error__294__id;
    std::string __Vtask_uvm_report_error__294__message;
    std::string __Vtask_uvm_report_error__294__filename;
    std::string __Vtask_uvm_report_error__294__context_name;
    std::string __Vfunc_uvm_report_enabled__300__id;
    std::string __Vtask_uvm_report_error__305__id;
    std::string __Vtask_uvm_report_error__305__message;
    std::string __Vtask_uvm_report_error__305__filename;
    std::string __Vtask_uvm_report_error__305__context_name;
    std::string __Vfunc_uvm_report_enabled__309__id;
    std::string __Vtask_uvm_report_error__314__id;
    std::string __Vtask_uvm_report_error__314__message;
    std::string __Vtask_uvm_report_error__314__filename;
    std::string __Vtask_uvm_report_error__314__context_name;
    std::string __Vfunc_uvm_report_enabled__319__id;
    std::string __Vtask_uvm_report_error__324__id;
    std::string __Vtask_uvm_report_error__324__message;
    std::string __Vtask_uvm_report_error__324__filename;
    std::string __Vtask_uvm_report_error__324__context_name;
    std::string __Vfunc_uvm_report_enabled__329__id;
    std::string __Vtask_uvm_report_error__334__id;
    std::string __Vtask_uvm_report_error__334__message;
    std::string __Vtask_uvm_report_error__334__filename;
    std::string __Vtask_uvm_report_error__334__context_name;
    std::string __Vfunc_uvm_report_enabled__339__id;
    std::string __Vtask_uvm_report_error__344__id;
    std::string __Vtask_uvm_report_error__344__message;
    std::string __Vtask_uvm_report_error__344__filename;
    std::string __Vtask_uvm_report_error__344__context_name;
    std::string __Vfunc_uvm_report_enabled__349__id;
    std::string __Vtask_uvm_report_error__354__id;
    std::string __Vtask_uvm_report_error__354__message;
    std::string __Vtask_uvm_report_error__354__filename;
    std::string __Vtask_uvm_report_error__354__context_name;
    std::string __Vfunc_uvm_report_enabled__360__id;
    std::string __Vtask_uvm_report_warning__365__id;
    std::string __Vtask_uvm_report_warning__365__message;
    std::string __Vtask_uvm_report_warning__365__filename;
    std::string __Vtask_uvm_report_warning__365__context_name;
    std::string __Vfunc_uvm_report_enabled__370__id;
    std::string __Vtask_uvm_report_error__375__id;
    std::string __Vtask_uvm_report_error__375__message;
    std::string __Vtask_uvm_report_error__375__filename;
    std::string __Vtask_uvm_report_error__375__context_name;
    std::string __Vfunc_uvm_report_enabled__406__id;
    std::string __Vtask_uvm_report_info__411__id;
    std::string __Vtask_uvm_report_info__411__message;
    std::string __Vtask_uvm_report_info__411__filename;
    std::string __Vtask_uvm_report_info__411__context_name;
    std::string __Vfunc_uvm_report_enabled__416__id;
    std::string __Vtask_uvm_report_error__421__id;
    std::string __Vtask_uvm_report_error__421__message;
    std::string __Vtask_uvm_report_error__421__filename;
    std::string __Vtask_uvm_report_error__421__context_name;
    std::string __Vfunc_uvm_report_enabled__449__id;
    std::string __Vtask_uvm_report_info__454__id;
    std::string __Vtask_uvm_report_info__454__message;
    std::string __Vtask_uvm_report_info__454__filename;
    std::string __Vtask_uvm_report_info__454__context_name;
    std::string __Vfunc_uvm_report_enabled__458__id;
    std::string __Vtask_uvm_report_error__463__id;
    std::string __Vtask_uvm_report_error__463__message;
    std::string __Vtask_uvm_report_error__463__filename;
    std::string __Vtask_uvm_report_error__463__context_name;
    std::string __Vfunc_uvm_report_enabled__471__id;
    std::string __Vtask_uvm_report_info__476__id;
    std::string __Vtask_uvm_report_info__476__message;
    std::string __Vtask_uvm_report_info__476__filename;
    std::string __Vtask_uvm_report_info__476__context_name;
    std::string __Vfunc_uvm_report_enabled__480__id;
    std::string __Vtask_uvm_report_error__485__id;
    std::string __Vtask_uvm_report_error__485__message;
    std::string __Vtask_uvm_report_error__485__filename;
    std::string __Vtask_uvm_report_error__485__context_name;
    std::string __Vfunc_uvm_report_enabled__492__id;
    std::string __Vtask_uvm_report_info__497__id;
    std::string __Vtask_uvm_report_info__497__message;
    std::string __Vtask_uvm_report_info__497__filename;
    std::string __Vtask_uvm_report_info__497__context_name;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field>> __PVT__fields;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem> __PVT__mem;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem_region> __PVT__region;
    VlClassRef<VUVM_regblock_std__03a__03asemaphore> __PVT__atomic;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_vreg"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_vreg(*this); }
    VlCoroutine __VnoInFunc_XatomicX(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    void __VnoInFunc_Xlock_modelX(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_field(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> field);
    virtual void __VnoInFunc_allocate(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam> mam, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem_region> &allocate__Vfuncrtn);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_block> parent, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ size, QData/*63:0*/ offset, IData/*31:0*/ incr);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_access(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ idx, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_block(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field>> &fields);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_incr(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_incr__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_memory(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bytes(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_n_memlocs(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_memlocs__Vfuncrtn);
    virtual void __VnoInFunc_get_offset_in_memory(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &get_offset_in_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_region(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem_region> &get_region__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    virtual void __VnoInFunc_get_size(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_implement(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, IData/*31:0*/ incr, CData/*0:0*/ &implement__Vfuncrtn);
    void __VnoInFunc_is_in_map(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ path, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_post_write(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_pre_read(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_pre_write(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_release_region(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_reset(VUVM_regblock__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_set_parent(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_write(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_vreg() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_vreg();
};


#endif  // guard
