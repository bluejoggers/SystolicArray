// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_component.svh", 2125)->__VnoInFunc_get_factory(vlSymsp, factory);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_component.svh", 2126)->__VnoInFunc_set_type_override_by_name(vlProcess, vlSymsp, original_type_name, override_type_name, (IData)(replace));
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override_by_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override_by_type\n"); );
    // Body
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_component.svh", 2137)->__VnoInFunc_get_factory(vlSymsp, factory);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_component.svh", 2138)->__VnoInFunc_set_type_override_by_type(vlSymsp, original_type, override_type, replace);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_raised(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_raised\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_dropped(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_dropped\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_all_dropped(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_all_dropped\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_abort(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_abort\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_type_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_component"s;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::new\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_get__29__value;
    VL_ZERO_W(4096, __Vfunc_get__29__value);
    CData/*0:0*/ __Vtask_get__30__Vfuncout;
    __Vtask_get__30__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__30__value;
    __Vtask_get__30__value = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__print_enabled = 1U;
    this->__PVT__recording_detail = 0U;
    IData/*31:0*/ __VlefCall_16__get_report_verbosity_level;
    std::string __VlefCall_15__get_full_name;
    CData/*0:0*/ __VlefCall_14__get;
    CData/*0:0*/ __VlefCall_13__m_add_child;
    std::string __VlefCall_12__get_full_name;
    IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_9;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> __VlefCall_8__get_child;
    IData/*31:0*/ __VlefCall_7__has_child;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__get_state;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_build_phase> __VlefCall_0__get;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk172__DOT__bld;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> unnamedblk172__DOT__common;
    std::string error_str;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        error_str = ""s;
        /*super.new*/;
        if (((VlNull{} == parent) & ("__top__"s == name))) {
            this->__VnoInFunc_set_name(vlProcess, vlSymsp, ""s);
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_component.svh", 1742)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, unnamedblk172__DOT__common);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_build_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
        VL_NULL_CHECK(unnamedblk172__DOT__common, "../../uvm/distrib/src/base/uvm_component.svh", 1749)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_0__get, 1U, unnamedblk172__DOT__bld);
        if ((VlNull{} == unnamedblk172__DOT__bld)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "COMP/INTERNAL"s, "attempt to find build phase object failed"s, 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(unnamedblk172__DOT__bld, "../../uvm/distrib/src/base/uvm_component.svh", 1753)->__VnoInFunc_get_state(vlSymsp, __VlefCall_1__get_state);
        if ((0x00000100U == __VlefCall_1__get_state)) {
            if ((VlNull{} == parent)) {
                VL_NULL_CHECK(top, "../../uvm/distrib/src/base/uvm_component.svh", 1756)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            } else {
                VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_component.svh", 1756)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            }
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "ILLCRT"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("It is illegal to create a component ('"s, name), "' under '"s), __VlefCall_2__get_full_name), "') after the build phase has ended."s)), 0U, ""s, 0U, ""s, 0U);
        }
        if ((""s == name)) {
            VL_SFORMAT_NX(name,"%0d",1, '~',32,vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count);
            name = VL_CONCATN_NNN("COMP_"s, name);
        }
        if ((parent == VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this})) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "THISPARENT"s, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "THISPARENT"s, "cannot set the parent of a component to itself"s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x000006e8U, ""s, 1U);
            }
        }
        if ((VlNull{} == parent)) {
            parent = top;
        }
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x000000c9U, 0U, "NEWCOMP"s, __VlefCall_4__uvm_report_enabled);
        if ((0U != __VlefCall_4__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x000000c9U, 0U, "NEWCOMP"s, __VlefCall_5__uvm_report_enabled);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                if ((parent == top)) {
                    __VlefCall_6__get_full_name = "uvm_top"s;
                } else {
                    VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_component.svh", 1776)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NEWCOMP"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Creating "s, __VlefCall_6__get_full_name), "."s), name)), 0x000000c9U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x000006f0U, ""s, 1U);
            }
        }
        VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_component.svh", 1778)->__VnoInFunc_has_child(vlSymsp, name, __VlefCall_7__has_child);
        __VlefLogAnd_9 = (0U != __VlefCall_7__has_child);
        if (__VlefLogAnd_9) {
            VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_component.svh", 1778)->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_8__get_child);
            __VlefLogAnd_9 = (VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this} 
                              != __VlefCall_8__get_child);
        }
        if (__VlefLogAnd_9) {
            if ((parent == top)) {
                error_str = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN(
                                                                         VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Name '"s, name), "' is not unique to other top-level "s), "instances. If parent is a module, build a unique name by combining the "s), "the module name and component name: $sformatf(\"%m.%s\",\""s), name), "\")."s);
                        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "CLDEXT"s, __VlefCall_10__uvm_report_enabled);
                        if ((0U != __VlefCall_10__uvm_report_enabled)) {
                            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "CLDEXT"s, error_str, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x000006f7U, ""s, 1U);
                        }
                    } else {
                        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "CLDEXT"s, __VlefCall_11__uvm_report_enabled);
                        if ((0U != __VlefCall_11__uvm_report_enabled)) {
                            VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_component.svh", 1789)
                                           ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "CLDEXT"s, VL_SFORMATF_N_NX("Cannot set '%s' as a child of '%s', which already has a child by that name.",2
                                                                                , 'S',&(name)
                                                                                , 'S',&(__VlefCall_12__get_full_name)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x000006fdU, ""s, 1U);
                        }
                    }
                    goto __Vlabel0;
                }
                this->__PVT__m_parent = parent;
                this->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/base/uvm_component.svh", 1797)
                                           ->__VnoInFunc_m_add_child(vlProcess, vlSymsp, 
                                                                     VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_13__m_add_child);
                if ((1U & (~ (IData)(__VlefCall_13__m_add_child)))) {
                    this->__PVT__m_parent = VlNull{};
                }
                this->__PVT__event_pool = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz5, vlProcess, vlSymsp, "event_pool"s);
                this->__PVT__m_domain = VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_component.svh", 1802)
                    ->__PVT__m_domain;
                this->__VnoInFunc_reseed(vlProcess, vlSymsp);
                __Vfunc_get__29__value[0U] = this->__PVT__recording_detail;
                __Vilp1 = 1U;
                while ((__Vilp1 <= 0x0000007fU)) {
                    __Vfunc_get__29__value[__Vilp1] = 0U;
                    __Vilp1 = ((IData)(1U) + __Vilp1);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz6__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, ""s, "recording_detail"s, __Vfunc_get__29__value, __VlefCall_14__get);
                this->__PVT__recording_detail = __Vfunc_get__29__value[0U];
                if ((1U & (~ (IData)(__VlefCall_14__get)))) {
                    __Vtask_get__30__value = this->__PVT__recording_detail;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db___Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, ""s, "recording_detail"s, __Vtask_get__30__value, __Vtask_get__30__Vfuncout);
                    this->__PVT__recording_detail = __Vtask_get__30__value;
                }
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_object::__PVT__m_rh, "../../uvm/distrib/src/base/uvm_component.svh", 1811)
                                           ->__VnoInFunc_set_name(vlProcess, vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(__VlefCall_15__get_full_name));
                VL_NULL_CHECK(parent, "../../uvm/distrib/src/base/uvm_component.svh", 1812)
                                           ->__VnoInFunc_get_report_verbosity_level(vlSymsp, 0U, ""s, __VlefCall_16__get_report_verbosity_level);
                this->__VnoInFunc_set_report_verbosity_level(vlSymsp, __VlefCall_16__get_report_verbosity_level);
                {
                    // Inlined CFunc: __VnoInFunc_m_set_cl_msg_args
                    this->__VnoInFunc_m_set_cl_verb(vlProcess, vlSymsp);
                    this->__VnoInFunc_m_set_cl_action(vlProcess, vlSymsp);
                    this->__VnoInFunc_m_set_cl_sev(vlProcess, vlSymsp);
                }
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_10__get_name;
            std::string __VlefCall_9__get_name;
            std::string __VlefCall_8__get_name;
            IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
            std::string __VlefCall_6__get_type_name;
            std::string __VlefCall_5__get_name;
            std::string __VlefCall_4__get_name;
            IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
            CData/*0:0*/ __VlefExpr_2;
            std::string __VlefCall_1__get_name;
            std::string __VlefCall_0__get_name;
            {
                m_add_child__Vfuncrtn = 0U;
                VL_NULL_CHECK(child, "../../uvm/distrib/src/base/uvm_component.svh", 1824)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                __VlefExpr_2 = this->__PVT__m_children.exists(__VlefCall_0__get_name);
                if (__VlefExpr_2) {
                    VL_NULL_CHECK(child, "../../uvm/distrib/src/base/uvm_component.svh", 1825)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    __VlefExpr_2 = (this->__PVT__m_children
                                    .at(__VlefCall_1__get_name) 
                                    != child);
                }
                if (__VlefExpr_2) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "BDCLD"s, __VlefCall_3__uvm_report_enabled);
                    if ((0U != __VlefCall_3__uvm_report_enabled)) {
                        VL_NULL_CHECK(child, "../../uvm/distrib/src/base/uvm_component.svh", 1828)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                        VL_NULL_CHECK(child, "../../uvm/distrib/src/base/uvm_component.svh", 1828)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                        VL_NULL_CHECK(this->__PVT__m_children
                                      .at(__VlefCall_5__get_name), "../../uvm/distrib/src/base/uvm_component.svh", 1828)
                                           ->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "BDCLD"s, VL_SFORMATF_N_NX("A child with the name '%0s' (type=%0s) already exists.",2
                                                                                , 'S',&(__VlefCall_4__get_name)
                                                                                , 'S',&(__VlefCall_6__get_type_name)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000724U, ""s, 1U);
                    }
                    m_add_child__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                if (this->__PVT__m_children_by_handle.exists(child)) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "BDCHLD"s, __VlefCall_7__uvm_report_enabled);
                    if ((0U != __VlefCall_7__uvm_report_enabled)) {
                        VL_NULL_CHECK(child, "../../uvm/distrib/src/base/uvm_component.svh", 1837)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                        VL_NULL_CHECK(this->__PVT__m_children_by_handle
                                      .at(child), "../../uvm/distrib/src/base/uvm_component.svh", 1837)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "BDCHLD"s, VL_SFORMATF_N_NX("A child with the name '%0s' already exists in parent under name ' %0s'",2
                                                                                , 'S',&(__VlefCall_8__get_name)
                                                                                , 'S',&(__VlefCall_9__get_name)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x0000072dU, ""s, 1U);
                    }
                    m_add_child__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(child, "../../uvm/distrib/src/base/uvm_component.svh", 1841)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                this->__PVT__m_children.at(__VlefCall_10__get_name) 
                    = child;
                this->__PVT__m_children_by_handle.at(child) 
                    = child;
                m_add_child__Vfuncrtn = 1U;
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_children(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>> &children) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_children\n"); );
            // Body
            std::string unnamedblk173__DOT__i;
            std::string unnamedblk173__DOT__i__Vnext;
            CData/*0:0*/ unnamedblk173__DOT__i__Vmore;
            unnamedblk173__DOT__i__Vmore = 0;
            unnamedblk173__DOT__i__Vmore = (0U != this->__PVT__m_children.first(unnamedblk173__DOT__i__Vnext));
            while (unnamedblk173__DOT__i__Vmore) {
                unnamedblk173__DOT__i = unnamedblk173__DOT__i__Vnext;
                unnamedblk173__DOT__i__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk173__DOT__i__Vnext));
                children.push_back(this->__PVT__m_children
                                   .at(unnamedblk173__DOT__i));
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_first_child(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_first_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_first_child\n"); );
            // Body
            get_first_child__Vfuncrtn = 0U;
            get_first_child__Vfuncrtn = this->__PVT__m_children.first(name);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_next_child(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_next_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_next_child\n"); );
            // Body
            get_next_child__Vfuncrtn = 0U;
            get_next_child__Vfuncrtn = this->__PVT__m_children.next(name);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_child(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> &get_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_child\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_1__get_full_name;
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            {
                if (this->__PVT__m_children.exists(name)) {
                    get_child__Vfuncrtn = this->__PVT__m_children
                        .at(name);
                    goto __Vlabel0;
                }
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "NOCHILD"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NOCHILD"s, 
                                                         VL_CVT_PACK_STR_NN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Component with name '"s, name), "' is not a child of component '"s), __VlefCall_1__get_full_name), "'"s)), 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x0000075fU, ""s, 1U);
                }
                get_child__Vfuncrtn = VlNull{};
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_has_child(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ &has_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_has_child\n"); );
            // Body
            has_child__Vfuncrtn = this->__PVT__m_children.exists(name);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_num_children(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_children__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_num_children\n"); );
            // Body
            get_num_children__Vfuncrtn = this->__PVT__m_children.size();
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_full_name\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            get_full_name__Vfuncrtn = ""s;
            if ((""s == this->__PVT__m_name)) {
                this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
            } else {
                get_full_name__Vfuncrtn = this->__PVT__m_name;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_parent(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_parent\n"); );
            // Body
            get_parent__Vfuncrtn = this->__PVT__m_parent;
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_name\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            {
                if ((""s != this->__PVT__m_name)) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "INVSTNM"s, __VlefCall_0__uvm_report_enabled);
                    if ((0U != __VlefCall_0__uvm_report_enabled)) {
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "INVSTNM"s, VL_SFORMATF_N_NX("It is illegal to change the name of a component. The component name will not be changed to \"%s\"",1
                                                                                , 'S',&(name)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x0000078eU, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
                Vhello_uvm_v1_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name(vlProcess, vlSymsp, name);
                this->__VnoInFunc_m_set_full_name(vlProcess, vlSymsp);
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_full_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_full_name\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_1__get_name;
            std::string __VlefCall_0__get_full_name;
            std::string unnamedblk174__DOT__c;
            std::string unnamedblk174__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk174__DOT__c__Vmore;
            unnamedblk174__DOT__c__Vmore = 0;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> unnamedblk174__DOT__unnamedblk175__DOT__tmp;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> top;
            top = vlSymsp->TOP__uvm_pkg.__PVT__uvm_top;
            if (((this->__PVT__m_parent == top) | (VlNull{} 
                                                   == this->__PVT__m_parent))) {
                this->__VnoInFunc_get_name(vlSymsp, this->__PVT__m_name);
            } else {
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/base/uvm_component.svh", 1952)
                                           ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                this->__PVT__m_name = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
            }
            unnamedblk174__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk174__DOT__c__Vnext));
            while (unnamedblk174__DOT__c__Vmore) {
                unnamedblk174__DOT__c = unnamedblk174__DOT__c__Vnext;
                unnamedblk174__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk174__DOT__c__Vnext));
                unnamedblk174__DOT__unnamedblk175__DOT__tmp 
                    = this->__PVT__m_children.at(unnamedblk174__DOT__c);
                VL_NULL_CHECK(unnamedblk174__DOT__unnamedblk175__DOT__tmp, "../../uvm/distrib/src/base/uvm_component.svh", 1957)
                                           ->__VnoInFunc_m_set_full_name(vlProcess, vlSymsp);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_lookup(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> &lookup__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_lookup\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
            IData/*31:0*/ __VlefCall_0__has_child;
            std::string leaf;
            std::string remainder;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> comp;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> top;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
            {
                leaf = ""s;
                remainder = ""s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
                VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_component.svh", 1973)
                                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
                comp = VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this};
                this->__VnoInFunc_m_extract_name(vlSymsp, name, this->__Vtask_m_extract_name__62__leaf, this->__Vtask_m_extract_name__62__remainder);
                leaf = this->__Vtask_m_extract_name__62__leaf;
                remainder = this->__Vtask_m_extract_name__62__remainder;
                if ((""s == leaf)) {
                    comp = top;
                    this->__VnoInFunc_m_extract_name(vlSymsp, remainder, this->__Vtask_m_extract_name__63__leaf, this->__Vtask_m_extract_name__63__remainder);
                    leaf = this->__Vtask_m_extract_name__63__leaf;
                    remainder = this->__Vtask_m_extract_name__63__remainder;
                }
                VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_component.svh", 1984)
                                           ->__VnoInFunc_has_child(vlSymsp, leaf, __VlefCall_0__has_child);
                if ((1U & (~ (0U != __VlefCall_0__has_child)))) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "Lookup Error"s, __VlefCall_1__uvm_report_enabled);
                    if ((0U != __VlefCall_1__uvm_report_enabled)) {
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Lookup Error"s, VL_SFORMATF_N_NX("Cannot find child %0s",1
                                                                                , 'S',&(leaf)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x000007c2U, ""s, 1U);
                    }
                    lookup__Vfuncrtn = VlNull{};
                    goto __Vlabel0;
                }
                if ((""s != remainder)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_component.svh", 1991)
                                  ->__PVT__m_children
                                  .at(leaf), "../../uvm/distrib/src/base/uvm_component.svh", 1991)
                                           ->__VnoInFunc_lookup(vlSymsp, remainder, lookup__Vfuncrtn);
                    goto __Vlabel0;
                }
                lookup__Vfuncrtn = VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_component.svh", 1993)
                    ->__PVT__m_children.at(leaf);
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_depth(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_depth\n"); );
            // Body
            IData/*31:0*/ unnamedblk176__DOT__i;
            unnamedblk176__DOT__i = 0;
            {
                get_depth__Vfuncrtn = 0U;
                if ((""s == this->__PVT__m_name)) {
                    get_depth__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                get_depth__Vfuncrtn = 1U;
                unnamedblk176__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk176__DOT__i, 
                                  VL_LEN_IN(this->__PVT__m_name))) {
                    if ((0x2eU == VL_GETC_N(this->__PVT__m_name,unnamedblk176__DOT__i))) {
                        get_depth__Vfuncrtn = ((IData)(1U) 
                                               + get_depth__Vfuncrtn);
                    }
                    unnamedblk176__DOT__i = ((IData)(1U) 
                                             + unnamedblk176__DOT__i);
                }
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_extract_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, std::string &leaf, std::string &remainder) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_extract_name\n"); );
            // Body
            IData/*31:0*/ i;
            IData/*31:0*/ len;
            {
                leaf = ""s;
                remainder = ""s;
                i = 0U;
                len = 0U;
                len = VL_LEN_IN(name);
                i = 0U;
                {
                    while (VL_LTS_III(32, i, VL_LEN_IN(name))) {
                        if ((0x2eU == VL_GETC_N(name,i))) {
                            goto __Vlabel1;
                        }
                        i = ((IData)(1U) + i);
                    }
                    __Vlabel1: ;
                }
                if ((i == len)) {
                    leaf = name;
                    remainder = ""s;
                    goto __Vlabel0;
                }
                leaf = VL_SUBSTR_N(name,0U,(i - (IData)(1U)));
                remainder = VL_SUBSTR_N(name,((IData)(1U) 
                                              + i),
                                        (len - (IData)(1U)));
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_flush(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_flush\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_flush(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_flush\n"); );
            // Body
            std::string unnamedblk177__DOT__s;
            std::string unnamedblk177__DOT__s__Vnext;
            CData/*0:0*/ unnamedblk177__DOT__s__Vmore;
            unnamedblk177__DOT__s__Vmore = 0;
            unnamedblk177__DOT__s__Vmore = (0U != this->__PVT__m_children.first(unnamedblk177__DOT__s__Vnext));
            while (unnamedblk177__DOT__s__Vmore) {
                unnamedblk177__DOT__s = unnamedblk177__DOT__s__Vnext;
                unnamedblk177__DOT__s__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk177__DOT__s__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk177__DOT__s), "../../uvm/distrib/src/base/uvm_component.svh", 2051)
                                           ->__VnoInFunc_do_flush(vlSymsp);
            }
            this->__VnoInFunc_flush(vlSymsp);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_create\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "ILLCRT"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILLCRT"s, "create cannot be called on a uvm_component. Use create_component instead."s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000815U, ""s, 1U);
            }
            create__Vfuncrtn = VlNull{};
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_clone(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_clone\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_1__get_full_name;
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "ILLCLN"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILLCLN"s, VL_SFORMATF_N_NX("Attempting to clone '%s'.  Clone cannot be called on a uvm_component.  The clone target variable will be set to null.",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x0000081eU, ""s, 1U);
            }
            clone__Vfuncrtn = VlNull{};
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_override_info(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_override_info\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_0__get_full_name;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory> factory;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
            VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_component.svh", 2089)
                                           ->__VnoInFunc_get_factory(vlSymsp, factory);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_component.svh", 2090)
                                           ->__VnoInFunc_debug_create_by_name(vlSymsp, requested_type_name, 
                                                                              VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_component(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_component\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_0__get_full_name;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory> factory;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
            VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_component.svh", 2100)
                                           ->__VnoInFunc_get_factory(vlSymsp, factory);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_component.svh", 2101)
                                           ->__VnoInFunc_create_component_by_name(vlProcess, vlSymsp, requested_type_name, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, create_component__Vfuncrtn);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_object(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_object\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_0__get_full_name;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory> factory;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
            VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_component.svh", 2112)
                                           ->__VnoInFunc_get_factory(vlSymsp, factory);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_component.svh", 2113)
                                           ->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, requested_type_name, 
                                                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name, create_object__Vfuncrtn);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string relative_inst_path, std::string original_type_name, std::string override_type_name) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_0__get_full_name;
            std::string full_inst_path;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory> factory;
            full_inst_path = ""s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
            VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_component.svh", 2150)
                                           ->__VnoInFunc_get_factory(vlSymsp, factory);
            if ((""s == relative_inst_path)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, full_inst_path);
            } else {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                full_inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), relative_inst_path);
            }
            VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_component.svh", 2157)
                                           ->__VnoInFunc_set_inst_override_by_name(vlProcess, vlSymsp, original_type_name, override_type_name, full_inst_path);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override_by_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string relative_inst_path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> override_type) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override_by_type\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_0__get_full_name;
            std::string full_inst_path;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory> factory;
            full_inst_path = ""s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
            VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_component.svh", 2172)
                                           ->__VnoInFunc_get_factory(vlSymsp, factory);
            if ((""s == relative_inst_path)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, full_inst_path);
            } else {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                full_inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), relative_inst_path);
            }
            VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_component.svh", 2179)
                                           ->__VnoInFunc_set_inst_override_by_type(vlSymsp, original_type, override_type, full_inst_path);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_verbosity_hier(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_verbosity_hier\n"); );
            // Body
            std::string unnamedblk178__DOT__c;
            std::string unnamedblk178__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk178__DOT__c__Vmore;
            unnamedblk178__DOT__c__Vmore = 0;
            this->__VnoInFunc_set_report_id_verbosity(vlSymsp, id, verbosity);
            unnamedblk178__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk178__DOT__c__Vnext));
            while (unnamedblk178__DOT__c__Vmore) {
                unnamedblk178__DOT__c = unnamedblk178__DOT__c__Vnext;
                unnamedblk178__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk178__DOT__c__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk178__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2197)
                                           ->__VnoInFunc_set_report_id_verbosity_hier(vlSymsp, id, verbosity);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_verbosity_hier(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_verbosity_hier\n"); );
            // Body
            std::string unnamedblk179__DOT__c;
            std::string unnamedblk179__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk179__DOT__c__Vmore;
            unnamedblk179__DOT__c__Vmore = 0;
            this->__VnoInFunc_set_report_severity_id_verbosity(vlSymsp, severity, id, verbosity);
            unnamedblk179__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk179__DOT__c__Vnext));
            while (unnamedblk179__DOT__c__Vmore) {
                unnamedblk179__DOT__c = unnamedblk179__DOT__c__Vnext;
                unnamedblk179__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk179__DOT__c__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk179__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2209)
                                           ->__VnoInFunc_set_report_severity_id_verbosity_hier(vlSymsp, severity, id, verbosity);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_action_hier(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_action_hier\n"); );
            // Body
            std::string unnamedblk180__DOT__c;
            std::string unnamedblk180__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk180__DOT__c__Vmore;
            unnamedblk180__DOT__c__Vmore = 0;
            this->__VnoInFunc_set_report_severity_action(vlSymsp, severity, action);
            unnamedblk180__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk180__DOT__c__Vnext));
            while (unnamedblk180__DOT__c__Vmore) {
                unnamedblk180__DOT__c = unnamedblk180__DOT__c__Vnext;
                unnamedblk180__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk180__DOT__c__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk180__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2220)
                                           ->__VnoInFunc_set_report_severity_action_hier(vlSymsp, severity, action);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_action_hier(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_action_hier\n"); );
            // Body
            std::string unnamedblk181__DOT__c;
            std::string unnamedblk181__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk181__DOT__c__Vmore;
            unnamedblk181__DOT__c__Vmore = 0;
            this->__VnoInFunc_set_report_id_action(vlSymsp, id, action);
            unnamedblk181__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk181__DOT__c__Vnext));
            while (unnamedblk181__DOT__c__Vmore) {
                unnamedblk181__DOT__c = unnamedblk181__DOT__c__Vnext;
                unnamedblk181__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk181__DOT__c__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk181__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2230)
                                           ->__VnoInFunc_set_report_id_action_hier(vlSymsp, id, action);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_action_hier(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_action_hier\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            std::string unnamedblk182__DOT__c;
            std::string unnamedblk182__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk182__DOT__c__Vmore;
            unnamedblk182__DOT__c__Vmore = 0;
            this->__VnoInFunc_set_report_severity_id_action(vlProcess, vlSymsp, severity, id, action);
            unnamedblk182__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk182__DOT__c__Vnext));
            while (unnamedblk182__DOT__c__Vmore) {
                unnamedblk182__DOT__c = unnamedblk182__DOT__c__Vnext;
                unnamedblk182__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk182__DOT__c__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk182__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2242)
                                           ->__VnoInFunc_set_report_severity_id_action_hier(vlSymsp, severity, id, action);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_file_hier(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_file_hier\n"); );
            // Body
            std::string unnamedblk183__DOT__c;
            std::string unnamedblk183__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk183__DOT__c__Vmore;
            unnamedblk183__DOT__c__Vmore = 0;
            this->__VnoInFunc_set_report_severity_file(vlSymsp, severity, file);
            unnamedblk183__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk183__DOT__c__Vnext));
            while (unnamedblk183__DOT__c__Vmore) {
                unnamedblk183__DOT__c = unnamedblk183__DOT__c__Vnext;
                unnamedblk183__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk183__DOT__c__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk183__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2253)
                                           ->__VnoInFunc_set_report_severity_file_hier(vlSymsp, severity, file);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_default_file_hier(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_default_file_hier\n"); );
            // Body
            std::string unnamedblk184__DOT__c;
            std::string unnamedblk184__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk184__DOT__c__Vmore;
            unnamedblk184__DOT__c__Vmore = 0;
            this->__VnoInFunc_set_report_default_file(vlSymsp, file);
            unnamedblk184__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk184__DOT__c__Vnext));
            while (unnamedblk184__DOT__c__Vmore) {
                unnamedblk184__DOT__c = unnamedblk184__DOT__c__Vnext;
                unnamedblk184__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk184__DOT__c__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk184__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2263)
                                           ->__VnoInFunc_set_report_default_file_hier(vlSymsp, file);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_file_hier(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_file_hier\n"); );
            // Body
            std::string unnamedblk185__DOT__c;
            std::string unnamedblk185__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk185__DOT__c__Vmore;
            unnamedblk185__DOT__c__Vmore = 0;
            this->__VnoInFunc_set_report_id_file(vlSymsp, id, file);
            unnamedblk185__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk185__DOT__c__Vnext));
            while (unnamedblk185__DOT__c__Vmore) {
                unnamedblk185__DOT__c = unnamedblk185__DOT__c__Vnext;
                unnamedblk185__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk185__DOT__c__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk185__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2273)
                                           ->__VnoInFunc_set_report_id_file_hier(vlSymsp, id, file);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_file_hier(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_file_hier\n"); );
            // Body
            std::string unnamedblk186__DOT__c;
            std::string unnamedblk186__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk186__DOT__c__Vmore;
            unnamedblk186__DOT__c__Vmore = 0;
            this->__VnoInFunc_set_report_severity_id_file(vlSymsp, severity, id, file);
            unnamedblk186__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk186__DOT__c__Vnext));
            while (unnamedblk186__DOT__c__Vmore) {
                unnamedblk186__DOT__c = unnamedblk186__DOT__c__Vnext;
                unnamedblk186__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk186__DOT__c__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk186__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2285)
                                           ->__VnoInFunc_set_report_severity_id_file_hier(vlSymsp, severity, id, file);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_verbosity_level_hier(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_verbosity_level_hier\n"); );
            // Body
            std::string unnamedblk187__DOT__c;
            std::string unnamedblk187__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk187__DOT__c__Vmore;
            unnamedblk187__DOT__c__Vmore = 0;
            this->__VnoInFunc_set_report_verbosity_level(vlSymsp, verbosity);
            unnamedblk187__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk187__DOT__c__Vnext));
            while (unnamedblk187__DOT__c__Vmore) {
                unnamedblk187__DOT__c = unnamedblk187__DOT__c__Vnext;
                unnamedblk187__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk187__DOT__c__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk187__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2295)
                                           ->__VnoInFunc_set_report_verbosity_level_hier(vlSymsp, verbosity);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            this->__PVT__m_build_done = 1U;
            this->__VnoInFunc_build(vlProcess, vlSymsp);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_build(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_build\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            this->__PVT__m_build_done = 1U;
            this->__VnoInFunc_apply_config_settings(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__print_config_matches);
            if ((0U == this->__PVT__m_phasing_active)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "build()/build_phase() has been called explicitly, outside of the phasing system. This usage of build is deprecated and may lead to unexpected behavior."s, 0x000000c8U, ""s, 0U, ""s, 0U);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            this->__VnoInFunc_connect(vlSymsp);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation_phase\n"); );
            // Body
            this->__VnoInFunc_start_of_simulation(vlSymsp);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration_phase\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            this->__VnoInFunc_end_of_elaboration(vlSymsp);
        }

        VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            VL_KEEP_THIS;
            this->__VnoInFunc_run(vlSymsp);
            co_return;
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract_phase\n"); );
            // Body
            this->__VnoInFunc_extract(vlSymsp);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_phase\n"); );
            // Body
            this->__VnoInFunc_check(vlSymsp);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase\n"); );
            // Body
            this->__VnoInFunc_report(vlSymsp);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_run(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_run\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_check(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_check\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_report(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_report\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_final_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_final_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_reset_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_reset_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_reset_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_reset_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_reset_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_reset_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_configure_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_configure_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_configure_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_configure_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_configure_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_configure_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_main_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_main_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_main_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_main_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_main_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_main_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_shutdown_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_shutdown_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_shutdown_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_shutdown_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_shutdown_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_shutdown_phase\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_started(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_started\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ended(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ended\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ready_to_end(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ready_to_end\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_define_domain(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> domain) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_define_domain\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_run_phase> __VlefCall_1__get;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __VlefCall_0__find;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> unnamedblk188__DOT__common;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> schedule;
            VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_component.svh", 2430)
                                           ->__VnoInFunc_find_by_name(vlSymsp, "uvm_sched"s, 1U, schedule);
            if ((VlNull{} == schedule)) {
                schedule = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, "uvm_sched"s, 3U, VlNull{});
                vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_add_uvm_phases(vlProcess, vlSymsp, schedule);
                VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_component.svh", 2435)
                                           ->__VnoInFunc_add(vlProcess, vlSymsp, schedule, VlNull{}, VlNull{}, VlNull{});
                vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, unnamedblk188__DOT__common);
                VL_NULL_CHECK(unnamedblk188__DOT__common, "../../uvm/distrib/src/base/uvm_component.svh", 2437)
                                           ->__VnoInFunc_find(vlProcess, vlSymsp, domain, 0U, __VlefCall_0__find);
                if ((VlNull{} == __VlefCall_0__find)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_1__get);
                    VL_NULL_CHECK(unnamedblk188__DOT__common, "../../uvm/distrib/src/base/uvm_component.svh", 2438)
                                           ->__VnoInFunc_add(vlProcess, vlSymsp, domain, __VlefCall_1__get, VlNull{}, VlNull{});
                }
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_domain(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> domain, IData/*31:0*/ hier) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_domain\n"); );
            // Body
            std::string unnamedblk189__DOT__c;
            std::string unnamedblk189__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk189__DOT__c__Vmore;
            unnamedblk189__DOT__c__Vmore = 0;
            this->__PVT__m_domain = domain;
            this->__VnoInFunc_define_domain(vlSymsp, domain);
            if ((0U != hier)) {
                unnamedblk189__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.first(unnamedblk189__DOT__c__Vnext));
                while (unnamedblk189__DOT__c__Vmore) {
                    unnamedblk189__DOT__c = unnamedblk189__DOT__c__Vnext;
                    unnamedblk189__DOT__c__Vmore = 
                        (0U != this->__PVT__m_children.next(unnamedblk189__DOT__c__Vnext));
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk189__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2458)
                                           ->__VnoInFunc_set_domain(vlSymsp, domain, 1U);
                }
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_domain(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_domain\n"); );
            // Body
            get_domain__Vfuncrtn = this->__PVT__m_domain;
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_phase_imp(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> imp, IData/*31:0*/ hier) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_phase_imp\n"); );
            // Body
            std::string unnamedblk190__DOT__c;
            std::string unnamedblk190__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk190__DOT__c__Vmore;
            unnamedblk190__DOT__c__Vmore = 0;
            this->__PVT__m_phase_imps.at(phase) = imp;
            if ((0U != hier)) {
                unnamedblk190__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.first(unnamedblk190__DOT__c__Vnext));
                while (unnamedblk190__DOT__c__Vmore) {
                    unnamedblk190__DOT__c = unnamedblk190__DOT__c__Vnext;
                    unnamedblk190__DOT__c__Vmore = 
                        (0U != this->__PVT__m_children.next(unnamedblk190__DOT__c__Vnext));
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk190__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2476)
                                           ->__VnoInFunc_set_phase_imp(vlSymsp, phase, imp, hier);
                }
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_kill_all(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_kill_all\n"); );
            // Body
            std::string unnamedblk191__DOT__c;
            std::string unnamedblk191__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk191__DOT__c__Vmore;
            unnamedblk191__DOT__c__Vmore = 0;
            unnamedblk191__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk191__DOT__c__Vnext));
            while (unnamedblk191__DOT__c__Vmore) {
                unnamedblk191__DOT__c = unnamedblk191__DOT__c__Vnext;
                unnamedblk191__DOT__c__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk191__DOT__c__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk191__DOT__c), "../../uvm/distrib/src/base/uvm_component.svh", 2490)
                                           ->__VnoInFunc_do_kill_all(vlSymsp);
            }
            this->__VnoInFunc_kill(vlSymsp);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_kill(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_kill\n"); );
            // Body
            if ((VlNull{} != this->__PVT__m_phase_process)) {
                VL_NULL_CHECK(this->__PVT__m_phase_process, "../../uvm/distrib/src/base/uvm_component.svh", 2500)
                                           ->__VnoInFunc_kill(vlSymsp);
                this->__PVT__m_phase_process = VlNull{};
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_suspend(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_suspend\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "COMP/SPND/UNIMP"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "COMP/SPND/UNIMP"s, "suspend() not implemented"s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x000009ceU, ""s, 1U);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_resume(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_resume\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "COMP/RSUM/UNIMP"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "COMP/RSUM/UNIMP"s, "resume() not implemented"s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x000009d6U, ""s, 1U);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_status(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &status__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_status\n"); );
            // Body
            status__Vfuncrtn = "<unknown>"s;
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_stop(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string ph_name) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_stop\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_stop_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_stop_phase\n"); );
            // Body
            std::string __VlefCall_0__get_name;
            VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_component.svh", 2569)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            this->__VnoInFunc_stop(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__get_name));
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_resolve_bindings\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_resolve_bindings(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_resolve_bindings\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string unnamedblk192__DOT__s;
            std::string unnamedblk192__DOT__s__Vnext;
            CData/*0:0*/ unnamedblk192__DOT__s__Vmore;
            unnamedblk192__DOT__s__Vmore = 0;
            unnamedblk192__DOT__s__Vmore = (0U != this->__PVT__m_children.first(unnamedblk192__DOT__s__Vnext));
            while (unnamedblk192__DOT__s__Vmore) {
                unnamedblk192__DOT__s = unnamedblk192__DOT__s__Vnext;
                unnamedblk192__DOT__s__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk192__DOT__s__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk192__DOT__s), "../../uvm/distrib/src/base/uvm_component.svh", 2588)
                                           ->__VnoInFunc_do_resolve_bindings(vlProcess, vlSymsp);
            }
            this->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_accept_tr(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ accept_time) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_accept_tr\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_event_> e;
            VL_NULL_CHECK(tr, "../../uvm/distrib/src/base/uvm_component.svh", 2606)
                                           ->__VnoInFunc_accept_tr(vlSymsp, accept_time);
            this->__VnoInFunc_do_accept_tr(vlSymsp, tr);
            VL_NULL_CHECK(this->__PVT__event_pool, "../../uvm/distrib/src/base/uvm_component.svh", 2608)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, "accept_tr"s, e);
            if ((VlNull{} != e)) {
                VL_NULL_CHECK(e, "../../uvm/distrib/src/base/uvm_component.svh", 2610)
                                           ->__VnoInFunc_trigger(vlSymsp, VlNull{});
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_tr(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_tr\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            begin_tr__Vfuncrtn = 0;
            this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, tr, parent_handle, stream_name, label, desc, begin_time, begin_tr__Vfuncrtn);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_child_tr(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_child_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_child_tr\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            begin_child_tr__Vfuncrtn = 0;
            this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, tr, parent_handle, stream_name, label, desc, begin_time, begin_child_tr__Vfuncrtn);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_get_tr_database(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_database> &m_get_tr_database__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_get_tr_database\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk193__DOT__cs;
            if ((VlNull{} == this->__PVT__tr_database)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, unnamedblk193__DOT__cs);
                VL_NULL_CHECK(unnamedblk193__DOT__cs, "../../uvm/distrib/src/base/uvm_component.svh", 2642)
                                           ->__VnoInFunc_get_default_tr_database(vlProcess, vlSymsp, this->__PVT__tr_database);
            }
            m_get_tr_database__Vfuncrtn = this->__PVT__tr_database;
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_stream(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, std::string stream_type_name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_stream> &get_tr_stream__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_stream\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_2__open_stream;
            std::string __VlefCall_1__get_full_name;
            CData/*0:0*/ __VlefExpr_0;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_database> db;
            this->__VnoInFunc_m_get_tr_database(vlProcess, vlSymsp, db);
            __VlefExpr_0 = (! this->__PVT__m_streams.exists(name));
            if ((1U & (~ (IData)(__VlefExpr_0)))) {
                __VlefExpr_0 = (! this->__PVT__m_streams
                                .at(name).exists(stream_type_name));
            }
            if (__VlefExpr_0) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(db, "../../uvm/distrib/src/base/uvm_component.svh", 2653)
                                           ->__VnoInFunc_open_stream(vlProcess, vlSymsp, name, 
                                                                     VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), stream_type_name, __VlefCall_2__open_stream);
                this->__PVT__m_streams.at(name).at(stream_type_name) 
                    = __VlefCall_2__open_stream;
            }
            get_tr_stream__Vfuncrtn = this->__PVT__m_streams
                .at(name).at(stream_type_name);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_free_tr_stream(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_stream> stream) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_free_tr_stream\n"); );
            // Body
            CData/*0:0*/ __VlefCall_12__is_open;
            std::string __VlefCall_11__get_name;
            CData/*0:0*/ __VlefExpr_10;
            std::string __VlefCall_9__get_name;
            std::string __VlefCall_8__get_type_name;
            std::string __VlefCall_7__get_name;
            CData/*0:0*/ __VlefExpr_6;
            std::string __VlefCall_5__get_stream_type_name;
            std::string __VlefCall_4__get_name;
            CData/*0:0*/ __VlefExpr_3;
            std::string __VlefCall_2__get_stream_type_name;
            std::string __VlefCall_1__get_name;
            std::string __VlefCall_0__get_name;
            {
                if ((VlNull{} == stream)) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2665)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                __VlefExpr_3 = (! this->__PVT__m_streams.exists(__VlefCall_0__get_name));
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2666)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2666)
                                           ->__VnoInFunc_get_stream_type_name(vlSymsp, __VlefCall_2__get_stream_type_name);
                    __VlefExpr_3 = (! this->__PVT__m_streams
                                    .at(__VlefCall_1__get_name).exists(__VlefCall_2__get_stream_type_name));
                }
                if (__VlefExpr_3) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2670)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2670)
                                           ->__VnoInFunc_get_stream_type_name(vlSymsp, __VlefCall_5__get_stream_type_name);
                __VlefExpr_6 = (this->__PVT__m_streams
                                .at(__VlefCall_4__get_name)
                                .at(__VlefCall_5__get_stream_type_name) 
                                != stream);
                if (__VlefExpr_6) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2674)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2674)
                                           ->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                this->__PVT__m_streams.at(__VlefCall_7__get_name).erase(__VlefCall_8__get_type_name);
                VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2675)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                __VlefExpr_10 = (0U == this->__PVT__m_streams
                                 .at(__VlefCall_9__get_name).size());
                if (__VlefExpr_10) {
                    VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2676)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                    this->__PVT__m_streams.erase(__VlefCall_11__get_name);
                }
                VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2679)
                                           ->__VnoInFunc_is_open(vlSymsp, __VlefCall_12__is_open);
                if ((1U & (~ (IData)(__VlefCall_12__is_open)))) {
                    VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2679)
                                           ->__VnoInFunc_is_closed(vlSymsp, __VlefCall_12__is_open);
                }
                if (__VlefCall_12__is_open) {
                    VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2680)
                                           ->__VnoInFunc_free(vlSymsp);
                }
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &m_begin_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_begin_tr\n"); );
            // Locals
            VlWide<6>/*191:0*/ __Vtemp_1;
            // Body
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCond_7;
            IData/*31:0*/ __VlefCall_6__get_handle;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_related_link> __VlefCall_5__get_link;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_parent_child_link> __VlefCall_4__get_link;
            std::string __VlefCall_3__get_full_name;
            std::string __VlefCall_2__get_name;
            IData/*31:0*/ __VlefCall_1__get_handle;
            IData/*31:0*/ __VlefExpr_0;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> unnamedblk194__DOT__seq;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_base> unnamedblk194__DOT__unnamedblk195__DOT__parent_seq;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_event_> e;
            std::string name;
            std::string kind;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_database> db;
            IData/*31:0*/ handle;
            IData/*31:0*/ link_handle;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_stream> stream;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_recorder> recorder;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_recorder> parent_recorder;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_recorder> link_recorder;
            {
                m_begin_tr__Vfuncrtn = 0;
                name = ""s;
                kind = ""s;
                handle = 0;
                link_handle = 0;
                if ((VlNull{} == tr)) {
                    m_begin_tr__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                this->__VnoInFunc_m_get_tr_database(vlProcess, vlSymsp, db);
                if ((0U != parent_handle)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, parent_handle, parent_recorder);
                }
                if ((VlNull{} == parent_recorder)) {
                    __VlefExpr_0 = VL_CAST_DYNAMIC(tr, unnamedblk194__DOT__seq);
                    if (__VlefExpr_0) {
                        VL_NULL_CHECK(unnamedblk194__DOT__seq, "../../uvm/distrib/src/base/uvm_component.svh", 2712)
                                           ->__VnoInFunc_get_parent_sequence(vlSymsp, unnamedblk194__DOT__unnamedblk195__DOT__parent_seq);
                        if ((VlNull{} != unnamedblk194__DOT__unnamedblk195__DOT__parent_seq)) {
                            parent_recorder = VL_NULL_CHECK(unnamedblk194__DOT__unnamedblk195__DOT__parent_seq, "../../uvm/distrib/src/base/uvm_component.svh", 2714)
                                ->__PVT__m_tr_recorder;
                        }
                    }
                }
                if ((VlNull{} != parent_recorder)) {
                    VL_NULL_CHECK(parent_recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2720)
                                           ->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
                    VL_NULL_CHECK(tr, "../../uvm/distrib/src/base/uvm_component.svh", 2720)
                                           ->__VnoInFunc_begin_child_tr(vlProcess, vlSymsp, begin_time, __VlefCall_1__get_handle, link_handle);
                } else {
                    VL_NULL_CHECK(tr, "../../uvm/distrib/src/base/uvm_component.svh", 2723)
                                           ->__VnoInFunc_begin_tr(vlProcess, vlSymsp, begin_time, link_handle);
                }
                if ((0U != link_handle)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, link_handle, link_recorder);
                }
                VL_NULL_CHECK(tr, "../../uvm/distrib/src/base/uvm_component.svh", 2730)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                if ((""s != __VlefCall_2__get_name)) {
                    VL_NULL_CHECK(tr, "../../uvm/distrib/src/base/uvm_component.svh", 2731)
                                           ->__VnoInFunc_get_name(vlSymsp, name);
                } else {
                    VL_NULL_CHECK(tr, "../../uvm/distrib/src/base/uvm_component.svh", 2733)
                                           ->__VnoInFunc_get_type_name(vlSymsp, name);
                }
                if ((0U != this->__PVT__recording_detail)) {
                    if (((""s == stream_name) | ("main"s 
                                                 == stream_name))) {
                        if ((VlNull{} == this->__PVT__m_main_stream)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                            VL_NULL_CHECK(db, "../../uvm/distrib/src/base/uvm_component.svh", 2738)
                                           ->__VnoInFunc_open_stream(vlProcess, vlSymsp, "main"s, 
                                                                     VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), "TVM"s, this->__PVT__m_main_stream);
                        }
                        stream = this->__PVT__m_main_stream;
                    } else {
                        this->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, stream_name, ""s, stream);
                    }
                    if ((VlNull{} != stream)) {
                        if ((VlNull{} == parent_recorder)) {
                            __Vtemp_1[0U] = 0x4c696e6bU;
                            __Vtemp_1[1U] = 0x6e742c20U;
                            __Vtemp_1[2U] = 0x50617265U;
                            __Vtemp_1[3U] = 0x5f4e6f5fU;
                            __Vtemp_1[4U] = 0x6567696eU;
                            __Vtemp_1[5U] = 0x00000042U;
                        } else {
                            __Vtemp_1[0U] = 0x4c696e6bU;
                            __Vtemp_1[1U] = 0x6e642c20U;
                            __Vtemp_1[2U] = 0x696e5f45U;
                            __Vtemp_1[3U] = 0x00426567U;
                            __Vtemp_1[4U] = 0U;
                            __Vtemp_1[5U] = 0U;
                        }
                        kind = VL_CVT_PACK_STR_NW(6, __Vtemp_1);
                        VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2747)
                                           ->__VnoInFunc_open_recorder(vlProcess, vlSymsp, name, begin_time, kind, recorder);
                        if ((VlNull{} != recorder)) {
                            if ((""s != label)) {
                                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2751)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "label"s, label);
                            }
                            if ((""s != desc)) {
                                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2753)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "desc"s, desc);
                            }
                            if ((VlNull{} != parent_recorder)) {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_parent_child_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, parent_recorder, recorder, "pc_link"s, __VlefCall_4__get_link);
                                VL_NULL_CHECK(this->__PVT__tr_database, "../../uvm/distrib/src/base/uvm_component.svh", 2756)
                                           ->__VnoInFunc_establish_link(vlProcess, vlSymsp, __VlefCall_4__get_link);
                            }
                            if ((VlNull{} != link_recorder)) {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_related_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, recorder, link_recorder, "ce_link"s, __VlefCall_5__get_link);
                                VL_NULL_CHECK(this->__PVT__tr_database, "../../uvm/distrib/src/base/uvm_component.svh", 2761)
                                           ->__VnoInFunc_establish_link(vlProcess, vlSymsp, __VlefCall_5__get_link);
                            }
                            this->__PVT__m_tr_h.at(tr) 
                                = recorder;
                        }
                    }
                    if ((VlNull{} == recorder)) {
                        __VlefCond_7 = 0U;
                    } else {
                        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2768)
                                           ->__VnoInFunc_get_handle(vlSymsp, __VlefCall_6__get_handle);
                        __VlefCond_7 = __VlefCall_6__get_handle;
                    }
                    handle = __VlefCond_7;
                    this->__VnoInFunc_do_begin_tr(vlSymsp, tr, stream_name, handle);
                }
                VL_NULL_CHECK(this->__PVT__event_pool, "../../uvm/distrib/src/base/uvm_component.svh", 2773)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, "begin_tr"s, e);
                if ((VlNull{} != e)) {
                    VL_NULL_CHECK(e, "../../uvm/distrib/src/base/uvm_component.svh", 2775)
                                           ->__VnoInFunc_trigger(vlSymsp, tr);
                }
                m_begin_tr__Vfuncrtn = handle;
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_tr(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ end_time, CData/*0:0*/ free_handle) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_tr\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_0__get_handle;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_event_> e;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_recorder> recorder;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_database> db;
            {
                this->__VnoInFunc_m_get_tr_database(vlProcess, vlSymsp, db);
                if ((VlNull{} == tr)) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(tr, "../../uvm/distrib/src/base/uvm_component.svh", 2795)
                                           ->__VnoInFunc_end_tr(vlProcess, vlSymsp, end_time, (IData)(free_handle));
                if ((0U != this->__PVT__recording_detail)) {
                    if (this->__PVT__m_tr_h.exists(tr)) {
                        recorder = this->__PVT__m_tr_h
                            .at(tr);
                        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2803)
                                           ->__VnoInFunc_get_handle(vlSymsp, __VlefCall_0__get_handle);
                        this->__VnoInFunc_do_end_tr(vlSymsp, tr, __VlefCall_0__get_handle);
                        this->__PVT__m_tr_h.erase(tr);
                        VL_NULL_CHECK(tr, "../../uvm/distrib/src/base/uvm_component.svh", 2807)
                                           ->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
                        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2809)
                                           ->__VnoInFunc_close(vlSymsp, end_time);
                        if (free_handle) {
                            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2812)
                                           ->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
                        }
                    } else {
                        this->__VnoInFunc_do_end_tr(vlSymsp, tr, 0U);
                    }
                }
                VL_NULL_CHECK(this->__PVT__event_pool, "../../uvm/distrib/src/base/uvm_component.svh", 2821)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, "end_tr"s, e);
                if ((VlNull{} != e)) {
                    VL_NULL_CHECK(e, "../../uvm/distrib/src/base/uvm_component.svh", 2823)
                                           ->__VnoInFunc_trigger(vlSymsp, VlNull{});
                }
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_error_tr(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ error_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_error_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_error_tr\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_0__get_full_name;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_recorder> recorder;
            std::string etype;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_stream> stream;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_database> db;
            IData/*31:0*/ handle;
            record_error_tr__Vfuncrtn = 0;
            etype = ""s;
            this->__VnoInFunc_m_get_tr_database(vlProcess, vlSymsp, db);
            handle = 0;
            etype = ((IData)(keep_active) ? "Error, Link"s
                      : "Error"s);
            if ((0ULL == error_time)) {
                error_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
            }
            if (((""s == stream_name) | ("main"s == stream_name))) {
                if ((VlNull{} == this->__PVT__m_main_stream)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                    VL_NULL_CHECK(this->__PVT__tr_database, "../../uvm/distrib/src/base/uvm_component.svh", 2850)
                                           ->__VnoInFunc_open_stream(vlProcess, vlSymsp, "main"s, 
                                                                     VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "TVM"s, this->__PVT__m_main_stream);
                }
                stream = this->__PVT__m_main_stream;
            } else {
                this->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, stream_name, ""s, stream);
            }
            handle = 0U;
            if ((VlNull{} != stream)) {
                VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2859)
                                           ->__VnoInFunc_open_recorder(vlProcess, vlSymsp, label, error_time, etype, recorder);
                if ((VlNull{} != recorder)) {
                    if ((""s != label)) {
                        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2865)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "label"s, label);
                    }
                    if ((""s != desc)) {
                        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2867)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "desc"s, desc);
                    }
                    if ((VlNull{} != info)) {
                        VL_NULL_CHECK(info, "../../uvm/distrib/src/base/uvm_component.svh", 2869)
                                           ->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
                    }
                    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2871)
                                           ->__VnoInFunc_close(vlSymsp, error_time);
                    if (keep_active) {
                        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2877)
                                           ->__VnoInFunc_get_handle(vlSymsp, handle);
                    } else {
                        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2874)
                                           ->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
                    }
                }
            }
            record_error_tr__Vfuncrtn = handle;
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_event_tr(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ event_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_event_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_event_tr\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_0__get_full_name;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_recorder> recorder;
            std::string etype;
            IData/*31:0*/ handle;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_stream> stream;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tr_database> db;
            record_event_tr__Vfuncrtn = 0;
            etype = ""s;
            handle = 0;
            this->__VnoInFunc_m_get_tr_database(vlProcess, vlSymsp, db);
            etype = ((IData)(keep_active) ? "Event, Link"s
                      : "Event"s);
            if ((0ULL == event_time)) {
                event_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
            }
            if (((""s == stream_name) | ("main"s == stream_name))) {
                if ((VlNull{} == this->__PVT__m_main_stream)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                    VL_NULL_CHECK(this->__PVT__tr_database, "../../uvm/distrib/src/base/uvm_component.svh", 2908)
                                           ->__VnoInFunc_open_stream(vlProcess, vlSymsp, "main"s, 
                                                                     VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "TVM"s, this->__PVT__m_main_stream);
                }
                stream = this->__PVT__m_main_stream;
            } else {
                this->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, stream_name, ""s, stream);
            }
            handle = 0U;
            if ((VlNull{} != stream)) {
                VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_component.svh", 2916)
                                           ->__VnoInFunc_open_recorder(vlProcess, vlSymsp, label, event_time, etype, recorder);
                if ((VlNull{} != recorder)) {
                    if ((""s != label)) {
                        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2922)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "label"s, label);
                    }
                    if ((""s != desc)) {
                        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2924)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "desc"s, desc);
                    }
                    if ((VlNull{} != info)) {
                        VL_NULL_CHECK(info, "../../uvm/distrib/src/base/uvm_component.svh", 2926)
                                           ->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
                    }
                    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2928)
                                           ->__VnoInFunc_close(vlSymsp, event_time);
                    if (keep_active) {
                        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2934)
                                           ->__VnoInFunc_get_handle(vlSymsp, handle);
                    } else {
                        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_component.svh", 2931)
                                           ->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
                    }
                }
            }
            record_event_tr__Vfuncrtn = handle;
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_accept_tr(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_transaction> tr) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_accept_tr\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_begin_tr(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, IData/*31:0*/ tr_handle) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_begin_tr\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_end_tr(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ tr_handle) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_end_tr\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_massage_scope(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string scope, std::string &massage_scope__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_massage_scope\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_2__get_full_name;
            std::string __VlefCall_1__get_full_name;
            std::string __VlefCall_0__get_full_name;
            {
                massage_scope__Vfuncrtn = ""s;
                if ((""s == scope)) {
                    massage_scope__Vfuncrtn = "^$"s;
                    goto __Vlabel0;
                }
                if (("*"s == scope)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                    massage_scope__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_0__get_full_name, ".*"s);
                    goto __Vlabel0;
                }
                if (("uvm_test_top"s == scope)) {
                    massage_scope__Vfuncrtn = "uvm_test_top"s;
                    goto __Vlabel0;
                }
                if ((0x2eU == VL_GETC_N(scope,0U))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                    massage_scope__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_1__get_full_name, scope);
                    goto __Vlabel0;
                }
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                massage_scope__Vfuncrtn = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(__VlefCall_2__get_full_name, "."s), scope);
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_int(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, VlWide<128>/*4095:0*/ value) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_int\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned)))) {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM/CFG/SET/DPR"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/CFG/SET/DPR"s, "get/set_config_* API has been deprecated. Use uvm_config_db instead."s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000bc7U, ""s, 1U);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned = 1U;
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz6__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, inst_name, field_name, value);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_string(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, std::string value) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_string\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned)))) {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM/CFG/SET/DPR"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/CFG/SET/DPR"s, "get/set_config_* API has been deprecated. Use uvm_config_db instead."s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000bd5U, ""s, 1U);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned = 1U;
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz12__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, inst_name, field_name, value);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_object(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> value, CData/*0:0*/ clone) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_object\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
            IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
            IData/*31:0*/ __VlefExpr_2;
            IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> unnamedblk196__DOT__comp;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> tmp;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_config_object_wrapper> wrapper;
            {
                if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned)))) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM/CFG/SET/DPR"s, __VlefCall_0__uvm_report_enabled);
                    if ((0U != __VlefCall_0__uvm_report_enabled)) {
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/CFG/SET/DPR"s, "get/set_config_* API has been deprecated. Use uvm_config_db instead."s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000be6U, ""s, 1U);
                    }
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned = 1U;
                }
                if ((VlNull{} == value)) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "NULLCFG"s, __VlefCall_1__uvm_report_enabled);
                    if ((0U != __VlefCall_1__uvm_report_enabled)) {
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NULLCFG"s, 
                                                             VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("A null object was provided as a "s, VL_SFORMATF_N_NX("configuration object for set_config_object(\"%s\",\"%s\")",2
                                                                                , 'S',&(inst_name)
                                                                                , 'S',&(field_name)) ), ". Verify that this is intended."s)), 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000bedU, ""s, 1U);
                    }
                }
                if (((IData)(clone) & (VlNull{} != value))) {
                    VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_component.svh", 3056)
                                           ->__VnoInFunc_clone(vlProcess, vlSymsp, tmp);
                    if ((VlNull{} == tmp)) {
                        __VlefExpr_2 = VL_CAST_DYNAMIC(value, unnamedblk196__DOT__comp);
                        if (__VlefExpr_2) {
                            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "INVCLNC"s, __VlefCall_3__uvm_report_enabled);
                            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "INVCLNC"s, "Clone failed during set_config_object with an object that is a uvm_component. Components cannot be cloned."s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000bf5U, ""s, 1U);
                            }
                            goto __Vlabel0;
                        } else {
                            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVCLN"s, __VlefCall_4__uvm_report_enabled);
                            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVCLN"s, "Clone failed during set_config_object, the original reference will be used for configuration. Check that the create method for the object type is defined properly."s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000bfbU, ""s, 1U);
                            }
                        }
                    } else {
                        value = tmp;
                    }
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz13__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, inst_name, field_name, value);
                wrapper = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_config_object_wrapper, vlSymsp);
                VL_NULL_CHECK(wrapper, "../../uvm/distrib/src/base/uvm_component.svh", 3078)
                                           ->__PVT__obj 
                    = value;
                VL_NULL_CHECK(wrapper, "../../uvm/distrib/src/base/uvm_component.svh", 3079)
                                           ->__PVT__clone 
                    = clone;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz7__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, inst_name, field_name, wrapper);
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_int(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ &value, CData/*0:0*/ &get_config_int__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_int\n"); );
            // Locals
            VlWide<128>/*4095:0*/ __Vfunc_get__251__value;
            VL_ZERO_W(4096, __Vfunc_get__251__value);
            IData/*31:0*/ __Vilp1;
            IData/*31:0*/ __Vilp2;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            get_config_int__Vfuncrtn = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned)))) {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM/CFG/GET/DPR"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/CFG/GET/DPR"s, "get/set_config_* API has been deprecated. Use uvm_config_db instead."s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000c12U, ""s, 1U);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned = 1U;
            }
            __Vilp1 = 0U;
            while ((__Vilp1 <= 0x0000007fU)) {
                __Vfunc_get__251__value[__Vilp1] = value
                    [__Vilp1];
                __Vilp1 = ((IData)(1U) + __Vilp1);
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz6__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, ""s, field_name, __Vfunc_get__251__value, get_config_int__Vfuncrtn);
            __Vilp2 = 0U;
            while ((__Vilp2 <= 0x0000007fU)) {
                value[__Vilp2] = __Vfunc_get__251__value
                    [__Vilp2];
                __Vilp2 = ((IData)(1U) + __Vilp2);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_string(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string field_name, std::string &value, CData/*0:0*/ &get_config_string__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_string\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            get_config_string__Vfuncrtn = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned)))) {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM/CFG/GET/DPR"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/CFG/GET/DPR"s, "get/set_config_* API has been deprecated. Use uvm_config_db instead."s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000c1fU, ""s, 1U);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned = 1U;
            }
            this->__Vfunc_get__254__value = value;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz12__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, ""s, field_name, this->__Vfunc_get__254__value, get_config_string__Vfuncrtn);
            value = this->__Vfunc_get__254__value;
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_object(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string field_name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &value, CData/*0:0*/ clone, CData/*0:0*/ &get_config_object__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_object\n"); );
            // Locals
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> __Vfunc_get__257__value;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            CData/*0:0*/ __VlefCall_1__get;
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            {
                get_config_object__Vfuncrtn = 0U;
                if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned)))) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM/CFG/GET/DPR"s, __VlefCall_0__uvm_report_enabled);
                    if ((0U != __VlefCall_0__uvm_report_enabled)) {
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/CFG/GET/DPR"s, "get/set_config_* API has been deprecated. Use uvm_config_db instead."s, 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000c2eU, ""s, 1U);
                    }
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_config_deprecated_warned = 1U;
                }
                __Vfunc_get__257__value = value;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz13__Vclpkg.__VnoInFunc_get(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, ""s, field_name, __Vfunc_get__257__value, __VlefCall_1__get);
                value = __Vfunc_get__257__value;
                if ((1U & (~ (IData)(__VlefCall_1__get)))) {
                    get_config_object__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                if (((IData)(clone) & (VlNull{} != value))) {
                    VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_component.svh", 3127)
                                           ->__VnoInFunc_clone(vlProcess, vlSymsp, value);
                }
                get_config_object__Vfuncrtn = 1U;
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_config_usage(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ recurse) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_config_usage\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ __VlefCall_0__size;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_pool> rp;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz8> rq;
            {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
                VL_NULL_CHECK(rp, "../../uvm/distrib/src/base/uvm_component.svh", 3141)
                                           ->__VnoInFunc_find_unused_resources(vlSymsp, rq);
                VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_component.svh", 3143)
                                           ->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
                if ((0U == __VlefCall_0__size)) {
                    goto __Vlabel0;
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGNRD"s, " ::: The following resources have at least one write and no reads :::"s, 0U, ""s, 0U, ""s, 0U);
                VL_NULL_CHECK(rp, "../../uvm/distrib/src/base/uvm_component.svh", 3147)
                                           ->__VnoInFunc_print_resources(vlSymsp, rq, 1U);
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ verbose) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings\n"); );
            // Locals
            VlWide<128>/*4095:0*/ __Vtemp_1;
            VlWide<128>/*4095:0*/ __Vtemp_2;
            VlWide<128>/*4095:0*/ __Vtemp_3;
            VlWide<128>/*4095:0*/ __Vtemp_4;
            IData/*31:0*/ __Vilp1;
            IData/*31:0*/ __Vilp2;
            // Body
            VlProcess::currentp(vlProcess.get());
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> __VlefCall_16__read;
            IData/*31:0*/ __VlefExpr_15;
            IData/*31:0*/ __VlefExpr_14;
            std::string __VlefCall_13__read;
            IData/*31:0*/ __VlefExpr_12;
            CData/*0:0*/ __VlefCall_11__read;
            IData/*31:0*/ __VlefExpr_10;
            IData/*31:0*/ __VlefCall_9__read;
            IData/*31:0*/ __VlefExpr_8;
            IData/*31:0*/ __VlefCall_7__read;
            IData/*31:0*/ __VlefExpr_6;
            VlWide<128>/*4095:0*/ __VlefCall_5__read;
            IData/*31:0*/ __VlefExpr_4;
            QData/*63:0*/ __VlefCall_3__read;
            IData/*31:0*/ __VlefExpr_2;
            IData/*31:0*/ __VlefCall_1__size;
            std::string __VlefCall_0__get_full_name;
            IData/*31:0*/ unnamedblk197__DOT__i;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz9> unnamedblk197__DOT__unnamedblk198__DOT__rit;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz6> unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__rbs;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_> unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__ri;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz10> unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__riu;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz11> unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__rap;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz12> unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__rs;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7> unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__unnamedblk204__DOT__rcow;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_config_object_wrapper> unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__unnamedblk204__DOT__unnamedblk205__DOT__cow;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz13> unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__unnamedblk204__DOT__unnamedblk206__DOT__ro;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_pool> rp;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz8> rq;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_base> r;
            std::string name;
            std::string search_name;
            IData/*31:0*/ j;
            {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
                name = ""s;
                search_name = ""s;
                j = 0U;
                this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020003U, ""s);
                if ((0U == vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__field_array.size())) {
                    goto __Vlabel0;
                }
                if (verbose) {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, "applying configuration settings"s, 0U, ""s, 0U, ""s, 0U);
                }
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                VL_NULL_CHECK(rp, "../../uvm/distrib/src/base/uvm_component.svh", 3183)
                                           ->__VnoInFunc_lookup_scope(vlProcess, vlSymsp, 
                                                                      VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rq);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
                unnamedblk197__DOT__i = 0U;
                VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_component.svh", 3188)
                                           ->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
                unnamedblk197__DOT__i = (__VlefCall_1__size 
                                         - (IData)(1U));
                while (VL_LTES_III(32, 0U, unnamedblk197__DOT__i)) {
                    {
                        VL_NULL_CHECK(rq, "../../uvm/distrib/src/base/uvm_component.svh", 3190)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk197__DOT__i, r);
                        VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_component.svh", 3191)
                                           ->__VnoInFunc_get_name(vlSymsp, name);
                        j = 0U;
                        {
                            while ((j < VL_LEN_IN(name))) {
                                if (((0x5bU == VL_GETC_N(name,j)) 
                                     | (0x2eU == VL_GETC_N(name,j)))) {
                                    goto __Vlabel2;
                                }
                                j = ((IData)(1U) + j);
                            }
                            __Vlabel2: ;
                        }
                        search_name = ((j < VL_LEN_IN(name))
                                        ? VL_SUBSTR_N(name,0U,
                                                      (j 
                                                       - (IData)(1U)))
                                        : name);
                        if (((! vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__field_array.exists(search_name)) 
                             & ("recording_detail"s 
                                != search_name))) {
                            goto __Vlabel1;
                        }
                        if (verbose) {
                            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("applying configuration to field %s",1
                                                                                , 'S',&(name)) , 0U, ""s, 0U, ""s, 0U);
                        }
                        __VlefExpr_2 = VL_CAST_DYNAMIC(r, unnamedblk197__DOT__unnamedblk198__DOT__rit);
                        if (__VlefExpr_2) {
                            VL_NULL_CHECK(unnamedblk197__DOT__unnamedblk198__DOT__rit, "../../uvm/distrib/src/base/uvm_component.svh", 3215)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_3__read);
                            VL_EXTENDS_WQ(4096,64, __Vtemp_1, __VlefCall_3__read);
                            this->__VnoInFunc_set_int_local(vlProcess, vlSymsp, name, __Vtemp_1, 1U);
                        } else {
                            __VlefExpr_4 = VL_CAST_DYNAMIC(r, unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__rbs);
                            if (__VlefExpr_4) {
                                VL_NULL_CHECK(unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__rbs, "../../uvm/distrib/src/base/uvm_component.svh", 3219)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_5__read);
                                this->__VnoInFunc_set_int_local(vlProcess, vlSymsp, name, __VlefCall_5__read, 1U);
                            } else {
                                __VlefExpr_6 = VL_CAST_DYNAMIC(r, unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__ri);
                                if (__VlefExpr_6) {
                                    VL_NULL_CHECK(unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__ri, "../../uvm/distrib/src/base/uvm_component.svh", 3223)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_7__read);
                                    VL_EXTENDS_WI(4096,32, __Vtemp_2, __VlefCall_7__read);
                                    this->__VnoInFunc_set_int_local(vlProcess, vlSymsp, name, __Vtemp_2, 1U);
                                } else {
                                    __VlefExpr_8 = 
                                        VL_CAST_DYNAMIC(r, unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__riu);
                                    if (__VlefExpr_8) {
                                        VL_NULL_CHECK(unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__riu, "../../uvm/distrib/src/base/uvm_component.svh", 3227)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_9__read);
                                        __Vtemp_3[0U] 
                                            = __VlefCall_9__read;
                                        __Vilp1 = 1U;
                                        while ((__Vilp1 
                                                <= 0x0000007fU)) {
                                            __Vtemp_3
                                           [__Vilp1] = 0U;
                                            __Vilp1 
                                                = ((IData)(1U) 
                                                   + __Vilp1);
                                        }
                                        this->__VnoInFunc_set_int_local(vlProcess, vlSymsp, name, __Vtemp_3, 1U);
                                    } else {
                                        __VlefExpr_10 
                                            = VL_CAST_DYNAMIC(r, unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__rap);
                                        if (__VlefExpr_10) {
                                            VL_NULL_CHECK(unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__rap, "../../uvm/distrib/src/base/uvm_component.svh", 3231)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_11__read);
                                            __Vtemp_4[0U] 
                                                = __VlefCall_11__read;
                                            __Vilp2 = 1U;
                                            while (
                                                   (__Vilp2 
                                                    <= 0x0000007fU)) {
                                                __Vtemp_4
                                           [__Vilp2] = 0U;
                                                __Vilp2 
                                                    = 
                                                    ((IData)(1U) 
                                                     + __Vilp2);
                                            }
                                            this->__VnoInFunc_set_int_local(vlProcess, vlSymsp, name, __Vtemp_4, 1U);
                                        } else {
                                            __VlefExpr_12 
                                                = VL_CAST_DYNAMIC(r, unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__rs);
                                            if (__VlefExpr_12) {
                                                VL_NULL_CHECK(unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__rs, "../../uvm/distrib/src/base/uvm_component.svh", 3235)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_13__read);
                                                this->__VnoInFunc_set_string_local(vlProcess, vlSymsp, name, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_13__read), 1U);
                                            } else {
                                                __VlefExpr_14 
                                                    = 
                                                    VL_CAST_DYNAMIC(r, unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__unnamedblk204__DOT__rcow);
                                                if (__VlefExpr_14) {
                                                    VL_NULL_CHECK(unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__unnamedblk204__DOT__rcow, "../../uvm/distrib/src/base/uvm_component.svh", 3239)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, VlNull{}, unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__unnamedblk204__DOT__unnamedblk205__DOT__cow);
                                                    this->__VnoInFunc_set_object_local(vlProcess, vlSymsp, name, VL_NULL_CHECK(unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__unnamedblk204__DOT__unnamedblk205__DOT__cow, "../../uvm/distrib/src/base/uvm_component.svh", 3240)
                                                                                ->__PVT__obj, VL_NULL_CHECK(unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__unnamedblk204__DOT__unnamedblk205__DOT__cow, "../../uvm/distrib/src/base/uvm_component.svh", 3240)
                                                                                ->__PVT__clone, 1U);
                                                } else {
                                                    __VlefExpr_15 
                                                        = 
                                                        VL_CAST_DYNAMIC(r, unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__unnamedblk204__DOT__unnamedblk206__DOT__ro);
                                                    if (__VlefExpr_15) {
                                                        VL_NULL_CHECK(unnamedblk197__DOT__unnamedblk198__DOT__unnamedblk199__DOT__unnamedblk200__DOT__unnamedblk201__DOT__unnamedblk202__DOT__unnamedblk203__DOT__unnamedblk204__DOT__unnamedblk206__DOT__ro, "../../uvm/distrib/src/base/uvm_component.svh", 3245)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_16__read);
                                                        this->__VnoInFunc_set_object_local(vlProcess, vlSymsp, name, __VlefCall_16__read, 0U, 1U);
                                                    } else if (verbose) {
                                                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("field %s has an unsupported type",1
                                                                                , 'S',&(name)) , 0U, ""s, 0U, ""s, 0U);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        __Vlabel1: ;
                    }
                    unnamedblk197__DOT__i = (unnamedblk197__DOT__i 
                                             - (IData)(1U));
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__field_array.clear();
                __Vlabel0: ;
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ recurse, CData/*0:0*/ audit) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz8> __VlefCall_1__lookup_scope;
            std::string __VlefCall_0__get_full_name;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> unnamedblk207__DOT__c;
            std::string unnamedblk207__DOT__unnamedblk208__DOT__name;
            std::string unnamedblk207__DOT__unnamedblk208__DOT__name__Vnext;
            CData/*0:0*/ unnamedblk207__DOT__unnamedblk208__DOT__name__Vmore;
            unnamedblk207__DOT__unnamedblk208__DOT__name__Vmore = 0;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_pool> rp;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGPRT"s, "visible resources:"s, 0U, ""s, 0U, ""s, 0U);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            VL_NULL_CHECK(rp, "../../uvm/distrib/src/base/uvm_component.svh", 3273)
                                           ->__VnoInFunc_lookup_scope(vlProcess, vlSymsp, 
                                                                      VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), __VlefCall_1__lookup_scope);
            VL_NULL_CHECK(rp, "../../uvm/distrib/src/base/uvm_component.svh", 3273)
                                           ->__VnoInFunc_print_resources(vlSymsp, __VlefCall_1__lookup_scope, audit);
            if (recurse) {
                unnamedblk207__DOT__unnamedblk208__DOT__name__Vmore 
                    = (0U != this->__PVT__m_children.first(unnamedblk207__DOT__unnamedblk208__DOT__name__Vnext));
                while (unnamedblk207__DOT__unnamedblk208__DOT__name__Vmore) {
                    unnamedblk207__DOT__unnamedblk208__DOT__name 
                        = unnamedblk207__DOT__unnamedblk208__DOT__name__Vnext;
                    unnamedblk207__DOT__unnamedblk208__DOT__name__Vmore 
                        = (0U != this->__PVT__m_children.next(unnamedblk207__DOT__unnamedblk208__DOT__name__Vnext));
                    unnamedblk207__DOT__c = this->__PVT__m_children
                        .at(unnamedblk207__DOT__unnamedblk208__DOT__name);
                    VL_NULL_CHECK(unnamedblk207__DOT__c, "../../uvm/distrib/src/base/uvm_component.svh", 3279)
                                           ->__VnoInFunc_print_config(vlSymsp, recurse, (IData)(audit));
                }
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_settings(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string field, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> comp, CData/*0:0*/ recurse) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_settings\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__print_config_settings__Vstatic__have_been_warned)))) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "deprecated"s, "uvm_component::print_config_settings has been deprecated.  Use print_config() instead"s, 0x000000c8U, ""s, 0U, ""s, 0U);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__print_config_settings__Vstatic__have_been_warned = 1U;
            }
            this->__VnoInFunc_print_config(vlSymsp, recurse, 1U);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_with_audit(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ recurse) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_with_audit\n"); );
            // Body
            this->__VnoInFunc_print_config(vlSymsp, recurse, 1U);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer> printer) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            Vhello_uvm_v1_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
            if ((0U != this->__PVT__recording_detail)) {
                if ((0x00000064U == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_component.svh", 3320)
                                           ->__VnoInFunc_print_generic(vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_LOW"s, 0x2eU);
                } else if ((0x000000c8U == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_component.svh", 3322)
                                           ->__VnoInFunc_print_generic(vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_MEDIUM"s, 0x2eU);
                } else if ((0x0000012cU == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_component.svh", 3324)
                                           ->__VnoInFunc_print_generic(vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_HIGH"s, 0x2eU);
                } else if ((0x00000190U == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_component.svh", 3326)
                                           ->__VnoInFunc_print_generic(vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_FULL"s, 0x2eU);
                } else {
                    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_component.svh", 3328)
                                           ->__VnoInFunc_print_field_int(vlSymsp, "recording_detail"s, (QData)((IData)(this->__PVT__recording_detail)), 0x00000020U, 0x02000000U, 0x2eU, "integral"s);
                }
            }
            if ((0U != this->__PVT__enable_stop_interrupt)) {
                VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_component.svh", 3334)
                                           ->__VnoInFunc_print_field_int(vlSymsp, "enable_stop_interrupt"s, 
                                                                         VL_EXTENDS_QI(64,32, this->__PVT__enable_stop_interrupt), 0x00000020U, 0x01000000U, 0x2eU, "bit"s);
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_int_local(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ value, CData/*0:0*/ recurse) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_int_local\n"); );
            // Locals
            IData/*31:0*/ __Vfunc_uvm_is_match__308____VlefCall_0__uvm_re_match;
            __Vfunc_uvm_is_match__308____VlefCall_0__uvm_re_match = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__310__Vfuncout;
            __Vfunc_uvm_re_match__310__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__310____Vincrement1;
            __Vfunc_uvm_re_match__310____Vincrement1 = 0;
            // Body
            VlProcess::currentp(vlProcess.get());
            CData/*0:0*/ __VlefCall_0__uvm_is_match;
            Vhello_uvm_v1_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_int_local(vlProcess, vlSymsp, field_name, value, (IData)(recurse));
            this->__Vfunc_uvm_is_match__308__str = "recording_detail"s;
            this->__Vfunc_uvm_is_match__308__expr = field_name;
            this->__Vfunc_uvm_glob_to_re__309__glob 
                = this->__Vfunc_uvm_is_match__308__expr;
            this->__Vfunc_uvm_glob_to_re__309__Vfuncout 
                = this->__Vfunc_uvm_glob_to_re__309__glob;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                = this->__Vfunc_uvm_glob_to_re__309__Vfuncout;
            this->__Vfunc_uvm_re_match__310__str = this->__Vfunc_uvm_is_match__308__str;
            this->__Vfunc_uvm_re_match__310__re = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
            __Vfunc_uvm_re_match__310____Vincrement1 = 0U;
            {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__310__re))) {
                    __Vfunc_uvm_re_match__310__Vfuncout = 0U;
                    goto __Vlabel0;
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__310__re,0U))) {
                    this->__Vfunc_uvm_re_match__310__re 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__310__re,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__310__re) 
                                       - (IData)(1U)));
                }
                while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__310__str)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__310__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__310__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__310__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__310__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __Vfunc_uvm_re_match__310__Vfuncout = 1U;
                        goto __Vlabel0;
                    }
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                }
                while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__310__str))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__310__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__310__re))) {
                            __Vfunc_uvm_re_match__310__Vfuncout = 0U;
                            goto __Vlabel0;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__310__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__310__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__310__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                        __Vfunc_uvm_re_match__310____Vincrement1 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = __Vfunc_uvm_re_match__310____Vincrement1;
                    }
                }
                while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__310__re)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__310__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                }
                __Vfunc_uvm_re_match__310__Vfuncout 
                    = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        == VL_LEN_IN(this->__Vfunc_uvm_re_match__310__re))
                        ? 0U : 1U);
                __Vlabel0: ;
            }
            __Vfunc_uvm_is_match__308____VlefCall_0__uvm_re_match 
                = __Vfunc_uvm_re_match__310__Vfuncout;
            __VlefCall_0__uvm_is_match = (0U == __Vfunc_uvm_is_match__308____VlefCall_0__uvm_re_match);
            if (__VlefCall_0__uvm_is_match) {
                this->__PVT__recording_detail = value[0U];
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_msg_args(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_msg_args\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            this->__VnoInFunc_m_set_cl_verb(vlProcess, vlSymsp);
            this->__VnoInFunc_m_set_cl_action(vlProcess, vlSymsp);
            this->__VnoInFunc_m_set_cl_sev(vlProcess, vlSymsp);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__317__Vfuncout;
            __Vtask_get_arg_values__317__Vfuncout = 0;
            CData/*7:0*/ __Vtask_uvm_split_string__318__sep;
            __Vtask_uvm_split_string__318__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__318__s;
            __Vtask_uvm_split_string__318__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__318__e;
            __Vtask_uvm_split_string__318__e = 0;
            IData/*31:0*/ __Vtask_m_convert_verb__319__verb_enum;
            __Vtask_m_convert_verb__319__verb_enum = 0;
            CData/*0:0*/ __Vtask_m_convert_verb__320__Vfuncout;
            __Vtask_m_convert_verb__320__Vfuncout = 0;
            IData/*31:0*/ __Vtask_m_convert_verb__320__verb_enum;
            __Vtask_m_convert_verb__320__verb_enum = 0;
            IData/*31:0*/ __Vfunc_uvm_is_match__322____VlefCall_0__uvm_re_match;
            __Vfunc_uvm_is_match__322____VlefCall_0__uvm_re_match = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__324__Vfuncout;
            __Vfunc_uvm_re_match__324__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__324____Vincrement1;
            __Vfunc_uvm_re_match__324____Vincrement1 = 0;
            // Body
            VlProcess::currentp(vlProcess.get());
            CData/*0:0*/ __VlefCall_3__uvm_is_match;
            std::string __VlefCall_2__get_full_name;
            CData/*0:0*/ __VlefLogOr_1;
            CData/*0:0*/ __VlefCall_0__m_convert_verb;
            IData/*31:0*/ unnamedblk209__DOT__i;
            unnamedblk209__DOT__i = 0;
            IData/*31:0*/ unnamedblk209__DOT__i__Vloopsize;
            unnamedblk209__DOT__i__Vloopsize = 0;
            Vhello_uvm_v1_m_verbosity_setting__struct__0 unnamedblk209__DOT__unnamedblk210__DOT__setting;
            VlQueue<std::string> args;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_cmdline_processor> clp;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> top;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
            args.clear();
            args.atDefault().clear();
            vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
            VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_component.svh", 3387)
                                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
            if ((1U & (~ (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size())))) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_cmdline_proc, "../../uvm/distrib/src/base/uvm_component.svh", 3390)
                                           ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_verbosity="s, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values, __Vtask_get_arg_values__317__Vfuncout);
            }
            unnamedblk209__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk209__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size())) {
                unnamedblk209__DOT__i__Vloopsize = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size();
                unnamedblk209__DOT__unnamedblk210__DOT__setting.__PVT__comp.clear();
                unnamedblk209__DOT__unnamedblk210__DOT__setting.__PVT__phase.clear();
                unnamedblk209__DOT__unnamedblk210__DOT__setting.__PVT__offset = 0;
                unnamedblk209__DOT__unnamedblk210__DOT__setting.__PVT__verbosity = 0;
                unnamedblk209__DOT__unnamedblk210__DOT__setting.__PVT__id.clear();
                args.clear();
                __Vtask_uvm_split_string__318__sep = 0x2cU;
                this->__Vtask_uvm_split_string__318__str 
                    = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.at(unnamedblk209__DOT__i));
                __Vtask_uvm_split_string__318__s = 0U;
                __Vtask_uvm_split_string__318__e = 0U;
                args.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__318__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__318__str))) {
                    __Vtask_uvm_split_string__318__s 
                        = __Vtask_uvm_split_string__318__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__318__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__318__str))) {
                            if ((VL_GETC_N(this->__Vtask_uvm_split_string__318__str,__Vtask_uvm_split_string__318__e) 
                                 == (IData)(__Vtask_uvm_split_string__318__sep))) {
                                goto __Vlabel0;
                            }
                            __Vtask_uvm_split_string__318__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__318__e);
                        }
                        __Vlabel0: ;
                    }
                    if ((__Vtask_uvm_split_string__318__s 
                         != __Vtask_uvm_split_string__318__e)) {
                        args.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__318__str,__Vtask_uvm_split_string__318__s,
                                                   (__Vtask_uvm_split_string__318__e 
                                                    - (IData)(1U))));
                    }
                    __Vtask_uvm_split_string__318__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__318__e);
                }
                __VlefLogOr_1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__first;
                if (__VlefLogOr_1) {
                    __VlefLogOr_1 = ((4U != args.size()) 
                                     & (5U != args.size()));
                    if ((1U & (~ (IData)(__VlefLogOr_1)))) {
                        VL_NULL_CHECK(clp, "../../uvm/distrib/src/base/uvm_component.svh", 3399)
                                           ->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                        VL_CVT_PACK_STR_NN(args.at(2U)), __Vtask_m_convert_verb__319__verb_enum, __VlefCall_0__m_convert_verb);
                        unnamedblk209__DOT__unnamedblk210__DOT__setting
                                           .__PVT__verbosity 
                            = __Vtask_m_convert_verb__319__verb_enum;
                        __VlefLogOr_1 = (1U & (~ (IData)(__VlefCall_0__m_convert_verb)));
                    }
                }
                if (__VlefLogOr_1) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.erase(unnamedblk209__DOT__i);
                } else {
                    unnamedblk209__DOT__unnamedblk210__DOT__setting
                                           .__PVT__comp 
                        = args.at(0U);
                    unnamedblk209__DOT__unnamedblk210__DOT__setting
                                           .__PVT__id 
                        = args.at(1U);
                    VL_NULL_CHECK(clp, "../../uvm/distrib/src/base/uvm_component.svh", 3406)
                                           ->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                        VL_CVT_PACK_STR_NN(args.at(2U)), __Vtask_m_convert_verb__320__verb_enum, __Vtask_m_convert_verb__320__Vfuncout);
                    unnamedblk209__DOT__unnamedblk210__DOT__setting
                                           .__PVT__verbosity 
                        = __Vtask_m_convert_verb__320__verb_enum;
                    unnamedblk209__DOT__unnamedblk210__DOT__setting
                                           .__PVT__phase 
                        = args.at(3U);
                    unnamedblk209__DOT__unnamedblk210__DOT__setting
                                           .__PVT__offset = 0ULL;
                    if ((5U == args.size())) {
                        unnamedblk209__DOT__unnamedblk210__DOT__setting
                                           .__PVT__offset 
                            = VL_EXTENDS_QI(64,32, 
                                            VL_ATOI_N(args.at(4U), 10));
                    }
                    if ((("time"s == unnamedblk209__DOT__unnamedblk210__DOT__setting
                          .__PVT__phase) & (VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this} 
                                            == top))) {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.push_back(unnamedblk209__DOT__unnamedblk210__DOT__setting);
                    }
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                    this->__Vfunc_uvm_is_match__322__str 
                        = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
                    this->__Vfunc_uvm_is_match__322__expr 
                        = VL_CVT_PACK_STR_NN(unnamedblk209__DOT__unnamedblk210__DOT__setting
                                             .__PVT__comp);
                    this->__Vfunc_uvm_glob_to_re__323__glob 
                        = this->__Vfunc_uvm_is_match__322__expr;
                    this->__Vfunc_uvm_glob_to_re__323__Vfuncout 
                        = this->__Vfunc_uvm_glob_to_re__323__glob;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = this->__Vfunc_uvm_glob_to_re__323__Vfuncout;
                    this->__Vfunc_uvm_re_match__324__str 
                        = this->__Vfunc_uvm_is_match__322__str;
                    this->__Vfunc_uvm_re_match__324__re 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                    __Vfunc_uvm_re_match__324____Vincrement1 = 0U;
                    {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__324__re))) {
                            __Vfunc_uvm_re_match__324__Vfuncout = 0U;
                            goto __Vlabel1;
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__324__re,0U))) {
                            this->__Vfunc_uvm_re_match__324__re 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__324__re,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__324__re) 
                                               - (IData)(1U)));
                        }
                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__324__str)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__324__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__324__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__324__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__324__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__324__Vfuncout = 1U;
                                goto __Vlabel1;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        }
                        while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__324__str))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__324__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__324__re))) {
                                    __Vfunc_uvm_re_match__324__Vfuncout = 0U;
                                    goto __Vlabel1;
                                }
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__324__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                         == VL_GETC_N(this->__Vfunc_uvm_re_match__324__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                        | (0x3fU == 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__324__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                __Vfunc_uvm_re_match__324____Vincrement1 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match__324____Vincrement1;
                            }
                        }
                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__324__re)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__324__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        }
                        __Vfunc_uvm_re_match__324__Vfuncout 
                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__324__re))
                                ? 0U : 1U);
                        __Vlabel1: ;
                    }
                    __Vfunc_uvm_is_match__322____VlefCall_0__uvm_re_match 
                        = __Vfunc_uvm_re_match__324__Vfuncout;
                    __VlefCall_3__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match__322____VlefCall_0__uvm_re_match);
                    if (__VlefCall_3__uvm_is_match) {
                        if (((((""s == unnamedblk209__DOT__unnamedblk210__DOT__setting
                                .__PVT__phase) | ("build"s 
                                                  == unnamedblk209__DOT__unnamedblk210__DOT__setting
                                                  .__PVT__phase)) 
                              | ("time"s == unnamedblk209__DOT__unnamedblk210__DOT__setting
                                 .__PVT__phase)) & 
                             (0ULL == unnamedblk209__DOT__unnamedblk210__DOT__setting
                              .__PVT__offset))) {
                            if (("_ALL_"s == unnamedblk209__DOT__unnamedblk210__DOT__setting
                                 .__PVT__id)) {
                                this->__VnoInFunc_set_report_verbosity_level(vlSymsp, unnamedblk209__DOT__unnamedblk210__DOT__setting
                                                                             .__PVT__verbosity);
                            } else {
                                this->__VnoInFunc_set_report_id_verbosity(vlSymsp, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk209__DOT__unnamedblk210__DOT__setting
                                                                                .__PVT__id), unnamedblk209__DOT__unnamedblk210__DOT__setting
                                                                          .__PVT__verbosity);
                            }
                        } else if (("time"s != unnamedblk209__DOT__unnamedblk210__DOT__setting
                                    .__PVT__phase)) {
                            this->__PVT__m_verbosity_settings.push_back(unnamedblk209__DOT__unnamedblk210__DOT__setting);
                        }
                    }
                }
                if ((unnamedblk209__DOT__i__Vloopsize 
                     <= vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size())) {
                    unnamedblk209__DOT__i = ((IData)(1U) 
                                             + unnamedblk209__DOT__i);
                }
            }
            if ((VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>{this} 
                 == top)) {
                this->__VnoInFunc_m_set_cl_verb____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, top);
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__first = 0U;
        }

        VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb____Vfork_1__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> top) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb____Vfork_1__0\n"); );
            // Locals
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask___VforkTask_0__327__top;
            IData/*31:0*/ __Vtask___VforkTask_0__327__unnamedblk212__DOT__i;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__i = 0;
            IData/*31:0*/ __Vtask___VforkTask_0__327__unnamedblk212__DOT__i__Vloopsize;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__i__Vloopsize = 0;
            VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>> __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__comps;
            IData/*31:0*/ __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j = 0;
            IData/*31:0*/ __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j__Vloopsize;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j__Vloopsize = 0;
            IData/*31:0*/ __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j = 0;
            IData/*31:0*/ __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j__Vloopsize;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j__Vloopsize = 0;
            QData/*63:0*/ __Vtask___VforkTask_0__327__last_time;
            __Vtask___VforkTask_0__327__last_time = 0;
            // Body
            VlProcess::currentp(vlProcess.get());
            VL_KEEP_THIS;
            __Vtask___VforkTask_0__327__top = top;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__i = 0U;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__i__Vloopsize = 0;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j = 0U;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j__Vloopsize = 0;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j = 0U;
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j__Vloopsize = 0;
            co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                                    vlProcess, 
                                                    "../../uvm/distrib/src/base/uvm_component.svh", 
                                                    3433);
            __Vtask___VforkTask_0__327__last_time = 0ULL;
            if (VL_LTS_III(32, 0U, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size())) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.sort(
                                                                                [&](
                                                                                IData/*31:0*/ item__DOT__index, 
                                                                                Vhello_uvm_v1_m_verbosity_setting__struct__0 item) -> 
                                                                                QData/*63:0*/ {
                        return (item.__PVT__offset);
                    }
                );
            }
            __Vtask___VforkTask_0__327__unnamedblk212__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask___VforkTask_0__327__unnamedblk212__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size())) {
                __Vtask___VforkTask_0__327__unnamedblk212__DOT__i__Vloopsize 
                    = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size();
                __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__comps.clear();
                VL_NULL_CHECK(__Vtask___VforkTask_0__327__top, "../../uvm/distrib/src/base/uvm_component.svh", 3439)
                                           ->__VnoInFunc_find_all(vlProcess, vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__327__unnamedblk212__DOT__i)
                                                                                .__PVT__comp), __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__comps, VlNull{});
                co_await vlSymsp->TOP.__VdlySched.delay(
                                                        (vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__327__unnamedblk212__DOT__i)
                                                         .__PVT__offset 
                                                         - __Vtask___VforkTask_0__327__last_time), 
                                                        vlProcess, 
                                                        "../../uvm/distrib/src/base/uvm_component.svh", 
                                                        3440);
                __Vtask___VforkTask_0__327__last_time 
                    = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__327__unnamedblk212__DOT__i)
                    .__PVT__offset;
                if (("_ALL_"s == vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__327__unnamedblk212__DOT__i)
                     .__PVT__id)) {
                    __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j = 0U;
                    while (VL_LTS_III(32, __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j, __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__comps.size())) {
                        __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j__Vloopsize 
                            = __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__comps.size();
                        VL_NULL_CHECK(__Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__comps.at(__Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j), "../../uvm/distrib/src/base/uvm_component.svh", 3444)
                                           ->__VnoInFunc_set_report_verbosity_level(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__327__unnamedblk212__DOT__i)
                                                                                .__PVT__verbosity);
                        if ((__Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j__Vloopsize 
                             <= __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__comps.size())) {
                            __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j 
                                = ((IData)(1U) + __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT__j);
                        }
                    }
                } else {
                    __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j = 0U;
                    while (VL_LTS_III(32, __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j, __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__comps.size())) {
                        __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j__Vloopsize 
                            = __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__comps.size();
                        VL_NULL_CHECK(__Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__comps.at(__Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j), "../../uvm/distrib/src/base/uvm_component.svh", 3449)
                                           ->__VnoInFunc_set_report_id_verbosity(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__327__unnamedblk212__DOT__i)
                                                                                .__PVT__id), vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__327__unnamedblk212__DOT__i)
                                                                                .__PVT__verbosity);
                        if ((__Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j__Vloopsize 
                             <= __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__comps.size())) {
                            __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j 
                                = ((IData)(1U) + __Vtask___VforkTask_0__327__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk215__DOT__j);
                        }
                    }
                }
                if ((__Vtask___VforkTask_0__327__unnamedblk212__DOT__i__Vloopsize 
                     <= vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size())) {
                    __Vtask___VforkTask_0__327__unnamedblk212__DOT__i 
                        = ((IData)(1U) + __Vtask___VforkTask_0__327__unnamedblk212__DOT__i);
                }
            }
            vlProcess->state(VlProcess::FINISHED);
            co_return;
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_action(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_action\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__331__Vfuncout;
            __Vtask_get_arg_values__331__Vfuncout = 0;
            CData/*7:0*/ __Vtask_uvm_split_string__332__sep;
            __Vtask_uvm_split_string__332__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__332__s;
            __Vtask_uvm_split_string__332__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__332__e;
            __Vtask_uvm_split_string__332__e = 0;
            CData/*1:0*/ __Vfunc_uvm_string_to_severity__335__sev;
            __Vfunc_uvm_string_to_severity__335__sev = 0;
            IData/*31:0*/ __Vfunc_uvm_string_to_action__338__action;
            __Vfunc_uvm_string_to_action__338__action = 0;
            IData/*31:0*/ __Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i;
            __Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i = 0;
            VlQueue<std::string> __Vfunc_uvm_string_to_action__338__actions;
            CData/*7:0*/ __Vtask_uvm_split_string__339__sep;
            __Vtask_uvm_split_string__339__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__339__s;
            __Vtask_uvm_split_string__339__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__339__e;
            __Vtask_uvm_split_string__339__e = 0;
            IData/*31:0*/ __Vfunc_uvm_is_match__343____VlefCall_0__uvm_re_match;
            __Vfunc_uvm_is_match__343____VlefCall_0__uvm_re_match = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__345__Vfuncout;
            __Vfunc_uvm_re_match__345__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__345____Vincrement1;
            __Vfunc_uvm_re_match__345____Vincrement1 = 0;
            CData/*1:0*/ __Vtask_uvm_string_to_severity__346__sev;
            __Vtask_uvm_string_to_severity__346__sev = 0;
            IData/*31:0*/ __Vtask_uvm_string_to_action__347__action;
            __Vtask_uvm_string_to_action__347__action = 0;
            IData/*31:0*/ __Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i;
            __Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i = 0;
            VlQueue<std::string> __Vtask_uvm_string_to_action__347__actions;
            CData/*7:0*/ __Vtask_uvm_split_string__348__sep;
            __Vtask_uvm_split_string__348__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__348__s;
            __Vtask_uvm_split_string__348__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__348__e;
            __Vtask_uvm_split_string__348__e = 0;
            std::string __Vtemp_1;
            std::string __Vtemp_2;
            std::string __Vtemp_3;
            std::string __Vtemp_4;
            std::string __Vtemp_5;
            // Body
            VlProcess::currentp(vlProcess.get());
            CData/*0:0*/ __VlefCall_6__uvm_is_match;
            std::string __VlefCall_5__get_full_name;
            IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
            CData/*0:0*/ __VlefCall_3__uvm_string_to_action;
            IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
            CData/*0:0*/ __VlefCall_1__uvm_string_to_severity;
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            VlQueue<std::string> unnamedblk216__DOT__values;
            IData/*31:0*/ unnamedblk216__DOT__unnamedblk217__DOT__idx;
            unnamedblk216__DOT__unnamedblk217__DOT__idx = 0;
            IData/*31:0*/ unnamedblk216__DOT__unnamedblk217__DOT__idx__Vloopsize;
            unnamedblk216__DOT__unnamedblk217__DOT__idx__Vloopsize = 0;
            Vhello_uvm_v1_uvm_cmdline_parsed_arg_t__struct__0 unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__t;
            VlQueue<std::string> unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args;
            IData/*31:0*/ unnamedblk219__DOT__i;
            unnamedblk219__DOT__i = 0;
            IData/*31:0*/ unnamedblk219__DOT__i__Vloopsize;
            unnamedblk219__DOT__i__Vloopsize = 0;
            VlQueue<std::string> unnamedblk219__DOT__unnamedblk220__DOT__args;
            CData/*1:0*/ sev;
            IData/*31:0*/ action;
            sev = 0U;
            action = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__initialized)))) {
                unnamedblk216__DOT__values.clear();
                unnamedblk216__DOT__values.atDefault().clear();
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_cmdline_proc, "../../uvm/distrib/src/base/uvm_component.svh", 3473)
                                           ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_action="s, unnamedblk216__DOT__values, __Vtask_get_arg_values__331__Vfuncout);
                unnamedblk216__DOT__unnamedblk217__DOT__idx = 0U;
                while (VL_LTS_III(32, unnamedblk216__DOT__unnamedblk217__DOT__idx, unnamedblk216__DOT__values.size())) {
                    unnamedblk216__DOT__unnamedblk217__DOT__idx__Vloopsize 
                        = unnamedblk216__DOT__values.size();
                    {
                        unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__t.__PVT__arg.clear();
                        unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__t.__PVT__args.clear();
                        unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__t.__PVT__args.atDefault().clear();
                        unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__t.__PVT__used = 0;
                        unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args.clear();
                        unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args.atDefault().clear();
                        __Vtask_uvm_split_string__332__sep = 0x2cU;
                        this->__Vtask_uvm_split_string__332__str 
                            = VL_CVT_PACK_STR_NN(unnamedblk216__DOT__values.at(unnamedblk216__DOT__unnamedblk217__DOT__idx));
                        __Vtask_uvm_split_string__332__s = 0U;
                        __Vtask_uvm_split_string__332__e = 0U;
                        unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args.clear();
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__332__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__332__str))) {
                            __Vtask_uvm_split_string__332__s 
                                = __Vtask_uvm_split_string__332__e;
                            {
                                while (VL_LTS_III(32, __Vtask_uvm_split_string__332__e, 
                                                  VL_LEN_IN(this->__Vtask_uvm_split_string__332__str))) {
                                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__332__str,__Vtask_uvm_split_string__332__e) 
                                         == (IData)(__Vtask_uvm_split_string__332__sep))) {
                                        goto __Vlabel1;
                                    }
                                    __Vtask_uvm_split_string__332__e 
                                        = ((IData)(1U) 
                                           + __Vtask_uvm_split_string__332__e);
                                }
                                __Vlabel1: ;
                            }
                            if ((__Vtask_uvm_split_string__332__s 
                                 != __Vtask_uvm_split_string__332__e)) {
                                unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__332__str,__Vtask_uvm_split_string__332__s,
                                                                                (__Vtask_uvm_split_string__332__e 
                                                                                - (IData)(1U))));
                            }
                            __Vtask_uvm_split_string__332__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__332__e);
                        }
                        if ((4U != unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args.size())) {
                            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_0__uvm_report_enabled);
                            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                                __Vtemp_1 = unnamedblk216__DOT__values.at(unnamedblk216__DOT__unnamedblk217__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("+uvm_set_action requires 4 arguments, but %0d given for command +uvm_set_action=%s, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",2
                                                                                , '~',32,unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args.size()
                                                                                , 'S',&(__Vtemp_1)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000d98U, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        this->__Vfunc_uvm_string_to_severity__335__sev_str 
                            = VL_CVT_PACK_STR_NN(unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args.at(2U));
                        {
                            __Vfunc_uvm_string_to_severity__335__sev = 0U;
                            if (("UVM_INFO"s == this->__Vfunc_uvm_string_to_severity__335__sev_str)) {
                                __Vfunc_uvm_string_to_severity__335__sev = 0U;
                            } else if (("UVM_WARNING"s 
                                        == this->__Vfunc_uvm_string_to_severity__335__sev_str)) {
                                __Vfunc_uvm_string_to_severity__335__sev = 1U;
                            } else if (("UVM_ERROR"s 
                                        == this->__Vfunc_uvm_string_to_severity__335__sev_str)) {
                                __Vfunc_uvm_string_to_severity__335__sev = 2U;
                            } else if (("UVM_FATAL"s 
                                        == this->__Vfunc_uvm_string_to_severity__335__sev_str)) {
                                __Vfunc_uvm_string_to_severity__335__sev = 3U;
                            } else {
                                __VlefCall_1__uvm_string_to_severity = 0U;
                                goto __Vlabel2;
                            }
                            __VlefCall_1__uvm_string_to_severity = 1U;
                            __Vlabel2: ;
                        }
                        sev = __Vfunc_uvm_string_to_severity__335__sev;
                        if ((("_ALL_"s != unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args.at(2U)) 
                             & (~ (IData)(__VlefCall_1__uvm_string_to_severity)))) {
                            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_2__uvm_report_enabled);
                            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                                __Vtemp_2 = unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args.at(2U);
                                __Vtemp_3 = unnamedblk216__DOT__values.at(unnamedblk216__DOT__unnamedblk217__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%s\" given to command +uvm_set_action=%s, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",2
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__Vtemp_3)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000d9cU, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        this->__Vfunc_uvm_string_to_action__338__action_str 
                            = VL_CVT_PACK_STR_NN(unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args.at(3U));
                        __Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i = 0U;
                        __VlefCall_3__uvm_string_to_action = 0U;
                        __Vfunc_uvm_string_to_action__338__action = 0U;
                        __Vfunc_uvm_string_to_action__338__actions.clear();
                        __Vfunc_uvm_string_to_action__338__actions.atDefault().clear();
                        __Vtask_uvm_split_string__339__sep = 0x7cU;
                        this->__Vtask_uvm_split_string__339__str 
                            = this->__Vfunc_uvm_string_to_action__338__action_str;
                        __Vtask_uvm_split_string__339__s = 0U;
                        __Vtask_uvm_split_string__339__e = 0U;
                        __Vfunc_uvm_string_to_action__338__actions.clear();
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__339__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__339__str))) {
                            __Vtask_uvm_split_string__339__s 
                                = __Vtask_uvm_split_string__339__e;
                            {
                                while (VL_LTS_III(32, __Vtask_uvm_split_string__339__e, 
                                                  VL_LEN_IN(this->__Vtask_uvm_split_string__339__str))) {
                                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__339__str,__Vtask_uvm_split_string__339__e) 
                                         == (IData)(__Vtask_uvm_split_string__339__sep))) {
                                        goto __Vlabel3;
                                    }
                                    __Vtask_uvm_split_string__339__e 
                                        = ((IData)(1U) 
                                           + __Vtask_uvm_split_string__339__e);
                                }
                                __Vlabel3: ;
                            }
                            if ((__Vtask_uvm_split_string__339__s 
                                 != __Vtask_uvm_split_string__339__e)) {
                                __Vfunc_uvm_string_to_action__338__actions.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__339__str,__Vtask_uvm_split_string__339__s,
                                                                                (__Vtask_uvm_split_string__339__e 
                                                                                - (IData)(1U))));
                            }
                            __Vtask_uvm_split_string__339__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__339__e);
                        }
                        __VlefCall_3__uvm_string_to_action = 1U;
                        __Vfunc_uvm_string_to_action__338__action = 0U;
                        __Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i = 0U;
                        while (VL_LTS_III(32, __Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i, __Vfunc_uvm_string_to_action__338__actions.size())) {
                            if ((((((((("UVM_NO_ACTION"s 
                                        == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i)) 
                                       | ("UVM_DISPLAY"s 
                                          == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))) 
                                      | ("UVM_LOG"s 
                                         == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))) 
                                     | ("UVM_COUNT"s 
                                        == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))) 
                                    | ("UVM_EXIT"s 
                                       == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))) 
                                   | ("UVM_CALL_HOOK"s 
                                      == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))) 
                                  | ("UVM_STOP"s == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))) 
                                 | ("UVM_RM_RECORD"s 
                                    == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i)))) {
                                if ((1U & (~ ("UVM_NO_ACTION"s 
                                              == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))))) {
                                    __Vfunc_uvm_string_to_action__338__action 
                                        = (("UVM_DISPLAY"s 
                                            == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))
                                            ? (1U | __Vfunc_uvm_string_to_action__338__action)
                                            : (("UVM_LOG"s 
                                                == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))
                                                ? (2U 
                                                   | __Vfunc_uvm_string_to_action__338__action)
                                                : (
                                                   ("UVM_COUNT"s 
                                                    == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))
                                                    ? 
                                                   (4U 
                                                    | __Vfunc_uvm_string_to_action__338__action)
                                                    : 
                                                   (("UVM_EXIT"s 
                                                     == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))
                                                     ? 
                                                    (8U 
                                                     | __Vfunc_uvm_string_to_action__338__action)
                                                     : 
                                                    (("UVM_CALL_HOOK"s 
                                                      == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))
                                                      ? 
                                                     (0x00000010U 
                                                      | __Vfunc_uvm_string_to_action__338__action)
                                                      : 
                                                     (("UVM_STOP"s 
                                                       == __Vfunc_uvm_string_to_action__338__actions.at(__Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i))
                                                       ? 
                                                      (0x00000020U 
                                                       | __Vfunc_uvm_string_to_action__338__action)
                                                       : 
                                                      (0x00000040U 
                                                       | __Vfunc_uvm_string_to_action__338__action)))))));
                                }
                            } else {
                                __VlefCall_3__uvm_string_to_action = 0U;
                            }
                            __Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i 
                                = ((IData)(1U) + __Vfunc_uvm_string_to_action__338__unnamedblk230__DOT__i);
                        }
                        action = __Vfunc_uvm_string_to_action__338__action;
                        if ((1U & (~ (IData)(__VlefCall_3__uvm_string_to_action)))) {
                            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_4__uvm_report_enabled);
                            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                                __Vtemp_4 = unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args.at(3U);
                                __Vtemp_5 = unnamedblk216__DOT__values.at(unnamedblk216__DOT__unnamedblk217__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad action argument \"%s\" given to command +uvm_set_action=%s, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",2
                                                                                , 'S',&(__Vtemp_4)
                                                                                , 'S',&(__Vtemp_5)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000da0U, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__t
                                           .__PVT__args 
                            = unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__args;
                        unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__t
                                           .__PVT__arg 
                            = unnamedblk216__DOT__values.at(unnamedblk216__DOT__unnamedblk217__DOT__idx);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.push_back(unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT__t);
                        __Vlabel0: ;
                    }
                    if ((unnamedblk216__DOT__unnamedblk217__DOT__idx__Vloopsize 
                         <= unnamedblk216__DOT__values.size())) {
                        unnamedblk216__DOT__unnamedblk217__DOT__idx 
                            = ((IData)(1U) + unnamedblk216__DOT__unnamedblk217__DOT__idx);
                    }
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__initialized = 1U;
            }
            unnamedblk219__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk219__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.size())) {
                unnamedblk219__DOT__i__Vloopsize = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.size();
                {
                    unnamedblk219__DOT__unnamedblk220__DOT__args 
                        = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk219__DOT__i)
                        .__PVT__args;
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    this->__Vfunc_uvm_is_match__343__str 
                        = VL_CVT_PACK_STR_NN(__VlefCall_5__get_full_name);
                    this->__Vfunc_uvm_is_match__343__expr 
                        = VL_CVT_PACK_STR_NN(unnamedblk219__DOT__unnamedblk220__DOT__args.at(0U));
                    this->__Vfunc_uvm_glob_to_re__344__glob 
                        = this->__Vfunc_uvm_is_match__343__expr;
                    this->__Vfunc_uvm_glob_to_re__344__Vfuncout 
                        = this->__Vfunc_uvm_glob_to_re__344__glob;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = this->__Vfunc_uvm_glob_to_re__344__Vfuncout;
                    this->__Vfunc_uvm_re_match__345__str 
                        = this->__Vfunc_uvm_is_match__343__str;
                    this->__Vfunc_uvm_re_match__345__re 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                    __Vfunc_uvm_re_match__345____Vincrement1 = 0U;
                    {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__345__re))) {
                            __Vfunc_uvm_re_match__345__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__345__re,0U))) {
                            this->__Vfunc_uvm_re_match__345__re 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__345__re,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__345__re) 
                                               - (IData)(1U)));
                        }
                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__345__str)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__345__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__345__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__345__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__345__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__345__Vfuncout = 1U;
                                goto __Vlabel5;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        }
                        while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__345__str))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__345__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__345__re))) {
                                    __Vfunc_uvm_re_match__345__Vfuncout = 0U;
                                    goto __Vlabel5;
                                }
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__345__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                         == VL_GETC_N(this->__Vfunc_uvm_re_match__345__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                        | (0x3fU == 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__345__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                __Vfunc_uvm_re_match__345____Vincrement1 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match__345____Vincrement1;
                            }
                        }
                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__345__re)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__345__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        }
                        __Vfunc_uvm_re_match__345__Vfuncout 
                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__345__re))
                                ? 0U : 1U);
                        __Vlabel5: ;
                    }
                    __Vfunc_uvm_is_match__343____VlefCall_0__uvm_re_match 
                        = __Vfunc_uvm_re_match__345__Vfuncout;
                    __VlefCall_6__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match__343____VlefCall_0__uvm_re_match);
                    if ((1U & (~ (IData)(__VlefCall_6__uvm_is_match)))) {
                        goto __Vlabel4;
                    }
                    this->__Vtask_uvm_string_to_severity__346__sev_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk219__DOT__unnamedblk220__DOT__args.at(2U));
                    __Vtask_uvm_string_to_severity__346__sev = 0U;
                    if (("UVM_INFO"s == this->__Vtask_uvm_string_to_severity__346__sev_str)) {
                        __Vtask_uvm_string_to_severity__346__sev = 0U;
                    } else if (("UVM_WARNING"s == this->__Vtask_uvm_string_to_severity__346__sev_str)) {
                        __Vtask_uvm_string_to_severity__346__sev = 1U;
                    } else if (("UVM_ERROR"s == this->__Vtask_uvm_string_to_severity__346__sev_str)) {
                        __Vtask_uvm_string_to_severity__346__sev = 2U;
                    } else if (("UVM_FATAL"s == this->__Vtask_uvm_string_to_severity__346__sev_str)) {
                        __Vtask_uvm_string_to_severity__346__sev = 3U;
                    }
                    sev = __Vtask_uvm_string_to_severity__346__sev;
                    this->__Vtask_uvm_string_to_action__347__action_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk219__DOT__unnamedblk220__DOT__args.at(3U));
                    __Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i = 0U;
                    __Vtask_uvm_string_to_action__347__action = 0U;
                    __Vtask_uvm_string_to_action__347__actions.clear();
                    __Vtask_uvm_string_to_action__347__actions.atDefault().clear();
                    __Vtask_uvm_split_string__348__sep = 0x7cU;
                    this->__Vtask_uvm_split_string__348__str 
                        = this->__Vtask_uvm_string_to_action__347__action_str;
                    __Vtask_uvm_split_string__348__s = 0U;
                    __Vtask_uvm_split_string__348__e = 0U;
                    __Vtask_uvm_string_to_action__347__actions.clear();
                    while (VL_LTS_III(32, __Vtask_uvm_split_string__348__e, 
                                      VL_LEN_IN(this->__Vtask_uvm_split_string__348__str))) {
                        __Vtask_uvm_split_string__348__s 
                            = __Vtask_uvm_split_string__348__e;
                        {
                            while (VL_LTS_III(32, __Vtask_uvm_split_string__348__e, 
                                              VL_LEN_IN(this->__Vtask_uvm_split_string__348__str))) {
                                if ((VL_GETC_N(this->__Vtask_uvm_split_string__348__str,__Vtask_uvm_split_string__348__e) 
                                     == (IData)(__Vtask_uvm_split_string__348__sep))) {
                                    goto __Vlabel6;
                                }
                                __Vtask_uvm_split_string__348__e 
                                    = ((IData)(1U) 
                                       + __Vtask_uvm_split_string__348__e);
                            }
                            __Vlabel6: ;
                        }
                        if ((__Vtask_uvm_split_string__348__s 
                             != __Vtask_uvm_split_string__348__e)) {
                            __Vtask_uvm_string_to_action__347__actions.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__348__str,__Vtask_uvm_split_string__348__s,
                                                                                (__Vtask_uvm_split_string__348__e 
                                                                                - (IData)(1U))));
                        }
                        __Vtask_uvm_split_string__348__e 
                            = ((IData)(1U) + __Vtask_uvm_split_string__348__e);
                    }
                    __Vtask_uvm_string_to_action__347__action = 0U;
                    __Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i, __Vtask_uvm_string_to_action__347__actions.size())) {
                        if ((((((((("UVM_NO_ACTION"s 
                                    == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i)) 
                                   | ("UVM_DISPLAY"s 
                                      == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))) 
                                  | ("UVM_LOG"s == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))) 
                                 | ("UVM_COUNT"s == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))) 
                                | ("UVM_EXIT"s == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))) 
                               | ("UVM_CALL_HOOK"s 
                                  == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))) 
                              | ("UVM_STOP"s == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))) 
                             | ("UVM_RM_RECORD"s == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i)))) {
                            if ((1U & (~ ("UVM_NO_ACTION"s 
                                          == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))))) {
                                __Vtask_uvm_string_to_action__347__action 
                                    = (("UVM_DISPLAY"s 
                                        == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))
                                        ? (1U | __Vtask_uvm_string_to_action__347__action)
                                        : (("UVM_LOG"s 
                                            == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))
                                            ? (2U | __Vtask_uvm_string_to_action__347__action)
                                            : (("UVM_COUNT"s 
                                                == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))
                                                ? (4U 
                                                   | __Vtask_uvm_string_to_action__347__action)
                                                : (
                                                   ("UVM_EXIT"s 
                                                    == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))
                                                    ? 
                                                   (8U 
                                                    | __Vtask_uvm_string_to_action__347__action)
                                                    : 
                                                   (("UVM_CALL_HOOK"s 
                                                     == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))
                                                     ? 
                                                    (0x00000010U 
                                                     | __Vtask_uvm_string_to_action__347__action)
                                                     : 
                                                    (("UVM_STOP"s 
                                                      == __Vtask_uvm_string_to_action__347__actions.at(__Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i))
                                                      ? 
                                                     (0x00000020U 
                                                      | __Vtask_uvm_string_to_action__347__action)
                                                      : 
                                                     (0x00000040U 
                                                      | __Vtask_uvm_string_to_action__347__action)))))));
                            }
                        }
                        __Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i 
                            = ((IData)(1U) + __Vtask_uvm_string_to_action__347__unnamedblk230__DOT__i);
                    }
                    action = __Vtask_uvm_string_to_action__347__action;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.atWriteAppend(unnamedblk219__DOT__i)
                                           .__PVT__used 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk219__DOT__i)
                           .__PVT__used);
                    if (("_ALL_"s == unnamedblk219__DOT__unnamedblk220__DOT__args.at(1U))) {
                        if (("_ALL_"s == unnamedblk219__DOT__unnamedblk220__DOT__args.at(2U))) {
                            this->__VnoInFunc_set_report_severity_action(vlSymsp, 0U, action);
                            this->__VnoInFunc_set_report_severity_action(vlSymsp, 1U, action);
                            this->__VnoInFunc_set_report_severity_action(vlSymsp, 2U, action);
                            this->__VnoInFunc_set_report_severity_action(vlSymsp, 3U, action);
                        } else {
                            this->__VnoInFunc_set_report_severity_action(vlSymsp, sev, action);
                        }
                    } else if (("_ALL_"s == unnamedblk219__DOT__unnamedblk220__DOT__args.at(2U))) {
                        this->__VnoInFunc_set_report_id_action(vlSymsp, 
                                                               VL_CVT_PACK_STR_NN(unnamedblk219__DOT__unnamedblk220__DOT__args.at(1U)), action);
                    } else {
                        this->__VnoInFunc_set_report_severity_id_action(vlProcess, vlSymsp, sev, 
                                                                        VL_CVT_PACK_STR_NN(unnamedblk219__DOT__unnamedblk220__DOT__args.at(1U)), action);
                    }
                    __Vlabel4: ;
                }
                if ((unnamedblk219__DOT__i__Vloopsize 
                     <= vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.size())) {
                    unnamedblk219__DOT__i = ((IData)(1U) 
                                             + unnamedblk219__DOT__i);
                }
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_sev(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_sev\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__356__Vfuncout;
            __Vtask_get_arg_values__356__Vfuncout = 0;
            CData/*7:0*/ __Vtask_uvm_split_string__357__sep;
            __Vtask_uvm_split_string__357__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__357__s;
            __Vtask_uvm_split_string__357__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__357__e;
            __Vtask_uvm_split_string__357__e = 0;
            CData/*1:0*/ __Vfunc_uvm_string_to_severity__360__sev;
            __Vfunc_uvm_string_to_severity__360__sev = 0;
            CData/*1:0*/ __Vfunc_uvm_string_to_severity__363__sev;
            __Vfunc_uvm_string_to_severity__363__sev = 0;
            IData/*31:0*/ __Vfunc_uvm_is_match__367____VlefCall_0__uvm_re_match;
            __Vfunc_uvm_is_match__367____VlefCall_0__uvm_re_match = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__369__Vfuncout;
            __Vfunc_uvm_re_match__369__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__369____Vincrement1;
            __Vfunc_uvm_re_match__369____Vincrement1 = 0;
            CData/*1:0*/ __Vtask_uvm_string_to_severity__370__sev;
            __Vtask_uvm_string_to_severity__370__sev = 0;
            CData/*1:0*/ __Vtask_uvm_string_to_severity__371__sev;
            __Vtask_uvm_string_to_severity__371__sev = 0;
            std::string __Vtemp_1;
            std::string __Vtemp_2;
            std::string __Vtemp_3;
            std::string __Vtemp_4;
            std::string __Vtemp_5;
            // Body
            VlProcess::currentp(vlProcess.get());
            CData/*0:0*/ __VlefCall_6__uvm_is_match;
            std::string __VlefCall_5__get_full_name;
            IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
            CData/*0:0*/ __VlefCall_3__uvm_string_to_severity;
            IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
            CData/*0:0*/ __VlefCall_1__uvm_string_to_severity;
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            VlQueue<std::string> unnamedblk221__DOT__values;
            IData/*31:0*/ unnamedblk221__DOT__unnamedblk222__DOT__idx;
            unnamedblk221__DOT__unnamedblk222__DOT__idx = 0;
            IData/*31:0*/ unnamedblk221__DOT__unnamedblk222__DOT__idx__Vloopsize;
            unnamedblk221__DOT__unnamedblk222__DOT__idx__Vloopsize = 0;
            Vhello_uvm_v1_uvm_cmdline_parsed_arg_t__struct__0 unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__t;
            VlQueue<std::string> unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args;
            IData/*31:0*/ unnamedblk224__DOT__i;
            unnamedblk224__DOT__i = 0;
            IData/*31:0*/ unnamedblk224__DOT__i__Vloopsize;
            unnamedblk224__DOT__i__Vloopsize = 0;
            VlQueue<std::string> unnamedblk224__DOT__unnamedblk225__DOT__args;
            CData/*1:0*/ orig_sev;
            CData/*1:0*/ sev;
            orig_sev = 0U;
            sev = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__initialized)))) {
                unnamedblk221__DOT__values.clear();
                unnamedblk221__DOT__values.atDefault().clear();
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_cmdline_proc, "../../uvm/distrib/src/base/uvm_component.svh", 3544)
                                           ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_severity="s, unnamedblk221__DOT__values, __Vtask_get_arg_values__356__Vfuncout);
                unnamedblk221__DOT__unnamedblk222__DOT__idx = 0U;
                while (VL_LTS_III(32, unnamedblk221__DOT__unnamedblk222__DOT__idx, unnamedblk221__DOT__values.size())) {
                    unnamedblk221__DOT__unnamedblk222__DOT__idx__Vloopsize 
                        = unnamedblk221__DOT__values.size();
                    {
                        unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__t.__PVT__arg.clear();
                        unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__t.__PVT__args.clear();
                        unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__t.__PVT__args.atDefault().clear();
                        unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__t.__PVT__used = 0;
                        unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args.clear();
                        unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args.atDefault().clear();
                        __Vtask_uvm_split_string__357__sep = 0x2cU;
                        this->__Vtask_uvm_split_string__357__str 
                            = VL_CVT_PACK_STR_NN(unnamedblk221__DOT__values.at(unnamedblk221__DOT__unnamedblk222__DOT__idx));
                        __Vtask_uvm_split_string__357__s = 0U;
                        __Vtask_uvm_split_string__357__e = 0U;
                        unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args.clear();
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__357__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__357__str))) {
                            __Vtask_uvm_split_string__357__s 
                                = __Vtask_uvm_split_string__357__e;
                            {
                                while (VL_LTS_III(32, __Vtask_uvm_split_string__357__e, 
                                                  VL_LEN_IN(this->__Vtask_uvm_split_string__357__str))) {
                                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__357__str,__Vtask_uvm_split_string__357__e) 
                                         == (IData)(__Vtask_uvm_split_string__357__sep))) {
                                        goto __Vlabel1;
                                    }
                                    __Vtask_uvm_split_string__357__e 
                                        = ((IData)(1U) 
                                           + __Vtask_uvm_split_string__357__e);
                                }
                                __Vlabel1: ;
                            }
                            if ((__Vtask_uvm_split_string__357__s 
                                 != __Vtask_uvm_split_string__357__e)) {
                                unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__357__str,__Vtask_uvm_split_string__357__s,
                                                                                (__Vtask_uvm_split_string__357__e 
                                                                                - (IData)(1U))));
                            }
                            __Vtask_uvm_split_string__357__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__357__e);
                        }
                        if ((4U != unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args.size())) {
                            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_0__uvm_report_enabled);
                            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                                __Vtemp_1 = unnamedblk221__DOT__values.at(unnamedblk221__DOT__unnamedblk222__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("+uvm_set_severity requires 4 arguments, but %0d given for command +uvm_set_severity=%s, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",2
                                                                                , '~',32,unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args.size()
                                                                                , 'S',&(__Vtemp_1)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000ddeU, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        this->__Vfunc_uvm_string_to_severity__360__sev_str 
                            = VL_CVT_PACK_STR_NN(unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args.at(2U));
                        {
                            __Vfunc_uvm_string_to_severity__360__sev = 0U;
                            if (("UVM_INFO"s == this->__Vfunc_uvm_string_to_severity__360__sev_str)) {
                                __Vfunc_uvm_string_to_severity__360__sev = 0U;
                            } else if (("UVM_WARNING"s 
                                        == this->__Vfunc_uvm_string_to_severity__360__sev_str)) {
                                __Vfunc_uvm_string_to_severity__360__sev = 1U;
                            } else if (("UVM_ERROR"s 
                                        == this->__Vfunc_uvm_string_to_severity__360__sev_str)) {
                                __Vfunc_uvm_string_to_severity__360__sev = 2U;
                            } else if (("UVM_FATAL"s 
                                        == this->__Vfunc_uvm_string_to_severity__360__sev_str)) {
                                __Vfunc_uvm_string_to_severity__360__sev = 3U;
                            } else {
                                __VlefCall_1__uvm_string_to_severity = 0U;
                                goto __Vlabel2;
                            }
                            __VlefCall_1__uvm_string_to_severity = 1U;
                            __Vlabel2: ;
                        }
                        orig_sev = __Vfunc_uvm_string_to_severity__360__sev;
                        if ((("_ALL_"s != unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args.at(2U)) 
                             & (~ (IData)(__VlefCall_1__uvm_string_to_severity)))) {
                            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_2__uvm_report_enabled);
                            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                                __Vtemp_2 = unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args.at(2U);
                                __Vtemp_3 = unnamedblk221__DOT__values.at(unnamedblk221__DOT__unnamedblk222__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%s\" given to command +uvm_set_severity=%s, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",2
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__Vtemp_3)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000de2U, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        this->__Vfunc_uvm_string_to_severity__363__sev_str 
                            = VL_CVT_PACK_STR_NN(unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args.at(3U));
                        {
                            __Vfunc_uvm_string_to_severity__363__sev = 0U;
                            if (("UVM_INFO"s == this->__Vfunc_uvm_string_to_severity__363__sev_str)) {
                                __Vfunc_uvm_string_to_severity__363__sev = 0U;
                            } else if (("UVM_WARNING"s 
                                        == this->__Vfunc_uvm_string_to_severity__363__sev_str)) {
                                __Vfunc_uvm_string_to_severity__363__sev = 1U;
                            } else if (("UVM_ERROR"s 
                                        == this->__Vfunc_uvm_string_to_severity__363__sev_str)) {
                                __Vfunc_uvm_string_to_severity__363__sev = 2U;
                            } else if (("UVM_FATAL"s 
                                        == this->__Vfunc_uvm_string_to_severity__363__sev_str)) {
                                __Vfunc_uvm_string_to_severity__363__sev = 3U;
                            } else {
                                __VlefCall_3__uvm_string_to_severity = 0U;
                                goto __Vlabel3;
                            }
                            __VlefCall_3__uvm_string_to_severity = 1U;
                            __Vlabel3: ;
                        }
                        sev = __Vfunc_uvm_string_to_severity__363__sev;
                        if ((1U & (~ (IData)(__VlefCall_3__uvm_string_to_severity)))) {
                            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_4__uvm_report_enabled);
                            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                                __Vtemp_4 = unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args.at(3U);
                                __Vtemp_5 = unnamedblk221__DOT__values.at(unnamedblk221__DOT__unnamedblk222__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%s\" given to command +uvm_set_severity=%s, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",2
                                                                                , 'S',&(__Vtemp_4)
                                                                                , 'S',&(__Vtemp_5)) , 0U, "../../uvm/distrib/src/base/uvm_component.svh"s, 0x00000de6U, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__t
                                           .__PVT__args 
                            = unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__args;
                        unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__t
                                           .__PVT__arg 
                            = unnamedblk221__DOT__values.at(unnamedblk221__DOT__unnamedblk222__DOT__idx);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.push_back(unnamedblk221__DOT__unnamedblk222__DOT__unnamedblk223__DOT__t);
                        __Vlabel0: ;
                    }
                    if ((unnamedblk221__DOT__unnamedblk222__DOT__idx__Vloopsize 
                         <= unnamedblk221__DOT__values.size())) {
                        unnamedblk221__DOT__unnamedblk222__DOT__idx 
                            = ((IData)(1U) + unnamedblk221__DOT__unnamedblk222__DOT__idx);
                    }
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__initialized = 1U;
            }
            unnamedblk224__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk224__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.size())) {
                unnamedblk224__DOT__i__Vloopsize = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.size();
                {
                    unnamedblk224__DOT__unnamedblk225__DOT__args 
                        = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk224__DOT__i)
                        .__PVT__args;
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    this->__Vfunc_uvm_is_match__367__str 
                        = VL_CVT_PACK_STR_NN(__VlefCall_5__get_full_name);
                    this->__Vfunc_uvm_is_match__367__expr 
                        = VL_CVT_PACK_STR_NN(unnamedblk224__DOT__unnamedblk225__DOT__args.at(0U));
                    this->__Vfunc_uvm_glob_to_re__368__glob 
                        = this->__Vfunc_uvm_is_match__367__expr;
                    this->__Vfunc_uvm_glob_to_re__368__Vfuncout 
                        = this->__Vfunc_uvm_glob_to_re__368__glob;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = this->__Vfunc_uvm_glob_to_re__368__Vfuncout;
                    this->__Vfunc_uvm_re_match__369__str 
                        = this->__Vfunc_uvm_is_match__367__str;
                    this->__Vfunc_uvm_re_match__369__re 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                    __Vfunc_uvm_re_match__369____Vincrement1 = 0U;
                    {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__369__re))) {
                            __Vfunc_uvm_re_match__369__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__369__re,0U))) {
                            this->__Vfunc_uvm_re_match__369__re 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__369__re,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__369__re) 
                                               - (IData)(1U)));
                        }
                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__369__str)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__369__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__369__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__369__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__369__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__369__Vfuncout = 1U;
                                goto __Vlabel5;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        }
                        while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__369__str))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__369__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__369__re))) {
                                    __Vfunc_uvm_re_match__369__Vfuncout = 0U;
                                    goto __Vlabel5;
                                }
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__369__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                         == VL_GETC_N(this->__Vfunc_uvm_re_match__369__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                        | (0x3fU == 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__369__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                __Vfunc_uvm_re_match__369____Vincrement1 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match__369____Vincrement1;
                            }
                        }
                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__369__re)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__369__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        }
                        __Vfunc_uvm_re_match__369__Vfuncout 
                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__369__re))
                                ? 0U : 1U);
                        __Vlabel5: ;
                    }
                    __Vfunc_uvm_is_match__367____VlefCall_0__uvm_re_match 
                        = __Vfunc_uvm_re_match__369__Vfuncout;
                    __VlefCall_6__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match__367____VlefCall_0__uvm_re_match);
                    if ((1U & (~ (IData)(__VlefCall_6__uvm_is_match)))) {
                        goto __Vlabel4;
                    }
                    this->__Vtask_uvm_string_to_severity__370__sev_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk224__DOT__unnamedblk225__DOT__args.at(2U));
                    __Vtask_uvm_string_to_severity__370__sev = 0U;
                    if (("UVM_INFO"s == this->__Vtask_uvm_string_to_severity__370__sev_str)) {
                        __Vtask_uvm_string_to_severity__370__sev = 0U;
                    } else if (("UVM_WARNING"s == this->__Vtask_uvm_string_to_severity__370__sev_str)) {
                        __Vtask_uvm_string_to_severity__370__sev = 1U;
                    } else if (("UVM_ERROR"s == this->__Vtask_uvm_string_to_severity__370__sev_str)) {
                        __Vtask_uvm_string_to_severity__370__sev = 2U;
                    } else if (("UVM_FATAL"s == this->__Vtask_uvm_string_to_severity__370__sev_str)) {
                        __Vtask_uvm_string_to_severity__370__sev = 3U;
                    }
                    orig_sev = __Vtask_uvm_string_to_severity__370__sev;
                    this->__Vtask_uvm_string_to_severity__371__sev_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk224__DOT__unnamedblk225__DOT__args.at(3U));
                    __Vtask_uvm_string_to_severity__371__sev = 0U;
                    if (("UVM_INFO"s == this->__Vtask_uvm_string_to_severity__371__sev_str)) {
                        __Vtask_uvm_string_to_severity__371__sev = 0U;
                    } else if (("UVM_WARNING"s == this->__Vtask_uvm_string_to_severity__371__sev_str)) {
                        __Vtask_uvm_string_to_severity__371__sev = 1U;
                    } else if (("UVM_ERROR"s == this->__Vtask_uvm_string_to_severity__371__sev_str)) {
                        __Vtask_uvm_string_to_severity__371__sev = 2U;
                    } else if (("UVM_FATAL"s == this->__Vtask_uvm_string_to_severity__371__sev_str)) {
                        __Vtask_uvm_string_to_severity__371__sev = 3U;
                    }
                    sev = __Vtask_uvm_string_to_severity__371__sev;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.atWriteAppend(unnamedblk224__DOT__i)
                                           .__PVT__used 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk224__DOT__i)
                           .__PVT__used);
                    if ((("_ALL_"s == unnamedblk224__DOT__unnamedblk225__DOT__args.at(1U)) 
                         & ("_ALL_"s == unnamedblk224__DOT__unnamedblk225__DOT__args.at(2U)))) {
                        this->__VnoInFunc_set_report_severity_override(vlSymsp, 0U, (IData)(sev));
                        this->__VnoInFunc_set_report_severity_override(vlSymsp, 1U, (IData)(sev));
                        this->__VnoInFunc_set_report_severity_override(vlSymsp, 2U, (IData)(sev));
                        this->__VnoInFunc_set_report_severity_override(vlSymsp, 3U, (IData)(sev));
                    } else if (("_ALL_"s == unnamedblk224__DOT__unnamedblk225__DOT__args.at(1U))) {
                        this->__VnoInFunc_set_report_severity_override(vlSymsp, orig_sev, (IData)(sev));
                    } else if (("_ALL_"s == unnamedblk224__DOT__unnamedblk225__DOT__args.at(2U))) {
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 0U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk224__DOT__unnamedblk225__DOT__args.at(1U)), (IData)(sev));
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 1U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk224__DOT__unnamedblk225__DOT__args.at(1U)), (IData)(sev));
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 2U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk224__DOT__unnamedblk225__DOT__args.at(1U)), (IData)(sev));
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 3U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk224__DOT__unnamedblk225__DOT__args.at(1U)), (IData)(sev));
                    } else {
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, orig_sev, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk224__DOT__unnamedblk225__DOT__args.at(1U)), (IData)(sev));
                    }
                    __Vlabel4: ;
                }
                if ((unnamedblk224__DOT__i__Vloopsize 
                     <= vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.size())) {
                    unnamedblk224__DOT__i = ((IData)(1U) 
                                             + unnamedblk224__DOT__i);
                }
            }
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_0__get_name;
            IData/*31:0*/ unnamedblk226__DOT__i;
            unnamedblk226__DOT__i = 0;
            IData/*31:0*/ unnamedblk226__DOT__i__Vloopsize;
            unnamedblk226__DOT__i__Vloopsize = 0;
            VlClassRef<Vhello_uvm_v1_std__03a__03aprocess> unnamedblk226__DOT__unnamedblk227__DOT__p;
            std::string unnamedblk226__DOT__unnamedblk227__DOT__p_rand;
            unnamedblk226__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk226__DOT__i, this->__PVT__m_verbosity_settings.size())) {
                unnamedblk226__DOT__i__Vloopsize = this->__PVT__m_verbosity_settings.size();
                VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_component.svh", 3604)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                if ((__VlefCall_0__get_name == this->__PVT__m_verbosity_settings.at(unnamedblk226__DOT__i)
                     .__PVT__phase)) {
                    if ((0ULL == this->__PVT__m_verbosity_settings.at(unnamedblk226__DOT__i)
                         .__PVT__offset)) {
                        if (("_ALL_"s == this->__PVT__m_verbosity_settings.at(unnamedblk226__DOT__i)
                             .__PVT__id)) {
                            this->__VnoInFunc_set_report_verbosity_level(vlSymsp, this->__PVT__m_verbosity_settings.at(unnamedblk226__DOT__i)
                                                                         .__PVT__verbosity);
                        } else {
                            this->__VnoInFunc_set_report_id_verbosity(vlSymsp, 
                                                                      VL_CVT_PACK_STR_NN(this->__PVT__m_verbosity_settings.at(unnamedblk226__DOT__i)
                                                                                .__PVT__id), this->__PVT__m_verbosity_settings.at(unnamedblk226__DOT__i)
                                                                      .__PVT__verbosity);
                        }
                    } else {
                        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk226__DOT__unnamedblk227__DOT__p);
                        VL_NULL_CHECK(unnamedblk226__DOT__unnamedblk227__DOT__p, "../../uvm/distrib/src/base/uvm_component.svh", 3613)
                                           ->__VnoInFunc_get_randstate(vlSymsp, unnamedblk226__DOT__unnamedblk227__DOT__p_rand);
                        this->__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, unnamedblk226__DOT__i);
                        VL_NULL_CHECK(unnamedblk226__DOT__unnamedblk227__DOT__p, "../../uvm/distrib/src/base/uvm_component.svh", 3622)
                                           ->__VnoInFunc_set_randstate(vlSymsp, unnamedblk226__DOT__unnamedblk227__DOT__p_rand);
                    }
                    this->__PVT__m_verbosity_settings.erase(unnamedblk226__DOT__i);
                }
                if ((unnamedblk226__DOT__i__Vloopsize 
                     <= this->__PVT__m_verbosity_settings.size())) {
                    unnamedblk226__DOT__i = ((IData)(1U) 
                                             + unnamedblk226__DOT__i);
                }
            }
        }

        VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ unnamedblk226__DOT__i) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0\n"); );
            // Locals
            IData/*31:0*/ __Vtask___VforkTask_1__387__i;
            __Vtask___VforkTask_1__387__i = 0;
            Vhello_uvm_v1_m_verbosity_setting__struct__0 __Vtask___VforkTask_1__387__setting;
            __Vtask___VforkTask_1__387__setting.__PVT__offset = 0;
            __Vtask___VforkTask_1__387__setting.__PVT__verbosity = 0;
            // Body
            VlProcess::currentp(vlProcess.get());
            VL_KEEP_THIS;
            __Vtask___VforkTask_1__387__i = unnamedblk226__DOT__i;
            co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                                    vlProcess, 
                                                    "../../uvm/distrib/src/base/uvm_component.svh", 
                                                    3614);
            __Vtask___VforkTask_1__387__setting = this->__PVT__m_verbosity_settings.at(__Vtask___VforkTask_1__387__i);
            co_await vlSymsp->TOP.__VdlySched.delay(__Vtask___VforkTask_1__387__setting
                                                    .__PVT__offset, 
                                                    vlProcess, 
                                                    "../../uvm/distrib/src/base/uvm_component.svh", 
                                                    3616);
            if (("_ALL_"s == __Vtask___VforkTask_1__387__setting
                 .__PVT__id)) {
                this->__VnoInFunc_set_report_verbosity_level(vlSymsp, __Vtask___VforkTask_1__387__setting
                                                             .__PVT__verbosity);
            } else {
                this->__VnoInFunc_set_report_id_verbosity(vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(__Vtask___VforkTask_1__387__setting
                                                                             .__PVT__id), __Vtask___VforkTask_1__387__setting
                                                          .__PVT__verbosity);
            }
            vlProcess->state(VlProcess::FINISHED);
            co_return;
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_do_pre_abort(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_do_pre_abort\n"); );
            // Body
            std::string unnamedblk229__DOT__i;
            std::string unnamedblk229__DOT__i__Vnext;
            CData/*0:0*/ unnamedblk229__DOT__i__Vmore;
            unnamedblk229__DOT__i__Vmore = 0;
            unnamedblk229__DOT__i__Vmore = (0U != this->__PVT__m_children.first(unnamedblk229__DOT__i__Vnext));
            while (unnamedblk229__DOT__i__Vmore) {
                unnamedblk229__DOT__i = unnamedblk229__DOT__i__Vnext;
                unnamedblk229__DOT__i__Vmore = (0U 
                                                != this->__PVT__m_children.next(unnamedblk229__DOT__i__Vnext));
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(unnamedblk229__DOT__i), "../../uvm/distrib/src/base/uvm_component.svh", 3636)
                                           ->__VnoInFunc_m_do_pre_abort(vlSymsp);
            }
            this->__VnoInFunc_pre_abort(vlSymsp);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc_randomize\n"); );
            // Body
            IData/*31:0*/ __VlefCall_0____VBasicRand;
            Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
            this->__VnoInFunc___Vsetup_constraints(vlSymsp);
            randomize__Vfuncrtn = Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
            this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
            randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                   & __VlefCall_0____VBasicRand);
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc___Vsetup_constraints\n"); );
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::__VnoInFunc___VBasicRand\n"); );
            // Body
            __VBasicRand__Vfuncrtn = 1U;
        }

        void Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::_ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::_ctor_var_reset\n"); );
            // Body
            (void)vlSymsp;  // Prevent unused variable warning
            __PVT__enable_stop_interrupt = 0;
            __PVT__m_build_done = 0;
            __PVT__m_phasing_active = 0;
            __PVT__m_verbosity_settings.atDefault().__PVT__offset = VL_SCOPED_RAND_RESET_Q(64, 11392884900788368740ULL, 1112267310700633147ull);
            __PVT__m_verbosity_settings.atDefault().__PVT__verbosity = 0;
        }

        Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_component() {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_component::~\n"); );
        }
