// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Register8b_uvm_pkg.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer_knobs;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack;
class VUVM_Register8b_uvm_pkg__03a__03auvm_status_container;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_printer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_printer__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_printer__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_printer : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<CData/*0:0*/> __PVT__m_array_stack;
    VlQueue<VUVM_Register8b_uvm_printer_row_info__struct__0> __PVT__m_rows;
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
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer_knobs> __PVT__knobs;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack> __PVT__m_scope;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_printer"; }
    virtual void __VnoInFunc_adjust_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string id, CData/*7:0*/ scope_separator, std::string &adjust_name__Vfuncrtn);
    virtual void __VnoInFunc_emit(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn);
    virtual void __VnoInFunc_format_footer(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &format_footer__Vfuncrtn);
    virtual void __VnoInFunc_format_header(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &format_header__Vfuncrtn);
    virtual void __VnoInFunc_format_row(VUVM_Register8b__Syms* __restrict vlSymsp, VUVM_Register8b_uvm_printer_row_info__struct__0 row, std::string &format_row__Vfuncrtn);
    void __VnoInFunc_index_string(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string name, std::string &index_string__Vfuncrtn);
    void __VnoInFunc_istop(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &istop__Vfuncrtn);
    virtual void __VnoInFunc_print_array_footer(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ size);
    virtual void __VnoInFunc_print_array_header(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, std::string arraytype, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_array_range(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ min, IData/*31:0*/ max);
    virtual void __VnoInFunc_print_field(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_field_int(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_generic(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string type_name, IData/*31:0*/ size, std::string value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_int(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_object(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_object_header(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_real(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, double value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_string(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_time(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, CData/*7:0*/ scope_separator);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_printer() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_printer();
};


#endif  // guard
