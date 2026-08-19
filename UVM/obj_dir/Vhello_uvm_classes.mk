# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vhello_uvm.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
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
  Vhello_uvm_vm_classes_0 \
  Vhello_uvm_vm_classes_1 \
  Vhello_uvm_uvm_pkg__03a__03auvm_comparer__Vclpkg__0 \
  Vhello_uvm_vm_classes_2 \
  Vhello_uvm_vm_classes_3 \
  Vhello_uvm_vm_classes_4 \
  Vhello_uvm_vm_classes_5 \
  Vhello_uvm_vm_classes_6 \
  Vhello_uvm_vm_classes_7 \
  Vhello_uvm_vm_classes_8 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vhello_uvm__ConstPool__0__Slow \
  Vhello_uvm___024root__Slow \
  Vhello_uvm___024root__0__Slow \
  Vhello_uvm_vm_classes_Slow_0 \
  Vhello_uvm_vm_classes_Slow_1 \
  Vhello_uvm_vm_classes_Slow_2 \
  Vhello_uvm_vm_classes_Slow_3 \
  Vhello_uvm_vm_classes_Slow_4 \
  Vhello_uvm_vm_classes_Slow_5 \
  Vhello_uvm_vm_classes_Slow_6 \
  Vhello_uvm_vm_classes_Slow_7 \
  Vhello_uvm_vm_classes_Slow_8 \
  Vhello_uvm_vm_classes_Slow_9 \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vhello_uvm__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vhello_uvm__Syms__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_timing \
  verilated_random \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
