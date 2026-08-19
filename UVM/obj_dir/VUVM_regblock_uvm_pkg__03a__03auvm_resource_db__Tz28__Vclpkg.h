// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ28__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ28__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz28;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_info__11__id;
    std::string __Vtask_uvm_report_info__11__message;
    std::string __Vtask_uvm_report_info__11__filename;
    std::string __Vtask_uvm_report_info__11__context_name;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz28> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz28> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(VUVM_regblock__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz28> rsrc);
    void __VnoInFunc_read_by_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ &val, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, CData/*0:0*/ &val, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ val, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, CData/*0:0*/ val, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz28> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ val, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ val, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ val, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ val, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(VUVM_regblock__Syms* __restrict vlSymsp, std::string scope, CData/*0:0*/ val, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_resource_db__Tz28 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_db__Tz28"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_resource_db__Tz28(*this); }
    VUVM_regblock_uvm_pkg__03a__03auvm_resource_db__Tz28() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp) {}
    ~VUVM_regblock_uvm_pkg__03a__03auvm_resource_db__Tz28() {}
};


#endif  // guard
