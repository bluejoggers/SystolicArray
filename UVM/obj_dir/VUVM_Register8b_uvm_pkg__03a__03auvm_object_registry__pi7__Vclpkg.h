// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_OBJECT_REGISTRY__PI7__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_OBJECT_REGISTRY__PI7__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_factory;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_database;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    std::string __Vtask_uvm_report_fatal__12__id;
    std::string __Vtask_uvm_report_fatal__12__message;
    std::string __Vtask_uvm_report_fatal__12__filename;
    std::string __Vtask_uvm_report_fatal__12__context_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7> __PVT__me;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_create(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_text_tr_database> &create__Vfuncrtn);
    void __VnoInFunc_get(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7> &get__Vfuncrtn);
    void __VnoInFunc_set_inst_override(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent);
    void __VnoInFunc_set_type_override(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7 : public VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_object_registry__pi7"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7(*this); }
    virtual void __VnoInFunc_create_object(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi7();
};


#endif  // guard
