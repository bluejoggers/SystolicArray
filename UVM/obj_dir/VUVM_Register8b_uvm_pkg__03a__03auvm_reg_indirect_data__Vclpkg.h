// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_REG_INDIRECT_DATA__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_REG_INDIRECT_DATA__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_field;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_file;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_data;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_data__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_data__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_data__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_data__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_reg__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_data : public VUVM_Register8b_uvm_pkg__03a__03auvm_reg {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__8__id;
    std::string __Vtask_uvm_report_error__13__id;
    std::string __Vtask_uvm_report_error__13__message;
    std::string __Vtask_uvm_report_error__13__filename;
    std::string __Vtask_uvm_report_error__13__context_name;
    std::string __Vfunc_uvm_report_enabled__23__id;
    std::string __Vtask_uvm_report_error__30__id;
    std::string __Vtask_uvm_report_error__30__message;
    std::string __Vtask_uvm_report_error__30__filename;
    std::string __Vtask_uvm_report_error__30__context_name;
    std::string __Vfunc_uvm_report_enabled__38__id;
    std::string __Vtask_uvm_report_error__43__id;
    std::string __Vtask_uvm_report_error__43__message;
    std::string __Vtask_uvm_report_error__43__filename;
    std::string __Vtask_uvm_report_error__43__context_name;
    std::string __Vfunc_uvm_report_enabled__48__id;
    std::string __Vtask_uvm_report_error__53__id;
    std::string __Vtask_uvm_report_error__53__message;
    std::string __Vtask_uvm_report_error__53__filename;
    std::string __Vtask_uvm_report_error__53__context_name;
    std::string __Vfunc_uvm_report_enabled__58__id;
    std::string __Vtask_uvm_report_error__63__id;
    std::string __Vtask_uvm_report_error__63__message;
    std::string __Vtask_uvm_report_error__63__filename;
    std::string __Vtask_uvm_report_error__63__context_name;
    std::string __Vfunc_uvm_report_enabled__71__id;
    std::string __Vtask_uvm_report_warning__76__id;
    std::string __Vtask_uvm_report_warning__76__message;
    std::string __Vtask_uvm_report_warning__76__filename;
    std::string __Vtask_uvm_report_warning__76__context_name;
    std::string __Vfunc_uvm_report_enabled__88__id;
    std::string __Vtask_uvm_report_warning__93__id;
    std::string __Vtask_uvm_report_warning__93__message;
    std::string __Vtask_uvm_report_warning__93__filename;
    std::string __Vtask_uvm_report_warning__93__context_name;
    std::string __Vfunc_uvm_report_enabled__99__id;
    std::string __Vtask_uvm_report_error__104__id;
    std::string __Vtask_uvm_report_error__104__message;
    std::string __Vtask_uvm_report_error__104__filename;
    std::string __Vtask_uvm_report_error__104__context_name;
    std::string __Vfunc_uvm_report_enabled__109__id;
    std::string __Vtask_uvm_report_error__114__id;
    std::string __Vtask_uvm_report_error__114__message;
    std::string __Vtask_uvm_report_error__114__filename;
    std::string __Vtask_uvm_report_error__114__context_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> __PVT__m_idx;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg>> __PVT__m_tbl;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_indirect_data"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_data(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_field(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_field> field);
    void __VnoInFunc_add_frontdoors(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_add_map(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_build(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_configure(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> idx, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg>> reg_a, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_file> regfile_parent);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_indirect_reg(VUVM_Register8b__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> &get_indirect_reg__Vfuncrtn);
    virtual void __VnoInFunc_get_local_map(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_update(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_data() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_cover);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_reg_indirect_data();
};


#endif  // guard
