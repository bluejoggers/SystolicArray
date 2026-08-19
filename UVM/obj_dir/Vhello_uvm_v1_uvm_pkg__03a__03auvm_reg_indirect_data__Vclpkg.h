// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_REG_INDIRECT_DATA__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_REG_INDIRECT_DATA__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_field;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_file;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_indirect_data;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_indirect_data__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_indirect_data__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_indirect_data__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_indirect_data__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_indirect_data : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg {
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
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> __PVT__m_idx;
    VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg>> __PVT__m_tbl;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_indirect_data"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_indirect_data(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_field(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_field> field);
    void __VnoInFunc_add_frontdoors(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_add_map(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_build(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_configure(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> idx, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg>> reg_a, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_file> regfile_parent);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_indirect_reg(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> &get_indirect_reg__Vfuncrtn);
    virtual void __VnoInFunc_get_local_map(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_update(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_indirect_data() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_cover);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_indirect_data();
};


#endif  // guard
