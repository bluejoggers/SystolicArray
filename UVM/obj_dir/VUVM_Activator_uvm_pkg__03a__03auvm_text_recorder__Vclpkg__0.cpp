// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi37> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi37__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi37> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi37__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder, vlProcess, vlSymsp, "unnamed-uvm_text_recorder"s);
    } else {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_recorder"s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_recorder.svh", 731)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        VUVM_Activator_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_recorder::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__scope = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack, vlSymsp);
    /*super.new*/;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_open(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_open\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_5__get_name;
    IData/*31:0*/ __VlefCall_4__get_handle;
    IData/*31:0*/ __VlefCall_3__get_handle;
    CData/*0:0*/ __VlefCall_2__open_db;
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_database> __VlefCall_0__get_db;
    VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_recorder.svh", 760)->__VnoInFunc_get_db(vlProcess, vlSymsp, __VlefCall_0__get_db);
    __VlefExpr_1 = VL_CAST_DYNAMIC(__VlefCall_0__get_db, this->__PVT__m_text_db);
    if (VL_UNLIKELY(((! __VlefExpr_1)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_recorder.svh:760: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_text_recorder.do_open", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("../../uvm/distrib/src/base/uvm_recorder.svh", 760, "");
    }
    VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 761)->__VnoInFunc_open_db(vlSymsp, __VlefCall_2__open_db);
    if (VL_UNLIKELY((__VlefCall_2__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_3__get_handle);
        VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_recorder.svh", 766)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_4__get_handle);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 762)
                      ->__PVT__m_file,"    OPEN_RECORDER @%0t {TXH:%0d STREAM:%0d NAME:%s TIME:%0t TYPE=\"%0s\"}\n",7, 'T',-12
                      , 'D',VL_TIME_UNITED_D(1), '~',32,__VlefCall_3__get_handle
                      , '~',32,__VlefCall_4__get_handle
                      , 'S',&(__VlefCall_5__get_name)
                      , '#',64,open_time, 'S',&(type_name));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_close(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_close\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_handle;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 777)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 778)
                      ->__PVT__m_file,"    CLOSE_RECORDER @%0t {TXH:%0d TIME=%0t}\n",4, 'T',-12
                      , 'D',VL_TIME_UNITED_D(1), '~',32,__VlefCall_1__get_handle
                      , '#',64,close_time);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_free(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_free\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_handle;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 792)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 793)
                      ->__PVT__m_file,"    FREE_RECORDER @%0t {TXH:%0d}\n",3, 'T',-12
                      , 'D',VL_TIME_UNITED_D(1), '~',32,__VlefCall_1__get_handle);
    }
    this->__PVT__m_text_db = VlNull{};
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field\n"); );
    // Body
    std::string __VlefCall_0__get;
    VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 809)->__VnoInFunc_set_arg(vlSymsp, name);
    if ((1U & (~ (0U != radix)))) {
        radix = VUVM_Activator_uvm_pkg__03a__03auvm_recorder::__PVT__default_radix;
    }
    VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 813)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    this->__VnoInFunc_write_attribute(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__get), value, radix, size);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_int(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_int\n"); );
    // Body
    std::string __VlefCall_0__get;
    VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 829)->__VnoInFunc_set_arg(vlSymsp, name);
    if ((1U & (~ (0U != radix)))) {
        radix = VUVM_Activator_uvm_pkg__03a__03auvm_recorder::__PVT__default_radix;
    }
    VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 833)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    this->__VnoInFunc_write_attribute_int(vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_0__get), value, radix, size);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_real(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_real\n"); );
    // Body
    std::string __VlefCall_0__get;
    QData/*63:0*/ ival;
    ival = VL_CVT_Q_D(value);
    VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 848)->__VnoInFunc_set_arg(vlSymsp, name);
    VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 850)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    this->__VnoInFunc_write_attribute_int(vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_0__get), ival, 0x0b000000U, 0x00000040U);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_object(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_object\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    IData/*31:0*/ v;
    std::string str;
    {
        v = 0U;
        str = ""s;
        if (VUVM_Activator_uvm_pkg__03a__03auvm_recorder::__PVT__identifier) {
            if ((VlNull{} != value)) {
                VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_recorder.svh", 871)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
                VL_SFORMAT_NX(str,"%0d",1, '~',32,__VlefCall_0__get_inst_id);
                v = VL_ATOI_N(str, 10);
            }
            VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 874)->__VnoInFunc_set_arg(vlSymsp, name);
            VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 875)->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
            this->__VnoInFunc_write_attribute_int(vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(__VlefCall_1__get), 
                                                  VL_EXTENDS_QI(64,32, v), 0x02000000U, 0x00000020U);
        }
        if ((0x00001000U != VUVM_Activator_uvm_pkg__03a__03auvm_recorder::__PVT__policy)) {
            if ((VlNull{} != value)) {
                if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_recorder.svh", 883)
                    ->__PVT__cycle_check.exists(value)) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_recorder.svh", 884)->__PVT__cycle_check.at(value) = 1U;
                VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 885)->__VnoInFunc_down(vlSymsp, name);
                VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_recorder.svh", 886)->__VnoInFunc_record(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder>{this});
                VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 887)->__VnoInFunc_up(vlSymsp, 0x2eU);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_recorder.svh", 888)->__PVT__cycle_check.erase(value);
            }
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_string(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_string\n"); );
    // Body
    std::string __VlefCall_2__get;
    IData/*31:0*/ __VlefCall_1__get_handle;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 899)->__VnoInFunc_set_arg(vlSymsp, name);
    VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 900)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 905)->__VnoInFunc_get(vlSymsp, __VlefCall_2__get);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 901)
                      ->__PVT__m_file,"      SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%s   RADIX:UVM_STRING BITS=%0d}\n",6, 'T',-12
                      , 'D',VL_TIME_UNITED_D(1), '~',32,__VlefCall_1__get_handle
                      , 'S',&(__VlefCall_2__get), 'S',&(value)
                      , '~',32,((IData)(8U) + VL_LEN_IN(value)));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_time(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_time\n"); );
    // Body
    std::string __VlefCall_0__get;
    VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 918)->__VnoInFunc_set_arg(vlSymsp, name);
    VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 919)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    this->__VnoInFunc_write_attribute_int(vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_0__get), value, 0x09000000U, 0x00000040U);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_generic(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_generic\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp1;
    // Body
    VlWide<3600>/*115199:0*/ __VlefCall_1__uvm_string_to_bits;
    std::string __VlefCall_0__get;
    VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 932)->__VnoInFunc_set_arg(vlSymsp, name);
    VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_recorder.svh", 933)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    this->__Vfunc_uvm_string_to_bits__41__str = value;
    VL_SFORMAT_NX(115200,__VlefCall_1__uvm_string_to_bits.data()
                  ,"%0s",1, 'S',&(this->__Vfunc_uvm_string_to_bits__41__str));
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_1[__Vilp1] = __VlefCall_1__uvm_string_to_bits
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    this->__VnoInFunc_write_attribute(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__get), __Vtemp_1, 0x08000000U, 
                                      ((IData)(8U) 
                                       + VL_LEN_IN(value)));
}

extern const VlWide<128>/*4095:0*/ VUVM_Activator__ConstPool__CONST_h1958c06c_0;

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute(VUVM_Activator__Syms* __restrict vlSymsp, std::string nm, VlWide<128>/*4095:0*/ value, IData/*31:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_uvm_bitstream_to_string__45__value;
    VL_ZERO_W(4096, __Vfunc_uvm_bitstream_to_string__45__value);
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__45__size;
    __Vfunc_uvm_bitstream_to_string__45__size = 0;
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__45__radix;
    __Vfunc_uvm_bitstream_to_string__45__radix = 0;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    std::string __Vtemp_4;
    IData/*31:0*/ __Vilp1;
    // Body
    std::string __VlefCall_2__uvm_bitstream_to_string;
    IData/*31:0*/ __VlefCall_1__get_handle;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 953)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        this->__Vfunc_uvm_bitstream_to_string__45__radix_str = ""s;
        __Vfunc_uvm_bitstream_to_string__45__radix 
            = radix;
        __Vfunc_uvm_bitstream_to_string__45__size = numbits;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000007fU)) {
            __Vfunc_uvm_bitstream_to_string__45__value[__Vilp1] 
                = value[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        {
            if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__45__radix) 
                 & (__Vfunc_uvm_bitstream_to_string__45__value
                    [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__45__size 
                                      - (IData)(1U)) 
                                     >> 5U))] >> (0x0000001fU 
                                                  & (__Vfunc_uvm_bitstream_to_string__45__size 
                                                     - (IData)(1U)))))) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_bitstream_to_string
                              ,"%0d",1, '~',4096,__Vfunc_uvm_bitstream_to_string__45__value.data());
                goto __Vlabel0;
            }
            VL_SHIFTL_WWI(4096,4096,32, __Vtemp_2, VUVM_Activator__ConstPool__CONST_h1958c06c_0, __Vfunc_uvm_bitstream_to_string__45__size);
            VL_SUB_W(128, __Vtemp_3, __Vtemp_2, VUVM_Activator__ConstPool__CONST_h1958c06c_0);
            __Vfunc_uvm_bitstream_to_string__45__value[0U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[0U] 
                   & __Vtemp_3[0U]);
            __Vfunc_uvm_bitstream_to_string__45__value[1U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[1U] 
                   & __Vtemp_3[1U]);
            __Vfunc_uvm_bitstream_to_string__45__value[2U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[2U] 
                   & __Vtemp_3[2U]);
            __Vfunc_uvm_bitstream_to_string__45__value[3U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[3U] 
                   & __Vtemp_3[3U]);
            __Vfunc_uvm_bitstream_to_string__45__value[4U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[4U] 
                   & __Vtemp_3[4U]);
            __Vfunc_uvm_bitstream_to_string__45__value[5U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[5U] 
                   & __Vtemp_3[5U]);
            __Vfunc_uvm_bitstream_to_string__45__value[6U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[6U] 
                   & __Vtemp_3[6U]);
            __Vfunc_uvm_bitstream_to_string__45__value[7U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[7U] 
                   & __Vtemp_3[7U]);
            __Vfunc_uvm_bitstream_to_string__45__value[8U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[8U] 
                   & __Vtemp_3[8U]);
            __Vfunc_uvm_bitstream_to_string__45__value[9U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[9U] 
                   & __Vtemp_3[9U]);
            __Vfunc_uvm_bitstream_to_string__45__value[10U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[10U] 
                   & __Vtemp_3[10U]);
            __Vfunc_uvm_bitstream_to_string__45__value[11U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[11U] 
                   & __Vtemp_3[11U]);
            __Vfunc_uvm_bitstream_to_string__45__value[12U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[12U] 
                   & __Vtemp_3[12U]);
            __Vfunc_uvm_bitstream_to_string__45__value[13U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[13U] 
                   & __Vtemp_3[13U]);
            __Vfunc_uvm_bitstream_to_string__45__value[14U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[14U] 
                   & __Vtemp_3[14U]);
            __Vfunc_uvm_bitstream_to_string__45__value[15U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[15U] 
                   & __Vtemp_3[15U]);
            __Vfunc_uvm_bitstream_to_string__45__value[16U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[16U] 
                   & __Vtemp_3[16U]);
            __Vfunc_uvm_bitstream_to_string__45__value[17U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[17U] 
                   & __Vtemp_3[17U]);
            __Vfunc_uvm_bitstream_to_string__45__value[18U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[18U] 
                   & __Vtemp_3[18U]);
            __Vfunc_uvm_bitstream_to_string__45__value[19U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[19U] 
                   & __Vtemp_3[19U]);
            __Vfunc_uvm_bitstream_to_string__45__value[20U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[20U] 
                   & __Vtemp_3[20U]);
            __Vfunc_uvm_bitstream_to_string__45__value[21U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[21U] 
                   & __Vtemp_3[21U]);
            __Vfunc_uvm_bitstream_to_string__45__value[22U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[22U] 
                   & __Vtemp_3[22U]);
            __Vfunc_uvm_bitstream_to_string__45__value[23U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[23U] 
                   & __Vtemp_3[23U]);
            __Vfunc_uvm_bitstream_to_string__45__value[24U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[24U] 
                   & __Vtemp_3[24U]);
            __Vfunc_uvm_bitstream_to_string__45__value[25U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[25U] 
                   & __Vtemp_3[25U]);
            __Vfunc_uvm_bitstream_to_string__45__value[26U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[26U] 
                   & __Vtemp_3[26U]);
            __Vfunc_uvm_bitstream_to_string__45__value[27U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[27U] 
                   & __Vtemp_3[27U]);
            __Vfunc_uvm_bitstream_to_string__45__value[28U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[28U] 
                   & __Vtemp_3[28U]);
            __Vfunc_uvm_bitstream_to_string__45__value[29U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[29U] 
                   & __Vtemp_3[29U]);
            __Vfunc_uvm_bitstream_to_string__45__value[30U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[30U] 
                   & __Vtemp_3[30U]);
            __Vfunc_uvm_bitstream_to_string__45__value[31U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[31U] 
                   & __Vtemp_3[31U]);
            __Vfunc_uvm_bitstream_to_string__45__value[32U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[32U] 
                   & __Vtemp_3[32U]);
            __Vfunc_uvm_bitstream_to_string__45__value[33U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[33U] 
                   & __Vtemp_3[33U]);
            __Vfunc_uvm_bitstream_to_string__45__value[34U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[34U] 
                   & __Vtemp_3[34U]);
            __Vfunc_uvm_bitstream_to_string__45__value[35U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[35U] 
                   & __Vtemp_3[35U]);
            __Vfunc_uvm_bitstream_to_string__45__value[36U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[36U] 
                   & __Vtemp_3[36U]);
            __Vfunc_uvm_bitstream_to_string__45__value[37U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[37U] 
                   & __Vtemp_3[37U]);
            __Vfunc_uvm_bitstream_to_string__45__value[38U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[38U] 
                   & __Vtemp_3[38U]);
            __Vfunc_uvm_bitstream_to_string__45__value[39U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[39U] 
                   & __Vtemp_3[39U]);
            __Vfunc_uvm_bitstream_to_string__45__value[40U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[40U] 
                   & __Vtemp_3[40U]);
            __Vfunc_uvm_bitstream_to_string__45__value[41U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[41U] 
                   & __Vtemp_3[41U]);
            __Vfunc_uvm_bitstream_to_string__45__value[42U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[42U] 
                   & __Vtemp_3[42U]);
            __Vfunc_uvm_bitstream_to_string__45__value[43U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[43U] 
                   & __Vtemp_3[43U]);
            __Vfunc_uvm_bitstream_to_string__45__value[44U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[44U] 
                   & __Vtemp_3[44U]);
            __Vfunc_uvm_bitstream_to_string__45__value[45U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[45U] 
                   & __Vtemp_3[45U]);
            __Vfunc_uvm_bitstream_to_string__45__value[46U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[46U] 
                   & __Vtemp_3[46U]);
            __Vfunc_uvm_bitstream_to_string__45__value[47U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[47U] 
                   & __Vtemp_3[47U]);
            __Vfunc_uvm_bitstream_to_string__45__value[48U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[48U] 
                   & __Vtemp_3[48U]);
            __Vfunc_uvm_bitstream_to_string__45__value[49U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[49U] 
                   & __Vtemp_3[49U]);
            __Vfunc_uvm_bitstream_to_string__45__value[50U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[50U] 
                   & __Vtemp_3[50U]);
            __Vfunc_uvm_bitstream_to_string__45__value[51U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[51U] 
                   & __Vtemp_3[51U]);
            __Vfunc_uvm_bitstream_to_string__45__value[52U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[52U] 
                   & __Vtemp_3[52U]);
            __Vfunc_uvm_bitstream_to_string__45__value[53U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[53U] 
                   & __Vtemp_3[53U]);
            __Vfunc_uvm_bitstream_to_string__45__value[54U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[54U] 
                   & __Vtemp_3[54U]);
            __Vfunc_uvm_bitstream_to_string__45__value[55U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[55U] 
                   & __Vtemp_3[55U]);
            __Vfunc_uvm_bitstream_to_string__45__value[56U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[56U] 
                   & __Vtemp_3[56U]);
            __Vfunc_uvm_bitstream_to_string__45__value[57U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[57U] 
                   & __Vtemp_3[57U]);
            __Vfunc_uvm_bitstream_to_string__45__value[58U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[58U] 
                   & __Vtemp_3[58U]);
            __Vfunc_uvm_bitstream_to_string__45__value[59U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[59U] 
                   & __Vtemp_3[59U]);
            __Vfunc_uvm_bitstream_to_string__45__value[60U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[60U] 
                   & __Vtemp_3[60U]);
            __Vfunc_uvm_bitstream_to_string__45__value[61U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[61U] 
                   & __Vtemp_3[61U]);
            __Vfunc_uvm_bitstream_to_string__45__value[62U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[62U] 
                   & __Vtemp_3[62U]);
            __Vfunc_uvm_bitstream_to_string__45__value[63U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[63U] 
                   & __Vtemp_3[63U]);
            __Vfunc_uvm_bitstream_to_string__45__value[64U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[64U] 
                   & __Vtemp_3[64U]);
            __Vfunc_uvm_bitstream_to_string__45__value[65U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[65U] 
                   & __Vtemp_3[65U]);
            __Vfunc_uvm_bitstream_to_string__45__value[66U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[66U] 
                   & __Vtemp_3[66U]);
            __Vfunc_uvm_bitstream_to_string__45__value[67U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[67U] 
                   & __Vtemp_3[67U]);
            __Vfunc_uvm_bitstream_to_string__45__value[68U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[68U] 
                   & __Vtemp_3[68U]);
            __Vfunc_uvm_bitstream_to_string__45__value[69U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[69U] 
                   & __Vtemp_3[69U]);
            __Vfunc_uvm_bitstream_to_string__45__value[70U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[70U] 
                   & __Vtemp_3[70U]);
            __Vfunc_uvm_bitstream_to_string__45__value[71U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[71U] 
                   & __Vtemp_3[71U]);
            __Vfunc_uvm_bitstream_to_string__45__value[72U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[72U] 
                   & __Vtemp_3[72U]);
            __Vfunc_uvm_bitstream_to_string__45__value[73U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[73U] 
                   & __Vtemp_3[73U]);
            __Vfunc_uvm_bitstream_to_string__45__value[74U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[74U] 
                   & __Vtemp_3[74U]);
            __Vfunc_uvm_bitstream_to_string__45__value[75U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[75U] 
                   & __Vtemp_3[75U]);
            __Vfunc_uvm_bitstream_to_string__45__value[76U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[76U] 
                   & __Vtemp_3[76U]);
            __Vfunc_uvm_bitstream_to_string__45__value[77U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[77U] 
                   & __Vtemp_3[77U]);
            __Vfunc_uvm_bitstream_to_string__45__value[78U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[78U] 
                   & __Vtemp_3[78U]);
            __Vfunc_uvm_bitstream_to_string__45__value[79U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[79U] 
                   & __Vtemp_3[79U]);
            __Vfunc_uvm_bitstream_to_string__45__value[80U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[80U] 
                   & __Vtemp_3[80U]);
            __Vfunc_uvm_bitstream_to_string__45__value[81U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[81U] 
                   & __Vtemp_3[81U]);
            __Vfunc_uvm_bitstream_to_string__45__value[82U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[82U] 
                   & __Vtemp_3[82U]);
            __Vfunc_uvm_bitstream_to_string__45__value[83U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[83U] 
                   & __Vtemp_3[83U]);
            __Vfunc_uvm_bitstream_to_string__45__value[84U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[84U] 
                   & __Vtemp_3[84U]);
            __Vfunc_uvm_bitstream_to_string__45__value[85U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[85U] 
                   & __Vtemp_3[85U]);
            __Vfunc_uvm_bitstream_to_string__45__value[86U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[86U] 
                   & __Vtemp_3[86U]);
            __Vfunc_uvm_bitstream_to_string__45__value[87U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[87U] 
                   & __Vtemp_3[87U]);
            __Vfunc_uvm_bitstream_to_string__45__value[88U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[88U] 
                   & __Vtemp_3[88U]);
            __Vfunc_uvm_bitstream_to_string__45__value[89U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[89U] 
                   & __Vtemp_3[89U]);
            __Vfunc_uvm_bitstream_to_string__45__value[90U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[90U] 
                   & __Vtemp_3[90U]);
            __Vfunc_uvm_bitstream_to_string__45__value[91U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[91U] 
                   & __Vtemp_3[91U]);
            __Vfunc_uvm_bitstream_to_string__45__value[92U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[92U] 
                   & __Vtemp_3[92U]);
            __Vfunc_uvm_bitstream_to_string__45__value[93U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[93U] 
                   & __Vtemp_3[93U]);
            __Vfunc_uvm_bitstream_to_string__45__value[94U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[94U] 
                   & __Vtemp_3[94U]);
            __Vfunc_uvm_bitstream_to_string__45__value[95U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[95U] 
                   & __Vtemp_3[95U]);
            __Vfunc_uvm_bitstream_to_string__45__value[96U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[96U] 
                   & __Vtemp_3[96U]);
            __Vfunc_uvm_bitstream_to_string__45__value[97U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[97U] 
                   & __Vtemp_3[97U]);
            __Vfunc_uvm_bitstream_to_string__45__value[98U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[98U] 
                   & __Vtemp_3[98U]);
            __Vfunc_uvm_bitstream_to_string__45__value[99U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[99U] 
                   & __Vtemp_3[99U]);
            __Vfunc_uvm_bitstream_to_string__45__value[100U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[100U] 
                   & __Vtemp_3[100U]);
            __Vfunc_uvm_bitstream_to_string__45__value[101U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[101U] 
                   & __Vtemp_3[101U]);
            __Vfunc_uvm_bitstream_to_string__45__value[102U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[102U] 
                   & __Vtemp_3[102U]);
            __Vfunc_uvm_bitstream_to_string__45__value[103U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[103U] 
                   & __Vtemp_3[103U]);
            __Vfunc_uvm_bitstream_to_string__45__value[104U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[104U] 
                   & __Vtemp_3[104U]);
            __Vfunc_uvm_bitstream_to_string__45__value[105U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[105U] 
                   & __Vtemp_3[105U]);
            __Vfunc_uvm_bitstream_to_string__45__value[106U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[106U] 
                   & __Vtemp_3[106U]);
            __Vfunc_uvm_bitstream_to_string__45__value[107U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[107U] 
                   & __Vtemp_3[107U]);
            __Vfunc_uvm_bitstream_to_string__45__value[108U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[108U] 
                   & __Vtemp_3[108U]);
            __Vfunc_uvm_bitstream_to_string__45__value[109U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[109U] 
                   & __Vtemp_3[109U]);
            __Vfunc_uvm_bitstream_to_string__45__value[110U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[110U] 
                   & __Vtemp_3[110U]);
            __Vfunc_uvm_bitstream_to_string__45__value[111U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[111U] 
                   & __Vtemp_3[111U]);
            __Vfunc_uvm_bitstream_to_string__45__value[112U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[112U] 
                   & __Vtemp_3[112U]);
            __Vfunc_uvm_bitstream_to_string__45__value[113U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[113U] 
                   & __Vtemp_3[113U]);
            __Vfunc_uvm_bitstream_to_string__45__value[114U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[114U] 
                   & __Vtemp_3[114U]);
            __Vfunc_uvm_bitstream_to_string__45__value[115U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[115U] 
                   & __Vtemp_3[115U]);
            __Vfunc_uvm_bitstream_to_string__45__value[116U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[116U] 
                   & __Vtemp_3[116U]);
            __Vfunc_uvm_bitstream_to_string__45__value[117U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[117U] 
                   & __Vtemp_3[117U]);
            __Vfunc_uvm_bitstream_to_string__45__value[118U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[118U] 
                   & __Vtemp_3[118U]);
            __Vfunc_uvm_bitstream_to_string__45__value[119U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[119U] 
                   & __Vtemp_3[119U]);
            __Vfunc_uvm_bitstream_to_string__45__value[120U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[120U] 
                   & __Vtemp_3[120U]);
            __Vfunc_uvm_bitstream_to_string__45__value[121U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[121U] 
                   & __Vtemp_3[121U]);
            __Vfunc_uvm_bitstream_to_string__45__value[122U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[122U] 
                   & __Vtemp_3[122U]);
            __Vfunc_uvm_bitstream_to_string__45__value[123U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[123U] 
                   & __Vtemp_3[123U]);
            __Vfunc_uvm_bitstream_to_string__45__value[124U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[124U] 
                   & __Vtemp_3[124U]);
            __Vfunc_uvm_bitstream_to_string__45__value[125U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[125U] 
                   & __Vtemp_3[125U]);
            __Vfunc_uvm_bitstream_to_string__45__value[126U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[126U] 
                   & __Vtemp_3[126U]);
            __Vfunc_uvm_bitstream_to_string__45__value[127U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[127U] 
                   & __Vtemp_3[127U]);
            if ((0x01000000U == __Vfunc_uvm_bitstream_to_string__45__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_bitstream_to_string
                              ,"%0s%0b",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__45__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__45__value.data());
            } else if ((0x06000000U == __Vfunc_uvm_bitstream_to_string__45__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_bitstream_to_string
                              ,"%0s%0o",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__45__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__45__value.data());
            } else if ((0x03000000U == __Vfunc_uvm_bitstream_to_string__45__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_bitstream_to_string
                              ,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__45__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__45__value.data());
            } else if ((0x08000000U == __Vfunc_uvm_bitstream_to_string__45__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_bitstream_to_string
                              ,"%0s%0s",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__45__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__45__value.data());
            } else if ((0x09000000U == __Vfunc_uvm_bitstream_to_string__45__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_bitstream_to_string
                              ,"%0s%0t",3, 'T',-12, 'S',&(this->__Vfunc_uvm_bitstream_to_string__45__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__45__value.data());
            } else if ((0x02000000U == __Vfunc_uvm_bitstream_to_string__45__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_bitstream_to_string
                              ,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__45__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__45__value.data());
            } else {
                VL_SFORMAT_NX(__VlefCall_2__uvm_bitstream_to_string
                              ,"%0s%0x",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__45__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__45__value.data());
            }
            __Vlabel0: ;
        }
        __Vtemp_4 = VUVM_Activator___024unit::__Venumtab_enum_name15
            .at(radix);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 954)
                      ->__PVT__m_file,"      SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%s   RADIX:%s BITS=%0d}\n",7, 'T',-12
                      , 'D',VL_TIME_UNITED_D(1), '~',32,__VlefCall_1__get_handle
                      , 'S',&(nm), 'S',&(__VlefCall_2__uvm_bitstream_to_string)
                      , 'S',&(__Vtemp_4), '~',32,numbits);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute_int(VUVM_Activator__Syms* __restrict vlSymsp, std::string nm, QData/*63:0*/ value, IData/*31:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute_int\n"); );
    // Locals
    QData/*63:0*/ __Vfunc_uvm_integral_to_string__48__value;
    __Vfunc_uvm_integral_to_string__48__value = 0;
    IData/*31:0*/ __Vfunc_uvm_integral_to_string__48__size;
    __Vfunc_uvm_integral_to_string__48__size = 0;
    IData/*31:0*/ __Vfunc_uvm_integral_to_string__48__radix;
    __Vfunc_uvm_integral_to_string__48__radix = 0;
    std::string __Vtemp_1;
    // Body
    std::string __VlefCall_2__uvm_integral_to_string;
    IData/*31:0*/ __VlefCall_1__get_handle;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 977)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        this->__Vfunc_uvm_integral_to_string__48__radix_str = ""s;
        __Vfunc_uvm_integral_to_string__48__radix = radix;
        __Vfunc_uvm_integral_to_string__48__size = numbits;
        __Vfunc_uvm_integral_to_string__48__value = value;
        {
            if (((0x02000000U == __Vfunc_uvm_integral_to_string__48__radix) 
                 & (IData)((__Vfunc_uvm_integral_to_string__48__value 
                            >> (0x0000003fU & (__Vfunc_uvm_integral_to_string__48__size 
                                               - (IData)(1U))))))) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_integral_to_string
                              ,"%0d",1, '~',64,__Vfunc_uvm_integral_to_string__48__value);
                goto __Vlabel0;
            }
            __Vfunc_uvm_integral_to_string__48__value 
                = (__Vfunc_uvm_integral_to_string__48__value 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, __Vfunc_uvm_integral_to_string__48__size) 
                      - 1ULL));
            if ((0x01000000U == __Vfunc_uvm_integral_to_string__48__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_integral_to_string
                              ,"%0s%0b",2, 'S',&(this->__Vfunc_uvm_integral_to_string__48__radix_str)
                              , '~',64,__Vfunc_uvm_integral_to_string__48__value);
            } else if ((0x06000000U == __Vfunc_uvm_integral_to_string__48__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_integral_to_string
                              ,"%0s%0o",2, 'S',&(this->__Vfunc_uvm_integral_to_string__48__radix_str)
                              , '~',64,__Vfunc_uvm_integral_to_string__48__value);
            } else if ((0x03000000U == __Vfunc_uvm_integral_to_string__48__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_integral_to_string
                              ,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_integral_to_string__48__radix_str)
                              , '~',64,__Vfunc_uvm_integral_to_string__48__value);
            } else if ((0x08000000U == __Vfunc_uvm_integral_to_string__48__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_integral_to_string
                              ,"%0s%0s",2, 'S',&(this->__Vfunc_uvm_integral_to_string__48__radix_str)
                              , '~',64,__Vfunc_uvm_integral_to_string__48__value);
            } else if ((0x09000000U == __Vfunc_uvm_integral_to_string__48__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_integral_to_string
                              ,"%0s%0t",3, 'T',-12, 'S',&(this->__Vfunc_uvm_integral_to_string__48__radix_str)
                              , '~',64,__Vfunc_uvm_integral_to_string__48__value);
            } else if ((0x02000000U == __Vfunc_uvm_integral_to_string__48__radix)) {
                VL_SFORMAT_NX(__VlefCall_2__uvm_integral_to_string
                              ,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_integral_to_string__48__radix_str)
                              , '~',64,__Vfunc_uvm_integral_to_string__48__value);
            } else {
                VL_SFORMAT_NX(__VlefCall_2__uvm_integral_to_string
                              ,"%0s%0x",2, 'S',&(this->__Vfunc_uvm_integral_to_string__48__radix_str)
                              , '~',64,__Vfunc_uvm_integral_to_string__48__value);
            }
            __Vlabel0: ;
        }
        __Vtemp_1 = VUVM_Activator___024unit::__Venumtab_enum_name15
            .at(radix);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 978)
                      ->__PVT__m_file,"      SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%s   RADIX:%s BITS=%0d}\n",7, 'T',-12
                      , 'D',VL_TIME_UNITED_D(1), '~',32,__VlefCall_1__get_handle
                      , 'S',&(nm), 'S',&(__VlefCall_2__uvm_integral_to_string)
                      , 'S',&(__Vtemp_1), '~',32,numbits);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_open_file(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_open_file\n"); );
    // Body
    open_file__Vfuncrtn = 0U;
    if ((1U & (~ (IData)(this->__PVT__filename_set)))) {
        VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 1010)->__VnoInFunc_set_file_name(vlSymsp, this->__PVT__filename);
    }
    VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 1012)->__VnoInFunc_open_db(vlSymsp, open_file__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create_stream(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create_stream\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_1__open_stream;
    CData/*0:0*/ __VlefCall_0__open_file;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_stream> stream;
    {
        create_stream__Vfuncrtn = 0;
        this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
        if (__VlefCall_0__open_file) {
            VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 1024)->__VnoInFunc_open_stream(vlProcess, vlSymsp, name, scope, t, __VlefCall_1__open_stream);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__open_stream, stream);
            if (VL_UNLIKELY(((! __VlefExpr_2)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_recorder.svh:1024: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_text_recorder.create_stream", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("../../uvm/distrib/src/base/uvm_recorder.svh", 1024, "");
            }
            VL_NULL_CHECK(stream, "../../uvm/distrib/src/base/uvm_recorder.svh", 1025)->__VnoInFunc_get_handle(vlSymsp, create_stream__Vfuncrtn);
            goto __Vlabel0;
        }
        create_stream__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_set_attribute(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_set_attribute\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    IData/*31:0*/ unnamedblk2__DOT__file;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (VL_UNLIKELY((__VlefCall_0__open_file))) {
        unnamedblk2__DOT__file = VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 1038)
            ->__PVT__m_file;
        VL_FWRITEF_NX(unnamedblk2__DOT__file,"      SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%s}\n",5, 'T',-12
                      , 'D',VL_TIME_UNITED_D(1), '~',32,txh
                      , 'S',&(nm), 'S',&(value));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_set_attribute(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*31:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_set_attribute\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_uvm_bitstream_to_string__56__value;
    VL_ZERO_W(4096, __Vfunc_uvm_bitstream_to_string__56__value);
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__56__size;
    __Vfunc_uvm_bitstream_to_string__56__size = 0;
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__56__radix;
    __Vfunc_uvm_bitstream_to_string__56__radix = 0;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    std::string __Vtemp_4;
    IData/*31:0*/ __Vilp1;
    // Body
    std::string __VlefCall_1__uvm_bitstream_to_string;
    CData/*0:0*/ __VlefCall_0__open_file;
    IData/*31:0*/ unnamedblk3__DOT__file;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (VL_UNLIKELY((__VlefCall_0__open_file))) {
        unnamedblk3__DOT__file = VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 1053)
            ->__PVT__m_file;
        this->__Vfunc_uvm_bitstream_to_string__56__radix_str = ""s;
        __Vfunc_uvm_bitstream_to_string__56__radix 
            = radix;
        __Vfunc_uvm_bitstream_to_string__56__size = numbits;
        __Vfunc_uvm_bitstream_to_string__56__value[0U] 
            = value[0U];
        __Vfunc_uvm_bitstream_to_string__56__value[1U] 
            = value[1U];
        __Vfunc_uvm_bitstream_to_string__56__value[2U] 
            = value[2U];
        __Vfunc_uvm_bitstream_to_string__56__value[3U] 
            = value[3U];
        __Vfunc_uvm_bitstream_to_string__56__value[4U] 
            = value[4U];
        __Vfunc_uvm_bitstream_to_string__56__value[5U] 
            = value[5U];
        __Vfunc_uvm_bitstream_to_string__56__value[6U] 
            = value[6U];
        __Vfunc_uvm_bitstream_to_string__56__value[7U] 
            = value[7U];
        __Vfunc_uvm_bitstream_to_string__56__value[8U] 
            = value[8U];
        __Vfunc_uvm_bitstream_to_string__56__value[9U] 
            = value[9U];
        __Vfunc_uvm_bitstream_to_string__56__value[10U] 
            = value[10U];
        __Vfunc_uvm_bitstream_to_string__56__value[11U] 
            = value[11U];
        __Vfunc_uvm_bitstream_to_string__56__value[12U] 
            = value[12U];
        __Vfunc_uvm_bitstream_to_string__56__value[13U] 
            = value[13U];
        __Vfunc_uvm_bitstream_to_string__56__value[14U] 
            = value[14U];
        __Vfunc_uvm_bitstream_to_string__56__value[15U] 
            = value[15U];
        __Vfunc_uvm_bitstream_to_string__56__value[16U] 
            = value[16U];
        __Vfunc_uvm_bitstream_to_string__56__value[17U] 
            = value[17U];
        __Vfunc_uvm_bitstream_to_string__56__value[18U] 
            = value[18U];
        __Vfunc_uvm_bitstream_to_string__56__value[19U] 
            = value[19U];
        __Vfunc_uvm_bitstream_to_string__56__value[20U] 
            = value[20U];
        __Vfunc_uvm_bitstream_to_string__56__value[21U] 
            = value[21U];
        __Vfunc_uvm_bitstream_to_string__56__value[22U] 
            = value[22U];
        __Vfunc_uvm_bitstream_to_string__56__value[23U] 
            = value[23U];
        __Vfunc_uvm_bitstream_to_string__56__value[24U] 
            = value[24U];
        __Vfunc_uvm_bitstream_to_string__56__value[25U] 
            = value[25U];
        __Vfunc_uvm_bitstream_to_string__56__value[26U] 
            = value[26U];
        __Vfunc_uvm_bitstream_to_string__56__value[27U] 
            = value[27U];
        __Vfunc_uvm_bitstream_to_string__56__value[28U] 
            = value[28U];
        __Vfunc_uvm_bitstream_to_string__56__value[29U] 
            = value[29U];
        __Vfunc_uvm_bitstream_to_string__56__value[30U] 
            = value[30U];
        __Vfunc_uvm_bitstream_to_string__56__value[31U] 
            = value[31U];
        __Vilp1 = 0x00000020U;
        while ((__Vilp1 <= 0x0000007fU)) {
            __Vfunc_uvm_bitstream_to_string__56__value[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        {
            if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__56__radix) 
                 & (__Vfunc_uvm_bitstream_to_string__56__value
                    [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__56__size 
                                      - (IData)(1U)) 
                                     >> 5U))] >> (0x0000001fU 
                                                  & (__Vfunc_uvm_bitstream_to_string__56__size 
                                                     - (IData)(1U)))))) {
                VL_SFORMAT_NX(__VlefCall_1__uvm_bitstream_to_string
                              ,"%0d",1, '~',4096,__Vfunc_uvm_bitstream_to_string__56__value.data());
                goto __Vlabel0;
            }
            VL_SHIFTL_WWI(4096,4096,32, __Vtemp_2, VUVM_Activator__ConstPool__CONST_h1958c06c_0, __Vfunc_uvm_bitstream_to_string__56__size);
            VL_SUB_W(128, __Vtemp_3, __Vtemp_2, VUVM_Activator__ConstPool__CONST_h1958c06c_0);
            __Vfunc_uvm_bitstream_to_string__56__value[0U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[0U] 
                   & __Vtemp_3[0U]);
            __Vfunc_uvm_bitstream_to_string__56__value[1U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[1U] 
                   & __Vtemp_3[1U]);
            __Vfunc_uvm_bitstream_to_string__56__value[2U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[2U] 
                   & __Vtemp_3[2U]);
            __Vfunc_uvm_bitstream_to_string__56__value[3U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[3U] 
                   & __Vtemp_3[3U]);
            __Vfunc_uvm_bitstream_to_string__56__value[4U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[4U] 
                   & __Vtemp_3[4U]);
            __Vfunc_uvm_bitstream_to_string__56__value[5U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[5U] 
                   & __Vtemp_3[5U]);
            __Vfunc_uvm_bitstream_to_string__56__value[6U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[6U] 
                   & __Vtemp_3[6U]);
            __Vfunc_uvm_bitstream_to_string__56__value[7U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[7U] 
                   & __Vtemp_3[7U]);
            __Vfunc_uvm_bitstream_to_string__56__value[8U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[8U] 
                   & __Vtemp_3[8U]);
            __Vfunc_uvm_bitstream_to_string__56__value[9U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[9U] 
                   & __Vtemp_3[9U]);
            __Vfunc_uvm_bitstream_to_string__56__value[10U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[10U] 
                   & __Vtemp_3[10U]);
            __Vfunc_uvm_bitstream_to_string__56__value[11U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[11U] 
                   & __Vtemp_3[11U]);
            __Vfunc_uvm_bitstream_to_string__56__value[12U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[12U] 
                   & __Vtemp_3[12U]);
            __Vfunc_uvm_bitstream_to_string__56__value[13U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[13U] 
                   & __Vtemp_3[13U]);
            __Vfunc_uvm_bitstream_to_string__56__value[14U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[14U] 
                   & __Vtemp_3[14U]);
            __Vfunc_uvm_bitstream_to_string__56__value[15U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[15U] 
                   & __Vtemp_3[15U]);
            __Vfunc_uvm_bitstream_to_string__56__value[16U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[16U] 
                   & __Vtemp_3[16U]);
            __Vfunc_uvm_bitstream_to_string__56__value[17U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[17U] 
                   & __Vtemp_3[17U]);
            __Vfunc_uvm_bitstream_to_string__56__value[18U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[18U] 
                   & __Vtemp_3[18U]);
            __Vfunc_uvm_bitstream_to_string__56__value[19U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[19U] 
                   & __Vtemp_3[19U]);
            __Vfunc_uvm_bitstream_to_string__56__value[20U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[20U] 
                   & __Vtemp_3[20U]);
            __Vfunc_uvm_bitstream_to_string__56__value[21U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[21U] 
                   & __Vtemp_3[21U]);
            __Vfunc_uvm_bitstream_to_string__56__value[22U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[22U] 
                   & __Vtemp_3[22U]);
            __Vfunc_uvm_bitstream_to_string__56__value[23U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[23U] 
                   & __Vtemp_3[23U]);
            __Vfunc_uvm_bitstream_to_string__56__value[24U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[24U] 
                   & __Vtemp_3[24U]);
            __Vfunc_uvm_bitstream_to_string__56__value[25U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[25U] 
                   & __Vtemp_3[25U]);
            __Vfunc_uvm_bitstream_to_string__56__value[26U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[26U] 
                   & __Vtemp_3[26U]);
            __Vfunc_uvm_bitstream_to_string__56__value[27U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[27U] 
                   & __Vtemp_3[27U]);
            __Vfunc_uvm_bitstream_to_string__56__value[28U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[28U] 
                   & __Vtemp_3[28U]);
            __Vfunc_uvm_bitstream_to_string__56__value[29U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[29U] 
                   & __Vtemp_3[29U]);
            __Vfunc_uvm_bitstream_to_string__56__value[30U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[30U] 
                   & __Vtemp_3[30U]);
            __Vfunc_uvm_bitstream_to_string__56__value[31U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[31U] 
                   & __Vtemp_3[31U]);
            __Vfunc_uvm_bitstream_to_string__56__value[32U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[32U] 
                   & __Vtemp_3[32U]);
            __Vfunc_uvm_bitstream_to_string__56__value[33U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[33U] 
                   & __Vtemp_3[33U]);
            __Vfunc_uvm_bitstream_to_string__56__value[34U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[34U] 
                   & __Vtemp_3[34U]);
            __Vfunc_uvm_bitstream_to_string__56__value[35U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[35U] 
                   & __Vtemp_3[35U]);
            __Vfunc_uvm_bitstream_to_string__56__value[36U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[36U] 
                   & __Vtemp_3[36U]);
            __Vfunc_uvm_bitstream_to_string__56__value[37U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[37U] 
                   & __Vtemp_3[37U]);
            __Vfunc_uvm_bitstream_to_string__56__value[38U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[38U] 
                   & __Vtemp_3[38U]);
            __Vfunc_uvm_bitstream_to_string__56__value[39U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[39U] 
                   & __Vtemp_3[39U]);
            __Vfunc_uvm_bitstream_to_string__56__value[40U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[40U] 
                   & __Vtemp_3[40U]);
            __Vfunc_uvm_bitstream_to_string__56__value[41U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[41U] 
                   & __Vtemp_3[41U]);
            __Vfunc_uvm_bitstream_to_string__56__value[42U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[42U] 
                   & __Vtemp_3[42U]);
            __Vfunc_uvm_bitstream_to_string__56__value[43U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[43U] 
                   & __Vtemp_3[43U]);
            __Vfunc_uvm_bitstream_to_string__56__value[44U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[44U] 
                   & __Vtemp_3[44U]);
            __Vfunc_uvm_bitstream_to_string__56__value[45U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[45U] 
                   & __Vtemp_3[45U]);
            __Vfunc_uvm_bitstream_to_string__56__value[46U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[46U] 
                   & __Vtemp_3[46U]);
            __Vfunc_uvm_bitstream_to_string__56__value[47U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[47U] 
                   & __Vtemp_3[47U]);
            __Vfunc_uvm_bitstream_to_string__56__value[48U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[48U] 
                   & __Vtemp_3[48U]);
            __Vfunc_uvm_bitstream_to_string__56__value[49U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[49U] 
                   & __Vtemp_3[49U]);
            __Vfunc_uvm_bitstream_to_string__56__value[50U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[50U] 
                   & __Vtemp_3[50U]);
            __Vfunc_uvm_bitstream_to_string__56__value[51U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[51U] 
                   & __Vtemp_3[51U]);
            __Vfunc_uvm_bitstream_to_string__56__value[52U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[52U] 
                   & __Vtemp_3[52U]);
            __Vfunc_uvm_bitstream_to_string__56__value[53U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[53U] 
                   & __Vtemp_3[53U]);
            __Vfunc_uvm_bitstream_to_string__56__value[54U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[54U] 
                   & __Vtemp_3[54U]);
            __Vfunc_uvm_bitstream_to_string__56__value[55U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[55U] 
                   & __Vtemp_3[55U]);
            __Vfunc_uvm_bitstream_to_string__56__value[56U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[56U] 
                   & __Vtemp_3[56U]);
            __Vfunc_uvm_bitstream_to_string__56__value[57U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[57U] 
                   & __Vtemp_3[57U]);
            __Vfunc_uvm_bitstream_to_string__56__value[58U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[58U] 
                   & __Vtemp_3[58U]);
            __Vfunc_uvm_bitstream_to_string__56__value[59U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[59U] 
                   & __Vtemp_3[59U]);
            __Vfunc_uvm_bitstream_to_string__56__value[60U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[60U] 
                   & __Vtemp_3[60U]);
            __Vfunc_uvm_bitstream_to_string__56__value[61U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[61U] 
                   & __Vtemp_3[61U]);
            __Vfunc_uvm_bitstream_to_string__56__value[62U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[62U] 
                   & __Vtemp_3[62U]);
            __Vfunc_uvm_bitstream_to_string__56__value[63U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[63U] 
                   & __Vtemp_3[63U]);
            __Vfunc_uvm_bitstream_to_string__56__value[64U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[64U] 
                   & __Vtemp_3[64U]);
            __Vfunc_uvm_bitstream_to_string__56__value[65U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[65U] 
                   & __Vtemp_3[65U]);
            __Vfunc_uvm_bitstream_to_string__56__value[66U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[66U] 
                   & __Vtemp_3[66U]);
            __Vfunc_uvm_bitstream_to_string__56__value[67U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[67U] 
                   & __Vtemp_3[67U]);
            __Vfunc_uvm_bitstream_to_string__56__value[68U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[68U] 
                   & __Vtemp_3[68U]);
            __Vfunc_uvm_bitstream_to_string__56__value[69U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[69U] 
                   & __Vtemp_3[69U]);
            __Vfunc_uvm_bitstream_to_string__56__value[70U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[70U] 
                   & __Vtemp_3[70U]);
            __Vfunc_uvm_bitstream_to_string__56__value[71U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[71U] 
                   & __Vtemp_3[71U]);
            __Vfunc_uvm_bitstream_to_string__56__value[72U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[72U] 
                   & __Vtemp_3[72U]);
            __Vfunc_uvm_bitstream_to_string__56__value[73U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[73U] 
                   & __Vtemp_3[73U]);
            __Vfunc_uvm_bitstream_to_string__56__value[74U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[74U] 
                   & __Vtemp_3[74U]);
            __Vfunc_uvm_bitstream_to_string__56__value[75U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[75U] 
                   & __Vtemp_3[75U]);
            __Vfunc_uvm_bitstream_to_string__56__value[76U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[76U] 
                   & __Vtemp_3[76U]);
            __Vfunc_uvm_bitstream_to_string__56__value[77U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[77U] 
                   & __Vtemp_3[77U]);
            __Vfunc_uvm_bitstream_to_string__56__value[78U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[78U] 
                   & __Vtemp_3[78U]);
            __Vfunc_uvm_bitstream_to_string__56__value[79U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[79U] 
                   & __Vtemp_3[79U]);
            __Vfunc_uvm_bitstream_to_string__56__value[80U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[80U] 
                   & __Vtemp_3[80U]);
            __Vfunc_uvm_bitstream_to_string__56__value[81U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[81U] 
                   & __Vtemp_3[81U]);
            __Vfunc_uvm_bitstream_to_string__56__value[82U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[82U] 
                   & __Vtemp_3[82U]);
            __Vfunc_uvm_bitstream_to_string__56__value[83U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[83U] 
                   & __Vtemp_3[83U]);
            __Vfunc_uvm_bitstream_to_string__56__value[84U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[84U] 
                   & __Vtemp_3[84U]);
            __Vfunc_uvm_bitstream_to_string__56__value[85U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[85U] 
                   & __Vtemp_3[85U]);
            __Vfunc_uvm_bitstream_to_string__56__value[86U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[86U] 
                   & __Vtemp_3[86U]);
            __Vfunc_uvm_bitstream_to_string__56__value[87U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[87U] 
                   & __Vtemp_3[87U]);
            __Vfunc_uvm_bitstream_to_string__56__value[88U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[88U] 
                   & __Vtemp_3[88U]);
            __Vfunc_uvm_bitstream_to_string__56__value[89U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[89U] 
                   & __Vtemp_3[89U]);
            __Vfunc_uvm_bitstream_to_string__56__value[90U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[90U] 
                   & __Vtemp_3[90U]);
            __Vfunc_uvm_bitstream_to_string__56__value[91U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[91U] 
                   & __Vtemp_3[91U]);
            __Vfunc_uvm_bitstream_to_string__56__value[92U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[92U] 
                   & __Vtemp_3[92U]);
            __Vfunc_uvm_bitstream_to_string__56__value[93U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[93U] 
                   & __Vtemp_3[93U]);
            __Vfunc_uvm_bitstream_to_string__56__value[94U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[94U] 
                   & __Vtemp_3[94U]);
            __Vfunc_uvm_bitstream_to_string__56__value[95U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[95U] 
                   & __Vtemp_3[95U]);
            __Vfunc_uvm_bitstream_to_string__56__value[96U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[96U] 
                   & __Vtemp_3[96U]);
            __Vfunc_uvm_bitstream_to_string__56__value[97U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[97U] 
                   & __Vtemp_3[97U]);
            __Vfunc_uvm_bitstream_to_string__56__value[98U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[98U] 
                   & __Vtemp_3[98U]);
            __Vfunc_uvm_bitstream_to_string__56__value[99U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[99U] 
                   & __Vtemp_3[99U]);
            __Vfunc_uvm_bitstream_to_string__56__value[100U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[100U] 
                   & __Vtemp_3[100U]);
            __Vfunc_uvm_bitstream_to_string__56__value[101U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[101U] 
                   & __Vtemp_3[101U]);
            __Vfunc_uvm_bitstream_to_string__56__value[102U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[102U] 
                   & __Vtemp_3[102U]);
            __Vfunc_uvm_bitstream_to_string__56__value[103U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[103U] 
                   & __Vtemp_3[103U]);
            __Vfunc_uvm_bitstream_to_string__56__value[104U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[104U] 
                   & __Vtemp_3[104U]);
            __Vfunc_uvm_bitstream_to_string__56__value[105U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[105U] 
                   & __Vtemp_3[105U]);
            __Vfunc_uvm_bitstream_to_string__56__value[106U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[106U] 
                   & __Vtemp_3[106U]);
            __Vfunc_uvm_bitstream_to_string__56__value[107U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[107U] 
                   & __Vtemp_3[107U]);
            __Vfunc_uvm_bitstream_to_string__56__value[108U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[108U] 
                   & __Vtemp_3[108U]);
            __Vfunc_uvm_bitstream_to_string__56__value[109U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[109U] 
                   & __Vtemp_3[109U]);
            __Vfunc_uvm_bitstream_to_string__56__value[110U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[110U] 
                   & __Vtemp_3[110U]);
            __Vfunc_uvm_bitstream_to_string__56__value[111U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[111U] 
                   & __Vtemp_3[111U]);
            __Vfunc_uvm_bitstream_to_string__56__value[112U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[112U] 
                   & __Vtemp_3[112U]);
            __Vfunc_uvm_bitstream_to_string__56__value[113U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[113U] 
                   & __Vtemp_3[113U]);
            __Vfunc_uvm_bitstream_to_string__56__value[114U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[114U] 
                   & __Vtemp_3[114U]);
            __Vfunc_uvm_bitstream_to_string__56__value[115U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[115U] 
                   & __Vtemp_3[115U]);
            __Vfunc_uvm_bitstream_to_string__56__value[116U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[116U] 
                   & __Vtemp_3[116U]);
            __Vfunc_uvm_bitstream_to_string__56__value[117U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[117U] 
                   & __Vtemp_3[117U]);
            __Vfunc_uvm_bitstream_to_string__56__value[118U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[118U] 
                   & __Vtemp_3[118U]);
            __Vfunc_uvm_bitstream_to_string__56__value[119U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[119U] 
                   & __Vtemp_3[119U]);
            __Vfunc_uvm_bitstream_to_string__56__value[120U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[120U] 
                   & __Vtemp_3[120U]);
            __Vfunc_uvm_bitstream_to_string__56__value[121U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[121U] 
                   & __Vtemp_3[121U]);
            __Vfunc_uvm_bitstream_to_string__56__value[122U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[122U] 
                   & __Vtemp_3[122U]);
            __Vfunc_uvm_bitstream_to_string__56__value[123U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[123U] 
                   & __Vtemp_3[123U]);
            __Vfunc_uvm_bitstream_to_string__56__value[124U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[124U] 
                   & __Vtemp_3[124U]);
            __Vfunc_uvm_bitstream_to_string__56__value[125U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[125U] 
                   & __Vtemp_3[125U]);
            __Vfunc_uvm_bitstream_to_string__56__value[126U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[126U] 
                   & __Vtemp_3[126U]);
            __Vfunc_uvm_bitstream_to_string__56__value[127U] 
                = (__Vfunc_uvm_bitstream_to_string__56__value[127U] 
                   & __Vtemp_3[127U]);
            if ((0x01000000U == __Vfunc_uvm_bitstream_to_string__56__radix)) {
                VL_SFORMAT_NX(__VlefCall_1__uvm_bitstream_to_string
                              ,"%0s%0b",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__56__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__56__value.data());
            } else if ((0x06000000U == __Vfunc_uvm_bitstream_to_string__56__radix)) {
                VL_SFORMAT_NX(__VlefCall_1__uvm_bitstream_to_string
                              ,"%0s%0o",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__56__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__56__value.data());
            } else if ((0x03000000U == __Vfunc_uvm_bitstream_to_string__56__radix)) {
                VL_SFORMAT_NX(__VlefCall_1__uvm_bitstream_to_string
                              ,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__56__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__56__value.data());
            } else if ((0x08000000U == __Vfunc_uvm_bitstream_to_string__56__radix)) {
                VL_SFORMAT_NX(__VlefCall_1__uvm_bitstream_to_string
                              ,"%0s%0s",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__56__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__56__value.data());
            } else if ((0x09000000U == __Vfunc_uvm_bitstream_to_string__56__radix)) {
                VL_SFORMAT_NX(__VlefCall_1__uvm_bitstream_to_string
                              ,"%0s%0t",3, 'T',-12, 'S',&(this->__Vfunc_uvm_bitstream_to_string__56__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__56__value.data());
            } else if ((0x02000000U == __Vfunc_uvm_bitstream_to_string__56__radix)) {
                VL_SFORMAT_NX(__VlefCall_1__uvm_bitstream_to_string
                              ,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__56__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__56__value.data());
            } else {
                VL_SFORMAT_NX(__VlefCall_1__uvm_bitstream_to_string
                              ,"%0s%0x",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__56__radix_str)
                              , '~',4096,__Vfunc_uvm_bitstream_to_string__56__value.data());
            }
            __Vlabel0: ;
        }
        __Vtemp_4 = VUVM_Activator___024unit::__Venumtab_enum_name15
            .at(radix);
        VL_FWRITEF_NX(unnamedblk3__DOT__file,"      SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%s   RADIX:%s BITS=%0d}\n",7, 'T',-12
                      , 'D',VL_TIME_UNITED_D(1), '~',32,txh
                      , 'S',&(nm), 'S',&(__VlefCall_1__uvm_bitstream_to_string)
                      , 'S',&(__Vtemp_4), '~',32,numbits);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_check_handle_kind(VUVM_Activator__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_check_handle_kind\n"); );
    // Body
    CData/*0:0*/ __VlefLogOr_2;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_1__get_stream_from_handle;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> __VlefCall_0__get_recorder_from_handle;
    check_handle_kind__Vfuncrtn = 0;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, handle, __VlefCall_0__get_recorder_from_handle);
    __VlefLogOr_2 = (VlNull{} != __VlefCall_0__get_recorder_from_handle);
    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__VnoInFunc_get_stream_from_handle(vlSymsp, handle, __VlefCall_1__get_stream_from_handle);
        __VlefLogOr_2 = (VlNull{} != __VlefCall_1__get_stream_from_handle);
    }
    check_handle_kind__Vfuncrtn = __VlefLogOr_2;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_begin_tr(VUVM_Activator__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_begin_tr\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__open_file;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream> unnamedblk4__DOT__stream_obj;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> unnamedblk4__DOT__recorder;
    {
        begin_tr__Vfuncrtn = 0;
        this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
        if (__VlefCall_0__open_file) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__VnoInFunc_get_stream_from_handle(vlSymsp, stream, unnamedblk4__DOT__stream_obj);
            if ((VlNull{} == unnamedblk4__DOT__stream_obj)) {
                begin_tr__Vfuncrtn = 0xffffffffU;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(unnamedblk4__DOT__stream_obj, "../../uvm/distrib/src/base/uvm_recorder.svh", 1092)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, nm, begin_time, txtype, unnamedblk4__DOT__recorder);
            VL_NULL_CHECK(unnamedblk4__DOT__recorder, "../../uvm/distrib/src/base/uvm_recorder.svh", 1094)->__VnoInFunc_get_handle(vlSymsp, begin_tr__Vfuncrtn);
            goto __Vlabel0;
        }
        begin_tr__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_end_tr(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_end_tr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> unnamedblk5__DOT__record;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (__VlefCall_0__open_file) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, handle, unnamedblk5__DOT__record);
        if ((VlNull{} != unnamedblk5__DOT__record)) {
            VL_NULL_CHECK(unnamedblk5__DOT__record, "../../uvm/distrib/src/base/uvm_recorder.svh", 1107)->__VnoInFunc_close(vlSymsp, end_time);
        }
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_link_tr(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_link_tr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (VL_UNLIKELY((__VlefCall_0__open_file))) {
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_recorder.svh", 1120)
                      ->__PVT__m_file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=%0s}\n",5, 'T',-12
                      , 'D',VL_TIME_UNITED_D(1), '~',32,h1
                      , '~',32,h2, 'S',&(relation));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_free_tr(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_free_tr\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__open_file;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> unnamedblk6__DOT__record;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (__VlefCall_0__open_file) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, handle, unnamedblk6__DOT__record);
        if ((VlNull{} != unnamedblk6__DOT__record)) {
            VL_NULL_CHECK(unnamedblk6__DOT__record, "../../uvm/distrib/src/base/uvm_recorder.svh", 1132)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
        }
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__filename_set = 0;
}

VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::~VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_recorder::~\n"); );
}
