#!/bin/bash

# 1. Verilate the design with tracing enabled
# --cc: Create C++ output
# --exe: Link with our sim_main.cpp
# --trace: Enable VCD waveform generation
# --build: Automatically build after verilating
verilator --cc --exe --build --trace -j 0 top.v sim_main.cpp

# 2. Run the binary
./obj_dir/Vtop

# 3. Optional: Launch GTKWave automatically
# Uncomment the line below if you want waveforms to open automatically
# gtkwave waveform.vcd &
