// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory__Vclpkg::__VnoInFunc_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, s);
    VL_NULL_CHECK(s, "../../uvm/distrib/src/base/uvm_factory.svh", 100)->__VnoInFunc_get_factory(vlSymsp, get__Vfuncrtn);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_register(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_register\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_inst_override_by_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_inst_override_by_type\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_inst_override_by_name\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_type_override_by_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_type_override_by_type\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_type_override_by_name\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_object_by_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_component_by_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_object_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_object_by_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_component_by_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_debug_create_by_type\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_debug_create_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_debug_create_by_name\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_override_by_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_override_by_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_wrapper_by_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_print(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ all_types) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::__VnoInFunc_print\n"); );
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::~\n"); );
}
