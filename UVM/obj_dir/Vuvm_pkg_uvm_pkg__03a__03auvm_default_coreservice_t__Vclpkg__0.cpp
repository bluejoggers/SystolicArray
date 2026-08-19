// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_factory(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_factory> &get_factory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_factory\n"); );
    // Body
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_default_factory> unnamedblk1__DOT__f;
    if ((VlNull{} == this->__PVT__factory)) {
        unnamedblk1__DOT__f = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_default_factory, vlSymsp);
        this->__PVT__factory = unnamedblk1__DOT__f;
    }
    get_factory__Vfuncrtn = this->__PVT__factory;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_factory(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_factory> f) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_factory\n"); );
    // Body
    this->__PVT__factory = f;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_tr_database(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> &get_default_tr_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_tr_database\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_std__03a__03aprocess> unnamedblk2__DOT__p;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_database> unnamedblk2__DOT__tx_db;
    std::string unnamedblk2__DOT__s;
    if ((VlNull{} == this->__PVT__tr_database)) {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk2__DOT__p);
        unnamedblk2__DOT__s = ""s;
        if ((VlNull{} != unnamedblk2__DOT__p)) {
            VL_NULL_CHECK(unnamedblk2__DOT__p, "../../uvm/distrib/src/base/uvm_coreservice.svh", 159)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk2__DOT__s);
        }
        unnamedblk2__DOT__tx_db = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, "default_tr_database"s);
        this->__PVT__tr_database = unnamedblk2__DOT__tx_db;
        if ((VlNull{} != unnamedblk2__DOT__p)) {
            VL_NULL_CHECK(unnamedblk2__DOT__p, "../../uvm/distrib/src/base/uvm_coreservice.svh", 165)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk2__DOT__s);
        }
    }
    get_default_tr_database__Vfuncrtn = this->__PVT__tr_database;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_tr_database(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> db) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_tr_database\n"); );
    // Body
    this->__PVT__tr_database = db;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_report_server(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_report_server\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_default_report_server> unnamedblk3__DOT__f;
    if ((VlNull{} == this->__PVT__report_server)) {
        unnamedblk3__DOT__f = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_default_report_server, vlProcess, vlSymsp, "uvm_report_server"s);
        this->__PVT__report_server = unnamedblk3__DOT__f;
    }
    get_report_server__Vfuncrtn = this->__PVT__report_server;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_report_server(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_report_server> server) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_report_server\n"); );
    // Body
    this->__PVT__report_server = server;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_root(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> &get_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_root\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_m_uvm_get_root(vlProcess, vlSymsp, get_root__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_component_visitor(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_> v) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_component_visitor\n"); );
    // Body
    this->__PVT___visitor = v;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_component_visitor(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_> &get_component_visitor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_component_visitor\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component_name_check_visitor> unnamedblk4__DOT__v;
    if ((VlNull{} == this->__PVT___visitor)) {
        unnamedblk4__DOT__v = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_component_name_check_visitor, vlProcess, vlSymsp, "name-check-visitor"s);
        this->__PVT___visitor = unnamedblk4__DOT__v;
    }
    get_component_visitor__Vfuncrtn = this->__PVT___visitor;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::init(Vuvm_pkg__Syms* __restrict vlSymsp) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::~Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_default_coreservice_t::~\n"); );
}
