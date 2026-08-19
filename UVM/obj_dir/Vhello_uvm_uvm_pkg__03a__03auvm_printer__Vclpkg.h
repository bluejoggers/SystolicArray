// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vhello_uvm_uvm_pkg.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack;
class Vhello_uvm_uvm_pkg__03a__03auvm_status_container;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_printer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_printer__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_printer__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_printer : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<CData/*0:0*/> __PVT__m_array_stack;
    VlQueue<Vhello_uvm_uvm_printer_row_info__struct__0> __PVT__m_rows;
    std::string __PVT__m_string;
    std::string __Vfunc_uvm_report_enabled__3__id;
    std::string __Vtask_uvm_report_error__7__id;
    std::string __Vtask_uvm_report_error__7__message;
    std::string __Vtask_uvm_report_error__7__filename;
    std::string __Vtask_uvm_report_error__7__context_name;
    std::string __Vtask_sprint__38__Vfuncout;
    std::string __Vfunc_uvm_leaf_scope__43__full_name;
    std::string __Vfunc_uvm_bitstream_to_string__51__radix_str;
    std::string __Vfunc_uvm_integral_to_string__57__radix_str;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs> __PVT__knobs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack> __PVT__m_scope;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_printer"; }
    virtual void __VnoInFunc_adjust_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string id, CData/*7:0*/ scope_separator, std::string &adjust_name__Vfuncrtn);
    virtual void __VnoInFunc_emit(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn);
    virtual void __VnoInFunc_format_footer(Vhello_uvm__Syms* __restrict vlSymsp, std::string &format_footer__Vfuncrtn);
    virtual void __VnoInFunc_format_header(Vhello_uvm__Syms* __restrict vlSymsp, std::string &format_header__Vfuncrtn);
    virtual void __VnoInFunc_format_row(Vhello_uvm__Syms* __restrict vlSymsp, Vhello_uvm_uvm_printer_row_info__struct__0 row, std::string &format_row__Vfuncrtn);
    void __VnoInFunc_index_string(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string name, std::string &index_string__Vfuncrtn);
    void __VnoInFunc_istop(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &istop__Vfuncrtn);
    virtual void __VnoInFunc_print_array_footer(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ size);
    virtual void __VnoInFunc_print_array_header(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, std::string arraytype, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_array_range(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ min, IData/*31:0*/ max);
    virtual void __VnoInFunc_print_field(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_field_int(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_generic(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, std::string type_name, IData/*31:0*/ size, std::string value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_int(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_object(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_object_header(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_real(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, double value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_string(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, std::string value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_time(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, CData/*7:0*/ scope_separator);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_printer() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_printer();
};


#endif  // guard
