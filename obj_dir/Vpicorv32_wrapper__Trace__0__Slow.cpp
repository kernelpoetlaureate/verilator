// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpicorv32_wrapper__Syms.h"


VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_init_sub__TOP__0(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("picorv32_wrapper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"ENABLE_COUNTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+233,0,"ENABLE_COUNTERS64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+233,0,"ENABLE_REGS_16_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+233,0,"ENABLE_REGS_DUALPORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"LATCHED_MEM_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+233,0,"TWO_STAGE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"BARREL_SHIFTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"TWO_CYCLE_COMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"TWO_CYCLE_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"COMPRESSED_ISA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+233,0,"CATCH_MISALIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+233,0,"CATCH_ILLINSN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"ENABLE_PCPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"ENABLE_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"ENABLE_FAST_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"ENABLE_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"ENABLE_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+233,0,"ENABLE_IRQ_QREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+233,0,"ENABLE_IRQ_TIMER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"ENABLE_TRACE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+232,0,"REGS_INIT_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+234,0,"MASKED_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"LATCHED_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"PROGADDR_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"PROGADDR_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"STACKADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"mem_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"mem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"mem_la_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"mem_la_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"mem_la_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"mem_la_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"mem_la_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"pcpi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"pcpi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"pcpi_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"pcpi_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"pcpi_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"pcpi_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"pcpi_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"pcpi_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"irq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"eoi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"trace_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+20,0,"trace_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+238,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+239,0,"irq_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+240,0,"irq_buserror",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+241,0,"irqregs_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+241,0,"regfile_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+242,0,"regindex_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+232,0,"WITH_PCPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+243,0,"TRACE_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+245,0,"TRACE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+247,0,"TRACE_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+22,0,"count_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+24,0,"count_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+26,0,"reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"reg_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"reg_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"reg_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"reg_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"reg_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"next_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"dbg_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"dbg_insn_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+228,0,"dbg_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"dbg_mem_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"dbg_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"dbg_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"dbg_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"dbg_mem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"dbg_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"irq_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"irq_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"irq_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"irq_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cpuregs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+39+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+249,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+237,0,"pcpi_mul_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"pcpi_mul_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"pcpi_mul_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"pcpi_mul_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"pcpi_div_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"pcpi_div_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"pcpi_div_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"pcpi_div_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"pcpi_int_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"pcpi_int_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"pcpi_int_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"pcpi_int_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"mem_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+72,0,"mem_wordsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"mem_rdata_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"mem_rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"mem_do_prefetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"mem_do_rinst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"mem_do_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"mem_do_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"mem_xfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"mem_la_secondword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"mem_la_firstword_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"last_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"mem_la_firstword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"mem_la_firstword_xfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"clear_prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"mem_16bit_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"mem_rdata_latched_noshuffle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"mem_rdata_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"mem_la_use_prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"mem_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"mem_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"instr_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"instr_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"instr_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"instr_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"instr_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"instr_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"instr_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"instr_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"instr_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"instr_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"instr_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"instr_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"instr_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"instr_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"instr_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"instr_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"instr_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"instr_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"instr_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"instr_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"instr_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"instr_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"instr_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"instr_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"instr_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"instr_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"instr_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"instr_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"instr_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"instr_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"instr_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"instr_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"instr_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"instr_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"instr_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"instr_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"instr_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"instr_rdcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"instr_rdcycleh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"instr_rdinstr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"instr_rdinstrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"instr_ecall_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"instr_fence",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"instr_getq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"instr_setq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"instr_retirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"instr_maskirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"instr_waitirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"instr_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"instr_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"decoded_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+134,0,"decoded_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+135,0,"decoded_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+136,0,"decoded_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"decoded_imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"decoder_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"decoder_trigger_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"decoder_pseudo_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"decoder_pseudo_trigger_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"compressed_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"is_lui_auipc_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"is_lb_lh_lw_lbu_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"is_slli_srli_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"is_jalr_addi_slti_sltiu_xori_ori_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"is_sb_sh_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"is_sll_srl_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"is_lui_auipc_jal_jalr_addi_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"is_slti_blt_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"is_sltiu_bltu_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"is_beq_bne_blt_bge_bltu_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"is_lbu_lhu_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"is_alu_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"is_alu_reg_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"is_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"is_rdcycle_rdcycleh_rdinstr_rdinstrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+157,0,"new_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+159,0,"dbg_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+161,0,"dbg_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"dbg_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+163,0,"dbg_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,0,"dbg_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+165,0,"dbg_rs1val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"dbg_rs2val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"dbg_rs1val_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"dbg_rs2val_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+169,0,"q_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+171,0,"q_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"q_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"q_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+174,0,"q_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+175,0,"q_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+176,0,"dbg_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"launch_next_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"dbg_valid_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+179,0,"cached_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+181,0,"cached_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"cached_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"cached_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+184,0,"cached_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+185,0,"cached_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+251,0,"cpu_state_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+252,0,"cpu_state_fetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+253,0,"cpu_state_ld_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+254,0,"cpu_state_ld_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+255,0,"cpu_state_exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+256,0,"cpu_state_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+257,0,"cpu_state_stmem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"cpu_state_ldmem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"cpu_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+187,0,"irq_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+188,0,"dbg_ascii_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+192,0,"set_mem_do_rinst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"set_mem_do_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"set_mem_do_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"latched_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"latched_stalu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"latched_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"latched_compr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"latched_trace",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"latched_is_lu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"latched_is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"latched_is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"latched_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+204,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"pcpi_timeout_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+205,0,"pcpi_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"next_irq_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"do_waitirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"alu_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,0,"alu_out_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"alu_out_0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"alu_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"alu_wait_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"alu_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"alu_shl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"alu_shr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+217,0,"alu_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"alu_ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"alu_lts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"clear_prefetched_high_word_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"cpuregs_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"cpuregs_wrdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"cpuregs_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"cpuregs_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"decoded_rs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_init_top(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpicorv32_wrapper___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpicorv32_wrapper___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpicorv32_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_register(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vpicorv32_wrapper___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vpicorv32_wrapper___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vpicorv32_wrapper___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vpicorv32_wrapper___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_const_0_sub_0(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_const_0\n"); );
    // Init
    Vpicorv32_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_wrapper___024root*>(voidSelf);
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpicorv32_wrapper___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_const_0_sub_0(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+232,(0U));
    bufp->fullBit(oldp+233,(1U));
    bufp->fullIData(oldp+234,(0U),32);
    bufp->fullIData(oldp+235,(0xffffffffU),32);
    bufp->fullIData(oldp+236,(0x10U),32);
    bufp->fullBit(oldp+237,(0U));
    bufp->fullIData(oldp+238,(0U),32);
    bufp->fullIData(oldp+239,(1U),32);
    bufp->fullIData(oldp+240,(2U),32);
    bufp->fullIData(oldp+241,(0x20U),32);
    bufp->fullIData(oldp+242,(5U),32);
    bufp->fullQData(oldp+243,(0x100000000ULL),36);
    bufp->fullQData(oldp+245,(0x200000000ULL),36);
    bufp->fullQData(oldp+247,(0x800000000ULL),36);
    bufp->fullIData(oldp+249,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__i),32);
    bufp->fullSData(oldp+250,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_16bit_buffer),16);
    bufp->fullCData(oldp+251,(0x80U),8);
    bufp->fullCData(oldp+252,(0x40U),8);
    bufp->fullCData(oldp+253,(0x20U),8);
    bufp->fullCData(oldp+254,(0x10U),8);
    bufp->fullCData(oldp+255,(8U),8);
    bufp->fullCData(oldp+256,(4U),8);
    bufp->fullCData(oldp+257,(2U),8);
    bufp->fullCData(oldp+258,(1U),8);
    bufp->fullCData(oldp+259,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__pcpi_timeout_counter),4);
    bufp->fullCData(oldp+260,(0U),5);
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_full_0_sub_0(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_full_0\n"); );
    // Init
    Vpicorv32_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_wrapper___024root*>(voidSelf);
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpicorv32_wrapper___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root__trace_full_0_sub_0(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_read));
    bufp->fullBit(oldp+2,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_write));
    bufp->fullIData(oldp+3,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word),32);
    bufp->fullBit(oldp+4,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer));
    bufp->fullBit(oldp+5,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word));
    bufp->fullIData(oldp+6,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched),32);
    bufp->fullBit(oldp+7,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done));
    bufp->fullBit(oldp+8,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_instr));
    bufp->fullIData(oldp+9,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wdata),32);
    bufp->fullCData(oldp+10,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wstrb),4);
    bufp->fullIData(oldp+11,((((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch) 
                               | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst))
                               ? (0xfffffffcU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_pc)
                               : (0xfffffffcU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1))),32);
    bufp->fullIData(oldp+12,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wdata),32);
    bufp->fullCData(oldp+13,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wstrb),4);
    bufp->fullBit(oldp+14,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__pcpi_valid));
    bufp->fullIData(oldp+15,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__pcpi_insn),32);
    bufp->fullIData(oldp+16,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1),32);
    bufp->fullIData(oldp+17,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2),32);
    bufp->fullIData(oldp+18,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__eoi),32);
    bufp->fullBit(oldp+19,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__trace_valid));
    bufp->fullQData(oldp+20,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__trace_data),36);
    bufp->fullQData(oldp+22,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__count_cycle),64);
    bufp->fullQData(oldp+24,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__count_instr),64);
    bufp->fullIData(oldp+26,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_pc),32);
    bufp->fullIData(oldp+27,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_next_pc),32);
    bufp->fullIData(oldp+28,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_out),32);
    bufp->fullCData(oldp+29,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_sh),5);
    bufp->fullIData(oldp+30,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode),32);
    bufp->fullIData(oldp+31,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_opcode),32);
    bufp->fullIData(oldp+32,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_addr),32);
    bufp->fullIData(oldp+33,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_pc),32);
    bufp->fullBit(oldp+34,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_delay));
    bufp->fullBit(oldp+35,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_active));
    bufp->fullIData(oldp+36,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_mask),32);
    bufp->fullIData(oldp+37,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_pending),32);
    bufp->fullIData(oldp+38,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__timer),32);
    bufp->fullIData(oldp+39,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[0]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[1]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[2]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[3]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[4]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[5]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[6]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[7]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[8]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[9]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[10]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[11]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[12]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[13]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[14]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[15]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[16]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[17]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[18]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[19]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[20]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[21]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[22]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[23]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[24]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[25]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[26]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[27]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[28]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[29]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[30]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[31]),32);
    bufp->fullCData(oldp+71,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state),2);
    bufp->fullCData(oldp+72,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize),2);
    bufp->fullIData(oldp+73,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q),32);
    bufp->fullBit(oldp+74,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch));
    bufp->fullBit(oldp+75,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst));
    bufp->fullBit(oldp+76,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata));
    bufp->fullBit(oldp+77,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata));
    bufp->fullBit(oldp+78,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_secondword));
    bufp->fullBit(oldp+79,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_firstword_reg));
    bufp->fullBit(oldp+80,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__last_mem_valid));
    bufp->fullBit(oldp+81,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__prefetched_high_word));
    bufp->fullBit(oldp+82,(((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch) 
                            | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT____VdfgRegularize_he02009ca_0_0))));
    bufp->fullBit(oldp+83,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lui));
    bufp->fullBit(oldp+84,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_auipc));
    bufp->fullBit(oldp+85,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jal));
    bufp->fullBit(oldp+86,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jalr));
    bufp->fullBit(oldp+87,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_beq));
    bufp->fullBit(oldp+88,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bne));
    bufp->fullBit(oldp+89,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_blt));
    bufp->fullBit(oldp+90,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bge));
    bufp->fullBit(oldp+91,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bltu));
    bufp->fullBit(oldp+92,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bgeu));
    bufp->fullBit(oldp+93,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lb));
    bufp->fullBit(oldp+94,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lh));
    bufp->fullBit(oldp+95,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lw));
    bufp->fullBit(oldp+96,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lbu));
    bufp->fullBit(oldp+97,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lhu));
    bufp->fullBit(oldp+98,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sb));
    bufp->fullBit(oldp+99,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sh));
    bufp->fullBit(oldp+100,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sw));
    bufp->fullBit(oldp+101,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_addi));
    bufp->fullBit(oldp+102,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slti));
    bufp->fullBit(oldp+103,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltiu));
    bufp->fullBit(oldp+104,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xori));
    bufp->fullBit(oldp+105,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_ori));
    bufp->fullBit(oldp+106,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_andi));
    bufp->fullBit(oldp+107,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slli));
    bufp->fullBit(oldp+108,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srli));
    bufp->fullBit(oldp+109,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srai));
    bufp->fullBit(oldp+110,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_add));
    bufp->fullBit(oldp+111,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sub));
    bufp->fullBit(oldp+112,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sll));
    bufp->fullBit(oldp+113,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slt));
    bufp->fullBit(oldp+114,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltu));
    bufp->fullBit(oldp+115,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xor));
    bufp->fullBit(oldp+116,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srl));
    bufp->fullBit(oldp+117,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sra));
    bufp->fullBit(oldp+118,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_or));
    bufp->fullBit(oldp+119,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_and));
    bufp->fullBit(oldp+120,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycle));
    bufp->fullBit(oldp+121,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycleh));
    bufp->fullBit(oldp+122,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstr));
    bufp->fullBit(oldp+123,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstrh));
    bufp->fullBit(oldp+124,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_ecall_ebreak));
    bufp->fullBit(oldp+125,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_fence));
    bufp->fullBit(oldp+126,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_getq));
    bufp->fullBit(oldp+127,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_setq));
    bufp->fullBit(oldp+128,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__compressed_instr));
    bufp->fullBit(oldp+129,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_maskirq));
    bufp->fullBit(oldp+130,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_waitirq));
    bufp->fullBit(oldp+131,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_timer));
    bufp->fullBit(oldp+132,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_trap));
    bufp->fullCData(oldp+133,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rd),5);
    bufp->fullCData(oldp+134,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs1),5);
    bufp->fullCData(oldp+135,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs2),5);
    bufp->fullIData(oldp+136,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm),32);
    bufp->fullIData(oldp+137,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j),32);
    bufp->fullBit(oldp+138,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger));
    bufp->fullBit(oldp+139,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger_q));
    bufp->fullBit(oldp+140,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger));
    bufp->fullBit(oldp+141,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger_q));
    bufp->fullBit(oldp+142,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal));
    bufp->fullBit(oldp+143,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu));
    bufp->fullBit(oldp+144,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_slli_srli_srai));
    bufp->fullBit(oldp+145,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
    bufp->fullBit(oldp+146,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sb_sh_sw));
    bufp->fullBit(oldp+147,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sll_srl_sra));
    bufp->fullBit(oldp+148,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
    bufp->fullBit(oldp+149,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_slti_blt_slt));
    bufp->fullBit(oldp+150,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sltiu_bltu_sltu));
    bufp->fullBit(oldp+151,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu));
    bufp->fullBit(oldp+152,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lbu_lhu_lw));
    bufp->fullBit(oldp+153,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm));
    bufp->fullBit(oldp+154,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg));
    bufp->fullBit(oldp+155,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_compare));
    bufp->fullBit(oldp+156,(((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycle) 
                             | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycleh) 
                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstr) 
                                   | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstrh))))));
    bufp->fullQData(oldp+157,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr),64);
    bufp->fullQData(oldp+159,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_instr),64);
    bufp->fullIData(oldp+161,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_imm),32);
    bufp->fullCData(oldp+162,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs1),5);
    bufp->fullCData(oldp+163,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs2),5);
    bufp->fullCData(oldp+164,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rd),5);
    bufp->fullIData(oldp+165,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val),32);
    bufp->fullIData(oldp+166,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val),32);
    bufp->fullBit(oldp+167,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val_valid));
    bufp->fullBit(oldp+168,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val_valid));
    bufp->fullQData(oldp+169,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_ascii_instr),64);
    bufp->fullIData(oldp+171,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_imm),32);
    bufp->fullIData(oldp+172,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_opcode),32);
    bufp->fullCData(oldp+173,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rs1),5);
    bufp->fullCData(oldp+174,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rs2),5);
    bufp->fullCData(oldp+175,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rd),5);
    bufp->fullBit(oldp+176,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_next));
    bufp->fullBit(oldp+177,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__launch_next_insn));
    bufp->fullBit(oldp+178,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_valid_insn));
    bufp->fullQData(oldp+179,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_ascii_instr),64);
    bufp->fullIData(oldp+181,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_imm),32);
    bufp->fullIData(oldp+182,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_opcode),32);
    bufp->fullCData(oldp+183,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs1),5);
    bufp->fullCData(oldp+184,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs2),5);
    bufp->fullCData(oldp+185,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rd),5);
    bufp->fullCData(oldp+186,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state),8);
    bufp->fullCData(oldp+187,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_state),2);
    bufp->fullWData(oldp+188,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_state),128);
    bufp->fullBit(oldp+192,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rinst));
    bufp->fullBit(oldp+193,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rdata));
    bufp->fullBit(oldp+194,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_wdata));
    bufp->fullBit(oldp+195,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store));
    bufp->fullBit(oldp+196,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_stalu));
    bufp->fullBit(oldp+197,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch));
    bufp->fullBit(oldp+198,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_compr));
    bufp->fullBit(oldp+199,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_trace));
    bufp->fullBit(oldp+200,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lu));
    bufp->fullBit(oldp+201,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lh));
    bufp->fullBit(oldp+202,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lb));
    bufp->fullCData(oldp+203,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_rd),5);
    bufp->fullIData(oldp+204,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__current_pc),32);
    bufp->fullBit(oldp+205,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__pcpi_timeout));
    bufp->fullIData(oldp+206,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_irq_pending),32);
    bufp->fullBit(oldp+207,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__do_waitirq));
    bufp->fullIData(oldp+208,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+209,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_q),32);
    bufp->fullBit(oldp+210,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0));
    bufp->fullBit(oldp+211,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0_q));
    bufp->fullBit(oldp+212,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_wait));
    bufp->fullBit(oldp+213,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_wait_2));
    bufp->fullIData(oldp+214,(((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sub)
                                ? (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                                   - vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2)
                                : (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                                   + vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2))),32);
    bufp->fullIData(oldp+215,((vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                               << (0x1fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2))),32);
    bufp->fullIData(oldp+216,((IData)((0x1ffffffffULL 
                                       & VL_SHIFTRS_QQI(33,33,5, 
                                                        (((QData)((IData)(
                                                                          (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sra) 
                                                                            | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srai)) 
                                                                           & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                                                                              >> 0x1fU)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1))), 
                                                        (0x1fU 
                                                         & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2))))),32);
    bufp->fullBit(oldp+217,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_eq));
    bufp->fullBit(oldp+218,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_ltu));
    bufp->fullBit(oldp+219,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_lts));
    bufp->fullBit(oldp+220,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word_q));
    bufp->fullBit(oldp+221,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_write));
    bufp->fullIData(oldp+222,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_wrdata),32);
    bufp->fullIData(oldp+223,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1),32);
    bufp->fullIData(oldp+224,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs2),32);
    bufp->fullBit(oldp+225,(vlSelfRef.clk));
    bufp->fullBit(oldp+226,(vlSelfRef.resetn));
    bufp->fullBit(oldp+227,(vlSelfRef.trap));
    bufp->fullBit(oldp+228,(vlSelfRef.mem_valid));
    bufp->fullBit(oldp+229,(vlSelfRef.mem_ready));
    bufp->fullIData(oldp+230,(vlSelfRef.mem_addr),32);
    bufp->fullIData(oldp+231,(vlSelfRef.mem_rdata),32);
}
