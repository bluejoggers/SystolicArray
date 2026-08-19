// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_REG_MAP__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_REG_MAP__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vhello_uvm_uvm_pkg.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_event_;
class Vhello_uvm_uvm_pkg__03a__03auvm_mem;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi14;
class Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vhello_uvm_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_adapter;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_block;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_field;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_item;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_map;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_transaction_order_policy;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_status_container;
class Vhello_uvm_uvm_pkg__03a__03auvm_vreg;
class Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_reg_map__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> __PVT__m_backdoor;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_reg_map__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_reg_map__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_reg_map__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_backdoor(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> &backdoor__Vfuncrtn);
    void __VnoInFunc_get_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi14> &get_type__Vfuncrtn);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_reg_map : public Vhello_uvm_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_byte_addressing;
    CData/*0:0*/ __PVT__m_auto_predict;
    CData/*0:0*/ __PVT__m_check_on_read;
    IData/*31:0*/ __PVT__m_n_bytes;
    IData/*31:0*/ __PVT__m_endian;
    IData/*31:0*/ __PVT__m_system_n_bytes;
    QData/*63:0*/ __PVT__m_base_addr;
    VlAssocArray<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map>, QData/*63:0*/> __PVT__m_parent_maps;
    VlAssocArray<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map>, QData/*63:0*/> __PVT__m_submaps;
    VlAssocArray<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map>, std::string> __PVT__m_submap_rights;
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_error__13__id;
    std::string __Vtask_uvm_report_error__13__message;
    std::string __Vtask_uvm_report_error__13__filename;
    std::string __Vtask_uvm_report_error__13__context_name;
    std::string __Vfunc_uvm_report_enabled__19__id;
    std::string __Vtask_uvm_report_error__25__id;
    std::string __Vtask_uvm_report_error__25__message;
    std::string __Vtask_uvm_report_error__25__filename;
    std::string __Vtask_uvm_report_error__25__context_name;
    std::string __Vfunc_uvm_report_enabled__31__id;
    std::string __Vtask_uvm_report_error__37__id;
    std::string __Vtask_uvm_report_error__37__message;
    std::string __Vtask_uvm_report_error__37__filename;
    std::string __Vtask_uvm_report_error__37__context_name;
    std::string __Vfunc_uvm_report_enabled__56__id;
    std::string __Vtask_uvm_report_warning__63__id;
    std::string __Vtask_uvm_report_warning__63__message;
    std::string __Vtask_uvm_report_warning__63__filename;
    std::string __Vtask_uvm_report_warning__63__context_name;
    std::string __Vfunc_uvm_report_enabled__67__id;
    std::string __Vtask_uvm_report_warning__74__id;
    std::string __Vtask_uvm_report_warning__74__message;
    std::string __Vtask_uvm_report_warning__74__filename;
    std::string __Vtask_uvm_report_warning__74__context_name;
    std::string __Vfunc_uvm_report_enabled__78__id;
    std::string __Vtask_uvm_report_error__84__id;
    std::string __Vtask_uvm_report_error__84__message;
    std::string __Vtask_uvm_report_error__84__filename;
    std::string __Vtask_uvm_report_error__84__context_name;
    std::string __Vfunc_uvm_report_enabled__90__id;
    std::string __Vtask_uvm_report_error__96__id;
    std::string __Vtask_uvm_report_error__96__message;
    std::string __Vtask_uvm_report_error__96__filename;
    std::string __Vtask_uvm_report_error__96__context_name;
    std::string __Vfunc_uvm_report_enabled__102__id;
    std::string __Vtask_uvm_report_error__108__id;
    std::string __Vtask_uvm_report_error__108__message;
    std::string __Vtask_uvm_report_error__108__filename;
    std::string __Vtask_uvm_report_error__108__context_name;
    std::string __Vfunc_uvm_report_enabled__121__id;
    std::string __Vtask_uvm_report_warning__128__id;
    std::string __Vtask_uvm_report_warning__128__message;
    std::string __Vtask_uvm_report_warning__128__filename;
    std::string __Vtask_uvm_report_warning__128__context_name;
    std::string __Vfunc_uvm_report_enabled__132__id;
    std::string __Vtask_uvm_report_warning__139__id;
    std::string __Vtask_uvm_report_warning__139__message;
    std::string __Vtask_uvm_report_warning__139__filename;
    std::string __Vtask_uvm_report_warning__139__context_name;
    std::string __Vfunc_uvm_report_enabled__143__id;
    std::string __Vtask_uvm_report_error__148__id;
    std::string __Vtask_uvm_report_error__148__message;
    std::string __Vtask_uvm_report_error__148__filename;
    std::string __Vtask_uvm_report_error__148__context_name;
    std::string __Vfunc_uvm_report_enabled__153__id;
    std::string __Vtask_uvm_report_error__160__id;
    std::string __Vtask_uvm_report_error__160__message;
    std::string __Vtask_uvm_report_error__160__filename;
    std::string __Vtask_uvm_report_error__160__context_name;
    std::string __Vfunc_uvm_report_enabled__165__id;
    std::string __Vtask_uvm_report_error__170__id;
    std::string __Vtask_uvm_report_error__170__message;
    std::string __Vtask_uvm_report_error__170__filename;
    std::string __Vtask_uvm_report_error__170__context_name;
    std::string __Vfunc_uvm_report_enabled__177__id;
    std::string __Vtask_uvm_report_error__185__id;
    std::string __Vtask_uvm_report_error__185__message;
    std::string __Vtask_uvm_report_error__185__filename;
    std::string __Vtask_uvm_report_error__185__context_name;
    std::string __Vfunc_uvm_report_enabled__190__id;
    std::string __Vtask_uvm_report_warning__197__id;
    std::string __Vtask_uvm_report_warning__197__message;
    std::string __Vtask_uvm_report_warning__197__filename;
    std::string __Vtask_uvm_report_warning__197__context_name;
    std::string __Vfunc_uvm_report_enabled__205__id;
    std::string __Vtask_uvm_report_error__210__id;
    std::string __Vtask_uvm_report_error__210__message;
    std::string __Vtask_uvm_report_error__210__filename;
    std::string __Vtask_uvm_report_error__210__context_name;
    std::string __Vfunc_uvm_report_enabled__214__id;
    std::string __Vtask_uvm_report_error__221__id;
    std::string __Vtask_uvm_report_error__221__message;
    std::string __Vtask_uvm_report_error__221__filename;
    std::string __Vtask_uvm_report_error__221__context_name;
    std::string __Vfunc_uvm_report_enabled__225__id;
    std::string __Vtask_uvm_report_error__229__id;
    std::string __Vtask_uvm_report_error__229__message;
    std::string __Vtask_uvm_report_error__229__filename;
    std::string __Vtask_uvm_report_error__229__context_name;
    std::string __Vfunc_uvm_report_enabled__233__id;
    std::string __Vtask_uvm_report_info__239__id;
    std::string __Vtask_uvm_report_info__239__message;
    std::string __Vtask_uvm_report_info__239__filename;
    std::string __Vtask_uvm_report_info__239__context_name;
    std::string __Vfunc_uvm_report_enabled__260__id;
    std::string __Vtask_uvm_report_error__266__id;
    std::string __Vtask_uvm_report_error__266__message;
    std::string __Vtask_uvm_report_error__266__filename;
    std::string __Vtask_uvm_report_error__266__context_name;
    std::string __Vfunc_uvm_report_enabled__270__id;
    std::string __Vtask_uvm_report_error__276__id;
    std::string __Vtask_uvm_report_error__276__message;
    std::string __Vtask_uvm_report_error__276__filename;
    std::string __Vtask_uvm_report_error__276__context_name;
    std::string __Vfunc_uvm_report_enabled__280__id;
    std::string __Vtask_uvm_report_warning__285__id;
    std::string __Vtask_uvm_report_warning__285__message;
    std::string __Vtask_uvm_report_warning__285__filename;
    std::string __Vtask_uvm_report_warning__285__context_name;
    std::string __Vfunc_uvm_report_enabled__299__id;
    std::string __Vtask_uvm_report_error__304__id;
    std::string __Vtask_uvm_report_error__304__message;
    std::string __Vtask_uvm_report_error__304__filename;
    std::string __Vtask_uvm_report_error__304__context_name;
    std::string __Vfunc_uvm_report_enabled__309__id;
    std::string __Vtask_uvm_report_error__314__id;
    std::string __Vtask_uvm_report_error__314__message;
    std::string __Vtask_uvm_report_error__314__filename;
    std::string __Vtask_uvm_report_error__314__context_name;
    std::string __Vfunc_uvm_report_enabled__318__id;
    std::string __Vtask_uvm_report_fatal__322__id;
    std::string __Vtask_uvm_report_fatal__322__message;
    std::string __Vtask_uvm_report_fatal__322__filename;
    std::string __Vtask_uvm_report_fatal__322__context_name;
    std::string __Vfunc_uvm_report_enabled__327__id;
    std::string __Vtask_uvm_report_fatal__331__id;
    std::string __Vtask_uvm_report_fatal__331__message;
    std::string __Vtask_uvm_report_fatal__331__filename;
    std::string __Vtask_uvm_report_fatal__331__context_name;
    std::string __Vfunc_uvm_report_enabled__336__id;
    std::string __Vtask_uvm_report_error__341__id;
    std::string __Vtask_uvm_report_error__341__message;
    std::string __Vtask_uvm_report_error__341__filename;
    std::string __Vtask_uvm_report_error__341__context_name;
    std::string __Vfunc_uvm_report_enabled__350__id;
    std::string __Vtask_uvm_report_error__354__id;
    std::string __Vtask_uvm_report_error__354__message;
    std::string __Vtask_uvm_report_error__354__filename;
    std::string __Vtask_uvm_report_error__354__context_name;
    std::string __Vfunc_uvm_report_enabled__361__id;
    std::string __Vtask_uvm_report_error__365__id;
    std::string __Vtask_uvm_report_error__365__message;
    std::string __Vtask_uvm_report_error__365__filename;
    std::string __Vtask_uvm_report_error__365__context_name;
    std::string __Vfunc_uvm_report_enabled__369__id;
    std::string __Vtask_uvm_report_error__375__id;
    std::string __Vtask_uvm_report_error__375__message;
    std::string __Vtask_uvm_report_error__375__filename;
    std::string __Vtask_uvm_report_error__375__context_name;
    std::string __Vfunc_uvm_report_enabled__380__id;
    std::string __Vtask_uvm_report_error__385__id;
    std::string __Vtask_uvm_report_error__385__message;
    std::string __Vtask_uvm_report_error__385__filename;
    std::string __Vtask_uvm_report_error__385__context_name;
    std::string __Vfunc_uvm_report_enabled__390__id;
    std::string __Vtask_uvm_report_error__395__id;
    std::string __Vtask_uvm_report_error__395__message;
    std::string __Vtask_uvm_report_error__395__filename;
    std::string __Vtask_uvm_report_error__395__context_name;
    std::string __Vfunc_uvm_report_enabled__409__id;
    std::string __Vtask_uvm_report_warning__416__id;
    std::string __Vtask_uvm_report_warning__416__message;
    std::string __Vtask_uvm_report_warning__416__filename;
    std::string __Vtask_uvm_report_warning__416__context_name;
    std::string __Vfunc_uvm_report_enabled__420__id;
    std::string __Vtask_uvm_report_warning__427__id;
    std::string __Vtask_uvm_report_warning__427__message;
    std::string __Vtask_uvm_report_warning__427__filename;
    std::string __Vtask_uvm_report_warning__427__context_name;
    std::string __Vfunc_uvm_report_enabled__437__id;
    std::string __Vtask_uvm_report_warning__444__id;
    std::string __Vtask_uvm_report_warning__444__message;
    std::string __Vtask_uvm_report_warning__444__filename;
    std::string __Vtask_uvm_report_warning__444__context_name;
    std::string __Vfunc_uvm_report_enabled__448__id;
    std::string __Vtask_uvm_report_warning__455__id;
    std::string __Vtask_uvm_report_warning__455__message;
    std::string __Vtask_uvm_report_warning__455__filename;
    std::string __Vtask_uvm_report_warning__455__context_name;
    std::string __Vfunc_uvm_report_enabled__459__id;
    std::string __Vtask_uvm_report_fatal__464__id;
    std::string __Vtask_uvm_report_fatal__464__message;
    std::string __Vtask_uvm_report_fatal__464__filename;
    std::string __Vtask_uvm_report_fatal__464__context_name;
    std::string __Vfunc_uvm_report_enabled__470__id;
    std::string __Vtask_uvm_report_fatal__475__id;
    std::string __Vtask_uvm_report_fatal__475__message;
    std::string __Vtask_uvm_report_fatal__475__filename;
    std::string __Vtask_uvm_report_fatal__475__context_name;
    std::string __Vfunc_uvm_report_enabled__481__id;
    std::string __Vtask_uvm_report_fatal__486__id;
    std::string __Vtask_uvm_report_fatal__486__message;
    std::string __Vtask_uvm_report_fatal__486__filename;
    std::string __Vtask_uvm_report_fatal__486__context_name;
    std::string __Vfunc_uvm_report_enabled__523__id;
    std::string __Vtask_uvm_report_info__529__id;
    std::string __Vtask_uvm_report_info__529__message;
    std::string __Vtask_uvm_report_info__529__filename;
    std::string __Vtask_uvm_report_info__529__context_name;
    std::string __Vfunc_uvm_report_enabled__537__id;
    std::string __Vtask_uvm_report_fatal__542__id;
    std::string __Vtask_uvm_report_fatal__542__message;
    std::string __Vtask_uvm_report_fatal__542__filename;
    std::string __Vtask_uvm_report_fatal__542__context_name;
    std::string __Vfunc_uvm_report_enabled__556__id;
    std::string __Vtask_uvm_report_info__562__id;
    std::string __Vtask_uvm_report_info__562__message;
    std::string __Vtask_uvm_report_info__562__filename;
    std::string __Vtask_uvm_report_info__562__context_name;
    std::string __Vfunc_uvm_report_enabled__570__id;
    std::string __Vtask_uvm_report_info__576__id;
    std::string __Vtask_uvm_report_info__576__message;
    std::string __Vtask_uvm_report_info__576__filename;
    std::string __Vtask_uvm_report_info__576__context_name;
    std::string __Vfunc_uvm_report_enabled__584__id;
    std::string __Vtask_uvm_report_fatal__589__id;
    std::string __Vtask_uvm_report_fatal__589__message;
    std::string __Vtask_uvm_report_fatal__589__filename;
    std::string __Vtask_uvm_report_fatal__589__context_name;
    std::string __Vfunc_uvm_report_enabled__602__id;
    std::string __Vtask_uvm_report_info__608__id;
    std::string __Vtask_uvm_report_info__608__message;
    std::string __Vtask_uvm_report_info__608__filename;
    std::string __Vtask_uvm_report_info__608__context_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> __PVT__m_sequence_wrapper;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_adapter> __PVT__m_adapter;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> __PVT__m_sequencer;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> __PVT__m_parent_map;
    VlAssocArray<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info>> __PVT__m_regs_info;
    VlAssocArray<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem>, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info>> __PVT__m_mems_info;
    VlAssocArray<QData/*63:0*/, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>> __PVT__m_regs_by_offset;
    VlAssocArray<QData/*63:0*/, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>> __PVT__m_regs_by_offset_wo;
    VlAssocArray<VlWide<5>/*159:0*/, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem>> __PVT__m_mems_by_offset;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_transaction_order_policy> __PVT__policy;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_map"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_reg_map(*this); }
    void __VnoInFunc_Xget_bus_infoX(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> &map_info, IData/*31:0*/ &size, IData/*31:0*/ &lsb, IData/*31:0*/ &addr_skip);
    void __VnoInFunc_Xinit_address_mapX(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_Xverify_map_configX(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_add_mem(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor);
    virtual void __VnoInFunc_add_parent_map(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> parent_map, QData/*63:0*/ offset);
    virtual void __VnoInFunc_add_reg(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor);
    virtual void __VnoInFunc_add_submap(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> child_map, QData/*63:0*/ offset);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> parent, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_do_bus_read(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual VlCoroutine __VnoInFunc_do_bus_write(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_adapter(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_adapter> &get_adapter__Vfuncrtn);
    virtual void __VnoInFunc_get_addr_unit_bytes(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_addr_unit_bytes__Vfuncrtn);
    void __VnoInFunc_get_auto_predict(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_auto_predict__Vfuncrtn);
    virtual void __VnoInFunc_get_base_addr(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ hier, QData/*63:0*/ &get_base_addr__Vfuncrtn);
    void __VnoInFunc_get_check_on_read(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_on_read__Vfuncrtn);
    virtual void __VnoInFunc_get_endian(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_endian__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_mem_by_offset(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem> &get_mem_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_mem_map_info(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem> mem, CData/*0:0*/ error, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> &get_mem_map_info__Vfuncrtn);
    virtual void __VnoInFunc_get_memories(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_n_bytes(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_parent_map(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> &get_parent_map__Vfuncrtn);
    virtual void __VnoInFunc_get_physical_addresses(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_physical_addresses__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_by_offset(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ read, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg> &get_reg_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_map_info(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg> rg, CData/*0:0*/ error, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> &get_reg_map_info__Vfuncrtn);
    virtual void __VnoInFunc_get_registers(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_root_map(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> &get_root_map__Vfuncrtn);
    virtual void __VnoInFunc_get_sequencer(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn);
    virtual void __VnoInFunc_get_size(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_get_submap_offset(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ &get_submap_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_submaps(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map>> &maps, IData/*31:0*/ hier);
    void __VnoInFunc_get_transaction_order_policy(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_transaction_order_policy> &get_transaction_order_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_virtual_registers(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_m_set_mem_offset(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_m_set_reg_offset(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset(Vhello_uvm__Syms* __restrict vlSymsp, std::string kind);
    void __VnoInFunc_set_auto_predict(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    virtual void __VnoInFunc_set_base_addr(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset);
    void __VnoInFunc_set_check_on_read(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    virtual void __VnoInFunc_set_sequencer(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual void __VnoInFunc_set_submap_offset(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ offset);
    void __VnoInFunc_set_transaction_order_policy(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_transaction_order_policy> pol);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_reg_map() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_reg_map();
};


#endif  // guard
