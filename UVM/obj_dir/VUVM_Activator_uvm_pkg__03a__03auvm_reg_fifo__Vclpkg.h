// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_REG_FIFO__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_REG_FIFO__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_object;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_field;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_fifo;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_item;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_map;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_reg__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_reg_fifo : public VUVM_Activator_uvm_pkg__03a__03auvm_reg {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_set_cnt;
    IData/*31:0*/ __PVT__m_size;
    IData/*31:0*/ __Vfifo_size;
    VlQueue<QData/*63:0*/> __PVT__fifo;
    std::string __Vfunc_uvm_report_enabled__11__id;
    std::string __Vtask_uvm_report_warning__15__id;
    std::string __Vtask_uvm_report_warning__15__message;
    std::string __Vtask_uvm_report_warning__15__filename;
    std::string __Vtask_uvm_report_warning__15__context_name;
    std::string __Vfunc_uvm_report_enabled__19__id;
    std::string __Vtask_uvm_report_error__23__id;
    std::string __Vtask_uvm_report_error__23__message;
    std::string __Vtask_uvm_report_error__23__filename;
    std::string __Vtask_uvm_report_error__23__context_name;
    std::string __Vfunc_uvm_report_enabled__27__id;
    std::string __Vtask_uvm_report_error__31__id;
    std::string __Vtask_uvm_report_error__31__message;
    std::string __Vtask_uvm_report_error__31__filename;
    std::string __Vtask_uvm_report_error__31__context_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_field> __PVT__value;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_fifo"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_reg_fifo(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vresize_constrained_arrays(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc_capacity(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &capacity__Vfuncrtn);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    void __VnoInFunc_post_randomize(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_read(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_set_compare(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ check);
    void __VnoInFunc_size(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_update(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_valid_fifo_size_resize_constrained_array(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc_valid_fifo_size_setup_constraint(VUVM_Activator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_fifo() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, IData/*31:0*/ n_bits, IData/*31:0*/ has_cover);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_reg_fifo();
};


#endif  // guard
