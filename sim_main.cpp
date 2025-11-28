#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"  // For VCD waveform output
#include <iostream>

int main(int argc, char** argv) {
    // 1. Initialize Verilator context
    Verilated::commandArgs(argc, argv);
    
    // 2. Instantiate our "CPU" (The Verilog module)
    Vtop* top = new Vtop;

    // 3. Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("waveform.vcd");

    // 4. Reset Sequence
    top->clk = 0;
    top->reset = 1;
    top->eval();
    tfp->dump(0);  // Dump initial state
    top->reset = 0;

    printf("Starting Simulation...\n");
    printf("CYCLE | PC       | ALU_RESULT | COMMENT\n");
    printf("------------------------------------------\n");

    // 5. The Main Clock Loop
    int time_counter = 0;
    for (int i = 0; i < 10; i++) {
        
        // --- Rising Edge ---
        top->clk = 1;
        top->eval();
        time_counter++;
        tfp->dump(time_counter);  // Dump after rising edge

        // PRINT YOUR DATA HERE
        printf("%5d | %08x | %08x   | ", i, top->pc, top->alu_result);

        // Logic to print comments based on state
        if (top->pc == 0) printf("Booting...");
        else if (top->pc == 4) printf("Fetching Instr 2");
        else printf("Running...");
        
        printf("\n");

        // --- Falling Edge ---
        top->clk = 0;
        top->eval();
        time_counter++;
        tfp->dump(time_counter);  // Dump after falling edge
    }

    // 6. Cleanup
    tfp->close();
    delete tfp;
    delete top;
    
    printf("\nSimulation complete. Waveform saved to waveform.vcd\n");
    printf("View with: gtkwave waveform.vcd\n");
    
    return 0;
}
