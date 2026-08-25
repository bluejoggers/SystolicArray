// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_VREG_FIELD__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_VREG_FIELD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz95_TBz96;
class VUVM_Activator_uvm_pkg__03a__03auvm_comparer;
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_mem;
class VUVM_Activator_uvm_pkg__03a__03auvm_object;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi30;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Activator_uvm_pkg__03a__03auvm_packer;
class VUVM_Activator_uvm_pkg__03a__03auvm_printer;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_block;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_map;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_Activator_uvm_pkg__03a__03auvm_status_container;
class VUVM_Activator_uvm_pkg__03a__03auvm_vreg;
class VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field;
class VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field_cbs;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_vreg_field_cbs;
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi30> &get_type__Vfuncrtn);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field : public VUVM_Activator_uvm_pkg__03a__03auvm_object {
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
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> __PVT__parent;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_vreg_field"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_access(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_lsb_pos_in_register(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos_in_register__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_register(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> &get_register__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ &path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> &map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_post_write(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_pre_read(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_pre_write(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field();
};


#endif  // guard
