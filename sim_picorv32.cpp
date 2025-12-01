#include "Vpicorv32_wrapper.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

// Memory array - OUTSIDE main() so it persists
uint32_t memory[256] = {
    0x00500113,  // 0x00: addi x2, x0, 5      (x2 = 5)
    0x00a00193,  // 0x04: addi x3, x0, 10     (x3 = 10)
    0x003100b3,  // 0x08: add  x1, x2, x3     (x1 = x2 + x3 = 15)
    0x40110133,  // 0x0c: sub  x2, x2, x1     (x2 = x2 - x1 = 5 - 15 = -10)
    0x002081b3,  // 0x10: add  x3, x1, x2     (x3 = x1 + x2 = 15 + (-10) = 5)
    0x00000013,  // 0x14: nop
    0x00000013,  // 0x18: nop
    0x0000006f   // 0x1c: jal x0, 0 (infinite loop - jump to self)
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    Vpicorv32_wrapper* cpu = new Vpicorv32_wrapper;

    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    cpu->trace(tfp, 99);
    tfp->open("picorv32_wave.vcd");

    // Initialize all inputs
    cpu->clk = 0;
    cpu->resetn = 0;
    cpu->mem_ready = 0;
    cpu->mem_rdata = 0;

    cpu->eval();
    tfp->dump(0);

    printf("Starting PicoRV32 Simulation...\n");
    printf("CYCLE | RESETN | TRAP | VALID | READY | MEM_ADDR | MEM_RDATA | INSTR\n");
    printf("--------------------------------------------------------------------------\n");

    int time_counter = 0;
    
    // Hold reset for 5 cycles
    for (int i = 0; i < 5; i++) {
        cpu->clk = 1;
        cpu->eval();
        time_counter++;
        tfp->dump(time_counter);
        
        cpu->clk = 0;
        cpu->eval();
        time_counter++;
        tfp->dump(time_counter);
    }
    
    // Release reset
    cpu->resetn = 1;
    
    // Run for 200 cycles to see multiple instructions
    for (int cycle = 0; cycle < 200; cycle++) {
        // Rising edge
        cpu->clk = 1;
        
        // CRITICAL: Memory handshake protocol
        // Only respond when CPU requests memory access
        if (cpu->mem_valid) {
            uint32_t word_addr = cpu->mem_addr >> 2; // Convert byte address to word address
            
            if (word_addr < 256) {
                cpu->mem_rdata = memory[word_addr];
            } else {
                cpu->mem_rdata = 0x00000013; // Return NOP for out-of-bounds
            }
            
            cpu->mem_ready = 1; // Signal memory is ready
        } else {
            cpu->mem_ready = 0; // Don't assert ready when not requested
            cpu->mem_rdata = 0;
        }
        
        cpu->eval();
        time_counter++;
        tfp->dump(time_counter);
        
        // Print state every cycle
        printf("%5d | %6d | %4d | %5d | %5d | %08x | %08x | %5d\n", 
               cycle, 
               cpu->resetn, 
               cpu->trap, 
               cpu->mem_valid,
               cpu->mem_ready,
               cpu->mem_addr,
               cpu->mem_rdata,
               cpu->mem_instr);

        // Falling edge
        cpu->clk = 0;
        cpu->eval();
        time_counter++;
        tfp->dump(time_counter);
        
        // Stop if CPU traps
        if (cpu->trap) {
            printf("\n!!! CPU TRAPPED at cycle %d !!!\n", cycle);
            printf("Check for illegal instruction or misalignment\n");
            break;
        }
    }

    tfp->close();
    delete tfp;
    delete cpu;
    
    printf("\nSimulation complete. Waveform saved to picorv32_wave.vcd\n");
    printf("View with: gtkwave picorv32_wave.vcd\n");
    
    return 0;
}
