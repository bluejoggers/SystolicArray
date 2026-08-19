// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP10.h for the primary calling header

#ifndef VERILATED_VP10_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VP10_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
class VP10_std__03a__03aprocess;


class VP10__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP10_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VP10__Syms* vlSymsp;
    const char* vlNamep;
    uint32_t __Vcoverage[14]{};

    // CONSTRUCTORS
    VP10_std__03a__03aprocess__Vclpkg();
    ~VP10_std__03a__03aprocess__Vclpkg();
    void ctor(VP10__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP10_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_killQueue(VP10__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VP10_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, VP10__Syms* __restrict vlSymsp, VlClassRef<VP10_std__03a__03aprocess> &self__Vfuncrtn);
};


class VP10__Syms;

class VP10_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new VP10_std__03a__03aprocess(*this); }
    VlCoroutine __VnoInFunc_await(VP10__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(VP10__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(VP10__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(VP10__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(VP10__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(VP10__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(VP10__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(VP10__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VP10__Syms* __restrict vlSymsp);
  public:
    VP10_std__03a__03aprocess() = default;
    void init(VP10__Syms* __restrict vlSymsp);
    ~VP10_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:211:21

template<> template<>
inline bool VlClassRef<VP10_std__03a__03aprocess>::operator==(const VlClassRef<VP10_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process == rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<VP10_std__03a__03aprocess>::operator!=(const VlClassRef<VP10_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->m_process != rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<VP10_std__03a__03aprocess>::operator<(const VlClassRef<VP10_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process < rhs.m_objp->m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
