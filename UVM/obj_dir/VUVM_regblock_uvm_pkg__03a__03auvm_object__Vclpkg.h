// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_OBJECT__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_OBJECT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_comparer;
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_factory;
class VUVM_regblock_uvm_pkg__03a__03auvm_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_packer;
class VUVM_regblock_uvm_pkg__03a__03auvm_printer;
class VUVM_regblock_uvm_pkg__03a__03auvm_printer_knobs;
class VUVM_regblock_uvm_pkg__03a__03auvm_recorder;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;
class VUVM_regblock_uvm_pkg__03a__03auvm_scope_stack;
class VUVM_regblock_uvm_pkg__03a__03auvm_seed_map;
class VUVM_regblock_uvm_pkg__03a__03auvm_status_container;
class VUVM_regblock_uvm_pkg__03a__03auvm_void;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_object__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__use_uvm_seeding;
    IData/*31:0*/ __PVT__m_inst_count;
    IData/*31:0*/ __PVT__copy__Vstatic__depth;
    std::string __Vtask_uvm_report_error__1__id;
    std::string __Vtask_uvm_report_error__1__message;
    std::string __Vtask_uvm_report_error__1__filename;
    std::string __Vtask_uvm_report_error__1__context_name;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_status_container> __PVT_____05Fm_uvm_status_container;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object>, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object>> __PVT__uvm_global_copy_map;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_object__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_object__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_object__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_inst_count(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_count__Vfuncrtn);
    void __VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_type__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_object : public VUVM_regblock_uvm_pkg__03a__03auvm_void {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_inst_id;
    std::string __PVT__m_leaf_name;
    std::string __Vfunc_uvm_create_random_seed__3__type_id;
    std::string __Vfunc_uvm_create_random_seed__3__inst_id;
    std::string __Vfunc_uvm_create_random_seed__3____VlefCall_1__uvm_instance_scope;
    std::string __Vfunc_uvm_instance_scope__5__Vfuncout;
    std::string __Vtask_uvm_report_error__6__id;
    std::string __Vtask_uvm_report_error__6__message;
    std::string __Vtask_uvm_report_error__6__filename;
    std::string __Vtask_uvm_report_error__6__context_name;
    std::string __Vfunc_uvm_oneway_hash__10__string_in;
    std::string __Vfunc_uvm_report_enabled__18__id;
    std::string __Vtask_uvm_report_error__22__id;
    std::string __Vtask_uvm_report_error__22__message;
    std::string __Vtask_uvm_report_error__22__filename;
    std::string __Vtask_uvm_report_error__22__context_name;
    std::string __Vtask_uvm_report_error__34__id;
    std::string __Vtask_uvm_report_error__34__message;
    std::string __Vtask_uvm_report_error__34__filename;
    std::string __Vtask_uvm_report_error__34__context_name;
    std::string __Vtask_uvm_report_error__41__id;
    std::string __Vtask_uvm_report_error__41__message;
    std::string __Vtask_uvm_report_error__41__filename;
    std::string __Vtask_uvm_report_error__41__context_name;
    std::string __Vtask_uvm_report_error__47__id;
    std::string __Vtask_uvm_report_error__47__message;
    std::string __Vtask_uvm_report_error__47__filename;
    std::string __Vtask_uvm_report_error__47__context_name;
    std::string __Vtask_uvm_report_warning__54__id;
    std::string __Vtask_uvm_report_warning__54__message;
    std::string __Vtask_uvm_report_warning__54__filename;
    std::string __Vtask_uvm_report_warning__54__context_name;
    std::string __Vtask_uvm_report_warning__59__id;
    std::string __Vtask_uvm_report_warning__59__message;
    std::string __Vtask_uvm_report_warning__59__filename;
    std::string __Vtask_uvm_report_warning__59__context_name;
    std::string __Vtask_uvm_report_info__75__id;
    std::string __Vtask_uvm_report_info__75__message;
    std::string __Vtask_uvm_report_info__75__filename;
    std::string __Vtask_uvm_report_info__75__context_name;
    std::string __Vtask_uvm_report_warning__115__id;
    std::string __Vtask_uvm_report_warning__115__message;
    std::string __Vtask_uvm_report_warning__115__filename;
    std::string __Vtask_uvm_report_warning__115__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_object"; }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_compare(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &compare__Vfuncrtn);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_copy(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_do_unpack(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_inst_id(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_id__Vfuncrtn);
    virtual void __VnoInFunc_get_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_get_report_object(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_object> &m_get_report_object__Vfuncrtn);
    void __VnoInFunc_m_pack(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> &packer);
    void __VnoInFunc_m_unpack_post(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_m_unpack_pre(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> &packer);
    void __VnoInFunc_pack(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack__Vfuncrtn);
    void __VnoInFunc_pack_bytes(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_bytes__Vfuncrtn);
    void __VnoInFunc_pack_ints(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_ints__Vfuncrtn);
    void __VnoInFunc_print(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_reseed(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set_int_local(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ value, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_set_name(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name);
    virtual void __VnoInFunc_set_object_local(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string field_name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> value, CData/*0:0*/ clone, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_set_string_local(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string field_name, std::string value, CData/*0:0*/ recurse);
    void __VnoInFunc_sprint(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer, std::string &sprint__Vfuncrtn);
    void __VnoInFunc_unpack(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack__Vfuncrtn);
    void __VnoInFunc_unpack_bytes(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_bytes__Vfuncrtn);
    void __VnoInFunc_unpack_ints(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_ints__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_object() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_object();
};


#endif  // guard
