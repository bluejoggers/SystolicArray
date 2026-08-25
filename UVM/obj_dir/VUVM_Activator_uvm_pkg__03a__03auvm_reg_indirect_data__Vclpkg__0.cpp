// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_cover) {
    VUVM_Activator_uvm_pkg__03a__03auvm_reg::init(vlProcess, vlSymsp, name, n_bits, has_cover);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_build(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_build\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_configure(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg> idx, VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg>> reg_a, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_file> regfile_parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_configure\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk1__DOT__map;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk1__DOT__map__Vnext;
    CData/*0:0*/ unnamedblk1__DOT__map__Vmore;
    unnamedblk1__DOT__map__Vmore = 0;
    VUVM_Activator_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure(vlSymsp, blk_parent, regfile_parent, ""s);
    this->__PVT__m_idx = idx;
    this->__PVT__m_tbl = reg_a;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_0__get_full_name)), "NO_REG_TESTS"s, 1U, VlNull{});
    unnamedblk1__DOT__map__Vmore = (0U != VUVM_Activator_uvm_pkg__03a__03auvm_reg::__PVT__m_maps.first(unnamedblk1__DOT__map__Vnext));
    while (unnamedblk1__DOT__map__Vmore) {
        unnamedblk1__DOT__map = unnamedblk1__DOT__map__Vnext;
        unnamedblk1__DOT__map__Vmore = (0U != VUVM_Activator_uvm_pkg__03a__03auvm_reg::__PVT__m_maps.next(unnamedblk1__DOT__map__Vnext));
        this->__VnoInFunc_add_frontdoors(vlSymsp, unnamedblk1__DOT__map);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_map(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_map\n"); );
    // Body
    VUVM_Activator_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map(vlSymsp, map);
    this->__VnoInFunc_add_frontdoors(vlSymsp, map);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_frontdoors(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_frontdoors\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__verbosity;
    __Vfunc_uvm_report_enabled__8__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__8__severity;
    __Vfunc_uvm_report_enabled__8__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__13__verbosity;
    __Vtask_uvm_report_error__13__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__13__line;
    __Vtask_uvm_report_error__13__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__13__report_enabled_checked;
    __Vtask_uvm_report_error__13__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_3__is_in_map;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i__Vloopsize;
    unnamedblk2__DOT__i__Vloopsize = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq> unnamedblk2__DOT__unnamedblk3__DOT__fd;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_tbl.size())) {
        unnamedblk2__DOT__i__Vloopsize = this->__PVT__m_tbl.size();
        {
            if ((VlNull{} == this->__PVT__m_tbl.at(unnamedblk2__DOT__i))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                this->__Vfunc_uvm_report_enabled__8__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
                __Vfunc_uvm_report_enabled__8__severity = 2U;
                __Vfunc_uvm_report_enabled__8__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__10__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__8__verbosity, (IData)(__Vfunc_uvm_report_enabled__8__severity), this->__Vfunc_uvm_report_enabled__8__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                    __Vtask_uvm_report_error__13__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__13__context_name = ""s;
                    __Vtask_uvm_report_error__13__line = 0x00000067U;
                    this->__Vtask_uvm_report_error__13__filename = "../../uvm/distrib/src/reg/uvm_reg_indirect.svh"s;
                    __Vtask_uvm_report_error__13__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__13__message
                                  ,"Indirect register #%0d is NULL",1
                                  , '~',32,unnamedblk2__DOT__i);
                    this->__Vtask_uvm_report_error__13__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
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
            unnamedblk2__DOT__unnamedblk3__DOT__fd 
                = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq, vlProcess, vlSymsp, this->__PVT__m_idx, unnamedblk2__DOT__i, 
                         VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data>{this});
            VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk2__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 107)->__VnoInFunc_is_in_map(vlSymsp, map, __VlefCall_3__is_in_map);
            if (__VlefCall_3__is_in_map) {
                VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk2__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 108)->__VnoInFunc_set_frontdoor(vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__fd, map, ""s, 0U);
            } else {
                VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 110)->__VnoInFunc_add_reg(vlSymsp, this->__PVT__m_tbl.at(unnamedblk2__DOT__i), 0xffffffffffffffffULL, "RW"s, 1U, unnamedblk2__DOT__unnamedblk3__DOT__fd);
            }
            __Vlabel0: ;
        }
        if ((unnamedblk2__DOT__i__Vloopsize <= this->__PVT__m_tbl.size())) {
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        }
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_do_predict(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_do_predict\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__verbosity;
    __Vfunc_uvm_report_enabled__23__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__23__severity;
    __Vfunc_uvm_report_enabled__23__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__30__verbosity;
    __Vtask_uvm_report_error__30__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__30__line;
    __Vtask_uvm_report_error__30__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__30__report_enabled_checked;
    __Vtask_uvm_report_error__30__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_6__get;
    QData/*63:0*/ __VlefCall_5__get;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    QData/*63:0*/ __VlefCall_0__get;
    IData/*31:0*/ unnamedblk4__DOT__idx;
    {
        VL_NULL_CHECK(this->__PVT__m_idx, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 117)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_0__get);
        if ((__VlefCall_0__get >= (QData)((IData)(this->__PVT__m_tbl.size())))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__Vfunc_uvm_report_enabled__23__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name);
            __Vfunc_uvm_report_enabled__23__severity = 2U;
            __Vfunc_uvm_report_enabled__23__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__25__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__25__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__23__verbosity, (IData)(__Vfunc_uvm_report_enabled__23__severity), this->__Vfunc_uvm_report_enabled__23__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_idx, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 118)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_idx, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 118)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_5__get);
                __Vtask_uvm_report_error__30__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__30__context_name = ""s;
                __Vtask_uvm_report_error__30__line = 0x00000076U;
                this->__Vtask_uvm_report_error__30__filename = "../../uvm/distrib/src/reg/uvm_reg_indirect.svh"s;
                __Vtask_uvm_report_error__30__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__30__message
                              ,"Address register %s has a value (%0d) greater than the maximum indirect register array size (%0d)",3
                              , 'S',&(__VlefCall_4__get_full_name)
                              , '#',64,__VlefCall_5__get
                              , '~',32,this->__PVT__m_tbl.size());
                this->__Vtask_uvm_report_error__30__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__30__id, this->__Vtask_uvm_report_error__30__message, __Vtask_uvm_report_error__30__verbosity, this->__Vtask_uvm_report_error__30__filename, __Vtask_uvm_report_error__30__line, this->__Vtask_uvm_report_error__30__context_name, (IData)(__Vtask_uvm_report_error__30__report_enabled_checked));
            }
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 119)->__PVT__status = 1U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_idx, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 125)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_6__get);
        unnamedblk4__DOT__idx = (IData)(__VlefCall_6__get);
        VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk4__DOT__idx), "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 126)->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_local_map(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_local_map\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_idx, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 132)->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, caller, get_local_map__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_field(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_field> field) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_field\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38__verbosity;
    __Vfunc_uvm_report_enabled__38__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__38__severity;
    __Vfunc_uvm_report_enabled__38__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__43__verbosity;
    __Vtask_uvm_report_error__43__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__43__line;
    __Vtask_uvm_report_error__43__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__43__report_enabled_checked;
    __Vtask_uvm_report_error__43__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__38__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__38__severity = 2U;
    __Vfunc_uvm_report_enabled__38__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__39__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__39__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__40__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__38__verbosity, (IData)(__Vfunc_uvm_report_enabled__38__severity), this->__Vfunc_uvm_report_enabled__38__id, __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        __Vtask_uvm_report_error__43__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__43__context_name = ""s;
        __Vtask_uvm_report_error__43__line = 0x0000008bU;
        this->__Vtask_uvm_report_error__43__filename = "../../uvm/distrib/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__43__verbosity = 0U;
        this->__Vtask_uvm_report_error__43__message = "Cannot add field to an indirect data access register"s;
        this->__Vtask_uvm_report_error__43__id = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__44__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__44__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__45__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__43__id, this->__Vtask_uvm_report_error__43__message, __Vtask_uvm_report_error__43__verbosity, this->__Vtask_uvm_report_error__43__filename, __Vtask_uvm_report_error__43__line, this->__Vtask_uvm_report_error__43__context_name, (IData)(__Vtask_uvm_report_error__43__report_enabled_checked));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_set(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__48__verbosity;
    __Vfunc_uvm_report_enabled__48__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__48__severity;
    __Vfunc_uvm_report_enabled__48__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__49__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__50__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__53__verbosity;
    __Vtask_uvm_report_error__53__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__53__line;
    __Vtask_uvm_report_error__53__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__53__report_enabled_checked;
    __Vtask_uvm_report_error__53__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__54__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__55__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__48__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__48__severity = 2U;
    __Vfunc_uvm_report_enabled__48__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__49__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__49__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__50__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__50__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__48__verbosity, (IData)(__Vfunc_uvm_report_enabled__48__severity), this->__Vfunc_uvm_report_enabled__48__id, __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        __Vtask_uvm_report_error__53__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__53__context_name = ""s;
        __Vtask_uvm_report_error__53__line = 0x00000091U;
        this->__Vtask_uvm_report_error__53__filename = "../../uvm/distrib/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__53__verbosity = 0U;
        this->__Vtask_uvm_report_error__53__message = "Cannot set() an indirect data access register"s;
        this->__Vtask_uvm_report_error__53__id = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__54__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__54__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__55__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__55__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__53__id, this->__Vtask_uvm_report_error__53__message, __Vtask_uvm_report_error__53__verbosity, this->__Vtask_uvm_report_error__53__filename, __Vtask_uvm_report_error__53__line, this->__Vtask_uvm_report_error__53__context_name, (IData)(__Vtask_uvm_report_error__53__report_enabled_checked));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__58__verbosity;
    __Vfunc_uvm_report_enabled__58__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__58__severity;
    __Vfunc_uvm_report_enabled__58__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__59__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__60__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__63__verbosity;
    __Vtask_uvm_report_error__63__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__63__line;
    __Vtask_uvm_report_error__63__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__63__report_enabled_checked;
    __Vtask_uvm_report_error__63__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    get__Vfuncrtn = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__58__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__58__severity = 2U;
    __Vfunc_uvm_report_enabled__58__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__59__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__59__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__60__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__60__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__58__verbosity, (IData)(__Vfunc_uvm_report_enabled__58__severity), this->__Vfunc_uvm_report_enabled__58__id, __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        __Vtask_uvm_report_error__63__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__63__context_name = ""s;
        __Vtask_uvm_report_error__63__line = 0x00000096U;
        this->__Vtask_uvm_report_error__63__filename = "../../uvm/distrib/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__63__verbosity = 0U;
        this->__Vtask_uvm_report_error__63__message = "Cannot get() an indirect data access register"s;
        this->__Vtask_uvm_report_error__63__id = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__64__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__64__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__65__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__63__id, this->__Vtask_uvm_report_error__63__message, __Vtask_uvm_report_error__63__verbosity, this->__Vtask_uvm_report_error__63__filename, __Vtask_uvm_report_error__63__line, this->__Vtask_uvm_report_error__63__context_name, (IData)(__Vtask_uvm_report_error__63__report_enabled_checked));
    }
    get__Vfuncrtn = 0ULL;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_indirect_reg(VUVM_Activator__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg> &get_indirect_reg__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_indirect_reg\n"); );
    // Body
    QData/*63:0*/ __VlefCall_0__get_mirrored_value;
    IData/*31:0*/ idx;
    VL_NULL_CHECK(this->__PVT__m_idx, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 156)->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, __VlefCall_0__get_mirrored_value);
    idx = (IData)(__VlefCall_0__get_mirrored_value);
    get_indirect_reg__Vfuncrtn = this->__PVT__m_tbl.at(idx);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_needs_update(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_needs_update\n"); );
    // Body
    needs_update__Vfuncrtn = 0U;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__71__verbosity;
    __Vfunc_uvm_report_enabled__71__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__71__severity;
    __Vfunc_uvm_report_enabled__71__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__76__verbosity;
    __Vtask_uvm_report_warning__76__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__76__line;
    __Vtask_uvm_report_warning__76__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__76__report_enabled_checked;
    __Vtask_uvm_report_warning__76__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__77__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__78__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> unnamedblk5__DOT__blk;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> unnamedblk6__DOT__rw;
    status = 0U;
    if ((3U == path)) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk5__DOT__blk);
        VL_NULL_CHECK(unnamedblk5__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 176)->__VnoInFunc_get_default_path(vlSymsp, path);
    }
    if ((1U == path)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__Vfunc_uvm_report_enabled__71__id = 
            VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
        __Vfunc_uvm_report_enabled__71__severity = 1U;
        __Vfunc_uvm_report_enabled__71__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__72__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__72__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__73__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__71__verbosity, (IData)(__Vfunc_uvm_report_enabled__71__severity), this->__Vfunc_uvm_report_enabled__71__id, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__76__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__76__context_name = ""s;
            __Vtask_uvm_report_warning__76__line = 0x000000b4U;
            this->__Vtask_uvm_report_warning__76__filename = "../../uvm/distrib/src/reg/uvm_reg_indirect.svh"s;
            __Vtask_uvm_report_warning__76__verbosity = 0U;
            this->__Vtask_uvm_report_warning__76__message = "Cannot backdoor-write an indirect data access register. Switching to frontdoor."s;
            this->__Vtask_uvm_report_warning__76__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__77__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__77__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__78__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__78__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__76__id, this->__Vtask_uvm_report_warning__76__message, __Vtask_uvm_report_warning__76__verbosity, this->__Vtask_uvm_report_warning__76__filename, __Vtask_uvm_report_warning__76__line, this->__Vtask_uvm_report_warning__76__context_name, (IData)(__Vtask_uvm_report_warning__76__report_enabled_checked));
        }
        path = 0U;
    }
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi32__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), unnamedblk6__DOT__rw);
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 191)->__PVT__element 
        = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data>{this};
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 192)->__PVT__element_kind = 0U;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 193)->__PVT__kind = 1U;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 194)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 195)->__PVT__path 
        = path;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 196)->__PVT__map 
        = map;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 197)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 198)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 199)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 200)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 201)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, unnamedblk6__DOT__rw);
    status = VL_NULL_CHECK(unnamedblk6__DOT__rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 205)
        ->__PVT__status;
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_read(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__88__verbosity;
    __Vfunc_uvm_report_enabled__88__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__88__severity;
    __Vfunc_uvm_report_enabled__88__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__89__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__90__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__93__verbosity;
    __Vtask_uvm_report_warning__93__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__93__line;
    __Vtask_uvm_report_warning__93__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__93__report_enabled_checked;
    __Vtask_uvm_report_warning__93__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__94__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__95__Vfuncout;
    IData/*31:0*/ __Vtask_read__97__status;
    __Vtask_read__97__status = 0;
    QData/*63:0*/ __Vtask_read__97__value;
    __Vtask_read__97__value = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> unnamedblk7__DOT__blk;
    status = 0U;
    value = 0ULL;
    if ((3U == path)) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk7__DOT__blk);
        VL_NULL_CHECK(unnamedblk7__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 223)->__VnoInFunc_get_default_path(vlSymsp, path);
    }
    if ((1U == path)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__Vfunc_uvm_report_enabled__88__id = 
            VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
        __Vfunc_uvm_report_enabled__88__severity = 1U;
        __Vfunc_uvm_report_enabled__88__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__89__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__89__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__90__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__90__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__88__verbosity, (IData)(__Vfunc_uvm_report_enabled__88__severity), this->__Vfunc_uvm_report_enabled__88__id, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__93__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__93__context_name = ""s;
            __Vtask_uvm_report_warning__93__line = 0x000000e3U;
            this->__Vtask_uvm_report_warning__93__filename = "../../uvm/distrib/src/reg/uvm_reg_indirect.svh"s;
            __Vtask_uvm_report_warning__93__verbosity = 0U;
            this->__Vtask_uvm_report_warning__93__message = "Cannot backdoor-read an indirect data access register. Switching to frontdoor."s;
            this->__Vtask_uvm_report_warning__93__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__94__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__94__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__95__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__95__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__93__id, this->__Vtask_uvm_report_warning__93__message, __Vtask_uvm_report_warning__93__verbosity, this->__Vtask_uvm_report_warning__93__filename, __Vtask_uvm_report_warning__93__line, this->__Vtask_uvm_report_warning__93__context_name, (IData)(__Vtask_uvm_report_warning__93__report_enabled_checked));
        }
        path = 0U;
    }
    co_await VUVM_Activator_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__97__status, __Vtask_read__97__value, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_read__97__status;
    value = __Vtask_read__97__value;
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_poke(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__99__verbosity;
    __Vfunc_uvm_report_enabled__99__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__99__severity;
    __Vfunc_uvm_report_enabled__99__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__100__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__101__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__104__verbosity;
    __Vtask_uvm_report_error__104__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__104__line;
    __Vtask_uvm_report_error__104__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__104__report_enabled_checked;
    __Vtask_uvm_report_error__104__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__99__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__99__severity = 2U;
    __Vfunc_uvm_report_enabled__99__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__100__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__100__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__101__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__101__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__99__verbosity, (IData)(__Vfunc_uvm_report_enabled__99__severity), this->__Vfunc_uvm_report_enabled__99__id, __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        __Vtask_uvm_report_error__104__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__104__context_name = ""s;
        __Vtask_uvm_report_error__104__line = 0x000000f1U;
        this->__Vtask_uvm_report_error__104__filename = "../../uvm/distrib/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__104__verbosity = 0U;
        this->__Vtask_uvm_report_error__104__message = "Cannot poke() an indirect data access register"s;
        this->__Vtask_uvm_report_error__104__id = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__105__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__105__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__106__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__104__id, this->__Vtask_uvm_report_error__104__message, __Vtask_uvm_report_error__104__verbosity, this->__Vtask_uvm_report_error__104__filename, __Vtask_uvm_report_error__104__line, this->__Vtask_uvm_report_error__104__context_name, (IData)(__Vtask_uvm_report_error__104__report_enabled_checked));
    }
    status = 1U;
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_peek(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__109__verbosity;
    __Vfunc_uvm_report_enabled__109__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__109__severity;
    __Vfunc_uvm_report_enabled__109__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__114__verbosity;
    __Vtask_uvm_report_error__114__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__114__line;
    __Vtask_uvm_report_error__114__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__114__report_enabled_checked;
    __Vtask_uvm_report_error__114__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__115__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__116__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__109__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__109__severity = 2U;
    __Vfunc_uvm_report_enabled__109__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__110__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__110__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__111__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__109__verbosity, (IData)(__Vfunc_uvm_report_enabled__109__severity), this->__Vfunc_uvm_report_enabled__109__id, __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        __Vtask_uvm_report_error__114__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__114__context_name = ""s;
        __Vtask_uvm_report_error__114__line = 0x000000fcU;
        this->__Vtask_uvm_report_error__114__filename = "../../uvm/distrib/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__114__verbosity = 0U;
        this->__Vtask_uvm_report_error__114__message = "Cannot peek() an indirect data access register"s;
        this->__Vtask_uvm_report_error__114__id = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__115__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__115__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__116__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__116__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__114__id, this->__Vtask_uvm_report_error__114__message, __Vtask_uvm_report_error__114__verbosity, this->__Vtask_uvm_report_error__114__filename, __Vtask_uvm_report_error__114__line, this->__Vtask_uvm_report_error__114__context_name, (IData)(__Vtask_uvm_report_error__114__report_enabled_checked));
    }
    status = 1U;
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_update(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_update\n"); );
    // Body
    VL_KEEP_THIS;
    status = 0U;
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_mirror(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_mirror\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    status = 0U;
    co_return;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::~VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_indirect_data::~\n"); );
}
