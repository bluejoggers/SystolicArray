// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name) {
    VUVM_regblock_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__default_hdl_path = "RTL"s;
    /*super.new*/;
    this->__PVT__hdl_paths_pool = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_object_string_pool__Tz110, vlProcess, vlSymsp, "hdl_paths"s);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_configure(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == blk_parent)) {
            this->__Vfunc_uvm_report_enabled__2__id = "UVM/RFILE/CFG/NOBLK"s;
            __Vfunc_uvm_report_enabled__2__severity = 2U;
            __Vfunc_uvm_report_enabled__2__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__3__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__4__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), this->__Vfunc_uvm_report_enabled__2__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                __Vtask_uvm_report_error__8__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__8__context_name = ""s;
                __Vtask_uvm_report_error__8__line = 0x000000eeU;
                this->__Vtask_uvm_report_error__8__filename = "../../uvm/distrib/src/reg/uvm_reg_file.svh"s;
                __Vtask_uvm_report_error__8__verbosity = 0U;
                this->__Vtask_uvm_report_error__8__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("uvm_reg_file::configure() called without a parent block for instance \""s, __VlefCall_1__get_name), "\" of register file type \""s), __VlefCall_2__get_type_name), "\"."s));
                            this->__Vtask_uvm_report_error__8__id = "UVM/RFILE/CFG/NOBLK"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__9__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__9__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__10__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__8__id, this->__Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, this->__Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, this->__Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    this->__PVT__parent = blk_parent;
                    this->__PVT__m_rf = regfile_parent;
                    this->__VnoInFunc_add_hdl_path(vlSymsp, hdl_path, "RTL"s);
                    __Vlabel0: ;
                }
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_block(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_block\n"); );
                // Body
                get_block__Vfuncrtn = this->__PVT__parent;
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_regfile(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_regfile\n"); );
                // Body
                get_regfile__Vfuncrtn = this->__PVT__m_rf;
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clear_hdl_path(VUVM_regblock__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clear_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__17__verbosity;
                __Vfunc_uvm_report_enabled__17__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__17__severity;
                __Vfunc_uvm_report_enabled__17__severity = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__21__verbosity;
                __Vtask_uvm_report_warning__21__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__21__line;
                __Vtask_uvm_report_warning__21__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__21__report_enabled_checked;
                __Vtask_uvm_report_warning__21__report_enabled_checked = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_0__exists;
                {
                    if (("ALL"s == kind)) {
                        this->__PVT__hdl_paths_pool 
                            = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_object_string_pool__Tz110, vlProcess, vlSymsp, "hdl_paths"s);
                        goto __Vlabel0;
                    }
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_rf)) {
                            VL_NULL_CHECK(this->__PVT__m_rf, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 272)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        } else {
                            VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 274)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        }
                    }
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 277)
                                                        ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
                    if ((1U & (~ (0U != __VlefCall_0__exists)))) {
                        this->__Vfunc_uvm_report_enabled__17__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__17__severity = 1U;
                        __Vfunc_uvm_report_enabled__17__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__18__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__18__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__19__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__17__verbosity, (IData)(__Vfunc_uvm_report_enabled__17__severity), this->__Vfunc_uvm_report_enabled__17__id, __VlefCall_1__uvm_report_enabled);
                        if ((0U != __VlefCall_1__uvm_report_enabled)) {
                            __Vtask_uvm_report_warning__21__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__21__context_name = ""s;
                            __Vtask_uvm_report_warning__21__line = 0x00000116U;
                            this->__Vtask_uvm_report_warning__21__filename = "../../uvm/distrib/src/reg/uvm_reg_file.svh"s;
                            __Vtask_uvm_report_warning__21__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__21__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                            this->__Vtask_uvm_report_warning__21__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__22__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__22__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__23__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__21__id, this->__Vtask_uvm_report_warning__21__message, __Vtask_uvm_report_warning__21__verbosity, this->__Vtask_uvm_report_warning__21__filename, __Vtask_uvm_report_warning__21__line, this->__Vtask_uvm_report_warning__21__context_name, (IData)(__Vtask_uvm_report_warning__21__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 282)
                                                        ->__VnoInFunc_delete(vlSymsp, kind);
                    __Vlabel0: ;
                }
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_add_hdl_path(VUVM_regblock__Syms* __restrict vlSymsp, std::string path, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_add_hdl_path\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz2> paths;
                VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 292)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
                VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 294)
                                                        ->__VnoInFunc_push_back(vlSymsp, path);
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_has_hdl_path(VUVM_regblock__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_has_hdl_path\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0__exists;
                has_hdl_path__Vfuncrtn = 0U;
                if ((""s == kind)) {
                    if ((VlNull{} != this->__PVT__m_rf)) {
                        VL_NULL_CHECK(this->__PVT__m_rf, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 304)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                    } else {
                        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 306)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                    }
                }
                VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 309)
                                                        ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
                has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_hdl_path(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__34__verbosity;
                __Vfunc_uvm_report_enabled__34__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__34__severity;
                __Vfunc_uvm_report_enabled__34__severity = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__38__verbosity;
                __Vtask_uvm_report_error__38__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__38__line;
                __Vtask_uvm_report_error__38__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__38__report_enabled_checked;
                __Vtask_uvm_report_error__38__report_enabled_checked = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_3__get;
                IData/*31:0*/ __VlefCall_2__size;
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                CData/*0:0*/ __VlefCall_0__has_hdl_path;
                IData/*31:0*/ unnamedblk388__DOT__i;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz2> hdl_paths;
                {
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_rf)) {
                            VL_NULL_CHECK(this->__PVT__m_rf, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 321)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        } else {
                            VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 323)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        }
                    }
                    this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
                    if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
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
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__34__verbosity, (IData)(__Vfunc_uvm_report_enabled__34__severity), this->__Vfunc_uvm_report_enabled__34__id, __VlefCall_1__uvm_report_enabled);
                        if ((0U != __VlefCall_1__uvm_report_enabled)) {
                            __Vtask_uvm_report_error__38__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__38__context_name = ""s;
                            __Vtask_uvm_report_error__38__line = 0x00000147U;
                            this->__Vtask_uvm_report_error__38__filename = "../../uvm/distrib/src/reg/uvm_reg_file.svh"s;
                            __Vtask_uvm_report_error__38__verbosity = 0U;
                            this->__Vtask_uvm_report_error__38__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Register does not have hdl path defined for abstraction '"s, kind), "'"s));
                            this->__Vtask_uvm_report_error__38__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__39__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__39__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__40__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__38__id, this->__Vtask_uvm_report_error__38__message, __Vtask_uvm_report_error__38__verbosity, this->__Vtask_uvm_report_error__38__filename, __Vtask_uvm_report_error__38__line, this->__Vtask_uvm_report_error__38__context_name, (IData)(__Vtask_uvm_report_error__38__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 331)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
                    unnamedblk388__DOT__i = 0U;
                    unnamedblk388__DOT__i = 0U;
                    while (true) {
                        VL_NULL_CHECK(hdl_paths, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 333)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
                        if (!(VL_LTS_III(32, unnamedblk388__DOT__i, __VlefCall_2__size))) break;
                        VL_NULL_CHECK(hdl_paths, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 334)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk388__DOT__i, __VlefCall_3__get);
                        paths.push_back(__VlefCall_3__get);
                        unnamedblk388__DOT__i = ((IData)(1U) 
                                                 + unnamedblk388__DOT__i);
                    }
                    __Vlabel0: ;
                }
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__47__verbosity;
                __Vfunc_uvm_report_enabled__47__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__47__severity;
                __Vfunc_uvm_report_enabled__47__severity = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__48__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__49__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__51__verbosity;
                __Vtask_uvm_report_error__51__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__51__line;
                __Vtask_uvm_report_error__51__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__51__report_enabled_checked;
                __Vtask_uvm_report_error__51__report_enabled_checked = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_2__size;
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                CData/*0:0*/ __VlefCall_0__has_hdl_path;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz2> unnamedblk389__DOT__hdl_paths;
                VlQueue<std::string> unnamedblk389__DOT__parent_paths;
                IData/*31:0*/ unnamedblk389__DOT__unnamedblk390__DOT__i;
                std::string unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__hdl_path;
                IData/*31:0*/ unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__unnamedblk392__DOT__j;
                unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__unnamedblk392__DOT__j = 0;
                {
                    if ((""s == kind)) {
                        this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                    }
                    this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
                    if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
                        this->__Vfunc_uvm_report_enabled__47__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__47__severity = 2U;
                        __Vfunc_uvm_report_enabled__47__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__48__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__48__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__49__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__49__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__47__verbosity, (IData)(__Vfunc_uvm_report_enabled__47__severity), this->__Vfunc_uvm_report_enabled__47__id, __VlefCall_1__uvm_report_enabled);
                        if ((0U != __VlefCall_1__uvm_report_enabled)) {
                            __Vtask_uvm_report_error__51__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__51__context_name = ""s;
                            __Vtask_uvm_report_error__51__line = 0x0000015cU;
                            this->__Vtask_uvm_report_error__51__filename = "../../uvm/distrib/src/reg/uvm_reg_file.svh"s;
                            __Vtask_uvm_report_error__51__verbosity = 0U;
                            this->__Vtask_uvm_report_error__51__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Register file does not have hdl path defined for abstraction '"s, kind), "'"s));
                            this->__Vtask_uvm_report_error__51__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__52__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__52__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__53__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__51__id, this->__Vtask_uvm_report_error__51__message, __Vtask_uvm_report_error__51__verbosity, this->__Vtask_uvm_report_error__51__filename, __Vtask_uvm_report_error__51__line, this->__Vtask_uvm_report_error__51__context_name, (IData)(__Vtask_uvm_report_error__51__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    paths.clear();
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 355)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk389__DOT__hdl_paths);
                    unnamedblk389__DOT__parent_paths.clear();
                    unnamedblk389__DOT__parent_paths.atDefault().clear();
                    if ((VlNull{} != this->__PVT__m_rf)) {
                        VL_NULL_CHECK(this->__PVT__m_rf, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 359)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk389__DOT__parent_paths, kind, separator);
                    } else if ((VlNull{} != this->__PVT__parent)) {
                        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 361)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk389__DOT__parent_paths, kind, separator);
                    }
                    unnamedblk389__DOT__unnamedblk390__DOT__i = 0U;
                    unnamedblk389__DOT__unnamedblk390__DOT__i = 0U;
                    while (true) {
                        VL_NULL_CHECK(unnamedblk389__DOT__hdl_paths, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 363)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
                        if (!(VL_LTS_III(32, unnamedblk389__DOT__unnamedblk390__DOT__i, __VlefCall_2__size))) break;
                        {
                            VL_NULL_CHECK(unnamedblk389__DOT__hdl_paths, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 364)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk389__DOT__unnamedblk390__DOT__i, unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__hdl_path);
                            if ((0U == unnamedblk389__DOT__parent_paths.size())) {
                                if ((""s != unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__hdl_path)) {
                                    paths.push_back(unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__hdl_path);
                                }
                                goto __Vlabel1;
                            }
                            unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__unnamedblk392__DOT__j = 0U;
                            while (VL_LTS_III(32, unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__unnamedblk392__DOT__j, unnamedblk389__DOT__parent_paths.size())) {
                                if ((""s == unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__hdl_path)) {
                                    paths.push_back(unnamedblk389__DOT__parent_paths.at(unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__unnamedblk392__DOT__j));
                                } else {
                                    paths.push_back(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(unnamedblk389__DOT__parent_paths.at(unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__unnamedblk392__DOT__j), separator), unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__hdl_path));
                                }
                                unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__unnamedblk392__DOT__j 
                                    = ((IData)(1U) 
                                       + unnamedblk389__DOT__unnamedblk390__DOT__unnamedblk391__DOT__unnamedblk392__DOT__j);
                            }
                            __Vlabel1: ;
                        }
                        unnamedblk389__DOT__unnamedblk390__DOT__i 
                            = ((IData)(1U) + unnamedblk389__DOT__unnamedblk390__DOT__i);
                    }
                    __Vlabel0: ;
                }
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_default_hdl_path(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_default_hdl_path\n"); );
                // Body
                {
                    get_default_hdl_path__Vfuncrtn = ""s;
                    if ((""s == this->__PVT__default_hdl_path)) {
                        if ((VlNull{} != this->__PVT__m_rf)) {
                            VL_NULL_CHECK(this->__PVT__m_rf, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 390)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
                        } else {
                            VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 392)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
                        }
                        goto __Vlabel0;
                    }
                    get_default_hdl_path__Vfuncrtn 
                        = this->__PVT__default_hdl_path;
                    __Vlabel0: ;
                }
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_set_default_hdl_path(VUVM_regblock__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_set_default_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__64__verbosity;
                __Vfunc_uvm_report_enabled__64__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__64__severity;
                __Vfunc_uvm_report_enabled__64__severity = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__65__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__66__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__68__verbosity;
                __Vtask_uvm_report_error__68__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__68__line;
                __Vtask_uvm_report_error__68__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__68__report_enabled_checked;
                __Vtask_uvm_report_error__68__report_enabled_checked = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__69__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__70__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                {
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_rf)) {
                            VL_NULL_CHECK(this->__PVT__m_rf, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 404)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        } else if ((VlNull{} == this->__PVT__parent)) {
                            VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 406)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        } else {
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
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__64__verbosity, (IData)(__Vfunc_uvm_report_enabled__64__severity), this->__Vfunc_uvm_report_enabled__64__id, __VlefCall_0__uvm_report_enabled);
                            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                                __Vtask_uvm_report_error__68__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__68__context_name = ""s;
                                __Vtask_uvm_report_error__68__line = 0x00000199U;
                                this->__Vtask_uvm_report_error__68__filename = "../../uvm/distrib/src/reg/uvm_reg_file.svh"s;
                                __Vtask_uvm_report_error__68__verbosity = 0U;
                                this->__Vtask_uvm_report_error__68__message = "Register file has no parent. Must specify a valid HDL abstraction (kind)"s;
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
                    }
                    this->__PVT__default_hdl_path = kind;
                    __Vlabel0: ;
                }
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_parent(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_parent\n"); );
                // Body
                this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_name\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_1__get_full_name;
                std::string __VlefCall_0__get_full_name;
                {
                    get_full_name__Vfuncrtn = ""s;
                    this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
                    if ((VlNull{} != this->__PVT__m_rf)) {
                        VL_NULL_CHECK(this->__PVT__m_rf, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 435)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                        get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), get_full_name__Vfuncrtn);
                        goto __Vlabel0;
                    }
                    if ((VlNull{} == this->__PVT__parent)) {
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_reg_file.svh", 440)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                    get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), get_full_name__Vfuncrtn);
                    __Vlabel0: ;
                }
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_convert2string\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__76__verbosity;
                __Vfunc_uvm_report_enabled__76__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__76__severity;
                __Vfunc_uvm_report_enabled__76__severity = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__77__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__78__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_fatal__80__verbosity;
                __Vtask_uvm_report_fatal__80__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_fatal__80__line;
                __Vtask_uvm_report_fatal__80__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_fatal__80__report_enabled_checked;
                __Vtask_uvm_report_fatal__80__report_enabled_checked = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__81__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__82__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                convert2string__Vfuncrtn = ""s;
                this->__Vfunc_uvm_report_enabled__76__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__76__severity = 3U;
                __Vfunc_uvm_report_enabled__76__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__77__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__77__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__78__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__78__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__76__verbosity, (IData)(__Vfunc_uvm_report_enabled__76__severity), this->__Vfunc_uvm_report_enabled__76__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_fatal__80__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_fatal__80__context_name = ""s;
                    __Vtask_uvm_report_fatal__80__line = 0x000001c3U;
                    this->__Vtask_uvm_report_fatal__80__filename = "../../uvm/distrib/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_fatal__80__verbosity = 0U;
                    this->__Vtask_uvm_report_fatal__80__message = "RegModel register files cannot be converted to strings"s;
                    this->__Vtask_uvm_report_fatal__80__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__81__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                        = __Vfunc_get__81__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__82__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                        = __Vtask_get_root__82__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                                                        ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__80__id, this->__Vtask_uvm_report_fatal__80__message, __Vtask_uvm_report_fatal__80__verbosity, this->__Vtask_uvm_report_fatal__80__filename, __Vtask_uvm_report_fatal__80__line, this->__Vtask_uvm_report_fatal__80__context_name, (IData)(__Vtask_uvm_report_fatal__80__report_enabled_checked));
                }
                convert2string__Vfuncrtn = ""s;
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_print\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                VUVM_regblock_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clone(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clone\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
                __Vfunc_uvm_report_enabled__85__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
                __Vfunc_uvm_report_enabled__85__severity = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_fatal__89__verbosity;
                __Vtask_uvm_report_fatal__89__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_fatal__89__line;
                __Vtask_uvm_report_fatal__89__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_fatal__89__report_enabled_checked;
                __Vtask_uvm_report_fatal__89__report_enabled_checked = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__90__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__91__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__85__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__85__severity = 3U;
                __Vfunc_uvm_report_enabled__85__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__86__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__86__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__87__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__85__verbosity, (IData)(__Vfunc_uvm_report_enabled__85__severity), this->__Vfunc_uvm_report_enabled__85__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_fatal__89__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_fatal__89__context_name = ""s;
                    __Vtask_uvm_report_fatal__89__line = 0x000001d3U;
                    this->__Vtask_uvm_report_fatal__89__filename = "../../uvm/distrib/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_fatal__89__verbosity = 0U;
                    this->__Vtask_uvm_report_fatal__89__message = "RegModel register files cannot be cloned"s;
                    this->__Vtask_uvm_report_fatal__89__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__90__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                        = __Vfunc_get__90__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__91__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                        = __Vtask_get_root__91__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                                                        ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__89__id, this->__Vtask_uvm_report_fatal__89__message, __Vtask_uvm_report_fatal__89__verbosity, this->__Vtask_uvm_report_fatal__89__filename, __Vtask_uvm_report_fatal__89__line, this->__Vtask_uvm_report_fatal__89__context_name, (IData)(__Vtask_uvm_report_fatal__89__report_enabled_checked));
                }
                clone__Vfuncrtn = VlNull{};
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_copy\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__93__verbosity;
                __Vfunc_uvm_report_enabled__93__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__93__severity;
                __Vfunc_uvm_report_enabled__93__severity = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__94__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__95__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_fatal__97__verbosity;
                __Vtask_uvm_report_fatal__97__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_fatal__97__line;
                __Vtask_uvm_report_fatal__97__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_fatal__97__report_enabled_checked;
                __Vtask_uvm_report_fatal__97__report_enabled_checked = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__98__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__99__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__93__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__93__severity = 3U;
                __Vfunc_uvm_report_enabled__93__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__94__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__94__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__95__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__95__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__93__verbosity, (IData)(__Vfunc_uvm_report_enabled__93__severity), this->__Vfunc_uvm_report_enabled__93__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_fatal__97__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_fatal__97__context_name = ""s;
                    __Vtask_uvm_report_fatal__97__line = 0x000001daU;
                    this->__Vtask_uvm_report_fatal__97__filename = "../../uvm/distrib/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_fatal__97__verbosity = 0U;
                    this->__Vtask_uvm_report_fatal__97__message = "RegModel register files cannot be copied"s;
                    this->__Vtask_uvm_report_fatal__97__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__98__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                        = __Vfunc_get__98__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__99__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                        = __Vtask_get_root__99__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                                                        ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__97__id, this->__Vtask_uvm_report_fatal__97__message, __Vtask_uvm_report_fatal__97__verbosity, this->__Vtask_uvm_report_fatal__97__filename, __Vtask_uvm_report_fatal__97__line, this->__Vtask_uvm_report_fatal__97__context_name, (IData)(__Vtask_uvm_report_fatal__97__report_enabled_checked));
                }
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_compare(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_compare\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__101__verbosity;
                __Vfunc_uvm_report_enabled__101__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__101__severity;
                __Vfunc_uvm_report_enabled__101__severity = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__102__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__103__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__105__verbosity;
                __Vtask_uvm_report_warning__105__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__105__line;
                __Vtask_uvm_report_warning__105__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__105__report_enabled_checked;
                __Vtask_uvm_report_warning__105__report_enabled_checked = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__106__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__107__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                do_compare__Vfuncrtn = 0U;
                this->__Vfunc_uvm_report_enabled__101__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__101__severity = 1U;
                __Vfunc_uvm_report_enabled__101__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__102__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__102__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__103__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__103__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__101__verbosity, (IData)(__Vfunc_uvm_report_enabled__101__severity), this->__Vfunc_uvm_report_enabled__101__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__105__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__105__context_name = ""s;
                    __Vtask_uvm_report_warning__105__line = 0x000001e2U;
                    this->__Vtask_uvm_report_warning__105__filename = "../../uvm/distrib/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_warning__105__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__105__message = "RegModel register files cannot be compared"s;
                    this->__Vtask_uvm_report_warning__105__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__106__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__106__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__107__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__107__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__105__id, this->__Vtask_uvm_report_warning__105__message, __Vtask_uvm_report_warning__105__verbosity, this->__Vtask_uvm_report_warning__105__filename, __Vtask_uvm_report_warning__105__line, this->__Vtask_uvm_report_warning__105__context_name, (IData)(__Vtask_uvm_report_warning__105__report_enabled_checked));
                }
                do_compare__Vfuncrtn = 0U;
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_pack(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_pack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__109__verbosity;
                __Vfunc_uvm_report_enabled__109__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__109__severity;
                __Vfunc_uvm_report_enabled__109__severity = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__113__verbosity;
                __Vtask_uvm_report_warning__113__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__113__line;
                __Vtask_uvm_report_warning__113__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__113__report_enabled_checked;
                __Vtask_uvm_report_warning__113__report_enabled_checked = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__114__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__115__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__109__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__109__severity = 1U;
                __Vfunc_uvm_report_enabled__109__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__110__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__110__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__111__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__109__verbosity, (IData)(__Vfunc_uvm_report_enabled__109__severity), this->__Vfunc_uvm_report_enabled__109__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__113__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__113__context_name = ""s;
                    __Vtask_uvm_report_warning__113__line = 0x000001eaU;
                    this->__Vtask_uvm_report_warning__113__filename = "../../uvm/distrib/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_warning__113__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__113__message = "RegModel register files cannot be packed"s;
                    this->__Vtask_uvm_report_warning__113__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__114__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__114__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__115__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__115__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__113__id, this->__Vtask_uvm_report_warning__113__message, __Vtask_uvm_report_warning__113__verbosity, this->__Vtask_uvm_report_warning__113__filename, __Vtask_uvm_report_warning__113__line, this->__Vtask_uvm_report_warning__113__context_name, (IData)(__Vtask_uvm_report_warning__113__report_enabled_checked));
                }
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_unpack(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_unpack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__117__verbosity;
                __Vfunc_uvm_report_enabled__117__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__117__severity;
                __Vfunc_uvm_report_enabled__117__severity = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__118__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__119__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__121__verbosity;
                __Vtask_uvm_report_warning__121__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__121__line;
                __Vtask_uvm_report_warning__121__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__121__report_enabled_checked;
                __Vtask_uvm_report_warning__121__report_enabled_checked = 0;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__122__Vfuncout;
                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__123__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__117__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__117__severity = 1U;
                __Vfunc_uvm_report_enabled__117__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__118__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__118__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__119__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__119__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__117__verbosity, (IData)(__Vfunc_uvm_report_enabled__117__severity), this->__Vfunc_uvm_report_enabled__117__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__121__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__121__context_name = ""s;
                    __Vtask_uvm_report_warning__121__line = 0x000001f1U;
                    this->__Vtask_uvm_report_warning__121__filename = "../../uvm/distrib/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_warning__121__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__121__message = "RegModel register files cannot be unpacked"s;
                    this->__Vtask_uvm_report_warning__121__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__122__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__122__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__123__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__123__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__121__id, this->__Vtask_uvm_report_warning__121__message, __Vtask_uvm_report_warning__121__verbosity, this->__Vtask_uvm_report_warning__121__filename, __Vtask_uvm_report_warning__121__line, this->__Vtask_uvm_report_warning__121__context_name, (IData)(__Vtask_uvm_report_warning__121__report_enabled_checked));
                }
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_randomize\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0____VBasicRand;
                VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
                this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
                randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                       & __VlefCall_0____VBasicRand);
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___Vsetup_constraints\n"); );
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VBasicRand\n"); );
                // Body
                __VBasicRand__Vfuncrtn = 1U;
            }

            void VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::_ctor_var_reset\n"); );
                // Body
                (void)vlSymsp;  // Prevent unused variable warning
            }

            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::~VUVM_regblock_uvm_pkg__03a__03auvm_reg_file() {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_file::~\n"); );
            }
