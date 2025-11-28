module picorv32_wrapper (
    input clk,
    input resetn,
    output trap,
    output mem_valid,
    input mem_ready,
    output [31:0] mem_addr,
    input [31:0] mem_rdata
);

    // Instantiate PicoRV32 with simple memory interface
    picorv32 #(
        .ENABLE_COUNTERS(0),
        .ENABLE_REGS_16_31(1),
        .ENABLE_REGS_DUALPORT(1)
    ) cpu (
        .clk(clk),
        .resetn(resetn),
        .trap(trap),
        
        .mem_valid(mem_valid),
        .mem_instr(),
        .mem_ready(mem_ready),
        .mem_addr(mem_addr),
        .mem_wdata(),
        .mem_wstrb(),
        .mem_rdata(mem_rdata),
        
        .mem_la_read(),
        .mem_la_write(),
        .mem_la_addr(),
        .mem_la_wdata(),
        .mem_la_wstrb(),
        
        .pcpi_valid(),
        .pcpi_insn(),
        .pcpi_rs1(),
        .pcpi_rs2(),
        .pcpi_wr(1'b0),
        .pcpi_rd(32'b0),
        .pcpi_wait(1'b0),
        .pcpi_ready(1'b0),
        
        .irq(32'b0),
        .eoi()
    );

endmodule
