// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19;
class Vuvm_pkg_uvm_pkg__03a__03auvm_comparer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi9;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper;
class Vuvm_pkg_uvm_pkg__03a__03auvm_packer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_adapter;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_backdoor;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_cbs;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map_info;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_status_container;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_predefined;
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__m_policy_names;
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_define_access(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &define_access__Vfuncrtn);
    void __VnoInFunc_get_max_size(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
    void __VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi9> &get_type__Vfuncrtn);
    void __VnoInFunc_m_predefine_policies(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &m_predefine_policies__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field : public Vuvm_pkg_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_volatile;
    CData/*0:0*/ __PVT__m_written;
    CData/*0:0*/ __PVT__m_read_in_progress;
    CData/*0:0*/ __PVT__m_write_in_progress;
    CData/*0:0*/ __PVT__m_individually_accessible;
    IData/*31:0*/ __PVT__m_lsb;
    IData/*31:0*/ __PVT__m_size;
    IData/*31:0*/ __PVT__m_lineno;
    IData/*31:0*/ __PVT__m_cover_on;
    IData/*31:0*/ __PVT__m_check;
    QData/*63:0*/ __PVT__value;
    QData/*63:0*/ __PVT__m_mirrored;
    QData/*63:0*/ __PVT__m_desired;
    VlAssocArray<std::string, QData/*63:0*/> __PVT__m_reset;
    std::string __PVT__m_access;
    std::string __PVT__m_fname;
    std::string __Vfunc_uvm_report_enabled__6__id;
    std::string __Vtask_uvm_report_error__11__id;
    std::string __Vtask_uvm_report_error__11__message;
    std::string __Vtask_uvm_report_error__11__filename;
    std::string __Vtask_uvm_report_error__11__context_name;
    std::string __Vfunc_uvm_report_enabled__19__id;
    std::string __Vtask_uvm_report_error__24__id;
    std::string __Vtask_uvm_report_error__24__message;
    std::string __Vtask_uvm_report_error__24__filename;
    std::string __Vtask_uvm_report_error__24__context_name;
    std::string __Vfunc_uvm_report_enabled__33__id;
    std::string __Vtask_uvm_report_warning__41__id;
    std::string __Vtask_uvm_report_warning__41__message;
    std::string __Vtask_uvm_report_warning__41__filename;
    std::string __Vtask_uvm_report_warning__41__context_name;
    std::string __Vfunc_uvm_report_enabled__45__id;
    std::string __Vtask_uvm_report_error__49__id;
    std::string __Vtask_uvm_report_error__49__message;
    std::string __Vtask_uvm_report_error__49__filename;
    std::string __Vtask_uvm_report_error__49__context_name;
    std::string __Vfunc_uvm_report_enabled__75__id;
    std::string __Vtask_uvm_report_warning__81__id;
    std::string __Vtask_uvm_report_warning__81__message;
    std::string __Vtask_uvm_report_warning__81__filename;
    std::string __Vtask_uvm_report_warning__81__context_name;
    std::string __Vfunc_uvm_report_enabled__85__id;
    std::string __Vtask_uvm_report_warning__90__id;
    std::string __Vtask_uvm_report_warning__90__message;
    std::string __Vtask_uvm_report_warning__90__filename;
    std::string __Vtask_uvm_report_warning__90__context_name;
    std::string __Vfunc_uvm_report_enabled__95__id;
    std::string __Vtask_uvm_report_warning__101__id;
    std::string __Vtask_uvm_report_warning__101__message;
    std::string __Vtask_uvm_report_warning__101__filename;
    std::string __Vtask_uvm_report_warning__101__context_name;
    std::string __Vfunc_uvm_report_enabled__109__id;
    std::string __Vtask_uvm_report_warning__114__id;
    std::string __Vtask_uvm_report_warning__114__message;
    std::string __Vtask_uvm_report_warning__114__filename;
    std::string __Vtask_uvm_report_warning__114__context_name;
    std::string __Vfunc_uvm_report_enabled__121__id;
    std::string __Vtask_uvm_report_error__127__id;
    std::string __Vtask_uvm_report_error__127__message;
    std::string __Vtask_uvm_report_error__127__filename;
    std::string __Vtask_uvm_report_error__127__context_name;
    std::string __Vfunc_uvm_report_enabled__132__id;
    std::string __Vtask_uvm_report_error__138__id;
    std::string __Vtask_uvm_report_error__138__message;
    std::string __Vtask_uvm_report_error__138__filename;
    std::string __Vtask_uvm_report_error__138__context_name;
    std::string __Vfunc_uvm_report_enabled__147__id;
    std::string __Vtask_uvm_report_warning__152__id;
    std::string __Vtask_uvm_report_warning__152__message;
    std::string __Vtask_uvm_report_warning__152__filename;
    std::string __Vtask_uvm_report_warning__152__context_name;
    std::string __Vfunc_uvm_report_enabled__180__id;
    std::string __Vtask_uvm_report_warning__185__id;
    std::string __Vtask_uvm_report_warning__185__message;
    std::string __Vtask_uvm_report_warning__185__filename;
    std::string __Vtask_uvm_report_warning__185__context_name;
    std::string __Vfunc_uvm_report_enabled__217__id;
    std::string __Vtask_uvm_report_warning__222__id;
    std::string __Vtask_uvm_report_warning__222__message;
    std::string __Vtask_uvm_report_warning__222__filename;
    std::string __Vtask_uvm_report_warning__222__context_name;
    std::string __Vfunc_uvm_report_enabled__226__id;
    std::string __Vtask_uvm_report_warning__231__id;
    std::string __Vtask_uvm_report_warning__231__message;
    std::string __Vtask_uvm_report_warning__231__filename;
    std::string __Vtask_uvm_report_warning__231__context_name;
    std::string __Vfunc_uvm_report_enabled__235__id;
    std::string __Vtask_uvm_report_warning__240__id;
    std::string __Vtask_uvm_report_warning__240__message;
    std::string __Vtask_uvm_report_warning__240__filename;
    std::string __Vtask_uvm_report_warning__240__context_name;
    std::string __Vfunc_uvm_report_enabled__245__id;
    std::string __Vtask_uvm_report_warning__251__id;
    std::string __Vtask_uvm_report_warning__251__message;
    std::string __Vtask_uvm_report_warning__251__filename;
    std::string __Vtask_uvm_report_warning__251__context_name;
    std::string __Vfunc_uvm_report_enabled__265__id;
    std::string __Vtask_uvm_report_warning__270__id;
    std::string __Vtask_uvm_report_warning__270__message;
    std::string __Vtask_uvm_report_warning__270__filename;
    std::string __Vtask_uvm_report_warning__270__context_name;
    std::string __Vfunc_uvm_report_enabled__274__id;
    std::string __Vtask_uvm_report_warning__279__id;
    std::string __Vtask_uvm_report_warning__279__message;
    std::string __Vtask_uvm_report_warning__279__filename;
    std::string __Vtask_uvm_report_warning__279__context_name;
    std::string __Vfunc_uvm_report_enabled__285__id;
    std::string __Vtask_uvm_report_error__290__id;
    std::string __Vtask_uvm_report_error__290__message;
    std::string __Vtask_uvm_report_error__290__filename;
    std::string __Vtask_uvm_report_error__290__context_name;
    std::string __Vfunc_uvm_report_enabled__311__id;
    std::string __Vtask_uvm_report_fatal__315__id;
    std::string __Vtask_uvm_report_fatal__315__message;
    std::string __Vtask_uvm_report_fatal__315__filename;
    std::string __Vtask_uvm_report_fatal__315__context_name;
    std::string __Vfunc_uvm_report_enabled__319__id;
    std::string __Vtask_uvm_report_warning__323__id;
    std::string __Vtask_uvm_report_warning__323__message;
    std::string __Vtask_uvm_report_warning__323__filename;
    std::string __Vtask_uvm_report_warning__323__context_name;
    std::string __Vfunc_uvm_report_enabled__327__id;
    std::string __Vtask_uvm_report_warning__331__id;
    std::string __Vtask_uvm_report_warning__331__message;
    std::string __Vtask_uvm_report_warning__331__filename;
    std::string __Vtask_uvm_report_warning__331__context_name;
    std::string __Vfunc_uvm_report_enabled__335__id;
    std::string __Vtask_uvm_report_warning__339__id;
    std::string __Vtask_uvm_report_warning__339__message;
    std::string __Vtask_uvm_report_warning__339__filename;
    std::string __Vtask_uvm_report_warning__339__context_name;
    std::string __Vfunc_uvm_report_enabled__343__id;
    std::string __Vtask_uvm_report_warning__347__id;
    std::string __Vtask_uvm_report_warning__347__message;
    std::string __Vtask_uvm_report_warning__347__filename;
    std::string __Vtask_uvm_report_warning__347__context_name;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> __PVT__m_parent;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_field"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field(*this); }
    void __VnoInFunc_Xcheck_accessX(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    virtual void __VnoInFunc_XpredictX(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ cur_val, QData/*63:0*/ wr_val, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &XpredictX__Vfuncrtn);
    virtual void __VnoInFunc_XupdateX(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ &XupdateX__Vfuncrtn);
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos, std::string access, CData/*0:0*/ __SYM__volatile, QData/*63:0*/ reset, CData/*0:0*/ has_reset, CData/*0:0*/ is_rand, CData/*0:0*/ individually_accessible);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get(Vuvm_pkg__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    void __VnoInFunc_get_compare(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_compare__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_lsb_pos(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos__Vfuncrtn);
    virtual void __VnoInFunc_get_mirrored_value(Vuvm_pkg__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_register(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn);
    virtual void __VnoInFunc_get_reset(Vuvm_pkg__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_has_reset(Vuvm_pkg__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn);
    void __VnoInFunc_is_indv_accessible(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> local_map, CData/*0:0*/ &is_indv_accessible__Vfuncrtn);
    virtual void __VnoInFunc_is_known_access(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_known_access__Vfuncrtn);
    virtual void __VnoInFunc_is_volatile(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_volatile__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_post_randomize(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_read(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_pre_randomize(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_read(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_predict(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_reset(Vuvm_pkg__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_access(Vuvm_pkg__Syms* __restrict vlSymsp, std::string mode, std::string &set_access__Vfuncrtn);
    void __VnoInFunc_set_compare(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ check);
    virtual void __VnoInFunc_set_reset(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind);
    virtual void __VnoInFunc_set_volatility(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ __SYM__volatile);
    void __VnoInFunc_uvm_reg_field_valid_setup_constraint(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_write(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field();
};


#endif  // guard
