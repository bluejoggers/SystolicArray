// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__1__verbosity;
    __Vtask_uvm_report_error__1__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__1__line;
    __Vtask_uvm_report_error__1__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__1__report_enabled_checked;
    __Vtask_uvm_report_error__1__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__1__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__1__context_name = ""s;
    __Vtask_uvm_report_error__1__line = 0U;
    this->__Vtask_uvm_report_error__1__filename = ""s;
    __Vtask_uvm_report_error__1__verbosity = 0U;
    this->__Vtask_uvm_report_error__1__message = "get_type not implemented in derived class."s;
    this->__Vtask_uvm_report_error__1__id = "NOTYPID"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__3__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__1__id, this->__Vtask_uvm_report_error__1__message, __Vtask_uvm_report_error__1__verbosity, this->__Vtask_uvm_report_error__1__filename, __Vtask_uvm_report_error__1__line, this->__Vtask_uvm_report_error__1__context_name, (IData)(__Vtask_uvm_report_error__1__report_enabled_checked));
    get_type__Vfuncrtn = VlNull{};
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_inst_count(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_inst_count\n"); );
    // Body
    get_inst_count__Vfuncrtn = this->__PVT__m_inst_count;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "<unknown>"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    create__Vfuncrtn = VlNull{};
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    /*super.new*/;
    __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count);
    this->__PVT__m_inst_id = __Vincrement1;
    this->__PVT__m_leaf_name = name;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_reseed(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_reseed\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__3____VlefExpr_4;
    __Vfunc_uvm_create_random_seed__3____VlefExpr_4 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__3____VlefExpr_3;
    __Vfunc_uvm_create_random_seed__3____VlefExpr_3 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__3____VlefCall_2__uvm_oneway_hash;
    __Vfunc_uvm_create_random_seed__3____VlefCall_2__uvm_oneway_hash = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed__3____VlefCall_0__new;
    IData/*31:0*/ __Vfunc_uvm_instance_scope__5____Vincrement2;
    __Vfunc_uvm_instance_scope__5____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__6__verbosity;
    __Vtask_uvm_report_error__6__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__6__line;
    __Vtask_uvm_report_error__6__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__6__report_enabled_checked;
    __Vtask_uvm_report_error__6__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__10__Vfuncout;
    __Vfunc_uvm_oneway_hash__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__10__seed;
    __Vfunc_uvm_oneway_hash__10__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__10__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__10__unnamedblk1__DOT___byte = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__uvm_create_random_seed;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_type_name;
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__3__inst_id 
        = VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__3__type_id 
        = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
    if ((""s == this->__Vfunc_uvm_create_random_seed__3__inst_id)) {
        this->__Vfunc_uvm_create_random_seed__3__inst_id = "__global__"s;
    }
    if ((! vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__3__inst_id))) {
        __Vfunc_uvm_create_random_seed__3____VlefCall_0__new 
            = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.at(this->__Vfunc_uvm_create_random_seed__3__inst_id) 
            = __Vfunc_uvm_create_random_seed__3____VlefCall_0__new;
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
        .at(this->__Vfunc_uvm_create_random_seed__3__inst_id);
    __Vfunc_uvm_instance_scope__5____Vincrement2 = 0U;
    {
        if ((""s != this->__Vfunc_uvm_instance_scope__5__Vfuncout)) {
            goto __Vlabel0;
        }
        VL_SFORMAT_NX(this->__Vfunc_uvm_instance_scope__5__Vfuncout
                      ,"%m",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_instance_scope");
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
            = (VL_LEN_IN(this->__Vfunc_uvm_instance_scope__5__Vfuncout) 
               - (IData)(1U));
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
            = VL_GETC_N(this->__Vfunc_uvm_instance_scope__5__Vfuncout,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        while ((((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                 & (0x2eU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                & (0x3aU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
            __Vfunc_uvm_instance_scope__5____Vincrement2 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                   - (IData)(1U));
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                = __Vfunc_uvm_instance_scope__5____Vincrement2;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                = VL_GETC_N(this->__Vfunc_uvm_instance_scope__5__Vfuncout,__Vfunc_uvm_instance_scope__5____Vincrement2);
        }
        if ((0U == vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)) {
            __Vtask_uvm_report_error__6__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__6__context_name = ""s;
            __Vtask_uvm_report_error__6__line = 0U;
            this->__Vtask_uvm_report_error__6__filename = ""s;
            __Vtask_uvm_report_error__6__verbosity = 0x00000064U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__6__message
                          ,"Illegal name %s in scope string",1
                          , 'S',&(this->__Vfunc_uvm_instance_scope__5__Vfuncout));
            this->__Vtask_uvm_report_error__6__id = "SCPSTR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__6__id, this->__Vtask_uvm_report_error__6__message, __Vtask_uvm_report_error__6__verbosity, this->__Vtask_uvm_report_error__6__filename, __Vtask_uvm_report_error__6__line, this->__Vtask_uvm_report_error__6__context_name, (IData)(__Vtask_uvm_report_error__6__report_enabled_checked));
        }
        this->__Vfunc_uvm_instance_scope__5__Vfuncout 
            = VL_SUBSTR_N(this->__Vfunc_uvm_instance_scope__5__Vfuncout,0U,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        __Vlabel0: ;
    }
    this->__Vfunc_uvm_create_random_seed__3____VlefCall_1__uvm_instance_scope 
        = this->__Vfunc_uvm_instance_scope__5__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__3__type_id 
        = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__3____VlefCall_1__uvm_instance_scope, this->__Vfunc_uvm_create_random_seed__3__type_id);
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 414)
         ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__3__type_id))) {
        __Vfunc_uvm_oneway_hash__10__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        this->__Vfunc_uvm_oneway_hash__10__string_in 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__3__type_id, "::"s), this->__Vfunc_uvm_create_random_seed__3__inst_id));
        if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__10__seed)))) {
            __Vfunc_uvm_oneway_hash__10__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        }
        __Vfunc_uvm_oneway_hash__10__Vfuncout = __Vfunc_uvm_oneway_hash__10__seed;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
        __Vfunc_uvm_oneway_hash__10__unnamedblk1__DOT___byte = 0U;
        __Vfunc_uvm_oneway_hash__10__unnamedblk1__DOT___byte = 0U;
        {
            while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__10__unnamedblk1__DOT___byte, 
                              VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__10__string_in))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                    = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__10__string_in,__Vfunc_uvm_oneway_hash__10__unnamedblk1__DOT___byte);
                if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                    goto __Vlabel1;
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 1U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 2U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 3U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 4U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 5U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 6U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                     ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                        >> 7U))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                __Vfunc_uvm_oneway_hash__10__unnamedblk1__DOT___byte 
                    = ((IData)(1U) + __Vfunc_uvm_oneway_hash__10__unnamedblk1__DOT___byte);
            }
            __Vlabel1: ;
        }
        __Vfunc_uvm_oneway_hash__10__Vfuncout = (__Vfunc_uvm_oneway_hash__10__Vfuncout 
                                                 + 
                                                 (~ 
                                                  ((((0x0000ff00U 
                                                      & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                           >> 8U))) 
                                                    << 0x00000010U) 
                                                   | ((0x0000ff00U 
                                                       & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          >> 8U)) 
                                                      | (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                         >> 0x18U)))));
        __Vfunc_uvm_create_random_seed__3____VlefCall_2__uvm_oneway_hash 
            = __Vfunc_uvm_oneway_hash__10__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 415)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__3__type_id) 
            = __Vfunc_uvm_create_random_seed__3____VlefCall_2__uvm_oneway_hash;
    }
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 417)
         ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__3__type_id))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 418)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__3__type_id) = 0U;
    }
    __Vfunc_uvm_create_random_seed__3____VlefExpr_3 
        = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 424)
           ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__3__type_id) 
           + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 424)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__3__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 424)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__3__type_id) 
        = __Vfunc_uvm_create_random_seed__3____VlefExpr_3;
    __Vfunc_uvm_create_random_seed__3____VlefExpr_4 
        = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 425)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__3__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 425)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__3__type_id) 
        = __Vfunc_uvm_create_random_seed__3____VlefExpr_4;
    __VlefCall_2__uvm_create_random_seed = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 427)
        ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__3__type_id);
    this->__VnoInFunc_srandom(vlSymsp, __VlefCall_2__uvm_create_random_seed);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_inst_id(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_inst_id\n"); );
    // Body
    get_inst_id__Vfuncrtn = this->__PVT__m_inst_id;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_object_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_type_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_factory> factory;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_object.svh", 835)->__VnoInFunc_get_factory(vlSymsp, factory);
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
        if (("<unknown>"s == __VlefCall_0__get_type_name)) {
            get_object_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_object.svh", 837)->__VnoInFunc_find_wrapper_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), get_object_type__Vfuncrtn);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT__m_leaf_name;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get_full_name__Vfuncrtn = ""s;
    this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__m_leaf_name = name;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_print\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__verbosity;
    __Vfunc_uvm_report_enabled__18__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__18__severity;
    __Vfunc_uvm_report_enabled__18__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__22__verbosity;
    __Vtask_uvm_report_error__22__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__22__line;
    __Vtask_uvm_report_error__22__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__22__report_enabled_checked;
    __Vtask_uvm_report_error__22__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__sprint;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if ((VlNull{} == printer)) {
        printer = vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_printer;
    }
    if ((VlNull{} == printer)) {
        this->__Vfunc_uvm_report_enabled__18__id = "NULLPRINTER"s;
        __Vfunc_uvm_report_enabled__18__severity = 2U;
        __Vfunc_uvm_report_enabled__18__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__19__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__19__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__20__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__18__verbosity, (IData)(__Vfunc_uvm_report_enabled__18__severity), this->__Vfunc_uvm_report_enabled__18__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__22__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__22__context_name = ""s;
            __Vtask_uvm_report_error__22__line = 0x00000370U;
            this->__Vtask_uvm_report_error__22__filename = "../../uvm/distrib/src/base/uvm_object.svh"s;
            __Vtask_uvm_report_error__22__verbosity = 0U;
            this->__Vtask_uvm_report_error__22__message = "uvm_default_printer is null"s;
            this->__Vtask_uvm_report_error__22__id = "NULLPRINTER"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__22__id, this->__Vtask_uvm_report_error__22__message, __Vtask_uvm_report_error__22__verbosity, this->__Vtask_uvm_report_error__22__filename, __Vtask_uvm_report_error__22__line, this->__Vtask_uvm_report_error__22__context_name, (IData)(__Vtask_uvm_report_error__22__report_enabled_checked));
        }
    }
    this->__VnoInFunc_sprint(vlProcess, vlSymsp, printer, __VlefCall_1__sprint);
    VL_FWRITEF_NX(VL_NULL_CHECK(VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_object.svh", 881)
                                ->__PVT__knobs, "../../uvm/distrib/src/base/uvm_object.svh", 881)
                  ->__PVT__mcd,"%s",1, 'S',&(__VlefCall_1__sprint));
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_sprint(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer, std::string &sprint__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_sprint\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__istop;
    {
        sprint__Vfuncrtn = ""s;
        if ((VlNull{} == printer)) {
            printer = vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_printer;
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_object.svh", 895)->__VnoInFunc_istop(vlSymsp, __VlefCall_0__istop);
        if ((1U & (~ (IData)(__VlefCall_0__istop)))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 896)->__PVT__printer 
                = printer;
            this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00000010U, ""s);
            this->__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
            sprint__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_object.svh", 902)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name), 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>{this}, 0x2eU);
        if ((""s != VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_object.svh", 905)
             ->__PVT__m_string)) {
            sprint__Vfuncrtn = VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_object.svh", 906)
                ->__PVT__m_string;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_object.svh", 908)->__VnoInFunc_emit(vlProcess, vlSymsp, sprint__Vfuncrtn);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    convert2string__Vfuncrtn = ""s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_int_local(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ value, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_int_local\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__34__verbosity;
    __Vtask_uvm_report_error__34__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__34__line;
    __Vtask_uvm_report_error__34__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__34__report_enabled_checked;
    __Vtask_uvm_report_error__34__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 927)->__PVT__cycle_check.clear();
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 928)->__PVT__m_uvm_cycle_scopes.clear();
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 930)->__PVT__status = 0U;
    VL_ASSIGN_W(4096, VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 931)
                ->__PVT__bitstream, value);
    this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020006U, field_name);
    if ((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 935)
         ->__PVT__warning && (1U & (~ VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 935)
                                    ->__PVT__status)))) {
        __Vtask_uvm_report_error__34__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_error__34__context_name = ""s;
        __Vtask_uvm_report_error__34__line = 0U;
        this->__Vtask_uvm_report_error__34__filename = ""s;
        __Vtask_uvm_report_error__34__verbosity = 0U;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__34__message
                      ,"did not find a match for field %s",1
                      , 'S',&(field_name));
        this->__Vtask_uvm_report_error__34__id = "NOMTC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__35__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__35__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__36__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__34__id, this->__Vtask_uvm_report_error__34__message, __Vtask_uvm_report_error__34__verbosity, this->__Vtask_uvm_report_error__34__filename, __Vtask_uvm_report_error__34__line, this->__Vtask_uvm_report_error__34__context_name, (IData)(__Vtask_uvm_report_error__34__report_enabled_checked));
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 938)->__PVT__cycle_check.clear();
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_object_local(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string field_name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> value, CData/*0:0*/ clone, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_object_local\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__41__verbosity;
    __Vtask_uvm_report_error__41__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__41__line;
    __Vtask_uvm_report_error__41__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__41__report_enabled_checked;
    __Vtask_uvm_report_error__41__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> cc;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 950)->__PVT__cycle_check.clear();
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 951)->__PVT__m_uvm_cycle_scopes.clear();
    if (((IData)(clone) & (VlNull{} != value))) {
        VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_object.svh", 954)->__VnoInFunc_clone(vlProcess, vlSymsp, cc);
        if ((VlNull{} != cc)) {
            VL_NULL_CHECK(cc, "../../uvm/distrib/src/base/uvm_object.svh", 955)->__VnoInFunc_set_name(vlProcess, vlSymsp, field_name);
        }
        value = cc;
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 959)->__PVT__status = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 960)->__PVT__object 
        = value;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 961)->__PVT__clone 
        = clone;
    this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020007U, field_name);
    if ((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 965)
         ->__PVT__warning && (1U & (~ VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 965)
                                    ->__PVT__status)))) {
        __Vtask_uvm_report_error__41__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_error__41__context_name = ""s;
        __Vtask_uvm_report_error__41__line = 0U;
        this->__Vtask_uvm_report_error__41__filename = ""s;
        __Vtask_uvm_report_error__41__verbosity = 0U;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__41__message
                      ,"did not find a match for field %s",1
                      , 'S',&(field_name));
        this->__Vtask_uvm_report_error__41__id = "NOMTC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__42__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__42__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__43__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__41__id, this->__Vtask_uvm_report_error__41__message, __Vtask_uvm_report_error__41__verbosity, this->__Vtask_uvm_report_error__41__filename, __Vtask_uvm_report_error__41__line, this->__Vtask_uvm_report_error__41__context_name, (IData)(__Vtask_uvm_report_error__41__report_enabled_checked));
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 968)->__PVT__cycle_check.clear();
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_string_local(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string field_name, std::string value, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_string_local\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__47__verbosity;
    __Vtask_uvm_report_error__47__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__47__line;
    __Vtask_uvm_report_error__47__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__47__report_enabled_checked;
    __Vtask_uvm_report_error__47__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__48__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__49__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 979)->__PVT__cycle_check.clear();
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 980)->__PVT__m_uvm_cycle_scopes.clear();
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 982)->__PVT__status = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 983)->__PVT__stringv 
        = value;
    this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020008U, field_name);
    if ((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 987)
         ->__PVT__warning && (1U & (~ VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 987)
                                    ->__PVT__status)))) {
        this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
        __Vtask_uvm_report_error__47__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_error__47__context_name = ""s;
        __Vtask_uvm_report_error__47__line = 0U;
        this->__Vtask_uvm_report_error__47__filename = ""s;
        __Vtask_uvm_report_error__47__verbosity = 0U;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__47__message
                      ,"did not find a match for field %s (@%0d)",2
                      , 'S',&(field_name), '~',32,__VlefCall_0__get_inst_id);
        this->__Vtask_uvm_report_error__47__id = "NOMTC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__48__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__48__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__49__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__49__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__47__id, this->__Vtask_uvm_report_error__47__message, __Vtask_uvm_report_error__47__verbosity, this->__Vtask_uvm_report_error__47__filename, __Vtask_uvm_report_error__47__line, this->__Vtask_uvm_report_error__47__context_name, (IData)(__Vtask_uvm_report_error__47__report_enabled_checked));
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 990)->__PVT__cycle_check.clear();
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_clone(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__54__verbosity;
    __Vtask_uvm_report_warning__54__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__54__line;
    __Vtask_uvm_report_warning__54__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__54__report_enabled_checked;
    __Vtask_uvm_report_warning__54__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__55__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__56__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> tmp;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_create(vlProcess, vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), tmp);
    if ((VlNull{} == tmp)) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        __Vtask_uvm_report_warning__54__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__54__context_name = ""s;
        __Vtask_uvm_report_warning__54__line = 0U;
        this->__Vtask_uvm_report_warning__54__filename = ""s;
        __Vtask_uvm_report_warning__54__verbosity = 0U;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__54__message
                      ,"The create method failed for %s,  object cannot be cloned",1
                      , 'S',&(__VlefCall_1__get_name));
        this->__Vtask_uvm_report_warning__54__id = "CRFLD"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__55__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__55__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__56__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__56__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__54__id, this->__Vtask_uvm_report_warning__54__message, __Vtask_uvm_report_warning__54__verbosity, this->__Vtask_uvm_report_warning__54__filename, __Vtask_uvm_report_warning__54__line, this->__Vtask_uvm_report_warning__54__context_name, (IData)(__Vtask_uvm_report_warning__54__report_enabled_checked));
    } else {
        VL_NULL_CHECK(tmp, "../../uvm/distrib/src/base/uvm_object.svh", 1003)->__VnoInFunc_copy(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>{this});
    }
    clone__Vfuncrtn = tmp;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_copy\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__59__verbosity;
    __Vtask_uvm_report_warning__59__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__59__line;
    __Vtask_uvm_report_warning__59__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__59__report_enabled_checked;
    __Vtask_uvm_report_warning__59__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if (((VlNull{} != rhs) && vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__uvm_global_copy_map.exists(rhs))) {
            goto __Vlabel0;
        }
        if ((VlNull{} == rhs)) {
            __Vtask_uvm_report_warning__59__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__59__context_name = ""s;
            __Vtask_uvm_report_warning__59__line = 0U;
            this->__Vtask_uvm_report_warning__59__filename = ""s;
            __Vtask_uvm_report_warning__59__verbosity = 0U;
            this->__Vtask_uvm_report_warning__59__message = "A null object was supplied to copy; copy is ignored"s;
            this->__Vtask_uvm_report_warning__59__id = "NULLCP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__60__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__60__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__61__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__59__id, this->__Vtask_uvm_report_warning__59__message, __Vtask_uvm_report_warning__59__verbosity, this->__Vtask_uvm_report_warning__59__filename, __Vtask_uvm_report_warning__59__line, this->__Vtask_uvm_report_warning__59__context_name, (IData)(__Vtask_uvm_report_warning__59__report_enabled_checked));
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__uvm_global_copy_map.at(rhs) 
            = VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>{this};
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__copy__Vstatic__depth 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__copy__Vstatic__depth);
        this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, rhs, 1U, ""s);
        this->__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__copy__Vstatic__depth 
            = (vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__copy__Vstatic__depth 
               - (IData)(1U));
        if ((0U == vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__copy__Vstatic__depth)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__uvm_global_copy_map.clear();
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_compare(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_compare\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_info__75__verbosity;
    __Vtask_uvm_report_info__75__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__75__line;
    __Vtask_uvm_report_info__75__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__75__report_enabled_checked;
    __Vtask_uvm_report_info__75__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__76__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__77__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_12__depth;
    std::string __VlefCall_11__get_type_name;
    std::string __VlefCall_10__get_type_name;
    CData/*0:0*/ __VlefLogAnd_9;
    std::string __VlefCall_8__get_type_name;
    std::string __VlefCall_7__get_type_name;
    CData/*0:0*/ __VlefExpr_6;
    IData/*31:0*/ __VlefCall_5__get_inst_id;
    std::string __VlefCall_4__get;
    IData/*31:0*/ __VlefCall_3__depth;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__depth;
    CData/*0:0*/ dc;
    CData/*0:0*/ done;
    compare__Vfuncrtn = 0U;
    dc = 0U;
    done = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1054)->__PVT__comparer 
        = ((VlNull{} != comparer) ? comparer : vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_comparer);
    comparer = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1057)
        ->__PVT__comparer;
    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1059)
                  ->__PVT__scope, "../../uvm/distrib/src/base/uvm_object.svh", 1059)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    if ((1U & (~ (0U != __VlefCall_0__depth)))) {
        VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1060)->__PVT__compare_map.clear();
        VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1061)->__PVT__result = 0U;
        VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1062)->__PVT__miscompares = ""s;
        VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1063)->__PVT__scope 
            = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1063)
            ->__PVT__scope;
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        if ((""s == __VlefCall_1__get_name)) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1065)
                          ->__PVT__scope, "../../uvm/distrib/src/base/uvm_object.svh", 1065)->__VnoInFunc_down(vlSymsp, "<object>"s);
        } else {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1067)
                          ->__PVT__scope, "../../uvm/distrib/src/base/uvm_object.svh", 1067)->__VnoInFunc_down(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name));
        }
    }
    if ((1U & (~ (IData)(done)))) {
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1070)
                      ->__PVT__scope, "../../uvm/distrib/src/base/uvm_object.svh", 1070)->__VnoInFunc_depth(vlSymsp, __VlefCall_3__depth);
        if ((0U != __VlefCall_3__depth)) {
            VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1071)->__VnoInFunc_print_msg_object(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>{this}, rhs);
        } else {
            VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1074)->__VnoInFunc_print_msg_object(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>{this}, rhs);
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1078)
                          ->__PVT__scope, "../../uvm/distrib/src/base/uvm_object.svh", 1078)->__VnoInFunc_get(vlSymsp, __VlefCall_4__get);
            this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_5__get_inst_id);
            __Vtask_uvm_report_info__75__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_info__75__context_name = ""s;
            __Vtask_uvm_report_info__75__line = 0U;
            this->__Vtask_uvm_report_info__75__filename = ""s;
            __Vtask_uvm_report_info__75__verbosity 
                = VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1080)
                                ->__PVT__comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1080)
                ->__PVT__verbosity;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__75__message
                          ,"%0d Miscompare(s) for object %s@%0d vs. null",3
                          , '#',32,VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1077)
                          ->__PVT__result, 'S',&(__VlefCall_4__get)
                          , '~',32,__VlefCall_5__get_inst_id);
            this->__Vtask_uvm_report_info__75__id = "MISCMP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__76__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__76__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__77__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__77__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__75__id, this->__Vtask_uvm_report_info__75__message, __Vtask_uvm_report_info__75__verbosity, this->__Vtask_uvm_report_info__75__filename, __Vtask_uvm_report_info__75__line, this->__Vtask_uvm_report_info__75__context_name, (IData)(__Vtask_uvm_report_info__75__report_enabled_checked));
            done = 1U;
        }
    }
    if (((1U & (~ (IData)(done))) && VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1085)
         ->__PVT__compare_map.exists(rhs))) {
        __VlefExpr_6 = (VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1086)
                        ->__PVT__compare_map.at(rhs) 
                        != VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>{this});
        if (__VlefExpr_6) {
            VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1087)->__VnoInFunc_print_msg_object(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>{this}, VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1087)
                                                                                ->__PVT__compare_map
                                                                                .at(rhs));
        }
        done = 1U;
    }
    __VlefLogAnd_9 = (((1U & (~ (IData)(done))) && VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1092)
                       ->__PVT__check_type) && (VlNull{} 
                                                != rhs));
    if (__VlefLogAnd_9) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
        VL_NULL_CHECK(rhs, "../../uvm/distrib/src/base/uvm_object.svh", 1092)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
        __VlefLogAnd_9 = (__VlefCall_7__get_type_name 
                          != __VlefCall_8__get_type_name);
    }
    if (__VlefLogAnd_9) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
        VL_NULL_CHECK(rhs, "../../uvm/distrib/src/base/uvm_object.svh", 1094)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1093)->__PVT__stringv 
            = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN("lhs type = \""s, __VlefCall_10__get_type_name), "\" : rhs type = \""s), __VlefCall_11__get_type_name), "\""s);
                    VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1095)
                                            ->__VnoInFunc_print_msg(vlProcess, vlSymsp, 
                                                                    VL_CVT_PACK_STR_NN(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1095)
                                                                                ->__PVT__stringv));
                }
                if ((1U & (~ (IData)(done)))) {
                    VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1099)
                                            ->__PVT__compare_map
                                            .at(rhs) 
                        = VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>{this};
                    this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, rhs, 4U, ""s);
                    this->__VnoInFunc_do_compare(vlSymsp, rhs, comparer, dc);
                }
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1104)
                              ->__PVT__scope, "../../uvm/distrib/src/base/uvm_object.svh", 1104)
                                            ->__VnoInFunc_depth(vlSymsp, __VlefCall_12__depth);
                if ((1U == __VlefCall_12__depth)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1105)
                                  ->__PVT__scope, "../../uvm/distrib/src/base/uvm_object.svh", 1105)
                                            ->__VnoInFunc_up(vlSymsp, 0x2eU);
                }
                if ((VlNull{} != rhs)) {
                    VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1109)
                                            ->__VnoInFunc_print_rollup(vlSymsp, 
                                                                       VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object>{this}, rhs);
                }
                compare__Vfuncrtn = ((0U == VL_NULL_CHECK(comparer, "../../uvm/distrib/src/base/uvm_object.svh", 1110)
                                      ->__PVT__result) 
                                     && (IData)(dc));
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_compare(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_compare\n"); );
                // Body
                do_compare__Vfuncrtn = 1U;
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation\n"); );
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print\n"); );
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_pack(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> &packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_pack\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_0__get_name;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1148)
                                            ->__PVT__packer 
                    = ((VlNull{} != packer) ? packer
                        : vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_packer);
                packer = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1151)
                    ->__PVT__packer;
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1153)
                                            ->__VnoInFunc_reset(vlSymsp);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                VL_NULL_CHECK(VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1154)
                              ->__PVT__scope, "../../uvm/distrib/src/base/uvm_object.svh", 1154)
                                            ->__VnoInFunc_down(vlSymsp, 
                                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_name));
                this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00000100U, ""s);
                this->__VnoInFunc_do_pack(vlSymsp, packer);
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1159)
                                            ->__VnoInFunc_set_packed_size(vlSymsp);
                VL_NULL_CHECK(VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1161)
                              ->__PVT__scope, "../../uvm/distrib/src/base/uvm_object.svh", 1161)
                                            ->__VnoInFunc_up(vlSymsp, 0x2eU);
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack\n"); );
                // Locals
                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__97__packer;
                // Body
                pack__Vfuncrtn = 0U;
                __Vtask_m_pack__97__packer = packer;
                this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__97__packer);
                packer = __Vtask_m_pack__97__packer;
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1172)
                                            ->__VnoInFunc_get_bits(vlSymsp, bitstream);
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1173)
                                            ->__VnoInFunc_get_packed_size(vlSymsp, pack__Vfuncrtn);
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_bytes(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_bytes__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_bytes\n"); );
                // Locals
                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__100__packer;
                // Body
                pack_bytes__Vfuncrtn = 0U;
                __Vtask_m_pack__100__packer = packer;
                this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__100__packer);
                packer = __Vtask_m_pack__100__packer;
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1182)
                                            ->__VnoInFunc_get_bytes(vlSymsp, bytestream);
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1183)
                                            ->__VnoInFunc_get_packed_size(vlSymsp, pack_bytes__Vfuncrtn);
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_ints(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_ints__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_ints\n"); );
                // Locals
                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__103__packer;
                // Body
                pack_ints__Vfuncrtn = 0U;
                __Vtask_m_pack__103__packer = packer;
                this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__103__packer);
                packer = __Vtask_m_pack__103__packer;
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1193)
                                            ->__VnoInFunc_get_ints(vlSymsp, intstream);
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1194)
                                            ->__VnoInFunc_get_packed_size(vlSymsp, pack_ints__Vfuncrtn);
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_pack(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_pack\n"); );
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_pre(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> &packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_pre\n"); );
                // Body
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1211)
                                            ->__PVT__packer 
                    = ((VlNull{} != packer) ? packer
                        : vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_packer);
                packer = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1214)
                    ->__PVT__packer;
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1215)
                                            ->__VnoInFunc_reset(vlSymsp);
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_post(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_post\n"); );
                // Locals
                IData/*31:0*/ __Vtask_uvm_report_warning__115__verbosity;
                __Vtask_uvm_report_warning__115__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__115__line;
                __Vtask_uvm_report_warning__115__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__115__report_enabled_checked;
                __Vtask_uvm_report_warning__115__report_enabled_checked = 0;
                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__116__Vfuncout;
                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__117__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_2__get_packed_size;
                IData/*31:0*/ __VlefCall_1__get_packed_size;
                std::string __VlefCall_0__get_name;
                IData/*31:0*/ provided_size;
                provided_size = 0U;
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1226)
                                            ->__VnoInFunc_get_packed_size(vlSymsp, provided_size);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                VL_NULL_CHECK(VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1229)
                              ->__PVT__scope, "../../uvm/distrib/src/base/uvm_object.svh", 1229)
                                            ->__VnoInFunc_down(vlSymsp, 
                                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_name));
                this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020002U, ""s);
                this->__VnoInFunc_do_unpack(vlSymsp, packer);
                VL_NULL_CHECK(VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1236)
                              ->__PVT__scope, "../../uvm/distrib/src/base/uvm_object.svh", 1236)
                                            ->__VnoInFunc_up(vlSymsp, 0x2eU);
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1238)
                                            ->__VnoInFunc_get_packed_size(vlSymsp, __VlefCall_1__get_packed_size);
                if ((__VlefCall_1__get_packed_size 
                     != provided_size)) {
                    VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1239)
                                            ->__VnoInFunc_get_packed_size(vlSymsp, __VlefCall_2__get_packed_size);
                    __Vtask_uvm_report_warning__115__report_enabled_checked = 0U;
                    this->__Vtask_uvm_report_warning__115__context_name = ""s;
                    __Vtask_uvm_report_warning__115__line = 0U;
                    this->__Vtask_uvm_report_warning__115__filename = ""s;
                    __Vtask_uvm_report_warning__115__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__115__message
                                  ,"Unpack operation unsuccessful: unpacked %0d bits from a total of %0d bits",2
                                  , '~',32,__VlefCall_2__get_packed_size
                                  , '~',32,provided_size);
                    this->__Vtask_uvm_report_warning__115__id = "BDUNPK"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__116__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__116__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__117__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__117__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                            ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__115__id, this->__Vtask_uvm_report_warning__115__message, __Vtask_uvm_report_warning__115__verbosity, this->__Vtask_uvm_report_warning__115__filename, __Vtask_uvm_report_warning__115__line, this->__Vtask_uvm_report_warning__115__context_name, (IData)(__Vtask_uvm_report_warning__115__report_enabled_checked));
                }
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack\n"); );
                // Locals
                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__119__packer;
                // Body
                unpack__Vfuncrtn = 0U;
                __Vtask_m_unpack_pre__119__packer = packer;
                this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__119__packer);
                packer = __Vtask_m_unpack_pre__119__packer;
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1251)
                                            ->__VnoInFunc_put_bits(vlSymsp, bitstream);
                this->__VnoInFunc_m_unpack_post(vlSymsp, packer);
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1253)
                                            ->__VnoInFunc_set_packed_size(vlSymsp);
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1254)
                                            ->__VnoInFunc_get_packed_size(vlSymsp, unpack__Vfuncrtn);
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_bytes(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_bytes__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_bytes\n"); );
                // Locals
                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__124__packer;
                // Body
                unpack_bytes__Vfuncrtn = 0U;
                __Vtask_m_unpack_pre__124__packer = packer;
                this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__124__packer);
                packer = __Vtask_m_unpack_pre__124__packer;
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1264)
                                            ->__VnoInFunc_put_bytes(vlSymsp, bytestream);
                this->__VnoInFunc_m_unpack_post(vlSymsp, packer);
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1266)
                                            ->__VnoInFunc_set_packed_size(vlSymsp);
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1267)
                                            ->__VnoInFunc_get_packed_size(vlSymsp, unpack_bytes__Vfuncrtn);
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_ints(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_ints__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_ints\n"); );
                // Locals
                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__129__packer;
                // Body
                unpack_ints__Vfuncrtn = 0U;
                __Vtask_m_unpack_pre__129__packer = packer;
                this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__129__packer);
                packer = __Vtask_m_unpack_pre__129__packer;
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1277)
                                            ->__VnoInFunc_put_ints(vlSymsp, intstream);
                this->__VnoInFunc_m_unpack_post(vlSymsp, packer);
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1279)
                                            ->__VnoInFunc_set_packed_size(vlSymsp);
                VL_NULL_CHECK(packer, "../../uvm/distrib/src/base/uvm_object.svh", 1280)
                                            ->__VnoInFunc_get_packed_size(vlSymsp, unpack_ints__Vfuncrtn);
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_unpack(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_unpack\n"); );
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_record(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_recorder> recorder) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_record\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                {
                    if ((VlNull{} == recorder)) {
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_object.svh", 1303)
                                            ->__PVT__recorder 
                        = recorder;
                    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_object.svh", 1304)
                                            ->__PVT__recording_depth 
                        = ((IData)(1U) + VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_object.svh", 1304)
                           ->__PVT__recording_depth);
                    this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00000040U, ""s);
                    this->__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
                    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_object.svh", 1308)
                                            ->__PVT__recording_depth 
                        = (VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_object.svh", 1308)
                           ->__PVT__recording_depth 
                           - (IData)(1U));
                    __Vlabel0: ;
                }
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_recorder> recorder) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record\n"); );
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_get_report_object(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_object> &m_get_report_object__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_get_report_object\n"); );
                // Body
                m_get_report_object__Vfuncrtn = VlNull{};
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_randomize\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0____VBasicRand;
                VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
                this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
                randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                       & __VlefCall_0____VBasicRand);
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc___Vsetup_constraints\n"); );
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc___VBasicRand\n"); );
                // Body
                __VBasicRand__Vfuncrtn = 1U;
            }

            void VUVM_Register8b_uvm_pkg__03a__03auvm_object::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::_ctor_var_reset\n"); );
                // Body
                (void)vlSymsp;  // Prevent unused variable warning
                __PVT__m_inst_id = 0;
            }

            VUVM_Register8b_uvm_pkg__03a__03auvm_object::~VUVM_Register8b_uvm_pkg__03a__03auvm_object() {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_object::~\n"); );
            }
