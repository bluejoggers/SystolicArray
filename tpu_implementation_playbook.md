# 8x8 Systolic TPU v1: RTL-to-GDSII Implementation Playbook

## 1. Executive Summary & Scope Fence

This document defines the production plan to transition the 8x8 Systolic TPU v1 from behavioral RTL simulation to a clean, signoff-quality GDSII tapeout using OpenROAD-flow-scripts (ORFS), OpenRAM, and the SkyWater 130nm (or FreePDK45/Nangate45) open-source toolchain.

### Scope Fence (Strict Non-Negotiables)
* **Single Clock Domain:** The entire accelerator runs on one synchronous clock domain (`clk`). All multi-clock domain, asynchronous FIFO, and clock domain crossing (CDC) synchronizers are explicitly excluded.
* **Streamlined Control Interface:** Use simple synchronous `valid`/`ready` handshakes and register-mapped control lines instead of adding complex multi-beat AXI4/AXI4-Lite bridge infrastructure.
* **Physical SRAM Hard Macros (16 Total):**
  - **8x Unified Buffer (UB) Banks:** Each $4096 \text{ words} \times 8 \text{ bits}$ (Dual-Port $1\text{RW}1\text{R}$ configuration, $32\text{ KiB}$ total).
  - **8x Accumulator (ACC) Banks:** Each $256 \text{ words} \times 32 \text{ bits}$ ($1\text{RW}$ or $1\text{RW}1\text{R}$ configuration, $8\text{ KiB}$ total).
* **Early Physical Feedback (Shift-Left DRC):** A minimal "thin-spike" netlist is driven through synthesis and place-and-route in Week 1 to identify and fix PDK layer-mapping discrepancies, Magic DRC rules, and GDS stream-out errors before final floorplanning.

---

## 2. Memory Subsystem Architecture & OpenRAM Configs

### 2.1 Unified Buffer (UB) Sizing & Arbitration
* **Total Capacity:** $32\text{ KiB} = 32,768\text{ bytes} = 262,144\text{ bits}$.
* **Parallelism:** 8 parallel banks aligned with the 8 columns of the systolic matrix.
* **Bank Dimensions:** $4096\text{ words} \times 8\text{ bits} = 4\text{ KiB}$ per bank.
* **Port Mapping ($1\text{RW}1\text{R}$ Macro):**
  - **Port 0 (Write / Arbiter):** Driven by the priority arbiter resolving `norm_write_req` (on-chip quantization pipeline) vs. `host_write_req` (DMA). On collision, **HOST wins**; NORM is dropped, and `write_conflict[bank]` is asserted for that cycle.
  - **Port 1 (Read / MXU):** Dedicated read port driven by `read_enable` and `read_address` supplying activations to the Matrix Multiply Unit (MXU).

#### OpenRAM Configuration: `sram_ub_bank_4096x8.py`
```python
# OpenRAM Configuration: Single Unified Buffer Bank (1 of 8)
# Sized according to UnifiedBuffer.v: 4096 words x 8 bits (4 KiB)
word_size = 8
num_words = 4096
num_banks = 1

# 8 words per row balances layout aspect ratio (512 rows x 64 bitlines)
words_per_row = 8

# PDK and Corner
tech_name = "sky130"
nominal_corner_only = True

# Dual-Port: Port 0 (Write/Arbiter), Port 1 (Read/MXU)
num_rw_ports = 1
num_r_ports = 1
num_w_ports = 0

output_name = "sky130_sram_4096x8_1rw1r"
output_path = "./macro_outputs/sram_ub_4096x8_1rw1r"

check_lvsdrc = True
analytical_delay = False
```

---

### 2.2 Accumulator Memory (ACC) Sizing
* **Total Capacity:** $8\text{ KiB} = 8,192\text{ bytes} = 2,048\text{ words} \times 32\text{ bits}$.
* **Parallelism:** 8 independent banks dedicated to the 8 accumulator/PE columns.
* **Bank Dimensions:** $256\text{ words} \times 32\text{ bits} = 1\text{ KiB}$ per bank.

#### OpenRAM Configuration: `sram_acc_256x32.py`
```python
# OpenRAM Configuration: Accumulator RAM Bank (1 of 8)
word_size = 32
num_words = 256
num_banks = 1
words_per_row = 4

tech_name = "sky130"
nominal_corner_only = True

num_rw_ports = 1
num_r_ports = 0
num_w_ports = 0

output_name = "sky130_sram_256x32"
output_path = "./macro_outputs/sram_acc_256x32"

check_lvsdrc = True
analytical_delay = False
```

---

### 2.3 RTL De-Behavioralization (`UnifiedBuffer.v`)
Physical SRAM macros do not include power-on initialization hardware. The behavioral `for` loop zeroing `mem[i]` on reset must be removed from `UnifiedBuffer.v` so it does not synthesize into thousands of flip-flops.

```systemverilog
// Replace behavioral array with physical OpenRAM hard macro instances
genvar bank;
generate
    for (bank = 0; bank < NUM_BANKS; bank = bank + 1) begin : sram_banks

        // Slice per-bank write address, data, and requests
        wire [ADDR_WIDTH-1:0] norm_addr = norm_write_address[bank*ADDR_WIDTH +: ADDR_WIDTH];
        wire [7:0]            norm_data = norm_write_data   [bank*8 +: 8];
        wire                  norm_req  = norm_write_req[bank];

        wire [ADDR_WIDTH-1:0] host_addr = host_write_address[bank*ADDR_WIDTH +: ADDR_WIDTH];
        wire [7:0]            host_data = host_write_data   [bank*8 +: 8];
        wire                  host_req  = host_write_req[bank];

        // Slice per-bank read address
        wire [ADDR_WIDTH-1:0] rd_addr   = read_address[bank*ADDR_WIDTH +: ADDR_WIDTH];

        // Priority Arbitration: HOST wins on conflict
        wire bank_write_en   = norm_req | host_req;
        wire [ADDR_WIDTH-1:0] bank_wr_addr = host_req ? host_addr : norm_addr;
        wire [7:0]            bank_wr_data = host_req ? host_data : norm_data;
        assign write_conflict[bank]        = norm_req & host_req;

        // Hard Macro Instantiation (Active-low enables: csb, web)
        sky130_sram_4096x8_1rw1r bank_macro_inst (
            // Port 0: Write channel from arbiter
            .clk0  (clock),
            .csb0  (~bank_write_en),
            .web0  (~bank_write_en),
            .addr0 (bank_wr_addr),
            .din0  (bank_wr_data),
            .dout0 (),

            // Port 1: Read channel to MXU
            .clk1  (clock),
            .csb1  (~read_enable),
            .addr1 (rd_addr),
            .dout1 (read_data[bank*8 +: 8])
        );

    end
endgenerate
```

---

## 3. Floorplan & Physical Design Specification

```
+-------------------------------------------------------------------+
|  UB0      UB1      UB2      UB3      UB4      UB5      UB6      UB7|  <- Top Edge: 8x UB Macros
| [4Kx8]   [4Kx8]   [4Kx8]   [4Kx8]   [4Kx8]   [4Kx8]   [4Kx8]   [4Kx8]|     (~8 um halo spacing)
+-------------------------------------------------------------------+
|                                                                   |
|                    Standard Cell Core Region                      |
|       * FSM Sequencer & Matrix Weight Load Controller             |
|       * 8x8 Processing Element (PE) Systolic Core                 |  <- Max density cap: 0.65
|       * ReLU -> Normalization -> Quantization Datapath            |
|                                                                   |
+-------------------------------------------------------------------+
|  ACC0     ACC1     ACC2     ACC3     ACC4     ACC5     ACC6     ACC7|  <- Bottom Edge: 8x ACC Macros
|[256x32] [256x32] [256x32] [256x32] [256x32] [256x32] [256x32] [256x32]|     (Aligned to PE columns)
+-------------------------------------------------------------------+
```

### Floorplan Guidelines
1. **Macro Halos:** Apply a uniform $\approx 8\,\mu\text{m}$ placement and routing halo around all 16 memory blocks to prevent standard cell placement overlaps and bitline pin congestion.
2. **Standard Cell Utilization:** Limit target standard cell core density to $\le 0.65$. Systolic datapaths require extensive wiring for pipeline buses; lower density preserves routing tracks and eliminates pin accessibility shorts.
3. **Power Distribution Network (PDN):**
   * Top-level power straps on upper metal layers (e.g., `met4` and `met5`).
   * Continuous macro power rings around all memory macros, directly strapped to internal power grids.
   * Standard cell rails on `met1` tapped to intermediate vertical power stripes.

---

## 4. 10-Week Execution Roadmap

### Week 1: Thin-Spike GDS & Macro Kickoff
* **Objective:** Establish the entire RTL-to-GDSII flow using an empty/stub gate-level netlist to shake out PDK and layer-map bugs.
* **Key Tasks:**
  1. Set up and run a dummy module through OpenROAD/ORFS to stream out a preliminary GDS.
  2. Verify that Magic, KLayout, and Netgen run DRC and LVS checks cleanly on the thin spike.
  3. Start OpenRAM compilation for the UB ($4096 \times 8$) and ACC ($256 \times 32$) macros.
* **Signoff Gate:** Successful dummy GDS stream-out with valid layer mappings and no toolchain environment errors.

### Week 2: Macro Signoff & RTL De-Behavioralization
* **Objective:** Finalize physical SRAM views and wire them into the synthesized RTL hierarchy.
* **Key Tasks:**
  1. Complete OpenRAM builds: verify zero DRC/LVS violations on standalone macro GDS/LEF views.
  2. Freeze macro collateral: `.lef` (layout abstract), `.lib` (timing models), `.gds` (mask data), and `.v` (simulation wrappers).
  3. Remove behavioral memory initialization loops from `UnifiedBuffer.v` and `Accumulator.v`.
  4. Instantiate physical macro wrappers inside the banking generate blocks.
* **Signoff Gate:** RTL simulation passes on the updated banking wrapper with macro models.

### Week 3: Verification, SDC & Synthesis Equivalence
* **Objective:** Reach full functional signoff and synthesize the gate-level netlist.
* **Key Tasks:**
  1. Execute a directed-random SystemVerilog regression test suite covering:
     * Full execution sequence: `LOAD -> MATMUL -> ACTIVATE -> STORE`.
     * Edge cases: Mid-operation resets, consecutive pipeline hazards, and simultaneous Host/Norm write collisions.
     * SystemVerilog Assertions (SVA) for handshake validation and buffer limits.
  2. Formulate constraints in `tpu.sdc`:
     * Target frequency with $\approx 150\,\text{ps}$ clock uncertainty and setup margin.
     * Input/output arrival and drive delays on external interfaces.
  3. Run logic synthesis with Yosys.
  4. Run formal equivalence verification using `eqy` comparing RTL against synthesized gates.
* **Signoff Gate:** Worst Negative Slack (WNS) $\ge +10\%$ of clock cycle; formal equivalence cleanly verified via `eqy`.

### Week 4: Floorplanning, Macro Placement & PDN
* **Objective:** Fix the die boundary, place the 16 memory macros, and build a robust power grid.
* **Key Tasks:**
  1. Define die aspect ratio and standard cell core boundaries.
  2. Place the 8 UB macros along the top boundary and the 8 ACC macros along the bottom boundary.
  3. Set $\approx 8\,\mu\text{m}$ placement/routing blockage halos around each macro.
  4. Configure and synthesize the PDN straps, power rings, and standard cell rail connections.
* **Signoff Gate:** Clean PDN continuity check; zero macro pin overlap violations.

### Week 5: Standard Cell Placement & Congestion Tuning
* **Objective:** Place standard cells with zero design rule overlaps and controlled routing congestion.
* **Key Tasks:**
  1. Run global placement with target cell density capped at $\le 0.65$.
  2. Run detailed placement with legal cell alignment.
  3. Review global routing congestion heatmaps. If localized routing hotspots exceed threshold limits, add routing blockage buffers between the PE array and memory banks.
  4. Run pre-CTS static timing analysis (STA) to confirm zero critical high-fanout net violations.
* **Signoff Gate:** Global routing congestion overflow $\le 0.1\%$; pre-CTS timing paths close without major hold violations.

### Week 6: Clock Tree Synthesis (CTS) & Skew Matching
* **Objective:** Synthesize a balanced clock tree across all 64 PEs and 16 memory blocks.
* **Key Tasks:**
  1. Run CTS with targeted clock buffers/inverters.
  2. Balance clock path delays across all systolic array registers to ensure minimal skew between adjacent matrix cells.
  3. Run post-CTS hold-slack repair and buffer legalization.
* **Signoff Gate:** Total clock skew $< 100\,\text{ps}$ across all PEs; post-CTS WNS and TNS $\ge 0$.

### Week 7: Detailed Routing & Antenna Repair
* **Objective:** Complete physical wire routing with zero electrical opens, shorts, or antenna violations.
* **Key Tasks:**
  1. Execute global and detailed routing using TritonRoute.
  2. Run automated antenna checking on all signal nets.
  3. Insert diode protection cells to mitigate process-induced gate-oxide breakdown on long routes.
  4. Legalize and re-route affected nets.
* **Signoff Gate:** Detailed routing finishes with 0 DRC markers, 0 open nets, and 0 antenna violations.

### Week 8: Full-Chip Physical Signoff (DRC, LVS, IR-Drop)
* **Objective:** Verify silicon integrity at the mask level.
* **Key Tasks:**
  1. Stream out full-chip GDSII/OASIS, merging standard cell and OpenRAM GDS blocks.
  2. Run signoff DRC with Magic/KLayout against foundry design rules: must achieve **DRC = 0**.
  3. Extract full SPICE netlist and run LVS with Netgen against the post-synthesis gate netlist: must achieve **LVS = 0**.
  4. Dump VCD switching activity from a full matrix multiplication run.
  5. Run dynamic IR-drop analysis in PDNSim using the VCD activity.
* **Signoff Gate:** Verified **DRC = 0**, **LVS = 0**, and dynamic $V_{\text{drop}} < 5\%$ of $V_{\text{DD}}$.

### Week 9: Extraction & Gate-Level Simulation (GLS)
* **Objective:** Validate real-world timing using post-layout extracted parasitics.
* **Key Tasks:**
  1. Perform full-chip RC extraction to produce detailed SPEF models.
  2. Run multi-corner signoff STA (slow-slow, typical-typical, fast-fast) and export SDF timing models.
  3. Set up and run SDF-annotated gate-level simulations in Icarus Verilog or Verilator.
  4. Verify that complete inference operations (`LOAD -> MATMUL -> ACTIVATE -> STORE`) complete without timing hazards ($X$ propagation) or setup/hold violations.
* **Signoff Gate:** 100% test pass on SDF-annotated gate-level simulation across temperature and voltage corners.

### Week 10: Tapeout Package & Archive
* **Objective:** Assemble tapeout collateral and freeze reproduction artifacts.
* **Key Tasks:**
  1. Generate final archive directory with structured deliverables.
  2. Pin all tool commits, container images, and script versions.
  3. Compile documentation and product datasheet ($F_{\text{max}}$, latency, power, core area, pin map).
* **Signoff Gate:** Complete, reproducible tapeout package ready for fabrication submission.

---

## 5. Tapeout Release Directory Structure

Upon completion, all final artifacts must be stored under the following directory layout:

```
release_v1.0/
├── gds/
│   ├── tpu_top.gds                # Final mask stream
│   └── tpu_top.oasis              # Compressed mask stream
├── def/
│   ├── tpu_top_routed.def         # Detailed routed physical placement
│   └── tpu_top_floorplan.def      # Base macro floorplan
├── spice/
│   └── tpu_top_extracted.spice    # Extracted transistor-level netlist
├── reports/
│   ├── drc_signoff.log            # Magic DRC check clean log
│   ├── lvs_signoff.log            # Netgen LVS match report
│   ├── sta_signoff_corners.rpt    # Multi-corner timing summary
│   ├── ir_drop_heatmap.png        # Dynamic power drop report
│   └── gls_sdf_simulation.log     # Back-annotated simulation log
├── timing/
│   ├── tpu_top.spef               # Extracted parasitic model
│   └── tpu_top.sdf                # Back-annotated timing delay file
└── docs/
    └── tpu_v1_datasheet.pdf       # Performance metrics & memory mapping
```

---

## 6. Risk Register & Mitigation Strategy

| Risk Identified | Severity | Probability | Preventive Action & Mitigation |
| :--- | :--- | :--- | :--- |
| **OpenRAM compile failure on large arrays** | High | Medium | Keep macros $\le 4\text{ KiB}$ ($4096 \times 8$). Use 8 distributed banks rather than attempting a single monolithic $4096 \times 32$ block. |
| **SRAM GDS/LEF layer mismatch in ORFS** | High | High | Run Week-1 Thin Spike early to uncover layer mapping differences between OpenRAM and OpenROAD. |
| **Routing congestion across PE array** | Medium | High | Limit placement density to 0.65; insert $\approx 8\,\mu\text{m}$ macro halos; allocate wide routing channels between PEs and memory pins. |
| **Clock skew violations across 64 PEs** | High | Medium | Constrain CTS skew targets strictly ($< 100\,\text{ps}$); insert balanced symmetrical clock trees with automated hold buffers. |
| **Dynamic IR drop along central PEs** | Medium | Medium | Implement dual upper-metal power straps (M5/M6) and dense vertical tap lines connected to macro power rings. |