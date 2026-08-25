// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ110__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ110__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_object;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_block;
class VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz110;
class VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_resource_db__Tz110__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_info__11__id;
    std::string __Vtask_uvm_report_info__11__message;
    std::string __Vtask_uvm_report_info__11__filename;
    std::string __Vtask_uvm_report_info__11__context_name;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_resource_db__Tz110__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_resource_db__Tz110__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_resource_db__Tz110__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_dump(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz110> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz110> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz110> rsrc);
    void __VnoInFunc_read_by_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> &val, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> &val, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> val, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> val, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz110> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> val, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> val, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> val, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> val, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(VUVM_Activator__Syms* __restrict vlSymsp, std::string scope, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> val, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_resource_db__Tz110 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_db__Tz110"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_resource_db__Tz110(*this); }
    VUVM_Activator_uvm_pkg__03a__03auvm_resource_db__Tz110() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp) {}
    ~VUVM_Activator_uvm_pkg__03a__03auvm_resource_db__Tz110() {}
};


#endif  // guard
