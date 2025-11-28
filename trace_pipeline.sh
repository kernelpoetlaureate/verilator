#!/bin/bash

echo "=== COMPLETE INSTRUCTION PIPELINE TRACE ==="
echo ""
echo "Tracing instruction: addi x3, x0, 10 (0x00a00193)"
echo ""
echo "Stage | Time | Signal | Value | Description"
echo "------|------|--------|-------|------------------------------------------"

awk '
/^#/ { time = substr($0,2) }

# Memory interface
/^b[01x]+ <$/ { pc = $1 }           # PC address
/^b[01x]+ J"$/ { mem_valid = $1 }   # CPU requests memory
/^b[01x]+ K"$/ { mem_ready = $1 }   # Memory responds
/^b[01x]+ M"$/ { mem_data = $1 }    # Data from memory

# Instruction decode
/^b[01x]+ A$/ { instr = $1 }        # Instruction register
/^b[01x]+ L!$/ { decoded_imm = $1 } # Decoded immediate
/^b[01x]+ r!$/ { decoded_rd = $1 }  # Decoded destination reg
/^b[01x]+ s!$/ { decoded_rs1 = $1 } # Decoded source reg 1

# Execute (ALU)
/^b[01x]+ 2$/ { alu_op1 = $1 }      # ALU input 1
/^b[01x]+ 3$/ { alu_op2 = $1 }      # ALU input 2
/^b[01x]+ 6"$/ { alu_out = $1 }     # ALU result

# Writeback
/^b[01x]+ L$/ { x3_val = $1 }       # Register x3 value
/^1k!/ { reg_wen = 1 }              # Register write enable
/^0k!/ { reg_wen = 0 }

/^1G"/ {  # On each clock rising edge
    if (time >= 20 && time <= 35) {
        # Convert binaries to decimals
        if (pc != "") {
            sub(/^b/,"",pc); vpc=0; for(i=1;i<=length(pc);i++) vpc=vpc*2+substr(pc,i,1)
        }
        if (mem_data != "") {
            sub(/^b/,"",mem_data); vmd=0; for(i=1;i<=length(mem_data);i++) vmd=vmd*2+substr(mem_data,i,1)
        }
        if (instr != "") {
            sub(/^b/,"",instr); vi=0; for(i=1;i<=length(instr);i++) vi=vi*2+substr(instr,i,1)
        }
        if (decoded_imm != "") {
            sub(/^b/,"",decoded_imm); vimm=0; for(i=1;i<=length(decoded_imm);i++) vimm=vimm*2+substr(decoded_imm,i,1)
        }
        if (alu_op2 != "") {
            sub(/^b/,"",alu_op2); vo2=0; for(i=1;i<=length(alu_op2);i++) vo2=vo2*2+substr(alu_op2,i,1)
        }
        if (alu_out != "") {
            sub(/^b/,"",alu_out); vao=0; for(i=1;i<=length(alu_out);i++) vao=vao*2+substr(alu_out,i,1)
        }
        if (x3_val != "") {
            sub(/^b/,"",x3_val); vx3=0; for(i=1;i<=length(x3_val);i++) vx3=vx3*2+substr(x3_val,i,1)
        }
        
        # Print pipeline stages
        if (time == 21) {
            printf "FETCH | %4s | PC     | 0x%04x | Program Counter points to instruction\n", time, vpc
        }
        if (time == 23 && vmd > 0) {
            printf "FETCH | %4s | MEM    | 0x%08x | Memory provides instruction word\n", time, vmd
            printf "DECODE| %4s | INSTR  | 0x%08x | Instruction loaded into IR\n", time, vi
            printf "DECODE| %4s | IMM    | %6d | Immediate extracted: bits[31:20]\n", time, vimm
        }
        if (time == 25) {
            printf "EXEC  | %4s | OP2    | %6d | Immediate routed to ALU input\n", time, vo2
            printf "EXEC  | %4s | ALU    | %6d | ALU computes: 0 + 10 = 10\n", time, vao
        }
        if (time == 27) {
            printf "WBACK | %4s | WEN    | %6d | Write Enable asserted\n", time, reg_wen
        }
        if (time == 29) {
            printf "WBACK | %4s | x3     | %6d | Value written to register x3!\n", time, vx3
        }
    }
}
' picorv32_wave.vcd

echo ""
echo "=== PIPELINE SUMMARY ==="
echo "Time 21-23: FETCH    - Read instruction from memory"
echo "Time 23-25: DECODE   - Extract immediate value from instruction bits"
echo "Time 25-27: EXECUTE  - ALU computes result"
echo "Time 27-29: WRITEBACK- Store result in register file"
echo ""
echo "Total: 8 picoseconds (4 clock cycles) from fetch to register write"
