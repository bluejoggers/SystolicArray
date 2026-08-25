// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi30> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi30__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_backdoor(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_backdoor\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_backdoor)) {
        this->__PVT__m_backdoor = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, "Backdoor"s);
    }
    backdoor__Vfuncrtn = this->__PVT__m_backdoor;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi30> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi30__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, "uvm_reg_map"s);
    } else {
        tmp = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_map"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 70)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_auto_predict(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_auto_predict\n"); );
    // Body
    this->__PVT__m_auto_predict = on;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_auto_predict(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &get_auto_predict__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_auto_predict\n"); );
    // Body
    get_auto_predict__Vfuncrtn = this->__PVT__m_auto_predict;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_check_on_read(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_check_on_read\n"); );
    // Body
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk2__DOT__submap;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk2__DOT__submap__Vnext;
    CData/*0:0*/ unnamedblk2__DOT__submap__Vmore;
    unnamedblk2__DOT__submap__Vmore = 0;
    this->__PVT__m_check_on_read = on;
    unnamedblk2__DOT__submap__Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk2__DOT__submap__Vnext));
    while (unnamedblk2__DOT__submap__Vmore) {
        unnamedblk2__DOT__submap = unnamedblk2__DOT__submap__Vnext;
        unnamedblk2__DOT__submap__Vmore = (0U != this->__PVT__m_submaps.next(unnamedblk2__DOT__submap__Vnext));
        VL_NULL_CHECK(unnamedblk2__DOT__submap, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 603)->__VnoInFunc_set_check_on_read(vlSymsp, on);
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_check_on_read(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_on_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_check_on_read\n"); );
    // Body
    get_check_on_read__Vfuncrtn = this->__PVT__m_check_on_read;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_transaction_order_policy(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_transaction_order_policy> pol) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_transaction_order_policy\n"); );
    // Body
    this->__PVT__policy = pol;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_transaction_order_policy(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_transaction_order_policy> &get_transaction_order_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_transaction_order_policy\n"); );
    // Body
    get_transaction_order_policy__Vfuncrtn = this->__PVT__policy;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, 
                                                      VL_CVT_PACK_STR_NN(
                                                                         ((""s 
                                                                           == name)
                                                                           ? "default_map"s
                                                                           : name)));
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_auto_predict = 0U;
    this->__PVT__m_check_on_read = 0U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_configure(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> parent, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_configure\n"); );
    // Body
    this->__PVT__m_parent = parent;
    this->__PVT__m_n_bytes = n_bytes;
    this->__PVT__m_endian = endian;
    this->__PVT__m_base_addr = base_addr;
    this->__PVT__m_byte_addressing = byte_addressing;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_reg(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__13__verbosity;
    __Vtask_uvm_report_error__13__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__13__line;
    __Vtask_uvm_report_error__13__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__13__report_enabled_checked;
    __Vtask_uvm_report_error__13__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__verbosity;
    __Vfunc_uvm_report_enabled__19__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__19__severity;
    __Vfunc_uvm_report_enabled__19__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__25__verbosity;
    __Vtask_uvm_report_error__25__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__25__line;
    __Vtask_uvm_report_error__25__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__25__report_enabled_checked;
    __Vtask_uvm_report_error__25__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> __VlefCall_4__get_parent;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> __VlefCall_3__get_parent;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk488__DOT__info;
    {
        if (this->__PVT__m_regs_info.exists(rg)) {
            this->__Vfunc_uvm_report_enabled__7__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__7__severity = 2U;
            __Vfunc_uvm_report_enabled__7__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), this->__Vfunc_uvm_report_enabled__7__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 716)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                __Vtask_uvm_report_error__13__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__13__context_name = ""s;
                __Vtask_uvm_report_error__13__line = 0x000002ccU;
                this->__Vtask_uvm_report_error__13__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__13__verbosity = 0U;
                this->__Vtask_uvm_report_error__13__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' has already been added to map '"s), __VlefCall_2__get_name), "'"s));
                this->__Vtask_uvm_report_error__13__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__14__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__14__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__15__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__13__id, this->__Vtask_uvm_report_error__13__message, __Vtask_uvm_report_error__13__verbosity, this->__Vtask_uvm_report_error__13__filename, __Vtask_uvm_report_error__13__line, this->__Vtask_uvm_report_error__13__context_name, (IData)(__Vtask_uvm_report_error__13__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 720)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_3__get_parent);
        this->__VnoInFunc_get_parent(vlSymsp, __VlefCall_4__get_parent);
        if ((__VlefCall_3__get_parent != __VlefCall_4__get_parent)) {
            this->__Vfunc_uvm_report_enabled__19__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__19__severity = 2U;
            __Vfunc_uvm_report_enabled__19__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__21__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__19__verbosity, (IData)(__Vfunc_uvm_report_enabled__19__severity), this->__Vfunc_uvm_report_enabled__19__id, __VlefCall_5__uvm_report_enabled);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 723)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_error__25__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__25__context_name = ""s;
                __Vtask_uvm_report_error__25__line = 0x000002d3U;
                this->__Vtask_uvm_report_error__25__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__25__verbosity = 0U;
                this->__Vtask_uvm_report_error__25__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_6__get_full_name), "' may not be added to address map '"s), __VlefCall_7__get_full_name), "' : they are not in the same block"s));
                this->__Vtask_uvm_report_error__25__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__26__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__26__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__27__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__25__id, this->__Vtask_uvm_report_error__25__message, __Vtask_uvm_report_error__25__verbosity, this->__Vtask_uvm_report_error__25__filename, __Vtask_uvm_report_error__25__line, this->__Vtask_uvm_report_error__25__context_name, (IData)(__Vtask_uvm_report_error__25__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 727)->__VnoInFunc_add_map(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this});
        unnamedblk488__DOT__info = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info, vlSymsp);
        VL_NULL_CHECK(unnamedblk488__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 731)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(unnamedblk488__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 732)->__PVT__rights 
            = rights;
        VL_NULL_CHECK(unnamedblk488__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 733)->__PVT__unmapped 
            = unmapped;
        VL_NULL_CHECK(unnamedblk488__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 734)->__PVT__frontdoor 
            = frontdoor;
        this->__PVT__m_regs_info.at(rg) = unnamedblk488__DOT__info;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_reg_offset(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_reg_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31__verbosity;
    __Vfunc_uvm_report_enabled__31__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__31__severity;
    __Vfunc_uvm_report_enabled__31__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__37__verbosity;
    __Vtask_uvm_report_error__37__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__37__line;
    __Vtask_uvm_report_error__37__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__37__report_enabled_checked;
    __Vtask_uvm_report_error__37__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    IData/*31:0*/ __Vtask_get_physical_addresses__50__Vfuncout;
    __Vtask_get_physical_addresses__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__56__verbosity;
    __Vfunc_uvm_report_enabled__56__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__56__severity;
    __Vfunc_uvm_report_enabled__56__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__63__verbosity;
    __Vtask_uvm_report_warning__63__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__63__line;
    __Vtask_uvm_report_warning__63__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__63__report_enabled_checked;
    __Vtask_uvm_report_warning__63__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__67__verbosity;
    __Vfunc_uvm_report_enabled__67__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__67__severity;
    __Vfunc_uvm_report_enabled__67__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__74__verbosity;
    __Vtask_uvm_report_warning__74__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__74__line;
    __Vtask_uvm_report_warning__74__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__74__report_enabled_checked;
    __Vtask_uvm_report_warning__74__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__75__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__76__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_13__get_full_name;
    std::string __VlefCall_12__get_full_name;
    std::string __VlefCall_11__get_full_name;
    IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_full_name;
    std::string __VlefCall_7__get_full_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefCall_3__is_locked;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk489__DOT__info;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk489__DOT__blk;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk489__DOT__top_map;
    VlQueue<QData/*63:0*/> unnamedblk489__DOT__addrs;
    IData/*31:0*/ unnamedblk489__DOT__unnamedblk490__DOT__i;
    unnamedblk489__DOT__unnamedblk490__DOT__i = 0;
    IData/*31:0*/ unnamedblk489__DOT__unnamedblk490__DOT__i__Vloopsize;
    unnamedblk489__DOT__unnamedblk490__DOT__i__Vloopsize = 0;
    std::string unnamedblk489__DOT__unnamedblk491__DOT__rg_acc;
    IData/*31:0*/ unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i;
    unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i = 0;
    IData/*31:0*/ unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i__Vloopsize;
    unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i__Vloopsize = 0;
    QData/*63:0*/ unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__addr;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg2;
    std::string unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg2_acc;
    std::string unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range;
    VL_ZERO_W(160, unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vmore;
    unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vmore = 0;
    std::string unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__unnamedblk497__DOT__a;
    {
        if ((! this->__PVT__m_regs_info.exists(rg))) {
            this->__Vfunc_uvm_report_enabled__31__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__31__severity = 2U;
            __Vfunc_uvm_report_enabled__31__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__32__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__32__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__33__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__31__verbosity, (IData)(__Vfunc_uvm_report_enabled__31__severity), this->__Vfunc_uvm_report_enabled__31__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 750)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__37__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__37__context_name = ""s;
                __Vtask_uvm_report_error__37__line = 0x000002eeU;
                this->__Vtask_uvm_report_error__37__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__37__verbosity = 0U;
                this->__Vtask_uvm_report_error__37__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot modify offset of register '"s, __VlefCall_1__get_full_name), "' in address map '"s), __VlefCall_2__get_full_name), "' : register not mapped in that address map"s));
                this->__Vtask_uvm_report_error__37__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__38__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__38__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__39__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__37__id, this->__Vtask_uvm_report_error__37__message, __Vtask_uvm_report_error__37__verbosity, this->__Vtask_uvm_report_error__37__filename, __Vtask_uvm_report_error__37__line, this->__Vtask_uvm_report_error__37__context_name, (IData)(__Vtask_uvm_report_error__37__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        unnamedblk489__DOT__info = this->__PVT__m_regs_info
            .at(rg);
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk489__DOT__blk);
        this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk489__DOT__top_map);
        unnamedblk489__DOT__addrs.clear();
        unnamedblk489__DOT__addrs.atDefault() = 0;
        VL_NULL_CHECK(unnamedblk489__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 761)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_3__is_locked);
        if (__VlefCall_3__is_locked) {
            if ((1U & (~ VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 764)
                       ->__PVT__unmapped))) {
                unnamedblk489__DOT__unnamedblk490__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk489__DOT__unnamedblk490__DOT__i, VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 765)
                                  ->__PVT__addr.size())) {
                    unnamedblk489__DOT__unnamedblk490__DOT__i__Vloopsize 
                        = VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 765)
                        ->__PVT__addr.size();
                    if (VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 767)
                        ->__PVT__m_regs_by_offset_wo.exists(VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 767)
                                                            ->__PVT__addr.at(unnamedblk489__DOT__unnamedblk490__DOT__i))) {
                        __VlefExpr_4 = (VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 771)
                                        ->__PVT__m_regs_by_offset
                                        .at(VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 771)
                                            ->__PVT__addr.at(unnamedblk489__DOT__unnamedblk490__DOT__i)) 
                                        == rg);
                        if (__VlefExpr_4) {
                            __Vtemp_1 = VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 773)
                                ->__PVT__m_regs_by_offset_wo
                                .at(VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 773)
                                    ->__PVT__addr.at(unnamedblk489__DOT__unnamedblk490__DOT__i));
                            VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 772)->__PVT__m_regs_by_offset.at(VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 772)
                                                                                ->__PVT__addr.at(unnamedblk489__DOT__unnamedblk490__DOT__i)) 
                                = __Vtemp_1;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 775)
                                                                                ->__PVT__m_regs_by_offset
                                                                                .at(VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 775)
                                                                                ->__PVT__addr.at(unnamedblk489__DOT__unnamedblk490__DOT__i)));
                        } else {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 779)
                                                                                ->__PVT__m_regs_by_offset
                                                                                .at(VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 779)
                                                                                ->__PVT__addr.at(unnamedblk489__DOT__unnamedblk490__DOT__i)));
                        }
                        VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 781)->__PVT__m_regs_by_offset_wo.erase(VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 781)
                                                                                ->__PVT__addr.at(unnamedblk489__DOT__unnamedblk490__DOT__i));
                    } else {
                        VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 768)->__PVT__m_regs_by_offset.erase(VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 768)
                                                                                ->__PVT__addr.at(unnamedblk489__DOT__unnamedblk490__DOT__i));
                    }
                    if ((unnamedblk489__DOT__unnamedblk490__DOT__i__Vloopsize 
                         <= VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 765)
                         ->__PVT__addr.size())) {
                        unnamedblk489__DOT__unnamedblk490__DOT__i 
                            = ((IData)(1U) + unnamedblk489__DOT__unnamedblk490__DOT__i);
                    }
                }
            }
            if ((1U & (~ (IData)(unmapped)))) {
                VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 788)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk489__DOT__unnamedblk491__DOT__rg_acc);
                VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 791)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 0ULL, __VlefCall_5__get_n_bytes, unnamedblk489__DOT__addrs, __Vtask_get_physical_addresses__50__Vfuncout);
                unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i, unnamedblk489__DOT__addrs.size())) {
                    unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i__Vloopsize 
                        = unnamedblk489__DOT__addrs.size();
                    unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__addr 
                        = unnamedblk489__DOT__addrs.at(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i);
                    if (VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 796)
                        ->__PVT__m_regs_by_offset.exists(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__addr)) {
                        unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg2 
                            = VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 798)
                            ->__PVT__m_regs_by_offset
                            .at(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__addr);
                        VL_NULL_CHECK(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg2, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 799)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg2_acc);
                        if ((("RO"s == unnamedblk489__DOT__unnamedblk491__DOT__rg_acc) 
                             & ("WO"s == unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg2_acc))) {
                            VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 804)->__PVT__m_regs_by_offset.at(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__addr) 
                                = rg;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, rg);
                            VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 806)->__PVT__m_regs_by_offset_wo.at(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__addr) 
                                = unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg2;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg2);
                        } else if ((("WO"s == unnamedblk489__DOT__unnamedblk491__DOT__rg_acc) 
                                    & ("RO"s == unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg2_acc))) {
                            VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 810)->__PVT__m_regs_by_offset_wo.at(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__addr) 
                                = rg;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__rg2);
                        } else {
                            unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__a = ""s;
                            VL_SFORMAT_NX(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__a
                                          ,"%0h",1, '#',64,unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__addr);
                            this->__Vfunc_uvm_report_enabled__56__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__56__severity = 1U;
                            __Vfunc_uvm_report_enabled__56__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__57__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__57__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__58__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__56__verbosity, (IData)(__Vfunc_uvm_report_enabled__56__severity), this->__Vfunc_uvm_report_enabled__56__id, __VlefCall_6__uvm_report_enabled);
                            if ((0U != __VlefCall_6__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                                VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 819)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                                VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 819)
                                              ->__PVT__m_regs_by_offset
                                              .at(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__addr), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 819)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                                __Vtask_uvm_report_warning__63__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_warning__63__context_name = ""s;
                                __Vtask_uvm_report_warning__63__line = 0x00000333U;
                                this->__Vtask_uvm_report_warning__63__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__63__verbosity = 0U;
                                this->__Vtask_uvm_report_warning__63__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_7__get_full_name), "' register '"s), __VlefCall_8__get_full_name), "' maps to same address as register '"s), __VlefCall_9__get_full_name), "': 'h"s), unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk494__DOT__unnamedblk495__DOT__a));
                                this->__Vtask_uvm_report_warning__63__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__64__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__64__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__65__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__63__id, this->__Vtask_uvm_report_warning__63__message, __Vtask_uvm_report_warning__63__verbosity, this->__Vtask_uvm_report_warning__63__filename, __Vtask_uvm_report_warning__63__line, this->__Vtask_uvm_report_warning__63__context_name, (IData)(__Vtask_uvm_report_warning__63__report_enabled_checked));
                            }
                        }
                    } else {
                        VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 823)->__PVT__m_regs_by_offset.at(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__addr) 
                            = rg;
                    }
                    unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 825)
                           ->__PVT__m_mems_by_offset.first(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vnext));
                    while (unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vmore) {
                        unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range[0U] 
                            = unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vnext[0U];
                        unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range[1U] 
                            = unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vnext[1U];
                        unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range[2U] 
                            = unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vnext[2U];
                        unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range[3U] 
                            = unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vnext[3U];
                        unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range[4U] 
                            = unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vnext[4U];
                        unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vmore 
                            = (0U != VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 825)
                               ->__PVT__m_mems_by_offset.next(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range__Vnext));
                        if (((unnamedblk489__DOT__addrs.at(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i) 
                              >= (((QData)((IData)(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range[4U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range[3U])))) 
                             & (unnamedblk489__DOT__addrs.at(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i) 
                                <= (((QData)((IData)(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range[2U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range[1U])))))) {
                            unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__unnamedblk497__DOT__a = ""s;
                            VL_SFORMAT_NX(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__unnamedblk497__DOT__a
                                          ,"%0h",1, '#',64,unnamedblk489__DOT__addrs.at(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i));
                            this->__Vfunc_uvm_report_enabled__67__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__67__severity = 1U;
                            __Vfunc_uvm_report_enabled__67__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__68__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__68__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__69__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__69__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__67__verbosity, (IData)(__Vfunc_uvm_report_enabled__67__severity), this->__Vfunc_uvm_report_enabled__67__id, __VlefCall_10__uvm_report_enabled);
                            if ((0U != __VlefCall_10__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                                VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 831)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                                VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk489__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 831)
                                              ->__PVT__m_mems_by_offset
                                              .at(unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__range), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 831)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                                __Vtask_uvm_report_warning__74__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_warning__74__context_name = ""s;
                                __Vtask_uvm_report_warning__74__line = 0x0000033fU;
                                this->__Vtask_uvm_report_warning__74__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__74__verbosity = 0U;
                                this->__Vtask_uvm_report_warning__74__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_11__get_full_name), "' register '"s), __VlefCall_12__get_full_name), "' overlaps with address range of memory '"s), __VlefCall_13__get_full_name), "': 'h"s), unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__unnamedblk493__DOT__unnamedblk496__DOT__unnamedblk497__DOT__a));
                                this->__Vtask_uvm_report_warning__74__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__75__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__75__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__76__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__76__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__74__id, this->__Vtask_uvm_report_warning__74__message, __Vtask_uvm_report_warning__74__verbosity, this->__Vtask_uvm_report_warning__74__filename, __Vtask_uvm_report_warning__74__line, this->__Vtask_uvm_report_warning__74__context_name, (IData)(__Vtask_uvm_report_warning__74__report_enabled_checked));
                            }
                        }
                    }
                    if ((unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i__Vloopsize 
                         <= unnamedblk489__DOT__addrs.size())) {
                        unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i 
                            = ((IData)(1U) + unnamedblk489__DOT__unnamedblk491__DOT__unnamedblk492__DOT__i);
                    }
                }
                VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 835)->__PVT__addr 
                    = unnamedblk489__DOT__addrs;
            }
        }
        if (unmapped) {
            VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 840)->__PVT__offset = 0xffffffffffffffffULL;
            VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 841)->__PVT__unmapped = 1U;
        } else {
            VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 844)->__PVT__offset 
                = offset;
            VL_NULL_CHECK(unnamedblk489__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 845)->__PVT__unmapped = 0U;
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_mem(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__verbosity;
    __Vfunc_uvm_report_enabled__78__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__78__severity;
    __Vfunc_uvm_report_enabled__78__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__84__verbosity;
    __Vtask_uvm_report_error__84__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__84__line;
    __Vtask_uvm_report_error__84__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__84__report_enabled_checked;
    __Vtask_uvm_report_error__84__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__85__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__86__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__90__verbosity;
    __Vfunc_uvm_report_enabled__90__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__90__severity;
    __Vfunc_uvm_report_enabled__90__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__91__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__92__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__96__verbosity;
    __Vtask_uvm_report_error__96__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__96__line;
    __Vtask_uvm_report_error__96__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__96__report_enabled_checked;
    __Vtask_uvm_report_error__96__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__97__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__98__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> __VlefCall_4__get_parent;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> __VlefCall_3__get_parent;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk498__DOT__info;
    {
        if (this->__PVT__m_mems_info.exists(mem)) {
            this->__Vfunc_uvm_report_enabled__78__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__78__severity = 2U;
            __Vfunc_uvm_report_enabled__78__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__79__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__79__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__80__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__78__verbosity, (IData)(__Vfunc_uvm_report_enabled__78__severity), this->__Vfunc_uvm_report_enabled__78__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 861)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                __Vtask_uvm_report_error__84__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__84__context_name = ""s;
                __Vtask_uvm_report_error__84__line = 0x0000035dU;
                this->__Vtask_uvm_report_error__84__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__84__verbosity = 0U;
                this->__Vtask_uvm_report_error__84__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' has already been added to map '"s), __VlefCall_2__get_name), "'"s));
                this->__Vtask_uvm_report_error__84__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__85__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__85__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__86__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__86__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__84__id, this->__Vtask_uvm_report_error__84__message, __Vtask_uvm_report_error__84__verbosity, this->__Vtask_uvm_report_error__84__filename, __Vtask_uvm_report_error__84__line, this->__Vtask_uvm_report_error__84__context_name, (IData)(__Vtask_uvm_report_error__84__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 865)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_3__get_parent);
        this->__VnoInFunc_get_parent(vlSymsp, __VlefCall_4__get_parent);
        if ((__VlefCall_3__get_parent != __VlefCall_4__get_parent)) {
            this->__Vfunc_uvm_report_enabled__90__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__90__severity = 2U;
            __Vfunc_uvm_report_enabled__90__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__91__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__91__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__92__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__92__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__90__verbosity, (IData)(__Vfunc_uvm_report_enabled__90__severity), this->__Vfunc_uvm_report_enabled__90__id, __VlefCall_5__uvm_report_enabled);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 868)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_error__96__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__96__context_name = ""s;
                __Vtask_uvm_report_error__96__line = 0x00000364U;
                this->__Vtask_uvm_report_error__96__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__96__verbosity = 0U;
                this->__Vtask_uvm_report_error__96__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_6__get_full_name), "' may not be added to address map '"s), __VlefCall_7__get_full_name), "' : they are not in the same block"s));
                this->__Vtask_uvm_report_error__96__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__97__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__97__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__98__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__98__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__96__id, this->__Vtask_uvm_report_error__96__message, __Vtask_uvm_report_error__96__verbosity, this->__Vtask_uvm_report_error__96__filename, __Vtask_uvm_report_error__96__line, this->__Vtask_uvm_report_error__96__context_name, (IData)(__Vtask_uvm_report_error__96__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 872)->__VnoInFunc_add_map(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this});
        unnamedblk498__DOT__info = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info, vlSymsp);
        VL_NULL_CHECK(unnamedblk498__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 876)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(unnamedblk498__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 877)->__PVT__rights 
            = rights;
        VL_NULL_CHECK(unnamedblk498__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 878)->__PVT__unmapped 
            = unmapped;
        VL_NULL_CHECK(unnamedblk498__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 879)->__PVT__frontdoor 
            = frontdoor;
        this->__PVT__m_mems_info.at(mem) = unnamedblk498__DOT__info;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_mem_offset(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_mem_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__102__verbosity;
    __Vfunc_uvm_report_enabled__102__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__102__severity;
    __Vfunc_uvm_report_enabled__102__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__103__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__104__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__108__verbosity;
    __Vtask_uvm_report_error__108__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__108__line;
    __Vtask_uvm_report_error__108__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__108__report_enabled_checked;
    __Vtask_uvm_report_error__108__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__109__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__110__Vfuncout;
    IData/*31:0*/ __Vtask_get_physical_addresses__116__Vfuncout;
    __Vtask_get_physical_addresses__116__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses__119__Vfuncout;
    __Vtask_get_physical_addresses__119__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__121__verbosity;
    __Vfunc_uvm_report_enabled__121__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__121__severity;
    __Vfunc_uvm_report_enabled__121__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__122__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__123__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__128__verbosity;
    __Vtask_uvm_report_warning__128__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__128__line;
    __Vtask_uvm_report_warning__128__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__128__report_enabled_checked;
    __Vtask_uvm_report_warning__128__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__129__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__130__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__132__verbosity;
    __Vfunc_uvm_report_enabled__132__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__132__severity;
    __Vfunc_uvm_report_enabled__132__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__133__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__134__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__139__verbosity;
    __Vtask_uvm_report_warning__139__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__139__line;
    __Vtask_uvm_report_warning__139__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__139__report_enabled_checked;
    __Vtask_uvm_report_warning__139__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__140__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__141__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_16__get_full_name;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    std::string __VlefCall_12__get_full_name;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_8__get_size;
    IData/*31:0*/ __VlefCall_7__get_n_bytes;
    QData/*63:0*/ __VlefCall_6__get_size;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefCall_3__is_locked;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk499__DOT__info;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk499__DOT__blk;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk499__DOT__top_map;
    VlWide<5>/*159:0*/ unnamedblk499__DOT__unnamedblk500__DOT__range;
    VL_ZERO_W(160, unnamedblk499__DOT__unnamedblk500__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk499__DOT__unnamedblk500__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk499__DOT__unnamedblk500__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk499__DOT__unnamedblk500__DOT__range__Vmore;
    unnamedblk499__DOT__unnamedblk500__DOT__range__Vmore = 0;
    VlQueue<QData/*63:0*/> unnamedblk499__DOT__unnamedblk501__DOT__addrs;
    VlQueue<QData/*63:0*/> unnamedblk499__DOT__unnamedblk501__DOT__addrs_max;
    QData/*63:0*/ unnamedblk499__DOT__unnamedblk501__DOT__min;
    QData/*63:0*/ unnamedblk499__DOT__unnamedblk501__DOT__max;
    QData/*63:0*/ unnamedblk499__DOT__unnamedblk501__DOT__max2;
    IData/*31:0*/ unnamedblk499__DOT__unnamedblk501__DOT__stride;
    QData/*63:0*/ unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr;
    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr = 0;
    QData/*63:0*/ unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr__Vnext;
    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr__Vnext = 0;
    CData/*0:0*/ unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr__Vmore;
    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr__Vmore = 0;
    std::string unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__a;
    std::string unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__b;
    VlWide<5>/*159:0*/ unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range;
    VL_ZERO_W(160, unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vmore;
    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vmore = 0;
    std::string unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__unnamedblk505__DOT__a;
    std::string unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__unnamedblk505__DOT__b;
    VlWide<5>/*159:0*/ unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk506__DOT__range;
    {
        if ((! this->__PVT__m_mems_info.exists(mem))) {
            this->__Vfunc_uvm_report_enabled__102__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__102__severity = 2U;
            __Vfunc_uvm_report_enabled__102__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__103__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__103__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__104__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__104__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__102__verbosity, (IData)(__Vfunc_uvm_report_enabled__102__severity), this->__Vfunc_uvm_report_enabled__102__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 896)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__108__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__108__context_name = ""s;
                __Vtask_uvm_report_error__108__line = 0x00000380U;
                this->__Vtask_uvm_report_error__108__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__108__verbosity = 0U;
                this->__Vtask_uvm_report_error__108__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot modify offset of memory '"s, __VlefCall_1__get_full_name), "' in address map '"s), __VlefCall_2__get_full_name), "' : memory not mapped in that address map"s));
                this->__Vtask_uvm_report_error__108__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__109__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__109__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__110__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__110__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__108__id, this->__Vtask_uvm_report_error__108__message, __Vtask_uvm_report_error__108__verbosity, this->__Vtask_uvm_report_error__108__filename, __Vtask_uvm_report_error__108__line, this->__Vtask_uvm_report_error__108__context_name, (IData)(__Vtask_uvm_report_error__108__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        unnamedblk499__DOT__info = this->__PVT__m_mems_info
            .at(mem);
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk499__DOT__blk);
        this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk499__DOT__top_map);
        VL_NULL_CHECK(unnamedblk499__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 907)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_3__is_locked);
        if (__VlefCall_3__is_locked) {
            if ((1U & (~ VL_NULL_CHECK(unnamedblk499__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 910)
                       ->__PVT__unmapped))) {
                unnamedblk499__DOT__unnamedblk500__DOT__range__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk499__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 911)
                       ->__PVT__m_mems_by_offset.first(unnamedblk499__DOT__unnamedblk500__DOT__range__Vnext));
                while (unnamedblk499__DOT__unnamedblk500__DOT__range__Vmore) {
                    unnamedblk499__DOT__unnamedblk500__DOT__range[0U] 
                        = unnamedblk499__DOT__unnamedblk500__DOT__range__Vnext[0U];
                    unnamedblk499__DOT__unnamedblk500__DOT__range[1U] 
                        = unnamedblk499__DOT__unnamedblk500__DOT__range__Vnext[1U];
                    unnamedblk499__DOT__unnamedblk500__DOT__range[2U] 
                        = unnamedblk499__DOT__unnamedblk500__DOT__range__Vnext[2U];
                    unnamedblk499__DOT__unnamedblk500__DOT__range[3U] 
                        = unnamedblk499__DOT__unnamedblk500__DOT__range__Vnext[3U];
                    unnamedblk499__DOT__unnamedblk500__DOT__range[4U] 
                        = unnamedblk499__DOT__unnamedblk500__DOT__range__Vnext[4U];
                    unnamedblk499__DOT__unnamedblk500__DOT__range__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk499__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 911)
                           ->__PVT__m_mems_by_offset.next(unnamedblk499__DOT__unnamedblk500__DOT__range__Vnext));
                    __VlefExpr_4 = (VL_NULL_CHECK(unnamedblk499__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 912)
                                    ->__PVT__m_mems_by_offset
                                    .at(unnamedblk499__DOT__unnamedblk500__DOT__range) 
                                    == mem);
                    if (__VlefExpr_4) {
                        VL_NULL_CHECK(unnamedblk499__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 913)->__PVT__m_mems_by_offset.erase(unnamedblk499__DOT__unnamedblk500__DOT__range);
                    }
                }
            }
            if ((1U & (~ (IData)(unmapped)))) {
                unnamedblk499__DOT__unnamedblk501__DOT__addrs.clear();
                unnamedblk499__DOT__unnamedblk501__DOT__addrs.atDefault() = 0;
                unnamedblk499__DOT__unnamedblk501__DOT__addrs_max.clear();
                unnamedblk499__DOT__unnamedblk501__DOT__addrs_max.atDefault() = 0;
                unnamedblk499__DOT__unnamedblk501__DOT__min = 0ULL;
                unnamedblk499__DOT__unnamedblk501__DOT__max = 0ULL;
                unnamedblk499__DOT__unnamedblk501__DOT__max2 = 0ULL;
                unnamedblk499__DOT__unnamedblk501__DOT__stride = 0U;
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 923)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 0ULL, __VlefCall_5__get_n_bytes, unnamedblk499__DOT__unnamedblk501__DOT__addrs, __Vtask_get_physical_addresses__116__Vfuncout);
                unnamedblk499__DOT__unnamedblk501__DOT__min 
                    = ((unnamedblk499__DOT__unnamedblk501__DOT__addrs.at(0U) 
                        < unnamedblk499__DOT__unnamedblk501__DOT__addrs.at(
                                                                           (unnamedblk499__DOT__unnamedblk501__DOT__addrs.size() 
                                                                            - (IData)(1U))))
                        ? unnamedblk499__DOT__unnamedblk501__DOT__addrs.at(0U)
                        : unnamedblk499__DOT__unnamedblk501__DOT__addrs.at(
                                                                           (unnamedblk499__DOT__unnamedblk501__DOT__addrs.size() 
                                                                            - (IData)(1U))));
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 927)->__VnoInFunc_get_size(vlSymsp, __VlefCall_6__get_size);
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 928)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_7__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 
                                                         (__VlefCall_6__get_size 
                                                          - 1ULL), __VlefCall_7__get_n_bytes, unnamedblk499__DOT__unnamedblk501__DOT__addrs_max, __Vtask_get_physical_addresses__119__Vfuncout);
                unnamedblk499__DOT__unnamedblk501__DOT__max 
                    = ((unnamedblk499__DOT__unnamedblk501__DOT__addrs_max.at(0U) 
                        > unnamedblk499__DOT__unnamedblk501__DOT__addrs_max.at(
                                                                               (unnamedblk499__DOT__unnamedblk501__DOT__addrs_max.size() 
                                                                                - (IData)(1U))))
                        ? unnamedblk499__DOT__unnamedblk501__DOT__addrs_max.at(0U)
                        : unnamedblk499__DOT__unnamedblk501__DOT__addrs_max.at(
                                                                               (unnamedblk499__DOT__unnamedblk501__DOT__addrs_max.size() 
                                                                                - (IData)(1U))));
                unnamedblk499__DOT__unnamedblk501__DOT__max2 
                    = unnamedblk499__DOT__unnamedblk501__DOT__addrs_max.at(0U);
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 933)->__VnoInFunc_get_size(vlSymsp, __VlefCall_8__get_size);
                unnamedblk499__DOT__unnamedblk501__DOT__stride 
                    = (IData)(VL_DIV_QQQ(64, (unnamedblk499__DOT__unnamedblk501__DOT__max2 
                                              - unnamedblk499__DOT__unnamedblk501__DOT__max), 
                                         (__VlefCall_8__get_size 
                                          - 1ULL)));
                unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk499__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 936)
                       ->__PVT__m_regs_by_offset.first(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr__Vnext));
                while (unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr__Vmore) {
                    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr 
                        = unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr__Vnext;
                    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk499__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 936)
                           ->__PVT__m_regs_by_offset.next(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr__Vnext));
                    if (((unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr 
                          >= unnamedblk499__DOT__unnamedblk501__DOT__min) 
                         & (unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr 
                            <= unnamedblk499__DOT__unnamedblk501__DOT__max))) {
                        unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__a = ""s;
                        unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__b = ""s;
                        VL_SFORMAT_NX(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__a
                                      ,"[%0h:%0h]",2
                                      , '#',64,unnamedblk499__DOT__unnamedblk501__DOT__min
                                      , '#',64,unnamedblk499__DOT__unnamedblk501__DOT__max);
                        VL_SFORMAT_NX(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__b
                                      ,"%0h",1, '#',64,unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr);
                        this->__Vfunc_uvm_report_enabled__121__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__121__severity = 1U;
                        __Vfunc_uvm_report_enabled__121__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__122__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__122__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__123__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__123__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__121__verbosity, (IData)(__Vfunc_uvm_report_enabled__121__severity), this->__Vfunc_uvm_report_enabled__121__id, __VlefCall_9__uvm_report_enabled);
                        if ((0U != __VlefCall_9__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                            VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 944)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                            VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk499__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 944)
                                          ->__PVT__m_regs_by_offset
                                          .at(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__reg_addr), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 944)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                            __Vtask_uvm_report_warning__128__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__128__context_name = ""s;
                            __Vtask_uvm_report_warning__128__line = 0x000003b0U;
                            this->__Vtask_uvm_report_warning__128__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__128__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__128__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_10__get_full_name), "' memory '"s), __VlefCall_11__get_full_name), "' with range "s), unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__a), " overlaps with address of existing register '"s), __VlefCall_12__get_full_name), "': 'h"s), unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk502__DOT__unnamedblk503__DOT__b));
                            this->__Vtask_uvm_report_warning__128__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__129__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__129__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__130__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__130__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__128__id, this->__Vtask_uvm_report_warning__128__message, __Vtask_uvm_report_warning__128__verbosity, this->__Vtask_uvm_report_warning__128__filename, __Vtask_uvm_report_warning__128__line, this->__Vtask_uvm_report_warning__128__context_name, (IData)(__Vtask_uvm_report_warning__128__report_enabled_checked));
                        }
                    }
                }
                unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk499__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 948)
                       ->__PVT__m_mems_by_offset.first(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vnext));
                while (unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vmore) {
                    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[0U] 
                        = unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vnext[0U];
                    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[1U] 
                        = unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vnext[1U];
                    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[2U] 
                        = unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vnext[2U];
                    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[3U] 
                        = unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vnext[3U];
                    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[4U] 
                        = unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vnext[4U];
                    unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk499__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 948)
                           ->__PVT__m_mems_by_offset.next(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range__Vnext));
                    if (((((unnamedblk499__DOT__unnamedblk501__DOT__min 
                            <= (((QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[2U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[1U])))) 
                           & (unnamedblk499__DOT__unnamedblk501__DOT__max 
                              >= (((QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[2U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[1U]))))) 
                          | ((unnamedblk499__DOT__unnamedblk501__DOT__min 
                              <= (((QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[4U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[3U])))) 
                             & (unnamedblk499__DOT__unnamedblk501__DOT__max 
                                >= (((QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[4U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[3U])))))) 
                         | ((unnamedblk499__DOT__unnamedblk501__DOT__min 
                             >= (((QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[4U])) 
                                  << 0x00000020U) | (QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[3U])))) 
                            & (unnamedblk499__DOT__unnamedblk501__DOT__max 
                               <= (((QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[2U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[1U]))))))) {
                        unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__unnamedblk505__DOT__a = ""s;
                        unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__unnamedblk505__DOT__b = ""s;
                        VL_SFORMAT_NX(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__unnamedblk505__DOT__a
                                      ,"[%0h:%0h]",2
                                      , '#',64,unnamedblk499__DOT__unnamedblk501__DOT__min
                                      , '#',64,unnamedblk499__DOT__unnamedblk501__DOT__max);
                        VL_SFORMAT_NX(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__unnamedblk505__DOT__b
                                      ,"[%0h:%0h]",2
                                      , '#',64,(((QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[4U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[3U])))
                                      , '#',64,(((QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range[1U]))));
                        this->__Vfunc_uvm_report_enabled__132__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__132__severity = 1U;
                        __Vfunc_uvm_report_enabled__132__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__133__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__133__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__134__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__134__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__132__verbosity, (IData)(__Vfunc_uvm_report_enabled__132__severity), this->__Vfunc_uvm_report_enabled__132__id, __VlefCall_13__uvm_report_enabled);
                        if ((0U != __VlefCall_13__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                            VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 958)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                            VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk499__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 958)
                                          ->__PVT__m_mems_by_offset
                                          .at(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__range), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 958)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                            __Vtask_uvm_report_warning__139__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__139__context_name = ""s;
                            __Vtask_uvm_report_warning__139__line = 0x000003beU;
                            this->__Vtask_uvm_report_warning__139__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__139__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__139__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_14__get_full_name), "' memory '"s), __VlefCall_15__get_full_name), "' with range "s), unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__unnamedblk505__DOT__a), " overlaps existing memory with range '"s), __VlefCall_16__get_full_name), "': "s), unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk504__DOT__unnamedblk505__DOT__b));
                            this->__Vtask_uvm_report_warning__139__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__140__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__140__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__141__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__141__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__139__id, this->__Vtask_uvm_report_warning__139__message, __Vtask_uvm_report_warning__139__verbosity, this->__Vtask_uvm_report_warning__139__filename, __Vtask_uvm_report_warning__139__line, this->__Vtask_uvm_report_warning__139__context_name, (IData)(__Vtask_uvm_report_warning__139__report_enabled_checked));
                        }
                    }
                }
                unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk506__DOT__range[0U] 
                    = unnamedblk499__DOT__unnamedblk501__DOT__stride;
                unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk506__DOT__range[1U] 
                    = (IData)(unnamedblk499__DOT__unnamedblk501__DOT__max);
                unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk506__DOT__range[2U] 
                    = (IData)((unnamedblk499__DOT__unnamedblk501__DOT__max 
                               >> 0x00000020U));
                unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk506__DOT__range[3U] 
                    = (IData)(unnamedblk499__DOT__unnamedblk501__DOT__min);
                unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk506__DOT__range[4U] 
                    = (IData)((unnamedblk499__DOT__unnamedblk501__DOT__min 
                               >> 0x00000020U));
                VL_NULL_CHECK(unnamedblk499__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 964)->__PVT__m_mems_by_offset.at(unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk506__DOT__range) 
                    = mem;
                VL_NULL_CHECK(unnamedblk499__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 965)->__PVT__addr 
                    = unnamedblk499__DOT__unnamedblk501__DOT__addrs;
                VL_ASSIGN_W(160, VL_NULL_CHECK(unnamedblk499__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 966)
                            ->__PVT__mem_range, unnamedblk499__DOT__unnamedblk501__DOT__unnamedblk506__DOT__range);
            }
        }
        if (unmapped) {
            VL_NULL_CHECK(unnamedblk499__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 973)->__PVT__offset = 0xffffffffffffffffULL;
            VL_NULL_CHECK(unnamedblk499__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 974)->__PVT__unmapped = 1U;
        } else {
            VL_NULL_CHECK(unnamedblk499__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 977)->__PVT__offset 
                = offset;
            VL_NULL_CHECK(unnamedblk499__DOT__info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 978)->__PVT__unmapped = 0U;
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_submap(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> child_map, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_submap\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__143__verbosity;
    __Vfunc_uvm_report_enabled__143__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__143__severity;
    __Vfunc_uvm_report_enabled__143__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__144__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__145__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__148__verbosity;
    __Vtask_uvm_report_error__148__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__148__line;
    __Vtask_uvm_report_error__148__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__148__report_enabled_checked;
    __Vtask_uvm_report_error__148__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__149__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__150__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__153__verbosity;
    __Vfunc_uvm_report_enabled__153__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__153__severity;
    __Vfunc_uvm_report_enabled__153__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__154__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__155__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__160__verbosity;
    __Vtask_uvm_report_error__160__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__160__line;
    __Vtask_uvm_report_error__160__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__160__report_enabled_checked;
    __Vtask_uvm_report_error__160__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__161__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__162__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__165__verbosity;
    __Vfunc_uvm_report_enabled__165__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__165__severity;
    __Vfunc_uvm_report_enabled__165__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__166__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__167__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__170__verbosity;
    __Vtask_uvm_report_error__170__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__170__line;
    __Vtask_uvm_report_error__170__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__170__report_enabled_checked;
    __Vtask_uvm_report_error__170__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__171__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__172__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__177__verbosity;
    __Vfunc_uvm_report_enabled__177__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__177__severity;
    __Vfunc_uvm_report_enabled__177__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__178__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__179__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__185__verbosity;
    __Vtask_uvm_report_error__185__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__185__line;
    __Vtask_uvm_report_error__185__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__185__report_enabled_checked;
    __Vtask_uvm_report_error__185__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__186__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__187__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__190__verbosity;
    __Vfunc_uvm_report_enabled__190__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__190__severity;
    __Vfunc_uvm_report_enabled__190__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__191__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__192__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__197__verbosity;
    __Vtask_uvm_report_warning__197__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__197__line;
    __Vtask_uvm_report_warning__197__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__197__report_enabled_checked;
    __Vtask_uvm_report_warning__197__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__198__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__199__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_20__get_full_name;
    std::string __VlefCall_19__get_full_name;
    IData/*31:0*/ __VlefCall_18__get_n_bytes;
    IData/*31:0*/ __VlefCall_17__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_16__get_n_bytes;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    std::string __VlefCall_12__get_full_name;
    IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_10;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> __VlefCall_9__get_parent;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> __VlefCall_8__get_parent;
    std::string __VlefCall_7__get_full_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> parent_block_check__DOT__child_blk;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> parent_map;
    {
        if ((VlNull{} == child_map)) {
            this->__Vfunc_uvm_report_enabled__143__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__143__severity = 2U;
            __Vfunc_uvm_report_enabled__143__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__144__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__144__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__145__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__145__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__143__verbosity, (IData)(__Vfunc_uvm_report_enabled__143__severity), this->__Vfunc_uvm_report_enabled__143__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__148__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__148__context_name = ""s;
                __Vtask_uvm_report_error__148__line = 0x000003e0U;
                this->__Vtask_uvm_report_error__148__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__148__verbosity = 0U;
                this->__Vtask_uvm_report_error__148__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Attempting to add NULL map to map '"s, __VlefCall_1__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__148__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__149__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__149__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__150__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__150__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__148__id, this->__Vtask_uvm_report_error__148__message, __Vtask_uvm_report_error__148__verbosity, this->__Vtask_uvm_report_error__148__filename, __Vtask_uvm_report_error__148__line, this->__Vtask_uvm_report_error__148__context_name, (IData)(__Vtask_uvm_report_error__148__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(child_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 996)->__VnoInFunc_get_parent_map(vlSymsp, parent_map);
        if ((VlNull{} != parent_map)) {
            this->__Vfunc_uvm_report_enabled__153__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__153__severity = 2U;
            __Vfunc_uvm_report_enabled__153__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__154__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__154__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__155__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__155__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__153__verbosity, (IData)(__Vfunc_uvm_report_enabled__153__severity), this->__Vfunc_uvm_report_enabled__153__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                VL_NULL_CHECK(child_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1005)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                VL_NULL_CHECK(parent_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1005)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__160__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__160__context_name = ""s;
                __Vtask_uvm_report_error__160__line = 0x000003edU;
                this->__Vtask_uvm_report_error__160__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__160__verbosity = 0U;
                this->__Vtask_uvm_report_error__160__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_3__get_full_name), "' is already a child of map '"s), __VlefCall_4__get_full_name), "'. Cannot also be a child of map '"s), __VlefCall_5__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__160__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__161__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__161__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__162__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__162__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__160__id, this->__Vtask_uvm_report_error__160__message, __Vtask_uvm_report_error__160__verbosity, this->__Vtask_uvm_report_error__160__filename, __Vtask_uvm_report_error__160__line, this->__Vtask_uvm_report_error__160__context_name, (IData)(__Vtask_uvm_report_error__160__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(child_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1010)->__VnoInFunc_get_parent(vlSymsp, parent_block_check__DOT__child_blk);
        if ((VlNull{} == parent_block_check__DOT__child_blk)) {
            this->__Vfunc_uvm_report_enabled__165__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__165__severity = 2U;
            __Vfunc_uvm_report_enabled__165__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__166__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__166__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__167__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__167__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__165__verbosity, (IData)(__Vfunc_uvm_report_enabled__165__severity), this->__Vfunc_uvm_report_enabled__165__id, __VlefCall_6__uvm_report_enabled);
            if ((0U != __VlefCall_6__uvm_report_enabled)) {
                VL_NULL_CHECK(child_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1013)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_error__170__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__170__context_name = ""s;
                __Vtask_uvm_report_error__170__line = 0x000003f5U;
                this->__Vtask_uvm_report_error__170__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__170__verbosity = 0U;
                this->__Vtask_uvm_report_error__170__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot add submap '"s, __VlefCall_7__get_full_name), "' because it does not have a parent block"s));
                this->__Vtask_uvm_report_error__170__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__171__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__171__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__172__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__172__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__170__id, this->__Vtask_uvm_report_error__170__message, __Vtask_uvm_report_error__170__verbosity, this->__Vtask_uvm_report_error__170__filename, __Vtask_uvm_report_error__170__line, this->__Vtask_uvm_report_error__170__context_name, (IData)(__Vtask_uvm_report_error__170__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        while (true) {
            __VlefLogAnd_10 = (VlNull{} != parent_block_check__DOT__child_blk);
            if (__VlefLogAnd_10) {
                VL_NULL_CHECK(parent_block_check__DOT__child_blk, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1016)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_8__get_parent);
                this->__VnoInFunc_get_parent(vlSymsp, __VlefCall_9__get_parent);
                __VlefLogAnd_10 = (__VlefCall_8__get_parent 
                                   != __VlefCall_9__get_parent);
            }
            if (!(__VlefLogAnd_10)) break;
            VL_NULL_CHECK(parent_block_check__DOT__child_blk, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1017)->__VnoInFunc_get_parent(vlSymsp, parent_block_check__DOT__child_blk);
        }
        if ((VlNull{} == parent_block_check__DOT__child_blk)) {
            this->__Vfunc_uvm_report_enabled__177__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__177__severity = 2U;
            __Vfunc_uvm_report_enabled__177__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__178__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__178__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__179__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__179__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__177__verbosity, (IData)(__Vfunc_uvm_report_enabled__177__severity), this->__Vfunc_uvm_report_enabled__177__id, __VlefCall_11__uvm_report_enabled);
            if ((0U != __VlefCall_11__uvm_report_enabled)) {
                VL_NULL_CHECK(child_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1024)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                VL_NULL_CHECK(parent_block_check__DOT__child_blk, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1024)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1024)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                __Vtask_uvm_report_error__185__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__185__context_name = ""s;
                __Vtask_uvm_report_error__185__line = 0x00000400U;
                this->__Vtask_uvm_report_error__185__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__185__verbosity = 0U;
                this->__Vtask_uvm_report_error__185__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Submap '"s, __VlefCall_12__get_full_name), "' may not be added to this "s), "address map, '"s), __VlefCall_13__get_full_name), "', as the submap's parent block, '"s), __VlefCall_14__get_full_name), "', is neither this map's parent block nor a descendent of this map's parent block, '"s), __VlefCall_15__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__185__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__186__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__186__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__187__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__187__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__185__id, this->__Vtask_uvm_report_error__185__message, __Vtask_uvm_report_error__185__verbosity, this->__Vtask_uvm_report_error__185__filename, __Vtask_uvm_report_error__185__line, this->__Vtask_uvm_report_error__185__context_name, (IData)(__Vtask_uvm_report_error__185__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(child_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1030)->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_16__get_n_bytes);
        if ((this->__PVT__m_n_bytes > __VlefCall_16__get_n_bytes)) {
            this->__Vfunc_uvm_report_enabled__190__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__190__severity = 1U;
            __Vfunc_uvm_report_enabled__190__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__191__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__191__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__192__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__192__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__190__verbosity, (IData)(__Vfunc_uvm_report_enabled__190__severity), this->__Vfunc_uvm_report_enabled__190__id, __VlefCall_17__uvm_report_enabled);
            if ((0U != __VlefCall_17__uvm_report_enabled)) {
                VL_NULL_CHECK(child_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1034)->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_18__get_n_bytes);
                VL_NULL_CHECK(child_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1034)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                __Vtask_uvm_report_warning__197__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__197__context_name = ""s;
                __Vtask_uvm_report_warning__197__line = 0x0000040aU;
                this->__Vtask_uvm_report_warning__197__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_warning__197__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__197__message
                              ,"Adding %0d-byte submap '%s' to %0d-byte parent map '%s'",4
                              , '#',32,__VlefCall_18__get_n_bytes
                              , 'S',&(__VlefCall_19__get_full_name)
                              , '#',32,this->__PVT__m_n_bytes
                              , 'S',&(__VlefCall_20__get_full_name));
                this->__Vtask_uvm_report_warning__197__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__198__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__198__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__199__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__199__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__197__id, this->__Vtask_uvm_report_warning__197__message, __Vtask_uvm_report_warning__197__verbosity, this->__Vtask_uvm_report_warning__197__filename, __Vtask_uvm_report_warning__197__line, this->__Vtask_uvm_report_warning__197__context_name, (IData)(__Vtask_uvm_report_warning__197__report_enabled_checked));
            }
        }
        VL_NULL_CHECK(child_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1038)->__VnoInFunc_add_parent_map(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, offset);
        this->__VnoInFunc_set_submap_offset(vlSymsp, child_map, offset);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_reset(VUVM_Register8b__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_reset\n"); );
    // Body
    IData/*31:0*/ unnamedblk507__DOT__i;
    unnamedblk507__DOT__i = 0;
    IData/*31:0*/ unnamedblk507__DOT__i__Vloopsize;
    unnamedblk507__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg>> regs;
    regs.clear();
    this->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
    unnamedblk507__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk507__DOT__i, regs.size())) {
        unnamedblk507__DOT__i__Vloopsize = regs.size();
        VL_NULL_CHECK(regs.at(unnamedblk507__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1053)->__VnoInFunc_reset(vlSymsp, kind);
        if ((unnamedblk507__DOT__i__Vloopsize <= regs.size())) {
            unnamedblk507__DOT__i = ((IData)(1U) + unnamedblk507__DOT__i);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_parent_map(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> parent_map, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_parent_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__205__verbosity;
    __Vfunc_uvm_report_enabled__205__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__205__severity;
    __Vfunc_uvm_report_enabled__205__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__206__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__207__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__210__verbosity;
    __Vtask_uvm_report_error__210__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__210__line;
    __Vtask_uvm_report_error__210__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__210__report_enabled_checked;
    __Vtask_uvm_report_error__210__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__211__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__212__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__214__verbosity;
    __Vfunc_uvm_report_enabled__214__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__214__severity;
    __Vfunc_uvm_report_enabled__214__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__215__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__216__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__221__verbosity;
    __Vtask_uvm_report_error__221__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__221__line;
    __Vtask_uvm_report_error__221__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__221__report_enabled_checked;
    __Vtask_uvm_report_error__221__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__222__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__223__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_5__get_submap_offset;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == parent_map)) {
            this->__Vfunc_uvm_report_enabled__205__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__205__severity = 2U;
            __Vfunc_uvm_report_enabled__205__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__206__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__206__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__207__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__207__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__205__verbosity, (IData)(__Vfunc_uvm_report_enabled__205__severity), this->__Vfunc_uvm_report_enabled__205__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__210__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__210__context_name = ""s;
                __Vtask_uvm_report_error__210__line = 0x00000428U;
                this->__Vtask_uvm_report_error__210__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__210__verbosity = 0U;
                this->__Vtask_uvm_report_error__210__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Attempting to add NULL parent map to map '"s, __VlefCall_1__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__210__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__211__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__211__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__212__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__212__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__210__id, this->__Vtask_uvm_report_error__210__message, __Vtask_uvm_report_error__210__verbosity, this->__Vtask_uvm_report_error__210__filename, __Vtask_uvm_report_error__210__line, this->__Vtask_uvm_report_error__210__context_name, (IData)(__Vtask_uvm_report_error__210__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__m_parent_map)) {
            this->__Vfunc_uvm_report_enabled__214__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__214__severity = 2U;
            __Vfunc_uvm_report_enabled__214__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__215__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__215__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__216__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__216__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__214__verbosity, (IData)(__Vfunc_uvm_report_enabled__214__severity), this->__Vfunc_uvm_report_enabled__214__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_parent_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1072)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_parent_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1072)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_5__get_submap_offset);
                __Vtask_uvm_report_error__221__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__221__context_name = ""s;
                __Vtask_uvm_report_error__221__line = 0x00000430U;
                this->__Vtask_uvm_report_error__221__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__221__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__221__message
                              ,"Map \"%s\" already a submap of map \"%s\" at offset 'h%h",3
                              , 'S',&(__VlefCall_3__get_full_name)
                              , 'S',&(__VlefCall_4__get_full_name)
                              , '#',64,__VlefCall_5__get_submap_offset);
                this->__Vtask_uvm_report_error__221__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__222__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__222__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__223__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__223__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__221__id, this->__Vtask_uvm_report_error__221__message, __Vtask_uvm_report_error__221__verbosity, this->__Vtask_uvm_report_error__221__filename, __Vtask_uvm_report_error__221__line, this->__Vtask_uvm_report_error__221__context_name, (IData)(__Vtask_uvm_report_error__221__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        this->__PVT__m_parent_map = parent_map;
        this->__PVT__m_parent_maps.at(parent_map) = offset;
        VL_NULL_CHECK(parent_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1078)->__PVT__m_submaps.at(
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}) 
            = offset;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_sequencer(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_sequencer\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__225__verbosity;
    __Vfunc_uvm_report_enabled__225__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__225__severity;
    __Vfunc_uvm_report_enabled__225__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__226__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__227__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__229__verbosity;
    __Vtask_uvm_report_error__229__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__229__line;
    __Vtask_uvm_report_error__229__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__229__report_enabled_checked;
    __Vtask_uvm_report_error__229__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__230__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__231__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__233__verbosity;
    __Vfunc_uvm_report_enabled__233__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__233__severity;
    __Vfunc_uvm_report_enabled__233__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__234__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__235__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__239__verbosity;
    __Vtask_uvm_report_info__239__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__239__line;
    __Vtask_uvm_report_info__239__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__239__report_enabled_checked;
    __Vtask_uvm_report_info__239__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__240__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__241__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == sequencer)) {
            this->__Vfunc_uvm_report_enabled__225__id = "REG_NULL_SQR"s;
            __Vfunc_uvm_report_enabled__225__severity = 2U;
            __Vfunc_uvm_report_enabled__225__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__226__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__226__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__227__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__227__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__225__verbosity, (IData)(__Vfunc_uvm_report_enabled__225__severity), this->__Vfunc_uvm_report_enabled__225__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__229__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__229__context_name = ""s;
                __Vtask_uvm_report_error__229__line = 0x00000441U;
                this->__Vtask_uvm_report_error__229__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__229__verbosity = 0U;
                this->__Vtask_uvm_report_error__229__message = "Null reference specified for bus sequencer"s;
                this->__Vtask_uvm_report_error__229__id = "REG_NULL_SQR"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__230__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__230__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__231__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__231__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__229__id, this->__Vtask_uvm_report_error__229__message, __Vtask_uvm_report_error__229__verbosity, this->__Vtask_uvm_report_error__229__filename, __Vtask_uvm_report_error__229__line, this->__Vtask_uvm_report_error__229__context_name, (IData)(__Vtask_uvm_report_error__229__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == adapter)) {
            this->__Vfunc_uvm_report_enabled__233__id = "REG_NO_ADAPT"s;
            __Vfunc_uvm_report_enabled__233__severity = 0U;
            __Vfunc_uvm_report_enabled__233__verbosity = 0x000000c8U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__234__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__234__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__235__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__235__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__233__verbosity, (IData)(__Vfunc_uvm_report_enabled__233__severity), this->__Vfunc_uvm_report_enabled__233__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1096)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_info__239__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__239__context_name = ""s;
                __Vtask_uvm_report_info__239__line = 0x00000448U;
                this->__Vtask_uvm_report_info__239__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_info__239__verbosity = 0x000000c8U;
                this->__Vtask_uvm_report_info__239__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Adapter not specified for map '"s, __VlefCall_2__get_full_name), "'. Accesses via this map will send abstract 'uvm_reg_item' items to sequencer '"s), __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_info__239__id = "REG_NO_ADAPT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__240__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__240__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__241__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__241__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__239__id, this->__Vtask_uvm_report_info__239__message, __Vtask_uvm_report_info__239__verbosity, this->__Vtask_uvm_report_info__239__filename, __Vtask_uvm_report_info__239__line, this->__Vtask_uvm_report_info__239__context_name, (IData)(__Vtask_uvm_report_info__239__report_enabled_checked));
            }
        }
        this->__PVT__m_sequencer = sequencer;
        this->__PVT__m_adapter = adapter;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent_map(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &get_parent_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent_map\n"); );
    // Body
    get_parent_map__Vfuncrtn = this->__PVT__m_parent_map;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_root_map(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &get_root_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_root_map\n"); );
    // Body
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> __VlefCond_1;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> __VlefCall_0__get_root_map;
    if ((VlNull{} == this->__PVT__m_parent_map)) {
        __VlefCond_1 = VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this};
    } else {
        VL_NULL_CHECK(this->__PVT__m_parent_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1126)->__VnoInFunc_get_root_map(vlSymsp, __VlefCall_0__get_root_map);
        __VlefCond_1 = __VlefCall_0__get_root_map;
    }
    get_root_map__Vfuncrtn = __VlefCond_1;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_base_addr(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ hier, QData/*63:0*/ &get_base_addr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_base_addr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_0__get_base_addr;
    {
        get_base_addr__Vfuncrtn = 0ULL;
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_base_addr__Vfuncrtn = this->__PVT__m_base_addr;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1136)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, get_base_addr__Vfuncrtn);
        VL_NULL_CHECK(this->__PVT__m_parent_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1137)->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 1U, __VlefCall_0__get_base_addr);
        get_base_addr__Vfuncrtn = (get_base_addr__Vfuncrtn 
                                   + __VlefCall_0__get_base_addr);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_n_bytes(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_n_bytes\n"); );
    // Body
    {
        get_n_bytes__Vfuncrtn = 0U;
        if ((0U == hier)) {
            get_n_bytes__Vfuncrtn = this->__PVT__m_n_bytes;
            goto __Vlabel0;
        }
        get_n_bytes__Vfuncrtn = this->__PVT__m_system_n_bytes;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_addr_unit_bytes(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_addr_unit_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_addr_unit_bytes\n"); );
    // Body
    get_addr_unit_bytes__Vfuncrtn = ((IData)(this->__PVT__m_byte_addressing)
                                      ? 1U : this->__PVT__m_n_bytes);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_endian(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_endian__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_endian\n"); );
    // Body
    {
        get_endian__Vfuncrtn = 0U;
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_endian__Vfuncrtn = this->__PVT__m_endian;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1162)->__VnoInFunc_get_endian(vlSymsp, hier, get_endian__Vfuncrtn);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_sequencer(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_sequencer\n"); );
    // Body
    {
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_sequencer__Vfuncrtn = this->__PVT__m_sequencer;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1171)->__VnoInFunc_get_sequencer(vlSymsp, hier, get_sequencer__Vfuncrtn);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_adapter(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_adapter> &get_adapter__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_adapter\n"); );
    // Body
    {
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_adapter__Vfuncrtn = this->__PVT__m_adapter;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1180)->__VnoInFunc_get_adapter(vlSymsp, hier, get_adapter__Vfuncrtn);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submaps(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>> &maps, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submaps\n"); );
    // Body
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk508__DOT__submap;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk508__DOT__submap__Vnext;
    CData/*0:0*/ unnamedblk508__DOT__submap__Vmore;
    unnamedblk508__DOT__submap__Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk509__DOT__submap_;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk509__DOT__submap___Vnext;
    CData/*0:0*/ unnamedblk509__DOT__submap___Vmore;
    unnamedblk509__DOT__submap___Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk509__DOT__unnamedblk510__DOT__submap;
    unnamedblk508__DOT__submap__Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk508__DOT__submap__Vnext));
    while (unnamedblk508__DOT__submap__Vmore) {
        unnamedblk508__DOT__submap = unnamedblk508__DOT__submap__Vnext;
        unnamedblk508__DOT__submap__Vmore = (0U != this->__PVT__m_submaps.next(unnamedblk508__DOT__submap__Vnext));
        maps.push_back(unnamedblk508__DOT__submap);
    }
    if ((1U == hier)) {
        unnamedblk509__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk509__DOT__submap___Vnext));
        while (unnamedblk509__DOT__submap___Vmore) {
            unnamedblk509__DOT__submap_ = unnamedblk509__DOT__submap___Vnext;
            unnamedblk509__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk509__DOT__submap___Vnext));
            unnamedblk509__DOT__unnamedblk510__DOT__submap 
                = unnamedblk509__DOT__submap_;
            VL_NULL_CHECK(unnamedblk509__DOT__unnamedblk510__DOT__submap, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1195)->__VnoInFunc_get_submaps(vlSymsp, maps, 1U);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_registers(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_registers\n"); );
    // Body
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk511__DOT__rg;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk511__DOT__rg__Vnext;
    CData/*0:0*/ unnamedblk511__DOT__rg__Vmore;
    unnamedblk511__DOT__rg__Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk512__DOT__submap_;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk512__DOT__submap___Vnext;
    CData/*0:0*/ unnamedblk512__DOT__submap___Vmore;
    unnamedblk512__DOT__submap___Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk512__DOT__unnamedblk513__DOT__submap;
    unnamedblk511__DOT__rg__Vmore = (0U != this->__PVT__m_regs_info.first(unnamedblk511__DOT__rg__Vnext));
    while (unnamedblk511__DOT__rg__Vmore) {
        unnamedblk511__DOT__rg = unnamedblk511__DOT__rg__Vnext;
        unnamedblk511__DOT__rg__Vmore = (0U != this->__PVT__m_regs_info.next(unnamedblk511__DOT__rg__Vnext));
        regs.push_back(unnamedblk511__DOT__rg);
    }
    if ((1U == hier)) {
        unnamedblk512__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk512__DOT__submap___Vnext));
        while (unnamedblk512__DOT__submap___Vmore) {
            unnamedblk512__DOT__submap_ = unnamedblk512__DOT__submap___Vnext;
            unnamedblk512__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk512__DOT__submap___Vnext));
            unnamedblk512__DOT__unnamedblk513__DOT__submap 
                = unnamedblk512__DOT__submap_;
            VL_NULL_CHECK(unnamedblk512__DOT__unnamedblk513__DOT__submap, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1210)->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_fields(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_fields\n"); );
    // Body
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk514__DOT__rg_;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk514__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk514__DOT__rg___Vmore;
    unnamedblk514__DOT__rg___Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk514__DOT__unnamedblk515__DOT__rg;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk516__DOT__submap_;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk516__DOT__submap___Vnext;
    CData/*0:0*/ unnamedblk516__DOT__submap___Vmore;
    unnamedblk516__DOT__submap___Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk516__DOT__unnamedblk517__DOT__submap;
    unnamedblk514__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.first(unnamedblk514__DOT__rg___Vnext));
    while (unnamedblk514__DOT__rg___Vmore) {
        unnamedblk514__DOT__rg_ = unnamedblk514__DOT__rg___Vnext;
        unnamedblk514__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.next(unnamedblk514__DOT__rg___Vnext));
        unnamedblk514__DOT__unnamedblk515__DOT__rg 
            = unnamedblk514__DOT__rg_;
        VL_NULL_CHECK(unnamedblk514__DOT__unnamedblk515__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1222)->__VnoInFunc_get_fields(vlSymsp, fields);
    }
    if ((1U == hier)) {
        unnamedblk516__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk516__DOT__submap___Vnext));
        while (unnamedblk516__DOT__submap___Vmore) {
            unnamedblk516__DOT__submap_ = unnamedblk516__DOT__submap___Vnext;
            unnamedblk516__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk516__DOT__submap___Vnext));
            unnamedblk516__DOT__unnamedblk517__DOT__submap 
                = unnamedblk516__DOT__submap_;
            VL_NULL_CHECK(unnamedblk516__DOT__unnamedblk517__DOT__submap, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1228)->__VnoInFunc_get_fields(vlSymsp, fields, 1U);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_memories(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_memories\n"); );
    // Body
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk518__DOT__mem;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk518__DOT__mem__Vnext;
    CData/*0:0*/ unnamedblk518__DOT__mem__Vmore;
    unnamedblk518__DOT__mem__Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk519__DOT__submap_;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk519__DOT__submap___Vnext;
    CData/*0:0*/ unnamedblk519__DOT__submap___Vmore;
    unnamedblk519__DOT__submap___Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk519__DOT__unnamedblk520__DOT__submap;
    unnamedblk518__DOT__mem__Vmore = (0U != this->__PVT__m_mems_info.first(unnamedblk518__DOT__mem__Vnext));
    while (unnamedblk518__DOT__mem__Vmore) {
        unnamedblk518__DOT__mem = unnamedblk518__DOT__mem__Vnext;
        unnamedblk518__DOT__mem__Vmore = (0U != this->__PVT__m_mems_info.next(unnamedblk518__DOT__mem__Vnext));
        mems.push_back(unnamedblk518__DOT__mem);
    }
    if ((1U == hier)) {
        unnamedblk519__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk519__DOT__submap___Vnext));
        while (unnamedblk519__DOT__submap___Vmore) {
            unnamedblk519__DOT__submap_ = unnamedblk519__DOT__submap___Vnext;
            unnamedblk519__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk519__DOT__submap___Vnext));
            unnamedblk519__DOT__unnamedblk520__DOT__submap 
                = unnamedblk519__DOT__submap_;
            VL_NULL_CHECK(unnamedblk519__DOT__unnamedblk520__DOT__submap, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1244)->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_registers(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    IData/*31:0*/ unnamedblk521__DOT__i;
    unnamedblk521__DOT__i = 0;
    IData/*31:0*/ unnamedblk521__DOT__i__Vloopsize;
    unnamedblk521__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem>> mems;
    mems.clear();
    this->__VnoInFunc_get_memories(vlSymsp, mems, hier);
    unnamedblk521__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk521__DOT__i, mems.size())) {
        unnamedblk521__DOT__i__Vloopsize = mems.size();
        VL_NULL_CHECK(mems.at(unnamedblk521__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1258)->__VnoInFunc_get_virtual_registers(vlSymsp, regs);
        if ((unnamedblk521__DOT__i__Vloopsize <= mems.size())) {
            unnamedblk521__DOT__i = ((IData)(1U) + unnamedblk521__DOT__i);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_fields(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_fields\n"); );
    // Body
    IData/*31:0*/ unnamedblk522__DOT__i;
    unnamedblk522__DOT__i = 0;
    IData/*31:0*/ unnamedblk522__DOT__i__Vloopsize;
    unnamedblk522__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg>> regs;
    regs.clear();
    this->__VnoInFunc_get_virtual_registers(vlSymsp, regs, hier);
    unnamedblk522__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk522__DOT__i, regs.size())) {
        unnamedblk522__DOT__i__Vloopsize = regs.size();
        VL_NULL_CHECK(regs.at(unnamedblk522__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1271)->__VnoInFunc_get_fields(vlSymsp, fields);
        if ((unnamedblk522__DOT__i__Vloopsize <= regs.size())) {
            unnamedblk522__DOT__i = ((IData)(1U) + unnamedblk522__DOT__i);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    {
        get_full_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
        if ((VlNull{} == this->__PVT__m_parent)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1286)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), get_full_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_map_info(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem, CData/*0:0*/ error, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> &get_mem_map_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_map_info\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__260__verbosity;
    __Vfunc_uvm_report_enabled__260__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__260__severity;
    __Vfunc_uvm_report_enabled__260__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__261__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__262__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__266__verbosity;
    __Vtask_uvm_report_error__266__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__266__line;
    __Vtask_uvm_report_error__266__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__266__report_enabled_checked;
    __Vtask_uvm_report_error__266__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__267__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__268__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((! this->__PVT__m_mems_info.exists(mem))) {
            if (error) {
                this->__Vfunc_uvm_report_enabled__260__id = "REG_NO_MAP"s;
                __Vfunc_uvm_report_enabled__260__severity = 2U;
                __Vfunc_uvm_report_enabled__260__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__261__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__261__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__262__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__262__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__260__verbosity, (IData)(__Vfunc_uvm_report_enabled__260__severity), this->__Vfunc_uvm_report_enabled__260__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1296)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    __Vtask_uvm_report_error__266__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__266__context_name = ""s;
                    __Vtask_uvm_report_error__266__line = 0x00000510U;
                    this->__Vtask_uvm_report_error__266__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_error__266__verbosity = 0U;
                    this->__Vtask_uvm_report_error__266__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' not in map '"s), __VlefCall_2__get_name), "'"s));
                    this->__Vtask_uvm_report_error__266__id = "REG_NO_MAP"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__267__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__267__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__268__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__268__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__266__id, this->__Vtask_uvm_report_error__266__message, __Vtask_uvm_report_error__266__verbosity, this->__Vtask_uvm_report_error__266__filename, __Vtask_uvm_report_error__266__line, this->__Vtask_uvm_report_error__266__context_name, (IData)(__Vtask_uvm_report_error__266__report_enabled_checked));
                }
            }
            get_mem_map_info__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_mem_map_info__Vfuncrtn = this->__PVT__m_mems_info
            .at(mem);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_map_info(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> rg, CData/*0:0*/ error, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> &get_reg_map_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_map_info\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__270__verbosity;
    __Vfunc_uvm_report_enabled__270__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__270__severity;
    __Vfunc_uvm_report_enabled__270__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__271__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__272__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__276__verbosity;
    __Vtask_uvm_report_error__276__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__276__line;
    __Vtask_uvm_report_error__276__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__276__report_enabled_checked;
    __Vtask_uvm_report_error__276__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__277__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__278__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__280__verbosity;
    __Vfunc_uvm_report_enabled__280__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__280__severity;
    __Vfunc_uvm_report_enabled__280__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__281__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__282__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__285__verbosity;
    __Vtask_uvm_report_warning__285__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__285__line;
    __Vtask_uvm_report_warning__285__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__285__report_enabled_checked;
    __Vtask_uvm_report_warning__285__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__286__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__287__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> result;
    {
        if ((! this->__PVT__m_regs_info.exists(rg))) {
            if (error) {
                this->__Vfunc_uvm_report_enabled__270__id = "REG_NO_MAP"s;
                __Vfunc_uvm_report_enabled__270__severity = 2U;
                __Vfunc_uvm_report_enabled__270__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__271__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__271__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__272__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__272__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__270__verbosity, (IData)(__Vfunc_uvm_report_enabled__270__severity), this->__Vfunc_uvm_report_enabled__270__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1309)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    __Vtask_uvm_report_error__276__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__276__context_name = ""s;
                    __Vtask_uvm_report_error__276__line = 0x0000051dU;
                    this->__Vtask_uvm_report_error__276__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_error__276__verbosity = 0U;
                    this->__Vtask_uvm_report_error__276__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' not in map '"s), __VlefCall_2__get_name), "'"s));
                    this->__Vtask_uvm_report_error__276__id = "REG_NO_MAP"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__277__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__277__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__278__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__278__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__276__id, this->__Vtask_uvm_report_error__276__message, __Vtask_uvm_report_error__276__verbosity, this->__Vtask_uvm_report_error__276__filename, __Vtask_uvm_report_error__276__line, this->__Vtask_uvm_report_error__276__context_name, (IData)(__Vtask_uvm_report_error__276__report_enabled_checked));
                }
            }
            get_reg_map_info__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        result = this->__PVT__m_regs_info.at(rg);
        if ((1U & (~ VL_NULL_CHECK(result, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1313)
                   ->__PVT__is_initialized))) {
            this->__Vfunc_uvm_report_enabled__280__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__280__severity = 1U;
            __Vfunc_uvm_report_enabled__280__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__281__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__281__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__282__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__282__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__280__verbosity, (IData)(__Vfunc_uvm_report_enabled__280__severity), this->__Vfunc_uvm_report_enabled__280__id, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_warning__285__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__285__context_name = ""s;
                __Vtask_uvm_report_warning__285__line = 0x00000522U;
                this->__Vtask_uvm_report_warning__285__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_warning__285__verbosity = 0U;
                this->__Vtask_uvm_report_warning__285__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("map '"s, __VlefCall_4__get_name), "' does not seem to be initialized correctly, check that the top register model is locked()"s));
                this->__Vtask_uvm_report_warning__285__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__286__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__286__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__287__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__287__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__285__id, this->__Vtask_uvm_report_warning__285__message, __Vtask_uvm_report_warning__285__verbosity, this->__Vtask_uvm_report_warning__285__filename, __Vtask_uvm_report_warning__285__line, this->__Vtask_uvm_report_warning__285__context_name, (IData)(__Vtask_uvm_report_warning__285__report_enabled_checked));
            }
        }
        get_reg_map_info__Vfuncrtn = result;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_base_addr(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_base_addr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__is_locked;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk523__DOT__top_map;
    if ((VlNull{} != this->__PVT__m_parent_map)) {
        VL_NULL_CHECK(this->__PVT__m_parent_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1328)->__VnoInFunc_set_submap_offset(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, offset);
    } else {
        this->__PVT__m_base_addr = offset;
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1332)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if (__VlefCall_0__is_locked) {
            this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk523__DOT__top_map);
            VL_NULL_CHECK(unnamedblk523__DOT__top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1334)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_size(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_size\n"); );
    // Body
    IData/*31:0*/ __VlefCall_4__get_size;
    IData/*31:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    QData/*63:0*/ __VlefCall_1__get_size;
    IData/*31:0*/ __VlefCall_0__get_n_bytes;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk524__DOT__rg_;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk524__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk524__DOT__rg___Vmore;
    unnamedblk524__DOT__rg___Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk524__DOT__unnamedblk525__DOT__rg;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk526__DOT__mem_;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk526__DOT__mem___Vnext;
    CData/*0:0*/ unnamedblk526__DOT__mem___Vmore;
    unnamedblk526__DOT__mem___Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk526__DOT__unnamedblk527__DOT__mem;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk528__DOT__submap_;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk528__DOT__submap___Vnext;
    CData/*0:0*/ unnamedblk528__DOT__submap___Vmore;
    unnamedblk528__DOT__submap___Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk528__DOT__unnamedblk529__DOT__submap;
    IData/*31:0*/ max_addr;
    IData/*31:0*/ addr;
    get_size__Vfuncrtn = 0U;
    max_addr = 0U;
    addr = 0U;
    unnamedblk524__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.first(unnamedblk524__DOT__rg___Vnext));
    while (unnamedblk524__DOT__rg___Vmore) {
        unnamedblk524__DOT__rg_ = unnamedblk524__DOT__rg___Vnext;
        unnamedblk524__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.next(unnamedblk524__DOT__rg___Vnext));
        unnamedblk524__DOT__unnamedblk525__DOT__rg 
            = unnamedblk524__DOT__rg_;
        VL_NULL_CHECK(unnamedblk524__DOT__unnamedblk525__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1350)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_0__get_n_bytes);
        addr = ((IData)(VL_NULL_CHECK(this->__PVT__m_regs_info
                                      .at(unnamedblk524__DOT__unnamedblk525__DOT__rg), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1350)
                        ->__PVT__offset) + (IData)(
                                                   VL_DIV_QQQ(64, 
                                                              ((QData)((IData)(__VlefCall_0__get_n_bytes)) 
                                                               - 1ULL), (QData)((IData)(this->__PVT__m_n_bytes)))));
        if ((addr > max_addr)) {
            max_addr = addr;
        }
    }
    unnamedblk526__DOT__mem___Vmore = (0U != this->__PVT__m_mems_info.first(unnamedblk526__DOT__mem___Vnext));
    while (unnamedblk526__DOT__mem___Vmore) {
        unnamedblk526__DOT__mem_ = unnamedblk526__DOT__mem___Vnext;
        unnamedblk526__DOT__mem___Vmore = (0U != this->__PVT__m_mems_info.next(unnamedblk526__DOT__mem___Vnext));
        unnamedblk526__DOT__unnamedblk527__DOT__mem 
            = unnamedblk526__DOT__mem_;
        VL_NULL_CHECK(unnamedblk526__DOT__unnamedblk527__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1357)->__VnoInFunc_get_size(vlSymsp, __VlefCall_1__get_size);
        VL_NULL_CHECK(unnamedblk526__DOT__unnamedblk527__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1357)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        addr = (((IData)(VL_NULL_CHECK(this->__PVT__m_mems_info
                                       .at(unnamedblk526__DOT__unnamedblk527__DOT__mem), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1357)
                         ->__PVT__offset) + (IData)(
                                                    (__VlefCall_1__get_size 
                                                     * 
                                                     (1ULL 
                                                      + 
                                                      VL_DIV_QQQ(64, 
                                                                 ((QData)((IData)(__VlefCall_2__get_n_bytes)) 
                                                                  - 1ULL), (QData)((IData)(this->__PVT__m_n_bytes))))))) 
                - (IData)(1U));
        if ((addr > max_addr)) {
            max_addr = addr;
        }
    }
    unnamedblk528__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk528__DOT__submap___Vnext));
    while (unnamedblk528__DOT__submap___Vmore) {
        unnamedblk528__DOT__submap_ = unnamedblk528__DOT__submap___Vnext;
        unnamedblk528__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.next(unnamedblk528__DOT__submap___Vnext));
        unnamedblk528__DOT__unnamedblk529__DOT__submap 
            = unnamedblk528__DOT__submap_;
        __VlefExpr_3 = (IData)(this->__PVT__m_submaps
                               .at(unnamedblk528__DOT__unnamedblk529__DOT__submap));
        VL_NULL_CHECK(unnamedblk528__DOT__unnamedblk529__DOT__submap, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1364)->__VnoInFunc_get_size(vlSymsp, __VlefCall_4__get_size);
        addr = (__VlefExpr_3 + __VlefCall_4__get_size);
        if ((addr > max_addr)) {
            max_addr = addr;
        }
    }
    get_size__Vfuncrtn = ((IData)(1U) + max_addr);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xverify_map_configX(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xverify_map_configX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__299__verbosity;
    __Vfunc_uvm_report_enabled__299__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__299__severity;
    __Vfunc_uvm_report_enabled__299__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__300__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__301__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__304__verbosity;
    __Vtask_uvm_report_error__304__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__304__line;
    __Vtask_uvm_report_error__304__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__304__report_enabled_checked;
    __Vtask_uvm_report_error__304__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__305__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__306__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__309__verbosity;
    __Vfunc_uvm_report_enabled__309__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__309__severity;
    __Vfunc_uvm_report_enabled__309__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__310__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__311__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__314__verbosity;
    __Vtask_uvm_report_error__314__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__314__line;
    __Vtask_uvm_report_error__314__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__314__report_enabled_checked;
    __Vtask_uvm_report_error__314__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__315__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__316__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__318__verbosity;
    __Vfunc_uvm_report_enabled__318__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__318__severity;
    __Vfunc_uvm_report_enabled__318__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__319__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__320__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__322__verbosity;
    __Vtask_uvm_report_fatal__322__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__322__line;
    __Vtask_uvm_report_fatal__322__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__322__report_enabled_checked;
    __Vtask_uvm_report_fatal__322__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__323__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__324__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_3__get_sequencer;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_adapter> __VlefCall_0__get_adapter;
    CData/*0:0*/ error;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> root_map;
    error = 0U;
    this->__VnoInFunc_get_root_map(vlSymsp, root_map);
    VL_NULL_CHECK(root_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1380)->__VnoInFunc_get_adapter(vlSymsp, 1U, __VlefCall_0__get_adapter);
    if ((VlNull{} == __VlefCall_0__get_adapter)) {
        this->__Vfunc_uvm_report_enabled__299__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__299__severity = 2U;
        __Vfunc_uvm_report_enabled__299__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__300__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__300__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__301__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__301__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__299__verbosity, (IData)(__Vfunc_uvm_report_enabled__299__severity), this->__Vfunc_uvm_report_enabled__299__id, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            VL_NULL_CHECK(root_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1382)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_error__304__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__304__context_name = ""s;
            __Vtask_uvm_report_error__304__line = 0x00000566U;
            this->__Vtask_uvm_report_error__304__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_error__304__verbosity = 0U;
            this->__Vtask_uvm_report_error__304__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Map '"s, __VlefCall_2__get_full_name), "' does not have an adapter registered"s));
            this->__Vtask_uvm_report_error__304__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__305__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__305__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__306__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__306__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__304__id, this->__Vtask_uvm_report_error__304__message, __Vtask_uvm_report_error__304__verbosity, this->__Vtask_uvm_report_error__304__filename, __Vtask_uvm_report_error__304__line, this->__Vtask_uvm_report_error__304__context_name, (IData)(__Vtask_uvm_report_error__304__report_enabled_checked));
        }
        error = (1U & ((IData)(1U) + (IData)(error)));
    }
    VL_NULL_CHECK(root_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1385)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_3__get_sequencer);
    if ((VlNull{} == __VlefCall_3__get_sequencer)) {
        this->__Vfunc_uvm_report_enabled__309__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__309__severity = 2U;
        __Vfunc_uvm_report_enabled__309__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__310__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__310__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__311__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__311__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__309__verbosity, (IData)(__Vfunc_uvm_report_enabled__309__severity), this->__Vfunc_uvm_report_enabled__309__id, __VlefCall_4__uvm_report_enabled);
        if ((0U != __VlefCall_4__uvm_report_enabled)) {
            VL_NULL_CHECK(root_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1387)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            __Vtask_uvm_report_error__314__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__314__context_name = ""s;
            __Vtask_uvm_report_error__314__line = 0x0000056bU;
            this->__Vtask_uvm_report_error__314__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_error__314__verbosity = 0U;
            this->__Vtask_uvm_report_error__314__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Map '"s, __VlefCall_5__get_full_name), "' does not have a sequencer registered"s));
            this->__Vtask_uvm_report_error__314__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__315__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__315__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__316__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__316__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__314__id, this->__Vtask_uvm_report_error__314__message, __Vtask_uvm_report_error__314__verbosity, this->__Vtask_uvm_report_error__314__filename, __Vtask_uvm_report_error__314__line, this->__Vtask_uvm_report_error__314__context_name, (IData)(__Vtask_uvm_report_error__314__report_enabled_checked));
        }
        error = (1U & ((IData)(1U) + (IData)(error)));
    }
    if (error) {
        this->__Vfunc_uvm_report_enabled__318__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__318__severity = 3U;
        __Vfunc_uvm_report_enabled__318__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__319__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__319__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__320__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__320__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__318__verbosity, (IData)(__Vfunc_uvm_report_enabled__318__severity), this->__Vfunc_uvm_report_enabled__318__id, __VlefCall_6__uvm_report_enabled);
        if ((0U != __VlefCall_6__uvm_report_enabled)) {
            __Vtask_uvm_report_fatal__322__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_fatal__322__context_name = ""s;
            __Vtask_uvm_report_fatal__322__line = 0x00000570U;
            this->__Vtask_uvm_report_fatal__322__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_fatal__322__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__322__message = "Must register an adapter and sequencer for each top-level map in RegModel model"s;
            this->__Vtask_uvm_report_fatal__322__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__323__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                = __Vfunc_get__323__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__324__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vtask_get_root__324__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__322__id, this->__Vtask_uvm_report_fatal__322__message, __Vtask_uvm_report_fatal__322__verbosity, this->__Vtask_uvm_report_fatal__322__filename, __Vtask_uvm_report_fatal__322__line, this->__Vtask_uvm_report_fatal__322__context_name, (IData)(__Vtask_uvm_report_fatal__322__report_enabled_checked));
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_physical_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_n_bytes__326__Vfuncout;
    __Vfunc_get_n_bytes__326__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__327__verbosity;
    __Vfunc_uvm_report_enabled__327__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__327__severity;
    __Vfunc_uvm_report_enabled__327__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__328__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__329__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__331__verbosity;
    __Vtask_uvm_report_fatal__331__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__331__line;
    __Vtask_uvm_report_fatal__331__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__331__report_enabled_checked;
    __Vtask_uvm_report_fatal__331__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__332__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__333__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__336__verbosity;
    __Vfunc_uvm_report_enabled__336__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__336__severity;
    __Vfunc_uvm_report_enabled__336__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__337__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__338__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__341__verbosity;
    __Vtask_uvm_report_error__341__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__341__line;
    __Vtask_uvm_report_error__341__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__341__report_enabled_checked;
    __Vtask_uvm_report_error__341__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__342__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__343__Vfuncout;
    IData/*31:0*/ __Vtask_get_physical_addresses__349__Vfuncout;
    __Vtask_get_physical_addresses__349__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    IData/*31:0*/ __VlefCall_4__get_n_bytes;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__get_endian;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk530__DOT__n;
    IData/*31:0*/ unnamedblk530__DOT__unnamedblk531__DOT__i;
    unnamedblk530__DOT__unnamedblk531__DOT__i = 0;
    IData/*31:0*/ unnamedblk530__DOT__unnamedblk531__DOT__i__Vloopsize;
    unnamedblk530__DOT__unnamedblk531__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk530__DOT__unnamedblk532__DOT__i;
    unnamedblk530__DOT__unnamedblk532__DOT__i = 0;
    IData/*31:0*/ unnamedblk530__DOT__unnamedblk532__DOT__i__Vloopsize;
    unnamedblk530__DOT__unnamedblk532__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk530__DOT__unnamedblk533__DOT__i;
    unnamedblk530__DOT__unnamedblk533__DOT__i = 0;
    IData/*31:0*/ unnamedblk530__DOT__unnamedblk533__DOT__i__Vloopsize;
    unnamedblk530__DOT__unnamedblk533__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk530__DOT__unnamedblk534__DOT__i;
    unnamedblk530__DOT__unnamedblk534__DOT__i = 0;
    IData/*31:0*/ unnamedblk530__DOT__unnamedblk534__DOT__i__Vloopsize;
    unnamedblk530__DOT__unnamedblk534__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk535__DOT__i;
    unnamedblk535__DOT__i = 0;
    IData/*31:0*/ unnamedblk535__DOT__i__Vloopsize;
    unnamedblk535__DOT__i__Vloopsize = 0;
    VlQueue<QData/*63:0*/> unnamedblk536__DOT__sys_addr;
    QData/*63:0*/ unnamedblk536__DOT__base_addr;
    IData/*31:0*/ unnamedblk536__DOT__w;
    IData/*31:0*/ unnamedblk536__DOT__k;
    IData/*31:0*/ unnamedblk536__DOT__unnamedblk537__DOT__i;
    unnamedblk536__DOT__unnamedblk537__DOT__i = 0;
    IData/*31:0*/ unnamedblk536__DOT__unnamedblk537__DOT__i__Vloopsize;
    unnamedblk536__DOT__unnamedblk537__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__n;
    IData/*31:0*/ unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__j;
    unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__j = 0;
    IData/*31:0*/ bus_width;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> up_map;
    VlQueue<QData/*63:0*/> local_addr;
    IData/*31:0*/ multiplier;
    {
        get_physical_addresses__Vfuncrtn = 0U;
        this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vfunc_get_n_bytes__326__Vfuncout);
        bus_width = __Vfunc_get_n_bytes__326__Vfuncout;
        local_addr.clear();
        local_addr.atDefault() = 0;
        multiplier = ((IData)(this->__PVT__m_byte_addressing)
                       ? bus_width : 1U);
        addr.renew(0U);
        if ((0U >= n_bytes)) {
            this->__Vfunc_uvm_report_enabled__327__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__327__severity = 3U;
            __Vfunc_uvm_report_enabled__327__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__328__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__328__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__329__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__329__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__327__verbosity, (IData)(__Vfunc_uvm_report_enabled__327__severity), this->__Vfunc_uvm_report_enabled__327__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__331__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__331__context_name = ""s;
                __Vtask_uvm_report_fatal__331__line = 0x00000587U;
                this->__Vtask_uvm_report_fatal__331__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_fatal__331__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_fatal__331__message
                              ,"Cannot access %0d bytes. Must be greater than 0",1
                              , '#',32,n_bytes);
                this->__Vtask_uvm_report_fatal__331__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__332__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__332__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__333__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__333__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__331__id, this->__Vtask_uvm_report_fatal__331__message, __Vtask_uvm_report_fatal__331__verbosity, this->__Vtask_uvm_report_fatal__331__filename, __Vtask_uvm_report_fatal__331__line, this->__Vtask_uvm_report_fatal__331__context_name, (IData)(__Vtask_uvm_report_fatal__331__report_enabled_checked));
            }
            get_physical_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((n_bytes <= bus_width)) {
            local_addr.renew(1U);
            local_addr.atWrite(0U) = (base_addr + (mem_offset 
                                                   * (QData)((IData)(multiplier))));
        } else {
            unnamedblk530__DOT__n = 0U;
            unnamedblk530__DOT__n = ((IData)(1U) + 
                                     VL_DIV_III(32, 
                                                (n_bytes 
                                                 - (IData)(1U)), bus_width));
            local_addr.renew(unnamedblk530__DOT__n);
            base_addr = (base_addr + (mem_offset * 
                                      ((QData)((IData)(unnamedblk530__DOT__n)) 
                                       * (QData)((IData)(multiplier)))));
            this->__VnoInFunc_get_endian(vlSymsp, 0U, __VlefCall_1__get_endian);
            if ((1U == __VlefCall_1__get_endian)) {
                unnamedblk530__DOT__unnamedblk531__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk530__DOT__unnamedblk531__DOT__i, local_addr.size())) {
                    unnamedblk530__DOT__unnamedblk531__DOT__i__Vloopsize 
                        = local_addr.size();
                    local_addr.atWrite(unnamedblk530__DOT__unnamedblk531__DOT__i) 
                        = (base_addr + ((QData)((IData)(unnamedblk530__DOT__unnamedblk531__DOT__i)) 
                                        * (QData)((IData)(multiplier))));
                    if ((unnamedblk530__DOT__unnamedblk531__DOT__i__Vloopsize 
                         <= local_addr.size())) {
                        unnamedblk530__DOT__unnamedblk531__DOT__i 
                            = ((IData)(1U) + unnamedblk530__DOT__unnamedblk531__DOT__i);
                    }
                }
            } else if ((2U == __VlefCall_1__get_endian)) {
                unnamedblk530__DOT__unnamedblk532__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk530__DOT__unnamedblk532__DOT__i, local_addr.size())) {
                    unnamedblk530__DOT__unnamedblk532__DOT__i__Vloopsize 
                        = local_addr.size();
                    unnamedblk530__DOT__n = (unnamedblk530__DOT__n 
                                             - (IData)(1U));
                    local_addr.atWrite(unnamedblk530__DOT__unnamedblk532__DOT__i) 
                        = (base_addr + ((QData)((IData)(unnamedblk530__DOT__n)) 
                                        * (QData)((IData)(multiplier))));
                    if ((unnamedblk530__DOT__unnamedblk532__DOT__i__Vloopsize 
                         <= local_addr.size())) {
                        unnamedblk530__DOT__unnamedblk532__DOT__i 
                            = ((IData)(1U) + unnamedblk530__DOT__unnamedblk532__DOT__i);
                    }
                }
            } else if ((3U == __VlefCall_1__get_endian)) {
                unnamedblk530__DOT__unnamedblk533__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk530__DOT__unnamedblk533__DOT__i, local_addr.size())) {
                    unnamedblk530__DOT__unnamedblk533__DOT__i__Vloopsize 
                        = local_addr.size();
                    local_addr.atWrite(unnamedblk530__DOT__unnamedblk533__DOT__i) 
                        = base_addr;
                    if ((unnamedblk530__DOT__unnamedblk533__DOT__i__Vloopsize 
                         <= local_addr.size())) {
                        unnamedblk530__DOT__unnamedblk533__DOT__i 
                            = ((IData)(1U) + unnamedblk530__DOT__unnamedblk533__DOT__i);
                    }
                }
            } else if ((4U == __VlefCall_1__get_endian)) {
                unnamedblk530__DOT__unnamedblk534__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk530__DOT__unnamedblk534__DOT__i, local_addr.size())) {
                    unnamedblk530__DOT__unnamedblk534__DOT__i__Vloopsize 
                        = local_addr.size();
                    local_addr.atWrite(unnamedblk530__DOT__unnamedblk534__DOT__i) 
                        = base_addr;
                    if ((unnamedblk530__DOT__unnamedblk534__DOT__i__Vloopsize 
                         <= local_addr.size())) {
                        unnamedblk530__DOT__unnamedblk534__DOT__i 
                            = ((IData)(1U) + unnamedblk530__DOT__unnamedblk534__DOT__i);
                    }
                }
            } else {
                this->__Vfunc_uvm_report_enabled__336__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__336__severity = 2U;
                __Vfunc_uvm_report_enabled__336__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__337__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__337__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__338__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__338__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__336__verbosity, (IData)(__Vfunc_uvm_report_enabled__336__severity), this->__Vfunc_uvm_report_enabled__336__id, __VlefCall_2__uvm_report_enabled);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __Vtask_uvm_report_error__341__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__341__context_name = ""s;
                    __Vtask_uvm_report_error__341__line = 0x000005b1U;
                    this->__Vtask_uvm_report_error__341__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_error__341__verbosity = 0U;
                    this->__Vtask_uvm_report_error__341__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Map has no specified endianness. "s, VL_SFORMATF_N_NX("Cannot access %0d bytes register via its %0d byte \"%s\" interface",3
                                                                                , '#',32,n_bytes
                                                                                , '~',32,bus_width
                                                                                , 'S',&(__VlefCall_3__get_full_name)) ));
                    this->__Vtask_uvm_report_error__341__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__342__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__342__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__343__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__343__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__341__id, this->__Vtask_uvm_report_error__341__message, __Vtask_uvm_report_error__341__verbosity, this->__Vtask_uvm_report_error__341__filename, __Vtask_uvm_report_error__341__line, this->__Vtask_uvm_report_error__341__context_name, (IData)(__Vtask_uvm_report_error__341__report_enabled_checked));
                }
            }
        }
        this->__VnoInFunc_get_parent_map(vlSymsp, up_map);
        if ((VlNull{} == up_map)) {
            addr.renew_copy(local_addr.size(), local_addr);
            unnamedblk535__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk535__DOT__i, addr.size())) {
                unnamedblk535__DOT__i__Vloopsize = addr.size();
                addr.atWrite(unnamedblk535__DOT__i) 
                    = (addr.at(unnamedblk535__DOT__i) 
                       + this->__PVT__m_base_addr);
                if ((unnamedblk535__DOT__i__Vloopsize 
                     <= addr.size())) {
                    unnamedblk535__DOT__i = ((IData)(1U) 
                                             + unnamedblk535__DOT__i);
                }
            }
        } else {
            unnamedblk536__DOT__sys_addr.clear();
            unnamedblk536__DOT__sys_addr.atDefault() = 0;
            unnamedblk536__DOT__base_addr = 0ULL;
            unnamedblk536__DOT__w = 0U;
            unnamedblk536__DOT__k = 0U;
            VL_NULL_CHECK(up_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1477)->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_4__get_n_bytes);
            if ((bus_width < __VlefCall_4__get_n_bytes)) {
                unnamedblk536__DOT__k = 1U;
            } else {
                VL_NULL_CHECK(up_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1480)->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_5__get_n_bytes);
                unnamedblk536__DOT__k = ((IData)(1U) 
                                         + VL_DIV_III(32, 
                                                      (bus_width 
                                                       - (IData)(1U)), __VlefCall_5__get_n_bytes));
            }
            VL_NULL_CHECK(up_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1482)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk536__DOT__base_addr);
            unnamedblk536__DOT__unnamedblk537__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk536__DOT__unnamedblk537__DOT__i, local_addr.size())) {
                unnamedblk536__DOT__unnamedblk537__DOT__i__Vloopsize 
                    = local_addr.size();
                unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__n 
                    = addr.size();
                VL_NULL_CHECK(up_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1486)->__VnoInFunc_get_physical_addresses(vlSymsp, 
                                                                                (unnamedblk536__DOT__base_addr 
                                                                                + 
                                                                                (local_addr.at(unnamedblk536__DOT__unnamedblk537__DOT__i) 
                                                                                * (QData)((IData)(unnamedblk536__DOT__k)))), 0ULL, bus_width, unnamedblk536__DOT__sys_addr, __Vtask_get_physical_addresses__349__Vfuncout);
                unnamedblk536__DOT__w = __Vtask_get_physical_addresses__349__Vfuncout;
                addr.renew_copy((unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__n 
                                 + unnamedblk536__DOT__sys_addr.size()), addr);
                unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__j, unnamedblk536__DOT__sys_addr.size())) {
                    addr.atWrite((unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__n 
                                  + unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__j)) 
                        = unnamedblk536__DOT__sys_addr.at(unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__j);
                    unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__j 
                        = ((IData)(1U) + unnamedblk536__DOT__unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__j);
                }
                if ((unnamedblk536__DOT__unnamedblk537__DOT__i__Vloopsize 
                     <= local_addr.size())) {
                    unnamedblk536__DOT__unnamedblk537__DOT__i 
                        = ((IData)(1U) + unnamedblk536__DOT__unnamedblk537__DOT__i);
                }
            }
            if (VL_LTS_III(32, unnamedblk536__DOT__w, bus_width)) {
                bus_width = unnamedblk536__DOT__w;
            }
        }
        get_physical_addresses__Vfuncrtn = bus_width;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_submap_offset(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_submap_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__350__verbosity;
    __Vfunc_uvm_report_enabled__350__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__350__severity;
    __Vfunc_uvm_report_enabled__350__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__351__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__352__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__354__verbosity;
    __Vtask_uvm_report_error__354__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__354__line;
    __Vtask_uvm_report_error__354__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__354__report_enabled_checked;
    __Vtask_uvm_report_error__354__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__355__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__356__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__is_locked;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk540__DOT__root_map;
    {
        if ((VlNull{} == submap)) {
            this->__Vfunc_uvm_report_enabled__350__id = "REG/NULL"s;
            __Vfunc_uvm_report_enabled__350__severity = 2U;
            __Vfunc_uvm_report_enabled__350__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__351__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__351__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__352__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__352__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__350__verbosity, (IData)(__Vfunc_uvm_report_enabled__350__severity), this->__Vfunc_uvm_report_enabled__350__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__354__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__354__context_name = ""s;
                __Vtask_uvm_report_error__354__line = 0x000005ebU;
                this->__Vtask_uvm_report_error__354__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__354__verbosity = 0U;
                this->__Vtask_uvm_report_error__354__message = "set_submap_offset: submap handle is null"s;
                this->__Vtask_uvm_report_error__354__id = "REG/NULL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__355__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__355__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__356__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__356__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__354__id, this->__Vtask_uvm_report_error__354__message, __Vtask_uvm_report_error__354__verbosity, this->__Vtask_uvm_report_error__354__filename, __Vtask_uvm_report_error__354__line, this->__Vtask_uvm_report_error__354__context_name, (IData)(__Vtask_uvm_report_error__354__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        this->__PVT__m_submaps.at(submap) = offset;
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1519)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_1__is_locked);
        if (__VlefCall_1__is_locked) {
            this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk540__DOT__root_map);
            VL_NULL_CHECK(unnamedblk540__DOT__root_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1521)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submap_offset(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ &get_submap_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submap_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__361__verbosity;
    __Vfunc_uvm_report_enabled__361__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__361__severity;
    __Vfunc_uvm_report_enabled__361__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__362__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__363__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__365__verbosity;
    __Vtask_uvm_report_error__365__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__365__line;
    __Vtask_uvm_report_error__365__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__365__report_enabled_checked;
    __Vtask_uvm_report_error__365__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__366__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__367__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__369__verbosity;
    __Vfunc_uvm_report_enabled__369__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__369__severity;
    __Vfunc_uvm_report_enabled__369__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__370__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__371__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__375__verbosity;
    __Vtask_uvm_report_error__375__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__375__line;
    __Vtask_uvm_report_error__375__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__375__report_enabled_checked;
    __Vtask_uvm_report_error__375__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__376__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__377__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_submap_offset__Vfuncrtn = 0ULL;
        if ((VlNull{} == submap)) {
            this->__Vfunc_uvm_report_enabled__361__id = "REG/NULL"s;
            __Vfunc_uvm_report_enabled__361__severity = 2U;
            __Vfunc_uvm_report_enabled__361__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__362__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__362__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__363__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__363__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__361__verbosity, (IData)(__Vfunc_uvm_report_enabled__361__severity), this->__Vfunc_uvm_report_enabled__361__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__365__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__365__context_name = ""s;
                __Vtask_uvm_report_error__365__line = 0x000005faU;
                this->__Vtask_uvm_report_error__365__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__365__verbosity = 0U;
                this->__Vtask_uvm_report_error__365__message = "set_submap_offset: submap handle is null"s;
                this->__Vtask_uvm_report_error__365__id = "REG/NULL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__366__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__366__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__367__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__367__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__365__id, this->__Vtask_uvm_report_error__365__message, __Vtask_uvm_report_error__365__verbosity, this->__Vtask_uvm_report_error__365__filename, __Vtask_uvm_report_error__365__line, this->__Vtask_uvm_report_error__365__context_name, (IData)(__Vtask_uvm_report_error__365__report_enabled_checked));
            }
            get_submap_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        if ((! this->__PVT__m_submaps.exists(submap))) {
            this->__Vfunc_uvm_report_enabled__369__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__369__severity = 2U;
            __Vfunc_uvm_report_enabled__369__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__370__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__370__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__371__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__371__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__369__verbosity, (IData)(__Vfunc_uvm_report_enabled__369__severity), this->__Vfunc_uvm_report_enabled__369__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                VL_NULL_CHECK(submap, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1535)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__375__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__375__context_name = ""s;
                __Vtask_uvm_report_error__375__line = 0x000005ffU;
                this->__Vtask_uvm_report_error__375__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__375__verbosity = 0U;
                this->__Vtask_uvm_report_error__375__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_2__get_full_name), "' is not a submap of '"s), __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__375__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__376__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__376__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__377__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__377__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__375__id, this->__Vtask_uvm_report_error__375__message, __Vtask_uvm_report_error__375__verbosity, this->__Vtask_uvm_report_error__375__filename, __Vtask_uvm_report_error__375__line, this->__Vtask_uvm_report_error__375__context_name, (IData)(__Vtask_uvm_report_error__375__report_enabled_checked));
            }
            get_submap_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_submap_offset__Vfuncrtn = this->__PVT__m_submaps
            .at(submap);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_by_offset(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ read, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> &get_reg_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_by_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__380__verbosity;
    __Vfunc_uvm_report_enabled__380__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__380__severity;
    __Vfunc_uvm_report_enabled__380__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__381__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__382__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__385__verbosity;
    __Vtask_uvm_report_error__385__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__385__line;
    __Vtask_uvm_report_error__385__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__385__report_enabled_checked;
    __Vtask_uvm_report_error__385__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__386__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__387__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_locked;
    {
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1546)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if ((1U & (~ (IData)(__VlefCall_0__is_locked)))) {
            this->__Vfunc_uvm_report_enabled__380__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__380__severity = 2U;
            __Vfunc_uvm_report_enabled__380__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__381__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__381__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__382__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__382__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__380__verbosity, (IData)(__Vfunc_uvm_report_enabled__380__severity), this->__Vfunc_uvm_report_enabled__380__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1547)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__385__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__385__context_name = ""s;
                __Vtask_uvm_report_error__385__line = 0x0000060bU;
                this->__Vtask_uvm_report_error__385__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__385__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__385__message
                              ,"Cannot get register by offset: Block %s is not locked.",1
                              , 'S',&(__VlefCall_2__get_full_name));
                this->__Vtask_uvm_report_error__385__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__386__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__386__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__387__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__387__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__385__id, this->__Vtask_uvm_report_error__385__message, __Vtask_uvm_report_error__385__verbosity, this->__Vtask_uvm_report_error__385__filename, __Vtask_uvm_report_error__385__line, this->__Vtask_uvm_report_error__385__context_name, (IData)(__Vtask_uvm_report_error__385__report_enabled_checked));
            }
            get_reg_by_offset__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (((1U & (~ (IData)(read))) && this->__PVT__m_regs_by_offset_wo.exists(offset))) {
            get_reg_by_offset__Vfuncrtn = this->__PVT__m_regs_by_offset_wo
                .at(offset);
            goto __Vlabel0;
        }
        if (this->__PVT__m_regs_by_offset.exists(offset)) {
            get_reg_by_offset__Vfuncrtn = this->__PVT__m_regs_by_offset
                .at(offset);
            goto __Vlabel0;
        }
        get_reg_by_offset__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_by_offset(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> &get_mem_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_by_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__390__verbosity;
    __Vfunc_uvm_report_enabled__390__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__390__severity;
    __Vfunc_uvm_report_enabled__390__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__391__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__392__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__395__verbosity;
    __Vtask_uvm_report_error__395__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__395__line;
    __Vtask_uvm_report_error__395__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__395__report_enabled_checked;
    __Vtask_uvm_report_error__395__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__396__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__397__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_locked;
    VlWide<5>/*159:0*/ unnamedblk541__DOT__range;
    VL_ZERO_W(160, unnamedblk541__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk541__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk541__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk541__DOT__range__Vmore;
    unnamedblk541__DOT__range__Vmore = 0;
    {
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1564)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if ((1U & (~ (IData)(__VlefCall_0__is_locked)))) {
            this->__Vfunc_uvm_report_enabled__390__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__390__severity = 2U;
            __Vfunc_uvm_report_enabled__390__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__391__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__391__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__392__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__392__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__390__verbosity, (IData)(__Vfunc_uvm_report_enabled__390__severity), this->__Vfunc_uvm_report_enabled__390__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1565)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__395__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__395__context_name = ""s;
                __Vtask_uvm_report_error__395__line = 0x0000061dU;
                this->__Vtask_uvm_report_error__395__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__395__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__395__message
                              ,"Cannot memory register by offset: Block %s is not locked.",1
                              , 'S',&(__VlefCall_2__get_full_name));
                this->__Vtask_uvm_report_error__395__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__396__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__396__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__397__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__397__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__395__id, this->__Vtask_uvm_report_error__395__message, __Vtask_uvm_report_error__395__verbosity, this->__Vtask_uvm_report_error__395__filename, __Vtask_uvm_report_error__395__line, this->__Vtask_uvm_report_error__395__context_name, (IData)(__Vtask_uvm_report_error__395__report_enabled_checked));
            }
            get_mem_by_offset__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        unnamedblk541__DOT__range__Vmore = (0U != this->__PVT__m_mems_by_offset.first(unnamedblk541__DOT__range__Vnext));
        while (unnamedblk541__DOT__range__Vmore) {
            unnamedblk541__DOT__range[0U] = unnamedblk541__DOT__range__Vnext[0U];
            unnamedblk541__DOT__range[1U] = unnamedblk541__DOT__range__Vnext[1U];
            unnamedblk541__DOT__range[2U] = unnamedblk541__DOT__range__Vnext[2U];
            unnamedblk541__DOT__range[3U] = unnamedblk541__DOT__range__Vnext[3U];
            unnamedblk541__DOT__range[4U] = unnamedblk541__DOT__range__Vnext[4U];
            unnamedblk541__DOT__range__Vmore = (0U 
                                                != this->__PVT__m_mems_by_offset.next(unnamedblk541__DOT__range__Vnext));
            if ((((((QData)((IData)(unnamedblk541__DOT__range[4U])) 
                    << 0x00000020U) | (QData)((IData)(unnamedblk541__DOT__range[3U]))) 
                  <= offset) & (offset <= (((QData)((IData)(unnamedblk541__DOT__range[2U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(unnamedblk541__DOT__range[1U])))))) {
                get_mem_by_offset__Vfuncrtn = this->__PVT__m_mems_by_offset
                    .at(unnamedblk541__DOT__range);
                goto __Vlabel0;
            }
        }
        get_mem_by_offset__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xinit_address_mapX(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xinit_address_mapX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_physical_addresses__403__Vfuncout;
    __Vfunc_get_physical_addresses__403__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__409__verbosity;
    __Vfunc_uvm_report_enabled__409__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__409__severity;
    __Vfunc_uvm_report_enabled__409__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__410__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__411__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__416__verbosity;
    __Vtask_uvm_report_warning__416__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__416__line;
    __Vtask_uvm_report_warning__416__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__416__report_enabled_checked;
    __Vtask_uvm_report_warning__416__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__417__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__418__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__420__verbosity;
    __Vfunc_uvm_report_enabled__420__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__420__severity;
    __Vfunc_uvm_report_enabled__420__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__421__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__422__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__427__verbosity;
    __Vtask_uvm_report_warning__427__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__427__line;
    __Vtask_uvm_report_warning__427__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__427__report_enabled_checked;
    __Vtask_uvm_report_warning__427__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__428__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__429__Vfuncout;
    IData/*31:0*/ __Vfunc_get_physical_addresses__432__Vfuncout;
    __Vfunc_get_physical_addresses__432__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses__435__Vfuncout;
    __Vtask_get_physical_addresses__435__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__437__verbosity;
    __Vfunc_uvm_report_enabled__437__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__437__severity;
    __Vfunc_uvm_report_enabled__437__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__438__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__439__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__444__verbosity;
    __Vtask_uvm_report_warning__444__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__444__line;
    __Vtask_uvm_report_warning__444__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__444__report_enabled_checked;
    __Vtask_uvm_report_warning__444__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__445__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__446__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__448__verbosity;
    __Vfunc_uvm_report_enabled__448__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__448__severity;
    __Vfunc_uvm_report_enabled__448__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__449__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__450__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__455__verbosity;
    __Vtask_uvm_report_warning__455__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__455__line;
    __Vtask_uvm_report_warning__455__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__455__report_enabled_checked;
    __Vtask_uvm_report_warning__455__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__456__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__457__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_20__get_full_name;
    std::string __VlefCall_19__get_full_name;
    std::string __VlefCall_18__get_full_name;
    IData/*31:0*/ __VlefCall_17__uvm_report_enabled;
    std::string __VlefCall_16__get_full_name;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_12__get_size;
    IData/*31:0*/ __VlefCall_11__get_n_bytes;
    QData/*63:0*/ __VlefCall_10__get_size;
    IData/*31:0*/ __VlefCall_9__get_n_bytes;
    std::string __VlefCall_8__get_full_name;
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__get_n_bytes;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk542__DOT__l;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk542__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk542__DOT__l__Vmore;
    unnamedblk542__DOT__l__Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk542__DOT__unnamedblk543__DOT__map;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk544__DOT__rg_;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk544__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk544__DOT__rg___Vmore;
    unnamedblk544__DOT__rg___Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk544__DOT__unnamedblk545__DOT__rg;
    std::string unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__rg_acc;
    VlQueue<QData/*63:0*/> unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__addrs;
    IData/*31:0*/ unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__i;
    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__i = 0;
    IData/*31:0*/ unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__i__Vloopsize;
    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__i__Vloopsize = 0;
    QData/*63:0*/ unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__rg2;
    std::string unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__rg2_acc;
    std::string unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__unnamedblk550__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range;
    VL_ZERO_W(160, unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vmore;
    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vmore = 0;
    std::string unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__a;
    std::string unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__b;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk553__DOT__mem_;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk553__DOT__mem___Vnext;
    CData/*0:0*/ unnamedblk553__DOT__mem___Vmore;
    unnamedblk553__DOT__mem___Vmore = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk553__DOT__unnamedblk554__DOT__mem;
    VlQueue<QData/*63:0*/> unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs;
    VlQueue<QData/*63:0*/> unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs_max;
    QData/*63:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min;
    QData/*63:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max;
    QData/*63:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min2;
    QData/*63:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max2;
    IData/*31:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__stride;
    QData/*63:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr;
    unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr = 0;
    QData/*63:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr__Vnext;
    unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr__Vnext = 0;
    CData/*0:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr__Vmore;
    unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr__Vmore = 0;
    std::string unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__unnamedblk557__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range;
    VL_ZERO_W(160, unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range);
    VlWide<5>/*159:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vnext);
    CData/*0:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vmore;
    unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vmore = 0;
    std::string unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__unnamedblk559__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk560__DOT__range;
    IData/*31:0*/ bus_width;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> top_map;
    bus_width = 0U;
    this->__VnoInFunc_get_root_map(vlSymsp, top_map);
    if ((VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this} 
         == top_map)) {
        VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1588)->__PVT__m_regs_by_offset.clear();
        VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1589)->__PVT__m_regs_by_offset_wo.clear();
        VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1590)->__PVT__m_mems_by_offset.clear();
    }
    unnamedblk542__DOT__l__Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk542__DOT__l__Vnext));
    while (unnamedblk542__DOT__l__Vmore) {
        unnamedblk542__DOT__l = unnamedblk542__DOT__l__Vnext;
        unnamedblk542__DOT__l__Vmore = (0U != this->__PVT__m_submaps.next(unnamedblk542__DOT__l__Vnext));
        unnamedblk542__DOT__unnamedblk543__DOT__map 
            = unnamedblk542__DOT__l;
        VL_NULL_CHECK(unnamedblk542__DOT__unnamedblk543__DOT__map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1595)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
    }
    unnamedblk544__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.first(unnamedblk544__DOT__rg___Vnext));
    while (unnamedblk544__DOT__rg___Vmore) {
        unnamedblk544__DOT__rg_ = unnamedblk544__DOT__rg___Vnext;
        unnamedblk544__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.next(unnamedblk544__DOT__rg___Vnext));
        unnamedblk544__DOT__unnamedblk545__DOT__rg 
            = unnamedblk544__DOT__rg_;
        VL_NULL_CHECK(this->__PVT__m_regs_info.at(unnamedblk544__DOT__unnamedblk545__DOT__rg), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1600)->__PVT__is_initialized = 1U;
        if ((1U & (~ VL_NULL_CHECK(this->__PVT__m_regs_info
                                   .at(unnamedblk544__DOT__unnamedblk545__DOT__rg), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1601)
                   ->__PVT__unmapped))) {
            VL_NULL_CHECK(unnamedblk544__DOT__unnamedblk545__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1602)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__rg_acc);
            unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__addrs.clear();
            unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__addrs.atDefault() = 0;
            VL_NULL_CHECK(unnamedblk544__DOT__unnamedblk545__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1605)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_0__get_n_bytes);
            this->__VnoInFunc_get_physical_addresses(vlSymsp, VL_NULL_CHECK(this->__PVT__m_regs_info
                                                                            .at(unnamedblk544__DOT__unnamedblk545__DOT__rg), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1605)
                                                     ->__PVT__offset, 0ULL, __VlefCall_0__get_n_bytes, unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__addrs, __Vfunc_get_physical_addresses__403__Vfuncout);
            bus_width = __Vfunc_get_physical_addresses__403__Vfuncout;
            unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__i, unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__addrs.size())) {
                unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__i__Vloopsize 
                    = unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__addrs.size();
                unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr 
                    = unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__addrs.at(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__i);
                if (VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1610)
                    ->__PVT__m_regs_by_offset.exists(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr)) {
                    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__rg2 
                        = VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1612)
                        ->__PVT__m_regs_by_offset.at(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr);
                    VL_NULL_CHECK(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__rg2, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1613)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__rg2_acc);
                    if ((("RO"s == unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__rg_acc) 
                         & ("WO"s == unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__rg2_acc))) {
                        VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1618)->__PVT__m_regs_by_offset.at(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr) 
                            = unnamedblk544__DOT__unnamedblk545__DOT__rg;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk544__DOT__unnamedblk545__DOT__rg);
                        VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1620)->__PVT__m_regs_by_offset_wo.at(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr) 
                            = unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__rg2;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__rg2);
                    } else if ((("WO"s == unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__rg_acc) 
                                & ("RO"s == unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__rg2_acc))) {
                        VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1624)->__PVT__m_regs_by_offset_wo.at(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr) 
                            = unnamedblk544__DOT__unnamedblk545__DOT__rg;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk544__DOT__unnamedblk545__DOT__rg);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__rg2);
                    } else {
                        unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__unnamedblk550__DOT__a = ""s;
                        VL_SFORMAT_NX(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__unnamedblk550__DOT__a
                                      ,"%0h",1, '#',64,unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr);
                        this->__Vfunc_uvm_report_enabled__409__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__409__severity = 1U;
                        __Vfunc_uvm_report_enabled__409__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__410__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__410__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__411__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__411__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__409__verbosity, (IData)(__Vfunc_uvm_report_enabled__409__severity), this->__Vfunc_uvm_report_enabled__409__id, __VlefCall_1__uvm_report_enabled);
                        if ((0U != __VlefCall_1__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                            VL_NULL_CHECK(unnamedblk544__DOT__unnamedblk545__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1633)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                            VL_NULL_CHECK(VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1633)
                                          ->__PVT__m_regs_by_offset
                                          .at(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1633)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                            __Vtask_uvm_report_warning__416__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__416__context_name = ""s;
                            __Vtask_uvm_report_warning__416__line = 0x00000661U;
                            this->__Vtask_uvm_report_warning__416__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__416__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__416__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_2__get_full_name), "' register '"s), __VlefCall_3__get_full_name), "' maps to same address as register '"s), __VlefCall_4__get_full_name), "': 'h"s), unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__unnamedblk550__DOT__a));
                            this->__Vtask_uvm_report_warning__416__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__417__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__417__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__418__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__418__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__416__id, this->__Vtask_uvm_report_warning__416__message, __Vtask_uvm_report_warning__416__verbosity, this->__Vtask_uvm_report_warning__416__filename, __Vtask_uvm_report_warning__416__line, this->__Vtask_uvm_report_warning__416__context_name, (IData)(__Vtask_uvm_report_warning__416__report_enabled_checked));
                        }
                    }
                } else {
                    VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1637)->__PVT__m_regs_by_offset.at(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr) 
                        = unnamedblk544__DOT__unnamedblk545__DOT__rg;
                }
                unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vmore 
                    = (0U != VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1639)
                       ->__PVT__m_mems_by_offset.first(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vnext));
                while (unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vmore) {
                    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[0U] 
                        = unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vnext[0U];
                    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U] 
                        = unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vnext[1U];
                    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U] 
                        = unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vnext[2U];
                    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U] 
                        = unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vnext[3U];
                    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U] 
                        = unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vnext[4U];
                    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vmore 
                        = (0U != VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1639)
                           ->__PVT__m_mems_by_offset.next(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vnext));
                    if (((unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr 
                          >= (((QData)((IData)(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))) 
                         & (unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr 
                            <= (((QData)((IData)(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))))) {
                        unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__a = ""s;
                        unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__b = ""s;
                        VL_SFORMAT_NX(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__a
                                      ,"%0h",1, '#',64,unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addr);
                        VL_SFORMAT_NX(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__b
                                      ,"[%0h:%0h]",2
                                      , '#',64,(((QData)((IData)(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))
                                      , '#',64,(((QData)((IData)(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U]))));
                        this->__Vfunc_uvm_report_enabled__420__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__420__severity = 1U;
                        __Vfunc_uvm_report_enabled__420__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__421__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__421__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__422__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__422__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__420__verbosity, (IData)(__Vfunc_uvm_report_enabled__420__severity), this->__Vfunc_uvm_report_enabled__420__id, __VlefCall_5__uvm_report_enabled);
                        if ((0U != __VlefCall_5__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                            VL_NULL_CHECK(unnamedblk544__DOT__unnamedblk545__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1647)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                            VL_NULL_CHECK(VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1647)
                                          ->__PVT__m_mems_by_offset
                                          .at(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1647)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                            __Vtask_uvm_report_warning__427__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__427__context_name = ""s;
                            __Vtask_uvm_report_warning__427__line = 0x0000066fU;
                            this->__Vtask_uvm_report_warning__427__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__427__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__427__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_6__get_full_name), "' register '"s), __VlefCall_7__get_full_name), "' with address "s), unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__a), "maps to same address as memory '"s), __VlefCall_8__get_full_name), "': "s), unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__b));
                            this->__Vtask_uvm_report_warning__427__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__428__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__428__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__429__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__429__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__427__id, this->__Vtask_uvm_report_warning__427__message, __Vtask_uvm_report_warning__427__verbosity, this->__Vtask_uvm_report_warning__427__filename, __Vtask_uvm_report_warning__427__line, this->__Vtask_uvm_report_warning__427__context_name, (IData)(__Vtask_uvm_report_warning__427__report_enabled_checked));
                        }
                    }
                }
                if ((unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__i__Vloopsize 
                     <= unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__addrs.size())) {
                    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__i 
                        = ((IData)(1U) + unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__i);
                }
            }
            VL_NULL_CHECK(this->__PVT__m_regs_info.at(unnamedblk544__DOT__unnamedblk545__DOT__rg), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1651)->__PVT__addr 
                = unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__addrs;
        }
    }
    unnamedblk553__DOT__mem___Vmore = (0U != this->__PVT__m_mems_info.first(unnamedblk553__DOT__mem___Vnext));
    while (unnamedblk553__DOT__mem___Vmore) {
        unnamedblk553__DOT__mem_ = unnamedblk553__DOT__mem___Vnext;
        unnamedblk553__DOT__mem___Vmore = (0U != this->__PVT__m_mems_info.next(unnamedblk553__DOT__mem___Vnext));
        unnamedblk553__DOT__unnamedblk554__DOT__mem 
            = unnamedblk553__DOT__mem_;
        if ((1U & (~ VL_NULL_CHECK(this->__PVT__m_mems_info
                                   .at(unnamedblk553__DOT__unnamedblk554__DOT__mem), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1657)
                   ->__PVT__unmapped))) {
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs.clear();
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs.atDefault() = 0;
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs_max.clear();
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs_max.atDefault() = 0;
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min = 0ULL;
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max = 0ULL;
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min2 = 0ULL;
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max2 = 0ULL;
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__stride = 0U;
            VL_NULL_CHECK(unnamedblk553__DOT__unnamedblk554__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1663)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_9__get_n_bytes);
            this->__VnoInFunc_get_physical_addresses(vlSymsp, VL_NULL_CHECK(this->__PVT__m_mems_info
                                                                            .at(unnamedblk553__DOT__unnamedblk554__DOT__mem), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1663)
                                                     ->__PVT__offset, 0ULL, __VlefCall_9__get_n_bytes, unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs, __Vfunc_get_physical_addresses__432__Vfuncout);
            bus_width = __Vfunc_get_physical_addresses__432__Vfuncout;
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min 
                = ((unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs.at(0U) 
                    < unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs.at(
                                                                                (unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs.size() 
                                                                                - (IData)(1U))))
                    ? unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs.at(0U)
                    : unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs.at(
                                                                                (unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs.size() 
                                                                                - (IData)(1U))));
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min2 
                = unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs.at(0U);
            VL_NULL_CHECK(unnamedblk553__DOT__unnamedblk554__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1667)->__VnoInFunc_get_size(vlSymsp, __VlefCall_10__get_size);
            VL_NULL_CHECK(unnamedblk553__DOT__unnamedblk554__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1667)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
            this->__VnoInFunc_get_physical_addresses(vlSymsp, VL_NULL_CHECK(this->__PVT__m_mems_info
                                                                            .at(unnamedblk553__DOT__unnamedblk554__DOT__mem), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1667)
                                                     ->__PVT__offset, 
                                                     (__VlefCall_10__get_size 
                                                      - 1ULL), __VlefCall_11__get_n_bytes, unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs_max, __Vtask_get_physical_addresses__435__Vfuncout);
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max 
                = ((unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs_max.at(0U) 
                    > unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs_max.at(
                                                                                (unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs_max.size() 
                                                                                - (IData)(1U))))
                    ? unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs_max.at(0U)
                    : unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs_max.at(
                                                                                (unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs_max.size() 
                                                                                - (IData)(1U))));
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max2 
                = unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs_max.at(0U);
            VL_NULL_CHECK(unnamedblk553__DOT__unnamedblk554__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1671)->__VnoInFunc_get_size(vlSymsp, __VlefCall_12__get_size);
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__stride 
                = (IData)(VL_DIV_QQQ(64, (unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max2 
                                          - unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min2), 
                                     (__VlefCall_12__get_size 
                                      - 1ULL)));
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr__Vmore 
                = (0U != VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1673)
                   ->__PVT__m_regs_by_offset.first(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr__Vnext));
            while (unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr__Vmore) {
                unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr 
                    = unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr__Vnext;
                unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr__Vmore 
                    = (0U != VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1673)
                       ->__PVT__m_regs_by_offset.next(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr__Vnext));
                if (((unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr 
                      >= unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min) 
                     & (unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr 
                        <= unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max))) {
                    unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__unnamedblk557__DOT__a = ""s;
                    VL_SFORMAT_NX(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__unnamedblk557__DOT__a
                                  ,"%0h",1, '#',64,unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr);
                    this->__Vfunc_uvm_report_enabled__437__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__437__severity = 1U;
                    __Vfunc_uvm_report_enabled__437__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__438__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__438__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__439__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__439__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__437__verbosity, (IData)(__Vfunc_uvm_report_enabled__437__severity), this->__Vfunc_uvm_report_enabled__437__id, __VlefCall_13__uvm_report_enabled);
                    if ((0U != __VlefCall_13__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        VL_NULL_CHECK(unnamedblk553__DOT__unnamedblk554__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1679)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1679)
                                      ->__PVT__m_regs_by_offset
                                      .at(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__reg_addr), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1679)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                        __Vtask_uvm_report_warning__444__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_warning__444__context_name = ""s;
                        __Vtask_uvm_report_warning__444__line = 0x0000068fU;
                        this->__Vtask_uvm_report_warning__444__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_warning__444__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__444__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_14__get_full_name), "' memory '"s), __VlefCall_15__get_full_name), "' maps to same address as register '"s), __VlefCall_16__get_full_name), "': 'h"s), unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__unnamedblk557__DOT__a));
                        this->__Vtask_uvm_report_warning__444__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__445__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__445__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__446__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__446__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__444__id, this->__Vtask_uvm_report_warning__444__message, __Vtask_uvm_report_warning__444__verbosity, this->__Vtask_uvm_report_warning__444__filename, __Vtask_uvm_report_warning__444__line, this->__Vtask_uvm_report_warning__444__context_name, (IData)(__Vtask_uvm_report_warning__444__report_enabled_checked));
                    }
                }
            }
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vmore 
                = (0U != VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1683)
                   ->__PVT__m_mems_by_offset.first(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vnext));
            while (unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vmore) {
                unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[0U] 
                    = unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vnext[0U];
                unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[1U] 
                    = unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vnext[1U];
                unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[2U] 
                    = unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vnext[2U];
                unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[3U] 
                    = unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vnext[3U];
                unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[4U] 
                    = unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vnext[4U];
                unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vmore 
                    = (0U != VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1683)
                       ->__PVT__m_mems_by_offset.next(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range__Vnext));
                if (((((unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min 
                        <= (((QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[2U])) 
                             << 0x00000020U) | (QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[1U])))) 
                       & (unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max 
                          >= (((QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[1U]))))) 
                      | ((unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min 
                          <= (((QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[4U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[3U])))) 
                         & (unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max 
                            >= (((QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[3U])))))) 
                     | ((unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min 
                         >= (((QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[4U])) 
                              << 0x00000020U) | (QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[3U])))) 
                        & (unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max 
                           <= (((QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[2U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range[1U]))))))) {
                    unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__unnamedblk559__DOT__a = ""s;
                    VL_SFORMAT_NX(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__unnamedblk559__DOT__a
                                  ,"[%0h:%0h]",2, '#',64,unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min
                                  , '#',64,unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max);
                    this->__Vfunc_uvm_report_enabled__448__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__448__severity = 1U;
                    __Vfunc_uvm_report_enabled__448__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__449__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__449__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__450__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__450__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__448__verbosity, (IData)(__Vfunc_uvm_report_enabled__448__severity), this->__Vfunc_uvm_report_enabled__448__id, __VlefCall_17__uvm_report_enabled);
                    if ((0U != __VlefCall_17__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                        VL_NULL_CHECK(unnamedblk553__DOT__unnamedblk554__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1691)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1691)
                                      ->__PVT__m_mems_by_offset
                                      .at(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__range), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1691)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                        __Vtask_uvm_report_warning__455__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_warning__455__context_name = ""s;
                        __Vtask_uvm_report_warning__455__line = 0x0000069bU;
                        this->__Vtask_uvm_report_warning__455__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_warning__455__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__455__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_18__get_full_name), "' memory '"s), __VlefCall_19__get_full_name), "' overlaps with address range of memory '"s), __VlefCall_20__get_full_name), "': 'h"s), unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk558__DOT__unnamedblk559__DOT__a));
                        this->__Vtask_uvm_report_warning__455__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__456__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__456__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__457__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__457__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__455__id, this->__Vtask_uvm_report_warning__455__message, __Vtask_uvm_report_warning__455__verbosity, this->__Vtask_uvm_report_warning__455__filename, __Vtask_uvm_report_warning__455__line, this->__Vtask_uvm_report_warning__455__context_name, (IData)(__Vtask_uvm_report_warning__455__report_enabled_checked));
                    }
                }
            }
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk560__DOT__range[0U] 
                = unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__stride;
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk560__DOT__range[1U] 
                = (IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max);
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk560__DOT__range[2U] 
                = (IData)((unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__max 
                           >> 0x00000020U));
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk560__DOT__range[3U] 
                = (IData)(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min);
            unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk560__DOT__range[4U] 
                = (IData)((unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__min 
                           >> 0x00000020U));
            VL_NULL_CHECK(top_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1697)->__PVT__m_mems_by_offset.at(unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk560__DOT__range) 
                = unnamedblk553__DOT__unnamedblk554__DOT__mem;
            VL_NULL_CHECK(this->__PVT__m_mems_info.at(unnamedblk553__DOT__unnamedblk554__DOT__mem), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1698)->__PVT__addr 
                = unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__addrs;
            VL_ASSIGN_W(160, VL_NULL_CHECK(this->__PVT__m_mems_info
                                           .at(unnamedblk553__DOT__unnamedblk554__DOT__mem), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1699)
                        ->__PVT__mem_range, unnamedblk553__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk560__DOT__range);
        }
    }
    if ((0U == bus_width)) {
        bus_width = this->__PVT__m_n_bytes;
    }
    this->__PVT__m_system_n_bytes = bus_width;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xget_bus_infoX(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> &map_info, IData/*31:0*/ &size, IData/*31:0*/ &lsb, IData/*31:0*/ &addr_skip) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xget_bus_infoX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__459__verbosity;
    __Vfunc_uvm_report_enabled__459__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__459__severity;
    __Vfunc_uvm_report_enabled__459__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__460__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__461__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__464__verbosity;
    __Vtask_uvm_report_fatal__464__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__464__line;
    __Vtask_uvm_report_fatal__464__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__464__report_enabled_checked;
    __Vtask_uvm_report_fatal__464__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__465__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__466__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__469__Vfuncout;
    __Vtask_get_n_bits__469__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__470__verbosity;
    __Vfunc_uvm_report_enabled__470__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__470__severity;
    __Vfunc_uvm_report_enabled__470__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__471__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__472__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__475__verbosity;
    __Vtask_uvm_report_fatal__475__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__475__line;
    __Vtask_uvm_report_fatal__475__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__475__report_enabled_checked;
    __Vtask_uvm_report_fatal__475__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__476__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__477__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__480__Vfuncout;
    __Vtask_get_n_bits__480__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__481__verbosity;
    __Vfunc_uvm_report_enabled__481__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__481__severity;
    __Vfunc_uvm_report_enabled__481__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__482__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__483__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__486__verbosity;
    __Vtask_uvm_report_fatal__486__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__486__line;
    __Vtask_uvm_report_fatal__486__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__486__report_enabled_checked;
    __Vtask_uvm_report_fatal__486__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__487__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__488__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__492__Vfuncout;
    __Vtask_get_n_bits__492__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__493__Vfuncout;
    __Vtask_get_lsb_pos__493__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_13__get_n_bytes;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> __VlefCall_12__get_parent;
    std::string __VlefCall_11__get_name;
    IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_9;
    IData/*31:0*/ __VlefExpr_8;
    std::string __VlefCall_7__get_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_5;
    IData/*31:0*/ __VlefExpr_4;
    std::string __VlefCall_3__get_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk561__DOT__mem;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk562__DOT__rg;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_field> unnamedblk563__DOT__field;
    size = 0U;
    lsb = 0U;
    addr_skip = 0U;
    if ((2U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1722)
         ->__PVT__element_kind)) {
        __VlefLogOr_1 = (VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1724)
                         ->__PVT__element);
        if ((1U & (~ (IData)(__VlefLogOr_1)))) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1724)
                                           ->__PVT__element, unnamedblk561__DOT__mem);
            __VlefLogOr_1 = (! __VlefExpr_0);
        }
        if (__VlefLogOr_1) {
            this->__Vfunc_uvm_report_enabled__459__id = "REG/CAST"s;
            __Vfunc_uvm_report_enabled__459__severity = 3U;
            __Vfunc_uvm_report_enabled__459__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__460__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__460__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__461__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__461__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__459__verbosity, (IData)(__Vfunc_uvm_report_enabled__459__severity), this->__Vfunc_uvm_report_enabled__459__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1726)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                __Vtask_uvm_report_fatal__464__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__464__context_name = ""s;
                __Vtask_uvm_report_fatal__464__line = 0x000006beU;
                this->__Vtask_uvm_report_fatal__464__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_fatal__464__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__464__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_MEM, but 'element' does not point to a memory: "s, __VlefCall_3__get_name));
                this->__Vtask_uvm_report_fatal__464__id = "REG/CAST"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__465__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__465__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__466__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__466__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__464__id, this->__Vtask_uvm_report_fatal__464__message, __Vtask_uvm_report_fatal__464__verbosity, this->__Vtask_uvm_report_fatal__464__filename, __Vtask_uvm_report_fatal__464__line, this->__Vtask_uvm_report_fatal__464__context_name, (IData)(__Vtask_uvm_report_fatal__464__report_enabled_checked));
            }
        }
        this->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, unnamedblk561__DOT__mem, 1U, map_info);
        VL_NULL_CHECK(unnamedblk561__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1728)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__469__Vfuncout);
        size = __Vtask_get_n_bits__469__Vfuncout;
    } else if ((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1730)
                ->__PVT__element_kind)) {
        __VlefLogOr_5 = (VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1732)
                         ->__PVT__element);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            __VlefExpr_4 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1732)
                                           ->__PVT__element, unnamedblk562__DOT__rg);
            __VlefLogOr_5 = (! __VlefExpr_4);
        }
        if (__VlefLogOr_5) {
            this->__Vfunc_uvm_report_enabled__470__id = "REG/CAST"s;
            __Vfunc_uvm_report_enabled__470__severity = 3U;
            __Vfunc_uvm_report_enabled__470__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__471__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__471__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__472__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__472__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__470__verbosity, (IData)(__Vfunc_uvm_report_enabled__470__severity), this->__Vfunc_uvm_report_enabled__470__id, __VlefCall_6__uvm_report_enabled);
            if ((0U != __VlefCall_6__uvm_report_enabled)) {
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1734)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                __Vtask_uvm_report_fatal__475__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__475__context_name = ""s;
                __Vtask_uvm_report_fatal__475__line = 0x000006c6U;
                this->__Vtask_uvm_report_fatal__475__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_fatal__475__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__475__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_REG, but 'element' does not point to a register: "s, __VlefCall_7__get_name));
                this->__Vtask_uvm_report_fatal__475__id = "REG/CAST"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__476__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__476__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__477__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__477__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__475__id, this->__Vtask_uvm_report_fatal__475__message, __Vtask_uvm_report_fatal__475__verbosity, this->__Vtask_uvm_report_fatal__475__filename, __Vtask_uvm_report_fatal__475__line, this->__Vtask_uvm_report_fatal__475__context_name, (IData)(__Vtask_uvm_report_fatal__475__report_enabled_checked));
            }
        }
        this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, unnamedblk562__DOT__rg, 1U, map_info);
        VL_NULL_CHECK(unnamedblk562__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1736)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__480__Vfuncout);
        size = __Vtask_get_n_bits__480__Vfuncout;
    } else if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1738)
                ->__PVT__element_kind)) {
        __VlefLogOr_9 = (VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1740)
                         ->__PVT__element);
        if ((1U & (~ (IData)(__VlefLogOr_9)))) {
            __VlefExpr_8 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1740)
                                           ->__PVT__element, unnamedblk563__DOT__field);
            __VlefLogOr_9 = (! __VlefExpr_8);
        }
        if (__VlefLogOr_9) {
            this->__Vfunc_uvm_report_enabled__481__id = "REG/CAST"s;
            __Vfunc_uvm_report_enabled__481__severity = 3U;
            __Vfunc_uvm_report_enabled__481__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__482__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__482__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__483__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__483__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__481__verbosity, (IData)(__Vfunc_uvm_report_enabled__481__severity), this->__Vfunc_uvm_report_enabled__481__id, __VlefCall_10__uvm_report_enabled);
            if ((0U != __VlefCall_10__uvm_report_enabled)) {
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1742)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                __Vtask_uvm_report_fatal__486__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__486__context_name = ""s;
                __Vtask_uvm_report_fatal__486__line = 0x000006ceU;
                this->__Vtask_uvm_report_fatal__486__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_fatal__486__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__486__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_FIELD, but 'element' does not point to a field: "s, __VlefCall_11__get_name));
                this->__Vtask_uvm_report_fatal__486__id = "REG/CAST"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__487__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__487__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__488__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__488__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__486__id, this->__Vtask_uvm_report_fatal__486__message, __Vtask_uvm_report_fatal__486__verbosity, this->__Vtask_uvm_report_fatal__486__filename, __Vtask_uvm_report_fatal__486__line, this->__Vtask_uvm_report_fatal__486__context_name, (IData)(__Vtask_uvm_report_fatal__486__report_enabled_checked));
            }
        }
        VL_NULL_CHECK(unnamedblk563__DOT__field, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1743)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_12__get_parent);
        this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, __VlefCall_12__get_parent, 1U, map_info);
        VL_NULL_CHECK(unnamedblk563__DOT__field, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1744)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__492__Vfuncout);
        size = __Vtask_get_n_bits__492__Vfuncout;
        VL_NULL_CHECK(unnamedblk563__DOT__field, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1745)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__493__Vfuncout);
        lsb = __Vtask_get_lsb_pos__493__Vfuncout;
        this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_13__get_n_bytes);
        addr_skip = VL_DIV_III(32, lsb, (__VlefCall_13__get_n_bytes 
                                         << 3U));
    }
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_1__new;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk564__DOT__o;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> unnamedblk564__DOT__seq;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> tmp_parent_seq;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> system_map;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_adapter> adapter;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    VL_NULL_CHECK(system_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1759)->__VnoInFunc_get_adapter(vlSymsp, 1U, adapter);
    VL_NULL_CHECK(system_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1760)->__VnoInFunc_get_sequencer(vlSymsp, 1U, sequencer);
    if (((VlNull{} != adapter) && (VlNull{} != VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1762)
                                   ->__PVT__parent_sequence))) {
        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1765)
                      ->__PVT__parent_sequence, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1765)->__VnoInFunc_clone(vlProcess, vlSymsp, unnamedblk564__DOT__o);
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(unnamedblk564__DOT__o, unnamedblk564__DOT__seq);
            if (VL_LIKELY(((! __VlefExpr_0)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:1766: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_map.do_write.unnamedblk564", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("../../uvm/distrib/src/reg/uvm_reg_map.svh", 1766, "");
                }
            }
        }
        VL_NULL_CHECK(unnamedblk564__DOT__seq, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1767)->__VnoInFunc_set_parent_sequence(vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1767)
                                                                                ->__PVT__parent);
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1768)->__PVT__parent 
            = unnamedblk564__DOT__seq;
        tmp_parent_seq = unnamedblk564__DOT__seq;
    }
    if ((VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1772)
         ->__PVT__parent)) {
        __VlefCall_1__new = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base, vlProcess, vlSymsp, "default_parent_seq"s);
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1773)->__PVT__parent 
            = __VlefCall_1__new;
        tmp_parent_seq = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1774)
            ->__PVT__parent;
    }
    if ((VlNull{} == adapter)) {
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1778)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1779)
                               ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1779)->__VnoInFunc_start_item(vlProcess, vlSymsp, rw, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1779)
                                                                                ->__PVT__prior, VlNull{});
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1780)
                               ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1780)->__VnoInFunc_finish_item(vlProcess, vlSymsp, rw, 0xffffffffU);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1781)
                               ->__PVT__end_event, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1781)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
    } else {
        co_await this->__VnoInFunc_do_bus_write(vlProcess, vlSymsp, rw, sequencer, adapter);
    }
    if ((VlNull{} != tmp_parent_seq)) {
        VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1788)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, tmp_parent_seq);
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_read(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_1__new;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk565__DOT__o;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> unnamedblk565__DOT__seq;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> tmp_parent_seq;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> system_map;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_adapter> adapter;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    VL_NULL_CHECK(system_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1799)->__VnoInFunc_get_adapter(vlSymsp, 1U, adapter);
    VL_NULL_CHECK(system_map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1800)->__VnoInFunc_get_sequencer(vlSymsp, 1U, sequencer);
    if (((VlNull{} != adapter) && (VlNull{} != VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1802)
                                   ->__PVT__parent_sequence))) {
        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1805)
                      ->__PVT__parent_sequence, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1805)->__VnoInFunc_clone(vlProcess, vlSymsp, unnamedblk565__DOT__o);
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(unnamedblk565__DOT__o, unnamedblk565__DOT__seq);
            if (VL_LIKELY(((! __VlefExpr_0)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:1806: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_map.do_read.unnamedblk565", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("../../uvm/distrib/src/reg/uvm_reg_map.svh", 1806, "");
                }
            }
        }
        VL_NULL_CHECK(unnamedblk565__DOT__seq, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1807)->__VnoInFunc_set_parent_sequence(vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1807)
                                                                                ->__PVT__parent);
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1808)->__PVT__parent 
            = unnamedblk565__DOT__seq;
        tmp_parent_seq = unnamedblk565__DOT__seq;
    }
    if ((VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1812)
         ->__PVT__parent)) {
        __VlefCall_1__new = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base, vlProcess, vlSymsp, "default_parent_seq"s);
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1813)->__PVT__parent 
            = __VlefCall_1__new;
        tmp_parent_seq = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1814)
            ->__PVT__parent;
    }
    if ((VlNull{} == adapter)) {
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1818)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1819)
                               ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1819)->__VnoInFunc_start_item(vlProcess, vlSymsp, rw, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1819)
                                                                                ->__PVT__prior, VlNull{});
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1820)
                               ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1820)->__VnoInFunc_finish_item(vlProcess, vlSymsp, rw, 0xffffffffU);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1821)
                               ->__PVT__end_event, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1821)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
    } else {
        co_await this->__VnoInFunc_do_bus_read(vlProcess, vlSymsp, rw, sequencer, adapter);
    }
    if ((VlNull{} != tmp_parent_seq)) {
        VL_NULL_CHECK(sequencer, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1828)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, tmp_parent_seq);
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_write(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_write\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_Xget_bus_infoX__521__map_info;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__521__size;
    __Vtask_Xget_bus_infoX__521__size = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__521__lsb;
    __Vtask_Xget_bus_infoX__521__lsb = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__521__addr_skip;
    __Vtask_Xget_bus_infoX__521__addr_skip = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__523__verbosity;
    __Vfunc_uvm_report_enabled__523__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__523__severity;
    __Vfunc_uvm_report_enabled__523__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__524__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__525__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__529__verbosity;
    __Vtask_uvm_report_info__529__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__529__line;
    __Vtask_uvm_report_info__529__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__529__report_enabled_checked;
    __Vtask_uvm_report_info__529__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__530__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__531__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> __Vtask_reg2bus__535__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__537__verbosity;
    __Vfunc_uvm_report_enabled__537__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__537__severity;
    __Vfunc_uvm_report_enabled__537__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__538__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__539__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__542__verbosity;
    __Vtask_uvm_report_fatal__542__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__542__line;
    __Vtask_uvm_report_fatal__542__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__542__report_enabled_checked;
    __Vtask_uvm_report_fatal__542__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__543__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__544__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_base_response__551__response;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__556__verbosity;
    __Vfunc_uvm_report_enabled__556__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__556__severity;
    __Vfunc_uvm_report_enabled__556__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__557__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__558__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__562__verbosity;
    __Vtask_uvm_report_info__562__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__562__line;
    __Vtask_uvm_report_info__562__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__562__report_enabled_checked;
    __Vtask_uvm_report_info__562__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__563__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__564__Vfuncout;
    std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_type_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk566__DOT__i;
    unnamedblk566__DOT__i = 0;
    IData/*31:0*/ unnamedblk566__DOT__i__Vloopsize;
    unnamedblk566__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk567__DOT__val_idx;
    unnamedblk567__DOT__val_idx = 0;
    IData/*31:0*/ unnamedblk567__DOT__val_idx__Vloopsize;
    unnamedblk567__DOT__val_idx__Vloopsize = 0;
    QData/*63:0*/ unnamedblk567__DOT__foreach_value__DOT__value;
    IData/*31:0*/ unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__temp_be;
    IData/*31:0*/ unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__idx;
    IData/*31:0*/ unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__unnamedblk569__DOT__i;
    IData/*31:0*/ unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i;
    unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i = 0;
    IData/*31:0*/ unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i__Vloopsize;
    unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i__Vloopsize = 0;
    VUVM_Register8b_uvm_reg_bus_op__struct__0 unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access;
    QData/*63:0*/ unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__data;
    IData/*31:0*/ unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__unnamedblk571__DOT__z;
    IData/*31:0*/ unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i;
    unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i = 0;
    IData/*31:0*/ unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i__Vloopsize;
    unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i__Vloopsize = 0;
    VUVM_Register8b_uvm_reg_bus_op__struct__0 unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__rw_access;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__bus_req;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__unnamedblk574__DOT__bus_rsp;
    IData/*31:0*/ unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i;
    unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i = 0;
    IData/*31:0*/ unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i__Vloopsize;
    unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i__Vloopsize = 0;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<QData/*63:0*/> addrs;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> system_map;
    IData/*31:0*/ bus_width;
    CData/*7:0*/ byte_en;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    IData/*31:0*/ n_bits;
    IData/*31:0*/ lsb;
    IData/*31:0*/ skip;
    IData/*31:0*/ curr_byte;
    IData/*31:0*/ n_access_extra;
    IData/*31:0*/ n_bits_init;
    VlQueue<VUVM_Register8b_uvm_reg_bus_op__struct__0> accesses;
    addrs.clear();
    addrs.atDefault() = 0;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, bus_width);
    byte_en = 0xffU;
    n_bits = 0U;
    lsb = 0U;
    skip = 0U;
    curr_byte = 0U;
    n_access_extra = 0U;
    n_bits_init = 0U;
    accesses.clear();
    accesses.atDefault().__PVT__kind = 0;
    accesses.atDefault().__PVT__addr = 0;
    accesses.atDefault().__PVT__data = 0;
    accesses.atDefault().__PVT__n_bits = 0;
    accesses.atDefault().__PVT__byte_en = 0;
    accesses.atDefault().__PVT__status = 0;
    this->__VnoInFunc_Xget_bus_infoX(vlProcess, vlSymsp, rw, __Vtask_Xget_bus_infoX__521__map_info, __Vtask_Xget_bus_infoX__521__size, __Vtask_Xget_bus_infoX__521__lsb, __Vtask_Xget_bus_infoX__521__addr_skip);
    map_info = __Vtask_Xget_bus_infoX__521__map_info;
    n_bits_init = __Vtask_Xget_bus_infoX__521__size;
    lsb = __Vtask_Xget_bus_infoX__521__lsb;
    skip = __Vtask_Xget_bus_infoX__521__addr_skip;
    addrs = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1853)
        ->__PVT__addr;
    if ((2U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1856)
         ->__PVT__element_kind)) {
        unnamedblk566__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk566__DOT__i, addrs.size())) {
            unnamedblk566__DOT__i__Vloopsize = addrs.size();
            addrs.atWriteAppend(unnamedblk566__DOT__i) 
                = (addrs.at(unnamedblk566__DOT__i) 
                   + ((QData)((IData)(VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1858)
                                      ->__PVT__mem_range[0U])) 
                      * VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1858)
                      ->__PVT__offset));
            if ((unnamedblk566__DOT__i__Vloopsize <= addrs.size())) {
                unnamedblk566__DOT__i = ((IData)(1U) 
                                         + unnamedblk566__DOT__i);
            }
        }
    }
    unnamedblk567__DOT__val_idx = 0U;
    while (VL_LTS_III(32, unnamedblk567__DOT__val_idx, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1860)
                      ->__PVT__value.size())) {
        unnamedblk567__DOT__val_idx__Vloopsize = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1860)
            ->__PVT__value.size();
        unnamedblk567__DOT__foreach_value__DOT__value 
            = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1862)
            ->__PVT__value.at(unnamedblk567__DOT__val_idx);
        if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1865)
             ->__PVT__element_kind)) {
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__temp_be = 0U;
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__idx = 0U;
            n_access_extra = VL_MODDIV_III(32, lsb, 
                                           (bus_width 
                                            << 3U));
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__temp_be 
                = n_access_extra;
            unnamedblk567__DOT__foreach_value__DOT__value 
                = VL_SHIFTL_QQI(64,64,32, unnamedblk567__DOT__foreach_value__DOT__value, n_access_extra);
            while (VL_LTES_III(32, 8U, unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__temp_be)) {
                __Vincrement1 = unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__idx;
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__idx 
                    = ((IData)(1U) + unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__idx);
                byte_en = ((~ ((IData)(1U) << (7U & __Vincrement1))) 
                           & (IData)(byte_en));
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__temp_be 
                    = (unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__temp_be 
                       - (IData)(8U));
            }
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__temp_be 
                = (unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__temp_be 
                   + n_bits_init);
            while (VL_LTS_III(32, 0U, unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__temp_be)) {
                __Vincrement2 = unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__idx;
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__idx 
                    = ((IData)(1U) + unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__idx);
                byte_en = ((IData)(byte_en) | (0x00ffU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & __Vincrement2))));
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__temp_be 
                    = (unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__temp_be 
                       - (IData)(8U));
            }
            byte_en = ((IData)(byte_en) & (VL_SHIFTL_III(8,32,32, (IData)(1U), unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__idx) 
                                           - (IData)(1U)));
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__unnamedblk569__DOT__i = 0U;
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__unnamedblk569__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__unnamedblk569__DOT__i, skip)) {
                std::ignore = addrs.pop_front();
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__unnamedblk569__DOT__i 
                    = ((IData)(1U) + unnamedblk567__DOT__foreach_value__DOT__unnamedblk568__DOT__unnamedblk569__DOT__i);
            }
            while ((addrs.size() > ((IData)(1U) + VL_DIV_III(32, n_bits_init, 
                                                             (bus_width 
                                                              << 3U))))) {
                std::ignore = addrs.pop_back();
            }
        }
        curr_byte = 0U;
        n_bits = n_bits_init;
        accesses.clear();
        unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i, addrs.size())) {
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i__Vloopsize 
                = addrs.size();
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__kind = 0;
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__addr = 0;
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__data = 0;
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__n_bits = 0;
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__byte_en = 0;
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__status = 0;
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__data = 0ULL;
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__data 
                = (VL_SHIFTR_QQI(64,64,32, unnamedblk567__DOT__foreach_value__DOT__value, 
                                 (curr_byte << 3U)) 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                    (bus_width << 3U)) 
                      - 1ULL));
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
            this->__Vfunc_uvm_report_enabled__523__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
            __Vfunc_uvm_report_enabled__523__severity = 0U;
            __Vfunc_uvm_report_enabled__523__verbosity = 0x00000190U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__524__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__524__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__525__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__525__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__523__verbosity, (IData)(__Vfunc_uvm_report_enabled__523__severity), this->__Vfunc_uvm_report_enabled__523__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1899)
                              ->__PVT__map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1899)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_info__529__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__529__context_name = ""s;
                __Vtask_uvm_report_info__529__line = 0x0000076bU;
                this->__Vtask_uvm_report_info__529__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_info__529__verbosity = 0x00000190U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__529__message
                              ,"Writing 'h%0h at 'h%0h via map \"%s\"...",3
                              , '#',64,unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__data
                              , '#',64,addrs.at(unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i)
                              , 'S',&(__VlefCall_3__get_full_name));
                this->__Vtask_uvm_report_info__529__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__530__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__530__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__531__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__531__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__529__id, this->__Vtask_uvm_report_info__529__message, __Vtask_uvm_report_info__529__verbosity, this->__Vtask_uvm_report_info__529__filename, __Vtask_uvm_report_info__529__line, this->__Vtask_uvm_report_info__529__context_name, (IData)(__Vtask_uvm_report_info__529__report_enabled_checked));
            }
            if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1901)
                 ->__PVT__element_kind)) {
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__unnamedblk571__DOT__z = 0U;
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__unnamedblk571__DOT__z = 0U;
                while ((unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__unnamedblk571__DOT__z 
                        < bus_width)) {
                    unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__byte_en 
                        = (((~ ((IData)(1U) << (7U 
                                                & unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__unnamedblk571__DOT__z))) 
                            & unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access
                            .__PVT__byte_en) | (0x00ffU 
                                                & ((1U 
                                                    & ((IData)(byte_en) 
                                                       >> 
                                                       (7U 
                                                        & (curr_byte 
                                                           + unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__unnamedblk571__DOT__z)))) 
                                                   << 
                                                   (7U 
                                                    & unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__unnamedblk571__DOT__z))));
                    unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__unnamedblk571__DOT__z 
                        = ((IData)(1U) + unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__unnamedblk571__DOT__z);
                }
            }
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__kind 
                = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1906)
                ->__PVT__kind;
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__addr 
                = addrs.at(unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i);
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__data 
                = unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__data;
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__n_bits 
                = ((n_bits > (bus_width << 3U)) ? (bus_width 
                                                   << 3U)
                    : n_bits);
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access.__PVT__byte_en 
                = byte_en;
            accesses.push_back(unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__foreach_addr__DOT__rw_access);
            curr_byte = (curr_byte + bus_width);
            n_bits = (n_bits - (bus_width << 3U));
            if ((unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i__Vloopsize 
                 <= addrs.size())) {
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i 
                    = ((IData)(1U) + unnamedblk567__DOT__foreach_value__DOT__unnamedblk570__DOT__i);
            }
        }
        if ((VlNull{} != this->__PVT__policy)) {
            VL_NULL_CHECK(this->__PVT__policy, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1921)->__VnoInFunc_order(vlSymsp, accesses);
        }
        {
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i, accesses.size())) {
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i__Vloopsize 
                    = accesses.size();
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__rw_access 
                    = accesses.at(unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i);
                VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1928)->__VnoInFunc_m_set_item(vlSymsp, rw);
                VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1929)->__VnoInFunc_reg2bus(vlProcess, vlSymsp, unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__rw_access, __Vtask_reg2bus__535__Vfuncout);
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__bus_req 
                    = __Vtask_reg2bus__535__Vfuncout;
                VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1930)->__VnoInFunc_m_set_item(vlSymsp, VlNull{});
                if ((VlNull{} == unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__bus_req)) {
                    this->__Vfunc_uvm_report_enabled__537__id = "RegMem"s;
                    __Vfunc_uvm_report_enabled__537__severity = 3U;
                    __Vfunc_uvm_report_enabled__537__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__538__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__538__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__539__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__539__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__537__verbosity, (IData)(__Vfunc_uvm_report_enabled__537__severity), this->__Vfunc_uvm_report_enabled__537__id, __VlefCall_4__uvm_report_enabled);
                    if ((0U != __VlefCall_4__uvm_report_enabled)) {
                        VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1933)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                        __Vtask_uvm_report_fatal__542__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_fatal__542__context_name = ""s;
                        __Vtask_uvm_report_fatal__542__line = 0x0000078dU;
                        this->__Vtask_uvm_report_fatal__542__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_fatal__542__verbosity = 0U;
                        this->__Vtask_uvm_report_fatal__542__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN("adapter ["s, __VlefCall_5__get_name), "] didnt return a bus transaction"s));
                        this->__Vtask_uvm_report_fatal__542__id = "RegMem"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__543__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                            = __Vfunc_get__543__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__544__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                            = __Vtask_get_root__544__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__542__id, this->__Vtask_uvm_report_fatal__542__message, __Vtask_uvm_report_fatal__542__verbosity, this->__Vtask_uvm_report_fatal__542__filename, __Vtask_uvm_report_fatal__542__line, this->__Vtask_uvm_report_fatal__542__context_name, (IData)(__Vtask_uvm_report_fatal__542__report_enabled_checked));
                    }
                }
                VL_NULL_CHECK(unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__bus_req, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1935)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1936)
                                       ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1936)->__VnoInFunc_start_item(vlProcess, vlSymsp, unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__bus_req, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1936)
                                                                                ->__PVT__prior, VlNull{});
                if (((VlNull{} != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1938)
                      ->__PVT__parent) && (0U == unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1939)
                                  ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1939)->__VnoInFunc_mid_do(vlSymsp, rw);
                }
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1941)
                                       ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1941)->__VnoInFunc_finish_item(vlProcess, vlSymsp, unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__bus_req, 0xffffffffU);
                co_await VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__bus_req, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1942)
                                       ->__PVT__end_event, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1942)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
                if (VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1944)
                    ->__PVT__provides_responses) {
                    co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1948)
                                           ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1948)->__VnoInFunc_get_base_response(vlProcess, vlSymsp, __Vtask_get_base_response__551__response, 0xffffffffU);
                    unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__unnamedblk574__DOT__bus_rsp 
                        = __Vtask_get_base_response__551__response;
                    VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1949)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__unnamedblk574__DOT__bus_rsp, unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__rw_access);
                } else {
                    VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1952)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__bus_req, unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__rw_access);
                }
                if (((VlNull{} != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1955)
                      ->__PVT__parent) && (unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i 
                                           == (addrs.size() 
                                               - (IData)(1U))))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1956)
                                  ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1956)->__VnoInFunc_post_do(vlSymsp, rw);
                }
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1958)->__PVT__status 
                    = unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__rw_access
                    .__PVT__status;
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                this->__Vfunc_uvm_report_enabled__556__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_6__get_type_name);
                __Vfunc_uvm_report_enabled__556__severity = 0U;
                __Vfunc_uvm_report_enabled__556__verbosity = 0x00000190U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__557__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__557__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__558__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__558__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__556__verbosity, (IData)(__Vfunc_uvm_report_enabled__556__severity), this->__Vfunc_uvm_report_enabled__556__id, __VlefCall_7__uvm_report_enabled);
                if ((0U != __VlefCall_7__uvm_report_enabled)) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1962)
                                  ->__PVT__map, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1962)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    __Vtask_uvm_report_info__562__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__562__context_name = ""s;
                    __Vtask_uvm_report_info__562__line = 0x000007aaU;
                    this->__Vtask_uvm_report_info__562__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_info__562__verbosity = 0x00000190U;
                    __Vtemp_2 = VUVM_Register8b___024unit::__Venumtab_enum_name73
                        [(3U & VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1962)
                          ->__PVT__status)];
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__562__message
                                  ,"Wrote 'h%0h at 'h%0h via map \"%s\": %s...",4
                                  , '#',64,unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__unnamedblk573__DOT__rw_access
                                  .__PVT__data, '#',64,addrs.at(unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i)
                                  , 'S',&(__VlefCall_9__get_full_name)
                                  , 'S',&(__Vtemp_2));
                    this->__Vtask_uvm_report_info__562__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__563__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__563__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__564__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__564__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__562__id, this->__Vtask_uvm_report_info__562__message, __Vtask_uvm_report_info__562__verbosity, this->__Vtask_uvm_report_info__562__filename, __Vtask_uvm_report_info__562__line, this->__Vtask_uvm_report_info__562__context_name, (IData)(__Vtask_uvm_report_info__562__report_enabled_checked));
                }
                if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1964)
                     ->__PVT__status)) {
                    goto __Vlabel0;
                }
                if ((unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i__Vloopsize 
                     <= accesses.size())) {
                    unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i 
                        = ((IData)(1U) + unnamedblk567__DOT__foreach_value__DOT__unnamedblk572__DOT__i);
                }
            }
            __Vlabel0: ;
        }
        unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i, addrs.size())) {
            unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i__Vloopsize 
                = addrs.size();
            addrs.atWriteAppend(unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i) 
                = (addrs.at(unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i) 
                   + (QData)((IData)(VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1970)
                                     ->__PVT__mem_range[0U])));
            if ((unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i__Vloopsize 
                 <= addrs.size())) {
                unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i 
                    = ((IData)(1U) + unnamedblk567__DOT__foreach_value__DOT__unnamedblk575__DOT__i);
            }
        }
        if ((unnamedblk567__DOT__val_idx__Vloopsize 
             <= VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1860)
             ->__PVT__value.size())) {
            unnamedblk567__DOT__val_idx = ((IData)(1U) 
                                           + unnamedblk567__DOT__val_idx);
        }
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_read(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_read\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_Xget_bus_infoX__568__map_info;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__568__size;
    __Vtask_Xget_bus_infoX__568__size = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__568__lsb;
    __Vtask_Xget_bus_infoX__568__lsb = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__568__addr_skip;
    __Vtask_Xget_bus_infoX__568__addr_skip = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__570__verbosity;
    __Vfunc_uvm_report_enabled__570__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__570__severity;
    __Vfunc_uvm_report_enabled__570__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__571__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__572__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__576__verbosity;
    __Vtask_uvm_report_info__576__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__576__line;
    __Vtask_uvm_report_info__576__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__576__report_enabled_checked;
    __Vtask_uvm_report_info__576__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__577__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__578__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> __Vtask_reg2bus__582__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__584__verbosity;
    __Vfunc_uvm_report_enabled__584__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__584__severity;
    __Vfunc_uvm_report_enabled__584__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__585__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__586__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__589__verbosity;
    __Vtask_uvm_report_fatal__589__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__589__line;
    __Vtask_uvm_report_fatal__589__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__589__report_enabled_checked;
    __Vtask_uvm_report_fatal__589__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__590__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__591__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_base_response__598__response;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__602__verbosity;
    __Vfunc_uvm_report_enabled__602__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__602__severity;
    __Vfunc_uvm_report_enabled__602__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__603__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__604__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__608__verbosity;
    __Vtask_uvm_report_info__608__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__608__line;
    __Vtask_uvm_report_info__608__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__608__report_enabled_checked;
    __Vtask_uvm_report_info__608__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__609__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__610__Vfuncout;
    std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_type_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk576__DOT__i;
    unnamedblk576__DOT__i = 0;
    IData/*31:0*/ unnamedblk576__DOT__i__Vloopsize;
    unnamedblk576__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk577__DOT__val_idx;
    unnamedblk577__DOT__val_idx = 0;
    IData/*31:0*/ unnamedblk577__DOT__val_idx__Vloopsize;
    unnamedblk577__DOT__val_idx__Vloopsize = 0;
    IData/*31:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__temp_be;
    IData/*31:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__idx;
    IData/*31:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__unnamedblk579__DOT__i;
    IData/*31:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i;
    unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i = 0;
    IData/*31:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i__Vloopsize;
    unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i__Vloopsize = 0;
    VUVM_Register8b_uvm_reg_bus_op__struct__0 unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access;
    IData/*31:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__unnamedblk582__DOT__z;
    IData/*31:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i;
    unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i = 0;
    IData/*31:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i__Vloopsize;
    unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i__Vloopsize = 0;
    VUVM_Register8b_uvm_reg_bus_op__struct__0 unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__rw_access;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__bus_req;
    QData/*63:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__data;
    IData/*31:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__curr_byte_;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__unnamedblk585__DOT__bus_rsp;
    IData/*31:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i;
    unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i = 0;
    IData/*31:0*/ unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i__Vloopsize;
    unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i__Vloopsize = 0;
    IData/*31:0*/ __Vincrement4;
    __Vincrement4 = 0;
    IData/*31:0*/ __Vincrement3;
    __Vincrement3 = 0;
    VlQueue<QData/*63:0*/> addrs;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> system_map;
    IData/*31:0*/ bus_width;
    CData/*7:0*/ byte_en;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    IData/*31:0*/ size;
    IData/*31:0*/ n_bits;
    IData/*31:0*/ skip;
    IData/*31:0*/ lsb;
    IData/*31:0*/ curr_byte;
    IData/*31:0*/ n_access_extra;
    VlQueue<VUVM_Register8b_uvm_reg_bus_op__struct__0> accesses;
    addrs.clear();
    addrs.atDefault() = 0;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, bus_width);
    byte_en = 0xffU;
    size = 0U;
    n_bits = 0U;
    skip = 0U;
    lsb = 0U;
    curr_byte = 0U;
    n_access_extra = 0U;
    accesses.clear();
    accesses.atDefault().__PVT__kind = 0;
    accesses.atDefault().__PVT__addr = 0;
    accesses.atDefault().__PVT__data = 0;
    accesses.atDefault().__PVT__n_bits = 0;
    accesses.atDefault().__PVT__byte_en = 0;
    accesses.atDefault().__PVT__status = 0;
    this->__VnoInFunc_Xget_bus_infoX(vlProcess, vlSymsp, rw, __Vtask_Xget_bus_infoX__568__map_info, __Vtask_Xget_bus_infoX__568__size, __Vtask_Xget_bus_infoX__568__lsb, __Vtask_Xget_bus_infoX__568__addr_skip);
    map_info = __Vtask_Xget_bus_infoX__568__map_info;
    n_bits = __Vtask_Xget_bus_infoX__568__size;
    lsb = __Vtask_Xget_bus_infoX__568__lsb;
    skip = __Vtask_Xget_bus_infoX__568__addr_skip;
    addrs = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 1996)
        ->__PVT__addr;
    size = n_bits;
    if ((2U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2000)
         ->__PVT__element_kind)) {
        unnamedblk576__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk576__DOT__i, addrs.size())) {
            unnamedblk576__DOT__i__Vloopsize = addrs.size();
            addrs.atWriteAppend(unnamedblk576__DOT__i) 
                = (addrs.at(unnamedblk576__DOT__i) 
                   + ((QData)((IData)(VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2002)
                                      ->__PVT__mem_range[0U])) 
                      * VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2002)
                      ->__PVT__offset));
            if ((unnamedblk576__DOT__i__Vloopsize <= addrs.size())) {
                unnamedblk576__DOT__i = ((IData)(1U) 
                                         + unnamedblk576__DOT__i);
            }
        }
    }
    unnamedblk577__DOT__val_idx = 0U;
    while (VL_LTS_III(32, unnamedblk577__DOT__val_idx, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2004)
                      ->__PVT__value.size())) {
        unnamedblk577__DOT__val_idx__Vloopsize = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2004)
            ->__PVT__value.size();
        if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2007)
             ->__PVT__element_kind)) {
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__temp_be = 0U;
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__idx = 0U;
            n_access_extra = VL_MODDIV_III(32, lsb, 
                                           (bus_width 
                                            << 3U));
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__temp_be 
                = n_access_extra;
            while (VL_LTES_III(32, 8U, unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__temp_be)) {
                __Vincrement3 = unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__idx;
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__idx 
                    = ((IData)(1U) + unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__idx);
                byte_en = ((~ ((IData)(1U) << (7U & __Vincrement3))) 
                           & (IData)(byte_en));
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__temp_be 
                    = (unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__temp_be 
                       - (IData)(8U));
            }
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__temp_be 
                = (unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__temp_be 
                   + n_bits);
            while (VL_LTS_III(32, 0U, unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__temp_be)) {
                __Vincrement4 = unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__idx;
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__idx 
                    = ((IData)(1U) + unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__idx);
                byte_en = ((IData)(byte_en) | (0x00ffU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & __Vincrement4))));
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__temp_be 
                    = (unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__temp_be 
                       - (IData)(8U));
            }
            byte_en = ((IData)(byte_en) & (VL_SHIFTL_III(8,32,32, (IData)(1U), unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__idx) 
                                           - (IData)(1U)));
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__unnamedblk579__DOT__i = 0U;
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__unnamedblk579__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__unnamedblk579__DOT__i, skip)) {
                std::ignore = addrs.pop_front();
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__unnamedblk579__DOT__i 
                    = ((IData)(1U) + unnamedblk577__DOT__foreach_value__DOT__unnamedblk578__DOT__unnamedblk579__DOT__i);
            }
            while ((addrs.size() > ((IData)(1U) + VL_DIV_III(32, n_bits, 
                                                             (bus_width 
                                                              << 3U))))) {
                std::ignore = addrs.pop_back();
            }
        }
        curr_byte = 0U;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2029)->__PVT__value.atWrite(unnamedblk577__DOT__val_idx) = 0ULL;
        accesses.clear();
        unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i, addrs.size())) {
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i__Vloopsize 
                = addrs.size();
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__kind = 0;
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__addr = 0;
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__data = 0;
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__n_bits = 0;
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__byte_en = 0;
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__status = 0;
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
            this->__Vfunc_uvm_report_enabled__570__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
            __Vfunc_uvm_report_enabled__570__severity = 0U;
            __Vfunc_uvm_report_enabled__570__verbosity = 0x00000190U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__571__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__571__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__572__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__572__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__570__verbosity, (IData)(__Vfunc_uvm_report_enabled__570__severity), this->__Vfunc_uvm_report_enabled__570__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_info__576__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__576__context_name = ""s;
                __Vtask_uvm_report_info__576__line = 0x000007f5U;
                this->__Vtask_uvm_report_info__576__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_info__576__verbosity = 0x00000190U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__576__message
                              ,"Reading address 'h%0h via map \"%s\"...",2
                              , '#',64,addrs.at(unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i)
                              , 'S',&(__VlefCall_3__get_full_name));
                this->__Vtask_uvm_report_info__576__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__577__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__577__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__578__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__578__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__576__id, this->__Vtask_uvm_report_info__576__message, __Vtask_uvm_report_info__576__verbosity, this->__Vtask_uvm_report_info__576__filename, __Vtask_uvm_report_info__576__line, this->__Vtask_uvm_report_info__576__context_name, (IData)(__Vtask_uvm_report_info__576__report_enabled_checked));
            }
            if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2039)
                 ->__PVT__element_kind)) {
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__unnamedblk582__DOT__z = 0U;
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__unnamedblk582__DOT__z = 0U;
                while ((unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__unnamedblk582__DOT__z 
                        < bus_width)) {
                    unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__byte_en 
                        = (((~ ((IData)(1U) << (7U 
                                                & unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__unnamedblk582__DOT__z))) 
                            & unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access
                            .__PVT__byte_en) | (0x00ffU 
                                                & ((1U 
                                                    & ((IData)(byte_en) 
                                                       >> 
                                                       (7U 
                                                        & (curr_byte 
                                                           + unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__unnamedblk582__DOT__z)))) 
                                                   << 
                                                   (7U 
                                                    & unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__unnamedblk582__DOT__z))));
                    unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__unnamedblk582__DOT__z 
                        = ((IData)(1U) + unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__unnamedblk582__DOT__z);
                }
            }
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__kind 
                = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2043)
                ->__PVT__kind;
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__addr 
                = addrs.at(unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i);
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__data 
                = (QData)((IData)(curr_byte));
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__byte_en 
                = byte_en;
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access.__PVT__n_bits 
                = ((n_bits > (bus_width << 3U)) ? (bus_width 
                                                   << 3U)
                    : n_bits);
            accesses.push_back(unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__unnamedblk581__DOT__rw_access);
            curr_byte = (curr_byte + bus_width);
            n_bits = (n_bits - (bus_width << 3U));
            if ((unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i__Vloopsize 
                 <= addrs.size())) {
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i 
                    = ((IData)(1U) + unnamedblk577__DOT__foreach_value__DOT__unnamedblk580__DOT__i);
            }
        }
        if ((VlNull{} != this->__PVT__policy)) {
            VL_NULL_CHECK(this->__PVT__policy, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2057)->__VnoInFunc_order(vlSymsp, accesses);
        }
        {
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i, accesses.size())) {
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i__Vloopsize 
                    = accesses.size();
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__rw_access 
                    = accesses.at(unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i);
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__data = 0;
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__curr_byte_ = 0U;
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__curr_byte_ 
                    = (IData)(unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__rw_access
                              .__PVT__data);
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__rw_access.__PVT__data = 0ULL;
                VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2068)->__VnoInFunc_m_set_item(vlSymsp, rw);
                VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2069)->__VnoInFunc_reg2bus(vlProcess, vlSymsp, unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__rw_access, __Vtask_reg2bus__582__Vfuncout);
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__bus_req 
                    = __Vtask_reg2bus__582__Vfuncout;
                VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2070)->__VnoInFunc_m_set_item(vlSymsp, VlNull{});
                if ((VlNull{} == unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__bus_req)) {
                    this->__Vfunc_uvm_report_enabled__584__id = "RegMem"s;
                    __Vfunc_uvm_report_enabled__584__severity = 3U;
                    __Vfunc_uvm_report_enabled__584__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__585__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__585__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__586__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__586__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__584__verbosity, (IData)(__Vfunc_uvm_report_enabled__584__severity), this->__Vfunc_uvm_report_enabled__584__id, __VlefCall_4__uvm_report_enabled);
                    if ((0U != __VlefCall_4__uvm_report_enabled)) {
                        VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2072)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                        __Vtask_uvm_report_fatal__589__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_fatal__589__context_name = ""s;
                        __Vtask_uvm_report_fatal__589__line = 0x00000818U;
                        this->__Vtask_uvm_report_fatal__589__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_fatal__589__verbosity = 0U;
                        this->__Vtask_uvm_report_fatal__589__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN("adapter ["s, __VlefCall_5__get_name), "] didnt return a bus transaction"s));
                        this->__Vtask_uvm_report_fatal__589__id = "RegMem"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__590__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                            = __Vfunc_get__590__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__591__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                            = __Vtask_get_root__591__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__589__id, this->__Vtask_uvm_report_fatal__589__message, __Vtask_uvm_report_fatal__589__verbosity, this->__Vtask_uvm_report_fatal__589__filename, __Vtask_uvm_report_fatal__589__line, this->__Vtask_uvm_report_fatal__589__context_name, (IData)(__Vtask_uvm_report_fatal__589__report_enabled_checked));
                    }
                }
                VL_NULL_CHECK(unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__bus_req, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2074)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2075)
                                       ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2075)->__VnoInFunc_start_item(vlProcess, vlSymsp, unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__bus_req, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2075)
                                                                                ->__PVT__prior, VlNull{});
                if (((VlNull{} != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2077)
                      ->__PVT__parent) && (0U == unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2078)
                                  ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2078)->__VnoInFunc_mid_do(vlSymsp, rw);
                }
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2081)
                                       ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2081)->__VnoInFunc_finish_item(vlProcess, vlSymsp, unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__bus_req, 0xffffffffU);
                co_await VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__bus_req, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2082)
                                       ->__PVT__end_event, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2082)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
                if (VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2084)
                    ->__PVT__provides_responses) {
                    co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2088)
                                           ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2088)->__VnoInFunc_get_base_response(vlProcess, vlSymsp, __Vtask_get_base_response__598__response, 0xffffffffU);
                    unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__unnamedblk585__DOT__bus_rsp 
                        = __Vtask_get_base_response__598__response;
                    VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2089)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__unnamedblk585__DOT__bus_rsp, unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__rw_access);
                } else {
                    VL_NULL_CHECK(adapter, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2092)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__bus_req, unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__rw_access);
                }
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__data 
                    = (unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__rw_access
                       .__PVT__data & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                     (bus_width 
                                                      << 3U)) 
                                       - 1ULL));
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2097)->__PVT__status 
                    = unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__rw_access
                    .__PVT__status;
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                this->__Vfunc_uvm_report_enabled__602__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_6__get_type_name);
                __Vfunc_uvm_report_enabled__602__severity = 0U;
                __Vfunc_uvm_report_enabled__602__verbosity = 0x00000190U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__603__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__603__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__604__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__604__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__602__verbosity, (IData)(__Vfunc_uvm_report_enabled__602__severity), this->__Vfunc_uvm_report_enabled__602__id, __VlefCall_7__uvm_report_enabled);
                if ((0U != __VlefCall_7__uvm_report_enabled)) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    __Vtask_uvm_report_info__608__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__608__context_name = ""s;
                    __Vtask_uvm_report_info__608__line = 0x00000838U;
                    this->__Vtask_uvm_report_info__608__filename = "../../uvm/distrib/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_info__608__verbosity = 0x00000190U;
                    __Vtemp_2 = VUVM_Register8b___024unit::__Venumtab_enum_name73
                        [(3U & VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2104)
                          ->__PVT__status)];
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__608__message
                                  ,"Read 'h%0h at 'h%0h via map \"%s\": %s...",4
                                  , '#',64,unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__data
                                  , '#',64,addrs.at(unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i)
                                  , 'S',&(__VlefCall_9__get_full_name)
                                  , 'S',&(__Vtemp_2));
                    this->__Vtask_uvm_report_info__608__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__609__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__609__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__610__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__610__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__608__id, this->__Vtask_uvm_report_info__608__message, __Vtask_uvm_report_info__608__verbosity, this->__Vtask_uvm_report_info__608__filename, __Vtask_uvm_report_info__608__line, this->__Vtask_uvm_report_info__608__context_name, (IData)(__Vtask_uvm_report_info__608__report_enabled_checked));
                }
                if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2106)
                     ->__PVT__status)) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2109)->__PVT__value.atWrite(unnamedblk577__DOT__val_idx) 
                    = (VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2109)
                       ->__PVT__value.at(unnamedblk577__DOT__val_idx) 
                       | VL_SHIFTL_QQI(64,64,32, unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__data, 
                                       (unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__unnamedblk584__DOT__curr_byte_ 
                                        << 3U)));
                if (((VlNull{} != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2111)
                      ->__PVT__parent) && (unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i 
                                           == (addrs.size() 
                                               - (IData)(1U))))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2112)
                                  ->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2112)->__VnoInFunc_post_do(vlSymsp, rw);
                }
                if ((unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i__Vloopsize 
                     <= accesses.size())) {
                    unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i 
                        = ((IData)(1U) + unnamedblk577__DOT__foreach_value__DOT__unnamedblk583__DOT__i);
                }
            }
            __Vlabel0: ;
        }
        unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i, addrs.size())) {
            unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i__Vloopsize 
                = addrs.size();
            addrs.atWriteAppend(unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i) 
                = (addrs.at(unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i) 
                   + (QData)((IData)(VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2117)
                                     ->__PVT__mem_range[0U])));
            if ((unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i__Vloopsize 
                 <= addrs.size())) {
                unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i 
                    = ((IData)(1U) + unnamedblk577__DOT__foreach_value__DOT__unnamedblk586__DOT__i);
            }
        }
        if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2119)
             ->__PVT__element_kind)) {
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2120)->__PVT__value.atWrite(unnamedblk577__DOT__val_idx) 
                = (VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2120)
                                 ->__PVT__value.at(unnamedblk577__DOT__val_idx), n_access_extra) 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, size) 
                      - 1ULL));
        }
        if ((unnamedblk577__DOT__val_idx__Vloopsize 
             <= VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2004)
             ->__PVT__value.size())) {
            unnamedblk577__DOT__val_idx = ((IData)(1U) 
                                           + unnamedblk577__DOT__val_idx);
        }
    }
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_14__get_name;
    QData/*63:0*/ __VlefCall_13__get_address;
    IData/*31:0*/ __VlefCall_12__get_inst_id;
    std::string __VlefCall_11__get_type_name;
    std::string __VlefCall_10__get_name;
    QData/*63:0*/ __VlefCall_9__get_address;
    IData/*31:0*/ __VlefCall_8__get_inst_id;
    std::string __VlefCall_7__get_type_name;
    std::string __VlefCall_6__get_name;
    QData/*63:0*/ __VlefCall_5__get_address;
    IData/*31:0*/ __VlefCall_4__get_inst_id;
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk587__DOT__j;
    unnamedblk587__DOT__j = 0;
    IData/*31:0*/ unnamedblk587__DOT__j__Vloopsize;
    unnamedblk587__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk588__DOT__j;
    unnamedblk588__DOT__j = 0;
    IData/*31:0*/ unnamedblk588__DOT__j__Vloopsize;
    unnamedblk588__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk589__DOT__j;
    unnamedblk589__DOT__j = 0;
    IData/*31:0*/ unnamedblk589__DOT__j__Vloopsize;
    unnamedblk589__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk590__DOT__j;
    unnamedblk590__DOT__j = 0;
    IData/*31:0*/ unnamedblk590__DOT__j__Vloopsize;
    unnamedblk590__DOT__j__Vloopsize = 0;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg>> vregs;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem>> mems;
    IData/*31:0*/ endian;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>> maps;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base> sqr;
    regs.clear();
    vregs.clear();
    mems.clear();
    endian = 0U;
    maps.clear();
    this->__VnoInFunc_get_sequencer(vlSymsp, 1U, sqr);
    VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_get_endian(vlSymsp, 0U, endian);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2149)->__VnoInFunc_print_generic(vlSymsp, "endian"s, ""s, 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(VUVM_Register8b___024unit::__Venumtab_enum_name79
                                                                                [
                                                                                (7U 
                                                                                & endian)]), 0x2eU);
    if ((VlNull{} != sqr)) {
        VL_NULL_CHECK(sqr, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2151)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
        VL_NULL_CHECK(sqr, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2151)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2151)->__VnoInFunc_print_generic(vlSymsp, "effective sequencer"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), 0x2eU);
    }
    this->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
    unnamedblk587__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk587__DOT__j, regs.size())) {
        unnamedblk587__DOT__j__Vloopsize = regs.size();
        VL_NULL_CHECK(regs.at(unnamedblk587__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2155)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
        VL_NULL_CHECK(regs.at(unnamedblk587__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2155)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        VL_NULL_CHECK(regs.at(unnamedblk587__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2155)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_4__get_inst_id);
        VL_NULL_CHECK(regs.at(unnamedblk587__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2155)->__VnoInFunc_get_address(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_5__get_address);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2155)->__VnoInFunc_print_generic(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",2
                                                                                , '~',32,__VlefCall_4__get_inst_id
                                                                                , '#',64,__VlefCall_5__get_address) , 0x2eU);
        if ((unnamedblk587__DOT__j__Vloopsize <= regs.size())) {
            unnamedblk587__DOT__j = ((IData)(1U) + unnamedblk587__DOT__j);
        }
    }
    this->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
    unnamedblk588__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk588__DOT__j, mems.size())) {
        unnamedblk588__DOT__j__Vloopsize = mems.size();
        VL_NULL_CHECK(mems.at(unnamedblk588__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2160)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
        VL_NULL_CHECK(mems.at(unnamedblk588__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2160)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
        VL_NULL_CHECK(mems.at(unnamedblk588__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2160)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_8__get_inst_id);
        VL_NULL_CHECK(mems.at(unnamedblk588__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2160)->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_9__get_address);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2160)->__VnoInFunc_print_generic(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_6__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_7__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",2
                                                                                , '~',32,__VlefCall_8__get_inst_id
                                                                                , '#',64,__VlefCall_9__get_address) , 0x2eU);
        if ((unnamedblk588__DOT__j__Vloopsize <= mems.size())) {
            unnamedblk588__DOT__j = ((IData)(1U) + unnamedblk588__DOT__j);
        }
    }
    this->__VnoInFunc_get_virtual_registers(vlSymsp, vregs, 1U);
    unnamedblk589__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk589__DOT__j, vregs.size())) {
        unnamedblk589__DOT__j__Vloopsize = vregs.size();
        VL_NULL_CHECK(vregs.at(unnamedblk589__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2164)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
        VL_NULL_CHECK(vregs.at(unnamedblk589__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2164)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
        VL_NULL_CHECK(vregs.at(unnamedblk589__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2164)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_12__get_inst_id);
        VL_NULL_CHECK(vregs.at(unnamedblk589__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2164)->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_13__get_address);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2164)->__VnoInFunc_print_generic(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_10__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_11__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",2
                                                                                , '~',32,__VlefCall_12__get_inst_id
                                                                                , '#',64,__VlefCall_13__get_address) , 0x2eU);
        if ((unnamedblk589__DOT__j__Vloopsize <= vregs.size())) {
            unnamedblk589__DOT__j = ((IData)(1U) + unnamedblk589__DOT__j);
        }
    }
    this->__VnoInFunc_get_submaps(vlSymsp, maps, 1U);
    unnamedblk590__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk590__DOT__j, maps.size())) {
        unnamedblk590__DOT__j__Vloopsize = maps.size();
        VL_NULL_CHECK(maps.at(unnamedblk590__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2168)->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2168)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_14__get_name), maps.at(unnamedblk590__DOT__j), 0x2eU);
        if ((unnamedblk590__DOT__j__Vloopsize <= maps.size())) {
            unnamedblk590__DOT__j = ((IData)(1U) + unnamedblk590__DOT__j);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__convert2string;
    std::string __VlefCall_3__convert2string;
    std::string __VlefCall_2__convert2string;
    IData/*31:0*/ __VlefCall_1__get_n_bytes;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk591__DOT__j;
    unnamedblk591__DOT__j = 0;
    IData/*31:0*/ unnamedblk591__DOT__j__Vloopsize;
    unnamedblk591__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk592__DOT__j;
    unnamedblk592__DOT__j = 0;
    IData/*31:0*/ unnamedblk592__DOT__j__Vloopsize;
    unnamedblk592__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk593__DOT__j;
    unnamedblk593__DOT__j = 0;
    IData/*31:0*/ unnamedblk593__DOT__j__Vloopsize;
    unnamedblk593__DOT__j__Vloopsize = 0;
    convert2string__Vfuncrtn = ""s;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg>> vregs;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem>> mems;
    IData/*31:0*/ endian;
    std::string prefix;
    regs.clear();
    vregs.clear();
    mems.clear();
    endian = 0U;
    prefix = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sMap %s",2
                  , 'S',&(prefix), 'S',&(__VlefCall_0__get_full_name));
    this->__VnoInFunc_get_endian(vlSymsp, 0U, endian);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_1__get_n_bytes);
    __Vtemp_1 = VUVM_Register8b___024unit::__Venumtab_enum_name79
        [(7U & endian)];
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s -- %0d bytes (%s)",3
                  , 'S',&(convert2string__Vfuncrtn)
                  , '#',32,__VlefCall_1__get_n_bytes
                  , 'S',&(__Vtemp_1));
    this->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
    unnamedblk591__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk591__DOT__j, regs.size())) {
        unnamedblk591__DOT__j__Vloopsize = regs.size();
        VL_NULL_CHECK(regs.at(unnamedblk591__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2187)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_2__convert2string));
        if ((unnamedblk591__DOT__j__Vloopsize <= regs.size())) {
            unnamedblk591__DOT__j = ((IData)(1U) + unnamedblk591__DOT__j);
        }
    }
    this->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
    unnamedblk592__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk592__DOT__j, mems.size())) {
        unnamedblk592__DOT__j__Vloopsize = mems.size();
        VL_NULL_CHECK(mems.at(unnamedblk592__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2192)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_3__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_3__convert2string));
        if ((unnamedblk592__DOT__j__Vloopsize <= mems.size())) {
            unnamedblk592__DOT__j = ((IData)(1U) + unnamedblk592__DOT__j);
        }
    }
    this->__VnoInFunc_get_virtual_registers(vlSymsp, vregs, 1U);
    unnamedblk593__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk593__DOT__j, vregs.size())) {
        unnamedblk593__DOT__j__Vloopsize = vregs.size();
        VL_NULL_CHECK(vregs.at(unnamedblk593__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_map.svh", 2197)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_4__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_4__convert2string));
        if ((unnamedblk593__DOT__j__Vloopsize <= vregs.size())) {
            unnamedblk593__DOT__j = ((IData)(1U) + unnamedblk593__DOT__j);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    clone__Vfuncrtn = VlNull{};
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_copy\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_base_addr = 0;
    __PVT__m_n_bytes = 0;
    __PVT__m_endian = 0;
    __PVT__m_byte_addressing = 0;
    __PVT__m_auto_predict = 0;
    __PVT__m_check_on_read = 0;
    __PVT__m_system_n_bytes = 0;
    __PVT__m_parent_maps.atDefault() = 0;
    __PVT__m_submaps.atDefault() = 0;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::~VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map::~\n"); );
}
