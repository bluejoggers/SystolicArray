// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TLM_GENERIC_PAYLOAD__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TLM_GENERIC_PAYLOAD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_comparer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi7;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper;
class Vuvm_pkg_uvm_pkg__03a__03auvm_packer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_recorder;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item;
class Vuvm_pkg_uvm_pkg__03a__03auvm_status_container;
class Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_extension_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_generic_payload;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi7> &get_type__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_generic_payload : public Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_dmi;
    IData/*31:0*/ __PVT__m_command;
    IData/*31:0*/ __PVT__m_length;
    IData/*31:0*/ __PVT__m_response_status;
    IData/*31:0*/ __PVT__m_byte_enable_length;
    IData/*31:0*/ __PVT__m_streaming_width;
    QData/*63:0*/ __PVT__m_address;
    VlQueue<CData/*7:0*/> __PVT__m_data;
    VlQueue<CData/*7:0*/> __PVT__m_byte_enable;
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_extension_base>, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_extension_base>> __PVT__m_extensions;
    VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_extension_base>> __PVT__m_rand_exts;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_generic_payload"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_generic_payload(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    void __VnoInFunc_clear_extension(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle);
    void __VnoInFunc_clear_extensions(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_do_compare(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_do_pack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_do_record(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_do_unpack(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_address(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_byte_enable(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_get_byte_enable_length(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_byte_enable_length__Vfuncrtn);
    virtual void __VnoInFunc_get_command(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_command__Vfuncrtn);
    virtual void __VnoInFunc_get_data(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_get_data_length(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_data_length__Vfuncrtn);
    void __VnoInFunc_get_extension(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_extension_base> &get_extension__Vfuncrtn);
    void __VnoInFunc_get_num_extensions(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_extensions__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_response_status(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_status__Vfuncrtn);
    virtual void __VnoInFunc_get_response_string(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_response_string__Vfuncrtn);
    virtual void __VnoInFunc_get_streaming_width(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_streaming_width__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_is_dmi_allowed(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_dmi_allowed__Vfuncrtn);
    virtual void __VnoInFunc_is_read(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read__Vfuncrtn);
    virtual void __VnoInFunc_is_response_error(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_response_error__Vfuncrtn);
    virtual void __VnoInFunc_is_response_ok(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_response_ok__Vfuncrtn);
    virtual void __VnoInFunc_is_write(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_write__Vfuncrtn);
    void __VnoInFunc_post_randomize(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_pre_randomize(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_address(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ addr);
    virtual void __VnoInFunc_set_byte_enable(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_set_byte_enable_length(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ length);
    virtual void __VnoInFunc_set_command(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ command);
    virtual void __VnoInFunc_set_data(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_set_data_length(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ length);
    virtual void __VnoInFunc_set_dmi_allowed(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ dmi);
    void __VnoInFunc_set_extension(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_extension_base> ext, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_extension_base> &set_extension__Vfuncrtn);
    virtual void __VnoInFunc_set_read(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set_response_status(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ status);
    virtual void __VnoInFunc_set_streaming_width(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ width);
    virtual void __VnoInFunc_set_write(Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_generic_payload() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_generic_payload();
};


#endif  // guard
