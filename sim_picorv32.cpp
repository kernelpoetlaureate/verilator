#include "Vpicorv32_wrapper.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

uint32_t memory[256] = {
    0x00500113,  // 0x00: addi x2, x0, 5      (x2 = 5)
    0x00a00193,  // 0x04: addi x3, x0, 10     (x3 = 10)
    0x003100b3,  // 0x08: add  x1, x2, x3     (x1 = 15)
    0x40110133,  // 0x0c: sub  x2, x2, x1     (x2 = -10)
    0x002081b3,  // 0x10: add  x3, x1, x2     (x3 = 5)
    0x00000013,  // 0x14: nop
    0x00000013,  // 0x18: nop
    0x0000006f   // 0x1c: jal x0, 0 (infinite loop)
};

// Shadow register file to track architectural state
uint32_t shadow_regs[32] = {0};

// Decode and print instruction
void decode_instruction(uint32_t pc, uint32_t instr) {
    uint32_t opcode = instr & 0x7F;
    uint32_t rd = (instr >> 7) & 0x1F;
    uint32_t rs1 = (instr >> 15) & 0x1F;
    uint32_t rs2 = (instr >> 20) & 0x1F;
    uint32_t funct3 = (instr >> 12) & 0x7;
    uint32_t funct7 = (instr >> 25) & 0x7F;
    
    printf("  [PC=%08x] INSTR=%08x → ", pc, instr);
    
    if (instr == 0x00000013) {
        printf("nop\n");
    } else if (opcode == 0x13) { // I-type ALU
        int32_t imm = (int32_t)instr >> 20;
        if (funct3 == 0) {
            printf("addi x%d, x%d, %d\n", rd, rs1, imm);
            // Update shadow registers
            shadow_regs[rd] = shadow_regs[rs1] + imm;
            printf("  → x%d = x%d + %d = 0x%08x (%d)\n", 
                   rd, rs1, imm, shadow_regs[rd], (int32_t)shadow_regs[rd]);
        } else {
            printf("I-type alu (funct3=%d)\n", funct3);
        }
    } else if (opcode == 0x33) { // R-type ALU
        if (funct3 == 0 && funct7 == 0) {
            printf("add x%d, x%d, x%d\n", rd, rs1, rs2);
            shadow_regs[rd] = shadow_regs[rs1] + shadow_regs[rs2];
            printf("  → x%d = x%d + x%d = 0x%08x + 0x%08x = 0x%08x (%d)\n", 
                   rd, rs1, rs2, shadow_regs[rs1], shadow_regs[rs2], 
                   shadow_regs[rd], (int32_t)shadow_regs[rd]);
        } else if (funct3 == 0 && funct7 == 0x20) {
            printf("sub x%d, x%d, x%d\n", rd, rs1, rs2);
            shadow_regs[rd] = shadow_regs[rs1] - shadow_regs[rs2];
            printf("  → x%d = x%d - x%d = 0x%08x - 0x%08x = 0x%08x (%d)\n", 
                   rd, rs1, rs2, shadow_regs[rs1], shadow_regs[rs2], 
                   shadow_regs[rd], (int32_t)shadow_regs[rd]);
        } else {
            printf("R-type alu (f3=%d, f7=%d)\n", funct3, funct7);
        }
    } else if (opcode == 0x03) { // Load
        int32_t imm = (int32_t)instr >> 20;
        printf("load x%d, %d(x%d)\n", rd, imm, rs1);
    } else if (opcode == 0x23) { // Store
        int32_t imm = ((instr >> 25) << 5) | ((instr >> 7) & 0x1F);
        printf("store x%d, %d(x%d)\n", rs2, imm, rs1);
    } else if (opcode == 0x6F) { // JAL
        printf("jal x%d, <offset>\n", rd);
    } else {
        printf("unknown (opcode=%02x)\n", opcode);
    }
    
    // Show register state after instruction
    printf("  → [x1=%08x x2=%08x x3=%08x]\n",
           shadow_regs[1], shadow_regs[2], shadow_regs[3]);
}

// Decode CPU state machine
const char* decode_cpu_state(uint8_t state) {
    switch(state) {
        case 0x80: return "TRAP";
        case 0x40: return "FETCH";
        case 0x20: return "LD_RS1";
        case 0x10: return "LD_RS2";
        case 0x08: return "EXEC";
        case 0x04: return "SHIFT";
        case 0x02: return "STMEM";
        case 0x01: return "LDMEM";
        default: return "UNKNOWN";
    }
}

// Print hardware decoder state
void print_hardware_state(Vpicorv32_wrapper* cpu, int cycle) {
    printf("  [HW State @ Cycle %3d]\n", cycle);
    printf("    CPU_STATE: %s (0x%02x)\n", 
           decode_cpu_state(cpu->dbg_cpu_state), cpu->dbg_cpu_state);
    printf("    PC: 0x%08x\n", cpu->dbg_reg_pc);
    
    // Show decoder flags
    printf("    Decoder: ");
    if (cpu->dbg_is_alu_reg_imm) printf("ALU_IMM ");
    if (cpu->dbg_is_alu_reg_reg) printf("ALU_REG ");
    if (cpu->dbg_is_load) printf("LOAD ");
    if (cpu->dbg_is_store) printf("STORE ");
    if (cpu->dbg_is_branch) printf("BRANCH ");
    if (cpu->dbg_is_jump) printf("JUMP ");
    printf("\n");
    
    // Show specific instruction flags
    if (cpu->dbg_instr_add || cpu->dbg_instr_sub || cpu->dbg_instr_addi) {
        printf("    Instruction: ");
        if (cpu->dbg_instr_add) printf("ADD ");
        if (cpu->dbg_instr_sub) printf("SUB ");
        if (cpu->dbg_instr_addi) printf("ADDI ");
        printf("\n");
    }
    
    // Show decoded fields
    printf("    Decoded: rd=x%d, rs1=x%d, rs2=x%d, imm=%d (0x%x)\n",
           cpu->dbg_decoded_rd, cpu->dbg_decoded_rs1, cpu->dbg_decoded_rs2,
           (int32_t)cpu->dbg_decoded_imm, cpu->dbg_decoded_imm);
    
    // Show ALU operands and result
    printf("    ALU: OP1=0x%08x (%d), OP2=0x%08x (%d) → OUT=0x%08x (%d)\n",
           cpu->dbg_reg_op1, (int32_t)cpu->dbg_reg_op1,
           cpu->dbg_reg_op2, (int32_t)cpu->dbg_reg_op2,
           cpu->dbg_alu_out, (int32_t)cpu->dbg_alu_out);
    
    printf("    Result: REG_OUT=0x%08x (%d)\n",
           cpu->dbg_reg_out, (int32_t)cpu->dbg_reg_out);
}


int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    Vpicorv32_wrapper* cpu = new Vpicorv32_wrapper;

    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    cpu->trace(tfp, 99);
    tfp->open("picorv32_wave.vcd");

    cpu->clk = 0;
    cpu->resetn = 0;
    cpu->mem_ready = 0;
    cpu->mem_rdata = 0;

    cpu->eval();
    tfp->dump(0);

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
    
    cpu->resetn = 1;
    
    printf("\n=== PicoRV32 Instruction Trace ===\n\n");
    
    uint32_t last_pc = 0xFFFFFFFF;
    uint32_t last_instr = 0;
    int instr_count = 0;
    
    for (int cycle = 0; cycle < 100; cycle++) {
        cpu->clk = 1;
        
        // Memory handshake
        if (cpu->mem_valid) {
            uint32_t word_addr = cpu->mem_addr >> 2;
            
            if (word_addr < 256) {
                cpu->mem_rdata = memory[word_addr];
            } else {
                cpu->mem_rdata = 0x00000013;
            }
            
            cpu->mem_ready = 1;
            
            // Track instruction fetches (only once per unique PC)
            if (cpu->mem_instr && cpu->mem_addr != last_pc) {
                last_pc = cpu->mem_addr;
                last_instr = cpu->mem_rdata;
                instr_count++;
                
                printf("\n--- Instruction #%d (Cycle %d) ---\n", instr_count, cycle);
                decode_instruction(cpu->mem_addr, cpu->mem_rdata);
            }
            
        } else {
            cpu->mem_ready = 0;
            cpu->mem_rdata = 0;
        }
        
        cpu->eval();
        time_counter++;
        tfp->dump(time_counter);
        
        // Show cycle-by-cycle detail for first few instructions
        if (instr_count <= 6) {
            printf("  [Cycle %3d] VALID=%d READY=%d ADDR=%08x DATA=%08x INSTR=%d\n",
                   cycle, cpu->mem_valid, cpu->mem_ready, 
                   cpu->mem_addr, cpu->mem_rdata, cpu->mem_instr);
            
            // Print hardware state every cycle for detailed view
            print_hardware_state(cpu, cycle);
        }

        cpu->clk = 0;
        cpu->eval();
        time_counter++;
        tfp->dump(time_counter);
        
        if (cpu->trap) {
            printf("\n!!! CPU TRAPPED at cycle %d !!!\n", cycle);
            break;
        }
        
        // Stop after infinite loop starts repeating
        if (instr_count > 10 && cpu->mem_addr == 0x1c) {
            printf("\n... (infinite loop detected, stopping) ...\n");
            break;
        }
    }

    printf("\n=== Simulation Complete ===\n");
    printf("Total instructions executed: %d\n", instr_count);

    tfp->close();
    delete tfp;
    delete cpu;
    
    return 0;
}
