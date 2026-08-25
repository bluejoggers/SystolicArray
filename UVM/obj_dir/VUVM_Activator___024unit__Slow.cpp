// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"
VlAssocArray<IData/*31:0*/, CData/*0:0*/> VUVM_Activator___024unit::__Venumtab_enum_valid25;
VlAssocArray<IData/*31:0*/, std::string> VUVM_Activator___024unit::__Venumtab_enum_name15;
VlAssocArray<IData/*31:0*/, std::string> VUVM_Activator___024unit::__Venumtab_enum_name25;
VlAssocArray<IData/*31:0*/, std::string> VUVM_Activator___024unit::__Venumtab_enum_name37;
VlAssocArray<IData/*31:0*/, std::string> VUVM_Activator___024unit::__Venumtab_enum_name65;
VlUnpacked<CData/*1:0*/, 4> VUVM_Activator___024unit::__Venumtab_enum_next21;
VlUnpacked<std::string, 8> VUVM_Activator___024unit::__Venumtab_enum_name35;
VlUnpacked<CData/*0:0*/, 2> VUVM_Activator___024unit::__Venumtab_enum_valid19;
VlUnpacked<std::string, 2> VUVM_Activator___024unit::__Venumtab_enum_name19;
VlUnpacked<std::string, 4> VUVM_Activator___024unit::__Venumtab_enum_name21;
VlUnpacked<std::string, 4> VUVM_Activator___024unit::__Venumtab_enum_name61;
VlUnpacked<std::string, 4> VUVM_Activator___024unit::__Venumtab_enum_name63;
VlUnpacked<std::string, 4> VUVM_Activator___024unit::__Venumtab_enum_name83;
VlUnpacked<std::string, 4> VUVM_Activator___024unit::__Venumtab_enum_name81;
VlUnpacked<std::string, 4> VUVM_Activator___024unit::__Venumtab_enum_name75;
VlUnpacked<std::string, 4> VUVM_Activator___024unit::__Venumtab_enum_name73;
VlUnpacked<std::string, 8> VUVM_Activator___024unit::__Venumtab_enum_name79;
VlUnpacked<IData/*31:0*/, 4> VUVM_Activator___024unit::__Venumvaltab_0;
VlUnpacked<IData/*31:0*/, 8> VUVM_Activator___024unit::__Venumvaltab_1;
VlUnpacked<IData/*31:0*/, 5> VUVM_Activator___024unit::__Venumvaltab_2;

void VUVM_Activator___024unit___ctor_var_reset(VUVM_Activator___024unit* vlSelf);

VUVM_Activator___024unit::VUVM_Activator___024unit() = default;
VUVM_Activator___024unit::~VUVM_Activator___024unit() = default;

void VUVM_Activator___024unit::ctor(VUVM_Activator__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VUVM_Activator___024unit___ctor_var_reset(this);
}

void VUVM_Activator___024unit___configure_coverage(VUVM_Activator___024unit* vlSelf, bool first);

void VUVM_Activator___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    VUVM_Activator___024unit___configure_coverage(this, first);
}

void VUVM_Activator___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Coverage
void VUVM_Activator___024unit::__vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
    const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{vlNamep} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable && !localCounter) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), vlNamep, count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier.c_str(),  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp,  (fsmVarp[0] ? "fsm_var" : ""), fsmVarp,  (fsmFromp[0] ? "fsm_from" : ""), fsmFromp,  (fsmTop[0] ? "fsm_to" : ""), fsmTop,  (fsmTagp[0] ? "fsm_tag" : ""), fsmTagp);
}
