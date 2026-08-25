// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_int(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ lhs, QData/*63:0*/ rhs, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*0:0*/ &compare_field_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_int\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ mask;
    std::string msg;
    {
        compare_field_int__Vfuncrtn = 0U;
        mask = 0;
        msg = ""s;
        mask = 0xffffffffffffffffULL;
        mask = VL_SHIFTR_QQI(64,64,32, mask, ((IData)(0x00000040U) 
                                              - size));
        if (((lhs & mask) != (rhs & mask))) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 213)
                          ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 213)->__VnoInFunc_set_arg(vlSymsp, name);
            if ((0x01000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = 'b%0b : rhs = 'b%0b",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else if ((0x06000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = 'o%0o : rhs = 'o%0o",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else if ((0x02000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = %0d : rhs = %0d",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else if ((0x09000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = %0t : rhs = %0t",3, 'T',-12
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else if ((0x08000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = %0s : rhs = %0s",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else if ((0x0a000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = %0d : rhs = %0d",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else {
                VL_SFORMAT_NX(msg,"lhs = 'h%0x : rhs = 'h%0x",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            }
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_field_int__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        compare_field_int__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_real(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, double lhs, double rhs, CData/*0:0*/ &compare_field_real__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_real\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string msg;
    {
        compare_field_real__Vfuncrtn = 0U;
        msg = ""s;
        if ((lhs != rhs)) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 263)
                          ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 263)->__VnoInFunc_set_arg(vlSymsp, name);
            VL_SFORMAT_NX(msg,"lhs = %g : rhs = %g",2
                          , 'D',lhs, 'D',rhs);
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_field_real__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        compare_field_real__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_object(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs, CData/*0:0*/ &compare_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_object\n"); );
    // Body
    {
        compare_object__Vfuncrtn = 0U;
        if ((rhs == lhs)) {
            compare_object__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        if (((0x00001000U == this->__PVT__policy) & 
             (lhs != rhs))) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 292)
                          ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 292)->__VnoInFunc_set_arg(vlSymsp, name);
            this->__VnoInFunc_print_msg_object(vlSymsp, lhs, rhs);
            compare_object__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (((VlNull{} == rhs) | (VlNull{} == lhs))) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 298)
                          ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 298)->__VnoInFunc_set_arg(vlSymsp, name);
            this->__VnoInFunc_print_msg_object(vlSymsp, lhs, rhs);
            compare_object__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 303)
                      ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 303)->__VnoInFunc_down(vlSymsp, name);
        VL_NULL_CHECK(lhs, "../../uvm/distrib/src/base/uvm_comparer.svh", 304)->__VnoInFunc_compare(vlSymsp, rhs, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_comparer>{this}, compare_object__Vfuncrtn);
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 305)
                      ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 305)->__VnoInFunc_up(vlSymsp, 0x2eU);
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_string(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, std::string lhs, std::string rhs, CData/*0:0*/ &compare_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string msg;
    {
        compare_string__Vfuncrtn = 0U;
        msg = ""s;
        if ((lhs != rhs)) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 323)
                          ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 323)->__VnoInFunc_set_arg(vlSymsp, name);
            msg = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN("lhs = \""s, lhs), "\" : rhs = \""s), rhs), "\""s);
                        this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
                        compare_string__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                    compare_string__Vfuncrtn = 1U;
                    __Vlabel0: ;
                }
            }

            void VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string msg) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_1__get;
                std::string __VlefCall_0__get;
                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> root;
                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> cs;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
                VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_comparer.svh", 346)
                                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, root);
                this->__PVT__result = ((IData)(1U) 
                                       + this->__PVT__result);
                if ((this->__PVT__result <= this->__PVT__show_max)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 350)
                                  ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 350)
                                                ->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
                    msg = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Miscompare for "s, __VlefCall_0__get), ": "s), msg);
                    VL_NULL_CHECK(root, "../../uvm/distrib/src/base/uvm_comparer.svh", 351)
                                                ->__VnoInFunc_uvm_report(vlProcess, vlSymsp, this->__PVT__sev, "MISCMP"s, msg, this->__PVT__verbosity, "../../uvm/distrib/src/base/uvm_comparer.svh"s, 0x0000015fU, ""s, 0U);
                }
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 353)
                              ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 353)
                                                ->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
                this->__PVT__miscompares = VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN(
                                                                         VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(this->__PVT__miscompares, __VlefCall_1__get), ": "s), msg), "\n"s);
            }

            void VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_rollup(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> lhs) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_rollup\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_4__get_inst_id;
                std::string __VlefCall_3__get_name;
                IData/*31:0*/ __VlefCall_2__get_inst_id;
                std::string __VlefCall_1__get_name;
                IData/*31:0*/ __VlefCall_0__depth;
                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> root;
                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> cs;
                std::string msg;
                msg = ""s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
                VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_comparer.svh", 370)
                                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, root);
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 371)
                              ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 371)
                                                ->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
                if ((0U == __VlefCall_0__depth)) {
                    if (((0U != this->__PVT__result) 
                         & ((0U != this->__PVT__show_max) 
                            | (0U != (IData)(this->__PVT__sev))))) {
                        if ((this->__PVT__show_max 
                             < this->__PVT__result)) {
                            VL_SFORMAT_NX(msg,"%0d Miscompare(s) (%0d shown) for object ",2
                                          , '#',32,this->__PVT__result
                                          , '#',32,this->__PVT__show_max);
                        } else {
                            VL_SFORMAT_NX(msg,"%0d Miscompare(s) for object ",1
                                          , '#',32,this->__PVT__result);
                        }
                        VL_NULL_CHECK(lhs, "../../uvm/distrib/src/base/uvm_comparer.svh", 381)
                                                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                        VL_NULL_CHECK(lhs, "../../uvm/distrib/src/base/uvm_comparer.svh", 381)
                                                ->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_2__get_inst_id);
                        VL_NULL_CHECK(rhs, "../../uvm/distrib/src/base/uvm_comparer.svh", 381)
                                                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                        VL_NULL_CHECK(rhs, "../../uvm/distrib/src/base/uvm_comparer.svh", 381)
                                                ->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_4__get_inst_id);
                        VL_NULL_CHECK(root, "../../uvm/distrib/src/base/uvm_comparer.svh", 380)
                                                ->__VnoInFunc_uvm_report(vlProcess, vlSymsp, this->__PVT__sev, "MISCMP"s, VL_SFORMATF_N_NX("%s%s@%0d vs. %s@%0d",5
                                                                                , 'S',&(msg)
                                                                                , 'S',&(__VlefCall_1__get_name)
                                                                                , '~',32,__VlefCall_2__get_inst_id
                                                                                , 'S',&(__VlefCall_3__get_name)
                                                                                , '~',32,__VlefCall_4__get_inst_id) , this->__PVT__verbosity, "../../uvm/distrib/src/base/uvm_comparer.svh"s, 0x0000017eU, ""s, 0U);
                    }
                }
            }

            void VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg_object(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg_object\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCond_9;
                IData/*31:0*/ __VlefCall_8__get_inst_id;
                IData/*31:0*/ __VlefCond_7;
                IData/*31:0*/ __VlefCall_6__get_inst_id;
                std::string __VlefCall_5__get;
                IData/*31:0*/ __VlefCond_4;
                IData/*31:0*/ __VlefCall_3__get_inst_id;
                IData/*31:0*/ __VlefCond_2;
                IData/*31:0*/ __VlefCall_1__get_inst_id;
                std::string __VlefCall_0__get;
                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> root;
                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> cs;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
                VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_comparer.svh", 395)
                                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, root);
                this->__PVT__result = ((IData)(1U) 
                                       + this->__PVT__result);
                if ((this->__PVT__result <= this->__PVT__show_max)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 401)
                                  ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 401)
                                                ->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
                    if ((VlNull{} != lhs)) {
                        VL_NULL_CHECK(lhs, "../../uvm/distrib/src/base/uvm_comparer.svh", 401)
                                                ->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
                        __VlefCond_2 = __VlefCall_1__get_inst_id;
                    } else {
                        __VlefCond_2 = 0U;
                    }
                    if ((VlNull{} != rhs)) {
                        VL_NULL_CHECK(rhs, "../../uvm/distrib/src/base/uvm_comparer.svh", 401)
                                                ->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_3__get_inst_id);
                        __VlefCond_4 = __VlefCall_3__get_inst_id;
                    } else {
                        __VlefCond_4 = 0U;
                    }
                    VL_NULL_CHECK(root, "../../uvm/distrib/src/base/uvm_comparer.svh", 399)
                                                ->__VnoInFunc_uvm_report(vlProcess, vlSymsp, this->__PVT__sev, "MISCMP"s, VL_SFORMATF_N_NX("Miscompare for %0s: lhs = @%0d : rhs = @%0d",3
                                                                                , 'S',&(__VlefCall_0__get)
                                                                                , '~',32,__VlefCond_2
                                                                                , '~',32,__VlefCond_4) , this->__PVT__verbosity, "../../uvm/distrib/src/base/uvm_comparer.svh"s, 0x00000191U, ""s, 0U);
                }
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_comparer.svh", 404)
                              ->__PVT__scope, "../../uvm/distrib/src/base/uvm_comparer.svh", 404)
                                                ->__VnoInFunc_get(vlSymsp, __VlefCall_5__get);
                if ((VlNull{} != lhs)) {
                    VL_NULL_CHECK(lhs, "../../uvm/distrib/src/base/uvm_comparer.svh", 404)
                                                ->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_6__get_inst_id);
                    __VlefCond_7 = __VlefCall_6__get_inst_id;
                } else {
                    __VlefCond_7 = 0U;
                }
                if ((VlNull{} != rhs)) {
                    VL_NULL_CHECK(rhs, "../../uvm/distrib/src/base/uvm_comparer.svh", 404)
                                                ->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_8__get_inst_id);
                    __VlefCond_9 = __VlefCall_8__get_inst_id;
                } else {
                    __VlefCond_9 = 0U;
                }
                VL_SFORMAT_NX(this->__PVT__miscompares
                              ,"%s%s: lhs = @%0d : rhs = @%0d",4
                              , 'S',&(this->__PVT__miscompares)
                              , 'S',&(__VlefCall_5__get)
                              , '~',32,__VlefCond_7
                              , '~',32,__VlefCond_9);
            }

            void VUVM_Activator_uvm_pkg__03a__03auvm_comparer::init(VUVM_Activator__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_comparer::new\n"); );
                // Body
                _ctor_var_reset(vlSymsp);
                this->__PVT__policy = 0U;
                this->__PVT__show_max = 1U;
                this->__PVT__verbosity = 0x00000064U;
                this->__PVT__sev = 0U;
                this->__PVT__miscompares = ""s;
                this->__PVT__physical = 1U;
                this->__PVT__abstract = 1U;
                this->__PVT__check_type = 1U;
                this->__PVT__result = 0U;
                this->__PVT__scope = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_scope_stack, vlSymsp);
            }

            void VUVM_Activator_uvm_pkg__03a__03auvm_comparer::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_comparer::_ctor_var_reset\n"); );
                // Body
                (void)vlSymsp;  // Prevent unused variable warning
                __PVT__depth = 0;
            }
