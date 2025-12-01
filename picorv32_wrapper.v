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
    output mem_instr  // <-- ADD THIS LINE
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
    .mem_instr(mem_instr)  // <-- AND THIS LINE
);

endmodule
