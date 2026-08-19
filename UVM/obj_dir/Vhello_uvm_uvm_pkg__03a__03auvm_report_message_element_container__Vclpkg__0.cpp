// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg::__VnoInFunc_get_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi12> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi12__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_object_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi12> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi12__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container, vlProcess, vlSymsp, "element_container"s);
    } else {
        tmp = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_message_element_container"s;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 290)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name) {
    Vhello_uvm_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_size(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__elements.size();
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete\n"); );
    // Body
    this->__PVT__elements.erase(index);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete_elements(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete_elements\n"); );
    // Body
    this->__PVT__elements.clear();
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_elements(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_base>> &get_elements__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_elements\n"); );
    // Body
    get_elements__Vfuncrtn = this->__PVT__elements;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_int(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_int\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_std__03a__03aprocess> p;
    std::string rand_state;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message_int_element> urme;
    rand_state = ""s;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_report_message.svh", 361)->__VnoInFunc_get_randstate(vlSymsp, rand_state);
    }
    urme = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_report_message_int_element, vlSymsp);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_report_message.svh", 364)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
    }
    VL_NULL_CHECK(urme, "../../uvm/distrib/src/base/uvm_report_message.svh", 366)->__VnoInFunc_set_name(vlSymsp, name);
    VL_NULL_CHECK(urme, "../../uvm/distrib/src/base/uvm_report_message.svh", 367)->__VnoInFunc_set_value(vlSymsp, value, size, radix);
    VL_NULL_CHECK(urme, "../../uvm/distrib/src/base/uvm_report_message.svh", 368)->__VnoInFunc_set_action(vlSymsp, action);
    this->__PVT__elements.push_back(urme);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_string(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_string\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_std__03a__03aprocess> p;
    std::string rand_state;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message_string_element> urme;
    rand_state = ""s;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_report_message.svh", 388)->__VnoInFunc_get_randstate(vlSymsp, rand_state);
    }
    urme = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_report_message_string_element, vlSymsp);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_report_message.svh", 391)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
    }
    VL_NULL_CHECK(urme, "../../uvm/distrib/src/base/uvm_report_message.svh", 393)->__VnoInFunc_set_name(vlSymsp, name);
    VL_NULL_CHECK(urme, "../../uvm/distrib/src/base/uvm_report_message.svh", 394)->__VnoInFunc_set_value(vlSymsp, value);
    VL_NULL_CHECK(urme, "../../uvm/distrib/src/base/uvm_report_message.svh", 395)->__VnoInFunc_set_action(vlSymsp, action);
    this->__PVT__elements.push_back(urme);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_object(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_object\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_std__03a__03aprocess> p;
    std::string rand_state;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message_object_element> urme;
    rand_state = ""s;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_report_message.svh", 415)->__VnoInFunc_get_randstate(vlSymsp, rand_state);
    }
    urme = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_report_message_object_element, vlSymsp);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_report_message.svh", 418)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
    }
    VL_NULL_CHECK(urme, "../../uvm/distrib/src/base/uvm_report_message.svh", 420)->__VnoInFunc_set_name(vlSymsp, name);
    VL_NULL_CHECK(urme, "../../uvm/distrib/src/base/uvm_report_message.svh", 421)->__VnoInFunc_set_value(vlSymsp, obj);
    VL_NULL_CHECK(urme, "../../uvm/distrib/src/base/uvm_report_message.svh", 422)->__VnoInFunc_set_action(vlSymsp, action);
    this->__PVT__elements.push_back(urme);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk2__DOT__i;
    Vhello_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    unnamedblk2__DOT__i = 0U;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__elements.size())) {
        VL_NULL_CHECK(this->__PVT__elements.at(unnamedblk2__DOT__i), "../../uvm/distrib/src/base/uvm_report_message.svh", 429)->__VnoInFunc_print(vlProcess, vlSymsp, printer);
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_record(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_record\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk3__DOT__i;
    Vhello_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    unnamedblk3__DOT__i = 0U;
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, this->__PVT__elements.size())) {
        VL_NULL_CHECK(this->__PVT__elements.at(unnamedblk3__DOT__i), "../../uvm/distrib/src/base/uvm_report_message.svh", 436)->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
        unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_base> __VlefCall_1__clone;
    IData/*31:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk4__DOT__i;
    unnamedblk4__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__i__Vloopsize;
    unnamedblk4__DOT__i__Vloopsize = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container> urme_container;
    {
        Vhello_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, urme_container);
        if (((! __VlefExpr_0) || (VlNull{} == rhs))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_delete_elements(vlSymsp);
        unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__i, VL_NULL_CHECK(urme_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 449)
                          ->__PVT__elements.size())) {
            unnamedblk4__DOT__i__Vloopsize = VL_NULL_CHECK(urme_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 449)
                ->__PVT__elements.size();
            VL_NULL_CHECK(VL_NULL_CHECK(urme_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 450)
                          ->__PVT__elements.at(unnamedblk4__DOT__i), "../../uvm/distrib/src/base/uvm_report_message.svh", 450)->__VnoInFunc_clone(vlSymsp, __VlefCall_1__clone);
            this->__PVT__elements.push_back(__VlefCall_1__clone);
            if ((unnamedblk4__DOT__i__Vloopsize <= VL_NULL_CHECK(urme_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 449)
                 ->__PVT__elements.size())) {
                unnamedblk4__DOT__i = ((IData)(1U) 
                                       + unnamedblk4__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::~Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container::~\n"); );
}
