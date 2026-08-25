// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg___ctor_var_reset(VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg* vlSelf);

VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg::VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg() = default;
VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg::~VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg() = default;

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg::ctor(VUVM_Activator__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg___ctor_var_reset(this);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg___configure_coverage(VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg* vlSelf, bool first);

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg___configure_coverage(this, first);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Coverage
void VUVM_Activator_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
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
