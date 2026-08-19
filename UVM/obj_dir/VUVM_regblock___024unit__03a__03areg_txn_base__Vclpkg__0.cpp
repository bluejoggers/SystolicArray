// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg::__VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi12> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi12__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi12> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi12__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_regblock___024unit__03a__03areg_txn_base, vlProcess, vlSymsp, "reg_txn_base"s);
    } else {
        tmp = VL_NEW(VUVM_regblock___024unit__03a__03areg_txn_base, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "reg_txn_base"s;
}

void VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc____05Fm_uvm_field_automation\n"); );
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
    CData/*0:0*/ __Vtask_compare_field__34__Vfuncout;
    __Vtask_compare_field__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__41____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__41____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__43__Vfuncout;
    __Vfunc_uvm_re_match__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__43____Vincrement1;
    __Vfunc_uvm_re_match__43____Vincrement1 = 0;
    CData/*0:0*/ __Vtask_compare_field__48__Vfuncout;
    __Vtask_compare_field__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__55____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__55____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__57__Vfuncout;
    __Vfunc_uvm_re_match__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__57____Vincrement1;
    __Vfunc_uvm_re_match__57____Vincrement1 = 0;
    CData/*0:0*/ __Vtask_compare_field__62__Vfuncout;
    __Vtask_compare_field__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__69____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__69____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__71__Vfuncout;
    __Vfunc_uvm_re_match__71__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__71____Vincrement1;
    __Vfunc_uvm_re_match__71____Vincrement1 = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    VlWide<128>/*4095:0*/ __Vtemp_4;
    VlWide<128>/*4095:0*/ __Vtemp_5;
    VlWide<128>/*4095:0*/ __Vtemp_6;
    VlWide<128>/*4095:0*/ __Vtemp_7;
    VlWide<128>/*4095:0*/ __Vtemp_8;
    VlWide<128>/*4095:0*/ __Vtemp_9;
    VlWide<128>/*4095:0*/ __Vtemp_10;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    IData/*31:0*/ __Vilp5;
    IData/*31:0*/ __Vilp6;
    IData/*31:0*/ __Vilp7;
    IData/*31:0*/ __Vilp8;
    IData/*31:0*/ __Vilp9;
    IData/*31:0*/ __Vilp10;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_16__get_full_scope_arg;
    std::string __VlefCall_15__get;
    QData/*63:0*/ __VlefCall_14__unpack_field_int;
    std::string __VlefCall_13__get_full_scope_arg;
    std::string __VlefCall_12__get;
    QData/*63:0*/ __VlefCall_11__unpack_field_int;
    std::string __VlefCall_10__get_full_scope_arg;
    std::string __VlefCall_9__get;
    QData/*63:0*/ __VlefCall_8__unpack_field_int;
    std::string __VlefCall_7__get_full_scope_arg;
    std::string __VlefCall_6__get;
    QData/*63:0*/ __VlefCall_5__unpack_field_int;
    std::string __VlefCall_4__get_full_scope_arg;
    std::string __VlefCall_3__get;
    QData/*63:0*/ __VlefCall_2__unpack_field_int;
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> unnamedblk1__DOT__local_data___05F;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__matched;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk3__DOT__matched;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk4__DOT__matched;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk5__DOT__matched;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk6__DOT__matched;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 38)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        VUVM_regblock_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
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
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)->__VnoInFunc_do_field_check(vlSymsp, "w_enable"s, 
                                                                                VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base>{this});
            } else if ((1U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                this->__PVT__w_enable = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 39)
                    ->__PVT__w_enable;
            } else if ((4U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                if (((IData)(this->__PVT__w_enable) 
                     != VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 39)
                     ->__PVT__w_enable)) {
                    __Vtemp_1[0U] = this->__PVT__w_enable;
                    __Vilp1 = 1U;
                    while ((__Vilp1 <= 0x0000007fU)) {
                        __Vtemp_1[__Vilp1] = 0U;
                        __Vilp1 = ((IData)(1U) + __Vilp1);
                    }
                    __Vtemp_2[0U] = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 39)
                        ->__PVT__w_enable;
                    __Vilp2 = 1U;
                    while ((__Vilp2 <= 0x0000007fU)) {
                        __Vtemp_2[__Vilp2] = 0U;
                        __Vilp2 = ((IData)(1U) + __Vilp2);
                    }
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                                  ->__PVT__comparer, "UVM_regblock.sv", 39)->__VnoInFunc_compare_field(vlProcess, vlSymsp, "w_enable"s, __Vtemp_1, __Vtemp_2, 1U, 0U, __Vtask_compare_field__6__Vfuncout);
                    if (((0U != VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                                              ->__PVT__comparer, "UVM_regblock.sv", 39)
                          ->__PVT__result) && (VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                                                             ->__PVT__comparer, "UVM_regblock.sv", 39)
                                               ->__PVT__show_max 
                                               <= VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                                                                ->__PVT__comparer, "UVM_regblock.sv", 39)
                                               ->__PVT__result))) {
                        goto __Vlabel0;
                    }
                }
            } else if ((0x00000100U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                              ->__PVT__packer, "UVM_regblock.sv", 39)->__VnoInFunc_pack_field_int(vlSymsp, (QData)((IData)(this->__PVT__w_enable)), 1U);
            } else if ((0x00020002U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                              ->__PVT__packer, "UVM_regblock.sv", 39)->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 1U, __VlefCall_2__unpack_field_int);
                this->__PVT__w_enable = (1U & (IData)(__VlefCall_2__unpack_field_int));
            } else if ((0x00000040U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                              ->__PVT__recorder, "UVM_regblock.sv", 39)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "w_enable"s, (QData)((IData)(this->__PVT__w_enable)), 1U, 0U);
            } else if ((0x00000010U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                              ->__PVT__printer, "UVM_regblock.sv", 39)->__VnoInFunc_print_field_int(vlSymsp, "w_enable"s, (QData)((IData)(this->__PVT__w_enable)), 1U, 0U, 0x2eU, ""s);
            } else {
                unnamedblk1__DOT__unnamedblk2__DOT__matched = 0U;
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                              ->__PVT__scope, "UVM_regblock.sv", 39)->__VnoInFunc_set_arg(vlSymsp, "w_enable"s);
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                              ->__PVT__scope, "UVM_regblock.sv", 39)->__VnoInFunc_get(vlSymsp, __VlefCall_3__get);
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
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)->__VnoInFunc_get_full_scope_arg(vlSymsp, __VlefCall_4__get_full_scope_arg);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STRMTC"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_int(): Matched string "s, str___05F), " to field "s), __VlefCall_4__get_full_scope_arg)), 0x00000064U, ""s, 0U, ""s, 0U);
                    }
                    this->__PVT__w_enable = (1U & VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                                             ->__PVT__bitstream[0U]);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)->__PVT__status = 1U;
                }
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 39)
                              ->__PVT__scope, "UVM_regblock.sv", 39)->__VnoInFunc_unset_arg(vlSymsp, "w_enable"s);
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
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)->__VnoInFunc_do_field_check(vlSymsp, "r_enable"s, 
                                                                                VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base>{this});
            } else if ((1U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                this->__PVT__r_enable = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 40)
                    ->__PVT__r_enable;
            } else if ((4U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                if (((IData)(this->__PVT__r_enable) 
                     != VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 40)
                     ->__PVT__r_enable)) {
                    __Vtemp_3[0U] = this->__PVT__r_enable;
                    __Vilp3 = 1U;
                    while ((__Vilp3 <= 0x0000007fU)) {
                        __Vtemp_3[__Vilp3] = 0U;
                        __Vilp3 = ((IData)(1U) + __Vilp3);
                    }
                    __Vtemp_4[0U] = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 40)
                        ->__PVT__r_enable;
                    __Vilp4 = 1U;
                    while ((__Vilp4 <= 0x0000007fU)) {
                        __Vtemp_4[__Vilp4] = 0U;
                        __Vilp4 = ((IData)(1U) + __Vilp4);
                    }
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                                  ->__PVT__comparer, "UVM_regblock.sv", 40)->__VnoInFunc_compare_field(vlProcess, vlSymsp, "r_enable"s, __Vtemp_3, __Vtemp_4, 1U, 0U, __Vtask_compare_field__20__Vfuncout);
                    if (((0U != VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                                              ->__PVT__comparer, "UVM_regblock.sv", 40)
                          ->__PVT__result) && (VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                                                             ->__PVT__comparer, "UVM_regblock.sv", 40)
                                               ->__PVT__show_max 
                                               <= VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                                                                ->__PVT__comparer, "UVM_regblock.sv", 40)
                                               ->__PVT__result))) {
                        goto __Vlabel0;
                    }
                }
            } else if ((0x00000100U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                              ->__PVT__packer, "UVM_regblock.sv", 40)->__VnoInFunc_pack_field_int(vlSymsp, (QData)((IData)(this->__PVT__r_enable)), 1U);
            } else if ((0x00020002U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                              ->__PVT__packer, "UVM_regblock.sv", 40)->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 1U, __VlefCall_5__unpack_field_int);
                this->__PVT__r_enable = (1U & (IData)(__VlefCall_5__unpack_field_int));
            } else if ((0x00000040U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                              ->__PVT__recorder, "UVM_regblock.sv", 40)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "r_enable"s, (QData)((IData)(this->__PVT__r_enable)), 1U, 0U);
            } else if ((0x00000010U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                              ->__PVT__printer, "UVM_regblock.sv", 40)->__VnoInFunc_print_field_int(vlSymsp, "r_enable"s, (QData)((IData)(this->__PVT__r_enable)), 1U, 0U, 0x2eU, ""s);
            } else {
                unnamedblk1__DOT__unnamedblk3__DOT__matched = 0U;
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                              ->__PVT__scope, "UVM_regblock.sv", 40)->__VnoInFunc_set_arg(vlSymsp, "r_enable"s);
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                              ->__PVT__scope, "UVM_regblock.sv", 40)->__VnoInFunc_get(vlSymsp, __VlefCall_6__get);
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
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)->__VnoInFunc_get_full_scope_arg(vlSymsp, __VlefCall_7__get_full_scope_arg);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STRMTC"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_int(): Matched string "s, str___05F), " to field "s), __VlefCall_7__get_full_scope_arg)), 0x00000064U, ""s, 0U, ""s, 0U);
                    }
                    this->__PVT__r_enable = (1U & VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                                             ->__PVT__bitstream[0U]);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)->__PVT__status = 1U;
                }
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 40)
                              ->__PVT__scope, "UVM_regblock.sv", 40)->__VnoInFunc_unset_arg(vlSymsp, "r_enable"s);
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
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)->__VnoInFunc_do_field_check(vlSymsp, "address"s, 
                                                                                VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base>{this});
            } else if ((1U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                this->__PVT__address = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 41)
                    ->__PVT__address;
            } else if ((4U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                if (((IData)(this->__PVT__address) 
                     != VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 41)
                     ->__PVT__address)) {
                    __Vtemp_5[0U] = this->__PVT__address;
                    __Vilp5 = 1U;
                    while ((__Vilp5 <= 0x0000007fU)) {
                        __Vtemp_5[__Vilp5] = 0U;
                        __Vilp5 = ((IData)(1U) + __Vilp5);
                    }
                    __Vtemp_6[0U] = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 41)
                        ->__PVT__address;
                    __Vilp6 = 1U;
                    while ((__Vilp6 <= 0x0000007fU)) {
                        __Vtemp_6[__Vilp6] = 0U;
                        __Vilp6 = ((IData)(1U) + __Vilp6);
                    }
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                                  ->__PVT__comparer, "UVM_regblock.sv", 41)->__VnoInFunc_compare_field(vlProcess, vlSymsp, "address"s, __Vtemp_5, __Vtemp_6, 4U, 0U, __Vtask_compare_field__34__Vfuncout);
                    if (((0U != VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                                              ->__PVT__comparer, "UVM_regblock.sv", 41)
                          ->__PVT__result) && (VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                                                             ->__PVT__comparer, "UVM_regblock.sv", 41)
                                               ->__PVT__show_max 
                                               <= VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                                                                ->__PVT__comparer, "UVM_regblock.sv", 41)
                                               ->__PVT__result))) {
                        goto __Vlabel0;
                    }
                }
            } else if ((0x00000100U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                              ->__PVT__packer, "UVM_regblock.sv", 41)->__VnoInFunc_pack_field_int(vlSymsp, (QData)((IData)(this->__PVT__address)), 4U);
            } else if ((0x00020002U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                              ->__PVT__packer, "UVM_regblock.sv", 41)->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 4U, __VlefCall_8__unpack_field_int);
                this->__PVT__address = (0x0000000fU 
                                        & (IData)(__VlefCall_8__unpack_field_int));
            } else if ((0x00000040U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                              ->__PVT__recorder, "UVM_regblock.sv", 41)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "address"s, (QData)((IData)(this->__PVT__address)), 4U, 0U);
            } else if ((0x00000010U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                              ->__PVT__printer, "UVM_regblock.sv", 41)->__VnoInFunc_print_field_int(vlSymsp, "address"s, (QData)((IData)(this->__PVT__address)), 4U, 0U, 0x2eU, ""s);
            } else {
                unnamedblk1__DOT__unnamedblk4__DOT__matched = 0U;
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                              ->__PVT__scope, "UVM_regblock.sv", 41)->__VnoInFunc_set_arg(vlSymsp, "address"s);
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                              ->__PVT__scope, "UVM_regblock.sv", 41)->__VnoInFunc_get(vlSymsp, __VlefCall_9__get);
                this->__Vfunc_uvm_is_match__41__str 
                    = VL_CVT_PACK_STR_NN(__VlefCall_9__get);
                this->__Vfunc_uvm_is_match__41__expr 
                    = str___05F;
                this->__Vfunc_uvm_glob_to_re__42__glob 
                    = this->__Vfunc_uvm_is_match__41__expr;
                this->__Vfunc_uvm_glob_to_re__42__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__42__glob;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__42__Vfuncout;
                this->__Vfunc_uvm_re_match__43__str 
                    = this->__Vfunc_uvm_is_match__41__str;
                this->__Vfunc_uvm_re_match__43__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__43____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__43__re))) {
                        __Vfunc_uvm_re_match__43__Vfuncout = 0U;
                        goto __Vlabel3;
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__43__re,0U))) {
                        this->__Vfunc_uvm_re_match__43__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__43__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__43__re) 
                                           - (IData)(1U)));
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__43__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__43__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__43__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__43__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__43__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__43__Vfuncout = 1U;
                            goto __Vlabel3;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    }
                    while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__43__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__43__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__43__re))) {
                                __Vfunc_uvm_re_match__43__Vfuncout = 0U;
                                goto __Vlabel3;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__43__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__43__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                    | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__43__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match__43____Vincrement1 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match__43____Vincrement1;
                        }
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__43__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__43__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    }
                    __Vfunc_uvm_re_match__43__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__43__re))
                            ? 0U : 1U);
                    __Vlabel3: ;
                }
                __Vfunc_uvm_is_match__41____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__43__Vfuncout;
                unnamedblk1__DOT__unnamedblk4__DOT__matched 
                    = (0U == __Vfunc_uvm_is_match__41____VlefCall_0__uvm_re_match);
                if (unnamedblk1__DOT__unnamedblk4__DOT__matched) {
                    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__print_matches) {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)->__VnoInFunc_get_full_scope_arg(vlSymsp, __VlefCall_10__get_full_scope_arg);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STRMTC"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_int(): Matched string "s, str___05F), " to field "s), __VlefCall_10__get_full_scope_arg)), 0x00000064U, ""s, 0U, ""s, 0U);
                    }
                    this->__PVT__address = (0x0000000fU 
                                            & VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                                            ->__PVT__bitstream[0U]);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)->__PVT__status = 1U;
                }
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 41)
                              ->__PVT__scope, "UVM_regblock.sv", 41)->__VnoInFunc_unset_arg(vlSymsp, "address"s);
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
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)->__VnoInFunc_do_field_check(vlSymsp, "w_data"s, 
                                                                                VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base>{this});
            } else if ((1U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                this->__PVT__w_data = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 42)
                    ->__PVT__w_data;
            } else if ((4U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                if (((IData)(this->__PVT__w_data) != VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 42)
                     ->__PVT__w_data)) {
                    __Vtemp_7[0U] = this->__PVT__w_data;
                    __Vilp7 = 1U;
                    while ((__Vilp7 <= 0x0000007fU)) {
                        __Vtemp_7[__Vilp7] = 0U;
                        __Vilp7 = ((IData)(1U) + __Vilp7);
                    }
                    __Vtemp_8[0U] = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 42)
                        ->__PVT__w_data;
                    __Vilp8 = 1U;
                    while ((__Vilp8 <= 0x0000007fU)) {
                        __Vtemp_8[__Vilp8] = 0U;
                        __Vilp8 = ((IData)(1U) + __Vilp8);
                    }
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                                  ->__PVT__comparer, "UVM_regblock.sv", 42)->__VnoInFunc_compare_field(vlProcess, vlSymsp, "w_data"s, __Vtemp_7, __Vtemp_8, 8U, 0U, __Vtask_compare_field__48__Vfuncout);
                    if (((0U != VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                                              ->__PVT__comparer, "UVM_regblock.sv", 42)
                          ->__PVT__result) && (VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                                                             ->__PVT__comparer, "UVM_regblock.sv", 42)
                                               ->__PVT__show_max 
                                               <= VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                                                                ->__PVT__comparer, "UVM_regblock.sv", 42)
                                               ->__PVT__result))) {
                        goto __Vlabel0;
                    }
                }
            } else if ((0x00000100U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                              ->__PVT__packer, "UVM_regblock.sv", 42)->__VnoInFunc_pack_field_int(vlSymsp, (QData)((IData)(this->__PVT__w_data)), 8U);
            } else if ((0x00020002U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                              ->__PVT__packer, "UVM_regblock.sv", 42)->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 8U, __VlefCall_11__unpack_field_int);
                this->__PVT__w_data = (0x000000ffU 
                                       & (IData)(__VlefCall_11__unpack_field_int));
            } else if ((0x00000040U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                              ->__PVT__recorder, "UVM_regblock.sv", 42)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "w_data"s, (QData)((IData)(this->__PVT__w_data)), 8U, 0U);
            } else if ((0x00000010U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                              ->__PVT__printer, "UVM_regblock.sv", 42)->__VnoInFunc_print_field_int(vlSymsp, "w_data"s, (QData)((IData)(this->__PVT__w_data)), 8U, 0U, 0x2eU, ""s);
            } else {
                unnamedblk1__DOT__unnamedblk5__DOT__matched = 0U;
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                              ->__PVT__scope, "UVM_regblock.sv", 42)->__VnoInFunc_set_arg(vlSymsp, "w_data"s);
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                              ->__PVT__scope, "UVM_regblock.sv", 42)->__VnoInFunc_get(vlSymsp, __VlefCall_12__get);
                this->__Vfunc_uvm_is_match__55__str 
                    = VL_CVT_PACK_STR_NN(__VlefCall_12__get);
                this->__Vfunc_uvm_is_match__55__expr 
                    = str___05F;
                this->__Vfunc_uvm_glob_to_re__56__glob 
                    = this->__Vfunc_uvm_is_match__55__expr;
                this->__Vfunc_uvm_glob_to_re__56__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__56__glob;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__56__Vfuncout;
                this->__Vfunc_uvm_re_match__57__str 
                    = this->__Vfunc_uvm_is_match__55__str;
                this->__Vfunc_uvm_re_match__57__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__57____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__57__re))) {
                        __Vfunc_uvm_re_match__57__Vfuncout = 0U;
                        goto __Vlabel4;
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__57__re,0U))) {
                        this->__Vfunc_uvm_re_match__57__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__57__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__57__re) 
                                           - (IData)(1U)));
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__57__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__57__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__57__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__57__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__57__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__57__Vfuncout = 1U;
                            goto __Vlabel4;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    }
                    while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__57__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__57__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__57__re))) {
                                __Vfunc_uvm_re_match__57__Vfuncout = 0U;
                                goto __Vlabel4;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__57__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__57__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                    | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__57__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match__57____Vincrement1 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match__57____Vincrement1;
                        }
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__57__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__57__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    }
                    __Vfunc_uvm_re_match__57__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__57__re))
                            ? 0U : 1U);
                    __Vlabel4: ;
                }
                __Vfunc_uvm_is_match__55____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__57__Vfuncout;
                unnamedblk1__DOT__unnamedblk5__DOT__matched 
                    = (0U == __Vfunc_uvm_is_match__55____VlefCall_0__uvm_re_match);
                if (unnamedblk1__DOT__unnamedblk5__DOT__matched) {
                    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__print_matches) {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)->__VnoInFunc_get_full_scope_arg(vlSymsp, __VlefCall_13__get_full_scope_arg);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STRMTC"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_int(): Matched string "s, str___05F), " to field "s), __VlefCall_13__get_full_scope_arg)), 0x00000064U, ""s, 0U, ""s, 0U);
                    }
                    this->__PVT__w_data = (0x000000ffU 
                                           & VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                                           ->__PVT__bitstream[0U]);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)->__PVT__status = 1U;
                }
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 42)
                              ->__PVT__scope, "UVM_regblock.sv", 42)->__VnoInFunc_unset_arg(vlSymsp, "w_data"s);
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
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)->__VnoInFunc_do_field_check(vlSymsp, "r_data"s, 
                                                                                VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base>{this});
            } else if ((1U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                this->__PVT__r_data = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 43)
                    ->__PVT__r_data;
            } else if ((4U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                if (((IData)(this->__PVT__r_data) != VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 43)
                     ->__PVT__r_data)) {
                    __Vtemp_9[0U] = this->__PVT__r_data;
                    __Vilp9 = 1U;
                    while ((__Vilp9 <= 0x0000007fU)) {
                        __Vtemp_9[__Vilp9] = 0U;
                        __Vilp9 = ((IData)(1U) + __Vilp9);
                    }
                    __Vtemp_10[0U] = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "UVM_regblock.sv", 43)
                        ->__PVT__r_data;
                    __Vilp10 = 1U;
                    while ((__Vilp10 <= 0x0000007fU)) {
                        __Vtemp_10[__Vilp10] = 0U;
                        __Vilp10 = ((IData)(1U) + __Vilp10);
                    }
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)
                                  ->__PVT__comparer, "UVM_regblock.sv", 43)->__VnoInFunc_compare_field(vlProcess, vlSymsp, "r_data"s, __Vtemp_9, __Vtemp_10, 8U, 0U, __Vtask_compare_field__62__Vfuncout);
                }
            } else if ((0x00000100U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)
                              ->__PVT__packer, "UVM_regblock.sv", 43)->__VnoInFunc_pack_field_int(vlSymsp, (QData)((IData)(this->__PVT__r_data)), 8U);
            } else if ((0x00020002U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)
                              ->__PVT__packer, "UVM_regblock.sv", 43)->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 8U, __VlefCall_14__unpack_field_int);
                this->__PVT__r_data = (0x000000ffU 
                                       & (IData)(__VlefCall_14__unpack_field_int));
            } else if ((0x00000040U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)
                              ->__PVT__recorder, "UVM_regblock.sv", 43)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "r_data"s, (QData)((IData)(this->__PVT__r_data)), 8U, 0U);
            } else if ((0x00000010U == what___05F)) {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)
                              ->__PVT__printer, "UVM_regblock.sv", 43)->__VnoInFunc_print_field_int(vlSymsp, "r_data"s, (QData)((IData)(this->__PVT__r_data)), 8U, 0U, 0x2eU, ""s);
            } else {
                unnamedblk1__DOT__unnamedblk6__DOT__matched = 0U;
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)
                              ->__PVT__scope, "UVM_regblock.sv", 43)->__VnoInFunc_set_arg(vlSymsp, "r_data"s);
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)
                              ->__PVT__scope, "UVM_regblock.sv", 43)->__VnoInFunc_get(vlSymsp, __VlefCall_15__get);
                this->__Vfunc_uvm_is_match__69__str 
                    = VL_CVT_PACK_STR_NN(__VlefCall_15__get);
                this->__Vfunc_uvm_is_match__69__expr 
                    = str___05F;
                this->__Vfunc_uvm_glob_to_re__70__glob 
                    = this->__Vfunc_uvm_is_match__69__expr;
                this->__Vfunc_uvm_glob_to_re__70__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__70__glob;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__70__Vfuncout;
                this->__Vfunc_uvm_re_match__71__str 
                    = this->__Vfunc_uvm_is_match__69__str;
                this->__Vfunc_uvm_re_match__71__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__71____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__71__re))) {
                        __Vfunc_uvm_re_match__71__Vfuncout = 0U;
                        goto __Vlabel5;
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__71__re,0U))) {
                        this->__Vfunc_uvm_re_match__71__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__71__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__71__re) 
                                           - (IData)(1U)));
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__71__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__71__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__71__Vfuncout = 1U;
                            goto __Vlabel5;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    }
                    while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__71__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__71__re))) {
                                __Vfunc_uvm_re_match__71__Vfuncout = 0U;
                                goto __Vlabel5;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__71__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                    | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match__71____Vincrement1 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match__71____Vincrement1;
                        }
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__71__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    }
                    __Vfunc_uvm_re_match__71__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__71__re))
                            ? 0U : 1U);
                    __Vlabel5: ;
                }
                __Vfunc_uvm_is_match__69____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__71__Vfuncout;
                unnamedblk1__DOT__unnamedblk6__DOT__matched 
                    = (0U == __Vfunc_uvm_is_match__69____VlefCall_0__uvm_re_match);
                if (unnamedblk1__DOT__unnamedblk6__DOT__matched) {
                    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__print_matches) {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)->__VnoInFunc_get_full_scope_arg(vlSymsp, __VlefCall_16__get_full_scope_arg);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STRMTC"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_int(): Matched string "s, str___05F), " to field "s), __VlefCall_16__get_full_scope_arg)), 0x00000064U, ""s, 0U, ""s, 0U);
                    }
                    this->__PVT__r_data = (0x000000ffU 
                                           & VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)
                                           ->__PVT__bitstream[0U]);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)->__PVT__status = 1U;
                }
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 43)
                              ->__PVT__scope, "UVM_regblock.sv", 43)->__VnoInFunc_unset_arg(vlSymsp, "r_data"s);
            }
        }
        __Vlabel0: ;
    }
}

void VUVM_regblock___024unit__03a__03areg_txn_base::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name) {
    VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_txn_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__w_enable, 1ULL, 
                                                                         "w_enable", 0ULL);
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__r_enable, 1ULL, 
                                                                         "r_enable", 0ULL);
}

void VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc_wr_xor_rd_setup_constraint(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc_wr_xor_rd_setup_constraint\n"); );
    // Body
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(__Vbv (not (= w_enable r_enable)))"s, "UVM_regblock.sv", 0x00000023U, 
                                                                    "        w_enable != r_enable;");
}

void VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_wr_xor_rd_setup_constraint(vlSymsp);
}

void VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_txn_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__address = (0x0000000fU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__w_data = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
}

void VUVM_regblock___024unit__03a__03areg_txn_base::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_txn_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__w_enable = 0;
    __PVT__r_enable = 0;
    __PVT__address = 0;
    __PVT__w_data = 0;
    __PVT__r_data = 0;
}

VUVM_regblock___024unit__03a__03areg_txn_base::~VUVM_regblock___024unit__03a__03areg_txn_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_txn_base::~\n"); );
}
