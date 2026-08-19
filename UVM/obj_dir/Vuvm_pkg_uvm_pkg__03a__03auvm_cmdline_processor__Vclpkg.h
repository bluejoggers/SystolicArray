// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_CMDLINE_PROCESSOR__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_CMDLINE_PROCESSOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor;
class Vuvm_pkg_uvm_pkg__03a__03auvm_report_object;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_inst(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor> &get_inst__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor : public Vuvm_pkg_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__m_argv;
    VlQueue<std::string> __PVT__m_plus_argv;
    VlQueue<std::string> __PVT__m_uvm_argv;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_cmdline_processor"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_arg_matches(Vuvm_pkg__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &args, IData/*31:0*/ &get_arg_matches__Vfuncrtn);
    void __VnoInFunc_get_arg_value(Vuvm_pkg__Syms* __restrict vlSymsp, std::string match, std::string &value, IData/*31:0*/ &get_arg_value__Vfuncrtn);
    void __VnoInFunc_get_arg_values(Vuvm_pkg__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &values, IData/*31:0*/ &get_arg_values__Vfuncrtn);
    void __VnoInFunc_get_args(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_get_plusargs(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_get_tool_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_tool_name__Vfuncrtn);
    void __VnoInFunc_get_tool_version(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_tool_version__Vfuncrtn);
    void __VnoInFunc_get_uvm_args(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_m_convert_verb(Vuvm_pkg__Syms* __restrict vlSymsp, std::string verb_str, IData/*31:0*/ &verb_enum, CData/*0:0*/ &m_convert_verb__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor();
};


#endif  // guard
