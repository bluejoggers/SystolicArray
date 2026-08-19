// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_comparer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_mem;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz65;
class Vuvm_pkg_uvm_pkg__03a__03auvm_packer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz29;
class Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz5;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_backdoor;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz66;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_pool;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_vreg;
class Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__id;
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block>, CData/*0:0*/> __PVT__m_roots;
    std::string __Vfunc_uvm_report_enabled__0__id;
    std::string __Vtask_uvm_report_fatal__4__id;
    std::string __Vtask_uvm_report_fatal__4__message;
    std::string __Vtask_uvm_report_fatal__4__filename;
    std::string __Vtask_uvm_report_fatal__4__context_name;
    std::string __Vfunc_uvm_report_enabled__15__id;
    std::string __Vtask_uvm_report_warning__19__id;
    std::string __Vtask_uvm_report_warning__19__message;
    std::string __Vtask_uvm_report_warning__19__filename;
    std::string __Vtask_uvm_report_warning__19__context_name;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_check_data_width(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ width, CData/*0:0*/ &check_data_width__Vfuncrtn);
    void __VnoInFunc_find_block(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> &find_block__Vfuncrtn);
    void __VnoInFunc_find_blocks(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block>> &blks, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor, IData/*31:0*/ &find_blocks__Vfuncrtn);
    void __VnoInFunc_get_root_blocks(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block>> &blks);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block : public Vuvm_pkg_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__locked;
    IData/*31:0*/ __PVT__default_path;
    IData/*31:0*/ __PVT__has_cover;
    IData/*31:0*/ __PVT__cover_on;
    IData/*31:0*/ __PVT__lineno;
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__maps;
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block>, IData/*31:0*/> __PVT__blks;
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg>, IData/*31:0*/> __PVT__regs;
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg>, IData/*31:0*/> __PVT__vregs;
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_mem>, IData/*31:0*/> __PVT__mems;
    VlAssocArray<std::string, std::string> __PVT__root_hdl_paths;
    std::string __PVT__default_hdl_path;
    std::string __PVT__fname;
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_error__11__id;
    std::string __Vtask_uvm_report_error__11__message;
    std::string __Vtask_uvm_report_error__11__filename;
    std::string __Vtask_uvm_report_error__11__context_name;
    std::string __Vfunc_uvm_report_enabled__15__id;
    std::string __Vtask_uvm_report_error__21__id;
    std::string __Vtask_uvm_report_error__21__message;
    std::string __Vtask_uvm_report_error__21__filename;
    std::string __Vtask_uvm_report_error__21__context_name;
    std::string __Vfunc_uvm_report_enabled__26__id;
    std::string __Vtask_uvm_report_error__30__id;
    std::string __Vtask_uvm_report_error__30__message;
    std::string __Vtask_uvm_report_error__30__filename;
    std::string __Vtask_uvm_report_error__30__context_name;
    std::string __Vfunc_uvm_report_enabled__34__id;
    std::string __Vtask_uvm_report_error__40__id;
    std::string __Vtask_uvm_report_error__40__message;
    std::string __Vtask_uvm_report_error__40__filename;
    std::string __Vtask_uvm_report_error__40__context_name;
    std::string __Vfunc_uvm_report_enabled__45__id;
    std::string __Vtask_uvm_report_error__49__id;
    std::string __Vtask_uvm_report_error__49__message;
    std::string __Vtask_uvm_report_error__49__filename;
    std::string __Vtask_uvm_report_error__49__context_name;
    std::string __Vfunc_uvm_report_enabled__53__id;
    std::string __Vtask_uvm_report_error__59__id;
    std::string __Vtask_uvm_report_error__59__message;
    std::string __Vtask_uvm_report_error__59__filename;
    std::string __Vtask_uvm_report_error__59__context_name;
    std::string __Vfunc_uvm_report_enabled__64__id;
    std::string __Vtask_uvm_report_error__68__id;
    std::string __Vtask_uvm_report_error__68__message;
    std::string __Vtask_uvm_report_error__68__filename;
    std::string __Vtask_uvm_report_error__68__context_name;
    std::string __Vfunc_uvm_report_enabled__72__id;
    std::string __Vtask_uvm_report_error__78__id;
    std::string __Vtask_uvm_report_error__78__message;
    std::string __Vtask_uvm_report_error__78__filename;
    std::string __Vtask_uvm_report_error__78__context_name;
    std::string __Vfunc_uvm_report_enabled__91__id;
    std::string __Vtask_uvm_report_fatal__95__id;
    std::string __Vtask_uvm_report_fatal__95__message;
    std::string __Vtask_uvm_report_fatal__95__filename;
    std::string __Vtask_uvm_report_fatal__95__context_name;
    std::string __Vfunc_uvm_report_enabled__102__id;
    std::string __Vtask_uvm_report_error__107__id;
    std::string __Vtask_uvm_report_error__107__message;
    std::string __Vtask_uvm_report_error__107__filename;
    std::string __Vtask_uvm_report_error__107__context_name;
    std::string __Vfunc_uvm_report_enabled__126__id;
    std::string __Vtask_uvm_report_warning__131__id;
    std::string __Vtask_uvm_report_warning__131__message;
    std::string __Vtask_uvm_report_warning__131__filename;
    std::string __Vtask_uvm_report_warning__131__context_name;
    std::string __Vfunc_uvm_report_enabled__138__id;
    std::string __Vtask_uvm_report_warning__143__id;
    std::string __Vtask_uvm_report_warning__143__message;
    std::string __Vtask_uvm_report_warning__143__filename;
    std::string __Vtask_uvm_report_warning__143__context_name;
    std::string __Vfunc_uvm_report_enabled__150__id;
    std::string __Vtask_uvm_report_warning__155__id;
    std::string __Vtask_uvm_report_warning__155__message;
    std::string __Vtask_uvm_report_warning__155__filename;
    std::string __Vtask_uvm_report_warning__155__context_name;
    std::string __Vfunc_uvm_report_enabled__162__id;
    std::string __Vtask_uvm_report_warning__167__id;
    std::string __Vtask_uvm_report_warning__167__message;
    std::string __Vtask_uvm_report_warning__167__filename;
    std::string __Vtask_uvm_report_warning__167__context_name;
    std::string __Vfunc_uvm_report_enabled__176__id;
    std::string __Vtask_uvm_report_warning__181__id;
    std::string __Vtask_uvm_report_warning__181__message;
    std::string __Vtask_uvm_report_warning__181__filename;
    std::string __Vtask_uvm_report_warning__181__context_name;
    std::string __Vfunc_uvm_report_enabled__190__id;
    std::string __Vtask_uvm_report_warning__195__id;
    std::string __Vtask_uvm_report_warning__195__message;
    std::string __Vtask_uvm_report_warning__195__filename;
    std::string __Vtask_uvm_report_warning__195__context_name;
    std::string __Vfunc_uvm_report_enabled__213__id;
    std::string __Vtask_uvm_report_info__218__id;
    std::string __Vtask_uvm_report_info__218__message;
    std::string __Vtask_uvm_report_info__218__filename;
    std::string __Vtask_uvm_report_info__218__context_name;
    std::string __Vfunc_uvm_report_enabled__222__id;
    std::string __Vtask_uvm_report_info__227__id;
    std::string __Vtask_uvm_report_info__227__message;
    std::string __Vtask_uvm_report_info__227__filename;
    std::string __Vtask_uvm_report_info__227__context_name;
    std::string __Vfunc_uvm_report_enabled__233__id;
    std::string __Vtask_uvm_report_error__238__id;
    std::string __Vtask_uvm_report_error__238__message;
    std::string __Vtask_uvm_report_error__238__filename;
    std::string __Vtask_uvm_report_error__238__context_name;
    std::string __Vfunc_uvm_report_enabled__253__id;
    std::string __Vtask_uvm_report_error__257__id;
    std::string __Vtask_uvm_report_error__257__message;
    std::string __Vtask_uvm_report_error__257__filename;
    std::string __Vtask_uvm_report_error__257__context_name;
    std::string __Vfunc_uvm_report_enabled__264__id;
    std::string __Vtask_uvm_report_error__268__id;
    std::string __Vtask_uvm_report_error__268__message;
    std::string __Vtask_uvm_report_error__268__filename;
    std::string __Vtask_uvm_report_error__268__context_name;
    std::string __Vfunc_uvm_report_enabled__272__id;
    std::string __Vtask_uvm_report_error__278__id;
    std::string __Vtask_uvm_report_error__278__message;
    std::string __Vtask_uvm_report_error__278__filename;
    std::string __Vtask_uvm_report_error__278__context_name;
    std::string __Vfunc_uvm_report_enabled__286__id;
    std::string __Vtask_uvm_report_warning__290__id;
    std::string __Vtask_uvm_report_warning__290__message;
    std::string __Vtask_uvm_report_warning__290__filename;
    std::string __Vtask_uvm_report_warning__290__context_name;
    std::string __Vfunc_uvm_report_enabled__294__id;
    std::string __Vtask_uvm_report_warning__299__id;
    std::string __Vtask_uvm_report_warning__299__message;
    std::string __Vtask_uvm_report_warning__299__filename;
    std::string __Vtask_uvm_report_warning__299__context_name;
    std::string __Vfunc_uvm_report_enabled__306__id;
    std::string __Vtask_uvm_report_warning__310__id;
    std::string __Vtask_uvm_report_warning__310__message;
    std::string __Vtask_uvm_report_warning__310__filename;
    std::string __Vtask_uvm_report_warning__310__context_name;
    std::string __Vfunc_uvm_report_enabled__320__id;
    std::string __Vtask_uvm_report_warning__324__id;
    std::string __Vtask_uvm_report_warning__324__message;
    std::string __Vtask_uvm_report_warning__324__filename;
    std::string __Vtask_uvm_report_warning__324__context_name;
    std::string __Vfunc_uvm_report_enabled__335__id;
    std::string __Vtask_uvm_report_error__339__id;
    std::string __Vtask_uvm_report_error__339__message;
    std::string __Vtask_uvm_report_error__339__filename;
    std::string __Vtask_uvm_report_error__339__context_name;
    std::string __Vfunc_uvm_report_enabled__349__id;
    std::string __Vtask_uvm_report_error__353__id;
    std::string __Vtask_uvm_report_error__353__message;
    std::string __Vtask_uvm_report_error__353__filename;
    std::string __Vtask_uvm_report_error__353__context_name;
    std::string __Vfunc_uvm_report_enabled__362__id;
    std::string __Vtask_uvm_report_error__366__id;
    std::string __Vtask_uvm_report_error__366__message;
    std::string __Vtask_uvm_report_error__366__filename;
    std::string __Vtask_uvm_report_error__366__context_name;
    std::string __Vfunc_uvm_report_enabled__384__id;
    std::string __Vtask_uvm_report_fatal__388__id;
    std::string __Vtask_uvm_report_fatal__388__message;
    std::string __Vtask_uvm_report_fatal__388__filename;
    std::string __Vtask_uvm_report_fatal__388__context_name;
    std::string __Vfunc_uvm_report_enabled__392__id;
    std::string __Vtask_uvm_report_fatal__396__id;
    std::string __Vtask_uvm_report_fatal__396__message;
    std::string __Vtask_uvm_report_fatal__396__filename;
    std::string __Vtask_uvm_report_fatal__396__context_name;
    std::string __Vfunc_uvm_report_enabled__400__id;
    std::string __Vtask_uvm_report_warning__404__id;
    std::string __Vtask_uvm_report_warning__404__message;
    std::string __Vtask_uvm_report_warning__404__filename;
    std::string __Vtask_uvm_report_warning__404__context_name;
    std::string __Vfunc_uvm_report_enabled__408__id;
    std::string __Vtask_uvm_report_warning__412__id;
    std::string __Vtask_uvm_report_warning__412__message;
    std::string __Vtask_uvm_report_warning__412__filename;
    std::string __Vtask_uvm_report_warning__412__context_name;
    std::string __Vfunc_uvm_report_enabled__416__id;
    std::string __Vtask_uvm_report_warning__420__id;
    std::string __Vtask_uvm_report_warning__420__message;
    std::string __Vtask_uvm_report_warning__420__filename;
    std::string __Vtask_uvm_report_warning__420__context_name;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__backdoor;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz65> __PVT__hdl_paths_pool;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> __PVT__default_map;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_block"; }
    void __VnoInFunc_Xinit_address_mapsX(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_XsampleX(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_block(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> blk);
    virtual void __VnoInFunc_add_coverage(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    void __VnoInFunc_add_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string path, std::string kind);
    void __VnoInFunc_add_map(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_add_mem(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_mem> mem);
    void __VnoInFunc_add_reg(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> rg);
    void __VnoInFunc_add_vreg(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_build_coverage(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    void __VnoInFunc_clear_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create_map(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> &create_map__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_get_backdoor(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> &get_block_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_blocks(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block>> &blks, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_coverage(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    void __VnoInFunc_get_default_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn);
    void __VnoInFunc_get_default_map(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    virtual void __VnoInFunc_get_default_path(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_path__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind);
    virtual void __VnoInFunc_get_map_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> &get_map_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_mem_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_mem> &get_mem_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_memories(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_parent(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> &get_reg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_registers(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_vfield_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_virtual_registers(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_vreg_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_hdl_path_root(Vuvm_pkg__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &is_hdl_path_root__Vfuncrtn);
    void __VnoInFunc_is_locked(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_locked__Vfuncrtn);
    virtual void __VnoInFunc_lock_model(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_mirror(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read_mem_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_read_reg_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_readmemh(Vuvm_pkg__Syms* __restrict vlSymsp, std::string filename);
    virtual void __VnoInFunc_reset(Vuvm_pkg__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_sample(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_sample_values(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_backdoor(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_default_hdl_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string kind);
    void __VnoInFunc_set_default_map(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_set_hdl_path_root(Vuvm_pkg__Syms* __restrict vlSymsp, std::string path, std::string kind);
    virtual void __VnoInFunc_set_parent(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_update(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write_mem_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write_reg_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_writememh(Vuvm_pkg__Syms* __restrict vlSymsp, std::string filename);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ has_coverage);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block();
};


#endif  // guard
