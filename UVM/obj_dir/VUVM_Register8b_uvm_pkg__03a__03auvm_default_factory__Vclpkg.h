// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_DEFAULT_FACTORY__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_DEFAULT_FACTORY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_factory;
class VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override;
class VUVM_Register8b_uvm_pkg__03a__03auvm_factory_queue_class;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_default_factory__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_debug_pass;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_default_factory__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_default_factory__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_default_factory__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_factory__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_default_factory : public VUVM_Register8b_uvm_pkg__03a__03auvm_factory {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper>, CData/*0:0*/> __PVT__m_types;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__m_lookup_strs;
    std::string __Vtask_uvm_report_fatal__1__id;
    std::string __Vtask_uvm_report_fatal__1__message;
    std::string __Vtask_uvm_report_fatal__1__filename;
    std::string __Vtask_uvm_report_fatal__1__context_name;
    std::string __Vtask_uvm_report_warning__9__id;
    std::string __Vtask_uvm_report_warning__9__message;
    std::string __Vtask_uvm_report_warning__9__filename;
    std::string __Vtask_uvm_report_warning__9__context_name;
    std::string __Vtask_uvm_report_warning__17__id;
    std::string __Vtask_uvm_report_warning__17__message;
    std::string __Vtask_uvm_report_warning__17__filename;
    std::string __Vtask_uvm_report_warning__17__context_name;
    std::string __Vfunc_uvm_is_match__27__expr;
    std::string __Vfunc_uvm_is_match__27__str;
    std::string __Vfunc_uvm_glob_to_re__28__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__28__glob;
    std::string __Vfunc_uvm_re_match__29__re;
    std::string __Vfunc_uvm_re_match__29__str;
    std::string __Vtask_uvm_report_warning__32__id;
    std::string __Vtask_uvm_report_warning__32__message;
    std::string __Vtask_uvm_report_warning__32__filename;
    std::string __Vtask_uvm_report_warning__32__context_name;
    std::string __Vtask_uvm_report_warning__37__id;
    std::string __Vtask_uvm_report_warning__37__message;
    std::string __Vtask_uvm_report_warning__37__filename;
    std::string __Vtask_uvm_report_warning__37__context_name;
    std::string __Vtask_uvm_report_info__45__id;
    std::string __Vtask_uvm_report_info__45__message;
    std::string __Vtask_uvm_report_info__45__filename;
    std::string __Vtask_uvm_report_info__45__context_name;
    std::string __Vtask_uvm_report_info__50__id;
    std::string __Vtask_uvm_report_info__50__message;
    std::string __Vtask_uvm_report_info__50__filename;
    std::string __Vtask_uvm_report_info__50__context_name;
    std::string __Vtask_uvm_report_error__58__id;
    std::string __Vtask_uvm_report_error__58__message;
    std::string __Vtask_uvm_report_error__58__filename;
    std::string __Vtask_uvm_report_error__58__context_name;
    std::string __Vtask_uvm_report_warning__62__id;
    std::string __Vtask_uvm_report_warning__62__message;
    std::string __Vtask_uvm_report_warning__62__filename;
    std::string __Vtask_uvm_report_warning__62__context_name;
    std::string __Vtask_uvm_report_info__66__id;
    std::string __Vtask_uvm_report_info__66__message;
    std::string __Vtask_uvm_report_info__66__filename;
    std::string __Vtask_uvm_report_info__66__context_name;
    std::string __Vtask_uvm_report_info__70__id;
    std::string __Vtask_uvm_report_info__70__message;
    std::string __Vtask_uvm_report_info__70__filename;
    std::string __Vtask_uvm_report_info__70__context_name;
    std::string __Vtask_uvm_report_info__78__id;
    std::string __Vtask_uvm_report_info__78__message;
    std::string __Vtask_uvm_report_info__78__filename;
    std::string __Vtask_uvm_report_info__78__context_name;
    std::string __Vtask_uvm_report_error__88__id;
    std::string __Vtask_uvm_report_error__88__message;
    std::string __Vtask_uvm_report_error__88__filename;
    std::string __Vtask_uvm_report_error__88__context_name;
    std::string __Vfunc_uvm_is_match__96__expr;
    std::string __Vfunc_uvm_is_match__96__str;
    std::string __Vfunc_uvm_glob_to_re__97__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__97__glob;
    std::string __Vfunc_uvm_re_match__98__re;
    std::string __Vfunc_uvm_re_match__98__str;
    std::string __Vtask_uvm_report_warning__102__id;
    std::string __Vtask_uvm_report_warning__102__message;
    std::string __Vtask_uvm_report_warning__102__filename;
    std::string __Vtask_uvm_report_warning__102__context_name;
    std::string __Vtask_uvm_report_warning__110__id;
    std::string __Vtask_uvm_report_warning__110__message;
    std::string __Vtask_uvm_report_warning__110__filename;
    std::string __Vtask_uvm_report_warning__110__context_name;
    std::string __Vtask_uvm_report_warning__117__id;
    std::string __Vtask_uvm_report_warning__117__message;
    std::string __Vtask_uvm_report_warning__117__filename;
    std::string __Vtask_uvm_report_warning__117__context_name;
    std::string __Vfunc_uvm_is_match__121__expr;
    std::string __Vfunc_uvm_is_match__121__str;
    std::string __Vfunc_uvm_glob_to_re__122__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__122__glob;
    std::string __Vfunc_uvm_re_match__123__re;
    std::string __Vfunc_uvm_re_match__123__str;
    std::string __Vfunc_uvm_is_match__124__expr;
    std::string __Vfunc_uvm_is_match__124__str;
    std::string __Vfunc_uvm_glob_to_re__125__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__125__glob;
    std::string __Vfunc_uvm_re_match__126__re;
    std::string __Vfunc_uvm_re_match__126__str;
    std::string __Vfunc_uvm_is_match__130__expr;
    std::string __Vfunc_uvm_is_match__130__str;
    std::string __Vfunc_uvm_glob_to_re__131__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__131__glob;
    std::string __Vfunc_uvm_re_match__132__re;
    std::string __Vfunc_uvm_re_match__132__str;
    std::string __Vtask_uvm_report_error__135__id;
    std::string __Vtask_uvm_report_error__135__message;
    std::string __Vtask_uvm_report_error__135__filename;
    std::string __Vtask_uvm_report_error__135__context_name;
    std::string __Vfunc_uvm_is_match__141__expr;
    std::string __Vfunc_uvm_is_match__141__str;
    std::string __Vfunc_uvm_glob_to_re__142__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__142__glob;
    std::string __Vfunc_uvm_re_match__143__re;
    std::string __Vfunc_uvm_re_match__143__str;
    std::string __Vfunc_uvm_is_match__150__expr;
    std::string __Vfunc_uvm_is_match__150__str;
    std::string __Vfunc_uvm_glob_to_re__151__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__151__glob;
    std::string __Vfunc_uvm_re_match__152__re;
    std::string __Vfunc_uvm_re_match__152__str;
    std::string __Vfunc_uvm_report_enabled__155__id;
    std::string __Vfunc_m_uvm_string_queue_join__159__Vfuncout;
    std::string __Vtask_uvm_report_info__160__id;
    std::string __Vtask_uvm_report_info__160__message;
    std::string __Vtask_uvm_report_info__160__filename;
    std::string __Vtask_uvm_report_info__160__context_name;
    std::string __Vtask_uvm_report_warning__166__id;
    std::string __Vtask_uvm_report_warning__166__message;
    std::string __Vtask_uvm_report_warning__166__filename;
    std::string __Vtask_uvm_report_warning__166__context_name;
    std::string __Vfunc_uvm_report_enabled__176__id;
    std::string __Vfunc_m_uvm_string_queue_join__180__Vfuncout;
    std::string __Vtask_uvm_report_info__181__id;
    std::string __Vtask_uvm_report_info__181__message;
    std::string __Vtask_uvm_report_info__181__filename;
    std::string __Vtask_uvm_report_info__181__context_name;
    VlAssocArray<std::string, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper>> __PVT__m_type_names;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_type_overrides;
    VlAssocArray<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper>, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_factory_queue_class>> __PVT__m_inst_override_queues;
    VlAssocArray<std::string, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_factory_queue_class>> __PVT__m_inst_override_name_queues;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_wildcard_inst_overrides;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_override_info;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_default_factory"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_default_factory(*this); }
    void __VnoInFunc_check_inst_override_exists(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path, CData/*0:0*/ &check_inst_override_exists__Vfuncrtn);
    virtual void __VnoInFunc_create_component_by_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_component_by_type(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_type(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn);
    virtual void __VnoInFunc_debug_create_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_find_override_by_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn);
    virtual void __VnoInFunc_find_override_by_type(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn);
    virtual void __VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn);
    void __VnoInFunc_m_debug_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    void __VnoInFunc_m_debug_display(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> result, std::string full_inst_path);
    void __VnoInFunc_m_has_wildcard(VUVM_Register8b__Syms* __restrict vlSymsp, std::string nm, CData/*0:0*/ &m_has_wildcard__Vfuncrtn);
    virtual void __VnoInFunc_print(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ all_types);
    virtual void __VnoInFunc_register(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> obj);
    virtual void __VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path);
    virtual void __VnoInFunc_set_inst_override_by_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path);
    virtual void __VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    virtual void __VnoInFunc_set_type_override_by_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_default_factory() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_default_factory();
};


#endif  // guard
