// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg::__VnoInFunc_get(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__inst)) {
        this->__PVT__inst = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__inst;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_factory(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_factory> &get_factory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_factory\n"); );
    // Body
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_factory(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_factory> f) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_factory\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_report_server(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_report_server\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_report_server(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_report_server> server) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_report_server\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_tr_database(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> &get_default_tr_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_tr_database\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_tr_database(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> db) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_tr_database\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_component_visitor(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_> v) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_component_visitor\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_component_visitor(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_> &get_component_visitor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_component_visitor\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_root(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> &get_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_root\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::~Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::~\n"); );
}
