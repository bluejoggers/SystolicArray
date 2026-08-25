// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_check_data_width(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ width, CData/*0:0*/ &check_data_width__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_check_data_width\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__0__verbosity;
    __Vfunc_uvm_report_enabled__0__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__0__severity;
    __Vfunc_uvm_report_enabled__0__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__4__verbosity;
    __Vtask_uvm_report_fatal__4__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__4__line;
    __Vtask_uvm_report_fatal__4__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__4__report_enabled_checked;
    __Vtask_uvm_report_fatal__4__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        check_data_width__Vfuncrtn = 0U;
        if ((0x00000040U >= width)) {
            check_data_width__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        this->__Vfunc_uvm_report_enabled__0__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__0__severity = 3U;
        __Vfunc_uvm_report_enabled__0__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__1__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__2__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__0__verbosity, (IData)(__Vfunc_uvm_report_enabled__0__severity), this->__Vfunc_uvm_report_enabled__0__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_fatal__4__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_fatal__4__context_name = ""s;
            __Vtask_uvm_report_fatal__4__line = 0x000003b2U;
            this->__Vtask_uvm_report_fatal__4__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_fatal__4__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_fatal__4__message
                          ,"Register model requires that UVM_REG_DATA_WIDTH be defined as %0d or greater. Currently defined as 64",1
                          , '#',32,width);
            this->__Vtask_uvm_report_fatal__4__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__5__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                = __Vfunc_get__5__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vtask_get_root__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__4__id, this->__Vtask_uvm_report_fatal__4__message, __Vtask_uvm_report_fatal__4__verbosity, this->__Vtask_uvm_report_fatal__4__filename, __Vtask_uvm_report_fatal__4__line, this->__Vtask_uvm_report_fatal__4__context_name, (IData)(__Vtask_uvm_report_fatal__4__report_enabled_checked));
        }
        check_data_width__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_root_blocks(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>> &blks) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_root_blocks\n"); );
    // Body
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk624__DOT__blk;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk624__DOT__blk__Vnext;
    CData/*0:0*/ unnamedblk624__DOT__blk__Vmore;
    unnamedblk624__DOT__blk__Vmore = 0;
    unnamedblk624__DOT__blk__Vmore = (0U != this->__PVT__m_roots.first(unnamedblk624__DOT__blk__Vnext));
    while (unnamedblk624__DOT__blk__Vmore) {
        unnamedblk624__DOT__blk = unnamedblk624__DOT__blk__Vnext;
        unnamedblk624__DOT__blk__Vmore = (0U != this->__PVT__m_roots.next(unnamedblk624__DOT__blk__Vnext));
        blks.push_back(unnamedblk624__DOT__blk);
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_blocks(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>> &blks, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> accessor, IData/*31:0*/ &find_blocks__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_blocks\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> __VlefCall_4__read;
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> __VlefCall_2__get;
    IData/*31:0*/ __VlefCall_1__size;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk625__DOT__i;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz109> unnamedblk625__DOT__unnamedblk626__DOT__blk;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool> rpl;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5> rs;
    find_blocks__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rpl);
    blks.clear();
    if ((VlNull{} != root)) {
        VL_NULL_CHECK(root, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1264)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), name);
    }
    VL_NULL_CHECK(rpl, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1266)->__VnoInFunc_lookup_regex(vlSymsp, name, "uvm_reg::"s, rs);
    unnamedblk625__DOT__i = 0U;
    unnamedblk625__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(rs, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1267)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
        if (!(VL_LTS_III(32, unnamedblk625__DOT__i, __VlefCall_1__size))) break;
        {
            VL_NULL_CHECK(rs, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1269)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk625__DOT__i, __VlefCall_2__get);
            __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__get, unnamedblk625__DOT__unnamedblk626__DOT__blk);
            if ((! __VlefExpr_3)) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(unnamedblk625__DOT__unnamedblk626__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1270)->__VnoInFunc_read(vlSymsp, accessor, __VlefCall_4__read);
            blks.push_back(__VlefCall_4__read);
            __Vlabel0: ;
        }
        unnamedblk625__DOT__i = ((IData)(1U) + unnamedblk625__DOT__i);
    }
    find_blocks__Vfuncrtn = blks.size();
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_block(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> &find_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_block\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_find_blocks__14__Vfuncout;
    __Vfunc_find_blocks__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__verbosity;
    __Vfunc_uvm_report_enabled__15__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__15__severity;
    __Vfunc_uvm_report_enabled__15__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__19__verbosity;
    __Vtask_uvm_report_warning__19__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__19__line;
    __Vtask_uvm_report_warning__19__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__19__report_enabled_checked;
    __Vtask_uvm_report_warning__19__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__find_blocks;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>> blks;
    {
        blks.clear();
        this->__VnoInFunc_find_blocks(vlSymsp, name, blks, root, accessor, __Vfunc_find_blocks__14__Vfuncout);
        __VlefCall_0__find_blocks = __Vfunc_find_blocks__14__Vfuncout;
        if ((1U & (~ (0U != __VlefCall_0__find_blocks)))) {
            find_block__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (VL_LTS_III(32, 1U, blks.size())) {
            this->__Vfunc_uvm_report_enabled__15__id = "MRTH1BLK"s;
            __Vfunc_uvm_report_enabled__15__severity = 1U;
            __Vfunc_uvm_report_enabled__15__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__15__verbosity, (IData)(__Vfunc_uvm_report_enabled__15__severity), this->__Vfunc_uvm_report_enabled__15__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__19__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__19__context_name = ""s;
                __Vtask_uvm_report_warning__19__line = 0x00000509U;
                this->__Vtask_uvm_report_warning__19__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__19__verbosity = 0U;
                this->__Vtask_uvm_report_warning__19__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("More than one block matched the name \""s, name), "\"."s));
                    this->__Vtask_uvm_report_warning__19__id = "MRTH1BLK"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__21__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__19__id, this->__Vtask_uvm_report_warning__19__message, __Vtask_uvm_report_warning__19__verbosity, this->__Vtask_uvm_report_warning__19__filename, __Vtask_uvm_report_warning__19__line, this->__Vtask_uvm_report_warning__19__context_name, (IData)(__Vtask_uvm_report_warning__19__report_enabled_checked));
                }
            }
            find_block__Vfuncrtn = blks.at(0U);
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample\n"); );
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ has_coverage) {
        VUVM_Register8b_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::new\n"); );
        // Body
        VlProcess::currentp(vlProcess.get());
        _ctor_var_reset(vlSymsp);
        this->__PVT__default_path = 3U;
        this->__PVT__default_hdl_path = "RTL"s;
        /*super.new*/;
        this->__PVT__hdl_paths_pool = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz108, vlProcess, vlSymsp, "hdl_paths"s);
        this->__PVT__has_cover = has_coverage;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots
                    .at(VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>{this}) = 0U;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_configure(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_configure\n"); );
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_0__get_full_name;
        this->__PVT__parent = parent;
        if ((VlNull{} != parent)) {
            VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 968)
                    ->__VnoInFunc_add_block(vlSymsp, 
                                            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>{this});
        }
        this->__VnoInFunc_add_hdl_path(vlSymsp, hdl_path, "RTL"s);
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz109__Vclpkg.__VnoInFunc_set(vlSymsp, "uvm_reg::*"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>{this}, VlNull{});
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_block(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> blk) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_block\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
        __Vfunc_uvm_report_enabled__7__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
        __Vfunc_uvm_report_enabled__7__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__11__verbosity;
        __Vtask_uvm_report_error__11__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__11__line;
        __Vtask_uvm_report_error__11__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__11__report_enabled_checked;
        __Vtask_uvm_report_error__11__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__15__verbosity;
        __Vfunc_uvm_report_enabled__15__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__15__severity;
        __Vfunc_uvm_report_enabled__15__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__21__verbosity;
        __Vtask_uvm_report_error__21__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__21__line;
        __Vtask_uvm_report_error__21__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__21__report_enabled_checked;
        __Vtask_uvm_report_error__21__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_4__get_name;
        std::string __VlefCall_3__get_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__is_locked;
        IData/*31:0*/ __Vincrement1;
        __Vincrement1 = 0;
        {
            this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
            if (__VlefCall_0__is_locked) {
                this->__Vfunc_uvm_report_enabled__7__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__7__severity = 2U;
                __Vfunc_uvm_report_enabled__7__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__8__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__8__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), this->__Vfunc_uvm_report_enabled__7__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__11__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__11__context_name = ""s;
                    __Vtask_uvm_report_error__11__line = 0x000003d3U;
                    this->__Vtask_uvm_report_error__11__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__11__verbosity = 0U;
                    this->__Vtask_uvm_report_error__11__message = "Cannot add subblock to locked block model"s;
                    this->__Vtask_uvm_report_error__11__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__12__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__12__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__13__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__11__id, this->__Vtask_uvm_report_error__11__message, __Vtask_uvm_report_error__11__verbosity, this->__Vtask_uvm_report_error__11__filename, __Vtask_uvm_report_error__11__line, this->__Vtask_uvm_report_error__11__context_name, (IData)(__Vtask_uvm_report_error__11__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            if (this->__PVT__blks.exists(blk)) {
                this->__Vfunc_uvm_report_enabled__15__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__15__severity = 2U;
                __Vfunc_uvm_report_enabled__15__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__16__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__16__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__17__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__15__verbosity, (IData)(__Vfunc_uvm_report_enabled__15__severity), this->__Vfunc_uvm_report_enabled__15__id, __VlefCall_2__uvm_report_enabled);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    VL_NULL_CHECK(blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 984)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    __Vtask_uvm_report_error__21__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__21__context_name = ""s;
                    __Vtask_uvm_report_error__21__line = 0x000003d8U;
                    this->__Vtask_uvm_report_error__21__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__21__verbosity = 0U;
                    this->__Vtask_uvm_report_error__21__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Subblock '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s));
                    this->__Vtask_uvm_report_error__21__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__22__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__22__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__23__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__21__id, this->__Vtask_uvm_report_error__21__message, __Vtask_uvm_report_error__21__verbosity, this->__Vtask_uvm_report_error__21__filename, __Vtask_uvm_report_error__21__line, this->__Vtask_uvm_report_error__21__context_name, (IData)(__Vtask_uvm_report_error__21__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__blks.at(blk) = __Vincrement1;
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.exists(blk)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.erase(blk);
            }
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_reg(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> rg) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_reg\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__26__verbosity;
        __Vfunc_uvm_report_enabled__26__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__26__severity;
        __Vfunc_uvm_report_enabled__26__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__30__verbosity;
        __Vtask_uvm_report_error__30__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__30__line;
        __Vtask_uvm_report_error__30__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__30__report_enabled_checked;
        __Vtask_uvm_report_error__30__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__34__verbosity;
        __Vfunc_uvm_report_enabled__34__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__34__severity;
        __Vfunc_uvm_report_enabled__34__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__40__verbosity;
        __Vtask_uvm_report_error__40__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__40__line;
        __Vtask_uvm_report_error__40__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__40__report_enabled_checked;
        __Vtask_uvm_report_error__40__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__41__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__42__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_4__get_name;
        std::string __VlefCall_3__get_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__is_locked;
        IData/*31:0*/ __Vincrement2;
        __Vincrement2 = 0;
        {
            this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
            if (__VlefCall_0__is_locked) {
                this->__Vfunc_uvm_report_enabled__26__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__26__severity = 2U;
                __Vfunc_uvm_report_enabled__26__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__27__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__27__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__28__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__26__verbosity, (IData)(__Vfunc_uvm_report_enabled__26__severity), this->__Vfunc_uvm_report_enabled__26__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__30__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__30__context_name = ""s;
                    __Vtask_uvm_report_error__30__line = 0x000003e4U;
                    this->__Vtask_uvm_report_error__30__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__30__verbosity = 0U;
                    this->__Vtask_uvm_report_error__30__message = "Cannot add register to locked block model"s;
                    this->__Vtask_uvm_report_error__30__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__31__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__31__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__32__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__30__id, this->__Vtask_uvm_report_error__30__message, __Vtask_uvm_report_error__30__verbosity, this->__Vtask_uvm_report_error__30__filename, __Vtask_uvm_report_error__30__line, this->__Vtask_uvm_report_error__30__context_name, (IData)(__Vtask_uvm_report_error__30__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            if (this->__PVT__regs.exists(rg)) {
                this->__Vfunc_uvm_report_enabled__34__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__34__severity = 2U;
                __Vfunc_uvm_report_enabled__34__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__36__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__34__verbosity, (IData)(__Vfunc_uvm_report_enabled__34__severity), this->__Vfunc_uvm_report_enabled__34__id, __VlefCall_2__uvm_report_enabled);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1002)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    __Vtask_uvm_report_error__40__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__40__context_name = ""s;
                    __Vtask_uvm_report_error__40__line = 0x000003eaU;
                    this->__Vtask_uvm_report_error__40__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__40__verbosity = 0U;
                    this->__Vtask_uvm_report_error__40__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s));
                    this->__Vtask_uvm_report_error__40__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__41__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__41__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__42__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__42__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__40__id, this->__Vtask_uvm_report_error__40__message, __Vtask_uvm_report_error__40__verbosity, this->__Vtask_uvm_report_error__40__filename, __Vtask_uvm_report_error__40__line, this->__Vtask_uvm_report_error__40__context_name, (IData)(__Vtask_uvm_report_error__40__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            __Vincrement2 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__regs.at(rg) = __Vincrement2;
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_vreg(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> vreg) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_vreg\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__45__verbosity;
        __Vfunc_uvm_report_enabled__45__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__45__severity;
        __Vfunc_uvm_report_enabled__45__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__49__verbosity;
        __Vtask_uvm_report_error__49__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__49__line;
        __Vtask_uvm_report_error__49__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__49__report_enabled_checked;
        __Vtask_uvm_report_error__49__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__53__verbosity;
        __Vfunc_uvm_report_enabled__53__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__53__severity;
        __Vfunc_uvm_report_enabled__53__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__54__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__55__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__59__verbosity;
        __Vtask_uvm_report_error__59__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__59__line;
        __Vtask_uvm_report_error__59__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__59__report_enabled_checked;
        __Vtask_uvm_report_error__59__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_4__get_name;
        std::string __VlefCall_3__get_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__is_locked;
        IData/*31:0*/ __Vincrement3;
        __Vincrement3 = 0;
        {
            this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
            if (__VlefCall_0__is_locked) {
                this->__Vfunc_uvm_report_enabled__45__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__45__severity = 2U;
                __Vfunc_uvm_report_enabled__45__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__46__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__46__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__47__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__45__verbosity, (IData)(__Vfunc_uvm_report_enabled__45__severity), this->__Vfunc_uvm_report_enabled__45__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__49__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__49__context_name = ""s;
                    __Vtask_uvm_report_error__49__line = 0x000003f6U;
                    this->__Vtask_uvm_report_error__49__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__49__verbosity = 0U;
                    this->__Vtask_uvm_report_error__49__message = "Cannot add virtual register to locked block model"s;
                    this->__Vtask_uvm_report_error__49__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__50__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__50__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__51__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__49__id, this->__Vtask_uvm_report_error__49__message, __Vtask_uvm_report_error__49__verbosity, this->__Vtask_uvm_report_error__49__filename, __Vtask_uvm_report_error__49__line, this->__Vtask_uvm_report_error__49__context_name, (IData)(__Vtask_uvm_report_error__49__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            if (this->__PVT__vregs.exists(vreg)) {
                this->__Vfunc_uvm_report_enabled__53__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__53__severity = 2U;
                __Vfunc_uvm_report_enabled__53__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__54__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__54__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__55__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__55__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__53__verbosity, (IData)(__Vfunc_uvm_report_enabled__53__severity), this->__Vfunc_uvm_report_enabled__53__id, __VlefCall_2__uvm_report_enabled);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    VL_NULL_CHECK(vreg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1020)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    __Vtask_uvm_report_error__59__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__59__context_name = ""s;
                    __Vtask_uvm_report_error__59__line = 0x000003fcU;
                    this->__Vtask_uvm_report_error__59__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__59__verbosity = 0U;
                    this->__Vtask_uvm_report_error__59__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Virtual register '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s));
                    this->__Vtask_uvm_report_error__59__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__60__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__60__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__61__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__59__id, this->__Vtask_uvm_report_error__59__message, __Vtask_uvm_report_error__59__verbosity, this->__Vtask_uvm_report_error__59__filename, __Vtask_uvm_report_error__59__line, this->__Vtask_uvm_report_error__59__context_name, (IData)(__Vtask_uvm_report_error__59__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            __Vincrement3 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__vregs.at(vreg) = __Vincrement3;
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_mem(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_mem\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__64__verbosity;
        __Vfunc_uvm_report_enabled__64__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__64__severity;
        __Vfunc_uvm_report_enabled__64__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__65__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__66__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__68__verbosity;
        __Vtask_uvm_report_error__68__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__68__line;
        __Vtask_uvm_report_error__68__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__68__report_enabled_checked;
        __Vtask_uvm_report_error__68__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__69__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__70__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__72__verbosity;
        __Vfunc_uvm_report_enabled__72__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__72__severity;
        __Vfunc_uvm_report_enabled__72__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__73__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__74__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__78__verbosity;
        __Vtask_uvm_report_error__78__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__78__line;
        __Vtask_uvm_report_error__78__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__78__report_enabled_checked;
        __Vtask_uvm_report_error__78__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_4__get_name;
        std::string __VlefCall_3__get_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__is_locked;
        IData/*31:0*/ __Vincrement4;
        __Vincrement4 = 0;
        {
            this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
            if (__VlefCall_0__is_locked) {
                this->__Vfunc_uvm_report_enabled__64__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__64__severity = 2U;
                __Vfunc_uvm_report_enabled__64__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__65__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__65__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__66__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__66__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__64__verbosity, (IData)(__Vfunc_uvm_report_enabled__64__severity), this->__Vfunc_uvm_report_enabled__64__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__68__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__68__context_name = ""s;
                    __Vtask_uvm_report_error__68__line = 0x00000407U;
                    this->__Vtask_uvm_report_error__68__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__68__verbosity = 0U;
                    this->__Vtask_uvm_report_error__68__message = "Cannot add memory to locked block model"s;
                    this->__Vtask_uvm_report_error__68__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__69__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__69__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__70__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__70__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__68__id, this->__Vtask_uvm_report_error__68__message, __Vtask_uvm_report_error__68__verbosity, this->__Vtask_uvm_report_error__68__filename, __Vtask_uvm_report_error__68__line, this->__Vtask_uvm_report_error__68__context_name, (IData)(__Vtask_uvm_report_error__68__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            if (this->__PVT__mems.exists(mem)) {
                this->__Vfunc_uvm_report_enabled__72__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__72__severity = 2U;
                __Vfunc_uvm_report_enabled__72__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__73__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__73__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__74__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__74__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__72__verbosity, (IData)(__Vfunc_uvm_report_enabled__72__severity), this->__Vfunc_uvm_report_enabled__72__id, __VlefCall_2__uvm_report_enabled);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1037)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    __Vtask_uvm_report_error__78__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__78__context_name = ""s;
                    __Vtask_uvm_report_error__78__line = 0x0000040dU;
                    this->__Vtask_uvm_report_error__78__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__78__verbosity = 0U;
                    this->__Vtask_uvm_report_error__78__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s));
                    this->__Vtask_uvm_report_error__78__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__79__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__79__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__80__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__78__id, this->__Vtask_uvm_report_error__78__message, __Vtask_uvm_report_error__78__verbosity, this->__Vtask_uvm_report_error__78__filename, __Vtask_uvm_report_error__78__line, this->__Vtask_uvm_report_error__78__context_name, (IData)(__Vtask_uvm_report_error__78__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            __Vincrement4 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__mems.at(mem) = __Vincrement4;
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_parent(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> parent) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_parent\n"); );
        // Body
        if ((VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>{this} 
             != parent)) {
            this->__PVT__parent = parent;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_locked(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_locked__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_locked\n"); );
        // Body
        is_locked__Vfuncrtn = this->__PVT__locked;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_lock_model(VUVM_Register8b__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_lock_model\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_get_max_size__86__Vfuncout;
        __Vfunc_get_max_size__86__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_get_max_size__88__Vfuncout;
        __Vfunc_get_max_size__88__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_get_max_size__90__Vfuncout;
        __Vfunc_get_max_size__90__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__91__verbosity;
        __Vfunc_uvm_report_enabled__91__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__91__severity;
        __Vfunc_uvm_report_enabled__91__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_fatal__95__verbosity;
        __Vtask_uvm_report_fatal__95__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_fatal__95__line;
        __Vtask_uvm_report_fatal__95__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_fatal__95__report_enabled_checked;
        __Vtask_uvm_report_fatal__95__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__96__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__97__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__102__verbosity;
        __Vfunc_uvm_report_enabled__102__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__102__severity;
        __Vfunc_uvm_report_enabled__102__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__103__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__104__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__107__verbosity;
        __Vtask_uvm_report_error__107__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__107__line;
        __Vtask_uvm_report_error__107__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__107__report_enabled_checked;
        __Vtask_uvm_report_error__107__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__108__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__109__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_8__get_name;
        IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
        std::string __VlefCall_6__get_name;
        std::string __VlefCall_5__get_name;
        CData/*0:0*/ __VlefExpr_4;
        IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_2__get_max_size;
        IData/*31:0*/ __VlefCall_1__get_max_size;
        CData/*0:0*/ __VlefCall_0__is_locked;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk594__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk594__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk594__DOT__rg___Vmore;
        unnamedblk594__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk594__DOT__unnamedblk595__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk596__DOT__mem_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk596__DOT__mem___Vnext;
        CData/*0:0*/ unnamedblk596__DOT__mem___Vmore;
        unnamedblk596__DOT__mem___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk596__DOT__unnamedblk597__DOT__mem;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk598__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk598__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk598__DOT__blk___Vmore;
        unnamedblk598__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk598__DOT__unnamedblk599__DOT__blk;
        IData/*31:0*/ unnamedblk600__DOT__max_size;
        IData/*31:0*/ unnamedblk600__DOT__unnamedblk601__DOT__n;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk__Vnext;
        CData/*0:0*/ unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk__Vmore;
        unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk__Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__unnamedblk603__DOT__blk;
        {
            this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
            if (__VlefCall_0__is_locked) {
                goto __Vlabel0;
            }
            this->__PVT__locked = 1U;
            unnamedblk594__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk594__DOT__rg___Vnext));
            while (unnamedblk594__DOT__rg___Vmore) {
                unnamedblk594__DOT__rg_ = unnamedblk594__DOT__rg___Vnext;
                unnamedblk594__DOT__rg___Vmore = (0U 
                                                  != this->__PVT__regs.next(unnamedblk594__DOT__rg___Vnext));
                unnamedblk594__DOT__unnamedblk595__DOT__rg 
                    = unnamedblk594__DOT__rg_;
                VL_NULL_CHECK(unnamedblk594__DOT__unnamedblk595__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1070)
                    ->__VnoInFunc_Xlock_modelX(vlSymsp);
            }
            unnamedblk596__DOT__mem___Vmore = (0U != this->__PVT__mems.first(unnamedblk596__DOT__mem___Vnext));
            while (unnamedblk596__DOT__mem___Vmore) {
                unnamedblk596__DOT__mem_ = unnamedblk596__DOT__mem___Vnext;
                unnamedblk596__DOT__mem___Vmore = (0U 
                                                   != this->__PVT__mems.next(unnamedblk596__DOT__mem___Vnext));
                unnamedblk596__DOT__unnamedblk597__DOT__mem 
                    = unnamedblk596__DOT__mem_;
                VL_NULL_CHECK(unnamedblk596__DOT__unnamedblk597__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1075)
                    ->__VnoInFunc_Xlock_modelX(vlSymsp);
            }
            unnamedblk598__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk598__DOT__blk___Vnext));
            while (unnamedblk598__DOT__blk___Vmore) {
                unnamedblk598__DOT__blk_ = unnamedblk598__DOT__blk___Vnext;
                unnamedblk598__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk598__DOT__blk___Vnext));
                unnamedblk598__DOT__unnamedblk599__DOT__blk 
                    = unnamedblk598__DOT__blk_;
                VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1080)
                    ->__VnoInFunc_lock_model(vlSymsp);
            }
            if ((VlNull{} == this->__PVT__parent)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__86__Vfuncout);
                unnamedblk600__DOT__max_size = __Vfunc_get_max_size__86__Vfuncout;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __VlefCall_1__get_max_size);
                if ((__VlefCall_1__get_max_size > unnamedblk600__DOT__max_size)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__88__Vfuncout);
                    unnamedblk600__DOT__max_size = __Vfunc_get_max_size__88__Vfuncout;
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __VlefCall_2__get_max_size);
                if ((__VlefCall_2__get_max_size > unnamedblk600__DOT__max_size)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__90__Vfuncout);
                    unnamedblk600__DOT__max_size = __Vfunc_get_max_size__90__Vfuncout;
                }
                if (VL_LTS_III(32, 0x00000040U, unnamedblk600__DOT__max_size)) {
                    this->__Vfunc_uvm_report_enabled__91__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__91__severity = 3U;
                    __Vfunc_uvm_report_enabled__91__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__92__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__92__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__93__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__91__verbosity, (IData)(__Vfunc_uvm_report_enabled__91__severity), this->__Vfunc_uvm_report_enabled__91__id, __VlefCall_3__uvm_report_enabled);
                    if ((0U != __VlefCall_3__uvm_report_enabled)) {
                        __Vtask_uvm_report_fatal__95__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_fatal__95__context_name = ""s;
                        __Vtask_uvm_report_fatal__95__line = 0x00000445U;
                        this->__Vtask_uvm_report_fatal__95__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                        __Vtask_uvm_report_fatal__95__verbosity = 0U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_fatal__95__message
                                      ,"Register model requires that UVM_REG_DATA_WIDTH be defined as %0d or greater. Currently defined as 64",1
                                      , '~',32,unnamedblk600__DOT__max_size);
                        this->__Vtask_uvm_report_fatal__95__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__96__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                            = __Vfunc_get__96__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__97__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                            = __Vtask_get_root__97__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                    ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__95__id, this->__Vtask_uvm_report_fatal__95__message, __Vtask_uvm_report_fatal__95__verbosity, this->__Vtask_uvm_report_fatal__95__filename, __Vtask_uvm_report_fatal__95__line, this->__Vtask_uvm_report_fatal__95__context_name, (IData)(__Vtask_uvm_report_fatal__95__report_enabled_checked));
                    }
                }
                {
                    // Inlined CFunc: __VnoInFunc_Xinit_address_mapsX
                    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map_;
                    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map___Vnext;
                    CData/*0:0*/ __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map___Vmore;
                    __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map___Vmore = 0;
                    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__unnamedblk695__DOT__map;
                    __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map___Vmore 
                        = (0U != this->__PVT__maps.first(__Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map___Vnext));
                    while (__Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map___Vmore) {
                        __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map_ 
                            = __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map___Vnext;
                        __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map___Vmore 
                            = (0U != this->__PVT__maps.next(__Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map___Vnext));
                        __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__unnamedblk695__DOT__map 
                            = __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__map_;
                        VL_NULL_CHECK(__Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk694__DOT__unnamedblk695__DOT__map, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1924)
                    ->__VnoInFunc_Xinit_address_mapX(vlSymsp);
                    }
                }
                __VlefExpr_4 = (1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots
                                                .at(
                                                    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>{this}))));
                if (__VlefExpr_4) {
                    unnamedblk600__DOT__unnamedblk601__DOT__n = 0U;
                    unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk__Vmore 
                        = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.first(unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk__Vnext));
                    while (unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk__Vmore) {
                        unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk 
                            = unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk__Vnext;
                        unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk__Vmore 
                            = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.next(unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk__Vnext));
                        unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__unnamedblk603__DOT__blk 
                            = unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT___blk;
                        VL_NULL_CHECK(unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__unnamedblk603__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1107)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
                        if ((__VlefCall_5__get_name 
                             == __VlefCall_6__get_name)) {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots
                    .at(unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__unnamedblk603__DOT__blk) = 1U;
                            unnamedblk600__DOT__unnamedblk601__DOT__n 
                                = ((IData)(1U) + unnamedblk600__DOT__unnamedblk601__DOT__n);
                        }
                    }
                    if (VL_LTS_III(32, 1U, unnamedblk600__DOT__unnamedblk601__DOT__n)) {
                        this->__Vfunc_uvm_report_enabled__102__id = "UVM/REG/DUPLROOT"s;
                        __Vfunc_uvm_report_enabled__102__severity = 2U;
                        __Vfunc_uvm_report_enabled__102__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__103__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__103__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__104__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__104__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__102__verbosity, (IData)(__Vfunc_uvm_report_enabled__102__severity), this->__Vfunc_uvm_report_enabled__102__id, __VlefCall_7__uvm_report_enabled);
                        if ((0U != __VlefCall_7__uvm_report_enabled)) {
                            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                            __Vtask_uvm_report_error__107__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__107__context_name = ""s;
                            __Vtask_uvm_report_error__107__line = 0x0000045cU;
                            this->__Vtask_uvm_report_error__107__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                            __Vtask_uvm_report_error__107__verbosity = 0U;
                            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__107__message
                                          ,"There are %0d root register models named \"%s\". The names of the root register models have to be unique",2
                                          , '~',32,unnamedblk600__DOT__unnamedblk601__DOT__n
                                          , 'S',&(__VlefCall_8__get_name));
                            this->__Vtask_uvm_report_error__107__id = "UVM/REG/DUPLROOT"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__108__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__108__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__109__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__109__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__107__id, this->__Vtask_uvm_report_error__107__message, __Vtask_uvm_report_error__107__verbosity, this->__Vtask_uvm_report_error__107__filename, __Vtask_uvm_report_error__107__line, this->__Vtask_uvm_report_error__107__context_name, (IData)(__Vtask_uvm_report_error__107__report_enabled_checked));
                        }
                    }
                }
            }
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_name\n"); );
        // Body
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_1__get_name;
        std::string __VlefCall_0__get_full_name;
        {
            get_full_name__Vfuncrtn = ""s;
            if ((VlNull{} == this->__PVT__parent)) {
                this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1133)
                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_fields(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_fields\n"); );
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk604__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk604__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk604__DOT__rg___Vmore;
        unnamedblk604__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk604__DOT__unnamedblk605__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk606__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk606__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk606__DOT__blk___Vmore;
        unnamedblk606__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk606__DOT__unnamedblk607__DOT__blk;
        unnamedblk604__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk604__DOT__rg___Vnext));
        while (unnamedblk604__DOT__rg___Vmore) {
            unnamedblk604__DOT__rg_ = unnamedblk604__DOT__rg___Vnext;
            unnamedblk604__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk604__DOT__rg___Vnext));
            unnamedblk604__DOT__unnamedblk605__DOT__rg 
                = unnamedblk604__DOT__rg_;
            VL_NULL_CHECK(unnamedblk604__DOT__unnamedblk605__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1145)
                    ->__VnoInFunc_get_fields(vlSymsp, fields);
        }
        if ((1U == hier)) {
            unnamedblk606__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk606__DOT__blk___Vnext));
            while (unnamedblk606__DOT__blk___Vmore) {
                unnamedblk606__DOT__blk_ = unnamedblk606__DOT__blk___Vnext;
                unnamedblk606__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk606__DOT__blk___Vnext));
                unnamedblk606__DOT__unnamedblk607__DOT__blk 
                    = unnamedblk606__DOT__blk_;
                VL_NULL_CHECK(unnamedblk606__DOT__unnamedblk607__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1152)
                    ->__VnoInFunc_get_fields(vlSymsp, fields, 1U);
            }
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_fields(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_fields\n"); );
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk608__DOT__vreg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk608__DOT__vreg___Vnext;
        CData/*0:0*/ unnamedblk608__DOT__vreg___Vmore;
        unnamedblk608__DOT__vreg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk608__DOT__unnamedblk609__DOT__vreg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk610__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk610__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk610__DOT__blk___Vmore;
        unnamedblk610__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk610__DOT__unnamedblk611__DOT__blk;
        unnamedblk608__DOT__vreg___Vmore = (0U != this->__PVT__vregs.first(unnamedblk608__DOT__vreg___Vnext));
        while (unnamedblk608__DOT__vreg___Vmore) {
            unnamedblk608__DOT__vreg_ = unnamedblk608__DOT__vreg___Vnext;
            unnamedblk608__DOT__vreg___Vmore = (0U 
                                                != this->__PVT__vregs.next(unnamedblk608__DOT__vreg___Vnext));
            unnamedblk608__DOT__unnamedblk609__DOT__vreg 
                = unnamedblk608__DOT__vreg_;
            VL_NULL_CHECK(unnamedblk608__DOT__unnamedblk609__DOT__vreg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1165)
                    ->__VnoInFunc_get_fields(vlSymsp, fields);
        }
        if ((1U == hier)) {
            unnamedblk610__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk610__DOT__blk___Vnext));
            while (unnamedblk610__DOT__blk___Vmore) {
                unnamedblk610__DOT__blk_ = unnamedblk610__DOT__blk___Vnext;
                unnamedblk610__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk610__DOT__blk___Vnext));
                unnamedblk610__DOT__unnamedblk611__DOT__blk 
                    = unnamedblk610__DOT__blk_;
                VL_NULL_CHECK(unnamedblk610__DOT__unnamedblk611__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1171)
                    ->__VnoInFunc_get_virtual_fields(vlSymsp, fields, 1U);
            }
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_registers(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_registers\n"); );
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk612__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk612__DOT__rg__Vnext;
        CData/*0:0*/ unnamedblk612__DOT__rg__Vmore;
        unnamedblk612__DOT__rg__Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk613__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk613__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk613__DOT__blk___Vmore;
        unnamedblk613__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk613__DOT__unnamedblk614__DOT__blk;
        unnamedblk612__DOT__rg__Vmore = (0U != this->__PVT__regs.first(unnamedblk612__DOT__rg__Vnext));
        while (unnamedblk612__DOT__rg__Vmore) {
            unnamedblk612__DOT__rg = unnamedblk612__DOT__rg__Vnext;
            unnamedblk612__DOT__rg__Vmore = (0U != this->__PVT__regs.next(unnamedblk612__DOT__rg__Vnext));
            regs.push_back(unnamedblk612__DOT__rg);
        }
        if ((1U == hier)) {
            unnamedblk613__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk613__DOT__blk___Vnext));
            while (unnamedblk613__DOT__blk___Vmore) {
                unnamedblk613__DOT__blk_ = unnamedblk613__DOT__blk___Vnext;
                unnamedblk613__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk613__DOT__blk___Vnext));
                unnamedblk613__DOT__unnamedblk614__DOT__blk 
                    = unnamedblk613__DOT__blk_;
                VL_NULL_CHECK(unnamedblk613__DOT__unnamedblk614__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1186)
                    ->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
            }
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_registers(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_registers\n"); );
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk615__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk615__DOT__rg__Vnext;
        CData/*0:0*/ unnamedblk615__DOT__rg__Vmore;
        unnamedblk615__DOT__rg__Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk616__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk616__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk616__DOT__blk___Vmore;
        unnamedblk616__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk616__DOT__unnamedblk617__DOT__blk;
        unnamedblk615__DOT__rg__Vmore = (0U != this->__PVT__vregs.first(unnamedblk615__DOT__rg__Vnext));
        while (unnamedblk615__DOT__rg__Vmore) {
            unnamedblk615__DOT__rg = unnamedblk615__DOT__rg__Vnext;
            unnamedblk615__DOT__rg__Vmore = (0U != this->__PVT__vregs.next(unnamedblk615__DOT__rg__Vnext));
            regs.push_back(unnamedblk615__DOT__rg);
        }
        if ((1U == hier)) {
            unnamedblk616__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk616__DOT__blk___Vnext));
            while (unnamedblk616__DOT__blk___Vmore) {
                unnamedblk616__DOT__blk_ = unnamedblk616__DOT__blk___Vnext;
                unnamedblk616__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk616__DOT__blk___Vnext));
                unnamedblk616__DOT__unnamedblk617__DOT__blk 
                    = unnamedblk616__DOT__blk_;
                VL_NULL_CHECK(unnamedblk616__DOT__unnamedblk617__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1202)
                    ->__VnoInFunc_get_virtual_registers(vlSymsp, regs, 1U);
            }
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_memories(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_memories\n"); );
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk618__DOT__mem_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk618__DOT__mem___Vnext;
        CData/*0:0*/ unnamedblk618__DOT__mem___Vmore;
        unnamedblk618__DOT__mem___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk618__DOT__unnamedblk619__DOT__mem;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk620__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk620__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk620__DOT__blk___Vmore;
        unnamedblk620__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk620__DOT__unnamedblk621__DOT__blk;
        unnamedblk618__DOT__mem___Vmore = (0U != this->__PVT__mems.first(unnamedblk618__DOT__mem___Vnext));
        while (unnamedblk618__DOT__mem___Vmore) {
            unnamedblk618__DOT__mem_ = unnamedblk618__DOT__mem___Vnext;
            unnamedblk618__DOT__mem___Vmore = (0U != this->__PVT__mems.next(unnamedblk618__DOT__mem___Vnext));
            unnamedblk618__DOT__unnamedblk619__DOT__mem 
                = unnamedblk618__DOT__mem_;
            mems.push_back(unnamedblk618__DOT__unnamedblk619__DOT__mem);
        }
        if ((1U == hier)) {
            unnamedblk620__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk620__DOT__blk___Vnext));
            while (unnamedblk620__DOT__blk___Vmore) {
                unnamedblk620__DOT__blk_ = unnamedblk620__DOT__blk___Vnext;
                unnamedblk620__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk620__DOT__blk___Vnext));
                unnamedblk620__DOT__unnamedblk621__DOT__blk 
                    = unnamedblk620__DOT__blk_;
                VL_NULL_CHECK(unnamedblk620__DOT__unnamedblk621__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1220)
                    ->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
            }
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_blocks(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>> &blks, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_blocks\n"); );
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk622__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk622__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk622__DOT__blk___Vmore;
        unnamedblk622__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk622__DOT__unnamedblk623__DOT__blk;
        unnamedblk622__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk622__DOT__blk___Vnext));
        while (unnamedblk622__DOT__blk___Vmore) {
            unnamedblk622__DOT__blk_ = unnamedblk622__DOT__blk___Vnext;
            unnamedblk622__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk622__DOT__blk___Vnext));
            unnamedblk622__DOT__unnamedblk623__DOT__blk 
                = unnamedblk622__DOT__blk_;
            blks.push_back(unnamedblk622__DOT__unnamedblk623__DOT__blk);
            if ((1U == hier)) {
                VL_NULL_CHECK(unnamedblk622__DOT__unnamedblk623__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1235)
                    ->__VnoInFunc_get_blocks(vlSymsp, blks, 1U);
            }
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_maps(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>> &maps) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_maps\n"); );
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk627__DOT__map;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk627__DOT__map__Vnext;
        CData/*0:0*/ unnamedblk627__DOT__map__Vmore;
        unnamedblk627__DOT__map__Vmore = 0;
        unnamedblk627__DOT__map__Vmore = (0U != this->__PVT__maps.first(unnamedblk627__DOT__map__Vnext));
        while (unnamedblk627__DOT__map__Vmore) {
            unnamedblk627__DOT__map = unnamedblk627__DOT__map__Vnext;
            unnamedblk627__DOT__map__Vmore = (0U != this->__PVT__maps.next(unnamedblk627__DOT__map__Vnext));
            maps.push_back(unnamedblk627__DOT__map);
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_parent(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_parent\n"); );
        // Body
        get_parent__Vfuncrtn = this->__PVT__parent;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_block_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> &get_block_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_block_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__126__verbosity;
        __Vfunc_uvm_report_enabled__126__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__126__severity;
        __Vfunc_uvm_report_enabled__126__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__127__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__128__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__131__verbosity;
        __Vtask_uvm_report_warning__131__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__131__line;
        __Vtask_uvm_report_warning__131__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__131__report_enabled_checked;
        __Vtask_uvm_report_warning__131__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__132__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__133__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_4__get_full_name;
        IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
        std::string __VlefCall_2__get_name;
        std::string __VlefCall_1__get_name;
        std::string __VlefCall_0__get_name;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk628__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk628__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk628__DOT__blk___Vmore;
        unnamedblk628__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk628__DOT__unnamedblk629__DOT__blk;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk630__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk630__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk630__DOT__blk___Vmore;
        unnamedblk630__DOT__blk___Vmore = 0;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>> unnamedblk630__DOT__unnamedblk631__DOT__subblks;
        IData/*31:0*/ unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j;
        unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j = 0;
        IData/*31:0*/ unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j__Vloopsize;
        unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j__Vloopsize = 0;
        {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_block_by_name__Vfuncrtn = VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>{this};
                goto __Vlabel0;
            }
            unnamedblk628__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk628__DOT__blk___Vnext));
            while (unnamedblk628__DOT__blk___Vmore) {
                unnamedblk628__DOT__blk_ = unnamedblk628__DOT__blk___Vnext;
                unnamedblk628__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk628__DOT__blk___Vnext));
                unnamedblk628__DOT__unnamedblk629__DOT__blk 
                    = unnamedblk628__DOT__blk_;
                VL_NULL_CHECK(unnamedblk628__DOT__unnamedblk629__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1328)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((__VlefCall_1__get_name == name)) {
                    get_block_by_name__Vfuncrtn = unnamedblk628__DOT__unnamedblk629__DOT__blk;
                    goto __Vlabel0;
                }
            }
            unnamedblk630__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk630__DOT__blk___Vnext));
            while (unnamedblk630__DOT__blk___Vmore) {
                unnamedblk630__DOT__blk_ = unnamedblk630__DOT__blk___Vnext;
                unnamedblk630__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk630__DOT__blk___Vnext));
                unnamedblk630__DOT__unnamedblk631__DOT__subblks.clear();
                VL_NULL_CHECK(unnamedblk630__DOT__blk_, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1335)
                    ->__VnoInFunc_get_blocks(vlSymsp, unnamedblk630__DOT__unnamedblk631__DOT__subblks, 1U);
                unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j, unnamedblk630__DOT__unnamedblk631__DOT__subblks.size())) {
                    unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j__Vloopsize 
                        = unnamedblk630__DOT__unnamedblk631__DOT__subblks.size();
                    VL_NULL_CHECK(unnamedblk630__DOT__unnamedblk631__DOT__subblks.at(unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1338)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    if ((__VlefCall_2__get_name == name)) {
                        get_block_by_name__Vfuncrtn 
                            = unnamedblk630__DOT__unnamedblk631__DOT__subblks.at(unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j);
                        goto __Vlabel0;
                    }
                    if ((unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j__Vloopsize 
                         <= unnamedblk630__DOT__unnamedblk631__DOT__subblks.size())) {
                        unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j 
                            = ((IData)(1U) + unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j);
                    }
                }
            }
            this->__Vfunc_uvm_report_enabled__126__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__126__severity = 1U;
            __Vfunc_uvm_report_enabled__126__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__127__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__127__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__128__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__128__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__126__verbosity, (IData)(__Vfunc_uvm_report_enabled__126__severity), this->__Vfunc_uvm_report_enabled__126__id, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_warning__131__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__131__context_name = ""s;
                __Vtask_uvm_report_warning__131__line = 0x0000053fU;
                this->__Vtask_uvm_report_warning__131__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__131__verbosity = 0U;
                this->__Vtask_uvm_report_warning__131__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate block '"s, name), "' in block '"s), __VlefCall_4__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__131__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__132__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__132__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__133__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__133__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__131__id, this->__Vtask_uvm_report_warning__131__message, __Vtask_uvm_report_warning__131__verbosity, this->__Vtask_uvm_report_warning__131__filename, __Vtask_uvm_report_warning__131__line, this->__Vtask_uvm_report_warning__131__context_name, (IData)(__Vtask_uvm_report_warning__131__report_enabled_checked));
            }
            get_block_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_reg_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> &get_reg_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_reg_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__138__verbosity;
        __Vfunc_uvm_report_enabled__138__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__138__severity;
        __Vfunc_uvm_report_enabled__138__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__139__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__140__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__143__verbosity;
        __Vtask_uvm_report_warning__143__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__143__line;
        __Vtask_uvm_report_warning__143__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__143__report_enabled_checked;
        __Vtask_uvm_report_warning__143__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__144__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__145__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_3__get_full_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        std::string __VlefCall_1__get_name;
        std::string __VlefCall_0__get_name;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk633__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk633__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk633__DOT__rg___Vmore;
        unnamedblk633__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk633__DOT__unnamedblk634__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk635__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk635__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk635__DOT__blk___Vmore;
        unnamedblk635__DOT__blk___Vmore = 0;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg>> unnamedblk635__DOT__unnamedblk636__DOT__subregs;
        IData/*31:0*/ unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j;
        unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j = 0;
        IData/*31:0*/ unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j__Vloopsize;
        unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j__Vloopsize = 0;
        {
            unnamedblk633__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk633__DOT__rg___Vnext));
            while (unnamedblk633__DOT__rg___Vmore) {
                unnamedblk633__DOT__rg_ = unnamedblk633__DOT__rg___Vnext;
                unnamedblk633__DOT__rg___Vmore = (0U 
                                                  != this->__PVT__regs.next(unnamedblk633__DOT__rg___Vnext));
                unnamedblk633__DOT__unnamedblk634__DOT__rg 
                    = unnamedblk633__DOT__rg_;
                VL_NULL_CHECK(unnamedblk633__DOT__unnamedblk634__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1355)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                if ((__VlefCall_0__get_name == name)) {
                    get_reg_by_name__Vfuncrtn = unnamedblk633__DOT__unnamedblk634__DOT__rg;
                    goto __Vlabel0;
                }
            }
            unnamedblk635__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk635__DOT__blk___Vnext));
            while (unnamedblk635__DOT__blk___Vmore) {
                unnamedblk635__DOT__blk_ = unnamedblk635__DOT__blk___Vnext;
                unnamedblk635__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk635__DOT__blk___Vnext));
                unnamedblk635__DOT__unnamedblk636__DOT__subregs.clear();
                VL_NULL_CHECK(unnamedblk635__DOT__blk_, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1362)
                    ->__VnoInFunc_get_registers(vlSymsp, unnamedblk635__DOT__unnamedblk636__DOT__subregs, 1U);
                unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j, unnamedblk635__DOT__unnamedblk636__DOT__subregs.size())) {
                    unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j__Vloopsize 
                        = unnamedblk635__DOT__unnamedblk636__DOT__subregs.size();
                    VL_NULL_CHECK(unnamedblk635__DOT__unnamedblk636__DOT__subregs.at(unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1365)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    if ((__VlefCall_1__get_name == name)) {
                        get_reg_by_name__Vfuncrtn = unnamedblk635__DOT__unnamedblk636__DOT__subregs.at(unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j);
                        goto __Vlabel0;
                    }
                    if ((unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j__Vloopsize 
                         <= unnamedblk635__DOT__unnamedblk636__DOT__subregs.size())) {
                        unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j 
                            = ((IData)(1U) + unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j);
                    }
                }
            }
            this->__Vfunc_uvm_report_enabled__138__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__138__severity = 1U;
            __Vfunc_uvm_report_enabled__138__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__139__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__139__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__140__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__140__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__138__verbosity, (IData)(__Vfunc_uvm_report_enabled__138__severity), this->__Vfunc_uvm_report_enabled__138__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_warning__143__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__143__context_name = ""s;
                __Vtask_uvm_report_warning__143__line = 0x0000055aU;
                this->__Vtask_uvm_report_warning__143__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__143__verbosity = 0U;
                this->__Vtask_uvm_report_warning__143__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate register '"s, name), "' in block '"s), __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__143__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__144__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__144__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__145__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__145__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__143__id, this->__Vtask_uvm_report_warning__143__message, __Vtask_uvm_report_warning__143__verbosity, this->__Vtask_uvm_report_warning__143__filename, __Vtask_uvm_report_warning__143__line, this->__Vtask_uvm_report_warning__143__context_name, (IData)(__Vtask_uvm_report_warning__143__report_enabled_checked));
            }
            get_reg_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vreg_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vreg_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__150__verbosity;
        __Vfunc_uvm_report_enabled__150__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__150__severity;
        __Vfunc_uvm_report_enabled__150__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__151__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__152__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__155__verbosity;
        __Vtask_uvm_report_warning__155__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__155__line;
        __Vtask_uvm_report_warning__155__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__155__report_enabled_checked;
        __Vtask_uvm_report_warning__155__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__156__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__157__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_3__get_full_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        std::string __VlefCall_1__get_name;
        std::string __VlefCall_0__get_name;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk638__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk638__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk638__DOT__rg___Vmore;
        unnamedblk638__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk638__DOT__unnamedblk639__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk640__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk640__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk640__DOT__blk___Vmore;
        unnamedblk640__DOT__blk___Vmore = 0;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg>> unnamedblk640__DOT__unnamedblk641__DOT__subvregs;
        IData/*31:0*/ unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j;
        unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j = 0;
        IData/*31:0*/ unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j__Vloopsize;
        unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j__Vloopsize = 0;
        {
            unnamedblk638__DOT__rg___Vmore = (0U != this->__PVT__vregs.first(unnamedblk638__DOT__rg___Vnext));
            while (unnamedblk638__DOT__rg___Vmore) {
                unnamedblk638__DOT__rg_ = unnamedblk638__DOT__rg___Vnext;
                unnamedblk638__DOT__rg___Vmore = (0U 
                                                  != this->__PVT__vregs.next(unnamedblk638__DOT__rg___Vnext));
                unnamedblk638__DOT__unnamedblk639__DOT__rg 
                    = unnamedblk638__DOT__rg_;
                VL_NULL_CHECK(unnamedblk638__DOT__unnamedblk639__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1382)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                if ((__VlefCall_0__get_name == name)) {
                    get_vreg_by_name__Vfuncrtn = unnamedblk638__DOT__unnamedblk639__DOT__rg;
                    goto __Vlabel0;
                }
            }
            unnamedblk640__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk640__DOT__blk___Vnext));
            while (unnamedblk640__DOT__blk___Vmore) {
                unnamedblk640__DOT__blk_ = unnamedblk640__DOT__blk___Vnext;
                unnamedblk640__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk640__DOT__blk___Vnext));
                unnamedblk640__DOT__unnamedblk641__DOT__subvregs.clear();
                VL_NULL_CHECK(unnamedblk640__DOT__blk_, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1389)
                    ->__VnoInFunc_get_virtual_registers(vlSymsp, unnamedblk640__DOT__unnamedblk641__DOT__subvregs, 1U);
                unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j, unnamedblk640__DOT__unnamedblk641__DOT__subvregs.size())) {
                    unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j__Vloopsize 
                        = unnamedblk640__DOT__unnamedblk641__DOT__subvregs.size();
                    VL_NULL_CHECK(unnamedblk640__DOT__unnamedblk641__DOT__subvregs.at(unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1392)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    if ((__VlefCall_1__get_name == name)) {
                        get_vreg_by_name__Vfuncrtn 
                            = unnamedblk640__DOT__unnamedblk641__DOT__subvregs.at(unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j);
                        goto __Vlabel0;
                    }
                    if ((unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j__Vloopsize 
                         <= unnamedblk640__DOT__unnamedblk641__DOT__subvregs.size())) {
                        unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j 
                            = ((IData)(1U) + unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j);
                    }
                }
            }
            this->__Vfunc_uvm_report_enabled__150__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__150__severity = 1U;
            __Vfunc_uvm_report_enabled__150__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__151__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__151__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__152__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__152__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__150__verbosity, (IData)(__Vfunc_uvm_report_enabled__150__severity), this->__Vfunc_uvm_report_enabled__150__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_warning__155__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__155__context_name = ""s;
                __Vtask_uvm_report_warning__155__line = 0x00000575U;
                this->__Vtask_uvm_report_warning__155__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__155__verbosity = 0U;
                this->__Vtask_uvm_report_warning__155__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate virtual register '"s, name), "' in block '"s), __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__155__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__156__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__156__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__157__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__157__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__155__id, this->__Vtask_uvm_report_warning__155__message, __Vtask_uvm_report_warning__155__verbosity, this->__Vtask_uvm_report_warning__155__filename, __Vtask_uvm_report_warning__155__line, this->__Vtask_uvm_report_warning__155__context_name, (IData)(__Vtask_uvm_report_warning__155__report_enabled_checked));
            }
            get_vreg_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_mem_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> &get_mem_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_mem_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__162__verbosity;
        __Vfunc_uvm_report_enabled__162__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__162__severity;
        __Vfunc_uvm_report_enabled__162__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__163__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__164__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__167__verbosity;
        __Vtask_uvm_report_warning__167__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__167__line;
        __Vtask_uvm_report_warning__167__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__167__report_enabled_checked;
        __Vtask_uvm_report_warning__167__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__168__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__169__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_3__get_full_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        std::string __VlefCall_1__get_name;
        std::string __VlefCall_0__get_name;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk643__DOT__mem_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk643__DOT__mem___Vnext;
        CData/*0:0*/ unnamedblk643__DOT__mem___Vmore;
        unnamedblk643__DOT__mem___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk643__DOT__unnamedblk644__DOT__mem;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk645__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk645__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk645__DOT__blk___Vmore;
        unnamedblk645__DOT__blk___Vmore = 0;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem>> unnamedblk645__DOT__unnamedblk646__DOT__submems;
        IData/*31:0*/ unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j;
        unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j = 0;
        IData/*31:0*/ unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j__Vloopsize;
        unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j__Vloopsize = 0;
        {
            unnamedblk643__DOT__mem___Vmore = (0U != this->__PVT__mems.first(unnamedblk643__DOT__mem___Vnext));
            while (unnamedblk643__DOT__mem___Vmore) {
                unnamedblk643__DOT__mem_ = unnamedblk643__DOT__mem___Vnext;
                unnamedblk643__DOT__mem___Vmore = (0U 
                                                   != this->__PVT__mems.next(unnamedblk643__DOT__mem___Vnext));
                unnamedblk643__DOT__unnamedblk644__DOT__mem 
                    = unnamedblk643__DOT__mem_;
                VL_NULL_CHECK(unnamedblk643__DOT__unnamedblk644__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1409)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                if ((__VlefCall_0__get_name == name)) {
                    get_mem_by_name__Vfuncrtn = unnamedblk643__DOT__unnamedblk644__DOT__mem;
                    goto __Vlabel0;
                }
            }
            unnamedblk645__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk645__DOT__blk___Vnext));
            while (unnamedblk645__DOT__blk___Vmore) {
                unnamedblk645__DOT__blk_ = unnamedblk645__DOT__blk___Vnext;
                unnamedblk645__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk645__DOT__blk___Vnext));
                unnamedblk645__DOT__unnamedblk646__DOT__submems.clear();
                VL_NULL_CHECK(unnamedblk645__DOT__blk_, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1416)
                    ->__VnoInFunc_get_memories(vlSymsp, unnamedblk645__DOT__unnamedblk646__DOT__submems, 1U);
                unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j, unnamedblk645__DOT__unnamedblk646__DOT__submems.size())) {
                    unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j__Vloopsize 
                        = unnamedblk645__DOT__unnamedblk646__DOT__submems.size();
                    VL_NULL_CHECK(unnamedblk645__DOT__unnamedblk646__DOT__submems.at(unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1419)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    if ((__VlefCall_1__get_name == name)) {
                        get_mem_by_name__Vfuncrtn = unnamedblk645__DOT__unnamedblk646__DOT__submems.at(unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j);
                        goto __Vlabel0;
                    }
                    if ((unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j__Vloopsize 
                         <= unnamedblk645__DOT__unnamedblk646__DOT__submems.size())) {
                        unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j 
                            = ((IData)(1U) + unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j);
                    }
                }
            }
            this->__Vfunc_uvm_report_enabled__162__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__162__severity = 1U;
            __Vfunc_uvm_report_enabled__162__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__163__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__163__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__164__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__164__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__162__verbosity, (IData)(__Vfunc_uvm_report_enabled__162__severity), this->__Vfunc_uvm_report_enabled__162__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_warning__167__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__167__context_name = ""s;
                __Vtask_uvm_report_warning__167__line = 0x00000590U;
                this->__Vtask_uvm_report_warning__167__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__167__verbosity = 0U;
                this->__Vtask_uvm_report_warning__167__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate memory '"s, name), "' in block '"s), __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__167__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__168__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__168__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__169__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__169__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__167__id, this->__Vtask_uvm_report_warning__167__message, __Vtask_uvm_report_warning__167__verbosity, this->__Vtask_uvm_report_warning__167__filename, __Vtask_uvm_report_warning__167__line, this->__Vtask_uvm_report_warning__167__context_name, (IData)(__Vtask_uvm_report_warning__167__report_enabled_checked));
            }
            get_mem_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_field_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_field_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__176__verbosity;
        __Vfunc_uvm_report_enabled__176__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__176__severity;
        __Vfunc_uvm_report_enabled__176__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__177__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__178__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__181__verbosity;
        __Vtask_uvm_report_warning__181__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__181__line;
        __Vtask_uvm_report_warning__181__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__181__report_enabled_checked;
        __Vtask_uvm_report_warning__181__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__182__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__183__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_3__get_full_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        std::string __VlefCall_1__get_name;
        std::string __VlefCall_0__get_name;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk648__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk648__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk648__DOT__rg___Vmore;
        unnamedblk648__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk648__DOT__unnamedblk649__DOT__rg;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_field>> unnamedblk648__DOT__unnamedblk649__DOT__fields;
        IData/*31:0*/ unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i;
        unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i = 0;
        IData/*31:0*/ unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i__Vloopsize;
        unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i__Vloopsize = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk651__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk651__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk651__DOT__blk___Vmore;
        unnamedblk651__DOT__blk___Vmore = 0;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg>> unnamedblk651__DOT__unnamedblk652__DOT__subregs;
        IData/*31:0*/ unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j;
        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j = 0;
        IData/*31:0*/ unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j__Vloopsize;
        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j__Vloopsize = 0;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_field>> unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields;
        IData/*31:0*/ unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i;
        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i = 0;
        IData/*31:0*/ unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i__Vloopsize;
        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i__Vloopsize = 0;
        {
            unnamedblk648__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk648__DOT__rg___Vnext));
            while (unnamedblk648__DOT__rg___Vmore) {
                unnamedblk648__DOT__rg_ = unnamedblk648__DOT__rg___Vnext;
                unnamedblk648__DOT__rg___Vmore = (0U 
                                                  != this->__PVT__regs.next(unnamedblk648__DOT__rg___Vnext));
                unnamedblk648__DOT__unnamedblk649__DOT__rg 
                    = unnamedblk648__DOT__rg_;
                unnamedblk648__DOT__unnamedblk649__DOT__fields.clear();
                VL_NULL_CHECK(unnamedblk648__DOT__unnamedblk649__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1438)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk648__DOT__unnamedblk649__DOT__fields);
                unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i, unnamedblk648__DOT__unnamedblk649__DOT__fields.size())) {
                    unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i__Vloopsize 
                        = unnamedblk648__DOT__unnamedblk649__DOT__fields.size();
                    VL_NULL_CHECK(unnamedblk648__DOT__unnamedblk649__DOT__fields.at(unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1440)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                    if ((__VlefCall_0__get_name == name)) {
                        get_field_by_name__Vfuncrtn 
                            = unnamedblk648__DOT__unnamedblk649__DOT__fields.at(unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i);
                        goto __Vlabel0;
                    }
                    if ((unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i__Vloopsize 
                         <= unnamedblk648__DOT__unnamedblk649__DOT__fields.size())) {
                        unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i 
                            = ((IData)(1U) + unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i);
                    }
                }
            }
            unnamedblk651__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk651__DOT__blk___Vnext));
            while (unnamedblk651__DOT__blk___Vmore) {
                unnamedblk651__DOT__blk_ = unnamedblk651__DOT__blk___Vnext;
                unnamedblk651__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk651__DOT__blk___Vnext));
                unnamedblk651__DOT__unnamedblk652__DOT__subregs.clear();
                VL_NULL_CHECK(unnamedblk651__DOT__blk_, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1447)
                    ->__VnoInFunc_get_registers(vlSymsp, unnamedblk651__DOT__unnamedblk652__DOT__subregs, 1U);
                unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j, unnamedblk651__DOT__unnamedblk652__DOT__subregs.size())) {
                    unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j__Vloopsize 
                        = unnamedblk651__DOT__unnamedblk652__DOT__subregs.size();
                    unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.clear();
                    VL_NULL_CHECK(unnamedblk651__DOT__unnamedblk652__DOT__subregs.at(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1451)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields);
                    unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.size())) {
                        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i__Vloopsize 
                            = unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.size();
                        VL_NULL_CHECK(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.at(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1453)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                        if ((__VlefCall_1__get_name 
                             == name)) {
                            get_field_by_name__Vfuncrtn 
                                = unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.at(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i);
                            goto __Vlabel0;
                        }
                        if ((unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i__Vloopsize 
                             <= unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.size())) {
                            unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i 
                                = ((IData)(1U) + unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i);
                        }
                    }
                    if ((unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j__Vloopsize 
                         <= unnamedblk651__DOT__unnamedblk652__DOT__subregs.size())) {
                        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j 
                            = ((IData)(1U) + unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j);
                    }
                }
            }
            this->__Vfunc_uvm_report_enabled__176__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__176__severity = 1U;
            __Vfunc_uvm_report_enabled__176__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__177__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__177__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__178__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__178__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__176__verbosity, (IData)(__Vfunc_uvm_report_enabled__176__severity), this->__Vfunc_uvm_report_enabled__176__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_warning__181__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__181__context_name = ""s;
                __Vtask_uvm_report_warning__181__line = 0x000005b3U;
                this->__Vtask_uvm_report_warning__181__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__181__verbosity = 0U;
                this->__Vtask_uvm_report_warning__181__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate field '"s, name), "' in block '"s), __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__181__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__182__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__182__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__183__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__183__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__181__id, this->__Vtask_uvm_report_warning__181__message, __Vtask_uvm_report_warning__181__verbosity, this->__Vtask_uvm_report_warning__181__filename, __Vtask_uvm_report_warning__181__line, this->__Vtask_uvm_report_warning__181__context_name, (IData)(__Vtask_uvm_report_warning__181__report_enabled_checked));
            }
            get_field_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vfield_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vfield_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__190__verbosity;
        __Vfunc_uvm_report_enabled__190__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__190__severity;
        __Vfunc_uvm_report_enabled__190__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__191__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__192__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__195__verbosity;
        __Vtask_uvm_report_warning__195__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__195__line;
        __Vtask_uvm_report_warning__195__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__195__report_enabled_checked;
        __Vtask_uvm_report_warning__195__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__196__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__197__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_3__get_full_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        std::string __VlefCall_1__get_name;
        std::string __VlefCall_0__get_name;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk656__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk656__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk656__DOT__rg___Vmore;
        unnamedblk656__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk656__DOT__unnamedblk657__DOT__rg;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>> unnamedblk656__DOT__unnamedblk657__DOT__fields;
        IData/*31:0*/ unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i;
        unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i = 0;
        IData/*31:0*/ unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i__Vloopsize;
        unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i__Vloopsize = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk659__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk659__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk659__DOT__blk___Vmore;
        unnamedblk659__DOT__blk___Vmore = 0;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg>> unnamedblk659__DOT__unnamedblk660__DOT__subvregs;
        IData/*31:0*/ unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j;
        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j = 0;
        IData/*31:0*/ unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j__Vloopsize;
        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j__Vloopsize = 0;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>> unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields;
        IData/*31:0*/ unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i;
        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i = 0;
        IData/*31:0*/ unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i__Vloopsize;
        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i__Vloopsize = 0;
        {
            unnamedblk656__DOT__rg___Vmore = (0U != this->__PVT__vregs.first(unnamedblk656__DOT__rg___Vnext));
            while (unnamedblk656__DOT__rg___Vmore) {
                unnamedblk656__DOT__rg_ = unnamedblk656__DOT__rg___Vnext;
                unnamedblk656__DOT__rg___Vmore = (0U 
                                                  != this->__PVT__vregs.next(unnamedblk656__DOT__rg___Vnext));
                unnamedblk656__DOT__unnamedblk657__DOT__rg 
                    = unnamedblk656__DOT__rg_;
                unnamedblk656__DOT__unnamedblk657__DOT__fields.clear();
                VL_NULL_CHECK(unnamedblk656__DOT__unnamedblk657__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1474)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk656__DOT__unnamedblk657__DOT__fields);
                unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i, unnamedblk656__DOT__unnamedblk657__DOT__fields.size())) {
                    unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i__Vloopsize 
                        = unnamedblk656__DOT__unnamedblk657__DOT__fields.size();
                    VL_NULL_CHECK(unnamedblk656__DOT__unnamedblk657__DOT__fields.at(unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1476)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                    if ((__VlefCall_0__get_name == name)) {
                        get_vfield_by_name__Vfuncrtn 
                            = unnamedblk656__DOT__unnamedblk657__DOT__fields.at(unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i);
                        goto __Vlabel0;
                    }
                    if ((unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i__Vloopsize 
                         <= unnamedblk656__DOT__unnamedblk657__DOT__fields.size())) {
                        unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i 
                            = ((IData)(1U) + unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i);
                    }
                }
            }
            unnamedblk659__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk659__DOT__blk___Vnext));
            while (unnamedblk659__DOT__blk___Vmore) {
                unnamedblk659__DOT__blk_ = unnamedblk659__DOT__blk___Vnext;
                unnamedblk659__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk659__DOT__blk___Vnext));
                unnamedblk659__DOT__unnamedblk660__DOT__subvregs.clear();
                VL_NULL_CHECK(unnamedblk659__DOT__blk_, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1483)
                    ->__VnoInFunc_get_virtual_registers(vlSymsp, unnamedblk659__DOT__unnamedblk660__DOT__subvregs, 1U);
                unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j, unnamedblk659__DOT__unnamedblk660__DOT__subvregs.size())) {
                    unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j__Vloopsize 
                        = unnamedblk659__DOT__unnamedblk660__DOT__subvregs.size();
                    unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.clear();
                    VL_NULL_CHECK(unnamedblk659__DOT__unnamedblk660__DOT__subvregs.at(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1487)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields);
                    unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.size())) {
                        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i__Vloopsize 
                            = unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.size();
                        VL_NULL_CHECK(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.at(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1489)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                        if ((__VlefCall_1__get_name 
                             == name)) {
                            get_vfield_by_name__Vfuncrtn 
                                = unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.at(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i);
                            goto __Vlabel0;
                        }
                        if ((unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i__Vloopsize 
                             <= unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.size())) {
                            unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i 
                                = ((IData)(1U) + unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i);
                        }
                    }
                    if ((unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j__Vloopsize 
                         <= unnamedblk659__DOT__unnamedblk660__DOT__subvregs.size())) {
                        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j 
                            = ((IData)(1U) + unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j);
                    }
                }
            }
            this->__Vfunc_uvm_report_enabled__190__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__190__severity = 1U;
            __Vfunc_uvm_report_enabled__190__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__191__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__191__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__192__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__192__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__190__verbosity, (IData)(__Vfunc_uvm_report_enabled__190__severity), this->__Vfunc_uvm_report_enabled__190__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_warning__195__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__195__context_name = ""s;
                __Vtask_uvm_report_warning__195__line = 0x000005d7U;
                this->__Vtask_uvm_report_warning__195__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__195__verbosity = 0U;
                this->__Vtask_uvm_report_warning__195__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate virtual field '"s, name), "' in block '"s), __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__195__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__196__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__196__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__197__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__197__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__195__id, this->__Vtask_uvm_report_warning__195__message, __Vtask_uvm_report_warning__195__verbosity, this->__Vtask_uvm_report_warning__195__filename, __Vtask_uvm_report_warning__195__line, this->__Vtask_uvm_report_warning__195__context_name, (IData)(__Vtask_uvm_report_warning__195__report_enabled_checked));
            }
            get_vfield_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_coverage\n"); );
        // Locals
        IData/*31:0*/ __Vtask_set_coverage__199__Vfuncout;
        __Vtask_set_coverage__199__Vfuncout = 0;
        IData/*31:0*/ __Vtask_set_coverage__200__Vfuncout;
        __Vtask_set_coverage__200__Vfuncout = 0;
        IData/*31:0*/ __Vtask_set_coverage__201__Vfuncout;
        __Vtask_set_coverage__201__Vfuncout = 0;
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk664__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk664__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk664__DOT__rg___Vmore;
        unnamedblk664__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk664__DOT__unnamedblk665__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk666__DOT__mem_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk666__DOT__mem___Vnext;
        CData/*0:0*/ unnamedblk666__DOT__mem___Vmore;
        unnamedblk666__DOT__mem___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk666__DOT__unnamedblk667__DOT__mem;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk668__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk668__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk668__DOT__blk___Vmore;
        unnamedblk668__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk668__DOT__unnamedblk669__DOT__blk;
        set_coverage__Vfuncrtn = 0U;
        this->__PVT__cover_on = (this->__PVT__has_cover 
                                 & is_on);
        unnamedblk664__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk664__DOT__rg___Vnext));
        while (unnamedblk664__DOT__rg___Vmore) {
            unnamedblk664__DOT__rg_ = unnamedblk664__DOT__rg___Vnext;
            unnamedblk664__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk664__DOT__rg___Vnext));
            unnamedblk664__DOT__unnamedblk665__DOT__rg 
                = unnamedblk664__DOT__rg_;
            VL_NULL_CHECK(unnamedblk664__DOT__unnamedblk665__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1514)
                    ->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__199__Vfuncout);
        }
        unnamedblk666__DOT__mem___Vmore = (0U != this->__PVT__mems.first(unnamedblk666__DOT__mem___Vnext));
        while (unnamedblk666__DOT__mem___Vmore) {
            unnamedblk666__DOT__mem_ = unnamedblk666__DOT__mem___Vnext;
            unnamedblk666__DOT__mem___Vmore = (0U != this->__PVT__mems.next(unnamedblk666__DOT__mem___Vnext));
            unnamedblk666__DOT__unnamedblk667__DOT__mem 
                = unnamedblk666__DOT__mem_;
            VL_NULL_CHECK(unnamedblk666__DOT__unnamedblk667__DOT__mem, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1519)
                    ->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__200__Vfuncout);
        }
        unnamedblk668__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk668__DOT__blk___Vnext));
        while (unnamedblk668__DOT__blk___Vmore) {
            unnamedblk668__DOT__blk_ = unnamedblk668__DOT__blk___Vnext;
            unnamedblk668__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk668__DOT__blk___Vnext));
            unnamedblk668__DOT__unnamedblk669__DOT__blk 
                = unnamedblk668__DOT__blk_;
            VL_NULL_CHECK(unnamedblk668__DOT__unnamedblk669__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1524)
                    ->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__201__Vfuncout);
        }
        set_coverage__Vfuncrtn = this->__PVT__cover_on;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample_values(VUVM_Register8b__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample_values\n"); );
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk670__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk670__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk670__DOT__rg___Vmore;
        unnamedblk670__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk670__DOT__unnamedblk671__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk672__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk672__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk672__DOT__blk___Vmore;
        unnamedblk672__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk672__DOT__unnamedblk673__DOT__blk;
        unnamedblk670__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk670__DOT__rg___Vnext));
        while (unnamedblk670__DOT__rg___Vmore) {
            unnamedblk670__DOT__rg_ = unnamedblk670__DOT__rg___Vnext;
            unnamedblk670__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk670__DOT__rg___Vnext));
            unnamedblk670__DOT__unnamedblk671__DOT__rg 
                = unnamedblk670__DOT__rg_;
            VL_NULL_CHECK(unnamedblk670__DOT__unnamedblk671__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1536)
                    ->__VnoInFunc_sample_values(vlSymsp);
        }
        unnamedblk672__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk672__DOT__blk___Vnext));
        while (unnamedblk672__DOT__blk___Vmore) {
            unnamedblk672__DOT__blk_ = unnamedblk672__DOT__blk___Vnext;
            unnamedblk672__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk672__DOT__blk___Vnext));
            unnamedblk672__DOT__unnamedblk673__DOT__blk 
                = unnamedblk672__DOT__blk_;
            VL_NULL_CHECK(unnamedblk672__DOT__unnamedblk673__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1541)
                    ->__VnoInFunc_sample_values(vlSymsp);
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_XsampleX(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_XsampleX\n"); );
        // Body
        this->__VnoInFunc_sample(vlSymsp, addr, (IData)(is_read), map);
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_build_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_build_coverage\n"); );
        // Locals
        CData/*0:0*/ __Vtask_read_by_name__206__Vfuncout;
        __Vtask_read_by_name__206__Vfuncout = 0;
        IData/*31:0*/ __Vtask_read_by_name__206__val;
        __Vtask_read_by_name__206__val = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_0__get_full_name;
        build_coverage__Vfuncrtn = 0U;
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        __Vtask_read_by_name__206__val = build_coverage__Vfuncrtn;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz88__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, __VlefCall_0__get_full_name)), "include_coverage"s, __Vtask_read_by_name__206__val, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>{this}, __Vtask_read_by_name__206__Vfuncout);
        build_coverage__Vfuncrtn = __Vtask_read_by_name__206__val;
        build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                    & models);
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_coverage\n"); );
        // Body
        this->__PVT__has_cover = (this->__PVT__has_cover 
                                  | models);
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_coverage\n"); );
        // Body
        has_coverage__Vfuncrtn = ((this->__PVT__has_cover 
                                   & models) == models);
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_coverage\n"); );
        // Body
        CData/*0:0*/ __VlefCall_0__has_coverage;
        {
            get_coverage__Vfuncrtn = 0U;
            this->__VnoInFunc_has_coverage(vlSymsp, is_on, __VlefCall_0__has_coverage);
            if ((1U & (~ (IData)(__VlefCall_0__has_coverage)))) {
                get_coverage__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            get_coverage__Vfuncrtn = ((this->__PVT__cover_on 
                                       & is_on) == is_on);
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_reset(VUVM_Register8b__Syms* __restrict vlSymsp, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_reset\n"); );
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk674__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk674__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk674__DOT__rg___Vmore;
        unnamedblk674__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk674__DOT__unnamedblk675__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk676__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk676__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk676__DOT__blk___Vmore;
        unnamedblk676__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk676__DOT__unnamedblk677__DOT__blk;
        unnamedblk674__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk674__DOT__rg___Vnext));
        while (unnamedblk674__DOT__rg___Vmore) {
            unnamedblk674__DOT__rg_ = unnamedblk674__DOT__rg___Vnext;
            unnamedblk674__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk674__DOT__rg___Vnext));
            unnamedblk674__DOT__unnamedblk675__DOT__rg 
                = unnamedblk674__DOT__rg_;
            VL_NULL_CHECK(unnamedblk674__DOT__unnamedblk675__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1601)
                    ->__VnoInFunc_reset(vlSymsp, kind);
        }
        unnamedblk676__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk676__DOT__blk___Vnext));
        while (unnamedblk676__DOT__blk___Vmore) {
            unnamedblk676__DOT__blk_ = unnamedblk676__DOT__blk___Vnext;
            unnamedblk676__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk676__DOT__blk___Vnext));
            unnamedblk676__DOT__unnamedblk677__DOT__blk 
                = unnamedblk676__DOT__blk_;
            VL_NULL_CHECK(unnamedblk676__DOT__unnamedblk677__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1606)
                    ->__VnoInFunc_reset(vlSymsp, kind);
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_needs_update(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_needs_update\n"); );
        // Body
        CData/*0:0*/ __VlefCall_1__needs_update;
        CData/*0:0*/ __VlefCall_0__needs_update;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk678__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk678__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk678__DOT__rg___Vmore;
        unnamedblk678__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk678__DOT__unnamedblk679__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk680__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk680__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk680__DOT__blk___Vmore;
        unnamedblk680__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk680__DOT__unnamedblk681__DOT__blk;
        {
            needs_update__Vfuncrtn = 0U;
            needs_update__Vfuncrtn = 0U;
            unnamedblk678__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk678__DOT__rg___Vnext));
            while (unnamedblk678__DOT__rg___Vmore) {
                unnamedblk678__DOT__rg_ = unnamedblk678__DOT__rg___Vnext;
                unnamedblk678__DOT__rg___Vmore = (0U 
                                                  != this->__PVT__regs.next(unnamedblk678__DOT__rg___Vnext));
                unnamedblk678__DOT__unnamedblk679__DOT__rg 
                    = unnamedblk678__DOT__rg_;
                VL_NULL_CHECK(unnamedblk678__DOT__unnamedblk679__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1618)
                    ->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
                if (__VlefCall_0__needs_update) {
                    needs_update__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
            }
            unnamedblk680__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk680__DOT__blk___Vnext));
            while (unnamedblk680__DOT__blk___Vmore) {
                unnamedblk680__DOT__blk_ = unnamedblk680__DOT__blk___Vnext;
                unnamedblk680__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk680__DOT__blk___Vnext));
                unnamedblk680__DOT__unnamedblk681__DOT__blk 
                    = unnamedblk680__DOT__blk_;
                VL_NULL_CHECK(unnamedblk680__DOT__unnamedblk681__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1623)
                    ->__VnoInFunc_needs_update(vlSymsp, __VlefCall_1__needs_update);
                if (__VlefCall_1__needs_update) {
                    needs_update__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
            }
            __Vlabel0: ;
        }
    }

    VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_update(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_update\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__213__verbosity;
        __Vfunc_uvm_report_enabled__213__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__213__severity;
        __Vfunc_uvm_report_enabled__213__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__214__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__215__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_info__218__verbosity;
        __Vtask_uvm_report_info__218__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_info__218__line;
        __Vtask_uvm_report_info__218__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_info__218__report_enabled_checked;
        __Vtask_uvm_report_info__218__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__219__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__220__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__222__verbosity;
        __Vfunc_uvm_report_enabled__222__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__222__severity;
        __Vfunc_uvm_report_enabled__222__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__223__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__224__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_info__227__verbosity;
        __Vtask_uvm_report_info__227__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_info__227__line;
        __Vtask_uvm_report_info__227__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_info__227__report_enabled_checked;
        __Vtask_uvm_report_info__227__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__228__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__229__Vfuncout;
        IData/*31:0*/ __Vtask_update__232__status;
        __Vtask_update__232__status = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__233__verbosity;
        __Vfunc_uvm_report_enabled__233__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__233__severity;
        __Vfunc_uvm_report_enabled__233__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__234__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__235__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__238__verbosity;
        __Vtask_uvm_report_error__238__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__238__line;
        __Vtask_uvm_report_error__238__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__238__report_enabled_checked;
        __Vtask_uvm_report_error__238__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__239__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__240__Vfuncout;
        IData/*31:0*/ __Vtask_update__242__status;
        __Vtask_update__242__status = 0;
        std::string __Vtemp_1;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        VL_KEEP_THIS;
        std::string __VlefCall_7__get_full_name;
        IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_5__needs_update;
        std::string __VlefCall_4__get_name;
        IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
        std::string __VlefCall_2__get_name;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__needs_update;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk682__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk682__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk682__DOT__rg___Vmore;
        unnamedblk682__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk682__DOT__unnamedblk683__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk684__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk684__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk684__DOT__blk___Vmore;
        unnamedblk684__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk684__DOT__unnamedblk685__DOT__blk;
        {
            status = 0U;
            status = 0U;
            this->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
            if ((1U & (~ (IData)(__VlefCall_0__needs_update)))) {
                this->__Vfunc_uvm_report_enabled__213__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__213__severity = 0U;
                __Vfunc_uvm_report_enabled__213__verbosity = 0x0000012cU;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__214__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__214__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__215__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__215__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__213__verbosity, (IData)(__Vfunc_uvm_report_enabled__213__severity), this->__Vfunc_uvm_report_enabled__213__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    __Vtask_uvm_report_info__218__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__218__context_name = ""s;
                    __Vtask_uvm_report_info__218__line = 0x0000066aU;
                    this->__Vtask_uvm_report_info__218__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_info__218__verbosity = 0x0000012cU;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__218__message
                                  ,"%s:%0d - RegModel block %s does not need updating",3
                                  , 'S',&(fname), '~',32,lineno
                                  , 'S',&(__VlefCall_2__get_name));
                    this->__Vtask_uvm_report_info__218__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__219__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__219__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__220__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__220__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                    ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__218__id, this->__Vtask_uvm_report_info__218__message, __Vtask_uvm_report_info__218__verbosity, this->__Vtask_uvm_report_info__218__filename, __Vtask_uvm_report_info__218__line, this->__Vtask_uvm_report_info__218__context_name, (IData)(__Vtask_uvm_report_info__218__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            this->__Vfunc_uvm_report_enabled__222__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__222__severity = 0U;
            __Vfunc_uvm_report_enabled__222__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__223__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__223__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__224__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__224__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__222__verbosity, (IData)(__Vfunc_uvm_report_enabled__222__severity), this->__Vfunc_uvm_report_enabled__222__id, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_info__227__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__227__context_name = ""s;
                __Vtask_uvm_report_info__227__line = 0x0000066fU;
                this->__Vtask_uvm_report_info__227__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_info__227__verbosity = 0x0000012cU;
                __Vtemp_1 = VUVM_Register8b___024unit::__Venumtab_enum_name75
                    [(3U & path)];
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__227__message
                              ,"%s:%0d - Updating model block %s with %s path",4
                              , 'S',&(fname), '~',32,lineno
                              , 'S',&(__VlefCall_4__get_name)
                              , 'S',&(__Vtemp_1));
                this->__Vtask_uvm_report_info__227__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__228__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__228__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__229__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__229__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                    ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__227__id, this->__Vtask_uvm_report_info__227__message, __Vtask_uvm_report_info__227__verbosity, this->__Vtask_uvm_report_info__227__filename, __Vtask_uvm_report_info__227__line, this->__Vtask_uvm_report_info__227__context_name, (IData)(__Vtask_uvm_report_info__227__report_enabled_checked));
            }
            unnamedblk682__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk682__DOT__rg___Vnext));
            while (unnamedblk682__DOT__rg___Vmore) {
                unnamedblk682__DOT__rg_ = unnamedblk682__DOT__rg___Vnext;
                unnamedblk682__DOT__rg___Vmore = (0U 
                                                  != this->__PVT__regs.next(unnamedblk682__DOT__rg___Vnext));
                unnamedblk682__DOT__unnamedblk683__DOT__rg 
                    = unnamedblk682__DOT__rg_;
                VL_NULL_CHECK(unnamedblk682__DOT__unnamedblk683__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1651)
                    ->__VnoInFunc_needs_update(vlSymsp, __VlefCall_5__needs_update);
                if (__VlefCall_5__needs_update) {
                    co_await VL_NULL_CHECK(unnamedblk682__DOT__unnamedblk683__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1652)
                    ->__VnoInFunc_update(vlSymsp, __Vtask_update__232__status, path, VlNull{}, parent, prior, extension, ""s, 0U);
                    status = __Vtask_update__232__status;
                    if (((0U != status) & (2U != status))) {
                        this->__Vfunc_uvm_report_enabled__233__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__233__severity = 2U;
                        __Vfunc_uvm_report_enabled__233__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__234__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__234__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__235__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__235__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__233__verbosity, (IData)(__Vfunc_uvm_report_enabled__233__severity), this->__Vfunc_uvm_report_enabled__233__id, __VlefCall_6__uvm_report_enabled);
                        if ((0U != __VlefCall_6__uvm_report_enabled)) {
                            VL_NULL_CHECK(unnamedblk682__DOT__unnamedblk683__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1655)
                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                            __Vtask_uvm_report_error__238__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__238__context_name = ""s;
                            __Vtask_uvm_report_error__238__line = 0x00000677U;
                            this->__Vtask_uvm_report_error__238__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                            __Vtask_uvm_report_error__238__verbosity = 0U;
                            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__238__message
                                          ,"Register \"%s\" could not be updated",1
                                          , 'S',&(__VlefCall_7__get_full_name));
                            this->__Vtask_uvm_report_error__238__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__239__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__239__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__240__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__240__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__238__id, this->__Vtask_uvm_report_error__238__message, __Vtask_uvm_report_error__238__verbosity, this->__Vtask_uvm_report_error__238__filename, __Vtask_uvm_report_error__238__line, this->__Vtask_uvm_report_error__238__context_name, (IData)(__Vtask_uvm_report_error__238__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                }
            }
            unnamedblk684__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk684__DOT__blk___Vnext));
            while (unnamedblk684__DOT__blk___Vmore) {
                unnamedblk684__DOT__blk_ = unnamedblk684__DOT__blk___Vnext;
                unnamedblk684__DOT__blk___Vmore = (0U 
                                                   != this->__PVT__blks.next(unnamedblk684__DOT__blk___Vnext));
                unnamedblk684__DOT__unnamedblk685__DOT__blk 
                    = unnamedblk684__DOT__blk_;
                co_await VL_NULL_CHECK(unnamedblk684__DOT__unnamedblk685__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1663)
                    ->__VnoInFunc_update(vlSymsp, __Vtask_update__242__status, path, parent, prior, extension, fname, lineno);
                status = __Vtask_update__242__status;
            }
            __Vlabel0: ;
        }
        co_return;
    }

    VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_mirror(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_mirror\n"); );
        // Locals
        IData/*31:0*/ __Vtask_mirror__243__status;
        __Vtask_mirror__243__status = 0;
        IData/*31:0*/ __Vtask_mirror__244__status;
        __Vtask_mirror__244__status = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        VL_KEEP_THIS;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk686__DOT__rg_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk686__DOT__rg___Vnext;
        CData/*0:0*/ unnamedblk686__DOT__rg___Vmore;
        unnamedblk686__DOT__rg___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk686__DOT__unnamedblk687__DOT__rg;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk688__DOT__blk_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk688__DOT__blk___Vnext;
        CData/*0:0*/ unnamedblk688__DOT__blk___Vmore;
        unnamedblk688__DOT__blk___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk688__DOT__unnamedblk689__DOT__blk;
        status = 0U;
        unnamedblk686__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk686__DOT__rg___Vnext));
        while (unnamedblk686__DOT__rg___Vmore) {
            unnamedblk686__DOT__rg_ = unnamedblk686__DOT__rg___Vnext;
            unnamedblk686__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk686__DOT__rg___Vnext));
            unnamedblk686__DOT__unnamedblk687__DOT__rg 
                = unnamedblk686__DOT__rg_;
            co_await VL_NULL_CHECK(unnamedblk686__DOT__unnamedblk687__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1682)
                    ->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__243__status, check, path, VlNull{}, parent, prior, extension, fname, lineno);
            status = __Vtask_mirror__243__status;
        }
        unnamedblk688__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk688__DOT__blk___Vnext));
        while (unnamedblk688__DOT__blk___Vmore) {
            unnamedblk688__DOT__blk_ = unnamedblk688__DOT__blk___Vnext;
            unnamedblk688__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk688__DOT__blk___Vnext));
            unnamedblk688__DOT__unnamedblk689__DOT__blk 
                = unnamedblk688__DOT__blk_;
            co_await VL_NULL_CHECK(unnamedblk688__DOT__unnamedblk689__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1692)
                    ->__VnoInFunc_mirror(vlSymsp, __Vtask_mirror__244__status, check, path, parent, prior, extension, fname, lineno);
            status = __Vtask_mirror__244__status;
        }
        co_return;
    }

    VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_reg_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_reg_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vtask_write__246__status;
        __Vtask_write__246__status = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        VL_KEEP_THIS;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> rg;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_reg_by_name(vlSymsp, name, rg);
        if ((VlNull{} != rg)) {
            co_await VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1720)
                    ->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__246__status, data, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_write__246__status;
        }
        co_return;
    }

    VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_reg_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_reg_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vtask_read__248__status;
        __Vtask_read__248__status = 0;
        QData/*63:0*/ __Vtask_read__248__value;
        __Vtask_read__248__value = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        VL_KEEP_THIS;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> rg;
        data = 0ULL;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_reg_by_name(vlSymsp, name, rg);
        if ((VlNull{} != rg)) {
            co_await VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1744)
                    ->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__248__status, __Vtask_read__248__value, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_read__248__status;
            data = __Vtask_read__248__value;
        }
        co_return;
    }

    VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_mem_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_mem_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vtask_write__250__status;
        __Vtask_write__250__status = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        VL_KEEP_THIS;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_mem_by_name(vlSymsp, name, mem);
        if ((VlNull{} != mem)) {
            co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1768)
                    ->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__250__status, offset, data, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_write__250__status;
        }
        co_return;
    }

    VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_mem_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_mem_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vtask_read__252__status;
        __Vtask_read__252__status = 0;
        QData/*63:0*/ __Vtask_read__252__value;
        __Vtask_read__252__value = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        VL_KEEP_THIS;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
        data = 0ULL;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_mem_by_name(vlSymsp, name, mem);
        if ((VlNull{} != mem)) {
            co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1792)
                    ->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__252__status, offset, __Vtask_read__252__value, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_read__252__status;
            data = __Vtask_read__252__value;
        }
        co_return;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_readmemh(VUVM_Register8b__Syms* __restrict vlSymsp, std::string filename) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_readmemh\n"); );
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_writememh(VUVM_Register8b__Syms* __restrict vlSymsp, std::string filename) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_writememh\n"); );
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create_map(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &create_map__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create_map\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__253__verbosity;
        __Vfunc_uvm_report_enabled__253__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__253__severity;
        __Vfunc_uvm_report_enabled__253__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__254__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__255__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__257__verbosity;
        __Vtask_uvm_report_error__257__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__257__line;
        __Vtask_uvm_report_error__257__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__257__report_enabled_checked;
        __Vtask_uvm_report_error__257__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__258__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__259__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_1__get_full_name;
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map;
        {
            if (this->__PVT__locked) {
                this->__Vfunc_uvm_report_enabled__253__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__253__severity = 2U;
                __Vfunc_uvm_report_enabled__253__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__254__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__254__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__255__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__255__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__253__verbosity, (IData)(__Vfunc_uvm_report_enabled__253__severity), this->__Vfunc_uvm_report_enabled__253__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__257__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__257__context_name = ""s;
                    __Vtask_uvm_report_error__257__line = 0x00000721U;
                    this->__Vtask_uvm_report_error__257__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__257__verbosity = 0U;
                    this->__Vtask_uvm_report_error__257__message = "Cannot add map to locked model"s;
                    this->__Vtask_uvm_report_error__257__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__258__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__258__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__259__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__259__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__257__id, this->__Vtask_uvm_report_error__257__message, __Vtask_uvm_report_error__257__verbosity, this->__Vtask_uvm_report_error__257__filename, __Vtask_uvm_report_error__257__line, this->__Vtask_uvm_report_error__257__context_name, (IData)(__Vtask_uvm_report_error__257__report_enabled_checked));
                }
                create_map__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            }
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi30__Vclpkg.__VnoInFunc_create(vlSymsp, name, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), map);
            VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1830)
                    ->__VnoInFunc_configure(vlSymsp, 
                                            VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block>{this}, base_addr, n_bytes, endian, (IData)(byte_addressing));
            this->__PVT__maps.at(map) = 1U;
            if ((1U == this->__PVT__maps.size())) {
                this->__PVT__default_map = map;
            }
            create_map__Vfuncrtn = map;
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_map(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_map\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__264__verbosity;
        __Vfunc_uvm_report_enabled__264__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__264__severity;
        __Vfunc_uvm_report_enabled__264__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__265__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__266__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__268__verbosity;
        __Vtask_uvm_report_error__268__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__268__line;
        __Vtask_uvm_report_error__268__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__268__report_enabled_checked;
        __Vtask_uvm_report_error__268__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__269__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__270__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__272__verbosity;
        __Vfunc_uvm_report_enabled__272__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__272__severity;
        __Vfunc_uvm_report_enabled__272__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__273__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__274__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__278__verbosity;
        __Vtask_uvm_report_error__278__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__278__line;
        __Vtask_uvm_report_error__278__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__278__report_enabled_checked;
        __Vtask_uvm_report_error__278__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__279__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__280__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_3__get_full_name;
        std::string __VlefCall_2__get_name;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        {
            if (this->__PVT__locked) {
                this->__Vfunc_uvm_report_enabled__264__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__264__severity = 2U;
                __Vfunc_uvm_report_enabled__264__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__265__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__265__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__266__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__266__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__264__verbosity, (IData)(__Vfunc_uvm_report_enabled__264__severity), this->__Vfunc_uvm_report_enabled__264__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__268__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__268__context_name = ""s;
                    __Vtask_uvm_report_error__268__line = 0x00000735U;
                    this->__Vtask_uvm_report_error__268__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__268__verbosity = 0U;
                    this->__Vtask_uvm_report_error__268__message = "Cannot add map to locked model"s;
                    this->__Vtask_uvm_report_error__268__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__269__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__269__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__270__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__270__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__268__id, this->__Vtask_uvm_report_error__268__message, __Vtask_uvm_report_error__268__verbosity, this->__Vtask_uvm_report_error__268__filename, __Vtask_uvm_report_error__268__line, this->__Vtask_uvm_report_error__268__context_name, (IData)(__Vtask_uvm_report_error__268__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            if (this->__PVT__maps.exists(map)) {
                this->__Vfunc_uvm_report_enabled__272__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__272__severity = 2U;
                __Vfunc_uvm_report_enabled__272__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__273__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__273__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__274__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__274__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__272__verbosity, (IData)(__Vfunc_uvm_report_enabled__272__severity), this->__Vfunc_uvm_report_enabled__272__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1851)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __Vtask_uvm_report_error__278__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__278__context_name = ""s;
                    __Vtask_uvm_report_error__278__line = 0x0000073bU;
                    this->__Vtask_uvm_report_error__278__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__278__verbosity = 0U;
                    this->__Vtask_uvm_report_error__278__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_2__get_name), "' already exists in '"s), __VlefCall_3__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__278__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__279__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__279__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__280__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__280__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__278__id, this->__Vtask_uvm_report_error__278__message, __Vtask_uvm_report_error__278__verbosity, this->__Vtask_uvm_report_error__278__filename, __Vtask_uvm_report_error__278__line, this->__Vtask_uvm_report_error__278__context_name, (IData)(__Vtask_uvm_report_error__278__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            this->__PVT__maps.at(map) = 1U;
            if ((1U == this->__PVT__maps.size())) {
                this->__PVT__default_map = map;
            }
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_map_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &get_map_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_map_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__286__verbosity;
        __Vfunc_uvm_report_enabled__286__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__286__severity;
        __Vfunc_uvm_report_enabled__286__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__287__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__288__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__290__verbosity;
        __Vtask_uvm_report_warning__290__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__290__line;
        __Vtask_uvm_report_warning__290__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__290__report_enabled_checked;
        __Vtask_uvm_report_warning__290__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__291__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__292__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        std::string __VlefCall_1__get_name;
        std::string __VlefCall_0__get_name;
        IData/*31:0*/ unnamedblk690__DOT__i;
        unnamedblk690__DOT__i = 0;
        IData/*31:0*/ unnamedblk690__DOT__i__Vloopsize;
        unnamedblk690__DOT__i__Vloopsize = 0;
        IData/*31:0*/ unnamedblk691__DOT__i;
        unnamedblk691__DOT__i = 0;
        IData/*31:0*/ unnamedblk691__DOT__i__Vloopsize;
        unnamedblk691__DOT__i__Vloopsize = 0;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>> unnamedblk691__DOT__unnamedblk692__DOT__submaps;
        IData/*31:0*/ unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j;
        unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j = 0;
        IData/*31:0*/ unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j__Vloopsize;
        unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j__Vloopsize = 0;
        VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map>> maps;
        {
            maps.clear();
            this->__VnoInFunc_get_maps(vlSymsp, maps);
            unnamedblk690__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk690__DOT__i, maps.size())) {
                unnamedblk690__DOT__i__Vloopsize = maps.size();
                VL_NULL_CHECK(maps.at(unnamedblk690__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1870)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                if ((__VlefCall_0__get_name == name)) {
                    get_map_by_name__Vfuncrtn = maps.at(unnamedblk690__DOT__i);
                    goto __Vlabel0;
                }
                if ((unnamedblk690__DOT__i__Vloopsize 
                     <= maps.size())) {
                    unnamedblk690__DOT__i = ((IData)(1U) 
                                             + unnamedblk690__DOT__i);
                }
            }
            unnamedblk691__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk691__DOT__i, maps.size())) {
                unnamedblk691__DOT__i__Vloopsize = maps.size();
                unnamedblk691__DOT__unnamedblk692__DOT__submaps.clear();
                VL_NULL_CHECK(maps.at(unnamedblk691__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1875)
                    ->__VnoInFunc_get_submaps(vlSymsp, unnamedblk691__DOT__unnamedblk692__DOT__submaps, 1U);
                unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j, unnamedblk691__DOT__unnamedblk692__DOT__submaps.size())) {
                    unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j__Vloopsize 
                        = unnamedblk691__DOT__unnamedblk692__DOT__submaps.size();
                    VL_NULL_CHECK(unnamedblk691__DOT__unnamedblk692__DOT__submaps.at(unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j), "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1878)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    if ((__VlefCall_1__get_name == name)) {
                        get_map_by_name__Vfuncrtn = unnamedblk691__DOT__unnamedblk692__DOT__submaps.at(unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j);
                        goto __Vlabel0;
                    }
                    if ((unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j__Vloopsize 
                         <= unnamedblk691__DOT__unnamedblk692__DOT__submaps.size())) {
                        unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j 
                            = ((IData)(1U) + unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j);
                    }
                }
                if ((unnamedblk691__DOT__i__Vloopsize 
                     <= maps.size())) {
                    unnamedblk691__DOT__i = ((IData)(1U) 
                                             + unnamedblk691__DOT__i);
                }
            }
            this->__Vfunc_uvm_report_enabled__286__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__286__severity = 1U;
            __Vfunc_uvm_report_enabled__286__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__287__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__287__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__288__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__288__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__286__verbosity, (IData)(__Vfunc_uvm_report_enabled__286__severity), this->__Vfunc_uvm_report_enabled__286__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__290__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__290__context_name = ""s;
                __Vtask_uvm_report_warning__290__line = 0x0000075bU;
                this->__Vtask_uvm_report_warning__290__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__290__verbosity = 0U;
                this->__Vtask_uvm_report_warning__290__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Map with name '"s, name), "' does not exist in block"s));
                this->__Vtask_uvm_report_warning__290__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__291__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__291__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__292__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__292__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__290__id, this->__Vtask_uvm_report_warning__290__message, __Vtask_uvm_report_warning__290__verbosity, this->__Vtask_uvm_report_warning__290__filename, __Vtask_uvm_report_warning__290__line, this->__Vtask_uvm_report_warning__290__context_name, (IData)(__Vtask_uvm_report_warning__290__report_enabled_checked));
            }
            get_map_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_map(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_map\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__294__verbosity;
        __Vfunc_uvm_report_enabled__294__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__294__severity;
        __Vfunc_uvm_report_enabled__294__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__295__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__296__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__299__verbosity;
        __Vtask_uvm_report_warning__299__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__299__line;
        __Vtask_uvm_report_warning__299__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__299__report_enabled_checked;
        __Vtask_uvm_report_warning__299__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__300__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__301__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_1__get_full_name;
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        if ((! this->__PVT__maps.exists(map))) {
            this->__Vfunc_uvm_report_enabled__294__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__294__severity = 1U;
            __Vfunc_uvm_report_enabled__294__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__295__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__295__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__296__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__296__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__294__verbosity, (IData)(__Vfunc_uvm_report_enabled__294__severity), this->__Vfunc_uvm_report_enabled__294__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1892)
                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_warning__299__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__299__context_name = ""s;
                __Vtask_uvm_report_warning__299__line = 0x00000764U;
                this->__Vtask_uvm_report_warning__299__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__299__verbosity = 0U;
                this->__Vtask_uvm_report_warning__299__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Map '"s, __VlefCall_1__get_full_name), "' does not exist in block"s));
                this->__Vtask_uvm_report_warning__299__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__300__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__300__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__301__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__301__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__299__id, this->__Vtask_uvm_report_warning__299__message, __Vtask_uvm_report_warning__299__verbosity, this->__Vtask_uvm_report_warning__299__filename, __Vtask_uvm_report_warning__299__line, this->__Vtask_uvm_report_warning__299__context_name, (IData)(__Vtask_uvm_report_warning__299__report_enabled_checked));
            }
        }
        this->__PVT__default_map = map;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_map(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_map\n"); );
        // Body
        get_default_map__Vfuncrtn = this->__PVT__default_map;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_path(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_path__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_path\n"); );
        // Body
        {
            get_default_path__Vfuncrtn = 0U;
            if ((3U != this->__PVT__default_path)) {
                get_default_path__Vfuncrtn = this->__PVT__default_path;
                goto __Vlabel0;
            }
            if ((VlNull{} != this->__PVT__parent)) {
                VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1912)
                    ->__VnoInFunc_get_default_path(vlSymsp, get_default_path__Vfuncrtn);
                goto __Vlabel0;
            }
            get_default_path__Vfuncrtn = 0U;
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_Xinit_address_mapsX(VUVM_Register8b__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_Xinit_address_mapsX\n"); );
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk694__DOT__map_;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk694__DOT__map___Vnext;
        CData/*0:0*/ unnamedblk694__DOT__map___Vmore;
        unnamedblk694__DOT__map___Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk694__DOT__unnamedblk695__DOT__map;
        unnamedblk694__DOT__map___Vmore = (0U != this->__PVT__maps.first(unnamedblk694__DOT__map___Vnext));
        while (unnamedblk694__DOT__map___Vmore) {
            unnamedblk694__DOT__map_ = unnamedblk694__DOT__map___Vnext;
            unnamedblk694__DOT__map___Vmore = (0U != this->__PVT__maps.next(unnamedblk694__DOT__map___Vnext));
            unnamedblk694__DOT__unnamedblk695__DOT__map 
                = unnamedblk694__DOT__map_;
            VL_NULL_CHECK(unnamedblk694__DOT__unnamedblk695__DOT__map, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1924)
                    ->__VnoInFunc_Xinit_address_mapX(vlSymsp);
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_backdoor(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_backdoor\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__306__verbosity;
        __Vfunc_uvm_report_enabled__306__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__306__severity;
        __Vfunc_uvm_report_enabled__306__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__307__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__308__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__310__verbosity;
        __Vtask_uvm_report_warning__310__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__310__line;
        __Vtask_uvm_report_warning__310__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__310__report_enabled_checked;
        __Vtask_uvm_report_warning__310__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__311__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__312__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__has_update_threads;
        VL_NULL_CHECK(bkdr, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1939)
                    ->__PVT__fname = fname;
        VL_NULL_CHECK(bkdr, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1940)
                    ->__PVT__lineno = lineno;
        __VlefCall_0__has_update_threads = (VlNull{} 
                                            != this->__PVT__backdoor);
        if (__VlefCall_0__has_update_threads) {
            VL_NULL_CHECK(this->__PVT__backdoor, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1942)
                    ->__VnoInFunc_has_update_threads(vlSymsp, __VlefCall_0__has_update_threads);
        }
        if (__VlefCall_0__has_update_threads) {
            this->__Vfunc_uvm_report_enabled__306__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__306__severity = 1U;
            __Vfunc_uvm_report_enabled__306__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__307__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__307__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__308__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__308__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__306__verbosity, (IData)(__Vfunc_uvm_report_enabled__306__severity), this->__Vfunc_uvm_report_enabled__306__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__310__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__310__context_name = ""s;
                __Vtask_uvm_report_warning__310__line = 0x00000797U;
                this->__Vtask_uvm_report_warning__310__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__310__verbosity = 0U;
                this->__Vtask_uvm_report_warning__310__message = "Previous register backdoor still has update threads running. Backdoors with active mirroring should only be set before simulation starts."s;
                this->__Vtask_uvm_report_warning__310__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__311__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__311__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__312__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__312__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__310__id, this->__Vtask_uvm_report_warning__310__message, __Vtask_uvm_report_warning__310__verbosity, this->__Vtask_uvm_report_warning__310__filename, __Vtask_uvm_report_warning__310__line, this->__Vtask_uvm_report_warning__310__context_name, (IData)(__Vtask_uvm_report_warning__310__report_enabled_checked));
            }
        }
        this->__PVT__backdoor = bkdr;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_backdoor(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_backdoor\n"); );
        // Body
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk696__DOT__blk;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk696__DOT__unnamedblk697__DOT__bkdr;
        {
            if (inherited) {
                this->__VnoInFunc_get_parent(vlSymsp, unnamedblk696__DOT__blk);
                while ((VlNull{} != unnamedblk696__DOT__blk)) {
                    VL_NULL_CHECK(unnamedblk696__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1955)
                    ->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk696__DOT__unnamedblk697__DOT__bkdr);
                    if ((VlNull{} != unnamedblk696__DOT__unnamedblk697__DOT__bkdr)) {
                        get_backdoor__Vfuncrtn = unnamedblk696__DOT__unnamedblk697__DOT__bkdr;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(unnamedblk696__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1958)
                    ->__VnoInFunc_get_parent(vlSymsp, unnamedblk696__DOT__blk);
                }
            }
            get_backdoor__Vfuncrtn = this->__PVT__backdoor;
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clear_hdl_path(VUVM_Register8b__Syms* __restrict vlSymsp, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clear_hdl_path\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__320__verbosity;
        __Vfunc_uvm_report_enabled__320__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__320__severity;
        __Vfunc_uvm_report_enabled__320__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__321__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__322__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__324__verbosity;
        __Vtask_uvm_report_warning__324__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__324__line;
        __Vtask_uvm_report_warning__324__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__324__report_enabled_checked;
        __Vtask_uvm_report_warning__324__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__325__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__326__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_0__exists;
        {
            if (("ALL"s == kind)) {
                this->__PVT__hdl_paths_pool = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz108, vlProcess, vlSymsp, "hdl_paths"s);
                goto __Vlabel0;
            }
            if ((""s == kind)) {
                this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            }
            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1978)
                    ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
            if ((1U & (~ (0U != __VlefCall_0__exists)))) {
                this->__Vfunc_uvm_report_enabled__320__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__320__severity = 1U;
                __Vfunc_uvm_report_enabled__320__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__321__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__321__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__322__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__322__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__320__verbosity, (IData)(__Vfunc_uvm_report_enabled__320__severity), this->__Vfunc_uvm_report_enabled__320__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__324__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__324__context_name = ""s;
                    __Vtask_uvm_report_warning__324__line = 0x000007bbU;
                    this->__Vtask_uvm_report_warning__324__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_warning__324__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__324__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                    this->__Vtask_uvm_report_warning__324__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__325__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__325__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__326__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__326__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__324__id, this->__Vtask_uvm_report_warning__324__message, __Vtask_uvm_report_warning__324__verbosity, this->__Vtask_uvm_report_warning__324__filename, __Vtask_uvm_report_warning__324__line, this->__Vtask_uvm_report_warning__324__context_name, (IData)(__Vtask_uvm_report_warning__324__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1983)
                    ->__VnoInFunc_delete(vlSymsp, kind);
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_hdl_path(VUVM_Register8b__Syms* __restrict vlSymsp, std::string path, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_hdl_path\n"); );
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz2> paths;
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1993)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
        VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 1995)
                    ->__VnoInFunc_push_back(vlSymsp, path);
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_hdl_path(VUVM_Register8b__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_hdl_path\n"); );
        // Body
        IData/*31:0*/ __VlefCall_0__exists;
        has_hdl_path__Vfuncrtn = 0U;
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2006)
                    ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
        has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_hdl_path(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_hdl_path\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__335__verbosity;
        __Vfunc_uvm_report_enabled__335__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__335__severity;
        __Vfunc_uvm_report_enabled__335__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__336__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__337__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__339__verbosity;
        __Vtask_uvm_report_error__339__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__339__line;
        __Vtask_uvm_report_error__339__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__339__report_enabled_checked;
        __Vtask_uvm_report_error__339__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__340__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__341__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_3__get;
        IData/*31:0*/ __VlefCall_2__size;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__has_hdl_path;
        IData/*31:0*/ unnamedblk698__DOT__i;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz2> hdl_paths;
        {
            if ((""s == kind)) {
                this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            }
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
            if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
                this->__Vfunc_uvm_report_enabled__335__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__335__severity = 2U;
                __Vfunc_uvm_report_enabled__335__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__336__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__336__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__337__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__337__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__335__verbosity, (IData)(__Vfunc_uvm_report_enabled__335__severity), this->__Vfunc_uvm_report_enabled__335__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__339__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__339__context_name = ""s;
                    __Vtask_uvm_report_error__339__line = 0x000007e4U;
                    this->__Vtask_uvm_report_error__339__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__339__verbosity = 0U;
                    this->__Vtask_uvm_report_error__339__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("Block does not have hdl path defined for abstraction '"s, kind), "'"s));
                    this->__Vtask_uvm_report_error__339__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__340__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__340__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__341__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__341__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__339__id, this->__Vtask_uvm_report_error__339__message, __Vtask_uvm_report_error__339__verbosity, this->__Vtask_uvm_report_error__339__filename, __Vtask_uvm_report_error__339__line, this->__Vtask_uvm_report_error__339__context_name, (IData)(__Vtask_uvm_report_error__339__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2024)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
            unnamedblk698__DOT__i = 0U;
            unnamedblk698__DOT__i = 0U;
            while (true) {
                VL_NULL_CHECK(hdl_paths, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2026)
                    ->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
                if (!(VL_LTS_III(32, unnamedblk698__DOT__i, __VlefCall_2__size))) break;
                VL_NULL_CHECK(hdl_paths, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2027)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk698__DOT__i, __VlefCall_3__get);
                paths.push_back(__VlefCall_3__get);
                unnamedblk698__DOT__i = ((IData)(1U) 
                                         + unnamedblk698__DOT__i);
            }
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_hdl_path\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__349__verbosity;
        __Vfunc_uvm_report_enabled__349__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__349__severity;
        __Vfunc_uvm_report_enabled__349__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__350__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__351__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__353__verbosity;
        __Vtask_uvm_report_error__353__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__353__line;
        __Vtask_uvm_report_error__353__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__353__report_enabled_checked;
        __Vtask_uvm_report_error__353__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__354__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__355__Vfuncout;
        // Body
        VlProcess::currentp(vlProcess.get());
        IData/*31:0*/ __VlefCall_4__size;
        IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_2__has_hdl_path;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefCall_0__is_hdl_path_root;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz2> unnamedblk699__DOT__hdl_paths;
        VlQueue<std::string> unnamedblk699__DOT__parent_paths;
        IData/*31:0*/ unnamedblk699__DOT__unnamedblk700__DOT__i;
        std::string unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path;
        IData/*31:0*/ unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j;
        unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j = 0;
        {
            if ((""s == kind)) {
                this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            }
            paths.clear();
            this->__VnoInFunc_is_hdl_path_root(vlSymsp, kind, __VlefCall_0__is_hdl_path_root);
            if (__VlefCall_0__is_hdl_path_root) {
                __VlefExpr_1 = (""s != this->__PVT__root_hdl_paths
                                .at(kind));
                if (__VlefExpr_1) {
                    paths.push_back(this->__PVT__root_hdl_paths
                                    .at(kind));
                }
                goto __Vlabel0;
            }
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_2__has_hdl_path);
            if ((1U & (~ (IData)(__VlefCall_2__has_hdl_path)))) {
                this->__Vfunc_uvm_report_enabled__349__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__349__severity = 2U;
                __Vfunc_uvm_report_enabled__349__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__350__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__350__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__351__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__351__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__349__verbosity, (IData)(__Vfunc_uvm_report_enabled__349__severity), this->__Vfunc_uvm_report_enabled__349__id, __VlefCall_3__uvm_report_enabled);
                if ((0U != __VlefCall_3__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__353__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__353__context_name = ""s;
                    __Vtask_uvm_report_error__353__line = 0x00000801U;
                    this->__Vtask_uvm_report_error__353__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__353__verbosity = 0U;
                    this->__Vtask_uvm_report_error__353__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("Block does not have hdl path defined for abstraction '"s, kind), "'"s));
                    this->__Vtask_uvm_report_error__353__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__354__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__354__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__355__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__355__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__353__id, this->__Vtask_uvm_report_error__353__message, __Vtask_uvm_report_error__353__verbosity, this->__Vtask_uvm_report_error__353__filename, __Vtask_uvm_report_error__353__line, this->__Vtask_uvm_report_error__353__context_name, (IData)(__Vtask_uvm_report_error__353__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2054)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk699__DOT__hdl_paths);
            unnamedblk699__DOT__parent_paths.clear();
            unnamedblk699__DOT__parent_paths.atDefault().clear();
            if ((VlNull{} != this->__PVT__parent)) {
                VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2058)
                    ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk699__DOT__parent_paths, kind, separator);
            }
            unnamedblk699__DOT__unnamedblk700__DOT__i = 0U;
            unnamedblk699__DOT__unnamedblk700__DOT__i = 0U;
            while (true) {
                VL_NULL_CHECK(unnamedblk699__DOT__hdl_paths, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2060)
                    ->__VnoInFunc_size(vlSymsp, __VlefCall_4__size);
                if (!(VL_LTS_III(32, unnamedblk699__DOT__unnamedblk700__DOT__i, __VlefCall_4__size))) break;
                {
                    VL_NULL_CHECK(unnamedblk699__DOT__hdl_paths, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2061)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk699__DOT__unnamedblk700__DOT__i, unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path);
                    if ((0U == unnamedblk699__DOT__parent_paths.size())) {
                        if ((""s != unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path)) {
                            paths.push_back(unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path);
                        }
                        goto __Vlabel1;
                    }
                    unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j, unnamedblk699__DOT__parent_paths.size())) {
                        if ((""s == unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path)) {
                            paths.push_back(unnamedblk699__DOT__parent_paths.at(unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j));
                        } else {
                            paths.push_back(VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(unnamedblk699__DOT__parent_paths.at(unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j), separator), unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path));
                        }
                        unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j 
                            = ((IData)(1U) + unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j);
                    }
                    __Vlabel1: ;
                }
                unnamedblk699__DOT__unnamedblk700__DOT__i 
                    = ((IData)(1U) + unnamedblk699__DOT__unnamedblk700__DOT__i);
            }
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_hdl_path(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_hdl_path\n"); );
        // Body
        {
            get_default_hdl_path__Vfuncrtn = ""s;
            if (((""s == this->__PVT__default_hdl_path) 
                 & (VlNull{} != this->__PVT__parent))) {
                VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2086)
                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
                goto __Vlabel0;
            }
            get_default_hdl_path__Vfuncrtn = this->__PVT__default_hdl_path;
            __Vlabel0: ;
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_hdl_path(VUVM_Register8b__Syms* __restrict vlSymsp, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_hdl_path\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__362__verbosity;
        __Vfunc_uvm_report_enabled__362__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__362__severity;
        __Vfunc_uvm_report_enabled__362__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__363__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__364__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__366__verbosity;
        __Vtask_uvm_report_error__366__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__366__line;
        __Vtask_uvm_report_error__366__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__366__report_enabled_checked;
        __Vtask_uvm_report_error__366__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__367__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__368__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        if ((""s == kind)) {
            if ((VlNull{} == this->__PVT__parent)) {
                this->__Vfunc_uvm_report_enabled__362__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__362__severity = 2U;
                __Vfunc_uvm_report_enabled__362__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__363__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__363__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__364__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__364__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__362__verbosity, (IData)(__Vfunc_uvm_report_enabled__362__severity), this->__Vfunc_uvm_report_enabled__362__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__366__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__366__context_name = ""s;
                    __Vtask_uvm_report_error__366__line = 0x00000832U;
                    this->__Vtask_uvm_report_error__366__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__366__verbosity = 0U;
                    this->__Vtask_uvm_report_error__366__message = "Block has no parent. Must specify a valid HDL abstraction (kind)"s;
                    this->__Vtask_uvm_report_error__366__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__367__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__367__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__368__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__368__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__366__id, this->__Vtask_uvm_report_error__366__message, __Vtask_uvm_report_error__366__verbosity, this->__Vtask_uvm_report_error__366__filename, __Vtask_uvm_report_error__366__line, this->__Vtask_uvm_report_error__366__context_name, (IData)(__Vtask_uvm_report_error__366__report_enabled_checked));
                }
            }
            VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2100)
                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        this->__PVT__default_hdl_path = kind;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_hdl_path_root(VUVM_Register8b__Syms* __restrict vlSymsp, std::string path, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_hdl_path_root\n"); );
        // Body
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        this->__PVT__root_hdl_paths.at(kind) = path;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_hdl_path_root(VUVM_Register8b__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &is_hdl_path_root__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_hdl_path_root\n"); );
        // Body
        is_hdl_path_root__Vfuncrtn = 0U;
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        is_hdl_path_root__Vfuncrtn = (1U & this->__PVT__root_hdl_paths.exists(kind));
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_print\n"); );
        // Body
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_4__get_name;
        std::string __VlefCall_3__get_name;
        std::string __VlefCall_2__get_name;
        std::string __VlefCall_1__get_name;
        std::string __VlefCall_0__get_name;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk703__DOT__i;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk703__DOT__i__Vnext;
        CData/*0:0*/ unnamedblk703__DOT__i__Vmore;
        unnamedblk703__DOT__i__Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk703__DOT__unnamedblk704__DOT__b;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk703__DOT__unnamedblk704__DOT__obj;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk705__DOT__i;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk705__DOT__i__Vnext;
        CData/*0:0*/ unnamedblk705__DOT__i__Vmore;
        unnamedblk705__DOT__i__Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> unnamedblk705__DOT__unnamedblk706__DOT__r;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk705__DOT__unnamedblk706__DOT__obj;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk707__DOT__i;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk707__DOT__i__Vnext;
        CData/*0:0*/ unnamedblk707__DOT__i__Vmore;
        unnamedblk707__DOT__i__Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> unnamedblk707__DOT__unnamedblk708__DOT__r;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk707__DOT__unnamedblk708__DOT__obj;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk709__DOT__i;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk709__DOT__i__Vnext;
        CData/*0:0*/ unnamedblk709__DOT__i__Vmore;
        unnamedblk709__DOT__i__Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> unnamedblk709__DOT__unnamedblk710__DOT__m;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk709__DOT__unnamedblk710__DOT__obj;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk711__DOT__i;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk711__DOT__i__Vnext;
        CData/*0:0*/ unnamedblk711__DOT__i__Vmore;
        unnamedblk711__DOT__i__Vmore = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> unnamedblk711__DOT__unnamedblk712__DOT__m;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> unnamedblk711__DOT__unnamedblk712__DOT__obj;
        VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
        unnamedblk703__DOT__i__Vmore = (0U != this->__PVT__blks.first(unnamedblk703__DOT__i__Vnext));
        while (unnamedblk703__DOT__i__Vmore) {
            unnamedblk703__DOT__i = unnamedblk703__DOT__i__Vnext;
            unnamedblk703__DOT__i__Vmore = (0U != this->__PVT__blks.next(unnamedblk703__DOT__i__Vnext));
            unnamedblk703__DOT__unnamedblk704__DOT__b 
                = unnamedblk703__DOT__i;
            unnamedblk703__DOT__unnamedblk704__DOT__obj 
                = unnamedblk703__DOT__unnamedblk704__DOT__b;
            VL_NULL_CHECK(unnamedblk703__DOT__unnamedblk704__DOT__obj, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2138)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2138)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), unnamedblk703__DOT__unnamedblk704__DOT__obj, 0x2eU);
        }
        unnamedblk705__DOT__i__Vmore = (0U != this->__PVT__regs.first(unnamedblk705__DOT__i__Vnext));
        while (unnamedblk705__DOT__i__Vmore) {
            unnamedblk705__DOT__i = unnamedblk705__DOT__i__Vnext;
            unnamedblk705__DOT__i__Vmore = (0U != this->__PVT__regs.next(unnamedblk705__DOT__i__Vnext));
            unnamedblk705__DOT__unnamedblk706__DOT__r 
                = unnamedblk705__DOT__i;
            unnamedblk705__DOT__unnamedblk706__DOT__obj 
                = unnamedblk705__DOT__unnamedblk706__DOT__r;
            VL_NULL_CHECK(unnamedblk705__DOT__unnamedblk706__DOT__obj, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2144)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2144)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_1__get_name), unnamedblk705__DOT__unnamedblk706__DOT__obj, 0x2eU);
        }
        unnamedblk707__DOT__i__Vmore = (0U != this->__PVT__vregs.first(unnamedblk707__DOT__i__Vnext));
        while (unnamedblk707__DOT__i__Vmore) {
            unnamedblk707__DOT__i = unnamedblk707__DOT__i__Vnext;
            unnamedblk707__DOT__i__Vmore = (0U != this->__PVT__vregs.next(unnamedblk707__DOT__i__Vnext));
            unnamedblk707__DOT__unnamedblk708__DOT__r 
                = unnamedblk707__DOT__i;
            unnamedblk707__DOT__unnamedblk708__DOT__obj 
                = unnamedblk707__DOT__unnamedblk708__DOT__r;
            VL_NULL_CHECK(unnamedblk707__DOT__unnamedblk708__DOT__obj, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2150)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2150)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_2__get_name), unnamedblk707__DOT__unnamedblk708__DOT__obj, 0x2eU);
        }
        unnamedblk709__DOT__i__Vmore = (0U != this->__PVT__mems.first(unnamedblk709__DOT__i__Vnext));
        while (unnamedblk709__DOT__i__Vmore) {
            unnamedblk709__DOT__i = unnamedblk709__DOT__i__Vnext;
            unnamedblk709__DOT__i__Vmore = (0U != this->__PVT__mems.next(unnamedblk709__DOT__i__Vnext));
            unnamedblk709__DOT__unnamedblk710__DOT__m 
                = unnamedblk709__DOT__i;
            unnamedblk709__DOT__unnamedblk710__DOT__obj 
                = unnamedblk709__DOT__unnamedblk710__DOT__m;
            VL_NULL_CHECK(unnamedblk709__DOT__unnamedblk710__DOT__obj, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2156)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2156)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_3__get_name), unnamedblk709__DOT__unnamedblk710__DOT__obj, 0x2eU);
        }
        unnamedblk711__DOT__i__Vmore = (0U != this->__PVT__maps.first(unnamedblk711__DOT__i__Vnext));
        while (unnamedblk711__DOT__i__Vmore) {
            unnamedblk711__DOT__i = unnamedblk711__DOT__i__Vnext;
            unnamedblk711__DOT__i__Vmore = (0U != this->__PVT__maps.next(unnamedblk711__DOT__i__Vnext));
            unnamedblk711__DOT__unnamedblk712__DOT__m 
                = unnamedblk711__DOT__i;
            unnamedblk711__DOT__unnamedblk712__DOT__obj 
                = unnamedblk711__DOT__unnamedblk712__DOT__m;
            VL_NULL_CHECK(unnamedblk711__DOT__unnamedblk712__DOT__obj, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2162)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_block.svh", 2162)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_4__get_name), unnamedblk711__DOT__unnamedblk712__DOT__obj, 0x2eU);
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clone(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clone\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__384__verbosity;
        __Vfunc_uvm_report_enabled__384__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__384__severity;
        __Vfunc_uvm_report_enabled__384__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__385__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__386__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_fatal__388__verbosity;
        __Vtask_uvm_report_fatal__388__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_fatal__388__line;
        __Vtask_uvm_report_fatal__388__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_fatal__388__report_enabled_checked;
        __Vtask_uvm_report_fatal__388__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__389__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__390__Vfuncout;
        // Body
        VlProcess::currentp(vlProcess.get());
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        this->__Vfunc_uvm_report_enabled__384__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__384__severity = 3U;
        __Vfunc_uvm_report_enabled__384__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__385__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__385__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__386__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__386__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__384__verbosity, (IData)(__Vfunc_uvm_report_enabled__384__severity), this->__Vfunc_uvm_report_enabled__384__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_fatal__388__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_fatal__388__context_name = ""s;
            __Vtask_uvm_report_fatal__388__line = 0x0000087cU;
            this->__Vtask_uvm_report_fatal__388__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_fatal__388__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__388__message = "RegModel blocks cannot be cloned"s;
            this->__Vtask_uvm_report_fatal__388__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__389__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                = __Vfunc_get__389__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__390__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vtask_get_root__390__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                    ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__388__id, this->__Vtask_uvm_report_fatal__388__message, __Vtask_uvm_report_fatal__388__verbosity, this->__Vtask_uvm_report_fatal__388__filename, __Vtask_uvm_report_fatal__388__line, this->__Vtask_uvm_report_fatal__388__context_name, (IData)(__Vtask_uvm_report_fatal__388__report_enabled_checked));
        }
        clone__Vfuncrtn = VlNull{};
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_copy\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__392__verbosity;
        __Vfunc_uvm_report_enabled__392__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__392__severity;
        __Vfunc_uvm_report_enabled__392__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__393__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__394__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_fatal__396__verbosity;
        __Vtask_uvm_report_fatal__396__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_fatal__396__line;
        __Vtask_uvm_report_fatal__396__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_fatal__396__report_enabled_checked;
        __Vtask_uvm_report_fatal__396__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__397__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__398__Vfuncout;
        // Body
        VlProcess::currentp(vlProcess.get());
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        this->__Vfunc_uvm_report_enabled__392__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__392__severity = 3U;
        __Vfunc_uvm_report_enabled__392__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__393__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__393__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__394__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__394__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__392__verbosity, (IData)(__Vfunc_uvm_report_enabled__392__severity), this->__Vfunc_uvm_report_enabled__392__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_fatal__396__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_fatal__396__context_name = ""s;
            __Vtask_uvm_report_fatal__396__line = 0x00000883U;
            this->__Vtask_uvm_report_fatal__396__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_fatal__396__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__396__message = "RegModel blocks cannot be copied"s;
            this->__Vtask_uvm_report_fatal__396__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__397__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                = __Vfunc_get__397__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__398__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vtask_get_root__398__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                    ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__396__id, this->__Vtask_uvm_report_fatal__396__message, __Vtask_uvm_report_fatal__396__verbosity, this->__Vtask_uvm_report_fatal__396__filename, __Vtask_uvm_report_fatal__396__line, this->__Vtask_uvm_report_fatal__396__context_name, (IData)(__Vtask_uvm_report_fatal__396__report_enabled_checked));
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_compare(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_compare\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__400__verbosity;
        __Vfunc_uvm_report_enabled__400__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__400__severity;
        __Vfunc_uvm_report_enabled__400__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__401__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__402__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__404__verbosity;
        __Vtask_uvm_report_warning__404__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__404__line;
        __Vtask_uvm_report_warning__404__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__404__report_enabled_checked;
        __Vtask_uvm_report_warning__404__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__405__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__406__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        do_compare__Vfuncrtn = 0U;
        this->__Vfunc_uvm_report_enabled__400__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__400__severity = 1U;
        __Vfunc_uvm_report_enabled__400__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__401__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__401__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__402__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__402__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__400__verbosity, (IData)(__Vfunc_uvm_report_enabled__400__severity), this->__Vfunc_uvm_report_enabled__400__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_warning__404__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__404__context_name = ""s;
            __Vtask_uvm_report_warning__404__line = 0x0000088bU;
            this->__Vtask_uvm_report_warning__404__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__404__verbosity = 0U;
            this->__Vtask_uvm_report_warning__404__message = "RegModel blocks cannot be compared"s;
            this->__Vtask_uvm_report_warning__404__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__405__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__405__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__406__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__406__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__404__id, this->__Vtask_uvm_report_warning__404__message, __Vtask_uvm_report_warning__404__verbosity, this->__Vtask_uvm_report_warning__404__filename, __Vtask_uvm_report_warning__404__line, this->__Vtask_uvm_report_warning__404__context_name, (IData)(__Vtask_uvm_report_warning__404__report_enabled_checked));
        }
        do_compare__Vfuncrtn = 0U;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_pack(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_pack\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__408__verbosity;
        __Vfunc_uvm_report_enabled__408__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__408__severity;
        __Vfunc_uvm_report_enabled__408__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__409__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__410__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__412__verbosity;
        __Vtask_uvm_report_warning__412__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__412__line;
        __Vtask_uvm_report_warning__412__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__412__report_enabled_checked;
        __Vtask_uvm_report_warning__412__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__413__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__414__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        this->__Vfunc_uvm_report_enabled__408__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__408__severity = 1U;
        __Vfunc_uvm_report_enabled__408__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__409__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__409__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__410__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__410__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__408__verbosity, (IData)(__Vfunc_uvm_report_enabled__408__severity), this->__Vfunc_uvm_report_enabled__408__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_warning__412__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__412__context_name = ""s;
            __Vtask_uvm_report_warning__412__line = 0x00000893U;
            this->__Vtask_uvm_report_warning__412__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__412__verbosity = 0U;
            this->__Vtask_uvm_report_warning__412__message = "RegModel blocks cannot be packed"s;
            this->__Vtask_uvm_report_warning__412__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__413__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__413__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__414__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__414__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__412__id, this->__Vtask_uvm_report_warning__412__message, __Vtask_uvm_report_warning__412__verbosity, this->__Vtask_uvm_report_warning__412__filename, __Vtask_uvm_report_warning__412__line, this->__Vtask_uvm_report_warning__412__context_name, (IData)(__Vtask_uvm_report_warning__412__report_enabled_checked));
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_unpack(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_unpack\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__416__verbosity;
        __Vfunc_uvm_report_enabled__416__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__416__severity;
        __Vfunc_uvm_report_enabled__416__severity = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__417__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__418__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__420__verbosity;
        __Vtask_uvm_report_warning__420__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__420__line;
        __Vtask_uvm_report_warning__420__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__420__report_enabled_checked;
        __Vtask_uvm_report_warning__420__report_enabled_checked = 0;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__421__Vfuncout;
        VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__422__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        this->__Vfunc_uvm_report_enabled__416__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__416__severity = 1U;
        __Vfunc_uvm_report_enabled__416__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__417__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__417__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__418__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__418__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                    ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__416__verbosity, (IData)(__Vfunc_uvm_report_enabled__416__severity), this->__Vfunc_uvm_report_enabled__416__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_warning__420__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__420__context_name = ""s;
            __Vtask_uvm_report_warning__420__line = 0x0000089aU;
            this->__Vtask_uvm_report_warning__420__filename = "../../uvm/distrib/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__420__verbosity = 0U;
            this->__Vtask_uvm_report_warning__420__message = "RegModel blocks cannot be unpacked"s;
            this->__Vtask_uvm_report_warning__420__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__421__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__421__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__422__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__422__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__420__id, this->__Vtask_uvm_report_warning__420__message, __Vtask_uvm_report_warning__420__verbosity, this->__Vtask_uvm_report_warning__420__filename, __Vtask_uvm_report_warning__420__line, this->__Vtask_uvm_report_warning__420__context_name, (IData)(__Vtask_uvm_report_warning__420__report_enabled_checked));
        }
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_convert2string\n"); );
        // Body
        VlProcess::currentp(vlProcess.get());
        convert2string__Vfuncrtn = ""s;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_randomize\n"); );
        // Body
        IData/*31:0*/ __VlefCall_0____VBasicRand;
        VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
        this->__VnoInFunc___Vsetup_constraints(vlSymsp);
        randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
        this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
        randomize__Vfuncrtn = (randomize__Vfuncrtn 
                               & __VlefCall_0____VBasicRand);
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___Vsetup_constraints\n"); );
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___VBasicRand\n"); );
        // Body
        __VBasicRand__Vfuncrtn = 1U;
    }

    void VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::_ctor_var_reset\n"); );
        // Body
        (void)vlSymsp;  // Prevent unused variable warning
        __PVT__blks.atDefault() = 0;
        __PVT__regs.atDefault() = 0;
        __PVT__vregs.atDefault() = 0;
        __PVT__mems.atDefault() = 0;
        __PVT__maps.atDefault() = 0;
        __PVT__locked = 0;
        __PVT__has_cover = 0;
        __PVT__cover_on = 0;
        __PVT__lineno = 0;
    }

    VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::~VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block() {
        VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block::~\n"); );
    }
