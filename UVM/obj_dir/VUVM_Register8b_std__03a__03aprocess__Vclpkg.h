// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_std__03a__03aprocess;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_std__03a__03aprocess__Vclpkg();
    ~VUVM_Register8b_std__03a__03aprocess__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_killQueue(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Register8b_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_std__03a__03aprocess> &self__Vfuncrtn);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new VUVM_Register8b_std__03a__03aprocess(*this); }
    VlCoroutine __VnoInFunc_await(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(VUVM_Register8b__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_srandom(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ seed);
    void __VnoInFunc_status(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(VUVM_Register8b__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_std__03a__03aprocess() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    ~VUVM_Register8b_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:211:21

template<> template<>
inline bool VlClassRef<VUVM_Register8b_std__03a__03aprocess>::operator==(const VlClassRef<VUVM_Register8b_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process == rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<VUVM_Register8b_std__03a__03aprocess>::operator!=(const VlClassRef<VUVM_Register8b_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->m_process != rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<VUVM_Register8b_std__03a__03aprocess>::operator<(const VlClassRef<VUVM_Register8b_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process < rhs.m_objp->m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
