// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"
VlAssocArray<IData/*31:0*/, CData/*0:0*/> VUVM_regblock___024unit::__Venumtab_enum_valid25;
VlAssocArray<IData/*31:0*/, std::string> VUVM_regblock___024unit::__Venumtab_enum_name15;
VlAssocArray<IData/*31:0*/, std::string> VUVM_regblock___024unit::__Venumtab_enum_name25;
VlAssocArray<IData/*31:0*/, std::string> VUVM_regblock___024unit::__Venumtab_enum_name37;
VlAssocArray<IData/*31:0*/, std::string> VUVM_regblock___024unit::__Venumtab_enum_name65;
VlUnpacked<CData/*1:0*/, 4> VUVM_regblock___024unit::__Venumtab_enum_next21;
VlUnpacked<std::string, 8> VUVM_regblock___024unit::__Venumtab_enum_name35;
VlUnpacked<CData/*0:0*/, 2> VUVM_regblock___024unit::__Venumtab_enum_valid19;
VlUnpacked<std::string, 2> VUVM_regblock___024unit::__Venumtab_enum_name19;
VlUnpacked<std::string, 4> VUVM_regblock___024unit::__Venumtab_enum_name21;
VlUnpacked<std::string, 4> VUVM_regblock___024unit::__Venumtab_enum_name61;
VlUnpacked<std::string, 4> VUVM_regblock___024unit::__Venumtab_enum_name63;
VlUnpacked<std::string, 4> VUVM_regblock___024unit::__Venumtab_enum_name83;
VlUnpacked<std::string, 4> VUVM_regblock___024unit::__Venumtab_enum_name81;
VlUnpacked<std::string, 4> VUVM_regblock___024unit::__Venumtab_enum_name75;
VlUnpacked<std::string, 4> VUVM_regblock___024unit::__Venumtab_enum_name73;
VlUnpacked<std::string, 8> VUVM_regblock___024unit::__Venumtab_enum_name79;
VlUnpacked<IData/*31:0*/, 4> VUVM_regblock___024unit::__Venumvaltab_0;
VlUnpacked<IData/*31:0*/, 8> VUVM_regblock___024unit::__Venumvaltab_1;
VlUnpacked<IData/*31:0*/, 5> VUVM_regblock___024unit::__Venumvaltab_2;

void VUVM_regblock___024unit___ctor_var_reset(VUVM_regblock___024unit* vlSelf);

VUVM_regblock___024unit::VUVM_regblock___024unit() = default;
VUVM_regblock___024unit::~VUVM_regblock___024unit() = default;

void VUVM_regblock___024unit::ctor(VUVM_regblock__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VUVM_regblock___024unit___ctor_var_reset(this);
}

void VUVM_regblock___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VUVM_regblock___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
