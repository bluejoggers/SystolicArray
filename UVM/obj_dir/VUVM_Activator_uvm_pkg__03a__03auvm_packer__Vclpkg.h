// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_object;
class VUVM_Activator_uvm_pkg__03a__03auvm_packer;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;
class VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack;
class VUVM_Activator_uvm_pkg__03a__03auvm_status_container;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_packer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<CData/*0:0*/> __PVT__bitstream;
    VlQueue<CData/*0:0*/> __PVT__fabitstream;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_packer__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_packer__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_packer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_packer : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__physical;
    CData/*0:0*/ __PVT__abstract;
    CData/*0:0*/ __PVT__use_metadata;
    CData/*0:0*/ __PVT__big_endian;
    CData/*0:0*/ __PVT__reverse_order;
    CData/*7:0*/ __PVT__byte_size;
    CData/*0:0*/ __PVT__nopack;
    IData/*31:0*/ __PVT__count;
    IData/*31:0*/ __PVT__word_size;
    IData/*31:0*/ __PVT__policy;
    VlWide<1024>/*32767:0*/ __PVT__m_bits;
    IData/*31:0*/ __PVT__m_packed_size;
    std::string __Vtask_uvm_report_error__1__id;
    std::string __Vtask_uvm_report_error__1__message;
    std::string __Vtask_uvm_report_error__1__filename;
    std::string __Vtask_uvm_report_error__1__context_name;
    std::string __Vtask_uvm_report_error__5__id;
    std::string __Vtask_uvm_report_error__5__message;
    std::string __Vtask_uvm_report_error__5__filename;
    std::string __Vtask_uvm_report_error__5__context_name;
    std::string __Vtask_uvm_report_warning__13__id;
    std::string __Vtask_uvm_report_warning__13__message;
    std::string __Vtask_uvm_report_warning__13__filename;
    std::string __Vtask_uvm_report_warning__13__context_name;
    std::string __Vfunc_uvm_report_enabled__24__id;
    std::string __Vtask_uvm_report_error__28__id;
    std::string __Vtask_uvm_report_error__28__message;
    std::string __Vtask_uvm_report_error__28__filename;
    std::string __Vtask_uvm_report_error__28__context_name;
    std::string __Vfunc_uvm_report_enabled__32__id;
    std::string __Vtask_uvm_report_error__36__id;
    std::string __Vtask_uvm_report_error__36__message;
    std::string __Vtask_uvm_report_error__36__filename;
    std::string __Vtask_uvm_report_error__36__context_name;
    std::string __Vfunc_uvm_report_enabled__40__id;
    std::string __Vtask_uvm_report_error__44__id;
    std::string __Vtask_uvm_report_error__44__message;
    std::string __Vtask_uvm_report_error__44__filename;
    std::string __Vtask_uvm_report_error__44__context_name;
    std::string __Vtask_uvm_report_warning__50__id;
    std::string __Vtask_uvm_report_warning__50__message;
    std::string __Vtask_uvm_report_warning__50__filename;
    std::string __Vtask_uvm_report_warning__50__context_name;
    std::string __Vtask_uvm_report_error__59__id;
    std::string __Vtask_uvm_report_error__59__message;
    std::string __Vtask_uvm_report_error__59__filename;
    std::string __Vtask_uvm_report_error__59__context_name;
    std::string __Vfunc_uvm_report_enabled__69__id;
    std::string __Vtask_uvm_report_error__73__id;
    std::string __Vtask_uvm_report_error__73__message;
    std::string __Vtask_uvm_report_error__73__filename;
    std::string __Vtask_uvm_report_error__73__context_name;
    std::string __Vfunc_uvm_report_enabled__78__id;
    std::string __Vtask_uvm_report_error__82__id;
    std::string __Vtask_uvm_report_error__82__message;
    std::string __Vtask_uvm_report_error__82__filename;
    std::string __Vtask_uvm_report_error__82__context_name;
    std::string __Vfunc_uvm_report_enabled__87__id;
    std::string __Vtask_uvm_report_error__91__id;
    std::string __Vtask_uvm_report_error__91__message;
    std::string __Vtask_uvm_report_error__91__filename;
    std::string __Vtask_uvm_report_error__91__context_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack> __PVT__scope;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_packer"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_packer(*this); }
    void __VnoInFunc_enough_bits(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ needed, std::string id, CData/*0:0*/ &enough_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_bit(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ index, CData/*0:0*/ &get_bit__Vfuncrtn);
    virtual void __VnoInFunc_get_bits(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bits);
    virtual void __VnoInFunc_get_byte(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ index, CData/*7:0*/ &get_byte__Vfuncrtn);
    virtual void __VnoInFunc_get_bytes(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytes);
    virtual void __VnoInFunc_get_int(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ index, IData/*31:0*/ &get_int__Vfuncrtn);
    virtual void __VnoInFunc_get_ints(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &ints);
    virtual void __VnoInFunc_get_packed_bits(VUVM_Activator__Syms* __restrict vlSymsp, VlWide<1024>/*32767:0*/ &get_packed_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_packed_size(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_packed_size__Vfuncrtn);
    void __VnoInFunc_index_error(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string id, IData/*31:0*/ sz);
    virtual void __VnoInFunc_is_null(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_null__Vfuncrtn);
    virtual void __VnoInFunc_pack_bits(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_bytes(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_field(VUVM_Activator__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_field_int(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_ints(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_object(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_pack_real(VUVM_Activator__Syms* __restrict vlSymsp, double value);
    virtual void __VnoInFunc_pack_string(VUVM_Activator__Syms* __restrict vlSymsp, std::string value);
    virtual void __VnoInFunc_pack_time(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ value);
    virtual void __VnoInFunc_put_bits(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream);
    virtual void __VnoInFunc_put_bytes(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream);
    virtual void __VnoInFunc_put_ints(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream);
    void __VnoInFunc_reset(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set_packed_size(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_unpack_bits(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_bytes(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_field(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ size, VlWide<128>/*4095:0*/ &unpack_field__Vfuncrtn);
    virtual void __VnoInFunc_unpack_field_int(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ size, QData/*63:0*/ &unpack_field_int__Vfuncrtn);
    virtual void __VnoInFunc_unpack_ints(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_object(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_unpack_object_ext(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &value);
    virtual void __VnoInFunc_unpack_real(VUVM_Activator__Syms* __restrict vlSymsp, double &unpack_real__Vfuncrtn);
    virtual void __VnoInFunc_unpack_string(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ num_chars, std::string &unpack_string__Vfuncrtn);
    virtual void __VnoInFunc_unpack_time(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ &unpack_time__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_packer() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp);
    ~VUVM_Activator_uvm_pkg__03a__03auvm_packer() {}
};


#endif  // guard
