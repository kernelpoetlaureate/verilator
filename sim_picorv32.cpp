#include "Vpicorv32.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include "Vpicorv32_wrapper.h"


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
    printf("CYCLE | RESETN | TRAP | MEM_VALID | MEM_ADDR\n");
    printf("---------------------------------------------\n");

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
    
// Run for 100 cycles
for (int i = 0; i < 100; i++) {
    // Simple program
    static uint32_t program[] = {
        0x00500113,  // addi x2, x0, 5
        0x00a00193,  // addi x3, x0, 10
        0x003101b3,  // add  x3, x2, x3
        0x00000013,  // nop
        0x00000013,
        0x00000013
    };
    
    // Rising edge
    cpu->clk = 1;
    cpu->mem_ready = 1;
    
    // Feed instruction based on PC
    uint32_t index = cpu->mem_addr / 4;
    if (index < 6) {
        cpu->mem_rdata = program[index];
    } else {
        cpu->mem_rdata = 0x00000013;
    }
    
    cpu->eval();
    time_counter++;
    tfp->dump(time_counter);
    
    // ... rest stays the same


        // Print state
        printf("%5d | %6d | %4d | %9d | %08x\n", 
               i, cpu->resetn, cpu->trap, 
               cpu->mem_valid, cpu->mem_addr);

        // Falling edge
        cpu->clk = 0;
        cpu->eval();
        time_counter++;
        tfp->dump(time_counter);
        
        // Stop if CPU traps
        if (cpu->trap) {
            printf("\nCPU trapped at cycle %d!\n", i);
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
