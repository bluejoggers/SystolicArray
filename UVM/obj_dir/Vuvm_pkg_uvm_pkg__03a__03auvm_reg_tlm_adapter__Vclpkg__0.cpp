// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi29> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi29__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi29> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi29__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter, vlProcess, vlSymsp, "uvm_reg_tlm_adapter"s);
    } else {
        tmp = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_tlm_adapter"s;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 172)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vuvm_pkg_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_adapter::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_reg2bus(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, const Vuvm_pkg_uvm_reg_bus_op__struct__0 &rw, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> &reg2bus__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_reg2bus\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_streaming_width;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk2__DOT__i;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    IData/*31:0*/ nbytes;
    QData/*63:0*/ addr;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi7__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "tlm_gp"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), gp);
    nbytes = ((IData)(1U) + VL_DIVS_III(32, (rw.__PVT__n_bits 
                                             - (IData)(1U)), (IData)(8U)));
    addr = rw.__PVT__addr;
    if ((1U == rw.__PVT__kind)) {
        VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 189)->__VnoInFunc_set_command(vlSymsp, 1U);
    } else {
        VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 191)->__VnoInFunc_set_command(vlSymsp, 0U);
    }
    VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 193)->__VnoInFunc_set_address(vlSymsp, addr);
    VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 195)->__PVT__m_byte_enable.renew(nbytes);
    VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 196)->__PVT__m_byte_enable_length 
        = nbytes;
    VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 198)->__VnoInFunc_set_streaming_width(vlSymsp, nbytes);
    VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 200)->__VnoInFunc_get_streaming_width(vlSymsp, __VlefCall_1__get_streaming_width);
    VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 200)->__PVT__m_data.renew(__VlefCall_1__get_streaming_width);
    VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 201)->__PVT__m_length 
        = nbytes;
    unnamedblk2__DOT__i = 0U;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, nbytes)) {
        VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 204)->__PVT__m_data.atWrite(unnamedblk2__DOT__i) 
            = (0x000000ffU & (IData)((rw.__PVT__data 
                                      >> (0x0000003fU 
                                          & VL_MULS_III(32, (IData)(8U), unnamedblk2__DOT__i)))));
        VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 205)->__PVT__m_byte_enable.atWrite(unnamedblk2__DOT__i) 
            = (VL_GTS_III(32, unnamedblk2__DOT__i, nbytes)
                ? 0U : ((1U & (rw.__PVT__byte_en >> 
                               (7U & unnamedblk2__DOT__i)))
                         ? 0xffU : 0U));
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
    }
    reg2bus__Vfuncrtn = gp;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_bus2reg(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> bus_item, Vuvm_pkg_uvm_reg_bus_op__struct__0 &rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_bus2reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__17__verbosity;
    __Vtask_uvm_report_fatal__17__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__17__line;
    __Vtask_uvm_report_fatal__17__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__17__report_enabled_checked;
    __Vtask_uvm_report_fatal__17__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__21__verbosity;
    __Vfunc_uvm_report_enabled__21__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__21__severity;
    __Vfunc_uvm_report_enabled__21__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__25__verbosity;
    __Vtask_uvm_report_error__25__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__25__line;
    __Vtask_uvm_report_error__25__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__25__report_enabled_checked;
    __Vtask_uvm_report_error__25__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_5__is_response_ok;
    QData/*63:0*/ __VlefCall_4__get_address;
    IData/*31:0*/ __VlefCall_3__get_command;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    IData/*31:0*/ unnamedblk3__DOT__i__Vloopsize;
    unnamedblk3__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk4__DOT__i;
    unnamedblk4__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__i__Vloopsize;
    unnamedblk4__DOT__i__Vloopsize = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    {
        if ((VlNull{} == bus_item)) {
            this->__Vfunc_uvm_report_enabled__13__id = "REG/NULL_ITEM"s;
            __Vfunc_uvm_report_enabled__13__severity = 3U;
            __Vfunc_uvm_report_enabled__13__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__17__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__17__context_name = ""s;
                __Vtask_uvm_report_fatal__17__line = 0x000000e1U;
                this->__Vtask_uvm_report_fatal__17__filename = "../../uvm/distrib/src/reg/uvm_reg_adapter.svh"s;
                __Vtask_uvm_report_fatal__17__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__17__message = "bus2reg: bus_item argument is null"s;
                this->__Vtask_uvm_report_fatal__17__id = "REG/NULL_ITEM"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__18__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__18__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__19__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__17__id, this->__Vtask_uvm_report_fatal__17__message, __Vtask_uvm_report_fatal__17__verbosity, this->__Vtask_uvm_report_fatal__17__filename, __Vtask_uvm_report_fatal__17__line, this->__Vtask_uvm_report_fatal__17__context_name, (IData)(__Vtask_uvm_report_fatal__17__report_enabled_checked));
            }
        }
        __VlefExpr_1 = VL_CAST_DYNAMIC(bus_item, gp);
        if ((! __VlefExpr_1)) {
            this->__Vfunc_uvm_report_enabled__21__id = "WRONG_TYPE"s;
            __Vfunc_uvm_report_enabled__21__severity = 2U;
            __Vfunc_uvm_report_enabled__21__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__22__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__22__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__21__verbosity, (IData)(__Vfunc_uvm_report_enabled__21__severity), this->__Vfunc_uvm_report_enabled__21__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                __Vtask_uvm_report_error__25__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__25__context_name = ""s;
                __Vtask_uvm_report_error__25__line = 0x000000e4U;
                this->__Vtask_uvm_report_error__25__filename = "../../uvm/distrib/src/reg/uvm_reg_adapter.svh"s;
                __Vtask_uvm_report_error__25__verbosity = 0U;
                this->__Vtask_uvm_report_error__25__message = "Provided bus_item is not of type uvm_tlm_gp"s;
                this->__Vtask_uvm_report_error__25__id = "WRONG_TYPE"s;
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
        VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 232)->__VnoInFunc_get_command(vlSymsp, __VlefCall_3__get_command);
        rw.__PVT__kind = ((1U == __VlefCall_3__get_command)
                           ? 1U : 0U);
        VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 237)->__VnoInFunc_get_address(vlSymsp, __VlefCall_4__get_address);
        rw.__PVT__addr = __VlefCall_4__get_address;
        rw.__PVT__byte_en = 0U;
        unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__i, VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 240)
                          ->__PVT__m_byte_enable.size())) {
            unnamedblk3__DOT__i__Vloopsize = VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 240)
                ->__PVT__m_byte_enable.size();
            rw.__PVT__byte_en = (((~ ((IData)(1U) << 
                                      (7U & unnamedblk3__DOT__i))) 
                                  & rw.__PVT__byte_en) 
                                 | (0x00ffU & ((1U 
                                                & VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 241)
                                                ->__PVT__m_byte_enable.at(unnamedblk3__DOT__i)) 
                                               << (7U 
                                                   & unnamedblk3__DOT__i))));
            if ((unnamedblk3__DOT__i__Vloopsize <= VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 240)
                 ->__PVT__m_byte_enable.size())) {
                unnamedblk3__DOT__i = ((IData)(1U) 
                                       + unnamedblk3__DOT__i);
            }
        }
        rw.__PVT__data = 0ULL;
        unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__i, VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 244)
                          ->__PVT__m_data.size())) {
            unnamedblk4__DOT__i__Vloopsize = VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 244)
                ->__PVT__m_data.size();
            rw.__PVT__data = (((~ (0x00000000000000ffULL 
                                   << (0x0000003fU 
                                       & VL_MULS_III(32, (IData)(8U), unnamedblk4__DOT__i)))) 
                               & rw.__PVT__data) | 
                              ((QData)((IData)(VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 245)
                                               ->__PVT__m_data.at(unnamedblk4__DOT__i))) 
                               << (0x0000003fU & VL_MULS_III(32, (IData)(8U), unnamedblk4__DOT__i))));
            if ((unnamedblk4__DOT__i__Vloopsize <= VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 244)
                 ->__PVT__m_data.size())) {
                unnamedblk4__DOT__i = ((IData)(1U) 
                                       + unnamedblk4__DOT__i);
            }
        }
        VL_NULL_CHECK(gp, "../../uvm/distrib/src/reg/uvm_reg_adapter.svh", 247)->__VnoInFunc_is_response_ok(vlSymsp, __VlefCall_5__is_response_ok);
        rw.__PVT__status = ((IData)(__VlefCall_5__is_response_ok)
                             ? 0U : 1U);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_tlm_adapter::~\n"); );
}
