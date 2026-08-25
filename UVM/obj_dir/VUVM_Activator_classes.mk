# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VUVM_Activator.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0
# VPI enabled?  0/1 (from --vpi)
VM_VPI = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  VUVM_Activator_vm_classes_0 \
  VUVM_Activator_vm_classes_1 \
  VUVM_Activator_uvm_pkg__03a__03auvm_comparer__Vclpkg__0 \
  VUVM_Activator_vm_classes_2 \
  VUVM_Activator_vm_classes_3 \
  VUVM_Activator_vm_classes_4 \
  VUVM_Activator_vm_classes_5 \
  VUVM_Activator_vm_classes_6 \
  VUVM_Activator_vm_classes_7 \
  VUVM_Activator_vm_classes_8 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  VUVM_Activator__ConstPool__0__Slow \
  VUVM_Activator___024root__Slow \
  VUVM_Activator___024root__0__Slow \
  VUVM_Activator_vm_classes_Slow_0 \
  VUVM_Activator_vm_classes_Slow_1 \
  VUVM_Activator_vm_classes_Slow_2 \
  VUVM_Activator_vm_classes_Slow_3 \
  VUVM_Activator_vm_classes_Slow_4 \
  VUVM_Activator_vm_classes_Slow_5 \
  VUVM_Activator_vm_classes_Slow_6 \
  VUVM_Activator_vm_classes_Slow_7 \
  VUVM_Activator_vm_classes_Slow_8 \
  VUVM_Activator_vm_classes_Slow_9 \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  VUVM_Activator__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  VUVM_Activator__Syms__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_cov \
  verilated_covergroup \
  verilated_timing \
  verilated_random \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
