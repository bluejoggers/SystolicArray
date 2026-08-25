// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TABLE_PRINTER__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TABLE_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Register8b_uvm_pkg.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer_knobs;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_table_printer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__emit__Vstatic__dash;
    std::string __PVT__emit__Vstatic__space;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_table_printer__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_table_printer__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_table_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_printer__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_table_printer : public VUVM_Register8b_uvm_pkg__03a__03auvm_printer {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_max_name;
    IData/*31:0*/ __PVT__m_max_type;
    IData/*31:0*/ __PVT__m_max_size;
    IData/*31:0*/ __PVT__m_max_value;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_table_printer"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_table_printer(*this); }
    void __VnoInFunc_calculate_max_widths(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_emit(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_table_printer() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_table_printer();
};


#endif  // guard
