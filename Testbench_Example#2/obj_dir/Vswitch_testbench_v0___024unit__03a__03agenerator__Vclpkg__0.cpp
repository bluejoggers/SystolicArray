// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v0.h for the primary calling header

#include "Vswitch_testbench_v0__pch.h"

VlCoroutine Vswitch_testbench_v0___024unit__03a__03agenerator::__VnoInFunc_run(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v0___024unit__03a__03agenerator::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<Vswitch_testbench_v0___024unit__03a__03atxn_object> unnamedblk1__DOT__unnamedblk2__DOT__txn;
    VL_WRITEF_NX("T=%0t [GENERATOR] Running...\n",2, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__num_txns)) {
        unnamedblk1__DOT__unnamedblk2__DOT__txn = VL_NEW(Vswitch_testbench_v0___024unit__03a__03atxn_object, vlSymsp);
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if ((VlNull{} != unnamedblk1__DOT__unnamedblk2__DOT__txn)) {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__txn, "switch_testbench_v0.sv", 130)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
                __VlefCond_1 = __VlefCall_0__randomize;
            } else {
                __VlefCond_1 = 0U;
            }
            if (VL_LIKELY(((1U != __VlefCond_1)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: switch_testbench_v0.sv:130: Assertion failed in %m: %d\n",4, 'M',vlSymsp->name(),"$unit.generator.run.unnamedblk1.unnamedblk2", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '~',32,unnamedblk1__DOT__i);
                    VL_STOP_MT("switch_testbench_v0.sv", 130, "", false);
                }
            }
        }
        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__txn, "switch_testbench_v0.sv", 132)->__VnoInFunc_print(vlSymsp, "GENERATOR"s);
        co_await VL_NULL_CHECK(this->__PVT__generator_mbox, "switch_testbench_v0.sv", 133)->__VnoInFunc_put(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__txn);
        vlSymsp->fireEvent(this->__PVT__generator_done);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("T=%0t [GENERATOR] Finished generating %0d transactions\n",3, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1), '~',32,this->__PVT__num_txns);
    co_return;
}

void Vswitch_testbench_v0___024unit__03a__03agenerator::init(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v0___024unit__03a__03agenerator::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__num_txns = 0x00000032U;
}

void Vswitch_testbench_v0___024unit__03a__03agenerator::_ctor_var_reset(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v0___024unit__03a__03agenerator::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
