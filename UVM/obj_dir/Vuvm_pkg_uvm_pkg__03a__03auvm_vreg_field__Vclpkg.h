// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_VREG_FIELD__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_VREG_FIELD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz23_TBz24;
class Vuvm_pkg_uvm_pkg__03a__03auvm_comparer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_mem;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi10;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper;
class Vuvm_pkg_uvm_pkg__03a__03auvm_packer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_backdoor;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_block;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_status_container;
class Vuvm_pkg_uvm_pkg__03a__03auvm_vreg;
class Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field;
class Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field_cbs;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_vreg_field_cbs;
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi10> &get_type__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field : public Vuvm_pkg_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__read_in_progress;
    CData/*0:0*/ __PVT__write_in_progress;
    IData/*31:0*/ __PVT__lsb;
    IData/*31:0*/ __PVT__size;
    IData/*31:0*/ __PVT__lineno;
    std::string __PVT__fname;
    std::string __Vfunc_uvm_report_enabled__6__id;
    std::string __Vtask_uvm_report_error__11__id;
    std::string __Vtask_uvm_report_error__11__message;
    std::string __Vtask_uvm_report_error__11__filename;
    std::string __Vtask_uvm_report_error__11__context_name;
    std::string __Vfunc_uvm_report_enabled__15__id;
    std::string __Vtask_uvm_report_error__20__id;
    std::string __Vtask_uvm_report_error__20__message;
    std::string __Vtask_uvm_report_error__20__filename;
    std::string __Vtask_uvm_report_error__20__context_name;
    std::string __Vfunc_uvm_report_enabled__28__id;
    std::string __Vtask_uvm_report_error__33__id;
    std::string __Vtask_uvm_report_error__33__message;
    std::string __Vtask_uvm_report_error__33__filename;
    std::string __Vtask_uvm_report_error__33__context_name;
    std::string __Vfunc_uvm_report_enabled__40__id;
    std::string __Vtask_uvm_report_error__45__id;
    std::string __Vtask_uvm_report_error__45__message;
    std::string __Vtask_uvm_report_error__45__filename;
    std::string __Vtask_uvm_report_error__45__context_name;
    std::string __Vfunc_uvm_report_enabled__52__id;
    std::string __Vtask_uvm_report_warning__58__id;
    std::string __Vtask_uvm_report_warning__58__message;
    std::string __Vtask_uvm_report_warning__58__filename;
    std::string __Vtask_uvm_report_warning__58__context_name;
    std::string __Vfunc_uvm_report_enabled__72__id;
    std::string __Vtask_uvm_report_error__78__id;
    std::string __Vtask_uvm_report_error__78__message;
    std::string __Vtask_uvm_report_error__78__filename;
    std::string __Vtask_uvm_report_error__78__context_name;
    std::string __Vfunc_uvm_report_enabled__85__id;
    std::string __Vtask_uvm_report_error__91__id;
    std::string __Vtask_uvm_report_error__91__message;
    std::string __Vtask_uvm_report_error__91__filename;
    std::string __Vtask_uvm_report_error__91__context_name;
    std::string __Vfunc_uvm_report_enabled__102__id;
    std::string __Vtask_uvm_report_info__107__id;
    std::string __Vtask_uvm_report_info__107__message;
    std::string __Vtask_uvm_report_info__107__filename;
    std::string __Vtask_uvm_report_info__107__context_name;
    std::string __Vfunc_uvm_report_enabled__113__id;
    std::string __Vtask_uvm_report_error__118__id;
    std::string __Vtask_uvm_report_error__118__message;
    std::string __Vtask_uvm_report_error__118__filename;
    std::string __Vtask_uvm_report_error__118__context_name;
    std::string __Vfunc_uvm_report_enabled__140__id;
    std::string __Vtask_uvm_report_info__145__id;
    std::string __Vtask_uvm_report_info__145__message;
    std::string __Vtask_uvm_report_info__145__filename;
    std::string __Vtask_uvm_report_info__145__context_name;
    std::string __Vfunc_uvm_report_enabled__150__id;
    std::string __Vtask_uvm_report_error__155__id;
    std::string __Vtask_uvm_report_error__155__message;
    std::string __Vtask_uvm_report_error__155__filename;
    std::string __Vtask_uvm_report_error__155__context_name;
    std::string __Vfunc_uvm_report_enabled__160__id;
    std::string __Vtask_uvm_report_warning__166__id;
    std::string __Vtask_uvm_report_warning__166__message;
    std::string __Vtask_uvm_report_warning__166__filename;
    std::string __Vtask_uvm_report_warning__166__context_name;
    std::string __Vfunc_uvm_report_enabled__175__id;
    std::string __Vtask_uvm_report_error__181__id;
    std::string __Vtask_uvm_report_error__181__message;
    std::string __Vtask_uvm_report_error__181__filename;
    std::string __Vtask_uvm_report_error__181__context_name;
    std::string __Vfunc_uvm_report_enabled__188__id;
    std::string __Vtask_uvm_report_error__194__id;
    std::string __Vtask_uvm_report_error__194__message;
    std::string __Vtask_uvm_report_error__194__filename;
    std::string __Vtask_uvm_report_error__194__context_name;
    std::string __Vfunc_uvm_report_enabled__201__id;
    std::string __Vtask_uvm_report_info__206__id;
    std::string __Vtask_uvm_report_info__206__message;
    std::string __Vtask_uvm_report_info__206__filename;
    std::string __Vtask_uvm_report_info__206__context_name;
    std::string __Vfunc_uvm_report_enabled__211__id;
    std::string __Vtask_uvm_report_error__216__id;
    std::string __Vtask_uvm_report_error__216__message;
    std::string __Vtask_uvm_report_error__216__filename;
    std::string __Vtask_uvm_report_error__216__context_name;
    std::string __Vfunc_uvm_report_enabled__228__id;
    std::string __Vtask_uvm_report_info__233__id;
    std::string __Vtask_uvm_report_info__233__message;
    std::string __Vtask_uvm_report_info__233__filename;
    std::string __Vtask_uvm_report_info__233__context_name;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg> __PVT__parent;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_vreg_field"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_access(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_lsb_pos_in_register(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos_in_register__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_register(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg> &get_register__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ &path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> &map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_post_write(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_pre_read(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_pre_write(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_field();
};


#endif  // guard
