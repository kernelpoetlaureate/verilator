module picorv32_wrapper (
    input clk,
    input resetn,
    output trap,
    output mem_valid,
    input  mem_ready,
    output [31:0] mem_addr,
    output [31:0] mem_wdata,
    output [3:0]  mem_wstrb,
    input  [31:0] mem_rdata,
    output mem_instr,
    
    // DEBUG: Register file visibility
    output [31:0] debug_x1,
    output [31:0] debug_x2,
    output [31:0] debug_x3,
    
    // DEBUG: Decoder state - instruction type flags
    output dbg_is_alu_reg_imm,
    output dbg_is_alu_reg_reg,
    output dbg_is_load,
    output dbg_is_store,
    output dbg_is_branch,
    output dbg_is_jump,
    
    // DEBUG: Specific instruction flags
    output dbg_instr_add,
    output dbg_instr_sub,
    output dbg_instr_addi,
    
    // DEBUG: ALU operands and result
    output [31:0] dbg_reg_op1,
    output [31:0] dbg_reg_op2,
    output [31:0] dbg_reg_out,
    output [31:0] dbg_alu_out,
    
    // DEBUG: Decoded instruction fields
    output [4:0] dbg_decoded_rd,
    output [4:0] dbg_decoded_rs1,
    output [4:0] dbg_decoded_rs2,
    output [31:0] dbg_decoded_imm,
    
    // DEBUG: CPU state machine
    output [7:0] dbg_cpu_state,
    output [31:0] dbg_reg_pc
);

picorv32 #(
    .ENABLE_COUNTERS(1),
    .ENABLE_COUNTERS64(1),
    .ENABLE_REGS_16_31(1),
    .ENABLE_REGS_DUALPORT(1),
    .BARREL_SHIFTER(0),
    .TWO_STAGE_SHIFT(1),
    .CATCH_MISALIGN(1),
    .CATCH_ILLINSN(1)
) picorv32_core (
    .clk(clk),
    .resetn(resetn),
    .trap(trap),
    .mem_valid(mem_valid),
    .mem_ready(mem_ready),
    .mem_addr(mem_addr),
    .mem_wdata(mem_wdata),
    .mem_wstrb(mem_wstrb),
    .mem_rdata(mem_rdata),
    .mem_instr(mem_instr)
);

// Expose internal registers for debugging
assign debug_x1 = picorv32_core.cpuregs[1];
assign debug_x2 = picorv32_core.cpuregs[2];
assign debug_x3 = picorv32_core.cpuregs[3];

// Expose decoder state - instruction type classification
assign dbg_is_alu_reg_imm = picorv32_core.is_alu_reg_imm;
assign dbg_is_alu_reg_reg = picorv32_core.is_alu_reg_reg;
assign dbg_is_load = picorv32_core.is_lb_lh_lw_lbu_lhu;
assign dbg_is_store = picorv32_core.is_sb_sh_sw;
assign dbg_is_branch = picorv32_core.is_beq_bne_blt_bge_bltu_bgeu;
assign dbg_is_jump = picorv32_core.instr_jal || picorv32_core.instr_jalr;

// Expose specific instruction decoder flags
assign dbg_instr_add = picorv32_core.instr_add;
assign dbg_instr_sub = picorv32_core.instr_sub;
assign dbg_instr_addi = picorv32_core.instr_addi;

// Expose ALU operands and results
assign dbg_reg_op1 = picorv32_core.reg_op1;
assign dbg_reg_op2 = picorv32_core.reg_op2;
assign dbg_reg_out = picorv32_core.reg_out;
assign dbg_alu_out = picorv32_core.alu_out;

// Expose decoded instruction fields
assign dbg_decoded_rd = picorv32_core.decoded_rd;
assign dbg_decoded_rs1 = picorv32_core.decoded_rs1;
assign dbg_decoded_rs2 = picorv32_core.decoded_rs2;
assign dbg_decoded_imm = picorv32_core.decoded_imm;

// Expose CPU state machine
assign dbg_cpu_state = picorv32_core.cpu_state;
assign dbg_reg_pc = picorv32_core.reg_pc;

endmodule
