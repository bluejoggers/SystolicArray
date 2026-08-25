// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator___024unit__03a__03aact_txn__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__Tz61> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator___024unit__03a__03aact_txn__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz61__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__Tz61> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz61__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_Activator___024unit__03a__03aact_txn, vlProcess, vlSymsp, "act_txn"s);
    } else {
        tmp = VL_NEW(VUVM_Activator___024unit__03a__03aact_txn, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Locals
    CData/*0:0*/ __Vtask_compare_field__6__Vfuncout;
    __Vtask_compare_field__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__13____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__13____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__15__Vfuncout;
    __Vfunc_uvm_re_match__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__15____Vincrement1;
    __Vfunc_uvm_re_match__15____Vincrement1 = 0;
    CData/*0:0*/ __Vtask_compare_field__20__Vfuncout;
    __Vtask_compare_field__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__27____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__27____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__29__Vfuncout;
    __Vfunc_uvm_re_match__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__29____Vincrement1;
    __Vfunc_uvm_re_match__29____Vincrement1 = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    VlWide<128>/*4095:0*/ __Vtemp_4;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_7__get_full_scope_arg;
    std::string __VlefCall_6__get;
    QData/*63:0*/ __VlefCall_5__unpack_field_int;
    std::string __VlefCall_4__get_full_scope_arg;
    std::string __VlefCall_3__get;
    QData/*63:0*/ __VlefCall_2__unpack_field_int;
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> unnamedblk1__DOT__local_data___05F;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__matched;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk3__DOT__matched;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 36)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator___024unit__03a__03aact_txn>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        VUVM_Activator_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
            if ((! __VlefExpr_1)) {
                goto __Vlabel0;
            }
        }
        if (((((((((0x00020003U == what___05F) | (1U 
                                                  == what___05F)) 
                  | (4U == what___05F)) | (0x00000100U 
                                           == what___05F)) 
                | (0x00020002U == what___05F)) | (0x00000040U 
                                                  == what___05F)) 
              | (0x00000010U == what___05F)) | (0x00020006U 
                                                == what___05F))) {
            if ((0x00020003U == what___05F)) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)->__VnoInFunc_do_field_check(vlSymsp, "data_in"s, 
                                                                                VlClassRef<VUVM_Activator___024unit__03a__03aact_txn>{this});
            } else if ((1U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                this->__PVT__data_in = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_Activator.sv", 37)
                    ->__PVT__data_in;
            } else if ((4U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                if ((this->__PVT__data_in != VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_Activator.sv", 37)
                     ->__PVT__data_in)) {
                    __Vtemp_1[0U] = this->__PVT__data_in;
                    __Vilp1 = 1U;
                    while ((__Vilp1 <= 0x0000007fU)) {
                        __Vtemp_1[__Vilp1] = 0U;
                        __Vilp1 = ((IData)(1U) + __Vilp1);
                    }
                    __Vtemp_2[0U] = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_Activator.sv", 37)
                        ->__PVT__data_in;
                    __Vilp2 = 1U;
                    while ((__Vilp2 <= 0x0000007fU)) {
                        __Vtemp_2[__Vilp2] = 0U;
                        __Vilp2 = ((IData)(1U) + __Vilp2);
                    }
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                                  ->__PVT__comparer, "UVM_Activator.sv", 37)->__VnoInFunc_compare_field(vlProcess, vlSymsp, "data_in"s, __Vtemp_1, __Vtemp_2, 0x00000020U, 0U, __Vtask_compare_field__6__Vfuncout);
                    if (((0U != VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                                              ->__PVT__comparer, "UVM_Activator.sv", 37)
                          ->__PVT__result) && (VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                                                             ->__PVT__comparer, "UVM_Activator.sv", 37)
                                               ->__PVT__show_max 
                                               <= VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                                                                ->__PVT__comparer, "UVM_Activator.sv", 37)
                                               ->__PVT__result))) {
                        goto __Vlabel0;
                    }
                }
            } else if ((0x00000100U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                              ->__PVT__packer, "UVM_Activator.sv", 37)->__VnoInFunc_pack_field_int(vlSymsp, (QData)((IData)(this->__PVT__data_in)), 0x00000020U);
            } else if ((0x00020002U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                              ->__PVT__packer, "UVM_Activator.sv", 37)->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000020U, __VlefCall_2__unpack_field_int);
                this->__PVT__data_in = (IData)(__VlefCall_2__unpack_field_int);
            } else if ((0x00000040U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                              ->__PVT__recorder, "UVM_Activator.sv", 37)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "data_in"s, (QData)((IData)(this->__PVT__data_in)), 0x00000020U, 0U);
            } else if ((0x00000010U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                              ->__PVT__printer, "UVM_Activator.sv", 37)->__VnoInFunc_print_field_int(vlSymsp, "data_in"s, (QData)((IData)(this->__PVT__data_in)), 0x00000020U, 0U, 0x2eU, ""s);
            } else {
                unnamedblk1__DOT__unnamedblk2__DOT__matched = 0U;
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                              ->__PVT__scope, "UVM_Activator.sv", 37)->__VnoInFunc_set_arg(vlSymsp, "data_in"s);
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                              ->__PVT__scope, "UVM_Activator.sv", 37)->__VnoInFunc_get(vlSymsp, __VlefCall_3__get);
                this->__Vfunc_uvm_is_match__13__str 
                    = VL_CVT_PACK_STR_NN(__VlefCall_3__get);
                this->__Vfunc_uvm_is_match__13__expr 
                    = str___05F;
                this->__Vfunc_uvm_glob_to_re__14__glob 
                    = this->__Vfunc_uvm_is_match__13__expr;
                this->__Vfunc_uvm_glob_to_re__14__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__14__glob;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__14__Vfuncout;
                this->__Vfunc_uvm_re_match__15__str 
                    = this->__Vfunc_uvm_is_match__13__str;
                this->__Vfunc_uvm_re_match__15__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__15____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__15__re))) {
                        __Vfunc_uvm_re_match__15__Vfuncout = 0U;
                        goto __Vlabel1;
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__15__re,0U))) {
                        this->__Vfunc_uvm_re_match__15__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__15__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__15__re) 
                                           - (IData)(1U)));
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__15__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__15__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__15__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__15__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__15__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__15__Vfuncout = 1U;
                            goto __Vlabel1;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    }
                    while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__15__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__15__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__15__re))) {
                                __Vfunc_uvm_re_match__15__Vfuncout = 0U;
                                goto __Vlabel1;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__15__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__15__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                    | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__15__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match__15____Vincrement1 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match__15____Vincrement1;
                        }
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__15__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__15__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    }
                    __Vfunc_uvm_re_match__15__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__15__re))
                            ? 0U : 1U);
                    __Vlabel1: ;
                }
                __Vfunc_uvm_is_match__13____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__15__Vfuncout;
                unnamedblk1__DOT__unnamedblk2__DOT__matched 
                    = (0U == __Vfunc_uvm_is_match__13____VlefCall_0__uvm_re_match);
                if (unnamedblk1__DOT__unnamedblk2__DOT__matched) {
                    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__print_matches) {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)->__VnoInFunc_get_full_scope_arg(vlSymsp, __VlefCall_4__get_full_scope_arg);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STRMTC"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_int(): Matched string "s, str___05F), " to field "s), __VlefCall_4__get_full_scope_arg)), 0x00000064U, ""s, 0U, ""s, 0U);
                    }
                    this->__PVT__data_in = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                        ->__PVT__bitstream[0U];
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)->__PVT__status = 1U;
                }
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 37)
                              ->__PVT__scope, "UVM_Activator.sv", 37)->__VnoInFunc_unset_arg(vlSymsp, "data_in"s);
            }
        }
        if (((((((((0x00020003U == what___05F) | (1U 
                                                  == what___05F)) 
                  | (4U == what___05F)) | (0x00000100U 
                                           == what___05F)) 
                | (0x00020002U == what___05F)) | (0x00000040U 
                                                  == what___05F)) 
              | (0x00000010U == what___05F)) | (0x00020006U 
                                                == what___05F))) {
            if ((0x00020003U == what___05F)) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)->__VnoInFunc_do_field_check(vlSymsp, "data_out"s, 
                                                                                VlClassRef<VUVM_Activator___024unit__03a__03aact_txn>{this});
            } else if ((1U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                this->__PVT__data_out = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_Activator.sv", 38)
                    ->__PVT__data_out;
            } else if ((4U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                if ((this->__PVT__data_out != VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_Activator.sv", 38)
                     ->__PVT__data_out)) {
                    __Vtemp_3[0U] = this->__PVT__data_out;
                    __Vilp3 = 1U;
                    while ((__Vilp3 <= 0x0000007fU)) {
                        __Vtemp_3[__Vilp3] = 0U;
                        __Vilp3 = ((IData)(1U) + __Vilp3);
                    }
                    __Vtemp_4[0U] = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_Activator.sv", 38)
                        ->__PVT__data_out;
                    __Vilp4 = 1U;
                    while ((__Vilp4 <= 0x0000007fU)) {
                        __Vtemp_4[__Vilp4] = 0U;
                        __Vilp4 = ((IData)(1U) + __Vilp4);
                    }
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)
                                  ->__PVT__comparer, "UVM_Activator.sv", 38)->__VnoInFunc_compare_field(vlProcess, vlSymsp, "data_out"s, __Vtemp_3, __Vtemp_4, 0x00000020U, 0U, __Vtask_compare_field__20__Vfuncout);
                }
            } else if ((0x00000100U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)
                              ->__PVT__packer, "UVM_Activator.sv", 38)->__VnoInFunc_pack_field_int(vlSymsp, (QData)((IData)(this->__PVT__data_out)), 0x00000020U);
            } else if ((0x00020002U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)
                              ->__PVT__packer, "UVM_Activator.sv", 38)->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000020U, __VlefCall_5__unpack_field_int);
                this->__PVT__data_out = (IData)(__VlefCall_5__unpack_field_int);
            } else if ((0x00000040U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)
                              ->__PVT__recorder, "UVM_Activator.sv", 38)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "data_out"s, (QData)((IData)(this->__PVT__data_out)), 0x00000020U, 0U);
            } else if ((0x00000010U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)
                              ->__PVT__printer, "UVM_Activator.sv", 38)->__VnoInFunc_print_field_int(vlSymsp, "data_out"s, (QData)((IData)(this->__PVT__data_out)), 0x00000020U, 0U, 0x2eU, ""s);
            } else {
                unnamedblk1__DOT__unnamedblk3__DOT__matched = 0U;
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)
                              ->__PVT__scope, "UVM_Activator.sv", 38)->__VnoInFunc_set_arg(vlSymsp, "data_out"s);
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)
                              ->__PVT__scope, "UVM_Activator.sv", 38)->__VnoInFunc_get(vlSymsp, __VlefCall_6__get);
                this->__Vfunc_uvm_is_match__27__str 
                    = VL_CVT_PACK_STR_NN(__VlefCall_6__get);
                this->__Vfunc_uvm_is_match__27__expr 
                    = str___05F;
                this->__Vfunc_uvm_glob_to_re__28__glob 
                    = this->__Vfunc_uvm_is_match__27__expr;
                this->__Vfunc_uvm_glob_to_re__28__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__28__glob;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__28__Vfuncout;
                this->__Vfunc_uvm_re_match__29__str 
                    = this->__Vfunc_uvm_is_match__27__str;
                this->__Vfunc_uvm_re_match__29__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__29____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__29__re))) {
                        __Vfunc_uvm_re_match__29__Vfuncout = 0U;
                        goto __Vlabel2;
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,0U))) {
                        this->__Vfunc_uvm_re_match__29__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__29__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__29__re) 
                                           - (IData)(1U)));
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__29__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__29__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__29__Vfuncout = 1U;
                            goto __Vlabel2;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    }
                    while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__29__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__29__re))) {
                                __Vfunc_uvm_re_match__29__Vfuncout = 0U;
                                goto __Vlabel2;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__29__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                    | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match__29____Vincrement1 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match__29____Vincrement1;
                        }
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__29__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    }
                    __Vfunc_uvm_re_match__29__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__29__re))
                            ? 0U : 1U);
                    __Vlabel2: ;
                }
                __Vfunc_uvm_is_match__27____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__29__Vfuncout;
                unnamedblk1__DOT__unnamedblk3__DOT__matched 
                    = (0U == __Vfunc_uvm_is_match__27____VlefCall_0__uvm_re_match);
                if (unnamedblk1__DOT__unnamedblk3__DOT__matched) {
                    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__print_matches) {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)->__VnoInFunc_get_full_scope_arg(vlSymsp, __VlefCall_7__get_full_scope_arg);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STRMTC"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_int(): Matched string "s, str___05F), " to field "s), __VlefCall_7__get_full_scope_arg)), 0x00000064U, ""s, 0U, ""s, 0U);
                    }
                    this->__PVT__data_out = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)
                        ->__PVT__bitstream[0U];
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)->__PVT__status = 1U;
                }
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_Activator.sv", 38)
                              ->__PVT__scope, "UVM_Activator.sv", 38)->__VnoInFunc_unset_arg(vlSymsp, "data_out"s);
            }
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator___024unit__03a__03aact_txn::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_txn::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_txn::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__data_in = VL_RANDOM_RNG_I(__Vm_rng);
}

void VUVM_Activator___024unit__03a__03aact_txn::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_txn::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data_in = VL_SCOPED_RAND_RESET_I(32, 11875993786642659770ULL, 10574596302020702150ull);
    __PVT__data_out = VL_SCOPED_RAND_RESET_I(32, 11875993786642659770ULL, 11675680895196038875ull);
}

VUVM_Activator___024unit__03a__03aact_txn::~VUVM_Activator___024unit__03a__03aact_txn() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Activator___024unit__03a__03aact_txn::~\n"); );
}
