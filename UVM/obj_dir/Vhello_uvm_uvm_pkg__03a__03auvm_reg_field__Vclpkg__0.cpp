// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi9> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi9__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_max_size(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_define_access(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &define_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_define_access\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_m_predefine_policies__3__Vfuncout;
    __Vfunc_m_predefine_policies__3__Vfuncout = 0;
    // Body
    {
        define_access__Vfuncrtn = 0U;
        if ((1U & (~ (IData)(this->__PVT__m_predefined)))) {
            this->__VnoInFunc_m_predefine_policies(vlSymsp, __Vfunc_m_predefine_policies__3__Vfuncout);
            this->__PVT__m_predefined = __Vfunc_m_predefine_policies__3__Vfuncout;
        }
        name = VL_TOUPPER_NN(name);
        if (this->__PVT__m_policy_names.exists(name)) {
            define_access__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        this->__PVT__m_policy_names.at(name) = 1U;
        define_access__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_m_predefine_policies(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &m_predefine_policies__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_m_predefine_policies\n"); );
    // Locals
    CData/*0:0*/ __Vtask_define_access__4__Vfuncout;
    __Vtask_define_access__4__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__5__Vfuncout;
    __Vtask_define_access__5__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__6__Vfuncout;
    __Vtask_define_access__6__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__7__Vfuncout;
    __Vtask_define_access__7__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__8__Vfuncout;
    __Vtask_define_access__8__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__9__Vfuncout;
    __Vtask_define_access__9__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__10__Vfuncout;
    __Vtask_define_access__10__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__11__Vfuncout;
    __Vtask_define_access__11__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__12__Vfuncout;
    __Vtask_define_access__12__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__13__Vfuncout;
    __Vtask_define_access__13__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__14__Vfuncout;
    __Vtask_define_access__14__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__15__Vfuncout;
    __Vtask_define_access__15__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__16__Vfuncout;
    __Vtask_define_access__16__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__17__Vfuncout;
    __Vtask_define_access__17__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__18__Vfuncout;
    __Vtask_define_access__18__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__19__Vfuncout;
    __Vtask_define_access__19__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__20__Vfuncout;
    __Vtask_define_access__20__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__21__Vfuncout;
    __Vtask_define_access__21__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__22__Vfuncout;
    __Vtask_define_access__22__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__23__Vfuncout;
    __Vtask_define_access__23__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__24__Vfuncout;
    __Vtask_define_access__24__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__25__Vfuncout;
    __Vtask_define_access__25__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__26__Vfuncout;
    __Vtask_define_access__26__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__27__Vfuncout;
    __Vtask_define_access__27__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__28__Vfuncout;
    __Vtask_define_access__28__Vfuncout = 0;
    // Body
    {
        m_predefine_policies__Vfuncrtn = 0U;
        if (this->__PVT__m_predefined) {
            m_predefine_policies__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        this->__PVT__m_predefined = 1U;
        this->__VnoInFunc_define_access(vlSymsp, "RO"s, __Vtask_define_access__4__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RW"s, __Vtask_define_access__5__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RC"s, __Vtask_define_access__6__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RS"s, __Vtask_define_access__7__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WRC"s, __Vtask_define_access__8__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WRS"s, __Vtask_define_access__9__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WC"s, __Vtask_define_access__10__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WS"s, __Vtask_define_access__11__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WSRC"s, __Vtask_define_access__12__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WCRS"s, __Vtask_define_access__13__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1C"s, __Vtask_define_access__14__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1S"s, __Vtask_define_access__15__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1T"s, __Vtask_define_access__16__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0C"s, __Vtask_define_access__17__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0S"s, __Vtask_define_access__18__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0T"s, __Vtask_define_access__19__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1SRC"s, __Vtask_define_access__20__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1CRS"s, __Vtask_define_access__21__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0SRC"s, __Vtask_define_access__22__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0CRS"s, __Vtask_define_access__23__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WO"s, __Vtask_define_access__24__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WOC"s, __Vtask_define_access__25__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WOS"s, __Vtask_define_access__26__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1"s, __Vtask_define_access__27__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WO1"s, __Vtask_define_access__28__Vfuncout);
        m_predefine_policies__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_object_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi9> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi9__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_reg_field, vlProcess, vlSymsp, "uvm_reg_field"s);
    } else {
        tmp = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_reg_field, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_field"s;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 73)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vhello_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_write(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_write\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_write(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_write\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_read(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_read\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_read(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_read\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name) {
    Vhello_uvm_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    /*super.new*/;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__value, 0x0000000000000040ULL, 
                                                                      "value", 0ULL, 0ULL);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_configure(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos, std::string access, CData/*0:0*/ __SYM__volatile, QData/*63:0*/ reset, CData/*0:0*/ has_reset, CData/*0:0*/ is_rand, CData/*0:0*/ individually_accessible) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__11__verbosity;
    __Vtask_uvm_report_error__11__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__11__line;
    __Vtask_uvm_report_error__11__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__11__report_enabled_checked;
    __Vtask_uvm_report_error__11__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__verbosity;
    __Vfunc_uvm_report_enabled__19__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__19__severity;
    __Vfunc_uvm_report_enabled__19__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__24__verbosity;
    __Vtask_uvm_report_error__24__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__24__line;
    __Vtask_uvm_report_error__24__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__24__report_enabled_checked;
    __Vtask_uvm_report_error__24__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__PVT__m_parent = parent;
    if ((0U == size)) {
        this->__Vfunc_uvm_report_enabled__6__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__6__severity = 2U;
        __Vfunc_uvm_report_enabled__6__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__7__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__7__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), this->__Vfunc_uvm_report_enabled__6__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_error__11__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__11__context_name = ""s;
            __Vtask_uvm_report_error__11__line = 0x00000328U;
            this->__Vtask_uvm_report_error__11__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__11__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__11__message
                          ,"Field \"%s\" cannot have 0 bits",1
                          , 'S',&(__VlefCall_1__get_full_name));
            this->__Vtask_uvm_report_error__11__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__13__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__11__id, this->__Vtask_uvm_report_error__11__message, __Vtask_uvm_report_error__11__verbosity, this->__Vtask_uvm_report_error__11__filename, __Vtask_uvm_report_error__11__line, this->__Vtask_uvm_report_error__11__context_name, (IData)(__Vtask_uvm_report_error__11__report_enabled_checked));
        }
        size = 1U;
    }
    this->__PVT__m_size = size;
    this->__PVT__m_volatile = __SYM__volatile;
    this->__PVT__m_access = VL_TOUPPER_NN(access);
    this->__PVT__m_lsb = lsb_pos;
    this->__PVT__m_cover_on = 0U;
    this->__PVT__m_written = 0U;
    this->__PVT__m_check = ((IData)(__SYM__volatile)
                             ? 0U : 1U);
    this->__PVT__m_individually_accessible = individually_accessible;
    if (has_reset) {
        this->__VnoInFunc_set_reset(vlSymsp, reset, "HARD"s);
    } else {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz40__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_REG_HW_RESET_TEST"s, 1U, VlNull{});
    }
    VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 827)->__VnoInFunc_add_field(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
    if ((! vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access))) {
        this->__Vfunc_uvm_report_enabled__19__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__19__severity = 2U;
        __Vfunc_uvm_report_enabled__19__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__20__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__20__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__21__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__19__verbosity, (IData)(__Vfunc_uvm_report_enabled__19__severity), this->__Vfunc_uvm_report_enabled__19__id, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            __Vtask_uvm_report_error__24__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__24__context_name = ""s;
            __Vtask_uvm_report_error__24__line = 0x0000033fU;
            this->__Vtask_uvm_report_error__24__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__24__verbosity = 0U;
            this->__Vtask_uvm_report_error__24__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Access policy '"s, access), "' for field '"s), __VlefCall_4__get_full_name), "' is not defined. Setting to RW"s));
            this->__Vtask_uvm_report_error__24__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__25__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__25__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__26__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__24__id, this->__Vtask_uvm_report_error__24__message, __Vtask_uvm_report_error__24__verbosity, this->__Vtask_uvm_report_error__24__filename, __Vtask_uvm_report_error__24__line, this->__Vtask_uvm_report_error__24__context_name, (IData)(__Vtask_uvm_report_error__24__report_enabled_checked));
        }
        this->__PVT__m_access = "RW"s;
    }
    if ((size > vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_max_size 
            = size;
    }
    if (((((((((((((((((((("RO"s == access) || ("RC"s 
                                                == access)) 
                         || ("RS"s == access)) || ("WC"s 
                                                   == access)) 
                       || ("WS"s == access)) || ("W1C"s 
                                                 == access)) 
                     || ("W1S"s == access)) || ("W1T"s 
                                                == access)) 
                   || ("W0C"s == access)) || ("W0S"s 
                                              == access)) 
                 || ("W0T"s == access)) || ("W1SRC"s 
                                            == access)) 
               || ("W1CRS"s == access)) || ("W0SRC"s 
                                            == access)) 
             || ("W0CRS"s == access)) || ("WSRC"s == access)) 
           || ("WCRS"s == access)) || ("WOC"s == access)) 
         || ("WOS"s == access))) {
        is_rand = 0U;
    }
    if ((1U & (~ (IData)(is_rand)))) {
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(0U) = 0U;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_parent(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 863)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
    get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_register(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_register\n"); );
    // Body
    get_register__Vfuncrtn = this->__PVT__m_parent;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_lsb_pos(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_lsb_pos\n"); );
    // Body
    get_lsb_pos__Vfuncrtn = this->__PVT__m_lsb;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_n_bits(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_size;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_known_access(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_known_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_known_access\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string acc;
    {
        is_known_access__Vfuncrtn = 0U;
        this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, acc);
        if (((((((((((((((((((((((((("RO"s == acc) 
                                    || ("RW"s == acc)) 
                                   || ("RC"s == acc)) 
                                  || ("RS"s == acc)) 
                                 || ("WC"s == acc)) 
                                || ("WS"s == acc)) 
                               || ("W1C"s == acc)) 
                              || ("W1S"s == acc)) || 
                             ("W1T"s == acc)) || ("W0C"s 
                                                  == acc)) 
                           || ("W0S"s == acc)) || ("W0T"s 
                                                   == acc)) 
                         || ("WRC"s == acc)) || ("WRS"s 
                                                 == acc)) 
                       || ("W1SRC"s == acc)) || ("W1CRS"s 
                                                 == acc)) 
                     || ("W0SRC"s == acc)) || ("W0CRS"s 
                                               == acc)) 
                   || ("WSRC"s == acc)) || ("WCRS"s 
                                            == acc)) 
                 || ("WO"s == acc)) || ("WOC"s == acc)) 
               || ("WOS"s == acc)) || ("W1"s == acc)) 
             || ("WO1"s == acc))) {
            is_known_access__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        is_known_access__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_access(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
    __Vfunc_uvm_report_enabled__33__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
    __Vfunc_uvm_report_enabled__33__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__41__verbosity;
    __Vtask_uvm_report_warning__41__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__41__line;
    __Vtask_uvm_report_warning__41__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__41__report_enabled_checked;
    __Vtask_uvm_report_warning__41__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__get_rights;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_rights;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> __VlefCall_0__backdoor;
    std::string field_access;
    {
        get_access__Vfuncrtn = ""s;
        field_access = this->__PVT__m_access;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_0__backdoor);
        if ((map == __VlefCall_0__backdoor)) {
            get_access__Vfuncrtn = field_access;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 918)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VlefCall_1__get_rights);
        if (("RW"s == __VlefCall_1__get_rights)) {
            get_access__Vfuncrtn = field_access;
            goto __Vlabel0;
        } else if (("RO"s == __VlefCall_1__get_rights)) {
            if (((((((((((("RW"s == field_access) || 
                          ("RO"s == field_access)) 
                         || ("WC"s == field_access)) 
                        || ("WS"s == field_access)) 
                       || ("W1C"s == field_access)) 
                      || ("W1S"s == field_access)) 
                     || ("W1T"s == field_access)) || 
                    ("W0C"s == field_access)) || ("W0S"s 
                                                  == field_access)) 
                  || ("W0T"s == field_access)) || ("W1"s 
                                                   == field_access))) {
                field_access = "RO"s;
            } else if (((((("RC"s == field_access) 
                           || ("WRC"s == field_access)) 
                          || ("W1SRC"s == field_access)) 
                         || ("W0SRC"s == field_access)) 
                        || ("WSRC"s == field_access))) {
                field_access = "RC"s;
            } else if (((((("RS"s == field_access) 
                           || ("WRS"s == field_access)) 
                          || ("W1CRS"s == field_access)) 
                         || ("W0CRS"s == field_access)) 
                        || ("WCRS"s == field_access))) {
                field_access = "RS"s;
            } else if ((((("WO"s == field_access) || 
                          ("WOC"s == field_access)) 
                         || ("WOS"s == field_access)) 
                        || ("WO1"s == field_access))) {
                field_access = "NOACCESS"s;
            }
        } else if (("WO"s == __VlefCall_1__get_rights)) {
            field_access = ((("RW"s == field_access) 
                             || ("WO"s == field_access))
                             ? "WO"s : "NOACCESS"s);
        } else {
            field_access = "NOACCESS"s;
            this->__Vfunc_uvm_report_enabled__33__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__33__severity = 1U;
            __Vfunc_uvm_report_enabled__33__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__34__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__34__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__35__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), this->__Vfunc_uvm_report_enabled__33__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 959)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 959)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 959)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VlefCall_6__get_rights);
                __Vtask_uvm_report_warning__41__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__41__context_name = ""s;
                __Vtask_uvm_report_warning__41__line = 0x000003bfU;
                this->__Vtask_uvm_report_warning__41__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__41__verbosity = 0U;
                this->__Vtask_uvm_report_warning__41__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_3__get_full_name), "' containing field '"s), __VlefCall_4__get_name), "' is mapped in map '"s), __VlefCall_5__get_full_name), "' with unknown access right '"s), __VlefCall_6__get_rights), "'"s));
                this->__Vtask_uvm_report_warning__41__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__42__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__42__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__43__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__41__id, this->__Vtask_uvm_report_warning__41__message, __Vtask_uvm_report_warning__41__verbosity, this->__Vtask_uvm_report_warning__41__filename, __Vtask_uvm_report_warning__41__line, this->__Vtask_uvm_report_warning__41__context_name, (IData)(__Vtask_uvm_report_warning__41__report_enabled_checked));
            }
        }
        get_access__Vfuncrtn = field_access;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_access(Vhello_uvm__Syms* __restrict vlSymsp, std::string mode, std::string &set_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__verbosity;
    __Vfunc_uvm_report_enabled__45__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__45__severity;
    __Vfunc_uvm_report_enabled__45__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__49__verbosity;
    __Vtask_uvm_report_error__49__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__49__line;
    __Vtask_uvm_report_error__49__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__49__report_enabled_checked;
    __Vtask_uvm_report_error__49__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    set_access__Vfuncrtn = this->__PVT__m_access;
    this->__PVT__m_access = VL_TOUPPER_NN(mode);
    if ((! vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access))) {
        this->__Vfunc_uvm_report_enabled__45__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__45__severity = 2U;
        __Vfunc_uvm_report_enabled__45__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__46__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__46__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__47__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__45__verbosity, (IData)(__Vfunc_uvm_report_enabled__45__severity), this->__Vfunc_uvm_report_enabled__45__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__49__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__49__context_name = ""s;
            __Vtask_uvm_report_error__49__line = 0x000003cdU;
            this->__Vtask_uvm_report_error__49__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__49__verbosity = 0U;
            this->__Vtask_uvm_report_error__49__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Access policy '"s, this->__PVT__m_access), "' is not a defined field access policy"s));
            this->__Vtask_uvm_report_error__49__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__50__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__50__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__51__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__49__id, this->__Vtask_uvm_report_error__49__message, __Vtask_uvm_report_error__49__verbosity, this->__Vtask_uvm_report_error__49__filename, __Vtask_uvm_report_error__49__line, this->__Vtask_uvm_report_error__49__context_name, (IData)(__Vtask_uvm_report_error__49__report_enabled_checked));
        }
        this->__PVT__m_access = set_access__Vfuncrtn;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_volatility(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ __SYM__volatile) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_volatility\n"); );
    // Body
    this->__PVT__m_volatile = __SYM__volatile;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_volatile(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_volatile__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_volatile\n"); );
    // Body
    is_volatile__Vfuncrtn = this->__PVT__m_volatile;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XpredictX(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ cur_val, QData/*63:0*/ wr_val, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &XpredictX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XpredictX\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_access;
    QData/*63:0*/ mask;
    XpredictX__Vfuncrtn = 0ULL;
    mask = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
            - 1ULL);
    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __VlefCall_0__get_access);
    XpredictX__Vfuncrtn = ((((((((("RO"s == __VlefCall_0__get_access) 
                                  | ("RW"s == __VlefCall_0__get_access)) 
                                 | ("RC"s == __VlefCall_0__get_access)) 
                                | ("RS"s == __VlefCall_0__get_access)) 
                               | ("WC"s == __VlefCall_0__get_access)) 
                              | ("WS"s == __VlefCall_0__get_access)) 
                             | ("WRC"s == __VlefCall_0__get_access)) 
                            | ("WRS"s == __VlefCall_0__get_access))
                            ? (("RO"s == __VlefCall_0__get_access)
                                ? cur_val : (("RW"s 
                                              == __VlefCall_0__get_access)
                                              ? wr_val
                                              : (("RC"s 
                                                  == __VlefCall_0__get_access)
                                                  ? cur_val
                                                  : 
                                                 (("RS"s 
                                                   == __VlefCall_0__get_access)
                                                   ? cur_val
                                                   : 
                                                  (("WC"s 
                                                    == __VlefCall_0__get_access)
                                                    ? 0ULL
                                                    : 
                                                   (("WS"s 
                                                     == __VlefCall_0__get_access)
                                                     ? mask
                                                     : wr_val))))))
                            : ((((((((("WSRC"s == __VlefCall_0__get_access) 
                                      | ("WCRS"s == __VlefCall_0__get_access)) 
                                     | ("W1C"s == __VlefCall_0__get_access)) 
                                    | ("W1S"s == __VlefCall_0__get_access)) 
                                   | ("W1T"s == __VlefCall_0__get_access)) 
                                  | ("W0C"s == __VlefCall_0__get_access)) 
                                 | ("W0S"s == __VlefCall_0__get_access)) 
                                | ("W0T"s == __VlefCall_0__get_access))
                                ? (("WSRC"s == __VlefCall_0__get_access)
                                    ? mask : (("WCRS"s 
                                               == __VlefCall_0__get_access)
                                               ? 0ULL
                                               : (("W1C"s 
                                                   == __VlefCall_0__get_access)
                                                   ? 
                                                  (cur_val 
                                                   & (~ wr_val))
                                                   : 
                                                  (("W1S"s 
                                                    == __VlefCall_0__get_access)
                                                    ? 
                                                   (cur_val 
                                                    | wr_val)
                                                    : 
                                                   (("W1T"s 
                                                     == __VlefCall_0__get_access)
                                                     ? 
                                                    (cur_val 
                                                     ^ wr_val)
                                                     : 
                                                    (("W0C"s 
                                                      == __VlefCall_0__get_access)
                                                      ? 
                                                     (cur_val 
                                                      & wr_val)
                                                      : 
                                                     (("W0S"s 
                                                       == __VlefCall_0__get_access)
                                                       ? 
                                                      (cur_val 
                                                       | ((~ wr_val) 
                                                          & mask))
                                                       : 
                                                      (cur_val 
                                                       ^ 
                                                       ((~ wr_val) 
                                                        & mask)))))))))
                                : ((((((((("W1SRC"s 
                                           == __VlefCall_0__get_access) 
                                          | ("W1CRS"s 
                                             == __VlefCall_0__get_access)) 
                                         | ("W0SRC"s 
                                            == __VlefCall_0__get_access)) 
                                        | ("W0CRS"s 
                                           == __VlefCall_0__get_access)) 
                                       | ("WO"s == __VlefCall_0__get_access)) 
                                      | ("WOC"s == __VlefCall_0__get_access)) 
                                     | ("WOS"s == __VlefCall_0__get_access)) 
                                    | ("W1"s == __VlefCall_0__get_access))
                                    ? (("W1SRC"s == __VlefCall_0__get_access)
                                        ? (cur_val 
                                           | wr_val)
                                        : (("W1CRS"s 
                                            == __VlefCall_0__get_access)
                                            ? (cur_val 
                                               & (~ wr_val))
                                            : (("W0SRC"s 
                                                == __VlefCall_0__get_access)
                                                ? (cur_val 
                                                   | ((~ wr_val) 
                                                      & mask))
                                                : (
                                                   ("W0CRS"s 
                                                    == __VlefCall_0__get_access)
                                                    ? 
                                                   (cur_val 
                                                    & wr_val)
                                                    : 
                                                   (("WO"s 
                                                     == __VlefCall_0__get_access)
                                                     ? wr_val
                                                     : 
                                                    (("WOC"s 
                                                      == __VlefCall_0__get_access)
                                                      ? 0ULL
                                                      : 
                                                     (("WOS"s 
                                                       == __VlefCall_0__get_access)
                                                       ? mask
                                                       : 
                                                      ((IData)(this->__PVT__m_written)
                                                        ? cur_val
                                                        : wr_val))))))))
                                    : (("WO1"s == __VlefCall_0__get_access)
                                        ? ((IData)(this->__PVT__m_written)
                                            ? cur_val
                                            : wr_val)
                                        : (("NOACCESS"s 
                                            == __VlefCall_0__get_access)
                                            ? cur_val
                                            : wr_val)))));
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_predict(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_predict\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    predict__Vfuncrtn = 0U;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    rw = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s);
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1096)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1097)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1098)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1099)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1100)->__PVT__lineno 
        = lineno;
    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
    predict__Vfuncrtn = ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1102)
                          ->__PVT__status) ? 0U : 1U);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict\n"); );
    // Locals
    QData/*63:0*/ __Vtask_post_predict__67__value;
    __Vtask_post_predict__67__value = 0;
    QData/*63:0*/ __Vtask_post_predict__72__value;
    __Vtask_post_predict__72__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__75__verbosity;
    __Vfunc_uvm_report_enabled__75__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__75__severity;
    __Vfunc_uvm_report_enabled__75__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__76__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__77__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__81__verbosity;
    __Vtask_uvm_report_warning__81__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__81__line;
    __Vtask_uvm_report_warning__81__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__81__report_enabled_checked;
    __Vtask_uvm_report_warning__81__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__82__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__83__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_busy;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19> unnamedblk276__DOT__cbs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk276__DOT__unnamedblk277__DOT__cb;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19> unnamedblk278__DOT__cbs;
    std::string unnamedblk278__DOT__unnamedblk279__DOT__acc;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk278__DOT__unnamedblk280__DOT__cb;
    QData/*63:0*/ field_val;
    {
        field_val = (VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1112)
                     ->__PVT__value.at(0U) & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                              - 1ULL));
        if ((1U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1114)
             ->__PVT__status)) {
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1115)->__PVT__status = 0U;
        }
        if ((1U & (~ (IData)(be)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1121)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1122)
            ->__PVT__lineno;
        if ((2U == kind)) {
            unnamedblk276__DOT__cbs = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19, vlSymsp, 
                                             VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            if (((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1130)
                  ->__PVT__path) || (2U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1130)
                                     ->__PVT__path))) {
                this->__VnoInFunc_XpredictX(vlProcess, vlSymsp, this->__PVT__m_mirrored, field_val, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1131)
                                            ->__PVT__map, field_val);
            }
            this->__PVT__m_written = 1U;
            VL_NULL_CHECK(unnamedblk276__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1135)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk276__DOT__unnamedblk277__DOT__cb);
            while ((VlNull{} != unnamedblk276__DOT__unnamedblk277__DOT__cb)) {
                __Vtask_post_predict__67__value = field_val;
                VL_NULL_CHECK(unnamedblk276__DOT__unnamedblk277__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1136)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__67__value, 2U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1137)
                                                                                ->__PVT__path, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1137)
                                                                                ->__PVT__map);
                field_val = __Vtask_post_predict__67__value;
                VL_NULL_CHECK(unnamedblk276__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1135)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk276__DOT__unnamedblk277__DOT__cb);
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
        } else if ((1U == kind)) {
            unnamedblk278__DOT__cbs = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19, vlSymsp, 
                                             VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            if (((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1147)
                  ->__PVT__path) || (2U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1147)
                                     ->__PVT__path))) {
                this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1149)
                                             ->__PVT__map, unnamedblk278__DOT__unnamedblk279__DOT__acc);
                if (((((("RC"s == unnamedblk278__DOT__unnamedblk279__DOT__acc) 
                        | ("WRC"s == unnamedblk278__DOT__unnamedblk279__DOT__acc)) 
                       | ("WSRC"s == unnamedblk278__DOT__unnamedblk279__DOT__acc)) 
                      | ("W1SRC"s == unnamedblk278__DOT__unnamedblk279__DOT__acc)) 
                     | ("W0SRC"s == unnamedblk278__DOT__unnamedblk279__DOT__acc))) {
                    field_val = 0ULL;
                } else if (((((("RS"s == unnamedblk278__DOT__unnamedblk279__DOT__acc) 
                               | ("WRS"s == unnamedblk278__DOT__unnamedblk279__DOT__acc)) 
                              | ("WCRS"s == unnamedblk278__DOT__unnamedblk279__DOT__acc)) 
                             | ("W1CRS"s == unnamedblk278__DOT__unnamedblk279__DOT__acc)) 
                            | ("W0CRS"s == unnamedblk278__DOT__unnamedblk279__DOT__acc))) {
                    field_val = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                 - 1ULL);
                } else if (((((("WO"s == unnamedblk278__DOT__unnamedblk279__DOT__acc) 
                               | ("WOC"s == unnamedblk278__DOT__unnamedblk279__DOT__acc)) 
                              | ("WOS"s == unnamedblk278__DOT__unnamedblk279__DOT__acc)) 
                             | ("WO1"s == unnamedblk278__DOT__unnamedblk279__DOT__acc)) 
                            | ("NOACCESS"s == unnamedblk278__DOT__unnamedblk279__DOT__acc))) {
                    goto __Vlabel0;
                }
            }
            VL_NULL_CHECK(unnamedblk278__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1173)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk278__DOT__unnamedblk280__DOT__cb);
            while ((VlNull{} != unnamedblk278__DOT__unnamedblk280__DOT__cb)) {
                __Vtask_post_predict__72__value = field_val;
                VL_NULL_CHECK(unnamedblk278__DOT__unnamedblk280__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1174)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__72__value, 1U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1175)
                                                                                ->__PVT__path, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1175)
                                                                                ->__PVT__map);
                field_val = __Vtask_post_predict__72__value;
                VL_NULL_CHECK(unnamedblk278__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1173)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk278__DOT__unnamedblk280__DOT__cb);
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
        } else if ((0U == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1183)->__VnoInFunc_is_busy(vlSymsp, __VlefCall_0__is_busy);
            if (__VlefCall_0__is_busy) {
                this->__Vfunc_uvm_report_enabled__75__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__75__severity = 1U;
                __Vfunc_uvm_report_enabled__75__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__76__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__76__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__77__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__77__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__75__verbosity, (IData)(__Vfunc_uvm_report_enabled__75__severity), this->__Vfunc_uvm_report_enabled__75__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1186)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __Vtask_uvm_report_warning__81__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__81__context_name = ""s;
                    __Vtask_uvm_report_warning__81__line = 0x000004a2U;
                    this->__Vtask_uvm_report_warning__81__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__81__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__81__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Trying to predict value of field '"s, __VlefCall_2__get_name), "' while register '"s), __VlefCall_3__get_full_name), "' is being accessed"s));
                    this->__Vtask_uvm_report_warning__81__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__82__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__82__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__83__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__83__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__81__id, this->__Vtask_uvm_report_warning__81__message, __Vtask_uvm_report_warning__81__verbosity, this->__Vtask_uvm_report_warning__81__filename, __Vtask_uvm_report_warning__81__line, this->__Vtask_uvm_report_warning__81__context_name, (IData)(__Vtask_uvm_report_warning__81__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1187)->__PVT__status = 1U;
            }
        }
        this->__PVT__m_mirrored = field_val;
        this->__PVT__m_desired = field_val;
        this->__PVT__value = field_val;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XupdateX(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &XupdateX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XupdateX\n"); );
    // Body
    XupdateX__Vfuncrtn = ((((((((("RO"s == this->__PVT__m_access) 
                                 | ("RW"s == this->__PVT__m_access)) 
                                | ("RC"s == this->__PVT__m_access)) 
                               | ("RS"s == this->__PVT__m_access)) 
                              | ("WRC"s == this->__PVT__m_access)) 
                             | ("WRS"s == this->__PVT__m_access)) 
                            | ("WC"s == this->__PVT__m_access)) 
                           | ("WS"s == this->__PVT__m_access))
                           ? this->__PVT__m_desired
                           : ((((((((("WSRC"s == this->__PVT__m_access) 
                                     | ("WCRS"s == this->__PVT__m_access)) 
                                    | ("W1C"s == this->__PVT__m_access)) 
                                   | ("W1S"s == this->__PVT__m_access)) 
                                  | ("W1T"s == this->__PVT__m_access)) 
                                 | ("W0C"s == this->__PVT__m_access)) 
                                | ("W0S"s == this->__PVT__m_access)) 
                               | ("W0T"s == this->__PVT__m_access))
                               ? (("WSRC"s == this->__PVT__m_access)
                                   ? this->__PVT__m_desired
                                   : (("WCRS"s == this->__PVT__m_access)
                                       ? this->__PVT__m_desired
                                       : (("W1C"s == this->__PVT__m_access)
                                           ? (~ this->__PVT__m_desired)
                                           : (("W1S"s 
                                               == this->__PVT__m_access)
                                               ? this->__PVT__m_desired
                                               : (("W1T"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   ^ this->__PVT__m_mirrored)
                                                   : 
                                                  (("W0C"s 
                                                    == this->__PVT__m_access)
                                                    ? this->__PVT__m_desired
                                                    : 
                                                   (("W0S"s 
                                                     == this->__PVT__m_access)
                                                     ? 
                                                    (~ this->__PVT__m_desired)
                                                     : 
                                                    (~ 
                                                     (this->__PVT__m_desired 
                                                      ^ this->__PVT__m_mirrored)))))))))
                               : ((((((((("W1SRC"s 
                                          == this->__PVT__m_access) 
                                         | ("W1CRS"s 
                                            == this->__PVT__m_access)) 
                                        | ("W0SRC"s 
                                           == this->__PVT__m_access)) 
                                       | ("W0CRS"s 
                                          == this->__PVT__m_access)) 
                                      | ("WO"s == this->__PVT__m_access)) 
                                     | ("WOC"s == this->__PVT__m_access)) 
                                    | ("WOS"s == this->__PVT__m_access)) 
                                   | ("W1"s == this->__PVT__m_access))
                                   ? (("W1SRC"s == this->__PVT__m_access)
                                       ? this->__PVT__m_desired
                                       : (("W1CRS"s 
                                           == this->__PVT__m_access)
                                           ? (~ this->__PVT__m_desired)
                                           : (("W0SRC"s 
                                               == this->__PVT__m_access)
                                               ? (~ this->__PVT__m_desired)
                                               : this->__PVT__m_desired)))
                                   : this->__PVT__m_desired)));
    XupdateX__Vfuncrtn = (XupdateX__Vfuncrtn & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                - 1ULL));
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
    __Vfunc_uvm_report_enabled__85__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
    __Vfunc_uvm_report_enabled__85__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__90__verbosity;
    __Vtask_uvm_report_warning__90__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__90__line;
    __Vtask_uvm_report_warning__90__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__90__report_enabled_checked;
    __Vtask_uvm_report_warning__90__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__91__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__92__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__95__verbosity;
    __Vfunc_uvm_report_enabled__95__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__95__severity;
    __Vfunc_uvm_report_enabled__95__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__96__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__97__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__101__verbosity;
    __Vtask_uvm_report_warning__101__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__101__line;
    __Vtask_uvm_report_warning__101__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__101__report_enabled_checked;
    __Vtask_uvm_report_warning__101__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__102__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__103__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__is_busy;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    QData/*63:0*/ mask;
    mask = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
            - 1ULL);
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__m_size))) {
        this->__Vfunc_uvm_report_enabled__85__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__85__severity = 1U;
        __Vfunc_uvm_report_enabled__85__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__86__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__86__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__87__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__85__verbosity, (IData)(__Vfunc_uvm_report_enabled__85__severity), this->__Vfunc_uvm_report_enabled__85__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __Vtask_uvm_report_warning__90__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__90__context_name = ""s;
            __Vtask_uvm_report_warning__90__line = 0x000004e4U;
            this->__Vtask_uvm_report_warning__90__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__90__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__90__message
                          ,"Specified value (0x%h) greater than field \"%s\" size (%0d bits)",3
                          , '#',64,value, 'S',&(__VlefCall_1__get_name)
                          , '#',32,this->__PVT__m_size);
            this->__Vtask_uvm_report_warning__90__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__91__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__91__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__92__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__92__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__90__id, this->__Vtask_uvm_report_warning__90__message, __Vtask_uvm_report_warning__90__verbosity, this->__Vtask_uvm_report_warning__90__filename, __Vtask_uvm_report_warning__90__line, this->__Vtask_uvm_report_warning__90__context_name, (IData)(__Vtask_uvm_report_warning__90__report_enabled_checked));
        }
        value = (value & mask);
    }
    VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1256)->__VnoInFunc_is_busy(vlSymsp, __VlefCall_2__is_busy);
    if (__VlefCall_2__is_busy) {
        this->__Vfunc_uvm_report_enabled__95__id = "UVM/FLD/SET/BSY"s;
        __Vfunc_uvm_report_enabled__95__severity = 1U;
        __Vfunc_uvm_report_enabled__95__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__96__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__96__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__97__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__97__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__95__verbosity, (IData)(__Vfunc_uvm_report_enabled__95__severity), this->__Vfunc_uvm_report_enabled__95__id, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1259)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            __Vtask_uvm_report_warning__101__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__101__context_name = ""s;
            __Vtask_uvm_report_warning__101__line = 0x000004ebU;
            this->__Vtask_uvm_report_warning__101__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__101__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__101__message
                          ,"Setting the value of field \"%s\" while containing register \"%s\" is being accessed may result in loss of desired field value. A race condition between threads concurrently accessing the register model is the likely cause of the problem.",2
                          , 'S',&(__VlefCall_4__get_name)
                          , 'S',&(__VlefCall_5__get_full_name));
            this->__Vtask_uvm_report_warning__101__id = "UVM/FLD/SET/BSY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__102__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__102__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__103__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__103__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__101__id, this->__Vtask_uvm_report_warning__101__message, __Vtask_uvm_report_warning__101__verbosity, this->__Vtask_uvm_report_warning__101__filename, __Vtask_uvm_report_warning__101__line, this->__Vtask_uvm_report_warning__101__context_name, (IData)(__Vtask_uvm_report_warning__101__report_enabled_checked));
        }
    }
    if ((((((((("RO"s == this->__PVT__m_access) | ("RW"s 
                                                   == this->__PVT__m_access)) 
              | ("RC"s == this->__PVT__m_access)) | 
             ("RS"s == this->__PVT__m_access)) | ("WC"s 
                                                  == this->__PVT__m_access)) 
           | ("WS"s == this->__PVT__m_access)) | ("WRC"s 
                                                  == this->__PVT__m_access)) 
         | ("WRS"s == this->__PVT__m_access))) {
        if ((1U & (~ ("RO"s == this->__PVT__m_access)))) {
            if (("RW"s == this->__PVT__m_access)) {
                this->__PVT__m_desired = value;
            } else if ((1U & (~ ("RC"s == this->__PVT__m_access)))) {
                if ((1U & (~ ("RS"s == this->__PVT__m_access)))) {
                    this->__PVT__m_desired = (("WC"s 
                                               == this->__PVT__m_access)
                                               ? 0ULL
                                               : (("WS"s 
                                                   == this->__PVT__m_access)
                                                   ? mask
                                                   : value));
                }
            }
        }
    } else {
        this->__PVT__m_desired = ((((((((("WSRC"s == this->__PVT__m_access) 
                                         | ("WCRS"s 
                                            == this->__PVT__m_access)) 
                                        | ("W1C"s == this->__PVT__m_access)) 
                                       | ("W1S"s == this->__PVT__m_access)) 
                                      | ("W1T"s == this->__PVT__m_access)) 
                                     | ("W0C"s == this->__PVT__m_access)) 
                                    | ("W0S"s == this->__PVT__m_access)) 
                                   | ("W0T"s == this->__PVT__m_access))
                                   ? (("WSRC"s == this->__PVT__m_access)
                                       ? mask : (("WCRS"s 
                                                  == this->__PVT__m_access)
                                                  ? 0ULL
                                                  : 
                                                 (("W1C"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   & (~ value))
                                                   : 
                                                  (("W1S"s 
                                                    == this->__PVT__m_access)
                                                    ? 
                                                   (this->__PVT__m_desired 
                                                    | value)
                                                    : 
                                                   (("W1T"s 
                                                     == this->__PVT__m_access)
                                                     ? 
                                                    (this->__PVT__m_desired 
                                                     ^ value)
                                                     : 
                                                    (("W0C"s 
                                                      == this->__PVT__m_access)
                                                      ? 
                                                     (this->__PVT__m_desired 
                                                      & value)
                                                      : 
                                                     (("W0S"s 
                                                       == this->__PVT__m_access)
                                                       ? 
                                                      (this->__PVT__m_desired 
                                                       | ((~ value) 
                                                          & mask))
                                                       : 
                                                      (this->__PVT__m_desired 
                                                       ^ 
                                                       ((~ value) 
                                                        & mask)))))))))
                                   : ((((((((("W1SRC"s 
                                              == this->__PVT__m_access) 
                                             | ("W1CRS"s 
                                                == this->__PVT__m_access)) 
                                            | ("W0SRC"s 
                                               == this->__PVT__m_access)) 
                                           | ("W0CRS"s 
                                              == this->__PVT__m_access)) 
                                          | ("WO"s 
                                             == this->__PVT__m_access)) 
                                         | ("WOC"s 
                                            == this->__PVT__m_access)) 
                                        | ("WOS"s == this->__PVT__m_access)) 
                                       | ("W1"s == this->__PVT__m_access))
                                       ? (("W1SRC"s 
                                           == this->__PVT__m_access)
                                           ? (this->__PVT__m_desired 
                                              | value)
                                           : (("W1CRS"s 
                                               == this->__PVT__m_access)
                                               ? (this->__PVT__m_desired 
                                                  & (~ value))
                                               : (("W0SRC"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   | ((~ value) 
                                                      & mask))
                                                   : 
                                                  (("W0CRS"s 
                                                    == this->__PVT__m_access)
                                                    ? 
                                                   (this->__PVT__m_desired 
                                                    & value)
                                                    : 
                                                   (("WO"s 
                                                     == this->__PVT__m_access)
                                                     ? value
                                                     : 
                                                    (("WOC"s 
                                                      == this->__PVT__m_access)
                                                      ? 0ULL
                                                      : 
                                                     (("WOS"s 
                                                       == this->__PVT__m_access)
                                                       ? mask
                                                       : 
                                                      ((IData)(this->__PVT__m_written)
                                                        ? this->__PVT__m_desired
                                                        : value))))))))
                                       : (("WO1"s == this->__PVT__m_access)
                                           ? ((IData)(this->__PVT__m_written)
                                               ? this->__PVT__m_desired
                                               : value)
                                           : value)));
    }
    this->__PVT__value = this->__PVT__m_desired;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get(Vhello_uvm__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get__Vfuncrtn = this->__PVT__m_desired;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_mirrored_value(Vhello_uvm__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_mirrored_value\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get_mirrored_value__Vfuncrtn = this->__PVT__m_mirrored;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_reset(Vhello_uvm__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_reset\n"); );
    // Body
    {
        if ((! this->__PVT__m_reset.exists(kind))) {
            goto __Vlabel0;
        }
        this->__PVT__m_mirrored = this->__PVT__m_reset
            .at(kind);
        this->__PVT__m_desired = this->__PVT__m_mirrored;
        this->__PVT__value = this->__PVT__m_mirrored;
        if (("HARD"s == kind)) {
            this->__PVT__m_written = 0U;
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_has_reset(Vhello_uvm__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_has_reset\n"); );
    // Body
    {
        has_reset__Vfuncrtn = 0U;
        if ((! this->__PVT__m_reset.exists(kind))) {
            has_reset__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (__SYM__delete) {
            this->__PVT__m_reset.erase(kind);
        }
        has_reset__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_reset(Vhello_uvm__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_reset\n"); );
    // Body
    {
        get_reset__Vfuncrtn = 0ULL;
        if ((! this->__PVT__m_reset.exists(kind))) {
            get_reset__Vfuncrtn = this->__PVT__m_desired;
            goto __Vlabel0;
        }
        get_reset__Vfuncrtn = this->__PVT__m_reset.at(kind);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_reset(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_reset\n"); );
    // Body
    this->__PVT__m_reset.at(kind) = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                              - 1ULL));
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_needs_update(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_needs_update\n"); );
    // Body
    needs_update__Vfuncrtn = ((this->__PVT__m_mirrored 
                               != this->__PVT__m_desired) 
                              | (IData)(this->__PVT__m_volatile));
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_Xcheck_accessX(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__109__verbosity;
    __Vfunc_uvm_report_enabled__109__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__109__severity;
    __Vfunc_uvm_report_enabled__109__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__114__verbosity;
    __Vtask_uvm_report_warning__114__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__114__line;
    __Vtask_uvm_report_warning__114__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__114__report_enabled_checked;
    __Vtask_uvm_report_warning__114__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__115__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__116__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__121__verbosity;
    __Vfunc_uvm_report_enabled__121__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__121__severity;
    __Vfunc_uvm_report_enabled__121__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__122__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__123__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__127__verbosity;
    __Vtask_uvm_report_error__127__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__127__line;
    __Vtask_uvm_report_error__127__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__127__report_enabled_checked;
    __Vtask_uvm_report_error__127__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__128__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__129__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__132__verbosity;
    __Vfunc_uvm_report_enabled__132__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__132__severity;
    __Vfunc_uvm_report_enabled__132__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__133__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__134__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__138__verbosity;
    __Vtask_uvm_report_error__138__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__138__line;
    __Vtask_uvm_report_error__138__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__138__report_enabled_checked;
    __Vtask_uvm_report_error__138__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__139__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__140__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_type_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    std::string __VlefCall_8__get_type_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> __VlefCall_7__get_local_map;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> __VlefCall_6__backdoor;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_3;
    CData/*0:0*/ __VlefCall_2__has_hdl_path;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_1__get_backdoor;
    IData/*31:0*/ __VlefCall_0__get_default_path;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> unnamedblk281__DOT__blk;
    {
        Xcheck_accessX__Vfuncrtn = 0U;
        if ((3U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1382)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1383)->__VnoInFunc_get_block(vlSymsp, unnamedblk281__DOT__blk);
            VL_NULL_CHECK(unnamedblk281__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1384)->__VnoInFunc_get_default_path(vlSymsp, __VlefCall_0__get_default_path);
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1384)->__PVT__path 
                = __VlefCall_0__get_default_path;
        }
        if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1387)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1388)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_1__get_backdoor);
            __VlefLogAnd_3 = (VlNull{} == __VlefCall_1__get_backdoor);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1388)->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_2__has_hdl_path);
                __VlefLogAnd_3 = (1U & (~ (IData)(__VlefCall_2__has_hdl_path)));
            }
            if (__VlefLogAnd_3) {
                this->__Vfunc_uvm_report_enabled__109__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__109__severity = 1U;
                __Vfunc_uvm_report_enabled__109__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__110__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__110__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__111__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__109__verbosity, (IData)(__Vfunc_uvm_report_enabled__109__severity), this->__Vfunc_uvm_report_enabled__109__id, __VlefCall_4__uvm_report_enabled);
                if ((0U != __VlefCall_4__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    __Vtask_uvm_report_warning__114__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__114__context_name = ""s;
                    __Vtask_uvm_report_warning__114__line = 0x0000056fU;
                    this->__Vtask_uvm_report_warning__114__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__114__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__114__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for field '"s, __VlefCall_5__get_full_name), "' . Using frontdoor instead."s));
                    this->__Vtask_uvm_report_warning__114__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__115__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__115__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__116__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__116__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__114__id, this->__Vtask_uvm_report_warning__114__message, __Vtask_uvm_report_warning__114__verbosity, this->__Vtask_uvm_report_warning__114__filename, __Vtask_uvm_report_warning__114__line, this->__Vtask_uvm_report_warning__114__context_name, (IData)(__Vtask_uvm_report_warning__114__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1392)->__PVT__path = 0U;
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_6__backdoor);
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1395)->__PVT__map 
                    = __VlefCall_6__backdoor;
            }
        }
        if ((1U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1398)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1400)->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1400)
                                                                                ->__PVT__map, caller, __VlefCall_7__get_local_map);
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1400)->__PVT__local_map 
                = __VlefCall_7__get_local_map;
            if ((VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1402)
                 ->__PVT__local_map)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                this->__Vfunc_uvm_report_enabled__121__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name);
                __Vfunc_uvm_report_enabled__121__severity = 2U;
                __Vfunc_uvm_report_enabled__121__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__122__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__122__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__123__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__123__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__121__verbosity, (IData)(__Vfunc_uvm_report_enabled__121__severity), this->__Vfunc_uvm_report_enabled__121__id, __VlefCall_9__uvm_report_enabled);
                if ((0U != __VlefCall_9__uvm_report_enabled)) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1405)
                                  ->__PVT__map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1405)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    __Vtask_uvm_report_error__127__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__127__context_name = ""s;
                    __Vtask_uvm_report_error__127__line = 0x0000057dU;
                    this->__Vtask_uvm_report_error__127__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_error__127__verbosity = 0U;
                    this->__Vtask_uvm_report_error__127__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, __VlefCall_11__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__127__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_10__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__128__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__128__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__129__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__129__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__127__id, this->__Vtask_uvm_report_error__127__message, __Vtask_uvm_report_error__127__verbosity, this->__Vtask_uvm_report_error__127__filename, __Vtask_uvm_report_error__127__line, this->__Vtask_uvm_report_error__127__context_name, (IData)(__Vtask_uvm_report_error__127__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1406)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1410)
                          ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1410)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, this->__PVT__m_parent, 1U, map_info);
            if (((VlNull{} == VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1412)
                  ->__PVT__frontdoor) && VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1412)
                 ->__PVT__unmapped)) {
                this->__Vfunc_uvm_report_enabled__132__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__132__severity = 2U;
                __Vfunc_uvm_report_enabled__132__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__133__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__133__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__134__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__134__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__132__verbosity, (IData)(__Vfunc_uvm_report_enabled__132__severity), this->__Vfunc_uvm_report_enabled__132__id, __VlefCall_12__uvm_report_enabled);
                if ((0U != __VlefCall_12__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1416)
                                  ->__PVT__map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1416)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    __Vtask_uvm_report_error__138__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__138__context_name = ""s;
                    __Vtask_uvm_report_error__138__line = 0x00000588U;
                    this->__Vtask_uvm_report_error__138__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_error__138__verbosity = 0U;
                    this->__Vtask_uvm_report_error__138__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Field '"s, __VlefCall_13__get_full_name), "' in register that is unmapped in map '"s), __VlefCall_14__get_full_name), "' and does not have a user-defined frontdoor"s));
                    this->__Vtask_uvm_report_error__138__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__139__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__139__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__140__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__140__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__138__id, this->__Vtask_uvm_report_error__138__message, __Vtask_uvm_report_error__138__verbosity, this->__Vtask_uvm_report_error__138__filename, __Vtask_uvm_report_error__138__line, this->__Vtask_uvm_report_error__138__context_name, (IData)(__Vtask_uvm_report_error__138__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1417)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            if ((VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1421)
                 ->__PVT__map)) {
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1422)->__PVT__map 
                    = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1422)
                    ->__PVT__local_map;
            }
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_write(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi15__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1443)->__PVT__element 
        = VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this};
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1444)->__PVT__element_kind = 1U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1445)->__PVT__kind = 1U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1446)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1447)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1448)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1449)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1450)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1451)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1452)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1453)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1457)
        ->__PVT__status;
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__146__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__147__verbosity;
    __Vfunc_uvm_report_enabled__147__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__147__severity;
    __Vfunc_uvm_report_enabled__147__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__148__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__149__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__152__verbosity;
    __Vtask_uvm_report_warning__152__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__152__line;
    __Vtask_uvm_report_warning__152__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__152__report_enabled_checked;
    __Vtask_uvm_report_warning__152__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__153__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__154__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__180__verbosity;
    __Vfunc_uvm_report_enabled__180__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__180__severity;
    __Vfunc_uvm_report_enabled__180__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__181__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__182__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__185__verbosity;
    __Vtask_uvm_report_warning__185__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__185__line;
    __Vtask_uvm_report_warning__185__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__185__report_enabled_checked;
    __Vtask_uvm_report_warning__185__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__186__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__187__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_8__get_auto_predict;
    CData/*0:0*/ __VlefCall_7__is_indv_accessible;
    IData/*31:0*/ __VlefCall_6__get_lsb_pos;
    IData/*31:0*/ __VlefCall_5__get_lsb_pos;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    std::string __VlefCall_3__get_access;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    IData/*31:0*/ unnamedblk282__DOT__i;
    unnamedblk282__DOT__i = 0;
    IData/*31:0*/ unnamedblk282__DOT__i__Vloopsize;
    unnamedblk282__DOT__i__Vloopsize = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk283__DOT__system_map;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19> unnamedblk283__DOT__cbs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk283__DOT__unnamedblk284__DOT__cb;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk283__DOT__unnamedblk285__DOT__cb;
    QData/*63:0*/ value_adjust;
    VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>> fields;
    CData/*0:0*/ bad_side_effect;
    {
        value_adjust = 0ULL;
        fields.clear();
        bad_side_effect = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1471)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1472)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1473)
            ->__PVT__lineno;
        this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__146__map_info, "write()"s, __VlefCall_0__Xcheck_accessX);
        if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        if ((0U != VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1480)
                                 ->__PVT__value.at(0U), this->__PVT__m_size))) {
            this->__Vfunc_uvm_report_enabled__147__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__147__severity = 1U;
            __Vfunc_uvm_report_enabled__147__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__148__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__148__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__149__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__149__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__147__verbosity, (IData)(__Vfunc_uvm_report_enabled__147__severity), this->__Vfunc_uvm_report_enabled__147__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_warning__152__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__152__context_name = ""s;
                __Vtask_uvm_report_warning__152__line = 0x000005caU;
                this->__Vtask_uvm_report_warning__152__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__152__verbosity = 0U;
                this->__Vtask_uvm_report_warning__152__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::write(): Value greater than field '"s, __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__152__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__153__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__153__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__154__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__154__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__152__id, this->__Vtask_uvm_report_warning__152__message, __Vtask_uvm_report_warning__152__verbosity, this->__Vtask_uvm_report_warning__152__filename, __Vtask_uvm_report_warning__152__line, this->__Vtask_uvm_report_warning__152__context_name, (IData)(__Vtask_uvm_report_warning__152__report_enabled_checked));
            }
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1483)->__PVT__value.atWrite(0U) 
                = (VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1483)
                   ->__PVT__value.at(0U) & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                            - 1ULL));
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1487)->__VnoInFunc_get_fields(vlSymsp, fields);
        unnamedblk282__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk282__DOT__i, fields.size())) {
            unnamedblk282__DOT__i__Vloopsize = fields.size();
            {
                if ((fields.at(unnamedblk282__DOT__i) 
                     == VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this})) {
                    value_adjust = (value_adjust | 
                                    VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1491)
                                                  ->__PVT__value.at(0U), this->__PVT__m_lsb));
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(fields.at(unnamedblk282__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1496)->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1496)
                                                                                ->__PVT__local_map, __VlefCall_3__get_access);
                if ((1U & (~ (((((((("RO"s == __VlefCall_3__get_access) 
                                    || ("RC"s == __VlefCall_3__get_access)) 
                                   || ("RS"s == __VlefCall_3__get_access)) 
                                  || ("W1C"s == __VlefCall_3__get_access)) 
                                 || ("W1S"s == __VlefCall_3__get_access)) 
                                || ("W1T"s == __VlefCall_3__get_access)) 
                               || ("W1SRC"s == __VlefCall_3__get_access)) 
                              || ("W1CRC"s == __VlefCall_3__get_access))))) {
                    if (((((("W0C"s == __VlefCall_3__get_access) 
                            || ("W0S"s == __VlefCall_3__get_access)) 
                           || ("W0T"s == __VlefCall_3__get_access)) 
                          || ("W0SRC"s == __VlefCall_3__get_access)) 
                         || ("W0CRS"s == __VlefCall_3__get_access))) {
                        VL_NULL_CHECK(fields.at(unnamedblk282__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1505)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
                        VL_NULL_CHECK(fields.at(unnamedblk282__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1505)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_5__get_lsb_pos);
                        value_adjust = (value_adjust 
                                        | VL_SHIFTL_QQI(64,64,32, 
                                                        (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_4__get_n_bits) 
                                                         - 1ULL), __VlefCall_5__get_lsb_pos));
                    } else if ((((((("WC"s == __VlefCall_3__get_access) 
                                    || ("WS"s == __VlefCall_3__get_access)) 
                                   || ("WCRS"s == __VlefCall_3__get_access)) 
                                  || ("WSRC"s == __VlefCall_3__get_access)) 
                                 || ("WOC"s == __VlefCall_3__get_access)) 
                                || ("WOS"s == __VlefCall_3__get_access))) {
                        bad_side_effect = 1U;
                    } else {
                        VL_NULL_CHECK(fields.at(unnamedblk282__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1512)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
                        value_adjust = (value_adjust 
                                        | VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(fields.at(unnamedblk282__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1512)
                                                        ->__PVT__m_mirrored, __VlefCall_6__get_lsb_pos));
                    }
                }
                __Vlabel1: ;
            }
            if ((unnamedblk282__DOT__i__Vloopsize <= fields.size())) {
                unnamedblk282__DOT__i = ((IData)(1U) 
                                         + unnamedblk282__DOT__i);
            }
        }
        this->__VnoInFunc_is_indv_accessible(vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1524)
                                             ->__PVT__path, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1524)
                                             ->__PVT__local_map, __VlefCall_7__is_indv_accessible);
        if (__VlefCall_7__is_indv_accessible) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1536)
                          ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1536)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk283__DOT__system_map);
            unnamedblk283__DOT__cbs = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19, vlSymsp, 
                                             VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1539)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1541)->__PVT__status = 0U;
            this->__VnoInFunc_pre_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk283__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1544)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk283__DOT__unnamedblk284__DOT__cb);
            while ((VlNull{} != unnamedblk283__DOT__unnamedblk284__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk283__DOT__unnamedblk284__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1545)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk283__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1544)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk283__DOT__unnamedblk284__DOT__cb);
            }
            if ((0U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1547)
                 ->__PVT__status)) {
                this->__PVT__m_write_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1549)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1550)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1555)
                                   ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1555)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk283__DOT__system_map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1557)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_8__get_auto_predict);
            if (__VlefCall_8__get_auto_predict) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
            }
            this->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk283__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1562)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk283__DOT__unnamedblk285__DOT__cb);
            while ((VlNull{} != unnamedblk283__DOT__unnamedblk285__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk283__DOT__unnamedblk285__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1563)->__VnoInFunc_post_write(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk283__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1562)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk283__DOT__unnamedblk285__DOT__cb);
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1565)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
        } else {
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1525)->__PVT__element_kind = 0U;
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1526)->__PVT__element 
                = this->__PVT__m_parent;
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1527)->__PVT__value.atWrite(0U) 
                = value_adjust;
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1528)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            if (bad_side_effect) {
                this->__Vfunc_uvm_report_enabled__180__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__180__severity = 1U;
                __Vfunc_uvm_report_enabled__180__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__181__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__181__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__182__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__182__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__180__verbosity, (IData)(__Vfunc_uvm_report_enabled__180__severity), this->__Vfunc_uvm_report_enabled__180__id, __VlefCall_9__uvm_report_enabled);
                if ((0U != __VlefCall_9__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    __Vtask_uvm_report_warning__185__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__185__context_name = ""s;
                    __Vtask_uvm_report_warning__185__line = 0x000005fbU;
                    this->__Vtask_uvm_report_warning__185__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__185__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__185__message
                                  ,"Writing field \"%s\" will cause unintended side effects in adjoining Write-to-Clear or Write-to-Set fields in the same register",1
                                  , 'S',&(__VlefCall_10__get_full_name));
                    this->__Vtask_uvm_report_warning__185__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__186__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__186__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__187__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__187__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__185__id, this->__Vtask_uvm_report_warning__185__message, __Vtask_uvm_report_warning__185__verbosity, this->__Vtask_uvm_report_warning__185__filename, __Vtask_uvm_report_warning__185__line, this->__Vtask_uvm_report_warning__185__context_name, (IData)(__Vtask_uvm_report_warning__185__report_enabled_checked));
                }
            }
        }
        this->__PVT__m_write_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1572)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi15__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_read_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1591)->__PVT__element 
        = VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this};
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1592)->__PVT__element_kind = 1U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1593)->__PVT__kind = 0U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1594)->__PVT__value.atWrite(0U) = 0ULL;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1595)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1596)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1597)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1598)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1599)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1600)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1601)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlSymsp, rw);
    value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1605)
        ->__PVT__value.at(0U);
    status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1606)
        ->__PVT__status;
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__194__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__217__verbosity;
    __Vfunc_uvm_report_enabled__217__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__217__severity;
    __Vfunc_uvm_report_enabled__217__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__218__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__219__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__222__verbosity;
    __Vtask_uvm_report_warning__222__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__222__line;
    __Vtask_uvm_report_warning__222__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__222__report_enabled_checked;
    __Vtask_uvm_report_warning__222__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__223__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__224__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__get_auto_predict;
    CData/*0:0*/ __VlefCall_1__is_indv_accessible;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk286__DOT__system_map;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19> unnamedblk286__DOT__cbs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk286__DOT__unnamedblk287__DOT__cb;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk286__DOT__unnamedblk288__DOT__cb;
    VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>> unnamedblk289__DOT__fields;
    IData/*31:0*/ unnamedblk289__DOT__unnamedblk290__DOT__i;
    unnamedblk289__DOT__unnamedblk290__DOT__i = 0;
    IData/*31:0*/ unnamedblk289__DOT__unnamedblk290__DOT__i__Vloopsize;
    unnamedblk289__DOT__unnamedblk290__DOT__i__Vloopsize = 0;
    std::string unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode;
    CData/*0:0*/ bad_side_effect;
    {
        bad_side_effect = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1618)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1619)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1620)
            ->__PVT__lineno;
        this->__PVT__m_read_in_progress = 1U;
        this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__194__map_info, "read()"s, __VlefCall_0__Xcheck_accessX);
        if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_indv_accessible(vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1634)
                                             ->__PVT__path, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1634)
                                             ->__PVT__local_map, __VlefCall_1__is_indv_accessible);
        if (__VlefCall_1__is_indv_accessible) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1643)
                          ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1643)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk286__DOT__system_map);
            unnamedblk286__DOT__cbs = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19, vlSymsp, 
                                             VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1646)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1648)->__PVT__status = 0U;
            this->__VnoInFunc_pre_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk286__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1651)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk286__DOT__unnamedblk287__DOT__cb);
            while ((VlNull{} != unnamedblk286__DOT__unnamedblk287__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk286__DOT__unnamedblk287__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1652)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk286__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1651)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk286__DOT__unnamedblk287__DOT__cb);
            }
            if ((0U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1654)
                 ->__PVT__status)) {
                this->__PVT__m_read_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1656)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1657)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1662)
                                   ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1662)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk286__DOT__system_map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1665)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_2__get_auto_predict);
            if (__VlefCall_2__get_auto_predict) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
            }
            this->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk286__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1670)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk286__DOT__unnamedblk288__DOT__cb);
            while ((VlNull{} != unnamedblk286__DOT__unnamedblk288__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk286__DOT__unnamedblk288__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1671)->__VnoInFunc_post_read(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk286__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1670)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk286__DOT__unnamedblk288__DOT__cb);
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1673)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
        } else {
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1635)->__PVT__element_kind = 0U;
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1636)->__PVT__element 
                = this->__PVT__m_parent;
            bad_side_effect = 1U;
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1638)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1639)->__PVT__value.atWrite(0U) 
                = (VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1639)
                                 ->__PVT__value.at(0U), this->__PVT__m_lsb) 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                      - 1ULL));
        }
        this->__PVT__m_read_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1680)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        if (bad_side_effect) {
            unnamedblk289__DOT__fields.clear();
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1684)->__VnoInFunc_get_fields(vlSymsp, unnamedblk289__DOT__fields);
            unnamedblk289__DOT__unnamedblk290__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk289__DOT__unnamedblk290__DOT__i, unnamedblk289__DOT__fields.size())) {
                unnamedblk289__DOT__unnamedblk290__DOT__i__Vloopsize 
                    = unnamedblk289__DOT__fields.size();
                {
                    unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode = ""s;
                    if ((unnamedblk289__DOT__fields.at(unnamedblk289__DOT__unnamedblk290__DOT__i) 
                         == VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        goto __Vlabel1;
                    }
                    VL_NULL_CHECK(unnamedblk289__DOT__fields.at(unnamedblk289__DOT__unnamedblk290__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1689)->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode);
                    if ((((((((((("RC"s == unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode) 
                                 | ("RS"s == unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode)) 
                                | ("WRC"s == unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode)) 
                               | ("WRS"s == unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode)) 
                              | ("WSRC"s == unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode)) 
                             | ("WCRS"s == unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode)) 
                            | ("W1SRC"s == unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode)) 
                           | ("W1CRS"s == unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode)) 
                          | ("W0SRC"s == unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode)) 
                         | ("W0CRS"s == unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__mode))) {
                        this->__Vfunc_uvm_report_enabled__217__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__217__severity = 1U;
                        __Vfunc_uvm_report_enabled__217__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__218__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__218__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__219__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__219__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__217__verbosity, (IData)(__Vfunc_uvm_report_enabled__217__severity), this->__Vfunc_uvm_report_enabled__217__id, __VlefCall_3__uvm_report_enabled);
                        if ((0U != __VlefCall_3__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                            __Vtask_uvm_report_warning__222__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__222__context_name = ""s;
                            __Vtask_uvm_report_warning__222__line = 0x000006a6U;
                            this->__Vtask_uvm_report_warning__222__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                            __Vtask_uvm_report_warning__222__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__222__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Reading field '"s, __VlefCall_4__get_full_name), "' will cause unintended side effects in adjoining "s), "Read-to-Clear or Read-to-Set fields in the same register"s));
                            this->__Vtask_uvm_report_warning__222__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__223__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__223__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__224__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__224__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__222__id, this->__Vtask_uvm_report_warning__222__message, __Vtask_uvm_report_warning__222__verbosity, this->__Vtask_uvm_report_warning__222__filename, __Vtask_uvm_report_warning__222__line, this->__Vtask_uvm_report_warning__222__context_name, (IData)(__Vtask_uvm_report_warning__222__report_enabled_checked));
                        }
                    }
                    __Vlabel1: ;
                }
                if ((unnamedblk289__DOT__unnamedblk290__DOT__i__Vloopsize 
                     <= unnamedblk289__DOT__fields.size())) {
                    unnamedblk289__DOT__unnamedblk290__DOT__i 
                        = ((IData)(1U) + unnamedblk289__DOT__unnamedblk290__DOT__i);
                }
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> local_map, CData/*0:0*/ &is_indv_accessible__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__226__verbosity;
    __Vfunc_uvm_report_enabled__226__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__226__severity;
    __Vfunc_uvm_report_enabled__226__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__227__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__228__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__231__verbosity;
    __Vtask_uvm_report_warning__231__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__231__line;
    __Vtask_uvm_report_warning__231__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__231__report_enabled_checked;
    __Vtask_uvm_report_warning__231__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__232__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__233__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__235__verbosity;
    __Vfunc_uvm_report_enabled__235__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__235__severity;
    __Vfunc_uvm_report_enabled__235__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__236__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__237__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__240__verbosity;
    __Vtask_uvm_report_warning__240__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__240__line;
    __Vtask_uvm_report_warning__240__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__240__report_enabled_checked;
    __Vtask_uvm_report_warning__240__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__241__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__242__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__245__verbosity;
    __Vfunc_uvm_report_enabled__245__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__245__severity;
    __Vfunc_uvm_report_enabled__245__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__246__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__247__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__251__verbosity;
    __Vtask_uvm_report_warning__251__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__251__line;
    __Vtask_uvm_report_warning__251__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__251__report_enabled_checked;
    __Vtask_uvm_report_warning__251__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__252__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__253__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__257__Vfuncout;
    __Vtask_get_n_bytes__257__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__259__Vfuncout;
    __Vtask_get_lsb_pos__259__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__260__Vfuncout;
    __Vtask_get_n_bits__260__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__261__Vfuncout;
    __Vtask_get_lsb_pos__261__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__262__Vfuncout;
    __Vtask_get_n_bits__262__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__263__Vfuncout;
    __Vtask_get_lsb_pos__263__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__264__Vfuncout;
    __Vtask_get_n_bits__264__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__265__verbosity;
    __Vfunc_uvm_report_enabled__265__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__265__severity;
    __Vfunc_uvm_report_enabled__265__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__266__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__267__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__270__verbosity;
    __Vtask_uvm_report_warning__270__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__270__line;
    __Vtask_uvm_report_warning__270__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__270__report_enabled_checked;
    __Vtask_uvm_report_warning__270__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__271__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__272__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> __VlefCall_4__get_frontdoor;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk292__DOT__system_map;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_adapter> unnamedblk292__DOT__adapter;
    IData/*31:0*/ unnamedblk293__DOT__fld_idx;
    IData/*31:0*/ unnamedblk293__DOT__bus_width;
    VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>> unnamedblk293__DOT__fields;
    IData/*31:0*/ unnamedblk293__DOT__unnamedblk294__DOT__prev_lsb;
    IData/*31:0*/ unnamedblk293__DOT__unnamedblk294__DOT__this_lsb;
    IData/*31:0*/ unnamedblk293__DOT__unnamedblk294__DOT__next_lsb;
    IData/*31:0*/ unnamedblk293__DOT__unnamedblk294__DOT__prev_sz;
    IData/*31:0*/ unnamedblk293__DOT__unnamedblk294__DOT__this_sz;
    IData/*31:0*/ unnamedblk293__DOT__unnamedblk294__DOT__bus_sz;
    IData/*31:0*/ unnamedblk293__DOT__unnamedblk294__DOT__unnamedblk295__DOT__i;
    unnamedblk293__DOT__unnamedblk294__DOT__unnamedblk295__DOT__i = 0;
    {
        is_indv_accessible__Vfuncrtn = 0U;
        if ((1U == path)) {
            this->__Vfunc_uvm_report_enabled__226__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__226__severity = 1U;
            __Vfunc_uvm_report_enabled__226__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__227__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__227__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__228__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__228__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__226__verbosity, (IData)(__Vfunc_uvm_report_enabled__226__severity), this->__Vfunc_uvm_report_enabled__226__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_warning__231__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__231__context_name = ""s;
                __Vtask_uvm_report_warning__231__line = 0x000006b5U;
                this->__Vtask_uvm_report_warning__231__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__231__verbosity = 0U;
                this->__Vtask_uvm_report_warning__231__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual BACKDOOR field access not available for field '"s, __VlefCall_1__get_full_name), "'. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__231__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__232__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__232__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__233__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__233__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__231__id, this->__Vtask_uvm_report_warning__231__message, __Vtask_uvm_report_warning__231__verbosity, this->__Vtask_uvm_report_warning__231__filename, __Vtask_uvm_report_warning__231__line, this->__Vtask_uvm_report_warning__231__context_name, (IData)(__Vtask_uvm_report_warning__231__report_enabled_checked));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(this->__PVT__m_individually_accessible)))) {
            this->__Vfunc_uvm_report_enabled__235__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__235__severity = 1U;
            __Vfunc_uvm_report_enabled__235__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__236__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__236__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__237__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__237__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__235__verbosity, (IData)(__Vfunc_uvm_report_enabled__235__severity), this->__Vfunc_uvm_report_enabled__235__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_warning__240__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__240__context_name = ""s;
                __Vtask_uvm_report_warning__240__line = 0x000006bcU;
                this->__Vtask_uvm_report_warning__240__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__240__verbosity = 0U;
                this->__Vtask_uvm_report_warning__240__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual field access not available for field '"s, __VlefCall_3__get_full_name), "'. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__240__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__241__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__241__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__242__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__242__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__240__id, this->__Vtask_uvm_report_warning__240__message, __Vtask_uvm_report_warning__240__verbosity, this->__Vtask_uvm_report_warning__240__filename, __Vtask_uvm_report_warning__240__line, this->__Vtask_uvm_report_warning__240__context_name, (IData)(__Vtask_uvm_report_warning__240__report_enabled_checked));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1730)->__VnoInFunc_get_frontdoor(vlSymsp, local_map, __VlefCall_4__get_frontdoor);
        if ((VlNull{} != __VlefCall_4__get_frontdoor)) {
            this->__Vfunc_uvm_report_enabled__245__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__245__severity = 1U;
            __Vfunc_uvm_report_enabled__245__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__246__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__246__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__247__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__247__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__245__verbosity, (IData)(__Vfunc_uvm_report_enabled__245__severity), this->__Vfunc_uvm_report_enabled__245__id, __VlefCall_5__uvm_report_enabled);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1733)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_warning__251__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__251__context_name = ""s;
                __Vtask_uvm_report_warning__251__line = 0x000006c5U;
                this->__Vtask_uvm_report_warning__251__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__251__verbosity = 0U;
                this->__Vtask_uvm_report_warning__251__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Individual field access not available for field '"s, __VlefCall_6__get_name), "' because register '"s), __VlefCall_7__get_full_name), "' has a user-defined front-door. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__251__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__252__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__252__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__253__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__253__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__251__id, this->__Vtask_uvm_report_warning__251__message, __Vtask_uvm_report_warning__251__verbosity, this->__Vtask_uvm_report_warning__251__filename, __Vtask_uvm_report_warning__251__line, this->__Vtask_uvm_report_warning__251__context_name, (IData)(__Vtask_uvm_report_warning__251__report_enabled_checked));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(local_map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1738)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk292__DOT__system_map);
        VL_NULL_CHECK(unnamedblk292__DOT__system_map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1739)->__VnoInFunc_get_adapter(vlSymsp, 1U, unnamedblk292__DOT__adapter);
        if (VL_NULL_CHECK(unnamedblk292__DOT__adapter, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1740)
            ->__PVT__supports_byte_enable) {
            is_indv_accessible__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        unnamedblk293__DOT__fld_idx = 0U;
        VL_NULL_CHECK(local_map, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1746)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__257__Vfuncout);
        unnamedblk293__DOT__bus_width = __Vtask_get_n_bytes__257__Vfuncout;
        unnamedblk293__DOT__fields.clear();
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1750)->__VnoInFunc_get_fields(vlSymsp, unnamedblk293__DOT__fields);
        if ((1U != unnamedblk293__DOT__fields.size())) {
            unnamedblk293__DOT__unnamedblk294__DOT__prev_lsb = 0U;
            unnamedblk293__DOT__unnamedblk294__DOT__this_lsb = 0U;
            unnamedblk293__DOT__unnamedblk294__DOT__next_lsb = 0U;
            unnamedblk293__DOT__unnamedblk294__DOT__prev_sz = 0U;
            unnamedblk293__DOT__unnamedblk294__DOT__this_sz = 0U;
            unnamedblk293__DOT__unnamedblk294__DOT__bus_sz 
                = VL_MULS_III(32, (IData)(8U), unnamedblk293__DOT__bus_width);
            {
                unnamedblk293__DOT__unnamedblk294__DOT__unnamedblk295__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk293__DOT__unnamedblk294__DOT__unnamedblk295__DOT__i, unnamedblk293__DOT__fields.size())) {
                    if ((unnamedblk293__DOT__fields.at(unnamedblk293__DOT__unnamedblk294__DOT__unnamedblk295__DOT__i) 
                         == VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        unnamedblk293__DOT__fld_idx 
                            = unnamedblk293__DOT__unnamedblk294__DOT__unnamedblk295__DOT__i;
                        goto __Vlabel1;
                    }
                    unnamedblk293__DOT__unnamedblk294__DOT__unnamedblk295__DOT__i 
                        = ((IData)(1U) + unnamedblk293__DOT__unnamedblk294__DOT__unnamedblk295__DOT__i);
                }
                __Vlabel1: ;
            }
            VL_NULL_CHECK(unnamedblk293__DOT__fields.at(unnamedblk293__DOT__fld_idx), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1767)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__259__Vfuncout);
            unnamedblk293__DOT__unnamedblk294__DOT__this_lsb 
                = __Vtask_get_lsb_pos__259__Vfuncout;
            VL_NULL_CHECK(unnamedblk293__DOT__fields.at(unnamedblk293__DOT__fld_idx), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1768)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__260__Vfuncout);
            unnamedblk293__DOT__unnamedblk294__DOT__this_sz 
                = __Vtask_get_n_bits__260__Vfuncout;
            if (VL_LTS_III(32, 0U, unnamedblk293__DOT__fld_idx)) {
                VL_NULL_CHECK(unnamedblk293__DOT__fields.at(
                                                            (unnamedblk293__DOT__fld_idx 
                                                             - (IData)(1U))), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1771)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__261__Vfuncout);
                unnamedblk293__DOT__unnamedblk294__DOT__prev_lsb 
                    = __Vtask_get_lsb_pos__261__Vfuncout;
                VL_NULL_CHECK(unnamedblk293__DOT__fields.at(
                                                            (unnamedblk293__DOT__fld_idx 
                                                             - (IData)(1U))), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1772)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__262__Vfuncout);
                unnamedblk293__DOT__unnamedblk294__DOT__prev_sz 
                    = __Vtask_get_n_bits__262__Vfuncout;
            }
            if (VL_LTS_III(32, unnamedblk293__DOT__fld_idx, 
                           (unnamedblk293__DOT__fields.size() 
                            - (IData)(1U)))) {
                VL_NULL_CHECK(unnamedblk293__DOT__fields.at(
                                                            ((IData)(1U) 
                                                             + unnamedblk293__DOT__fld_idx)), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1776)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__263__Vfuncout);
                unnamedblk293__DOT__unnamedblk294__DOT__next_lsb 
                    = __Vtask_get_lsb_pos__263__Vfuncout;
                VL_NULL_CHECK(unnamedblk293__DOT__fields.at(
                                                            ((IData)(1U) 
                                                             + unnamedblk293__DOT__fld_idx)), "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1777)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__264__Vfuncout);
            }
            if (((0U == unnamedblk293__DOT__fld_idx) 
                 & ((0U == VL_MODDIVS_III(32, unnamedblk293__DOT__unnamedblk294__DOT__next_lsb, unnamedblk293__DOT__unnamedblk294__DOT__bus_sz)) 
                    | VL_GTS_III(32, (unnamedblk293__DOT__unnamedblk294__DOT__next_lsb 
                                      - unnamedblk293__DOT__unnamedblk294__DOT__this_sz), 
                                 VL_MODDIVS_III(32, unnamedblk293__DOT__unnamedblk294__DOT__next_lsb, unnamedblk293__DOT__unnamedblk294__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else if (((unnamedblk293__DOT__fld_idx 
                         == (unnamedblk293__DOT__fields.size() 
                             - (IData)(1U))) & ((0U 
                                                 == 
                                                 VL_MODDIVS_III(32, unnamedblk293__DOT__unnamedblk294__DOT__this_lsb, unnamedblk293__DOT__unnamedblk294__DOT__bus_sz)) 
                                                | VL_GTES_III(32, 
                                                              (unnamedblk293__DOT__unnamedblk294__DOT__this_lsb 
                                                               - 
                                                               (unnamedblk293__DOT__unnamedblk294__DOT__prev_lsb 
                                                                + unnamedblk293__DOT__unnamedblk294__DOT__prev_sz)), 
                                                              VL_MODDIVS_III(32, unnamedblk293__DOT__unnamedblk294__DOT__this_lsb, unnamedblk293__DOT__unnamedblk294__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else if ((0U == VL_MODDIVS_III(32, unnamedblk293__DOT__unnamedblk294__DOT__this_lsb, unnamedblk293__DOT__unnamedblk294__DOT__bus_sz))) {
                if (((0U == VL_MODDIVS_III(32, unnamedblk293__DOT__unnamedblk294__DOT__next_lsb, unnamedblk293__DOT__unnamedblk294__DOT__bus_sz)) 
                     | VL_GTES_III(32, (unnamedblk293__DOT__unnamedblk294__DOT__next_lsb 
                                        - (unnamedblk293__DOT__unnamedblk294__DOT__this_lsb 
                                           + unnamedblk293__DOT__unnamedblk294__DOT__this_sz)), 
                                   VL_MODDIVS_III(32, unnamedblk293__DOT__unnamedblk294__DOT__next_lsb, unnamedblk293__DOT__unnamedblk294__DOT__bus_sz)))) {
                    is_indv_accessible__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
            } else if ((VL_GTES_III(32, (unnamedblk293__DOT__unnamedblk294__DOT__next_lsb 
                                         - (unnamedblk293__DOT__unnamedblk294__DOT__this_lsb 
                                            + unnamedblk293__DOT__unnamedblk294__DOT__this_sz)), 
                                    VL_MODDIVS_III(32, unnamedblk293__DOT__unnamedblk294__DOT__next_lsb, unnamedblk293__DOT__unnamedblk294__DOT__bus_sz)) 
                        & VL_GTES_III(32, (unnamedblk293__DOT__unnamedblk294__DOT__this_lsb 
                                           - (unnamedblk293__DOT__unnamedblk294__DOT__prev_lsb 
                                              + unnamedblk293__DOT__unnamedblk294__DOT__prev_sz)), 
                                      VL_MODDIVS_III(32, unnamedblk293__DOT__unnamedblk294__DOT__this_lsb, unnamedblk293__DOT__unnamedblk294__DOT__bus_sz)))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
        }
        this->__Vfunc_uvm_report_enabled__265__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__265__severity = 1U;
        __Vfunc_uvm_report_enabled__265__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__266__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__266__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__267__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__267__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__265__verbosity, (IData)(__Vfunc_uvm_report_enabled__265__severity), this->__Vfunc_uvm_report_enabled__265__id, __VlefCall_8__uvm_report_enabled);
        if ((0U != __VlefCall_8__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            __Vtask_uvm_report_warning__270__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__270__context_name = ""s;
            __Vtask_uvm_report_warning__270__line = 0x00000714U;
            this->__Vtask_uvm_report_warning__270__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__270__verbosity = 0U;
            this->__Vtask_uvm_report_warning__270__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Target bus does not support byte enabling, and the field '"s, __VlefCall_9__get_full_name), "' is not the only field within the entire bus width. "s), "Individual field access will not be available. "s), "Accessing complete register instead."s));
            this->__Vtask_uvm_report_warning__270__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__271__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__271__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__272__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__272__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__270__id, this->__Vtask_uvm_report_warning__270__message, __Vtask_uvm_report_warning__270__verbosity, this->__Vtask_uvm_report_warning__270__filename, __Vtask_uvm_report_warning__270__line, this->__Vtask_uvm_report_warning__270__context_name, (IData)(__Vtask_uvm_report_warning__270__report_enabled_checked));
        }
        is_indv_accessible__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__274__verbosity;
    __Vfunc_uvm_report_enabled__274__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__274__severity;
    __Vfunc_uvm_report_enabled__274__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__275__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__276__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__279__verbosity;
    __Vtask_uvm_report_warning__279__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__279__line;
    __Vtask_uvm_report_warning__279__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__279__report_enabled_checked;
    __Vtask_uvm_report_warning__279__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__280__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__281__Vfuncout;
    IData/*31:0*/ __Vtask_peek__284__status;
    __Vtask_peek__284__status = 0;
    QData/*63:0*/ __Vtask_peek__284__value;
    __Vtask_peek__284__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__285__verbosity;
    __Vfunc_uvm_report_enabled__285__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__285__severity;
    __Vfunc_uvm_report_enabled__285__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__286__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__287__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__290__verbosity;
    __Vtask_uvm_report_error__290__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__290__line;
    __Vtask_uvm_report_error__290__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__290__report_enabled_checked;
    __Vtask_uvm_report_error__290__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__291__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__292__Vfuncout;
    IData/*31:0*/ __Vtask_poke__295__status;
    __Vtask_poke__295__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    QData/*63:0*/ tmp;
    {
        status = 0U;
        tmp = 0ULL;
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__m_size))) {
            this->__Vfunc_uvm_report_enabled__274__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__274__severity = 1U;
            __Vfunc_uvm_report_enabled__274__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__275__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__275__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__276__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__276__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__274__verbosity, (IData)(__Vfunc_uvm_report_enabled__274__severity), this->__Vfunc_uvm_report_enabled__274__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                __Vtask_uvm_report_warning__279__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__279__context_name = ""s;
                __Vtask_uvm_report_warning__279__line = 0x0000072cU;
                this->__Vtask_uvm_report_warning__279__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__279__verbosity = 0U;
                this->__Vtask_uvm_report_warning__279__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::poke(): Value exceeds size of field '"s, __VlefCall_1__get_name), "'"s));
                this->__Vtask_uvm_report_warning__279__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__280__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__280__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__281__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__281__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__279__id, this->__Vtask_uvm_report_warning__279__message, __Vtask_uvm_report_warning__279__verbosity, this->__Vtask_uvm_report_warning__279__filename, __Vtask_uvm_report_warning__279__line, this->__Vtask_uvm_report_warning__279__context_name, (IData)(__Vtask_uvm_report_warning__279__report_enabled_checked));
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                              - 1ULL));
        }
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1841)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1842)->__PVT__m_is_locked_by_field = 1U;
        tmp = 0ULL;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1847)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__284__status, __Vtask_peek__284__value, kind, parent, extension, fname, lineno);
        status = __Vtask_peek__284__status;
        tmp = __Vtask_peek__284__value;
        if ((1U == status)) {
            this->__Vfunc_uvm_report_enabled__285__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__285__severity = 2U;
            __Vfunc_uvm_report_enabled__285__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__286__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__286__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__287__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__287__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__285__verbosity, (IData)(__Vfunc_uvm_report_enabled__285__severity), this->__Vfunc_uvm_report_enabled__285__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1851)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__290__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__290__context_name = ""s;
                __Vtask_uvm_report_error__290__line = 0x0000073bU;
                this->__Vtask_uvm_report_error__290__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_error__290__verbosity = 0U;
                this->__Vtask_uvm_report_error__290__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("uvm_reg_field::poke(): Peek of register '"s, __VlefCall_3__get_full_name), "' returned status "s), Vhello_uvm___024unit::__Venumtab_enum_name73
                                                        [
                                                        (3U 
                                                         & status)]));
                this->__Vtask_uvm_report_error__290__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__291__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__291__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__292__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__292__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__290__id, this->__Vtask_uvm_report_error__290__message, __Vtask_uvm_report_error__290__verbosity, this->__Vtask_uvm_report_error__290__filename, __Vtask_uvm_report_error__290__line, this->__Vtask_uvm_report_error__290__context_name, (IData)(__Vtask_uvm_report_error__290__report_enabled_checked));
            }
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1852)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1853)->__PVT__m_is_locked_by_field = 0U;
            goto __Vlabel0;
        }
        tmp = (tmp & (~ VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                 - 1ULL), this->__PVT__m_lsb)));
        tmp = (tmp | VL_SHIFTL_QQI(64,64,32, value, this->__PVT__m_lsb));
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1860)->__VnoInFunc_poke(vlSymsp, __Vtask_poke__295__status, tmp, kind, parent, extension, fname, lineno);
        status = __Vtask_poke__295__status;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1862)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1863)->__PVT__m_is_locked_by_field = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__297__status;
    __Vtask_peek__297__status = 0;
    QData/*63:0*/ __Vtask_peek__297__value;
    __Vtask_peek__297__value = 0;
    // Body
    VL_KEEP_THIS;
    QData/*63:0*/ reg_value;
    status = 0U;
    value = 0ULL;
    reg_value = 0ULL;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1881)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__297__status, __Vtask_peek__297__value, kind, parent, extension, fname, lineno);
    status = __Vtask_peek__297__status;
    reg_value = __Vtask_peek__297__value;
    value = (VL_SHIFTR_QQI(64,64,32, reg_value, this->__PVT__m_lsb) 
             & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                - 1ULL));
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror\n"); );
    // Locals
    IData/*31:0*/ __Vtask_mirror__298__status;
    __Vtask_mirror__298__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    status = 0U;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1900)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__298__status, check, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_mirror__298__status;
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_compare(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ check) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_compare\n"); );
    // Body
    this->__PVT__m_check = check;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_compare(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_compare\n"); );
    // Body
    get_compare__Vfuncrtn = this->__PVT__m_check;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_randomize(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_randomize\n"); );
    // Body
    this->__PVT__value = this->__PVT__m_desired;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_randomize(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_randomize\n"); );
    // Body
    this->__PVT__m_desired = this->__PVT__value;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__convert2string;
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_name;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1938)->__VnoInFunc_print_generic(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__convert2string), 0x2eU);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_6__get_lsb_pos;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    IData/*31:0*/ __VlefCall_4__get_lsb_pos;
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_access;
    IData/*31:0*/ __VlefCall_1__get_n_bits;
    IData/*31:0*/ __VlefCall_0__get_n_bits;
    convert2string__Vfuncrtn = ""s;
    std::string fmt;
    std::string res_str;
    std::string prefix;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg> reg_;
    fmt = ""s;
    res_str = ""s;
    prefix = ""s;
    this->__VnoInFunc_get_register(vlSymsp, reg_);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
    VL_SFORMAT_NX(fmt,"%0d'h%%%0dh",2, '#',32,__VlefCall_0__get_n_bits
                  , '#',32,((IData)(1U) + ((__VlefCall_1__get_n_bits 
                                            - (IData)(1U)) 
                                           >> 2U)));
    this->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, __VlefCall_2__get_access);
    VL_NULL_CHECK(reg_, "../../uvm/distrib/src/reg/uvm_reg_field.svh", 1956)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
    this->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
    this->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
    __Vtemp_1 = ((this->__PVT__m_desired != this->__PVT__m_mirrored)
                  ? VL_SFORMATF_N_NX(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(" (Mirror: "s, fmt), ")"s),3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_field.convert2string", 'T',-12
                                     , '#',64,this->__PVT__m_mirrored) 
                  : ""s);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN("%s %s %s[%0d:%0d]="s, fmt), "%s"s),9, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_field.convert2string", 'T',-12
                  , 'S',&(prefix), 'S',&(__VlefCall_2__get_access)
                  , 'S',&(__VlefCall_3__get_name), '#',32,
                  ((__VlefCall_4__get_lsb_pos + __VlefCall_5__get_n_bits) 
                   - (IData)(1U)), '#',32,__VlefCall_6__get_lsb_pos
                  , '#',64,this->__PVT__m_desired, 'S',&(__Vtemp_1));
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str," from %s:%0d",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), "currently being read"s), res_str);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str," from %s:%0d",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently being written"s);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_clone(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__311__verbosity;
    __Vfunc_uvm_report_enabled__311__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__311__severity;
    __Vfunc_uvm_report_enabled__311__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__312__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__313__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__315__verbosity;
    __Vtask_uvm_report_fatal__315__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__315__line;
    __Vtask_uvm_report_fatal__315__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__315__report_enabled_checked;
    __Vtask_uvm_report_fatal__315__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__316__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__317__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__311__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__311__severity = 3U;
    __Vfunc_uvm_report_enabled__311__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__312__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__312__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__313__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__313__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__311__verbosity, (IData)(__Vfunc_uvm_report_enabled__311__severity), this->__Vfunc_uvm_report_enabled__311__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_fatal__315__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_fatal__315__context_name = ""s;
        __Vtask_uvm_report_fatal__315__line = 0x000007baU;
        this->__Vtask_uvm_report_fatal__315__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_fatal__315__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__315__message = "RegModel field cannot be cloned"s;
        this->__Vtask_uvm_report_fatal__315__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__316__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
            = __Vfunc_get__316__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__317__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vtask_get_root__317__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__315__id, this->__Vtask_uvm_report_fatal__315__message, __Vtask_uvm_report_fatal__315__verbosity, this->__Vtask_uvm_report_fatal__315__filename, __Vtask_uvm_report_fatal__315__line, this->__Vtask_uvm_report_fatal__315__context_name, (IData)(__Vtask_uvm_report_fatal__315__report_enabled_checked));
    }
    clone__Vfuncrtn = VlNull{};
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__319__verbosity;
    __Vfunc_uvm_report_enabled__319__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__319__severity;
    __Vfunc_uvm_report_enabled__319__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__320__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__321__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__323__verbosity;
    __Vtask_uvm_report_warning__323__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__323__line;
    __Vtask_uvm_report_warning__323__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__323__report_enabled_checked;
    __Vtask_uvm_report_warning__323__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__324__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__325__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__319__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__319__severity = 1U;
    __Vfunc_uvm_report_enabled__319__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__320__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__320__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__321__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__321__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__319__verbosity, (IData)(__Vfunc_uvm_report_enabled__319__severity), this->__Vfunc_uvm_report_enabled__319__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__323__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__323__context_name = ""s;
        __Vtask_uvm_report_warning__323__line = 0x000007c1U;
        this->__Vtask_uvm_report_warning__323__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__323__verbosity = 0U;
        this->__Vtask_uvm_report_warning__323__message = "RegModel field copy not yet implemented"s;
        this->__Vtask_uvm_report_warning__323__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__324__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__324__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__325__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__325__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__323__id, this->__Vtask_uvm_report_warning__323__message, __Vtask_uvm_report_warning__323__verbosity, this->__Vtask_uvm_report_warning__323__filename, __Vtask_uvm_report_warning__323__line, this->__Vtask_uvm_report_warning__323__context_name, (IData)(__Vtask_uvm_report_warning__323__report_enabled_checked));
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__327__verbosity;
    __Vfunc_uvm_report_enabled__327__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__327__severity;
    __Vfunc_uvm_report_enabled__327__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__328__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__329__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__331__verbosity;
    __Vtask_uvm_report_warning__331__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__331__line;
    __Vtask_uvm_report_warning__331__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__331__report_enabled_checked;
    __Vtask_uvm_report_warning__331__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__332__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__333__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    do_compare__Vfuncrtn = 0U;
    this->__Vfunc_uvm_report_enabled__327__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__327__severity = 1U;
    __Vfunc_uvm_report_enabled__327__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__328__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__328__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__329__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__329__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__327__verbosity, (IData)(__Vfunc_uvm_report_enabled__327__severity), this->__Vfunc_uvm_report_enabled__327__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__331__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__331__context_name = ""s;
        __Vtask_uvm_report_warning__331__line = 0x000007caU;
        this->__Vtask_uvm_report_warning__331__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__331__verbosity = 0U;
        this->__Vtask_uvm_report_warning__331__message = "RegModel field compare not yet implemented"s;
        this->__Vtask_uvm_report_warning__331__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__332__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__332__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__333__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__333__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__331__id, this->__Vtask_uvm_report_warning__331__message, __Vtask_uvm_report_warning__331__verbosity, this->__Vtask_uvm_report_warning__331__filename, __Vtask_uvm_report_warning__331__line, this->__Vtask_uvm_report_warning__331__context_name, (IData)(__Vtask_uvm_report_warning__331__report_enabled_checked));
    }
    do_compare__Vfuncrtn = 0U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__335__verbosity;
    __Vfunc_uvm_report_enabled__335__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__335__severity;
    __Vfunc_uvm_report_enabled__335__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__336__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__337__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__339__verbosity;
    __Vtask_uvm_report_warning__339__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__339__line;
    __Vtask_uvm_report_warning__339__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__339__report_enabled_checked;
    __Vtask_uvm_report_warning__339__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__340__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__341__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__335__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__335__severity = 1U;
    __Vfunc_uvm_report_enabled__335__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__336__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__336__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__337__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__337__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__335__verbosity, (IData)(__Vfunc_uvm_report_enabled__335__severity), this->__Vfunc_uvm_report_enabled__335__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__339__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__339__context_name = ""s;
        __Vtask_uvm_report_warning__339__line = 0x000007d3U;
        this->__Vtask_uvm_report_warning__339__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__339__verbosity = 0U;
        this->__Vtask_uvm_report_warning__339__message = "RegModel field cannot be packed"s;
        this->__Vtask_uvm_report_warning__339__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__340__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__340__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__341__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__341__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__339__id, this->__Vtask_uvm_report_warning__339__message, __Vtask_uvm_report_warning__339__verbosity, this->__Vtask_uvm_report_warning__339__filename, __Vtask_uvm_report_warning__339__line, this->__Vtask_uvm_report_warning__339__context_name, (IData)(__Vtask_uvm_report_warning__339__report_enabled_checked));
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__343__verbosity;
    __Vfunc_uvm_report_enabled__343__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__343__severity;
    __Vfunc_uvm_report_enabled__343__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__344__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__345__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__347__verbosity;
    __Vtask_uvm_report_warning__347__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__347__line;
    __Vtask_uvm_report_warning__347__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__347__report_enabled_checked;
    __Vtask_uvm_report_warning__347__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__348__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__349__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__343__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__343__severity = 1U;
    __Vfunc_uvm_report_enabled__343__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__344__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__344__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__345__Vfuncout);
    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__345__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__343__verbosity, (IData)(__Vfunc_uvm_report_enabled__343__severity), this->__Vfunc_uvm_report_enabled__343__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__347__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__347__context_name = ""s;
        __Vtask_uvm_report_warning__347__line = 0x000007daU;
        this->__Vtask_uvm_report_warning__347__filename = "../../uvm/distrib/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__347__verbosity = 0U;
        this->__Vtask_uvm_report_warning__347__message = "RegModel field cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__347__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__348__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__348__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__349__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__349__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__347__id, this->__Vtask_uvm_report_warning__347__message, __Vtask_uvm_report_warning__347__verbosity, this->__Vtask_uvm_report_warning__347__filename, __Vtask_uvm_report_warning__347__line, this->__Vtask_uvm_report_warning__347__context_name, (IData)(__Vtask_uvm_report_warning__347__report_enabled_checked));
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    {
        // Inlined CFunc: __VnoInFunc_pre_randomize
        this->__PVT__value = this->__PVT__m_desired;
    }
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
    {
        // Inlined CFunc: __VnoInFunc_post_randomize
        this->__PVT__m_desired = this->__PVT__value;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_uvm_reg_field_valid_setup_constraint(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_uvm_reg_field_valid_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    __Vtemp_1 = (Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.at(0U)
                  ? "value"s : VL_SFORMATF_N_NX("#x%x",1
                                                , '#',64,this->__PVT__value) );
    VL_SFORMAT_NX(__Vtemp_2,"#x%x",1, '#',64,VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size));
    VL_SFORMAT_NX(__Vtemp_3,"#b%b",1, '#',1,(0x00000040U 
                                             > this->__PVT__m_size));
    VL_SFORMAT_NX(__Vtemp_4,"(__Vbv (bvult %s %s))",2
                  , 'S',&(__Vtemp_1), 'S',&(__Vtemp_2));
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %s) (__Vbool %s)))",2
                                                                                , 'S',&(__Vtemp_3)
                                                                                , 'S',&(__Vtemp_4)) , "../../uvm/distrib/src/reg/uvm_reg_field.svh", 0x00000044U, 
                                                                 "      if (64 > m_size) {");
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_uvm_reg_field_valid_setup_constraint(vlSymsp);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__value = 0;
    __PVT__m_mirrored = 0;
    __PVT__m_desired = 0;
    __PVT__m_lsb = 0;
    __PVT__m_size = 0;
    __PVT__m_volatile = 0;
    __PVT__m_reset.atDefault() = 0;
    __PVT__m_written = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_lineno = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_individually_accessible = 0;
    __PVT__m_check = 0;
}

Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::~Vhello_uvm_uvm_pkg__03a__03auvm_reg_field() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg_field::~\n"); );
}
