// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister8b_test_top_v1.h for the primary calling header

#ifndef VERILATED_VREGISTER8B_TEST_TOP_V1_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VREGISTER8B_TEST_TOP_V1_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VRegister8b_test_top_v1_std__03a__03aprocess;


class VRegister8b_test_top_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister8b_test_top_v1_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VRegister8b_test_top_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VRegister8b_test_top_v1_std__03a__03aprocess__Vclpkg();
    ~VRegister8b_test_top_v1_std__03a__03aprocess__Vclpkg();
    void ctor(VRegister8b_test_top_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VRegister8b_test_top_v1_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VRegister8b_test_top_v1_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, VRegister8b_test_top_v1__Syms* __restrict vlSymsp, VlClassRef<VRegister8b_test_top_v1_std__03a__03aprocess> &self__Vfuncrtn);
};


class VRegister8b_test_top_v1__Syms;

class VRegister8b_test_top_v1_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new VRegister8b_test_top_v1_std__03a__03aprocess(*this); }
    VlCoroutine __VnoInFunc_await(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
  public:
    VRegister8b_test_top_v1_std__03a__03aprocess() = default;
    void init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp);
    ~VRegister8b_test_top_v1_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:211:21

template<> template<>
inline bool VlClassRef<VRegister8b_test_top_v1_std__03a__03aprocess>::operator==(const VlClassRef<VRegister8b_test_top_v1_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process == rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<VRegister8b_test_top_v1_std__03a__03aprocess>::operator!=(const VlClassRef<VRegister8b_test_top_v1_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->m_process != rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<VRegister8b_test_top_v1_std__03a__03aprocess>::operator<(const VlClassRef<VRegister8b_test_top_v1_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process < rhs.m_objp->m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
