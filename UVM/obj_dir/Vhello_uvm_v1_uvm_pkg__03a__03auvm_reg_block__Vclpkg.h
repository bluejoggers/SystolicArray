// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_packer;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz12;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz8;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_field;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz85;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_base;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_pool;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__id;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block>, CData/*0:0*/> __PVT__m_roots;
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
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_check_data_width(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ width, CData/*0:0*/ &check_data_width__Vfuncrtn);
    void __VnoInFunc_find_block(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> &find_block__Vfuncrtn);
    void __VnoInFunc_find_blocks(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block>> &blks, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> accessor, IData/*31:0*/ &find_blocks__Vfuncrtn);
    void __VnoInFunc_get_root_blocks(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block>> &blks);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__locked;
    IData/*31:0*/ __PVT__default_path;
    IData/*31:0*/ __PVT__has_cover;
    IData/*31:0*/ __PVT__cover_on;
    IData/*31:0*/ __PVT__lineno;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__maps;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block>, IData/*31:0*/> __PVT__blks;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg>, IData/*31:0*/> __PVT__regs;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg>, IData/*31:0*/> __PVT__vregs;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem>, IData/*31:0*/> __PVT__mems;
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
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__backdoor;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84> __PVT__hdl_paths_pool;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> __PVT__default_map;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_block"; }
    void __VnoInFunc_Xinit_address_mapsX(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_XsampleX(Vhello_uvm_v1__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_block(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> blk);
    virtual void __VnoInFunc_add_coverage(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    void __VnoInFunc_add_hdl_path(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string path, std::string kind);
    void __VnoInFunc_add_map(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_add_mem(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem> mem);
    void __VnoInFunc_add_reg(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> rg);
    void __VnoInFunc_add_vreg(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_build_coverage(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    void __VnoInFunc_clear_hdl_path(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create_map(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> &create_map__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_get_backdoor(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> &get_block_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_blocks(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block>> &blks, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_coverage(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    void __VnoInFunc_get_default_hdl_path(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn);
    void __VnoInFunc_get_default_map(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    virtual void __VnoInFunc_get_default_path(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_path__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind);
    virtual void __VnoInFunc_get_map_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> &get_map_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_mem_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem> &get_mem_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_memories(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_parent(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> &get_reg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_registers(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_vfield_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_virtual_registers(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_vreg_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_hdl_path_root(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &is_hdl_path_root__Vfuncrtn);
    void __VnoInFunc_is_locked(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &is_locked__Vfuncrtn);
    virtual void __VnoInFunc_lock_model(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_mirror(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read_mem_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_read_reg_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_readmemh(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string filename);
    virtual void __VnoInFunc_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_sample(Vhello_uvm_v1__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_sample_values(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_backdoor(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_default_hdl_path(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string kind);
    void __VnoInFunc_set_default_map(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_set_hdl_path_root(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string path, std::string kind);
    virtual void __VnoInFunc_set_parent(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_update(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write_mem_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write_reg_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_writememh(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string filename);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ has_coverage);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block();
};


#endif  // guard
