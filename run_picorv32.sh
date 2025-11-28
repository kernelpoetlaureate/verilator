#!/bin/bash

# Verilate picorv32 wrapper with tracing
verilator --cc --exe --build --trace -j 0 \
    -Wno-fatal -Wno-WIDTH -Wno-UNUSED \
    picorv32_wrapper.v picorv32.v sim_picorv32.cpp \
    --top-module picorv32_wrapper

# Run the simulation
./obj_dir/Vpicorv32_wrapper
