module top (
    input clk,
    input reset,
    output reg [31:0] pc,
    output reg [31:0] alu_result
);

    // Internal "wires"
    reg [31:0] instruction;
    
    // 1. Simple Program Counter Logic
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc <= 0;
            instruction <= 0;
        end else begin
            pc <= pc + 4;
            // Fake instruction fetch: just making up data based on PC
            // In real life, this comes from an Instruction Memory array
            instruction <= (pc == 0) ? 32'h00500113  // ADDI x2, x0, 5
                         : (pc == 4) ? 32'h00a00193  // ADDI x3, x0, 10
                         : 32'h00000000;             // NOP
        end
    end

    // 2. Simple ALU (Combinational Logic)
    // Let's pretend we are just adding PC + 42 for this demo
    always @(*) begin
        alu_result = pc + 42;
    end

endmodule
