// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpicorv32_gates__Syms.h"


VL_ATTR_COLD void Vpicorv32_gates___024root__trace_init_sub__TOP__0(Vpicorv32_gates___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"eoi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"irq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"mem_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"mem_la_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+215,0,"mem_la_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"mem_la_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+217,0,"mem_la_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"mem_la_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"mem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+224,0,"pcpi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"pcpi_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+226,0,"pcpi_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"pcpi_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"pcpi_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+229,0,"pcpi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"pcpi_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"pcpi_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+233,0,"trace_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+235,0,"trace_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("picorv32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+237,0,"alu_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"alu_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"alu_lts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"alu_ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+242,0,"alu_out_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"alu_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"alu_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"alu_wait_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"compressed_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+7,0,"count_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"count_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+11,0,"cpu_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"cpuregs[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"cpuregs[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"cpuregs[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"cpuregs[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"cpuregs[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"cpuregs[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"cpuregs[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"cpuregs[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"cpuregs[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"cpuregs[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"cpuregs[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"cpuregs[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"cpuregs[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"cpuregs[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"cpuregs[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"cpuregs[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"cpuregs[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"cpuregs[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"cpuregs[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"cpuregs[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"cpuregs[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"cpuregs[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"cpuregs[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"cpuregs[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"cpuregs[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"cpuregs[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"cpuregs[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"cpuregs[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"cpuregs[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"cpuregs[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"cpuregs[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"cpuregs[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"cpuregs_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"cpuregs_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"cpuregs_wrdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"cpuregs_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"dbg_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"dbg_mem_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"dbg_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"dbg_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"dbg_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"dbg_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"dbg_mem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,0,"decoded_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"decoded_imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"decoded_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+250,0,"decoded_rs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"decoded_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"decoded_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+47,0,"decoder_pseudo_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"decoder_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"do_waitirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"eoi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"instr_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"instr_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"instr_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"instr_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"instr_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"instr_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"instr_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"instr_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"instr_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"instr_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"instr_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"instr_fence",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"instr_getq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"instr_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"instr_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"instr_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"instr_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"instr_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"instr_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"instr_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"instr_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"instr_maskirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"instr_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"instr_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"instr_rdcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"instr_rdcycleh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"instr_rdinstr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"instr_rdinstrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"instr_retirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"instr_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"instr_setq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"instr_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"instr_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"instr_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"instr_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"instr_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"instr_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"instr_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"instr_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"instr_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"instr_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"instr_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"instr_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"instr_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"instr_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"instr_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"instr_waitirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"instr_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"instr_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"irq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"is_alu_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"is_alu_reg_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"is_beq_bne_blt_bge_bltu_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"is_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"is_jalr_addi_slti_sltiu_xori_ori_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"is_lb_lh_lw_lbu_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"is_lbu_lhu_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"is_lui_auipc_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"is_lui_auipc_jal_jalr_addi_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"is_rdcycle_rdcycleh_rdinstr_rdinstrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"is_sb_sh_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"is_sll_srl_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"is_slli_srli_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"is_slti_blt_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"is_sltiu_bltu_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"latched_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"latched_compr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"latched_is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"latched_is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"latched_is_lu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"latched_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+112,0,"latched_stalu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"latched_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"mem_do_prefetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"mem_do_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"mem_do_rinst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"mem_do_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"mem_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"mem_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"mem_la_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"mem_la_firstword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"mem_la_firstword_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"mem_la_firstword_xfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"mem_la_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"mem_la_secondword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"mem_la_use_prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"mem_la_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+217,0,"mem_la_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"mem_la_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"mem_rdata_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"mem_rdata_latched_noshuffle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"mem_rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"mem_rdata_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"mem_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+221,0,"mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"mem_wordsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+223,0,"mem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+247,0,"mem_xfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"pcpi_div_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"pcpi_div_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"pcpi_div_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"pcpi_div_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"pcpi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"pcpi_int_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"pcpi_int_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"pcpi_int_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"pcpi_int_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"pcpi_mul_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"pcpi_mul_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"pcpi_mul_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"pcpi_mul_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"pcpi_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+226,0,"pcpi_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"pcpi_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"pcpi_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"pcpi_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"pcpi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"pcpi_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"pcpi_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"reg_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"reg_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"reg_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"reg_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"reg_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+232,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+233,0,"trace_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+235,0,"trace_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"reg_pc_reg[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"reg_pc_reg[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"reg_pc_reg[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"reg_pc_reg[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"reg_pc_reg[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"reg_pc_reg[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"reg_pc_reg[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"reg_pc_reg[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"reg_pc_reg[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"reg_pc_reg[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"reg_pc_reg[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"reg_pc_reg[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"reg_pc_reg[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"reg_pc_reg[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"reg_pc_reg[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"reg_pc_reg[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"reg_pc_reg[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"reg_pc_reg[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"reg_pc_reg[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"reg_pc_reg[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"reg_pc_reg[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"reg_pc_reg[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reg_pc_reg[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"reg_pc_reg[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"reg_pc_reg[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"reg_pc_reg[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"reg_pc_reg[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"reg_pc_reg[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"reg_pc_reg[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"reg_pc_reg[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"reg_pc_reg[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"decoded_rs2_reg[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"decoded_rs2_reg[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"decoded_rs2_reg[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"decoded_rs2_reg[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"decoded_imm_j_reg[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"mem_addr_reg[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"mem_addr_reg[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"mem_addr_reg[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"mem_addr_reg[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"mem_addr_reg[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"mem_addr_reg[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"mem_addr_reg[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"mem_addr_reg[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"mem_addr_reg[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"mem_addr_reg[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"mem_addr_reg[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"mem_addr_reg[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"mem_addr_reg[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"mem_addr_reg[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"mem_addr_reg[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"mem_addr_reg[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"mem_addr_reg[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"mem_addr_reg[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"mem_addr_reg[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"mem_addr_reg[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"mem_addr_reg[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"mem_addr_reg[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"mem_addr_reg[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"mem_addr_reg[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"mem_addr_reg[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"mem_addr_reg[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"mem_addr_reg[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"mem_addr_reg[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"mem_addr_reg[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"mem_addr_reg[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"decoded_imm_j_reg[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"decoded_imm_j_reg[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"decoded_imm_j_reg[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"decoded_imm_j_reg[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"decoded_imm_j_reg[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"decoded_imm_j_reg[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"decoded_rs1_reg[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"decoded_rs1_reg[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"decoded_rs1_reg[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"decoded_imm_j_reg[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"decoded_imm_j_reg[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"decoded_imm_j_reg[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"decoded_imm_j_reg[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"decoded_imm_j_reg[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"decoded_imm_j_reg[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpicorv32_gates___024root__trace_init_top(Vpicorv32_gates___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpicorv32_gates___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpicorv32_gates___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vpicorv32_gates___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpicorv32_gates___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpicorv32_gates___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpicorv32_gates___024root__trace_register(Vpicorv32_gates___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vpicorv32_gates___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vpicorv32_gates___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vpicorv32_gates___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vpicorv32_gates___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpicorv32_gates___024root__trace_const_0_sub_0(Vpicorv32_gates___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpicorv32_gates___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root__trace_const_0\n"); );
    // Init
    Vpicorv32_gates___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_gates___024root*>(voidSelf);
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpicorv32_gates___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpicorv32_gates___024root__trace_const_0_sub_0(Vpicorv32_gates___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+248,(0U));
    bufp->fullIData(oldp+249,(0U),32);
    bufp->fullCData(oldp+250,(0U),5);
}

VL_ATTR_COLD void Vpicorv32_gates___024root__trace_full_0_sub_0(Vpicorv32_gates___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpicorv32_gates___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root__trace_full_0\n"); );
    // Init
    Vpicorv32_gates___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_gates___024root*>(voidSelf);
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpicorv32_gates___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpicorv32_gates___024root__trace_full_0_sub_0(Vpicorv32_gates___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3045) 
                                 << 0x1eU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3043) 
                                              << 0x1dU)) 
                               | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3044) 
                                   << 0x1bU) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3041) 
                                                 << 0x1aU) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3042) 
                                                   << 0x18U)))) 
                              | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3039) 
                                   << 0x17U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3040) 
                                                 << 0x15U) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3037) 
                                                   << 0x14U))) 
                                 | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3038) 
                                     << 0x12U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3035) 
                                                  << 0x11U)))) 
                             | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3036) 
                                   << 0xfU) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3033) 
                                                << 0xeU) 
                                               | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3034) 
                                                  << 0xcU))) 
                                 | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3031) 
                                     << 0xbU) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3032) 
                                                  << 9U) 
                                                 | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3029) 
                                                    << 8U)))) 
                                | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3030) 
                                     << 6U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3027) 
                                               << 5U)) 
                                   | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3028) 
                                       << 3U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3024) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3026))))))),32);
    bufp->fullIData(oldp+2,(((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3067) 
                                 << 0x1eU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3065) 
                                              << 0x1dU)) 
                               | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3066) 
                                   << 0x1bU) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3063) 
                                                 << 0x1aU) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3064) 
                                                   << 0x18U)))) 
                              | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3061) 
                                   << 0x17U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3062) 
                                                 << 0x15U) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3059) 
                                                   << 0x14U))) 
                                 | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3060) 
                                     << 0x12U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3057) 
                                                  << 0x11U)))) 
                             | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3058) 
                                   << 0xfU) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3055) 
                                                << 0xeU) 
                                               | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3056) 
                                                  << 0xcU))) 
                                 | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3053) 
                                     << 0xbU) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3054) 
                                                  << 9U) 
                                                 | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3051) 
                                                    << 8U)))) 
                                | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3052) 
                                    << 6U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3049) 
                                               << 5U) 
                                              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5340)))))),32);
    bufp->fullIData(oldp+3,(vlSelfRef.picorv32__DOT__decoded_imm_j),32);
    bufp->fullCData(oldp+4,(vlSelfRef.picorv32__DOT__decoded_rs1),5);
    bufp->fullCData(oldp+5,(vlSelfRef.picorv32__DOT__decoded_rs2),5);
    bufp->fullIData(oldp+6,(vlSelfRef.picorv32__DOT__alu_out_q),32);
    bufp->fullQData(oldp+7,(vlSelfRef.picorv32__DOT__count_cycle),64);
    bufp->fullQData(oldp+9,(vlSelfRef.picorv32__DOT__count_instr),64);
    bufp->fullCData(oldp+11,(vlSelfRef.picorv32__DOT__cpu_state),8);
    bufp->fullIData(oldp+12,(vlSelfRef.picorv32__DOT__cpuregs__05b0__05d),32);
    bufp->fullIData(oldp+13,(vlSelfRef.picorv32__DOT__cpuregs__05b10__05d),32);
    bufp->fullIData(oldp+14,(vlSelfRef.picorv32__DOT__cpuregs__05b11__05d),32);
    bufp->fullIData(oldp+15,(vlSelfRef.picorv32__DOT__cpuregs__05b12__05d),32);
    bufp->fullIData(oldp+16,(vlSelfRef.picorv32__DOT__cpuregs__05b13__05d),32);
    bufp->fullIData(oldp+17,(vlSelfRef.picorv32__DOT__cpuregs__05b14__05d),32);
    bufp->fullIData(oldp+18,(vlSelfRef.picorv32__DOT__cpuregs__05b15__05d),32);
    bufp->fullIData(oldp+19,(vlSelfRef.picorv32__DOT__cpuregs__05b16__05d),32);
    bufp->fullIData(oldp+20,(vlSelfRef.picorv32__DOT__cpuregs__05b17__05d),32);
    bufp->fullIData(oldp+21,(vlSelfRef.picorv32__DOT__cpuregs__05b18__05d),32);
    bufp->fullIData(oldp+22,(vlSelfRef.picorv32__DOT__cpuregs__05b19__05d),32);
    bufp->fullIData(oldp+23,(vlSelfRef.picorv32__DOT__cpuregs__05b1__05d),32);
    bufp->fullIData(oldp+24,(vlSelfRef.picorv32__DOT__cpuregs__05b20__05d),32);
    bufp->fullIData(oldp+25,(vlSelfRef.picorv32__DOT__cpuregs__05b21__05d),32);
    bufp->fullIData(oldp+26,(vlSelfRef.picorv32__DOT__cpuregs__05b22__05d),32);
    bufp->fullIData(oldp+27,(vlSelfRef.picorv32__DOT__cpuregs__05b23__05d),32);
    bufp->fullIData(oldp+28,(vlSelfRef.picorv32__DOT__cpuregs__05b24__05d),32);
    bufp->fullIData(oldp+29,(vlSelfRef.picorv32__DOT__cpuregs__05b25__05d),32);
    bufp->fullIData(oldp+30,(vlSelfRef.picorv32__DOT__cpuregs__05b26__05d),32);
    bufp->fullIData(oldp+31,(vlSelfRef.picorv32__DOT__cpuregs__05b27__05d),32);
    bufp->fullIData(oldp+32,(vlSelfRef.picorv32__DOT__cpuregs__05b28__05d),32);
    bufp->fullIData(oldp+33,(vlSelfRef.picorv32__DOT__cpuregs__05b29__05d),32);
    bufp->fullIData(oldp+34,(vlSelfRef.picorv32__DOT__cpuregs__05b2__05d),32);
    bufp->fullIData(oldp+35,(vlSelfRef.picorv32__DOT__cpuregs__05b30__05d),32);
    bufp->fullIData(oldp+36,(vlSelfRef.picorv32__DOT__cpuregs__05b31__05d),32);
    bufp->fullIData(oldp+37,(vlSelfRef.picorv32__DOT__cpuregs__05b3__05d),32);
    bufp->fullIData(oldp+38,(vlSelfRef.picorv32__DOT__cpuregs__05b4__05d),32);
    bufp->fullIData(oldp+39,(vlSelfRef.picorv32__DOT__cpuregs__05b5__05d),32);
    bufp->fullIData(oldp+40,(vlSelfRef.picorv32__DOT__cpuregs__05b6__05d),32);
    bufp->fullIData(oldp+41,(vlSelfRef.picorv32__DOT__cpuregs__05b7__05d),32);
    bufp->fullIData(oldp+42,(vlSelfRef.picorv32__DOT__cpuregs__05b8__05d),32);
    bufp->fullIData(oldp+43,(vlSelfRef.picorv32__DOT__cpuregs__05b9__05d),32);
    bufp->fullBit(oldp+44,(((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
                            & (IData)(vlSelfRef.picorv32__DOT___00015_))));
    bufp->fullIData(oldp+45,(vlSelfRef.picorv32__DOT__decoded_imm),32);
    bufp->fullCData(oldp+46,(vlSelfRef.picorv32__DOT__decoded_rd),5);
    bufp->fullBit(oldp+47,(vlSelfRef.picorv32__DOT__decoder_pseudo_trigger));
    bufp->fullBit(oldp+48,(vlSelfRef.picorv32__DOT__decoder_trigger));
    bufp->fullBit(oldp+49,(vlSelfRef.picorv32__DOT__instr_add));
    bufp->fullBit(oldp+50,(vlSelfRef.picorv32__DOT__instr_addi));
    bufp->fullBit(oldp+51,(vlSelfRef.picorv32__DOT__instr_and));
    bufp->fullBit(oldp+52,(vlSelfRef.picorv32__DOT__instr_andi));
    bufp->fullBit(oldp+53,(vlSelfRef.picorv32__DOT__instr_auipc));
    bufp->fullBit(oldp+54,(vlSelfRef.picorv32__DOT__instr_beq));
    bufp->fullBit(oldp+55,(vlSelfRef.picorv32__DOT__instr_bge));
    bufp->fullBit(oldp+56,(vlSelfRef.picorv32__DOT__instr_bgeu));
    bufp->fullBit(oldp+57,(vlSelfRef.picorv32__DOT__instr_blt));
    bufp->fullBit(oldp+58,(vlSelfRef.picorv32__DOT__instr_bltu));
    bufp->fullBit(oldp+59,(vlSelfRef.picorv32__DOT__instr_bne));
    bufp->fullBit(oldp+60,(vlSelfRef.picorv32__DOT__instr_fence));
    bufp->fullBit(oldp+61,(vlSelfRef.picorv32__DOT__instr_jal));
    bufp->fullBit(oldp+62,(vlSelfRef.picorv32__DOT__instr_jalr));
    bufp->fullBit(oldp+63,(vlSelfRef.picorv32__DOT__instr_lb));
    bufp->fullBit(oldp+64,(vlSelfRef.picorv32__DOT__instr_lbu));
    bufp->fullBit(oldp+65,(vlSelfRef.picorv32__DOT__instr_lh));
    bufp->fullBit(oldp+66,(vlSelfRef.picorv32__DOT__instr_lhu));
    bufp->fullBit(oldp+67,(vlSelfRef.picorv32__DOT__instr_lui));
    bufp->fullBit(oldp+68,(vlSelfRef.picorv32__DOT__instr_lw));
    bufp->fullBit(oldp+69,(vlSelfRef.picorv32__DOT__instr_or));
    bufp->fullBit(oldp+70,(vlSelfRef.picorv32__DOT__instr_ori));
    bufp->fullBit(oldp+71,(vlSelfRef.picorv32__DOT__instr_rdcycle));
    bufp->fullBit(oldp+72,(vlSelfRef.picorv32__DOT__instr_rdcycleh));
    bufp->fullBit(oldp+73,(vlSelfRef.picorv32__DOT__instr_rdinstr));
    bufp->fullBit(oldp+74,(vlSelfRef.picorv32__DOT__instr_rdinstrh));
    bufp->fullBit(oldp+75,(vlSelfRef.picorv32__DOT__instr_sb));
    bufp->fullBit(oldp+76,(vlSelfRef.picorv32__DOT__instr_sh));
    bufp->fullBit(oldp+77,(vlSelfRef.picorv32__DOT__instr_sll));
    bufp->fullBit(oldp+78,(vlSelfRef.picorv32__DOT__instr_slli));
    bufp->fullBit(oldp+79,(vlSelfRef.picorv32__DOT__instr_slt));
    bufp->fullBit(oldp+80,(vlSelfRef.picorv32__DOT__instr_slti));
    bufp->fullBit(oldp+81,(vlSelfRef.picorv32__DOT__instr_sltiu));
    bufp->fullBit(oldp+82,(vlSelfRef.picorv32__DOT__instr_sltu));
    bufp->fullBit(oldp+83,(vlSelfRef.picorv32__DOT__instr_sra));
    bufp->fullBit(oldp+84,(vlSelfRef.picorv32__DOT__instr_srai));
    bufp->fullBit(oldp+85,(vlSelfRef.picorv32__DOT__instr_srl));
    bufp->fullBit(oldp+86,(vlSelfRef.picorv32__DOT__instr_srli));
    bufp->fullBit(oldp+87,(vlSelfRef.picorv32__DOT__instr_sub));
    bufp->fullBit(oldp+88,(vlSelfRef.picorv32__DOT__instr_sw));
    bufp->fullBit(oldp+89,((1U & (~ (IData)(vlSelfRef.picorv32__DOT___00677_)))));
    bufp->fullBit(oldp+90,(vlSelfRef.picorv32__DOT__instr_xor));
    bufp->fullBit(oldp+91,(vlSelfRef.picorv32__DOT__instr_xori));
    bufp->fullBit(oldp+92,(vlSelfRef.picorv32__DOT__is_alu_reg_imm));
    bufp->fullBit(oldp+93,(vlSelfRef.picorv32__DOT__is_alu_reg_reg));
    bufp->fullBit(oldp+94,(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu));
    bufp->fullBit(oldp+95,(vlSelfRef.picorv32__DOT__is_compare));
    bufp->fullBit(oldp+96,(vlSelfRef.picorv32__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
    bufp->fullBit(oldp+97,(vlSelfRef.picorv32__DOT__is_lb_lh_lw_lbu_lhu));
    bufp->fullBit(oldp+98,(vlSelfRef.picorv32__DOT__is_lbu_lhu_lw));
    bufp->fullBit(oldp+99,(vlSelfRef.picorv32__DOT__is_lui_auipc_jal));
    bufp->fullBit(oldp+100,(vlSelfRef.picorv32__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
    bufp->fullBit(oldp+101,(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
    bufp->fullBit(oldp+102,(vlSelfRef.picorv32__DOT__is_sb_sh_sw));
    bufp->fullBit(oldp+103,(vlSelfRef.picorv32__DOT__is_sll_srl_sra));
    bufp->fullBit(oldp+104,(vlSelfRef.picorv32__DOT__is_slli_srli_srai));
    bufp->fullBit(oldp+105,(vlSelfRef.picorv32__DOT__is_slti_blt_slt));
    bufp->fullBit(oldp+106,(vlSelfRef.picorv32__DOT__is_sltiu_bltu_sltu));
    bufp->fullBit(oldp+107,(vlSelfRef.picorv32__DOT__latched_branch));
    bufp->fullBit(oldp+108,(vlSelfRef.picorv32__DOT__latched_is_lb));
    bufp->fullBit(oldp+109,(vlSelfRef.picorv32__DOT__latched_is_lh));
    bufp->fullBit(oldp+110,(vlSelfRef.picorv32__DOT__latched_is_lu));
    bufp->fullCData(oldp+111,(vlSelfRef.picorv32__DOT__latched_rd),5);
    bufp->fullBit(oldp+112,(vlSelfRef.picorv32__DOT__latched_stalu));
    bufp->fullBit(oldp+113,(vlSelfRef.picorv32__DOT__latched_store));
    bufp->fullBit(oldp+114,(vlSelfRef.picorv32__DOT__mem_do_prefetch));
    bufp->fullBit(oldp+115,(vlSelfRef.picorv32__DOT__mem_do_rdata));
    bufp->fullBit(oldp+116,(vlSelfRef.picorv32__DOT__mem_do_rinst));
    bufp->fullBit(oldp+117,(vlSelfRef.picorv32__DOT__mem_do_wdata));
    bufp->fullIData(oldp+118,(vlSelfRef.picorv32__DOT__mem_rdata_q),32);
    bufp->fullCData(oldp+119,(vlSelfRef.picorv32__DOT__mem_state),2);
    bufp->fullCData(oldp+120,(vlSelfRef.picorv32__DOT__mem_wordsize),2);
    bufp->fullIData(oldp+121,(vlSelfRef.picorv32__DOT__next_pc),32);
    bufp->fullIData(oldp+122,(vlSelfRef.picorv32__DOT__reg_next_pc),32);
    bufp->fullIData(oldp+123,(vlSelfRef.picorv32__DOT__reg_op1),32);
    bufp->fullIData(oldp+124,(vlSelfRef.picorv32__DOT__reg_op2),32);
    bufp->fullIData(oldp+125,(vlSelfRef.picorv32__DOT__reg_out),32);
    bufp->fullIData(oldp+126,(vlSelfRef.picorv32__DOT__reg_pc),32);
    bufp->fullCData(oldp+127,(vlSelfRef.picorv32__DOT__reg_sh),5);
    bufp->fullBit(oldp+128,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b1__05d));
    bufp->fullBit(oldp+129,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b2__05d));
    bufp->fullBit(oldp+130,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b3__05d));
    bufp->fullBit(oldp+131,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b4__05d));
    bufp->fullBit(oldp+132,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b5__05d));
    bufp->fullBit(oldp+133,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b6__05d));
    bufp->fullBit(oldp+134,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b7__05d));
    bufp->fullBit(oldp+135,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b8__05d));
    bufp->fullBit(oldp+136,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b9__05d));
    bufp->fullBit(oldp+137,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b10__05d));
    bufp->fullBit(oldp+138,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b11__05d));
    bufp->fullBit(oldp+139,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b12__05d));
    bufp->fullBit(oldp+140,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b13__05d));
    bufp->fullBit(oldp+141,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b14__05d));
    bufp->fullBit(oldp+142,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b15__05d));
    bufp->fullBit(oldp+143,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b16__05d));
    bufp->fullBit(oldp+144,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b17__05d));
    bufp->fullBit(oldp+145,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b18__05d));
    bufp->fullBit(oldp+146,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b19__05d));
    bufp->fullBit(oldp+147,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b20__05d));
    bufp->fullBit(oldp+148,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b21__05d));
    bufp->fullBit(oldp+149,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b22__05d));
    bufp->fullBit(oldp+150,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b23__05d));
    bufp->fullBit(oldp+151,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b24__05d));
    bufp->fullBit(oldp+152,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b25__05d));
    bufp->fullBit(oldp+153,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b26__05d));
    bufp->fullBit(oldp+154,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b27__05d));
    bufp->fullBit(oldp+155,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b28__05d));
    bufp->fullBit(oldp+156,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b29__05d));
    bufp->fullBit(oldp+157,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b30__05d));
    bufp->fullBit(oldp+158,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b31__05d));
    bufp->fullBit(oldp+159,(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b0__05d));
    bufp->fullBit(oldp+160,(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b1__05d));
    bufp->fullBit(oldp+161,(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b2__05d));
    bufp->fullBit(oldp+162,(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b3__05d));
    bufp->fullBit(oldp+163,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b10__05d));
    bufp->fullBit(oldp+164,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b2__05d));
    bufp->fullBit(oldp+165,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b3__05d));
    bufp->fullBit(oldp+166,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b4__05d));
    bufp->fullBit(oldp+167,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b5__05d));
    bufp->fullBit(oldp+168,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b6__05d));
    bufp->fullBit(oldp+169,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b7__05d));
    bufp->fullBit(oldp+170,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b8__05d));
    bufp->fullBit(oldp+171,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b9__05d));
    bufp->fullBit(oldp+172,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b10__05d));
    bufp->fullBit(oldp+173,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b11__05d));
    bufp->fullBit(oldp+174,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b12__05d));
    bufp->fullBit(oldp+175,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b13__05d));
    bufp->fullBit(oldp+176,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b14__05d));
    bufp->fullBit(oldp+177,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b15__05d));
    bufp->fullBit(oldp+178,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b16__05d));
    bufp->fullBit(oldp+179,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b17__05d));
    bufp->fullBit(oldp+180,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b18__05d));
    bufp->fullBit(oldp+181,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b19__05d));
    bufp->fullBit(oldp+182,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b20__05d));
    bufp->fullBit(oldp+183,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b21__05d));
    bufp->fullBit(oldp+184,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b22__05d));
    bufp->fullBit(oldp+185,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b23__05d));
    bufp->fullBit(oldp+186,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b24__05d));
    bufp->fullBit(oldp+187,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b25__05d));
    bufp->fullBit(oldp+188,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b26__05d));
    bufp->fullBit(oldp+189,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b27__05d));
    bufp->fullBit(oldp+190,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b28__05d));
    bufp->fullBit(oldp+191,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b29__05d));
    bufp->fullBit(oldp+192,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b30__05d));
    bufp->fullBit(oldp+193,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b31__05d));
    bufp->fullBit(oldp+194,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b12__05d));
    bufp->fullBit(oldp+195,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b13__05d));
    bufp->fullBit(oldp+196,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b14__05d));
    bufp->fullBit(oldp+197,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b18__05d));
    bufp->fullBit(oldp+198,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b19__05d));
    bufp->fullBit(oldp+199,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b30__05d));
    bufp->fullBit(oldp+200,(vlSelfRef.picorv32__DOT__decoded_rs1_reg__05b0__05d));
    bufp->fullBit(oldp+201,(vlSelfRef.picorv32__DOT__decoded_rs1_reg__05b1__05d));
    bufp->fullBit(oldp+202,(vlSelfRef.picorv32__DOT__decoded_rs1_reg__05b2__05d));
    bufp->fullBit(oldp+203,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b4__05d));
    bufp->fullBit(oldp+204,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b8__05d));
    bufp->fullBit(oldp+205,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b9__05d));
    bufp->fullBit(oldp+206,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b5__05d));
    bufp->fullBit(oldp+207,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b6__05d));
    bufp->fullBit(oldp+208,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b7__05d));
    bufp->fullBit(oldp+209,(vlSelfRef.clk));
    bufp->fullIData(oldp+210,(vlSelfRef.eoi),32);
    bufp->fullIData(oldp+211,(vlSelfRef.irq),32);
    bufp->fullIData(oldp+212,(vlSelfRef.mem_addr),32);
    bufp->fullBit(oldp+213,(vlSelfRef.mem_instr));
    bufp->fullIData(oldp+214,(vlSelfRef.mem_la_addr),32);
    bufp->fullBit(oldp+215,(vlSelfRef.mem_la_read));
    bufp->fullIData(oldp+216,(vlSelfRef.mem_la_wdata),32);
    bufp->fullBit(oldp+217,(vlSelfRef.mem_la_write));
    bufp->fullCData(oldp+218,(vlSelfRef.mem_la_wstrb),4);
    bufp->fullIData(oldp+219,(vlSelfRef.mem_rdata),32);
    bufp->fullBit(oldp+220,(vlSelfRef.mem_ready));
    bufp->fullBit(oldp+221,(vlSelfRef.mem_valid));
    bufp->fullIData(oldp+222,(vlSelfRef.mem_wdata),32);
    bufp->fullCData(oldp+223,(vlSelfRef.mem_wstrb),4);
    bufp->fullIData(oldp+224,(vlSelfRef.pcpi_insn),32);
    bufp->fullIData(oldp+225,(vlSelfRef.pcpi_rd),32);
    bufp->fullBit(oldp+226,(vlSelfRef.pcpi_ready));
    bufp->fullIData(oldp+227,(vlSelfRef.pcpi_rs1),32);
    bufp->fullIData(oldp+228,(vlSelfRef.pcpi_rs2),32);
    bufp->fullBit(oldp+229,(vlSelfRef.pcpi_valid));
    bufp->fullBit(oldp+230,(vlSelfRef.pcpi_wait));
    bufp->fullBit(oldp+231,(vlSelfRef.pcpi_wr));
    bufp->fullBit(oldp+232,(vlSelfRef.resetn));
    bufp->fullQData(oldp+233,(vlSelfRef.trace_data),36);
    bufp->fullBit(oldp+235,(vlSelfRef.trace_valid));
    bufp->fullBit(oldp+236,(vlSelfRef.trap));
    bufp->fullIData(oldp+237,(vlSelfRef.picorv32__DOT__alu_add_sub),32);
    bufp->fullBit(oldp+238,((1U & (~ ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                      >> 4U)))));
    bufp->fullBit(oldp+239,(vlSelfRef.picorv32__DOT__alu_lts));
    bufp->fullBit(oldp+240,((1U & (~ ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                      >> 2U)))));
    bufp->fullIData(oldp+241,(vlSelfRef.picorv32__DOT__alu_out),32);
    bufp->fullBit(oldp+242,(vlSelfRef.picorv32__DOT__alu_out_0));
    bufp->fullIData(oldp+243,((((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5352) 
                                    << 0x1fU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5351) 
                                                 << 0x1eU)) 
                                  | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5354) 
                                      << 0x1dU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5353) 
                                                   << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5356) 
                                      << 0x1bU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5355) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5358) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5357) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5360) 
                                      << 0x17U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5359) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5362) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5361) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5364) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5363) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5366) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5365) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5368) 
                                      << 0xfU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5367) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5370) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5369) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5372) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5371) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5374) 
                                        << 9U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5373) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5376) 
                                        << 7U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5375) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5378) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5377) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5380) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5379) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5382) 
                                          << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5381))))))),32);
    bufp->fullBit(oldp+244,(vlSelfRef.picorv32__DOT__mem_done));
    bufp->fullIData(oldp+245,(vlSelfRef.picorv32__DOT__mem_rdata_latched),32);
    bufp->fullIData(oldp+246,(vlSelfRef.picorv32__DOT__mem_rdata_word),32);
    bufp->fullBit(oldp+247,(vlSelfRef.picorv32__DOT__mem_xfer));
}
