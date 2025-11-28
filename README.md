# Verilator Simulation Project

This repository contains Verilator-based simulations for digital hardware designs, including a simple demonstration module and a complete **PicoRV32 RISC-V processor** implementation.

## Table of Contents

- [Overview](#overview)
- [Project Structure](#project-structure)
- [Prerequisites](#prerequisites)
- [Building and Running](#building-and-running)
  - [Simple Top Module Simulation](#simple-top-module-simulation)
  - [PicoRV32 Simulation](#picorv32-simulation)
- [Design Components](#design-components)
- [Waveform Viewing](#waveform-viewing)
- [Understanding the Output](#understanding-the-output)

---

## Overview

This project demonstrates hardware simulation using **Verilator**, a fast open-source Verilog/SystemVerilog simulator. It includes:

1. **Simple Top Module** (`top.v`) - A basic demonstration showing program counter and ALU logic
2. **PicoRV32 Processor** (`picorv32.v`) - A complete RISC-V RV32I processor core with wrapper for simulation

Both designs can be simulated with C++ testbenches and generate VCD waveform files for analysis.

---

## Project Structure

```
verilator/
├── picorv32.v              # PicoRV32 RISC-V processor core (3050 lines)
├── picorv32_wrapper.v      # Wrapper module for PicoRV32 simulation
├── top.v                   # Simple demonstration module
├── sim_main.cpp            # C++ testbench for top.v
├── sim_picorv32.cpp        # C++ testbench for PicoRV32
├── run.sh                  # Build and run script for top.v
├── run_picorv32.sh         # Build and run script for PicoRV32
├── obj_dir/                # Verilator generated files (build artifacts)
├── waveform.vcd            # Generated waveform from top.v simulation
├── picorv32_wave.vcd       # Generated waveform from PicoRV32 simulation
└── picorv32_wave.lxt       # Alternative waveform format
```

---

## Prerequisites

Before building and running the simulations, ensure you have the following installed:

- **Verilator** (version 4.0 or later)
  ```bash
  sudo apt-get install verilator
  ```

- **C++ Compiler** (g++ or clang++)
  ```bash
  sudo apt-get install build-essential
  ```

- **GTKWave** (for viewing waveforms)
  ```bash
  sudo apt-get install gtkwave
  ```

---

## Building and Running

### Simple Top Module Simulation

The `top.v` module demonstrates basic sequential logic with a program counter and combinational ALU.

**To build and run:**

```bash
chmod +x run.sh
./run.sh
```

**What it does:**
1. Verilates `top.v` with C++ testbench (`sim_main.cpp`)
2. Compiles the generated C++ code
3. Runs the simulation for 10 clock cycles
4. Generates `waveform.vcd`

**Expected output:**
```
Starting Simulation...
CYCLE | PC       | ALU_RESULT | COMMENT
------------------------------------------
    0 | 00000000 | 0000002a   | Booting...
    1 | 00000004 | 0000002e   | Fetching Instr 2
    2 | 00000008 | 00000032   | Running...
    ...
```

---

### PicoRV32 Simulation

The PicoRV32 is a complete RISC-V processor core supporting the RV32I instruction set.

**To build and run:**

```bash
chmod +x run_picorv32.sh
./run_picorv32.sh
```

**What it does:**
1. Verilates `picorv32_wrapper.v` and `picorv32.v` with testbench (`sim_picorv32.cpp`)
2. Suppresses common warnings (`-Wno-WIDTH`, `-Wno-UNUSED`)
3. Runs simulation for 100 cycles feeding NOP instructions
4. Generates `picorv32_wave.vcd`

**Expected output:**
```
Starting PicoRV32 Simulation...
CYCLE | RESETN | TRAP | MEM_VALID | MEM_ADDR
---------------------------------------------
    0 |      1 |    0 |         1 | 00000000
    1 |      1 |    0 |         0 | 00000000
    ...
```

---

## Design Components

### 1. `top.v` - Simple Demonstration Module

**Features:**
- 32-bit program counter that increments by 4 each cycle
- Fake instruction fetch based on PC value
- Simple combinational ALU (PC + 42)
- Reset logic

**Ports:**
- `clk` - Clock input
- `reset` - Synchronous reset
- `pc` - Program counter output
- `alu_result` - ALU computation result

---

### 2. `picorv32.v` - RISC-V Processor Core

**Features:**
- Full RV32I instruction set support
- Configurable features via parameters:
  - Counters (cycle/instruction counters)
  - Register file options (16 or 32 registers)
  - Compressed instruction support (RV32IC)
  - Multiplication/Division units
  - Interrupt support
- Memory interface with look-ahead signals
- PCPI (Pico Co-Processor Interface) for extensions
- Trace interface for debugging

**Key Parameters:**
- `ENABLE_COUNTERS` - Enable performance counters
- `ENABLE_REGS_16_31` - Enable full 32-register file
- `COMPRESSED_ISA` - Enable RV32C compressed instructions
- `ENABLE_MUL/DIV` - Enable multiply/divide instructions
- `ENABLE_IRQ` - Enable interrupt support

---

### 3. `picorv32_wrapper.v` - Simulation Wrapper

Simplifies the PicoRV32 interface for basic simulation:
- Ties off unused ports (PCPI, IRQ, write signals)
- Exposes only essential memory interface signals
- Configured with basic parameters for testing

---

### 4. C++ Testbenches

#### `sim_main.cpp`
- Instantiates `top` module
- Runs 10 clock cycles
- Prints PC and ALU results each cycle
- Generates VCD waveform

#### `sim_picorv32.cpp`
- Instantiates `picorv32_wrapper` module
- Implements reset sequence (5 cycles)
- Provides simple memory model (always ready, returns NOPs)
- Runs 100 cycles or until CPU traps
- Generates VCD waveform

---

## Waveform Viewing

After running simulations, view the generated waveforms:

**For top.v simulation:**
```bash
gtkwave waveform.vcd
```

**For PicoRV32 simulation:**
```bash
gtkwave picorv32_wave.vcd
```

**Useful signals to observe:**

*Top module:*
- `clk` - Clock signal
- `reset` - Reset signal
- `pc` - Program counter
- `alu_result` - ALU output

*PicoRV32:*
- `clk`, `resetn` - Clock and reset
- `mem_valid` - Memory request valid
- `mem_ready` - Memory ready response
- `mem_addr` - Memory address
- `mem_rdata` - Memory read data
- `trap` - CPU trap signal (error condition)

---

## Understanding the Output

### Top Module Behavior

The `top.v` module demonstrates basic sequential logic:
- PC starts at 0 and increments by 4 each cycle
- ALU always computes `PC + 42`
- At PC=0, it "fetches" instruction `0x00500113` (ADDI x2, x0, 5)
- At PC=4, it "fetches" instruction `0x00a00193` (ADDI x3, x0, 10)
- Other addresses return NOP

### PicoRV32 Behavior

The PicoRV32 simulation:
- Holds reset for 5 cycles
- Begins fetching instructions from address 0x00000000
- Memory always returns NOP instruction (0x00000013)
- `mem_valid` goes high when CPU requests memory
- CPU should not trap when fed valid NOPs

**If the CPU traps:**
- This indicates an error condition
- Check the waveform to see what caused the trap
- Verify memory interface timing

---

## Build System Details

### Verilator Command Line Options

**Used in `run.sh`:**
- `--cc` - Generate C++ output
- `--exe` - Create executable (link with testbench)
- `--build` - Automatically compile after verilating
- `--trace` - Enable VCD waveform generation
- `-j 0` - Use all available CPU cores for compilation

**Additional options in `run_picorv32.sh`:**
- `-Wno-fatal` - Don't treat warnings as errors
- `-Wno-WIDTH` - Suppress width mismatch warnings
- `-Wno-UNUSED` - Suppress unused signal warnings
- `--top-module` - Specify top-level module name

---

## Modifying the Simulations

### Changing Simulation Duration

Edit the loop count in the C++ testbench:

```cpp
// In sim_main.cpp or sim_picorv32.cpp
for (int i = 0; i < 100; i++) {  // Change 100 to desired cycle count
    ...
}
```

### Adding Custom Instructions

To test custom code on PicoRV32:

1. Modify `sim_picorv32.cpp` to load actual program memory
2. Replace the hardcoded NOP with real instruction data
3. Implement proper memory model (array-based or file-loaded)

Example:
```cpp
uint32_t memory[256] = {
    0x00500113,  // ADDI x2, x0, 5
    0x00a00193,  // ADDI x3, x0, 10
    0x003100b3,  // ADD  x1, x2, x3
    // ... more instructions
};

cpu->mem_rdata = memory[cpu->mem_addr >> 2];
```

---

## Troubleshooting

**Problem:** `verilator: command not found`
- **Solution:** Install Verilator: `sudo apt-get install verilator`

**Problem:** Build fails with "cannot find -lstdc++"
- **Solution:** Install build tools: `sudo apt-get install build-essential`

**Problem:** PicoRV32 simulation traps immediately
- **Solution:** Check reset timing and memory interface signals in waveform

**Problem:** No waveform generated
- **Solution:** Ensure `--trace` flag is used and `tfp->open()` is called in testbench

---

## Additional Resources

- **PicoRV32 Documentation:** [https://github.com/YosysHQ/picorv32](https://github.com/YosysHQ/picorv32)
- **Verilator Manual:** [https://verilator.org/guide/latest/](https://verilator.org/guide/latest/)
- **RISC-V Specification:** [https://riscv.org/specifications/](https://riscv.org/specifications/)
- **GTKWave Documentation:** [http://gtkwave.sourceforge.net/](http://gtkwave.sourceforge.net/)

---

## License

- **PicoRV32:** ISC License (Copyright Claire Xenia Wolf)
- **Simulation code:** Check individual file headers for licensing information

---

## Author Notes

This project serves as a learning resource for:
- Verilator-based hardware simulation
- RISC-V processor architecture
- Hardware/software co-simulation
- Waveform analysis and debugging

Feel free to modify and extend these simulations for your own learning and experimentation!
