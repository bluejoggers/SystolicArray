// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v1.h for the primary calling header

#include "Vswitch_testbench_v1__pch.h"

VlCoroutine Vswitch_testbench_v1___024unit__03a__03ascoreboard::__VnoInFunc_run(Vswitch_testbench_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v1___024unit__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vswitch_testbench_v1___024unit__03a__03atxn_object> unnamedblk1__DOT__txn;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__scoreboard_mbox, "switch_testbench_v1.sv", 193)->__VnoInFunc_get(vlSymsp, unnamedblk1__DOT__txn);
        if ((0x3fU >= VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 195)
             ->__PVT__address)) {
            if (((VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 196)
                  ->__PVT__address_a != VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 196)
                  ->__PVT__address) || (VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 196)
                                        ->__PVT__data_a 
                                        != VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 196)
                                        ->__PVT__data))) {
                VL_WRITEF_NX("T=%0t [SCOREBOARD] ERROR! Address:0x%0h, Data:0x%0h | Address_A:0x%0h, Data_A:0x%0h\n",6, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',8,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 197)
                             ->__PVT__address, '#',16,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 197)
                             ->__PVT__data, '#',8,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 197)
                             ->__PVT__address_a, '#',16,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 197)
                             ->__PVT__data_a);
            } else {
                VL_WRITEF_NX("T=%0t [SCOREBOARD] PASS! Address:0x%0h, Data:0x%0h | Address_A:0x%0h, Data_A:0x%0h\n",6, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',8,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 200)
                             ->__PVT__address, '#',16,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 200)
                             ->__PVT__data, '#',8,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 200)
                             ->__PVT__address_a, '#',16,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 200)
                             ->__PVT__data_a);
            }
        } else if (((VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 204)
                     ->__PVT__address_b != VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 204)
                     ->__PVT__address) || (VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 204)
                                           ->__PVT__data_b 
                                           != VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 204)
                                           ->__PVT__data))) {
            VL_WRITEF_NX("T=%0t [SCOREBOARD] ERROR! Address:0x%0h, Data:0x%0h | Address_B:0x%0h, Data_B:0x%0h\n",6, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',8,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 205)
                         ->__PVT__address, '#',16,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 205)
                         ->__PVT__data, '#',8,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 205)
                         ->__PVT__address_b, '#',16,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 205)
                         ->__PVT__data_b);
        } else {
            VL_WRITEF_NX("T=%0t [SCOREBOARD] PASS! Address:0x%0h, Data:0x%0h | Address_B:0x%0h, Data_B:0x%0h\n",6, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',8,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 208)
                         ->__PVT__address, '#',16,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 208)
                         ->__PVT__data, '#',8,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 208)
                         ->__PVT__address_b, '#',16,VL_NULL_CHECK(unnamedblk1__DOT__txn, "switch_testbench_v1.sv", 208)
                         ->__PVT__data_b);
        }
    }
    co_return;
}

void Vswitch_testbench_v1___024unit__03a__03ascoreboard::init(Vswitch_testbench_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v1___024unit__03a__03ascoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vswitch_testbench_v1___024unit__03a__03ascoreboard::_ctor_var_reset(Vswitch_testbench_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v1___024unit__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
