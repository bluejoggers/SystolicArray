// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_MEM_REGION__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_MEM_REGION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_mem;
class Vhello_uvm_uvm_pkg__03a__03auvm_mem_mam;
class Vhello_uvm_uvm_pkg__03a__03auvm_mem_region;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_map;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_vreg;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_mem_region__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_mem_region__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_mem_region__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_mem_region__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_mem_region : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__len;
    IData/*31:0*/ __PVT__n_bytes;
    IData/*31:0*/ __PVT__lineno;
    QData/*63:0*/ __PVT__Xstart_offsetX;
    QData/*63:0*/ __PVT__Xend_offsetX;
    std::string __PVT__fname;
    std::string __Vfunc_uvm_report_enabled__3__id;
    std::string __Vtask_uvm_report_error__7__id;
    std::string __Vtask_uvm_report_error__7__message;
    std::string __Vtask_uvm_report_error__7__filename;
    std::string __Vtask_uvm_report_error__7__context_name;
    std::string __Vfunc_uvm_report_enabled__11__id;
    std::string __Vtask_uvm_report_error__15__id;
    std::string __Vtask_uvm_report_error__15__message;
    std::string __Vtask_uvm_report_error__15__filename;
    std::string __Vtask_uvm_report_error__15__context_name;
    std::string __Vfunc_uvm_report_enabled__22__id;
    std::string __Vtask_uvm_report_error__26__id;
    std::string __Vtask_uvm_report_error__26__message;
    std::string __Vtask_uvm_report_error__26__filename;
    std::string __Vtask_uvm_report_error__26__context_name;
    std::string __Vfunc_uvm_report_enabled__30__id;
    std::string __Vtask_uvm_report_error__34__id;
    std::string __Vtask_uvm_report_error__34__message;
    std::string __Vtask_uvm_report_error__34__filename;
    std::string __Vtask_uvm_report_error__34__context_name;
    std::string __Vfunc_uvm_report_enabled__41__id;
    std::string __Vtask_uvm_report_error__45__id;
    std::string __Vtask_uvm_report_error__45__message;
    std::string __Vtask_uvm_report_error__45__filename;
    std::string __Vtask_uvm_report_error__45__context_name;
    std::string __Vfunc_uvm_report_enabled__49__id;
    std::string __Vtask_uvm_report_error__53__id;
    std::string __Vtask_uvm_report_error__53__message;
    std::string __Vtask_uvm_report_error__53__filename;
    std::string __Vtask_uvm_report_error__53__context_name;
    std::string __Vfunc_uvm_report_enabled__60__id;
    std::string __Vtask_uvm_report_error__64__id;
    std::string __Vtask_uvm_report_error__64__message;
    std::string __Vtask_uvm_report_error__64__filename;
    std::string __Vtask_uvm_report_error__64__context_name;
    std::string __Vfunc_uvm_report_enabled__68__id;
    std::string __Vtask_uvm_report_error__72__id;
    std::string __Vtask_uvm_report_error__72__message;
    std::string __Vtask_uvm_report_error__72__filename;
    std::string __Vtask_uvm_report_error__72__context_name;
    std::string __Vfunc_uvm_report_enabled__79__id;
    std::string __Vtask_uvm_report_error__83__id;
    std::string __Vtask_uvm_report_error__83__message;
    std::string __Vtask_uvm_report_error__83__filename;
    std::string __Vtask_uvm_report_error__83__context_name;
    std::string __Vfunc_uvm_report_enabled__87__id;
    std::string __Vtask_uvm_report_error__91__id;
    std::string __Vtask_uvm_report_error__91__message;
    std::string __Vtask_uvm_report_error__91__filename;
    std::string __Vtask_uvm_report_error__91__context_name;
    std::string __Vfunc_uvm_report_enabled__98__id;
    std::string __Vtask_uvm_report_error__102__id;
    std::string __Vtask_uvm_report_error__102__message;
    std::string __Vtask_uvm_report_error__102__filename;
    std::string __Vtask_uvm_report_error__102__context_name;
    std::string __Vfunc_uvm_report_enabled__106__id;
    std::string __Vtask_uvm_report_error__110__id;
    std::string __Vtask_uvm_report_error__110__message;
    std::string __Vtask_uvm_report_error__110__filename;
    std::string __Vtask_uvm_report_error__110__context_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem_mam> __PVT__parent;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg> __PVT__XvregX;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem_region"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_mem_region(*this); }
    VlCoroutine __VnoInFunc_burst_read(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    VlCoroutine __VnoInFunc_burst_write(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_convert2string(Vhello_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_get_end_offset(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_offset__Vfuncrtn);
    void __VnoInFunc_get_len(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_len__Vfuncrtn);
    void __VnoInFunc_get_memory(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    void __VnoInFunc_get_n_bytes(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    void __VnoInFunc_get_start_offset(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &get_start_offset__Vfuncrtn);
    void __VnoInFunc_get_virtual_registers(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg> &get_virtual_registers__Vfuncrtn);
    void __VnoInFunc_peek(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_poke(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    VlCoroutine __VnoInFunc_read(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_release_region(Vhello_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_write(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_mem_region() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, QData/*63:0*/ end_offset, IData/*31:0*/ len, IData/*31:0*/ n_bytes, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem_mam> parent);
    ~Vhello_uvm_uvm_pkg__03a__03auvm_mem_region() {}
};


#endif  // guard
