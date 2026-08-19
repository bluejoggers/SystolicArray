// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_write(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_write\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_write(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_write\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_read(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_read\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_read(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_read\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits) {
    Vhello_uvm_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__6__verbosity;
    __Vtask_uvm_report_error__6__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__6__line;
    __Vtask_uvm_report_error__6__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__6__report_enabled_checked;
    __Vtask_uvm_report_error__6__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__10__verbosity;
    __Vfunc_uvm_report_enabled__10__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__10__severity;
    __Vfunc_uvm_report_enabled__10__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__15__verbosity;
    __Vtask_uvm_report_error__15__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__15__line;
    __Vtask_uvm_report_error__15__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__15__report_enabled_checked;
    __Vtask_uvm_report_error__15__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    /*super.new*/;
    if ((0U == n_bits)) {
        this->__Vfunc_uvm_report_enabled__1__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__1__severity = 2U;
        __Vfunc_uvm_report_enabled__1__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__2__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_error__6__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__6__context_name = ""s;
            __Vtask_uvm_report_error__6__line = 0x000002ecU;
            this->__Vtask_uvm_report_error__6__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_error__6__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__6__message
                          ,"Virtual register \"%s\" cannot have 0 bits",1
                          , 'S',&(__VlefCall_1__get_full_name));
            this->__Vtask_uvm_report_error__6__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__6__id, this->__Vtask_uvm_report_error__6__message, __Vtask_uvm_report_error__6__verbosity, this->__Vtask_uvm_report_error__6__filename, __Vtask_uvm_report_error__6__line, this->__Vtask_uvm_report_error__6__context_name, (IData)(__Vtask_uvm_report_error__6__report_enabled_checked));
        }
        n_bits = 1U;
    }
    if ((0x00000040U < n_bits)) {
        this->__Vfunc_uvm_report_enabled__10__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__10__severity = 2U;
        __Vfunc_uvm_report_enabled__10__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__11__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__11__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__12__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__10__verbosity, (IData)(__Vfunc_uvm_report_enabled__10__severity), this->__Vfunc_uvm_report_enabled__10__id, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            __Vtask_uvm_report_error__15__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__15__context_name = ""s;
            __Vtask_uvm_report_error__15__line = 0x000002f0U;
            this->__Vtask_uvm_report_error__15__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_error__15__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__15__message
                          ,"Virtual register \"%s\" cannot have more than 64 bits (%0d)",2
                          , 'S',&(__VlefCall_3__get_full_name)
                          , '#',32,n_bits);
            this->__Vtask_uvm_report_error__15__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__15__id, this->__Vtask_uvm_report_error__15__message, __Vtask_uvm_report_error__15__verbosity, this->__Vtask_uvm_report_error__15__filename, __Vtask_uvm_report_error__15__line, this->__Vtask_uvm_report_error__15__context_name, (IData)(__Vtask_uvm_report_error__15__report_enabled_checked));
        }
        n_bits = 0x00000040U;
    }
    this->__PVT__n_bits = n_bits;
    this->__PVT__locked = 0U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_configure(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ size, QData/*63:0*/ offset, IData/*31:0*/ incr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_configure\n"); );
    // Locals
    CData/*0:0*/ __Vtask_implement__19__Vfuncout;
    __Vtask_implement__19__Vfuncout = 0;
    // Body
    this->__PVT__parent = parent;
    this->__PVT__n_used_bits = 0U;
    if ((VlNull{} != mem)) {
        this->__VnoInFunc_implement(vlSymsp, size, mem, offset, incr, __Vtask_implement__19__Vfuncout);
        this->__PVT__is_static = 1U;
    } else {
        this->__PVT__mem = VlNull{};
        this->__PVT__is_static = 0U;
    }
    VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg.svh", 777)->__VnoInFunc_add_vreg(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg>{this});
    this->__PVT__atomic = VL_NEW(Vhello_uvm_std__03a__03asemaphore, vlSymsp, 1U);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_Xlock_modelX(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_Xlock_modelX\n"); );
    // Body
    {
        if (this->__PVT__locked) {
            goto __Vlabel0;
        }
        this->__PVT__locked = 1U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_add_field(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field> field) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_add_field\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__verbosity;
    __Vfunc_uvm_report_enabled__22__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__22__severity;
    __Vfunc_uvm_report_enabled__22__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__26__verbosity;
    __Vtask_uvm_report_error__26__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__26__line;
    __Vtask_uvm_report_error__26__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__26__report_enabled_checked;
    __Vtask_uvm_report_error__26__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__verbosity;
    __Vfunc_uvm_report_enabled__30__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__30__severity;
    __Vfunc_uvm_report_enabled__30__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__34__verbosity;
    __Vtask_uvm_report_fatal__34__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__34__line;
    __Vtask_uvm_report_fatal__34__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__34__report_enabled_checked;
    __Vtask_uvm_report_fatal__34__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__38__Vfuncout;
    __Vtask_get_lsb_pos_in_register__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__41__verbosity;
    __Vfunc_uvm_report_enabled__41__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__41__severity;
    __Vfunc_uvm_report_enabled__41__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__46__verbosity;
    __Vtask_uvm_report_error__46__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__46__line;
    __Vtask_uvm_report_error__46__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__46__report_enabled_checked;
    __Vtask_uvm_report_error__46__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__47__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__48__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__52__verbosity;
    __Vfunc_uvm_report_enabled__52__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__52__severity;
    __Vfunc_uvm_report_enabled__52__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__53__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__54__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__59__verbosity;
    __Vtask_uvm_report_error__59__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__59__line;
    __Vtask_uvm_report_error__59__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__59__report_enabled_checked;
    __Vtask_uvm_report_error__59__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__65__verbosity;
    __Vfunc_uvm_report_enabled__65__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__65__severity;
    __Vfunc_uvm_report_enabled__65__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__72__verbosity;
    __Vtask_uvm_report_error__72__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__72__line;
    __Vtask_uvm_report_error__72__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__72__report_enabled_checked;
    __Vtask_uvm_report_error__72__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__73__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__74__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_17__get_full_name;
    std::string __VlefCall_16__get_name;
    std::string __VlefCall_15__get_name;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_13__get_lsb_pos_in_register;
    IData/*31:0*/ __VlefCall_12__get_n_bits;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_name;
    std::string __VlefCall_9__get_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_7__get_n_bits;
    IData/*31:0*/ __VlefCall_6__get_lsb_pos_in_register;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__get_n_bits;
    IData/*31:0*/ __VlefCall_2__get_lsb_pos_in_register;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk397__DOT__i;
    unnamedblk397__DOT__i = 0;
    IData/*31:0*/ unnamedblk397__DOT__i__Vloopsize;
    unnamedblk397__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk397__DOT__unnamedblk398__DOT__j;
    IData/*31:0*/ offset;
    IData/*31:0*/ idx;
    {
        offset = 0U;
        idx = 0U;
        if (this->__PVT__locked) {
            this->__Vfunc_uvm_report_enabled__22__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__22__severity = 2U;
            __Vfunc_uvm_report_enabled__22__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__22__verbosity, (IData)(__Vfunc_uvm_report_enabled__22__severity), this->__Vfunc_uvm_report_enabled__22__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__26__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__26__context_name = ""s;
                __Vtask_uvm_report_error__26__line = 0x0000031cU;
                this->__Vtask_uvm_report_error__26__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__26__verbosity = 0U;
                this->__Vtask_uvm_report_error__26__message = "Cannot add virtual field to locked virtual register model"s;
                this->__Vtask_uvm_report_error__26__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__27__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__27__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__28__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__26__id, this->__Vtask_uvm_report_error__26__message, __Vtask_uvm_report_error__26__verbosity, this->__Vtask_uvm_report_error__26__filename, __Vtask_uvm_report_error__26__line, this->__Vtask_uvm_report_error__26__context_name, (IData)(__Vtask_uvm_report_error__26__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == field)) {
            this->__Vfunc_uvm_report_enabled__30__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__30__severity = 3U;
            __Vfunc_uvm_report_enabled__30__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__31__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__31__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__32__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__30__verbosity, (IData)(__Vfunc_uvm_report_enabled__30__severity), this->__Vfunc_uvm_report_enabled__30__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__34__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__34__context_name = ""s;
                __Vtask_uvm_report_fatal__34__line = 0x00000320U;
                this->__Vtask_uvm_report_fatal__34__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_fatal__34__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__34__message = "Attempting to register NULL virtual field"s;
                this->__Vtask_uvm_report_fatal__34__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__36__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__34__id, this->__Vtask_uvm_report_fatal__34__message, __Vtask_uvm_report_fatal__34__verbosity, this->__Vtask_uvm_report_fatal__34__filename, __Vtask_uvm_report_fatal__34__line, this->__Vtask_uvm_report_fatal__34__context_name, (IData)(__Vtask_uvm_report_fatal__34__report_enabled_checked));
            }
        }
        VL_NULL_CHECK(field, "../../uvm/distrib/src/reg/uvm_vreg.svh", 803)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__38__Vfuncout);
        offset = __Vtask_get_lsb_pos_in_register__38__Vfuncout;
        idx = 0xffffffffU;
        {
            unnamedblk397__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk397__DOT__i, this->__PVT__fields.size())) {
                unnamedblk397__DOT__i__Vloopsize = this->__PVT__fields.size();
                VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk397__DOT__i), "../../uvm/distrib/src/reg/uvm_vreg.svh", 807)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_2__get_lsb_pos_in_register);
                if ((offset < __VlefCall_2__get_lsb_pos_in_register)) {
                    unnamedblk397__DOT__unnamedblk398__DOT__j 
                        = unnamedblk397__DOT__i;
                    this->__PVT__fields.insert(unnamedblk397__DOT__unnamedblk398__DOT__j, field);
                    idx = unnamedblk397__DOT__i;
                    goto __Vlabel1;
                }
                if ((unnamedblk397__DOT__i__Vloopsize 
                     <= this->__PVT__fields.size())) {
                    unnamedblk397__DOT__i = ((IData)(1U) 
                                             + unnamedblk397__DOT__i);
                }
            }
            __Vlabel1: ;
        }
        if (VL_GTS_III(32, 0U, idx)) {
            this->__PVT__fields.push_back(field);
            idx = (this->__PVT__fields.size() - (IData)(1U));
        }
        VL_NULL_CHECK(field, "../../uvm/distrib/src/reg/uvm_vreg.svh", 819)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
        this->__PVT__n_used_bits = (this->__PVT__n_used_bits 
                                    + __VlefCall_3__get_n_bits);
        if ((this->__PVT__n_used_bits > this->__PVT__n_bits)) {
            this->__Vfunc_uvm_report_enabled__41__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__41__severity = 2U;
            __Vfunc_uvm_report_enabled__41__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__42__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__42__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__43__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__41__verbosity, (IData)(__Vfunc_uvm_report_enabled__41__severity), this->__Vfunc_uvm_report_enabled__41__id, __VlefCall_4__uvm_report_enabled);
            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__46__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__46__context_name = ""s;
                __Vtask_uvm_report_error__46__line = 0x00000338U;
                this->__Vtask_uvm_report_error__46__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__46__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__46__message
                              ,"Virtual fields use more bits (%0d) than available in virtual register \"%s\" (%0d)",3
                              , '#',32,this->__PVT__n_used_bits
                              , 'S',&(__VlefCall_5__get_full_name)
                              , '#',32,this->__PVT__n_bits);
                this->__Vtask_uvm_report_error__46__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__47__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__47__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__48__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__48__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__46__id, this->__Vtask_uvm_report_error__46__message, __Vtask_uvm_report_error__46__verbosity, this->__Vtask_uvm_report_error__46__filename, __Vtask_uvm_report_error__46__line, this->__Vtask_uvm_report_error__46__context_name, (IData)(__Vtask_uvm_report_error__46__report_enabled_checked));
            }
        }
        if (VL_LTS_III(32, 0U, idx)) {
            VL_NULL_CHECK(this->__PVT__fields.at((idx 
                                                  - (IData)(1U))), "../../uvm/distrib/src/reg/uvm_vreg.svh", 829)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_6__get_lsb_pos_in_register);
            VL_NULL_CHECK(this->__PVT__fields.at((idx 
                                                  - (IData)(1U))), "../../uvm/distrib/src/reg/uvm_vreg.svh", 830)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
            if (((__VlefCall_6__get_lsb_pos_in_register 
                  + __VlefCall_7__get_n_bits) > offset)) {
                this->__Vfunc_uvm_report_enabled__52__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__52__severity = 2U;
                __Vfunc_uvm_report_enabled__52__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__53__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__53__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__54__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__54__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__52__verbosity, (IData)(__Vfunc_uvm_report_enabled__52__severity), this->__Vfunc_uvm_report_enabled__52__id, __VlefCall_8__uvm_report_enabled);
                if ((0U != __VlefCall_8__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__fields.at(
                                                         (idx 
                                                          - (IData)(1U))), "../../uvm/distrib/src/reg/uvm_vreg.svh", 834)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                    VL_NULL_CHECK(field, "../../uvm/distrib/src/reg/uvm_vreg.svh", 834)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    __Vtask_uvm_report_error__59__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__59__context_name = ""s;
                    __Vtask_uvm_report_error__59__line = 0x00000342U;
                    this->__Vtask_uvm_report_error__59__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                    __Vtask_uvm_report_error__59__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__59__message
                                  ,"Field %s overlaps field %s in virtual register \"%s\"",3
                                  , 'S',&(__VlefCall_9__get_name)
                                  , 'S',&(__VlefCall_10__get_name)
                                  , 'S',&(__VlefCall_11__get_full_name));
                    this->__Vtask_uvm_report_error__59__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__60__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__60__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__61__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__59__id, this->__Vtask_uvm_report_error__59__message, __Vtask_uvm_report_error__59__verbosity, this->__Vtask_uvm_report_error__59__filename, __Vtask_uvm_report_error__59__line, this->__Vtask_uvm_report_error__59__context_name, (IData)(__Vtask_uvm_report_error__59__report_enabled_checked));
                }
            }
        }
        if (VL_LTS_III(32, idx, (this->__PVT__fields.size() 
                                 - (IData)(1U)))) {
            VL_NULL_CHECK(field, "../../uvm/distrib/src/reg/uvm_vreg.svh", 838)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_12__get_n_bits);
            VL_NULL_CHECK(this->__PVT__fields.at(((IData)(1U) 
                                                  + idx)), "../../uvm/distrib/src/reg/uvm_vreg.svh", 839)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_13__get_lsb_pos_in_register);
            if (((offset + __VlefCall_12__get_n_bits) 
                 > __VlefCall_13__get_lsb_pos_in_register)) {
                this->__Vfunc_uvm_report_enabled__65__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__65__severity = 2U;
                __Vfunc_uvm_report_enabled__65__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__66__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__66__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__67__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__65__verbosity, (IData)(__Vfunc_uvm_report_enabled__65__severity), this->__Vfunc_uvm_report_enabled__65__id, __VlefCall_14__uvm_report_enabled);
                if ((0U != __VlefCall_14__uvm_report_enabled)) {
                    VL_NULL_CHECK(field, "../../uvm/distrib/src/reg/uvm_vreg.svh", 844)->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                    VL_NULL_CHECK(this->__PVT__fields.at(
                                                         ((IData)(1U) 
                                                          + idx)), "../../uvm/distrib/src/reg/uvm_vreg.svh", 844)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    __Vtask_uvm_report_error__72__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__72__context_name = ""s;
                    __Vtask_uvm_report_error__72__line = 0x0000034cU;
                    this->__Vtask_uvm_report_error__72__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                    __Vtask_uvm_report_error__72__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__72__message
                                  ,"Field %s overlaps field %s in virtual register \"%s\"",3
                                  , 'S',&(__VlefCall_15__get_name)
                                  , 'S',&(__VlefCall_16__get_name)
                                  , 'S',&(__VlefCall_17__get_full_name));
                    this->__Vtask_uvm_report_error__72__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__73__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__73__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__74__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__74__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__72__id, this->__Vtask_uvm_report_error__72__message, __Vtask_uvm_report_error__72__verbosity, this->__Vtask_uvm_report_error__72__filename, __Vtask_uvm_report_error__72__line, this->__Vtask_uvm_report_error__72__context_name, (IData)(__Vtask_uvm_report_error__72__report_enabled_checked));
                }
            }
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_XatomicX(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_XatomicX\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__77__Vfuncout;
    __Vtask_try_get__77__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if (on) {
        co_await VL_NULL_CHECK(this->__PVT__atomic, "../../uvm/distrib/src/reg/uvm_vreg.svh", 851)->__VnoInFunc_get(vlProcess, vlSymsp, 1U);
    } else {
        VL_NULL_CHECK(this->__PVT__atomic, "../../uvm/distrib/src/reg/uvm_vreg.svh", 854)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__77__Vfuncout);
        VL_NULL_CHECK(this->__PVT__atomic, "../../uvm/distrib/src/reg/uvm_vreg.svh", 855)->__VnoInFunc_put(vlSymsp, 1U);
    }
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_reset(Vhello_uvm__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_reset\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__79__Vfuncout;
    __Vtask_try_get__79__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__atomic, "../../uvm/distrib/src/reg/uvm_vreg.svh", 863)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__79__Vfuncout);
    VL_NULL_CHECK(this->__PVT__atomic, "../../uvm/distrib/src/reg/uvm_vreg.svh", 864)->__VnoInFunc_put(vlSymsp, 1U);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> __VlefCall_0__get_parent;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> blk;
    {
        get_full_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
        this->__VnoInFunc_get_block(vlSymsp, blk);
        if ((VlNull{} == blk)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(blk, "../../uvm/distrib/src/reg/uvm_vreg.svh", 876)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_0__get_parent);
        if ((VlNull{} == __VlefCall_0__get_parent)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg.svh", 878)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), get_full_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_set_parent(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_set_parent\n"); );
    // Body
    this->__PVT__parent = parent;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_parent(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_block(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__parent;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_implement(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, IData/*31:0*/ incr, CData/*0:0*/ &implement__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_implement\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
    __Vfunc_uvm_report_enabled__85__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
    __Vfunc_uvm_report_enabled__85__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__90__verbosity;
    __Vtask_uvm_report_error__90__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__90__line;
    __Vtask_uvm_report_error__90__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__90__report_enabled_checked;
    __Vtask_uvm_report_error__90__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__91__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__92__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__94__verbosity;
    __Vfunc_uvm_report_enabled__94__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__94__severity;
    __Vfunc_uvm_report_enabled__94__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__95__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__96__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__99__verbosity;
    __Vtask_uvm_report_error__99__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__99__line;
    __Vtask_uvm_report_error__99__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__99__report_enabled_checked;
    __Vtask_uvm_report_error__99__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__100__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__101__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__103__verbosity;
    __Vfunc_uvm_report_enabled__103__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__103__severity;
    __Vfunc_uvm_report_enabled__103__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__104__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__105__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__108__verbosity;
    __Vtask_uvm_report_error__108__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__108__line;
    __Vtask_uvm_report_error__108__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__108__report_enabled_checked;
    __Vtask_uvm_report_error__108__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__109__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__110__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__113__verbosity;
    __Vfunc_uvm_report_enabled__113__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__113__severity;
    __Vfunc_uvm_report_enabled__113__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__114__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__115__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__119__verbosity;
    __Vtask_uvm_report_error__119__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__119__line;
    __Vtask_uvm_report_error__119__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__119__report_enabled_checked;
    __Vtask_uvm_report_error__119__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__120__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__121__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__125__verbosity;
    __Vfunc_uvm_report_enabled__125__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__125__severity;
    __Vfunc_uvm_report_enabled__125__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__126__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__127__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__131__verbosity;
    __Vtask_uvm_report_error__131__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__131__line;
    __Vtask_uvm_report_error__131__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__131__report_enabled_checked;
    __Vtask_uvm_report_error__131__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__132__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__133__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__136__verbosity;
    __Vfunc_uvm_report_enabled__136__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__136__severity;
    __Vfunc_uvm_report_enabled__136__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__137__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__138__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__142__verbosity;
    __Vtask_uvm_report_error__142__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__142__line;
    __Vtask_uvm_report_error__142__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__142__report_enabled_checked;
    __Vtask_uvm_report_error__142__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__143__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__144__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__148__verbosity;
    __Vfunc_uvm_report_enabled__148__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__148__severity;
    __Vfunc_uvm_report_enabled__148__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__149__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__150__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__153__verbosity;
    __Vtask_uvm_report_error__153__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__153__line;
    __Vtask_uvm_report_error__153__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__153__report_enabled_checked;
    __Vtask_uvm_report_error__153__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__154__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__155__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__157__verbosity;
    __Vfunc_uvm_report_enabled__157__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__157__severity;
    __Vfunc_uvm_report_enabled__157__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__158__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__159__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__164__verbosity;
    __Vtask_uvm_report_info__164__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__164__line;
    __Vtask_uvm_report_info__164__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__164__report_enabled_checked;
    __Vtask_uvm_report_info__164__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__165__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__166__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_25__get_full_name;
    std::string __VlefCall_24__get_full_name;
    std::string __VlefCall_23__get_full_name;
    IData/*31:0*/ __VlefCall_22__uvm_report_enabled;
    std::string __VlefCall_21__get_full_name;
    IData/*31:0*/ __VlefCall_20__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_19__get_n_bytes;
    std::string __VlefCall_18__get_full_name;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_15__get_size;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_11__get_n_bytes;
    IData/*31:0*/ __VlefCall_10__get_n_bytes;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_full_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> __VlefCall_6__get_block;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk399__DOT__min_incr;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem_region> region;
    {
        implement__Vfuncrtn = 0U;
        if ((1ULL > n)) {
            this->__Vfunc_uvm_report_enabled__85__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__85__severity = 2U;
            __Vfunc_uvm_report_enabled__85__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__86__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__86__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__87__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__85__verbosity, (IData)(__Vfunc_uvm_report_enabled__85__severity), this->__Vfunc_uvm_report_enabled__85__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__90__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__90__context_name = ""s;
                __Vtask_uvm_report_error__90__line = 0x00000387U;
                this->__Vtask_uvm_report_error__90__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__90__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__90__message
                              ,"Attempting to implement virtual register \"%s\" with a subscript less than one doesn't make sense",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__90__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__91__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__91__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__92__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__92__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__90__id, this->__Vtask_uvm_report_error__90__message, __Vtask_uvm_report_error__90__verbosity, this->__Vtask_uvm_report_error__90__filename, __Vtask_uvm_report_error__90__line, this->__Vtask_uvm_report_error__90__context_name, (IData)(__Vtask_uvm_report_error__90__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__94__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__94__severity = 2U;
            __Vfunc_uvm_report_enabled__94__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__95__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__95__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__96__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__96__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__94__verbosity, (IData)(__Vfunc_uvm_report_enabled__94__severity), this->__Vfunc_uvm_report_enabled__94__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__99__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__99__context_name = ""s;
                __Vtask_uvm_report_error__99__line = 0x0000038cU;
                this->__Vtask_uvm_report_error__99__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__99__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__99__message
                              ,"Attempting to implement virtual register \"%s\" using a NULL uvm_mem reference",1
                              , 'S',&(__VlefCall_3__get_full_name));
                this->__Vtask_uvm_report_error__99__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__100__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__100__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__101__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__101__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__99__id, this->__Vtask_uvm_report_error__99__message, __Vtask_uvm_report_error__99__verbosity, this->__Vtask_uvm_report_error__99__filename, __Vtask_uvm_report_error__99__line, this->__Vtask_uvm_report_error__99__context_name, (IData)(__Vtask_uvm_report_error__99__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (this->__PVT__is_static) {
            this->__Vfunc_uvm_report_enabled__103__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__103__severity = 2U;
            __Vfunc_uvm_report_enabled__103__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__104__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__104__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__105__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__105__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__103__verbosity, (IData)(__Vfunc_uvm_report_enabled__103__severity), this->__Vfunc_uvm_report_enabled__103__id, __VlefCall_4__uvm_report_enabled);
            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__108__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__108__context_name = ""s;
                __Vtask_uvm_report_error__108__line = 0x00000391U;
                this->__Vtask_uvm_report_error__108__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__108__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__108__message
                              ,"Virtual register \"%s\" is static and cannot be dynamically implemented",1
                              , 'S',&(__VlefCall_5__get_full_name));
                this->__Vtask_uvm_report_error__108__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__109__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__109__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__110__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__110__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__108__id, this->__Vtask_uvm_report_error__108__message, __Vtask_uvm_report_error__108__verbosity, this->__Vtask_uvm_report_error__108__filename, __Vtask_uvm_report_error__108__line, this->__Vtask_uvm_report_error__108__context_name, (IData)(__Vtask_uvm_report_error__108__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 917)->__VnoInFunc_get_block(vlSymsp, __VlefCall_6__get_block);
        if ((__VlefCall_6__get_block != this->__PVT__parent)) {
            this->__Vfunc_uvm_report_enabled__113__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__113__severity = 2U;
            __Vfunc_uvm_report_enabled__113__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__114__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__114__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__115__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__115__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__113__verbosity, (IData)(__Vfunc_uvm_report_enabled__113__severity), this->__Vfunc_uvm_report_enabled__113__id, __VlefCall_7__uvm_report_enabled);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 920)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                __Vtask_uvm_report_error__119__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__119__context_name = ""s;
                __Vtask_uvm_report_error__119__line = 0x00000398U;
                this->__Vtask_uvm_report_error__119__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__119__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__119__message
                              ,"Attempting to implement virtual register \"%s\" on memory \"%s\" in a different block",2
                              , 'S',&(__VlefCall_8__get_full_name)
                              , 'S',&(__VlefCall_9__get_full_name));
                this->__Vtask_uvm_report_error__119__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__120__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__120__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__121__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__121__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__119__id, this->__Vtask_uvm_report_error__119__message, __Vtask_uvm_report_error__119__verbosity, this->__Vtask_uvm_report_error__119__filename, __Vtask_uvm_report_error__119__line, this->__Vtask_uvm_report_error__119__context_name, (IData)(__Vtask_uvm_report_error__119__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_10__get_n_bytes);
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 925)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
        unnamedblk399__DOT__min_incr = ((IData)(1U) 
                                        + VL_DIV_III(32, 
                                                     (__VlefCall_10__get_n_bytes 
                                                      - (IData)(1U)), __VlefCall_11__get_n_bytes));
        if ((0U == incr)) {
            incr = unnamedblk399__DOT__min_incr;
        }
        if ((unnamedblk399__DOT__min_incr > incr)) {
            this->__Vfunc_uvm_report_enabled__125__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__125__severity = 2U;
            __Vfunc_uvm_report_enabled__125__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__126__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__126__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__127__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__127__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__125__verbosity, (IData)(__Vfunc_uvm_report_enabled__125__severity), this->__Vfunc_uvm_report_enabled__125__id, __VlefCall_12__uvm_report_enabled);
            if ((0U != __VlefCall_12__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 930)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                __Vtask_uvm_report_error__131__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__131__context_name = ""s;
                __Vtask_uvm_report_error__131__line = 0x000003a2U;
                this->__Vtask_uvm_report_error__131__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__131__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__131__message
                              ,"Virtual register \"%s\" increment is too small (%0d): Each virtual register requires at least %0d locations in memory \"%s\".",4
                              , 'S',&(__VlefCall_13__get_full_name)
                              , '#',32,incr, '~',32,unnamedblk399__DOT__min_incr
                              , 'S',&(__VlefCall_14__get_full_name));
                this->__Vtask_uvm_report_error__131__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__132__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__132__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__133__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__133__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__131__id, this->__Vtask_uvm_report_error__131__message, __Vtask_uvm_report_error__131__verbosity, this->__Vtask_uvm_report_error__131__filename, __Vtask_uvm_report_error__131__line, this->__Vtask_uvm_report_error__131__context_name, (IData)(__Vtask_uvm_report_error__131__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 936)->__VnoInFunc_get_size(vlSymsp, __VlefCall_15__get_size);
        if (((offset + (n * (QData)((IData)(incr)))) 
             > __VlefCall_15__get_size)) {
            this->__Vfunc_uvm_report_enabled__136__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__136__severity = 2U;
            __Vfunc_uvm_report_enabled__136__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__137__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__137__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__138__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__138__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__136__verbosity, (IData)(__Vfunc_uvm_report_enabled__136__severity), this->__Vfunc_uvm_report_enabled__136__id, __VlefCall_16__uvm_report_enabled);
            if ((0U != __VlefCall_16__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 937)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                __Vtask_uvm_report_error__142__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__142__context_name = ""s;
                __Vtask_uvm_report_error__142__line = 0x000003a9U;
                this->__Vtask_uvm_report_error__142__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__142__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__142__message
                              ,"Given Offset for Virtual register \"%s[%0d]\" is too big for memory %s@'h%0h",4
                              , 'S',&(__VlefCall_17__get_full_name)
                              , '#',64,n, 'S',&(__VlefCall_18__get_full_name)
                              , '#',64,offset);
                this->__Vtask_uvm_report_error__142__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__143__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__143__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__144__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__144__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__142__id, this->__Vtask_uvm_report_error__142__message, __Vtask_uvm_report_error__142__verbosity, this->__Vtask_uvm_report_error__142__filename, __Vtask_uvm_report_error__142__line, this->__Vtask_uvm_report_error__142__context_name, (IData)(__Vtask_uvm_report_error__142__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 941)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_19__get_n_bytes);
        VL_NULL_CHECK(VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 941)
                      ->__PVT__mam, "../../uvm/distrib/src/reg/uvm_vreg.svh", 941)->__VnoInFunc_reserve_region(vlSymsp, offset, (IData)(
                                                                                ((n 
                                                                                * (QData)((IData)(incr))) 
                                                                                * (QData)((IData)(__VlefCall_19__get_n_bytes)))), ""s, 0U, region);
        if ((VlNull{} == region)) {
            this->__Vfunc_uvm_report_enabled__148__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__148__severity = 2U;
            __Vfunc_uvm_report_enabled__148__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__149__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__149__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__150__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__150__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__148__verbosity, (IData)(__Vfunc_uvm_report_enabled__148__severity), this->__Vfunc_uvm_report_enabled__148__id, __VlefCall_20__uvm_report_enabled);
            if ((0U != __VlefCall_20__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                __Vtask_uvm_report_error__153__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__153__context_name = ""s;
                __Vtask_uvm_report_error__153__line = 0x000003b0U;
                this->__Vtask_uvm_report_error__153__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__153__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__153__message
                              ,"Could not allocate a memory region for virtual register \"%s\"",1
                              , 'S',&(__VlefCall_21__get_full_name));
                this->__Vtask_uvm_report_error__153__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__154__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__154__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__155__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__155__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__153__id, this->__Vtask_uvm_report_error__153__message, __Vtask_uvm_report_error__153__verbosity, this->__Vtask_uvm_report_error__153__filename, __Vtask_uvm_report_error__153__line, this->__Vtask_uvm_report_error__153__context_name, (IData)(__Vtask_uvm_report_error__153__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__157__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__157__severity = 0U;
            __Vfunc_uvm_report_enabled__157__verbosity = 0x000000c8U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__158__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__158__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__159__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__159__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__157__verbosity, (IData)(__Vfunc_uvm_report_enabled__157__severity), this->__Vfunc_uvm_report_enabled__157__id, __VlefCall_22__uvm_report_enabled);
            if ((0U != __VlefCall_22__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 953)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_24__get_full_name);
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 953)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                __Vtask_uvm_report_info__164__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__164__context_name = ""s;
                __Vtask_uvm_report_info__164__line = 0x000003b9U;
                this->__Vtask_uvm_report_info__164__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_info__164__verbosity = 0x000000c8U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__164__message
                              ,"Virtual register \"%s\" is being moved re-implemented from %s@'h%0h to %s@'h%0h",5
                              , 'S',&(__VlefCall_23__get_full_name)
                              , 'S',&(__VlefCall_24__get_full_name)
                              , '#',64,this->__PVT__offset
                              , 'S',&(__VlefCall_25__get_full_name)
                              , '#',64,offset);
                this->__Vtask_uvm_report_info__164__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__165__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__165__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__166__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__166__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__164__id, this->__Vtask_uvm_report_info__164__message, __Vtask_uvm_report_info__164__verbosity, this->__Vtask_uvm_report_info__164__filename, __Vtask_uvm_report_info__164__line, this->__Vtask_uvm_report_info__164__context_name, (IData)(__Vtask_uvm_report_info__164__report_enabled_checked));
            }
            this->__VnoInFunc_release_region(vlSymsp);
        }
        this->__PVT__region = region;
        this->__PVT__mem = mem;
        this->__PVT__size = n;
        this->__PVT__offset = offset;
        this->__PVT__incr = incr;
        VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 962)->__VnoInFunc_Xadd_vregX(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg>{this});
        implement__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_allocate(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem_mam> mam, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem_region> &allocate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_allocate\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__verbosity;
    __Vfunc_uvm_report_enabled__170__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__170__severity;
    __Vfunc_uvm_report_enabled__170__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__171__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__172__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__175__verbosity;
    __Vtask_uvm_report_error__175__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__175__line;
    __Vtask_uvm_report_error__175__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__175__report_enabled_checked;
    __Vtask_uvm_report_error__175__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__176__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__177__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__179__verbosity;
    __Vfunc_uvm_report_enabled__179__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__179__severity;
    __Vfunc_uvm_report_enabled__179__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__180__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__181__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__184__verbosity;
    __Vtask_uvm_report_error__184__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__184__line;
    __Vtask_uvm_report_error__184__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__184__report_enabled_checked;
    __Vtask_uvm_report_error__184__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__185__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__186__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__188__verbosity;
    __Vfunc_uvm_report_enabled__188__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__188__severity;
    __Vfunc_uvm_report_enabled__188__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__189__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__190__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__193__verbosity;
    __Vtask_uvm_report_error__193__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__193__line;
    __Vtask_uvm_report_error__193__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__193__report_enabled_checked;
    __Vtask_uvm_report_error__193__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__194__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__195__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__199__verbosity;
    __Vfunc_uvm_report_enabled__199__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__199__severity;
    __Vfunc_uvm_report_enabled__199__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__200__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__201__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__205__verbosity;
    __Vtask_uvm_report_error__205__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__205__line;
    __Vtask_uvm_report_error__205__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__205__report_enabled_checked;
    __Vtask_uvm_report_error__205__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__206__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__207__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__211__verbosity;
    __Vfunc_uvm_report_enabled__211__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__211__severity;
    __Vfunc_uvm_report_enabled__211__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__212__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__213__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__217__verbosity;
    __Vtask_uvm_report_error__217__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__217__line;
    __Vtask_uvm_report_error__217__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__217__report_enabled_checked;
    __Vtask_uvm_report_error__217__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__218__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__219__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__223__verbosity;
    __Vfunc_uvm_report_enabled__223__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__223__severity;
    __Vfunc_uvm_report_enabled__223__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__224__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__225__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__228__verbosity;
    __Vtask_uvm_report_error__228__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__228__line;
    __Vtask_uvm_report_error__228__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__228__report_enabled_checked;
    __Vtask_uvm_report_error__228__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__229__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__230__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__232__verbosity;
    __Vfunc_uvm_report_enabled__232__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__232__severity;
    __Vfunc_uvm_report_enabled__232__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__233__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__234__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__240__verbosity;
    __Vtask_uvm_report_info__240__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__240__line;
    __Vtask_uvm_report_info__240__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__240__report_enabled_checked;
    __Vtask_uvm_report_info__240__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__241__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__242__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_22__get_start_offset;
    std::string __VlefCall_21__get_full_name;
    std::string __VlefCall_20__get_full_name;
    std::string __VlefCall_19__get_full_name;
    IData/*31:0*/ __VlefCall_18__uvm_report_enabled;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_15__get_n_bytes;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_11__get_n_bytes;
    IData/*31:0*/ __VlefCall_10__get_n_bytes;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_full_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> __VlefCall_6__get_block;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk400__DOT__min_incr;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem> mem;
    {
        if ((1ULL > n)) {
            this->__Vfunc_uvm_report_enabled__170__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__170__severity = 2U;
            __Vfunc_uvm_report_enabled__170__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__171__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__171__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__172__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__172__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__170__verbosity, (IData)(__Vfunc_uvm_report_enabled__170__severity), this->__Vfunc_uvm_report_enabled__170__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__175__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__175__context_name = ""s;
                __Vtask_uvm_report_error__175__line = 0x000003d0U;
                this->__Vtask_uvm_report_error__175__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__175__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__175__message
                              ,"Attempting to implement virtual register \"%s\" with a subscript less than one doesn't make sense",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__175__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__176__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__176__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__177__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__177__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__175__id, this->__Vtask_uvm_report_error__175__message, __Vtask_uvm_report_error__175__verbosity, this->__Vtask_uvm_report_error__175__filename, __Vtask_uvm_report_error__175__line, this->__Vtask_uvm_report_error__175__context_name, (IData)(__Vtask_uvm_report_error__175__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((VlNull{} == mam)) {
            this->__Vfunc_uvm_report_enabled__179__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__179__severity = 2U;
            __Vfunc_uvm_report_enabled__179__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__180__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__180__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__181__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__181__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__179__verbosity, (IData)(__Vfunc_uvm_report_enabled__179__severity), this->__Vfunc_uvm_report_enabled__179__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__184__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__184__context_name = ""s;
                __Vtask_uvm_report_error__184__line = 0x000003d5U;
                this->__Vtask_uvm_report_error__184__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__184__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__184__message
                              ,"Attempting to implement virtual register \"%s\" using a NULL uvm_mem_mam reference",1
                              , 'S',&(__VlefCall_3__get_full_name));
                this->__Vtask_uvm_report_error__184__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__185__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__185__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__186__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__186__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__184__id, this->__Vtask_uvm_report_error__184__message, __Vtask_uvm_report_error__184__verbosity, this->__Vtask_uvm_report_error__184__filename, __Vtask_uvm_report_error__184__line, this->__Vtask_uvm_report_error__184__context_name, (IData)(__Vtask_uvm_report_error__184__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (this->__PVT__is_static) {
            this->__Vfunc_uvm_report_enabled__188__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__188__severity = 2U;
            __Vfunc_uvm_report_enabled__188__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__189__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__189__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__190__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__190__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__188__verbosity, (IData)(__Vfunc_uvm_report_enabled__188__severity), this->__Vfunc_uvm_report_enabled__188__id, __VlefCall_4__uvm_report_enabled);
            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__193__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__193__context_name = ""s;
                __Vtask_uvm_report_error__193__line = 0x000003daU;
                this->__Vtask_uvm_report_error__193__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__193__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__193__message
                              ,"Virtual register \"%s\" is static and cannot be dynamically allocated",1
                              , 'S',&(__VlefCall_5__get_full_name));
                this->__Vtask_uvm_report_error__193__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__194__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__194__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__195__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__195__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__193__id, this->__Vtask_uvm_report_error__193__message, __Vtask_uvm_report_error__193__verbosity, this->__Vtask_uvm_report_error__193__filename, __Vtask_uvm_report_error__193__line, this->__Vtask_uvm_report_error__193__context_name, (IData)(__Vtask_uvm_report_error__193__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mam, "../../uvm/distrib/src/reg/uvm_vreg.svh", 990)->__VnoInFunc_get_memory(vlSymsp, mem);
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 991)->__VnoInFunc_get_block(vlSymsp, __VlefCall_6__get_block);
        if ((__VlefCall_6__get_block != this->__PVT__parent)) {
            this->__Vfunc_uvm_report_enabled__199__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__199__severity = 2U;
            __Vfunc_uvm_report_enabled__199__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__200__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__200__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__201__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__201__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__199__verbosity, (IData)(__Vfunc_uvm_report_enabled__199__severity), this->__Vfunc_uvm_report_enabled__199__id, __VlefCall_7__uvm_report_enabled);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 994)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                __Vtask_uvm_report_error__205__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__205__context_name = ""s;
                __Vtask_uvm_report_error__205__line = 0x000003e2U;
                this->__Vtask_uvm_report_error__205__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__205__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__205__message
                              ,"Attempting to allocate virtual register \"%s\" on memory \"%s\" in a different block",2
                              , 'S',&(__VlefCall_8__get_full_name)
                              , 'S',&(__VlefCall_9__get_full_name));
                this->__Vtask_uvm_report_error__205__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__206__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__206__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__207__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__207__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__205__id, this->__Vtask_uvm_report_error__205__message, __Vtask_uvm_report_error__205__verbosity, this->__Vtask_uvm_report_error__205__filename, __Vtask_uvm_report_error__205__line, this->__Vtask_uvm_report_error__205__context_name, (IData)(__Vtask_uvm_report_error__205__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_10__get_n_bytes);
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 999)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
        unnamedblk400__DOT__min_incr = ((IData)(1U) 
                                        + VL_DIV_III(32, 
                                                     (__VlefCall_10__get_n_bytes 
                                                      - (IData)(1U)), __VlefCall_11__get_n_bytes));
        if ((0U == this->__PVT__incr)) {
            this->__PVT__incr = unnamedblk400__DOT__min_incr;
        }
        if ((unnamedblk400__DOT__min_incr < this->__PVT__incr)) {
            this->__Vfunc_uvm_report_enabled__211__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__211__severity = 2U;
            __Vfunc_uvm_report_enabled__211__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__212__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__212__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__213__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__213__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__211__verbosity, (IData)(__Vfunc_uvm_report_enabled__211__severity), this->__Vfunc_uvm_report_enabled__211__id, __VlefCall_12__uvm_report_enabled);
            if ((0U != __VlefCall_12__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1004)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                __Vtask_uvm_report_error__217__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__217__context_name = ""s;
                __Vtask_uvm_report_error__217__line = 0x000003ecU;
                this->__Vtask_uvm_report_error__217__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__217__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__217__message
                              ,"Virtual register \"%s\" increment is too small (%0d): Each virtual register requires at least %0d locations in memory \"%s\".",4
                              , 'S',&(__VlefCall_13__get_full_name)
                              , '#',32,this->__PVT__incr
                              , '~',32,unnamedblk400__DOT__min_incr
                              , 'S',&(__VlefCall_14__get_full_name));
                this->__Vtask_uvm_report_error__217__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__218__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__218__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__219__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__219__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__217__id, this->__Vtask_uvm_report_error__217__message, __Vtask_uvm_report_error__217__verbosity, this->__Vtask_uvm_report_error__217__filename, __Vtask_uvm_report_error__217__line, this->__Vtask_uvm_report_error__217__context_name, (IData)(__Vtask_uvm_report_error__217__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1010)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_15__get_n_bytes);
        VL_NULL_CHECK(mam, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1010)->__VnoInFunc_request_region(vlSymsp, (IData)(
                                                                                ((n 
                                                                                * (QData)((IData)(this->__PVT__incr))) 
                                                                                * (QData)((IData)(__VlefCall_15__get_n_bytes)))), alloc, ""s, 0U, allocate__Vfuncrtn);
        if ((VlNull{} == allocate__Vfuncrtn)) {
            this->__Vfunc_uvm_report_enabled__223__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__223__severity = 2U;
            __Vfunc_uvm_report_enabled__223__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__224__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__224__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__225__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__225__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__223__verbosity, (IData)(__Vfunc_uvm_report_enabled__223__severity), this->__Vfunc_uvm_report_enabled__223__id, __VlefCall_16__uvm_report_enabled);
            if ((0U != __VlefCall_16__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                __Vtask_uvm_report_error__228__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__228__context_name = ""s;
                __Vtask_uvm_report_error__228__line = 0x000003f4U;
                this->__Vtask_uvm_report_error__228__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__228__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__228__message
                              ,"Could not allocate a memory region for virtual register \"%s\"",1
                              , 'S',&(__VlefCall_17__get_full_name));
                this->__Vtask_uvm_report_error__228__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__229__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__229__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__230__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__230__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__228__id, this->__Vtask_uvm_report_error__228__message, __Vtask_uvm_report_error__228__verbosity, this->__Vtask_uvm_report_error__228__filename, __Vtask_uvm_report_error__228__line, this->__Vtask_uvm_report_error__228__context_name, (IData)(__Vtask_uvm_report_error__228__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__232__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__232__severity = 0U;
            __Vfunc_uvm_report_enabled__232__verbosity = 0x000000c8U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__233__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__233__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__234__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__234__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__232__verbosity, (IData)(__Vfunc_uvm_report_enabled__232__severity), this->__Vfunc_uvm_report_enabled__232__id, __VlefCall_18__uvm_report_enabled);
            if ((0U != __VlefCall_18__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1022)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1022)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                VL_NULL_CHECK(allocate__Vfuncrtn, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1022)->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_22__get_start_offset);
                __Vtask_uvm_report_info__240__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__240__context_name = ""s;
                __Vtask_uvm_report_info__240__line = 0x000003feU;
                this->__Vtask_uvm_report_info__240__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_info__240__verbosity = 0x000000c8U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__240__message
                              ,"Virtual register \"%s\" is being moved from %s@'h%0h to %s@'h%0h",5
                              , 'S',&(__VlefCall_19__get_full_name)
                              , 'S',&(__VlefCall_20__get_full_name)
                              , '#',64,this->__PVT__offset
                              , 'S',&(__VlefCall_21__get_full_name)
                              , '#',64,__VlefCall_22__get_start_offset);
                this->__Vtask_uvm_report_info__240__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__241__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__241__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__242__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__242__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__240__id, this->__Vtask_uvm_report_info__240__message, __Vtask_uvm_report_info__240__verbosity, this->__Vtask_uvm_report_info__240__filename, __Vtask_uvm_report_info__240__line, this->__Vtask_uvm_report_info__240__context_name, (IData)(__Vtask_uvm_report_info__240__report_enabled_checked));
            }
            this->__VnoInFunc_release_region(vlSymsp);
        }
        this->__PVT__region = allocate__Vfuncrtn;
        VL_NULL_CHECK(mam, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1029)->__VnoInFunc_get_memory(vlSymsp, this->__PVT__mem);
        VL_NULL_CHECK(allocate__Vfuncrtn, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1030)->__VnoInFunc_get_start_offset(vlSymsp, this->__PVT__offset);
        this->__PVT__size = n;
        VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1034)->__VnoInFunc_Xadd_vregX(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg>{this});
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_region(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem_region> &get_region__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_region\n"); );
    // Body
    get_region__Vfuncrtn = this->__PVT__region;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_release_region(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_release_region\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__248__verbosity;
    __Vfunc_uvm_report_enabled__248__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__248__severity;
    __Vfunc_uvm_report_enabled__248__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__249__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__250__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__253__verbosity;
    __Vtask_uvm_report_error__253__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__253__line;
    __Vtask_uvm_report_error__253__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__253__report_enabled_checked;
    __Vtask_uvm_report_error__253__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__254__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__255__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if (this->__PVT__is_static) {
            this->__Vfunc_uvm_report_enabled__248__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__248__severity = 2U;
            __Vfunc_uvm_report_enabled__248__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__249__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__249__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__250__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__250__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__248__verbosity, (IData)(__Vfunc_uvm_report_enabled__248__severity), this->__Vfunc_uvm_report_enabled__248__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__253__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__253__context_name = ""s;
                __Vtask_uvm_report_error__253__line = 0x00000415U;
                this->__Vtask_uvm_report_error__253__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__253__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__253__message
                              ,"Virtual register \"%s\" is static and cannot be dynamically released",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__253__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__254__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__254__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__255__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__255__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__253__id, this->__Vtask_uvm_report_error__253__message, __Vtask_uvm_report_error__253__verbosity, this->__Vtask_uvm_report_error__253__filename, __Vtask_uvm_report_error__253__line, this->__Vtask_uvm_report_error__253__context_name, (IData)(__Vtask_uvm_report_error__253__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__mem)) {
            VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1050)->__VnoInFunc_Xdelete_vregX(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg>{this});
        }
        if ((VlNull{} != this->__PVT__region)) {
            VL_NULL_CHECK(this->__PVT__region, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1053)->__VnoInFunc_release_region(vlSymsp);
        }
        this->__PVT__region = VlNull{};
        this->__PVT__mem = VlNull{};
        this->__PVT__size = 0ULL;
        this->__PVT__offset = 0ULL;
        this->__VnoInFunc_reset(vlSymsp, "HARD"s);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_memory(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_memory\n"); );
    // Body
    get_memory__Vfuncrtn = this->__PVT__mem;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_offset_in_memory(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &get_offset_in_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_offset_in_memory\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__260__verbosity;
    __Vfunc_uvm_report_enabled__260__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__260__severity;
    __Vfunc_uvm_report_enabled__260__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__261__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__262__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__265__verbosity;
    __Vtask_uvm_report_error__265__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__265__line;
    __Vtask_uvm_report_error__265__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__265__report_enabled_checked;
    __Vtask_uvm_report_error__265__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__266__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__267__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_offset_in_memory__Vfuncrtn = 0ULL;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__260__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__260__severity = 2U;
            __Vfunc_uvm_report_enabled__260__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__261__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__261__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__262__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__262__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__260__verbosity, (IData)(__Vfunc_uvm_report_enabled__260__severity), this->__Vfunc_uvm_report_enabled__260__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__265__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__265__context_name = ""s;
                __Vtask_uvm_report_error__265__line = 0x00000431U;
                this->__Vtask_uvm_report_error__265__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__265__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__265__message
                              ,"Cannot call uvm_vreg::get_offset_in_memory() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__265__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__266__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__266__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__267__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__267__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__265__id, this->__Vtask_uvm_report_error__265__message, __Vtask_uvm_report_error__265__verbosity, this->__Vtask_uvm_report_error__265__filename, __Vtask_uvm_report_error__265__line, this->__Vtask_uvm_report_error__265__context_name, (IData)(__Vtask_uvm_report_error__265__report_enabled_checked));
            }
            get_offset_in_memory__Vfuncrtn = 0ULL;
            goto __Vlabel0;
        }
        get_offset_in_memory__Vfuncrtn = (this->__PVT__offset 
                                          + (idx * (QData)((IData)(this->__PVT__incr))));
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_address(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ idx, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_address\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__269__verbosity;
    __Vfunc_uvm_report_enabled__269__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__269__severity;
    __Vfunc_uvm_report_enabled__269__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__270__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__271__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__274__verbosity;
    __Vtask_uvm_report_error__274__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__274__line;
    __Vtask_uvm_report_error__274__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__274__report_enabled_checked;
    __Vtask_uvm_report_error__274__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__275__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__276__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_2__get_offset_in_memory;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_address__Vfuncrtn = 0ULL;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__269__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__269__severity = 2U;
            __Vfunc_uvm_report_enabled__269__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__270__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__270__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__271__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__271__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__269__verbosity, (IData)(__Vfunc_uvm_report_enabled__269__severity), this->__Vfunc_uvm_report_enabled__269__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__274__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__274__context_name = ""s;
                __Vtask_uvm_report_error__274__line = 0x0000043cU;
                this->__Vtask_uvm_report_error__274__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__274__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__274__message
                              ,"Cannot get address of of unimplemented virtual register \"%s\".",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__274__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__275__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__275__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__276__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__276__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__274__id, this->__Vtask_uvm_report_error__274__message, __Vtask_uvm_report_error__274__verbosity, this->__Vtask_uvm_report_error__274__filename, __Vtask_uvm_report_error__274__line, this->__Vtask_uvm_report_error__274__context_name, (IData)(__Vtask_uvm_report_error__274__report_enabled_checked));
            }
            get_address__Vfuncrtn = 0ULL;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_2__get_offset_in_memory);
        VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1088)->__VnoInFunc_get_address(vlProcess, vlSymsp, __VlefCall_2__get_offset_in_memory, map, get_address__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_size(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_size\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__280__verbosity;
    __Vfunc_uvm_report_enabled__280__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__280__severity;
    __Vfunc_uvm_report_enabled__280__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__281__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__282__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__285__verbosity;
    __Vtask_uvm_report_error__285__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__285__line;
    __Vtask_uvm_report_error__285__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__285__report_enabled_checked;
    __Vtask_uvm_report_error__285__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__286__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__287__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_size__Vfuncrtn = 0U;
        if ((0ULL == this->__PVT__size)) {
            this->__Vfunc_uvm_report_enabled__280__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__280__severity = 2U;
            __Vfunc_uvm_report_enabled__280__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__281__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__281__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__282__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__282__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__280__verbosity, (IData)(__Vfunc_uvm_report_enabled__280__severity), this->__Vfunc_uvm_report_enabled__280__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__285__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__285__context_name = ""s;
                __Vtask_uvm_report_error__285__line = 0x00000447U;
                this->__Vtask_uvm_report_error__285__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__285__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__285__message
                              ,"Cannot call uvm_vreg::get_size() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__285__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__286__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__286__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__287__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__287__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__285__id, this->__Vtask_uvm_report_error__285__message, __Vtask_uvm_report_error__285__verbosity, this->__Vtask_uvm_report_error__285__filename, __Vtask_uvm_report_error__285__line, this->__Vtask_uvm_report_error__285__context_name, (IData)(__Vtask_uvm_report_error__285__report_enabled_checked));
            }
            get_size__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_size__Vfuncrtn = (IData)(this->__PVT__size);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_bytes(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((IData)(1U) + ((this->__PVT__n_bits 
                                             - (IData)(1U)) 
                                            >> 3U));
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_memlocs(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_memlocs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_memlocs\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__289__verbosity;
    __Vfunc_uvm_report_enabled__289__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__289__severity;
    __Vfunc_uvm_report_enabled__289__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__290__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__291__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__294__verbosity;
    __Vtask_uvm_report_error__294__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__294__line;
    __Vtask_uvm_report_error__294__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__294__report_enabled_checked;
    __Vtask_uvm_report_error__294__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__295__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__296__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_n_memlocs__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__289__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__289__severity = 2U;
            __Vfunc_uvm_report_enabled__289__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__290__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__290__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__291__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__291__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__289__verbosity, (IData)(__Vfunc_uvm_report_enabled__289__severity), this->__Vfunc_uvm_report_enabled__289__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__294__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__294__context_name = ""s;
                __Vtask_uvm_report_error__294__line = 0x00000457U;
                this->__Vtask_uvm_report_error__294__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__294__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__294__message
                              ,"Cannot call uvm_vreg::get_n_memlocs() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__294__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__295__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__295__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__296__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__296__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__294__id, this->__Vtask_uvm_report_error__294__message, __Vtask_uvm_report_error__294__verbosity, this->__Vtask_uvm_report_error__294__filename, __Vtask_uvm_report_error__294__line, this->__Vtask_uvm_report_error__294__context_name, (IData)(__Vtask_uvm_report_error__294__report_enabled_checked));
            }
            get_n_memlocs__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1115)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
        get_n_memlocs__Vfuncrtn = ((IData)(1U) + VL_DIV_III(32, 
                                                            (__VlefCall_2__get_n_bytes 
                                                             - (IData)(1U)), __VlefCall_3__get_n_bytes));
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_incr(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_incr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_incr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__300__verbosity;
    __Vfunc_uvm_report_enabled__300__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__300__severity;
    __Vfunc_uvm_report_enabled__300__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__301__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__302__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__305__verbosity;
    __Vtask_uvm_report_error__305__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__305__line;
    __Vtask_uvm_report_error__305__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__305__report_enabled_checked;
    __Vtask_uvm_report_error__305__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__306__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__307__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_incr__Vfuncrtn = 0U;
        if ((0U == this->__PVT__incr)) {
            this->__Vfunc_uvm_report_enabled__300__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__300__severity = 2U;
            __Vfunc_uvm_report_enabled__300__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__301__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__301__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__302__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__302__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__300__verbosity, (IData)(__Vfunc_uvm_report_enabled__300__severity), this->__Vfunc_uvm_report_enabled__300__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__305__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__305__context_name = ""s;
                __Vtask_uvm_report_error__305__line = 0x00000462U;
                this->__Vtask_uvm_report_error__305__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__305__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__305__message
                              ,"Cannot call uvm_vreg::get_incr() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__305__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__306__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__306__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__307__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__307__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__305__id, this->__Vtask_uvm_report_error__305__message, __Vtask_uvm_report_error__305__verbosity, this->__Vtask_uvm_report_error__305__filename, __Vtask_uvm_report_error__305__line, this->__Vtask_uvm_report_error__305__context_name, (IData)(__Vtask_uvm_report_error__305__report_enabled_checked));
            }
            get_incr__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_incr__Vfuncrtn = this->__PVT__incr;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_maps(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_maps\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__309__verbosity;
    __Vfunc_uvm_report_enabled__309__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__309__severity;
    __Vfunc_uvm_report_enabled__309__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__310__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__311__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__314__verbosity;
    __Vtask_uvm_report_error__314__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__314__line;
    __Vtask_uvm_report_error__314__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__314__report_enabled_checked;
    __Vtask_uvm_report_error__314__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__315__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__316__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_n_maps__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__309__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__309__severity = 2U;
            __Vfunc_uvm_report_enabled__309__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__310__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__310__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__311__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__311__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__309__verbosity, (IData)(__Vfunc_uvm_report_enabled__309__severity), this->__Vfunc_uvm_report_enabled__309__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__314__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__314__context_name = ""s;
                __Vtask_uvm_report_error__314__line = 0x0000046dU;
                this->__Vtask_uvm_report_error__314__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__314__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__314__message
                              ,"Cannot call uvm_vreg::get_n_maps() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__314__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__315__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__315__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__316__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__316__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__314__id, this->__Vtask_uvm_report_error__314__message, __Vtask_uvm_report_error__314__verbosity, this->__Vtask_uvm_report_error__314__filename, __Vtask_uvm_report_error__314__line, this->__Vtask_uvm_report_error__314__context_name, (IData)(__Vtask_uvm_report_error__314__report_enabled_checked));
            }
            get_n_maps__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1137)->__VnoInFunc_get_n_maps(vlSymsp, get_n_maps__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_maps(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_maps\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__319__verbosity;
    __Vfunc_uvm_report_enabled__319__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__319__severity;
    __Vfunc_uvm_report_enabled__319__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__320__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__321__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__324__verbosity;
    __Vtask_uvm_report_error__324__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__324__line;
    __Vtask_uvm_report_error__324__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__324__report_enabled_checked;
    __Vtask_uvm_report_error__324__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__325__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__326__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__319__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__319__severity = 2U;
            __Vfunc_uvm_report_enabled__319__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__320__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__320__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__321__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__321__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__319__verbosity, (IData)(__Vfunc_uvm_report_enabled__319__severity), this->__Vfunc_uvm_report_enabled__319__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__324__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__324__context_name = ""s;
                __Vtask_uvm_report_error__324__line = 0x00000478U;
                this->__Vtask_uvm_report_error__324__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__324__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__324__message
                              ,"Cannot call uvm_vreg::get_maps() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__324__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__325__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__325__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__326__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__326__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__324__id, this->__Vtask_uvm_report_error__324__message, __Vtask_uvm_report_error__324__verbosity, this->__Vtask_uvm_report_error__324__filename, __Vtask_uvm_report_error__324__line, this->__Vtask_uvm_report_error__324__context_name, (IData)(__Vtask_uvm_report_error__324__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1148)->__VnoInFunc_get_maps(vlSymsp, maps);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_is_in_map(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_is_in_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__329__verbosity;
    __Vfunc_uvm_report_enabled__329__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__329__severity;
    __Vfunc_uvm_report_enabled__329__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__330__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__331__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__334__verbosity;
    __Vtask_uvm_report_error__334__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__334__line;
    __Vtask_uvm_report_error__334__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__334__report_enabled_checked;
    __Vtask_uvm_report_error__334__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__335__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__336__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        is_in_map__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__329__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__329__severity = 2U;
            __Vfunc_uvm_report_enabled__329__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__330__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__330__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__331__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__331__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__329__verbosity, (IData)(__Vfunc_uvm_report_enabled__329__severity), this->__Vfunc_uvm_report_enabled__329__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__334__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__334__context_name = ""s;
                __Vtask_uvm_report_error__334__line = 0x00000483U;
                this->__Vtask_uvm_report_error__334__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__334__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__334__message
                              ,"Cannot call uvm_vreg::is_in_map() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__334__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__335__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__335__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__336__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__336__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__334__id, this->__Vtask_uvm_report_error__334__message, __Vtask_uvm_report_error__334__verbosity, this->__Vtask_uvm_report_error__334__filename, __Vtask_uvm_report_error__334__line, this->__Vtask_uvm_report_error__334__context_name, (IData)(__Vtask_uvm_report_error__334__report_enabled_checked));
            }
            is_in_map__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1159)->__VnoInFunc_is_in_map(vlSymsp, map, is_in_map__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_access(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__339__verbosity;
    __Vfunc_uvm_report_enabled__339__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__339__severity;
    __Vfunc_uvm_report_enabled__339__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__340__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__341__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__344__verbosity;
    __Vtask_uvm_report_error__344__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__344__line;
    __Vtask_uvm_report_error__344__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__344__report_enabled_checked;
    __Vtask_uvm_report_error__344__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__345__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__346__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_access__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__339__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__339__severity = 2U;
            __Vfunc_uvm_report_enabled__339__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__340__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__340__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__341__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__341__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__339__verbosity, (IData)(__Vfunc_uvm_report_enabled__339__severity), this->__Vfunc_uvm_report_enabled__339__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__344__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__344__context_name = ""s;
                __Vtask_uvm_report_error__344__line = 0x0000048eU;
                this->__Vtask_uvm_report_error__344__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__344__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__344__message
                              ,"Cannot call uvm_vreg::get_rights() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__344__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__345__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__345__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__346__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__346__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__344__id, this->__Vtask_uvm_report_error__344__message, __Vtask_uvm_report_error__344__verbosity, this->__Vtask_uvm_report_error__344__filename, __Vtask_uvm_report_error__344__line, this->__Vtask_uvm_report_error__344__context_name, (IData)(__Vtask_uvm_report_error__344__report_enabled_checked));
            }
            get_access__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1170)->__VnoInFunc_get_access(vlProcess, vlSymsp, map, get_access__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_rights(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_rights\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__349__verbosity;
    __Vfunc_uvm_report_enabled__349__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__349__severity;
    __Vfunc_uvm_report_enabled__349__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__350__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__351__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__354__verbosity;
    __Vtask_uvm_report_error__354__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__354__line;
    __Vtask_uvm_report_error__354__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__354__report_enabled_checked;
    __Vtask_uvm_report_error__354__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__355__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__356__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_rights__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__349__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__349__severity = 2U;
            __Vfunc_uvm_report_enabled__349__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__350__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__350__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__351__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__351__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__349__verbosity, (IData)(__Vfunc_uvm_report_enabled__349__severity), this->__Vfunc_uvm_report_enabled__349__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__354__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__354__context_name = ""s;
                __Vtask_uvm_report_error__354__line = 0x00000499U;
                this->__Vtask_uvm_report_error__354__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__354__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__354__message
                              ,"Cannot call uvm_vreg::get_rights() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__354__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__355__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__355__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__356__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__356__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__354__id, this->__Vtask_uvm_report_error__354__message, __Vtask_uvm_report_error__354__verbosity, this->__Vtask_uvm_report_error__354__filename, __Vtask_uvm_report_error__354__line, this->__Vtask_uvm_report_error__354__context_name, (IData)(__Vtask_uvm_report_error__354__report_enabled_checked));
            }
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1181)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, get_rights__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_fields(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_fields\n"); );
    // Body
    IData/*31:0*/ unnamedblk401__DOT__i;
    unnamedblk401__DOT__i = 0;
    unnamedblk401__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk401__DOT__i, this->__PVT__fields.size())) {
        fields.push_back(this->__PVT__fields.at(unnamedblk401__DOT__i));
        unnamedblk401__DOT__i = ((IData)(1U) + unnamedblk401__DOT__i);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_field_by_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field> &get_field_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_field_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__360__verbosity;
    __Vfunc_uvm_report_enabled__360__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__360__severity;
    __Vfunc_uvm_report_enabled__360__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__361__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__362__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__365__verbosity;
    __Vtask_uvm_report_warning__365__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__365__line;
    __Vtask_uvm_report_warning__365__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__365__report_enabled_checked;
    __Vtask_uvm_report_warning__365__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__366__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__367__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk402__DOT__i;
    unnamedblk402__DOT__i = 0;
    IData/*31:0*/ unnamedblk402__DOT__i__Vloopsize;
    unnamedblk402__DOT__i__Vloopsize = 0;
    {
        unnamedblk402__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk402__DOT__i, this->__PVT__fields.size())) {
            unnamedblk402__DOT__i__Vloopsize = this->__PVT__fields.size();
            VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk402__DOT__i), "../../uvm/distrib/src/reg/uvm_vreg.svh", 1193)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_field_by_name__Vfuncrtn = this->__PVT__fields.at(unnamedblk402__DOT__i);
                goto __Vlabel0;
            }
            if ((unnamedblk402__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk402__DOT__i = ((IData)(1U) 
                                         + unnamedblk402__DOT__i);
            }
        }
        this->__Vfunc_uvm_report_enabled__360__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__360__severity = 1U;
        __Vfunc_uvm_report_enabled__360__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__361__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__361__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__362__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__362__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__360__verbosity, (IData)(__Vfunc_uvm_report_enabled__360__severity), this->__Vfunc_uvm_report_enabled__360__id, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__365__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__365__context_name = ""s;
            __Vtask_uvm_report_warning__365__line = 0x000004aeU;
            this->__Vtask_uvm_report_warning__365__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_warning__365__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__365__message
                          ,"Unable to locate field \"%s\" in virtual register \"%s\".",2
                          , 'S',&(name), 'S',&(__VlefCall_2__get_full_name));
            this->__Vtask_uvm_report_warning__365__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__366__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__366__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__367__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__367__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__365__id, this->__Vtask_uvm_report_warning__365__message, __Vtask_uvm_report_warning__365__verbosity, this->__Vtask_uvm_report_warning__365__filename, __Vtask_uvm_report_warning__365__line, this->__Vtask_uvm_report_warning__365__context_name, (IData)(__Vtask_uvm_report_warning__365__report_enabled_checked));
        }
        get_field_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_write(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__370__verbosity;
    __Vfunc_uvm_report_enabled__370__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__370__severity;
    __Vfunc_uvm_report_enabled__370__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__371__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__372__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__375__verbosity;
    __Vtask_uvm_report_error__375__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__375__line;
    __Vtask_uvm_report_error__375__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__375__report_enabled_checked;
    __Vtask_uvm_report_error__375__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__376__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__377__Vfuncout;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__381__Vfuncout;
    __Vtask_get_lsb_pos_in_register__381__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__393__status;
    __Vtask_write__393__status = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__400__Vfuncout;
    __Vtask_get_lsb_pos_in_register__400__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__406__verbosity;
    __Vfunc_uvm_report_enabled__406__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__406__severity;
    __Vfunc_uvm_report_enabled__406__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__407__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__408__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__411__verbosity;
    __Vtask_uvm_report_info__411__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__411__line;
    __Vtask_uvm_report_info__411__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__411__report_enabled_checked;
    __Vtask_uvm_report_info__411__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__412__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__413__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_8__get_full_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_6__get_n_bits;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    IData/*31:0*/ __VlefCall_4__get_n_bytes;
    IData/*31:0*/ __VlefCall_3__get_n_memlocs;
    IData/*31:0*/ __VlefCall_2__get_n_bits;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk403__DOT__i;
    unnamedblk403__DOT__i = 0;
    IData/*31:0*/ unnamedblk403__DOT__i__Vloopsize;
    unnamedblk403__DOT__i__Vloopsize = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz23_TBz24> unnamedblk403__DOT__unnamedblk404__DOT__cbs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field> unnamedblk403__DOT__unnamedblk404__DOT__f;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk403__DOT__unnamedblk404__DOT__unnamedblk405__DOT__cb;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk406__DOT__cb;
    IData/*31:0*/ unnamedblk407__DOT__i;
    IData/*31:0*/ unnamedblk407__DOT__unnamedblk408__DOT__s;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk409__DOT__cb;
    IData/*31:0*/ unnamedblk410__DOT__i;
    unnamedblk410__DOT__i = 0;
    IData/*31:0*/ unnamedblk410__DOT__i__Vloopsize;
    unnamedblk410__DOT__i__Vloopsize = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz23_TBz24> unnamedblk410__DOT__unnamedblk411__DOT__cbs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field> unnamedblk410__DOT__unnamedblk411__DOT__f;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk410__DOT__unnamedblk411__DOT__unnamedblk412__DOT__cb;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26> cbs;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    QData/*63:0*/ msk;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        cbs = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26, vlSymsp, 
                     VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg>{this});
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__write_in_progress = 1U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__370__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__370__severity = 2U;
            __Vfunc_uvm_report_enabled__370__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__371__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__371__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__372__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__372__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__370__verbosity, (IData)(__Vfunc_uvm_report_enabled__370__severity), this->__Vfunc_uvm_report_enabled__370__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__375__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__375__context_name = ""s;
                __Vtask_uvm_report_error__375__line = 0x000004c7U;
                this->__Vtask_uvm_report_error__375__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__375__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__375__message
                              ,"Cannot write to unimplemented virtual register \"%s\".",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__375__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__376__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__376__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__377__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__377__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__375__id, this->__Vtask_uvm_report_error__375__message, __Vtask_uvm_report_error__375__verbosity, this->__Vtask_uvm_report_error__375__filename, __Vtask_uvm_report_error__375__line, this->__Vtask_uvm_report_error__375__context_name, (IData)(__Vtask_uvm_report_error__375__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1229)->__VnoInFunc_get_default_path(vlSymsp, path);
        }
        unnamedblk403__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk403__DOT__i, this->__PVT__fields.size())) {
            unnamedblk403__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk403__DOT__unnamedblk404__DOT__cbs 
                = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz23_TBz24, vlSymsp, this->__PVT__fields.at(unnamedblk403__DOT__i));
            unnamedblk403__DOT__unnamedblk404__DOT__f 
                = this->__PVT__fields.at(unnamedblk403__DOT__i);
            VL_NULL_CHECK(unnamedblk403__DOT__unnamedblk404__DOT__f, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1235)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__381__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__381__Vfuncout;
            VL_NULL_CHECK(unnamedblk403__DOT__unnamedblk404__DOT__f, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1236)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_2__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk403__DOT__unnamedblk404__DOT__f, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1239)->__VnoInFunc_pre_write(vlSymsp, idx, tmp, path, map);
            VL_NULL_CHECK(unnamedblk403__DOT__unnamedblk404__DOT__cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1240)->__VnoInFunc_first(vlSymsp, unnamedblk403__DOT__unnamedblk404__DOT__unnamedblk405__DOT__cb);
            while ((VlNull{} != unnamedblk403__DOT__unnamedblk404__DOT__unnamedblk405__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk403__DOT__unnamedblk404__DOT__unnamedblk405__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1242)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk403__DOT__unnamedblk404__DOT__unnamedblk405__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1243)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk403__DOT__unnamedblk404__DOT__unnamedblk405__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1244)->__VnoInFunc_pre_write(vlSymsp, unnamedblk403__DOT__unnamedblk404__DOT__f, idx, tmp, path, map);
                VL_NULL_CHECK(unnamedblk403__DOT__unnamedblk404__DOT__cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1241)->__VnoInFunc_next(vlSymsp, unnamedblk403__DOT__unnamedblk404__DOT__unnamedblk405__DOT__cb);
            }
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            if ((unnamedblk403__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk403__DOT__i = ((IData)(1U) 
                                         + unnamedblk403__DOT__i);
            }
        }
        this->__VnoInFunc_pre_write(vlSymsp, idx, value, path, map);
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1250)->__VnoInFunc_first(vlSymsp, unnamedblk406__DOT__cb);
        while ((VlNull{} != unnamedblk406__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk406__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1252)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk406__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1253)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk406__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1254)->__VnoInFunc_pre_write(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1251)->__VnoInFunc_next(vlSymsp, unnamedblk406__DOT__cb);
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        status = 0U;
        unnamedblk407__DOT__i = 0U;
        unnamedblk407__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_3__get_n_memlocs);
            if (!((unnamedblk407__DOT__i < __VlefCall_3__get_n_memlocs))) break;
            unnamedblk407__DOT__unnamedblk408__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1264)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_4__get_n_bytes);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         (__VlefCall_4__get_n_bytes 
                                                          << 3U)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            co_await VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1266)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__393__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk407__DOT__i))), tmp, path, map, parent, 0xffffffffU, extension, fname, lineno);
            unnamedblk407__DOT__unnamedblk408__DOT__s 
                = __Vtask_write__393__status;
            if (((0U != unnamedblk407__DOT__unnamedblk408__DOT__s) 
                 & (2U != unnamedblk407__DOT__unnamedblk408__DOT__s))) {
                status = unnamedblk407__DOT__unnamedblk408__DOT__s;
            }
            VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1268)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
            lsb = (lsb + (__VlefCall_5__get_n_bytes 
                          << 3U));
            unnamedblk407__DOT__i = ((IData)(1U) + unnamedblk407__DOT__i);
        }
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1271)->__VnoInFunc_first(vlSymsp, unnamedblk409__DOT__cb);
        while ((VlNull{} != unnamedblk409__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk409__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1273)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk409__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1274)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk409__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1275)->__VnoInFunc_post_write(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1272)->__VnoInFunc_next(vlSymsp, unnamedblk409__DOT__cb);
        }
        this->__VnoInFunc_post_write(vlSymsp, idx, value, path, map, status);
        unnamedblk410__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk410__DOT__i, this->__PVT__fields.size())) {
            unnamedblk410__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk410__DOT__unnamedblk411__DOT__cbs 
                = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz23_TBz24, vlSymsp, this->__PVT__fields.at(unnamedblk410__DOT__i));
            unnamedblk410__DOT__unnamedblk411__DOT__f 
                = this->__PVT__fields.at(unnamedblk410__DOT__i);
            VL_NULL_CHECK(unnamedblk410__DOT__unnamedblk411__DOT__f, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1282)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__400__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__400__Vfuncout;
            VL_NULL_CHECK(unnamedblk410__DOT__unnamedblk411__DOT__f, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1283)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_6__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_6__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk410__DOT__unnamedblk411__DOT__cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1286)->__VnoInFunc_first(vlSymsp, unnamedblk410__DOT__unnamedblk411__DOT__unnamedblk412__DOT__cb);
            while ((VlNull{} != unnamedblk410__DOT__unnamedblk411__DOT__unnamedblk412__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk410__DOT__unnamedblk411__DOT__unnamedblk412__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1288)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk410__DOT__unnamedblk411__DOT__unnamedblk412__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1289)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk410__DOT__unnamedblk411__DOT__unnamedblk412__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1290)->__VnoInFunc_post_write(vlSymsp, unnamedblk410__DOT__unnamedblk411__DOT__f, idx, tmp, path, map, status);
                VL_NULL_CHECK(unnamedblk410__DOT__unnamedblk411__DOT__cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1287)->__VnoInFunc_next(vlSymsp, unnamedblk410__DOT__unnamedblk411__DOT__unnamedblk412__DOT__cb);
            }
            VL_NULL_CHECK(unnamedblk410__DOT__unnamedblk411__DOT__f, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1292)->__VnoInFunc_post_write(vlSymsp, idx, tmp, path, map, status);
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            if ((unnamedblk410__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk410__DOT__i = ((IData)(1U) 
                                         + unnamedblk410__DOT__i);
            }
        }
        this->__Vfunc_uvm_report_enabled__406__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__406__severity = 0U;
        __Vfunc_uvm_report_enabled__406__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__407__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__407__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__408__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__408__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__406__verbosity, (IData)(__Vfunc_uvm_report_enabled__406__severity), this->__Vfunc_uvm_report_enabled__406__id, __VlefCall_7__uvm_report_enabled);
        if ((0U != __VlefCall_7__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
            __Vtask_uvm_report_info__411__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__411__context_name = ""s;
            __Vtask_uvm_report_info__411__line = 0x00000514U;
            this->__Vtask_uvm_report_info__411__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__411__verbosity = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__411__message
                          ,"Wrote virtual register \"%s\"[%0d] via %s with: 'h%h",4
                          , 'S',&(__VlefCall_8__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__411__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__412__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                = __Vfunc_get__412__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__413__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                = __Vtask_get_root__413__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__411__id, this->__Vtask_uvm_report_info__411__message, __Vtask_uvm_report_info__411__verbosity, this->__Vtask_uvm_report_info__411__filename, __Vtask_uvm_report_info__411__line, this->__Vtask_uvm_report_info__411__context_name, (IData)(__Vtask_uvm_report_info__411__report_enabled_checked));
        }
        this->__PVT__write_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_read(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__416__verbosity;
    __Vfunc_uvm_report_enabled__416__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__416__severity;
    __Vfunc_uvm_report_enabled__416__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__417__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__418__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__421__verbosity;
    __Vtask_uvm_report_error__421__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__421__line;
    __Vtask_uvm_report_error__421__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__421__report_enabled_checked;
    __Vtask_uvm_report_error__421__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__422__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__423__Vfuncout;
    IData/*31:0*/ __Vtask_read__436__status;
    __Vtask_read__436__status = 0;
    QData/*63:0*/ __Vtask_read__436__value;
    __Vtask_read__436__value = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__443__Vfuncout;
    __Vtask_get_lsb_pos_in_register__443__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__449__verbosity;
    __Vfunc_uvm_report_enabled__449__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__449__severity;
    __Vfunc_uvm_report_enabled__449__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__450__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__451__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__454__verbosity;
    __Vtask_uvm_report_info__454__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__454__line;
    __Vtask_uvm_report_info__454__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__454__report_enabled_checked;
    __Vtask_uvm_report_info__454__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__455__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__456__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_memlocs;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk413__DOT__i;
    unnamedblk413__DOT__i = 0;
    IData/*31:0*/ unnamedblk413__DOT__i__Vloopsize;
    unnamedblk413__DOT__i__Vloopsize = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz23_TBz24> unnamedblk413__DOT__unnamedblk414__DOT__cbs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field> unnamedblk413__DOT__unnamedblk414__DOT__f;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk416__DOT__cb;
    IData/*31:0*/ unnamedblk417__DOT__i;
    IData/*31:0*/ unnamedblk417__DOT__unnamedblk418__DOT__s;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk419__DOT__cb;
    IData/*31:0*/ unnamedblk420__DOT__i;
    unnamedblk420__DOT__i = 0;
    IData/*31:0*/ unnamedblk420__DOT__i__Vloopsize;
    unnamedblk420__DOT__i__Vloopsize = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz23_TBz24> unnamedblk420__DOT__unnamedblk421__DOT__cbs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field> unnamedblk420__DOT__unnamedblk421__DOT__f;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__cb;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26> cbs;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    QData/*63:0*/ msk;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        value = 0ULL;
        cbs = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26, vlSymsp, 
                     VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg>{this});
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__read_in_progress = 1U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__416__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__416__severity = 2U;
            __Vfunc_uvm_report_enabled__416__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__417__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__417__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__418__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__418__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__416__verbosity, (IData)(__Vfunc_uvm_report_enabled__416__severity), this->__Vfunc_uvm_report_enabled__416__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__421__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__421__context_name = ""s;
                __Vtask_uvm_report_error__421__line = 0x00000531U;
                this->__Vtask_uvm_report_error__421__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__421__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__421__message
                              ,"Cannot read from unimplemented virtual register \"%s\".",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__421__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__422__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__422__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__423__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__423__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__421__id, this->__Vtask_uvm_report_error__421__message, __Vtask_uvm_report_error__421__verbosity, this->__Vtask_uvm_report_error__421__filename, __Vtask_uvm_report_error__421__line, this->__Vtask_uvm_report_error__421__context_name, (IData)(__Vtask_uvm_report_error__421__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1335)->__VnoInFunc_get_default_path(vlSymsp, path);
        }
        unnamedblk413__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk413__DOT__i, this->__PVT__fields.size())) {
            unnamedblk413__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk413__DOT__unnamedblk414__DOT__cbs 
                = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz23_TBz24, vlSymsp, this->__PVT__fields.at(unnamedblk413__DOT__i));
            unnamedblk413__DOT__unnamedblk414__DOT__f 
                = this->__PVT__fields.at(unnamedblk413__DOT__i);
            VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__f, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1341)->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
            VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1342)->__VnoInFunc_first(vlSymsp, unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb);
            while ((VlNull{} != unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1344)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1345)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1346)->__VnoInFunc_pre_read(vlSymsp, unnamedblk413__DOT__unnamedblk414__DOT__f, idx, path, map);
                VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1343)->__VnoInFunc_next(vlSymsp, unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb);
            }
            if ((unnamedblk413__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk413__DOT__i = ((IData)(1U) 
                                         + unnamedblk413__DOT__i);
            }
        }
        this->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1350)->__VnoInFunc_first(vlSymsp, unnamedblk416__DOT__cb);
        while ((VlNull{} != unnamedblk416__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk416__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1352)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk416__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1353)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk416__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1354)->__VnoInFunc_pre_read(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg>{this}, idx, path, map);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1351)->__VnoInFunc_next(vlSymsp, unnamedblk416__DOT__cb);
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        value = 0ULL;
        status = 0U;
        unnamedblk417__DOT__i = 0U;
        unnamedblk417__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_2__get_n_memlocs);
            if (!((unnamedblk417__DOT__i < __VlefCall_2__get_n_memlocs))) break;
            unnamedblk417__DOT__unnamedblk418__DOT__s = 0U;
            co_await VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1365)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__436__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk417__DOT__i))), __Vtask_read__436__value, path, map, parent, 0xffffffffU, extension, fname, lineno);
            unnamedblk417__DOT__unnamedblk418__DOT__s 
                = __Vtask_read__436__status;
            tmp = __Vtask_read__436__value;
            if (((0U != unnamedblk417__DOT__unnamedblk418__DOT__s) 
                 & (2U != unnamedblk417__DOT__unnamedblk418__DOT__s))) {
                status = unnamedblk417__DOT__unnamedblk418__DOT__s;
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1369)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
            lsb = (lsb + (__VlefCall_3__get_n_bytes 
                          << 3U));
            unnamedblk417__DOT__i = ((IData)(1U) + unnamedblk417__DOT__i);
        }
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1372)->__VnoInFunc_first(vlSymsp, unnamedblk419__DOT__cb);
        while ((VlNull{} != unnamedblk419__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk419__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1374)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk419__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1375)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk419__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1376)->__VnoInFunc_post_read(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1373)->__VnoInFunc_next(vlSymsp, unnamedblk419__DOT__cb);
        }
        this->__VnoInFunc_post_read(vlSymsp, idx, value, path, map, status);
        unnamedblk420__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk420__DOT__i, this->__PVT__fields.size())) {
            unnamedblk420__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk420__DOT__unnamedblk421__DOT__cbs 
                = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz23_TBz24, vlSymsp, this->__PVT__fields.at(unnamedblk420__DOT__i));
            unnamedblk420__DOT__unnamedblk421__DOT__f 
                = this->__PVT__fields.at(unnamedblk420__DOT__i);
            VL_NULL_CHECK(unnamedblk420__DOT__unnamedblk421__DOT__f, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1383)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__443__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__443__Vfuncout;
            VL_NULL_CHECK(unnamedblk420__DOT__unnamedblk421__DOT__f, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1385)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_4__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk420__DOT__unnamedblk421__DOT__cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1388)->__VnoInFunc_first(vlSymsp, unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__cb);
            while ((VlNull{} != unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1390)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1391)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1392)->__VnoInFunc_post_read(vlSymsp, unnamedblk420__DOT__unnamedblk421__DOT__f, idx, tmp, path, map, status);
                VL_NULL_CHECK(unnamedblk420__DOT__unnamedblk421__DOT__cbs, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1389)->__VnoInFunc_next(vlSymsp, unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__cb);
            }
            VL_NULL_CHECK(unnamedblk420__DOT__unnamedblk421__DOT__f, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1394)->__VnoInFunc_post_read(vlSymsp, idx, tmp, path, map, status);
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            if ((unnamedblk420__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk420__DOT__i = ((IData)(1U) 
                                         + unnamedblk420__DOT__i);
            }
        }
        this->__Vfunc_uvm_report_enabled__449__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__449__severity = 0U;
        __Vfunc_uvm_report_enabled__449__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__450__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__450__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__451__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__451__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__449__verbosity, (IData)(__Vfunc_uvm_report_enabled__449__severity), this->__Vfunc_uvm_report_enabled__449__id, __VlefCall_5__uvm_report_enabled);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__454__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__454__context_name = ""s;
            __Vtask_uvm_report_info__454__line = 0x0000057aU;
            this->__Vtask_uvm_report_info__454__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__454__verbosity = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__454__message
                          ,"Read virtual register \"%s\"[%0d] via %s: 'h%h",4
                          , 'S',&(__VlefCall_6__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__454__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__455__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                = __Vfunc_get__455__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__456__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                = __Vtask_get_root__456__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__454__id, this->__Vtask_uvm_report_info__454__message, __Vtask_uvm_report_info__454__verbosity, this->__Vtask_uvm_report_info__454__filename, __Vtask_uvm_report_info__454__line, this->__Vtask_uvm_report_info__454__context_name, (IData)(__Vtask_uvm_report_info__454__report_enabled_checked));
        }
        this->__PVT__read_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_poke(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__458__verbosity;
    __Vfunc_uvm_report_enabled__458__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__458__severity;
    __Vfunc_uvm_report_enabled__458__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__459__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__460__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__463__verbosity;
    __Vtask_uvm_report_error__463__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__463__line;
    __Vtask_uvm_report_error__463__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__463__report_enabled_checked;
    __Vtask_uvm_report_error__463__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__464__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__465__Vfuncout;
    IData/*31:0*/ __Vtask_poke__469__status;
    __Vtask_poke__469__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__471__verbosity;
    __Vfunc_uvm_report_enabled__471__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__471__severity;
    __Vfunc_uvm_report_enabled__471__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__472__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__473__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__476__verbosity;
    __Vtask_uvm_report_info__476__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__476__line;
    __Vtask_uvm_report_info__476__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__476__report_enabled_checked;
    __Vtask_uvm_report_info__476__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__477__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__478__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__get_n_bytes;
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_memlocs;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk423__DOT__i;
    IData/*31:0*/ unnamedblk423__DOT__unnamedblk424__DOT__s;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    QData/*63:0*/ msk;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__458__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__458__severity = 2U;
            __Vfunc_uvm_report_enabled__458__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__459__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__459__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__460__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__460__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__458__verbosity, (IData)(__Vfunc_uvm_report_enabled__458__severity), this->__Vfunc_uvm_report_enabled__458__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__463__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__463__context_name = ""s;
                __Vtask_uvm_report_error__463__line = 0x00000591U;
                this->__Vtask_uvm_report_error__463__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__463__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__463__message
                              ,"Cannot poke in unimplemented virtual register \"%s\".",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__463__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__464__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__464__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__465__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__465__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__463__id, this->__Vtask_uvm_report_error__463__message, __Vtask_uvm_report_error__463__verbosity, this->__Vtask_uvm_report_error__463__filename, __Vtask_uvm_report_error__463__line, this->__Vtask_uvm_report_error__463__context_name, (IData)(__Vtask_uvm_report_error__463__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        status = 0U;
        unnamedblk423__DOT__i = 0U;
        unnamedblk423__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_2__get_n_memlocs);
            if (!((unnamedblk423__DOT__i < __VlefCall_2__get_n_memlocs))) break;
            unnamedblk423__DOT__unnamedblk424__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1437)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         (__VlefCall_3__get_n_bytes 
                                                          << 3U)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1440)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__469__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk423__DOT__i))), tmp, ""s, parent, extension, fname, lineno);
            status = __Vtask_poke__469__status;
            if (((0U != unnamedblk423__DOT__unnamedblk424__DOT__s) 
                 & (2U != unnamedblk423__DOT__unnamedblk424__DOT__s))) {
                status = unnamedblk423__DOT__unnamedblk424__DOT__s;
            }
            VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1443)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_4__get_n_bytes);
            lsb = (lsb + (__VlefCall_4__get_n_bytes 
                          << 3U));
            unnamedblk423__DOT__i = ((IData)(1U) + unnamedblk423__DOT__i);
        }
        this->__Vfunc_uvm_report_enabled__471__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__471__severity = 0U;
        __Vfunc_uvm_report_enabled__471__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__472__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__472__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__473__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__473__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__471__verbosity, (IData)(__Vfunc_uvm_report_enabled__471__severity), this->__Vfunc_uvm_report_enabled__471__id, __VlefCall_5__uvm_report_enabled);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__476__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__476__context_name = ""s;
            __Vtask_uvm_report_info__476__line = 0x000005a7U;
            this->__Vtask_uvm_report_info__476__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__476__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__476__message
                          ,"Poked virtual register \"%s\"[%0d] with: 'h%h",3
                          , 'S',&(__VlefCall_6__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__476__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__477__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                = __Vfunc_get__477__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__478__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                = __Vtask_get_root__478__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__476__id, this->__Vtask_uvm_report_info__476__message, __Vtask_uvm_report_info__476__verbosity, this->__Vtask_uvm_report_info__476__filename, __Vtask_uvm_report_info__476__line, this->__Vtask_uvm_report_info__476__context_name, (IData)(__Vtask_uvm_report_info__476__report_enabled_checked));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_peek(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__480__verbosity;
    __Vfunc_uvm_report_enabled__480__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__480__severity;
    __Vfunc_uvm_report_enabled__480__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__481__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__482__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__485__verbosity;
    __Vtask_uvm_report_error__485__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__485__line;
    __Vtask_uvm_report_error__485__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__485__report_enabled_checked;
    __Vtask_uvm_report_error__485__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__486__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__487__Vfuncout;
    IData/*31:0*/ __Vtask_peek__490__status;
    __Vtask_peek__490__status = 0;
    QData/*63:0*/ __Vtask_peek__490__value;
    __Vtask_peek__490__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__492__verbosity;
    __Vfunc_uvm_report_enabled__492__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__492__severity;
    __Vfunc_uvm_report_enabled__492__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__493__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__494__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__497__verbosity;
    __Vtask_uvm_report_info__497__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__497__line;
    __Vtask_uvm_report_info__497__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__497__report_enabled_checked;
    __Vtask_uvm_report_info__497__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__498__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__499__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_memlocs;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk425__DOT__i;
    IData/*31:0*/ unnamedblk425__DOT__unnamedblk426__DOT__s;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        value = 0ULL;
        addr = 0ULL;
        tmp = 0ULL;
        lsb = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__480__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__480__severity = 2U;
            __Vfunc_uvm_report_enabled__480__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__481__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__481__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__482__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__482__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__480__verbosity, (IData)(__Vfunc_uvm_report_enabled__480__severity), this->__Vfunc_uvm_report_enabled__480__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__485__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__485__context_name = ""s;
                __Vtask_uvm_report_error__485__line = 0x000005bdU;
                this->__Vtask_uvm_report_error__485__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__485__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__485__message
                              ,"Cannot peek in from unimplemented virtual register \"%s\".",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__485__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__486__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__486__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__487__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__487__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__485__id, this->__Vtask_uvm_report_error__485__message, __Vtask_uvm_report_error__485__verbosity, this->__Vtask_uvm_report_error__485__filename, __Vtask_uvm_report_error__485__line, this->__Vtask_uvm_report_error__485__context_name, (IData)(__Vtask_uvm_report_error__485__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        value = 0ULL;
        status = 0U;
        unnamedblk425__DOT__i = 0U;
        unnamedblk425__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_2__get_n_memlocs);
            if (!((unnamedblk425__DOT__i < __VlefCall_2__get_n_memlocs))) break;
            unnamedblk425__DOT__unnamedblk426__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1482)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__490__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk425__DOT__i))), __Vtask_peek__490__value, ""s, parent, extension, fname, lineno);
            status = __Vtask_peek__490__status;
            tmp = __Vtask_peek__490__value;
            if (((0U != unnamedblk425__DOT__unnamedblk426__DOT__s) 
                 & (2U != unnamedblk425__DOT__unnamedblk426__DOT__s))) {
                status = unnamedblk425__DOT__unnamedblk426__DOT__s;
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1486)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
            lsb = (lsb + (__VlefCall_3__get_n_bytes 
                          << 3U));
            unnamedblk425__DOT__i = ((IData)(1U) + unnamedblk425__DOT__i);
        }
        this->__Vfunc_uvm_report_enabled__492__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__492__severity = 0U;
        __Vfunc_uvm_report_enabled__492__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__493__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__493__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__494__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__494__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__492__verbosity, (IData)(__Vfunc_uvm_report_enabled__492__severity), this->__Vfunc_uvm_report_enabled__492__id, __VlefCall_4__uvm_report_enabled);
        if ((0U != __VlefCall_4__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            __Vtask_uvm_report_info__497__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__497__context_name = ""s;
            __Vtask_uvm_report_info__497__line = 0x000005d2U;
            this->__Vtask_uvm_report_info__497__filename = "../../uvm/distrib/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__497__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__497__message
                          ,"Peeked virtual register \"%s\"[%0d]: 'h%h",3
                          , 'S',&(__VlefCall_5__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__497__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__498__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                = __Vfunc_get__498__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__499__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                = __Vtask_get_root__499__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__497__id, this->__Vtask_uvm_report_info__497__message, __Vtask_uvm_report_info__497__verbosity, this->__Vtask_uvm_report_info__497__filename, __Vtask_uvm_report_info__497__line, this->__Vtask_uvm_report_info__497__context_name, (IData)(__Vtask_uvm_report_info__497__report_enabled_checked));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__convert2string;
    std::string __VlefCall_0__get_type_name;
    Vhello_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1500)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1500)->__VnoInFunc_print_generic(vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__convert2string), 0x2eU);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__convert2string;
    QData/*63:0*/ __VlefCall_3__get_address;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map>> unnamedblk427__DOT__maps;
    IData/*31:0*/ unnamedblk427__DOT__unnamedblk428__DOT__i;
    unnamedblk427__DOT__unnamedblk428__DOT__i = 0;
    IData/*31:0*/ unnamedblk427__DOT__unnamedblk428__DOT__i__Vloopsize;
    unnamedblk427__DOT__unnamedblk428__DOT__i__Vloopsize = 0;
    QData/*63:0*/ unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__addr0;
    IData/*31:0*/ unnamedblk430__DOT__i;
    unnamedblk430__DOT__i = 0;
    IData/*31:0*/ unnamedblk430__DOT__i__Vloopsize;
    unnamedblk430__DOT__i__Vloopsize = 0;
    convert2string__Vfuncrtn = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"Virtual register %s -- ",1
                  , 'S',&(__VlefCall_0__get_full_name));
    if ((0ULL == this->__PVT__size)) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sunimplemented",1
                      , 'S',&(convert2string__Vfuncrtn));
    } else {
        unnamedblk427__DOT__maps.clear();
        VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1514)->__VnoInFunc_get_maps(vlSymsp, unnamedblk427__DOT__maps);
        VL_NULL_CHECK(this->__PVT__mem, "../../uvm/distrib/src/reg/uvm_vreg.svh", 1517)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s[%0d] in %0s['h%0h+'h%0h]\n",5
                      , 'S',&(convert2string__Vfuncrtn)
                      , '#',64,this->__PVT__size, 'S',&(__VlefCall_1__get_full_name)
                      , '#',64,this->__PVT__offset, '#',32,this->__PVT__incr);
        unnamedblk427__DOT__unnamedblk428__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk427__DOT__unnamedblk428__DOT__i, unnamedblk427__DOT__maps.size())) {
            unnamedblk427__DOT__unnamedblk428__DOT__i__Vloopsize 
                = unnamedblk427__DOT__maps.size();
            this->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, unnamedblk427__DOT__maps.at(unnamedblk427__DOT__unnamedblk428__DOT__i), unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__addr0);
            VL_NULL_CHECK(unnamedblk427__DOT__maps.at(unnamedblk427__DOT__unnamedblk428__DOT__i), "../../uvm/distrib/src/reg/uvm_vreg.svh", 1522)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_get_address(vlProcess, vlSymsp, 1ULL, unnamedblk427__DOT__maps.at(unnamedblk427__DOT__unnamedblk428__DOT__i), __VlefCall_3__get_address);
            VL_SFORMAT_NX(convert2string__Vfuncrtn,"  Address in map '%s' -- @'h%0h+%0h",3
                          , 'S',&(__VlefCall_2__get_full_name)
                          , '#',64,unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__addr0
                          , '#',64,(__VlefCall_3__get_address 
                                    - unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__addr0));
            if ((unnamedblk427__DOT__unnamedblk428__DOT__i__Vloopsize 
                 <= unnamedblk427__DOT__maps.size())) {
                unnamedblk427__DOT__unnamedblk428__DOT__i 
                    = ((IData)(1U) + unnamedblk427__DOT__unnamedblk428__DOT__i);
            }
        }
    }
    unnamedblk430__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk430__DOT__i, this->__PVT__fields.size())) {
        unnamedblk430__DOT__i__Vloopsize = this->__PVT__fields.size();
        VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk430__DOT__i), "../../uvm/distrib/src/reg/uvm_vreg.svh", 1527)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_4__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_4__convert2string));
        if ((unnamedblk430__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
            unnamedblk430__DOT__i = ((IData)(1U) + unnamedblk430__DOT__i);
        }
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_clone(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_clone\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    clone__Vfuncrtn = VlNull{};
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_copy\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_compare(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 0U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_pack(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_pack\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_unpack(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_unpack\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_vreg::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__locked = 0;
    __PVT__n_bits = 0;
    __PVT__n_used_bits = 0;
    __PVT__offset = 0;
    __PVT__incr = 0;
    __PVT__size = 0;
    __PVT__is_static = 0;
    __PVT__lineno = 0;
    __PVT__read_in_progress = 0;
    __PVT__write_in_progress = 0;
}

Vhello_uvm_uvm_pkg__03a__03auvm_vreg::~Vhello_uvm_uvm_pkg__03a__03auvm_vreg() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_vreg::~\n"); );
}
