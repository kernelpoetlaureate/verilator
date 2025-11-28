// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpicorv32__Syms.h"


void Vpicorv32___024root__trace_chg_0_sub_0(Vpicorv32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpicorv32___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root__trace_chg_0\n"); );
    // Init
    Vpicorv32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32___024root*>(voidSelf);
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpicorv32___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpicorv32___024root__trace_chg_0_sub_0(Vpicorv32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_la_read));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_la_write));
        bufp->chgIData(oldp+2,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_rdata_word),32);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_xfer));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__clear_prefetched_high_word));
        bufp->chgIData(oldp+5,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_rdata_latched),32);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_done));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+7,(vlSelfRef.picorv32_regs__DOT__regs[0]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.picorv32_regs__DOT__regs[1]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.picorv32_regs__DOT__regs[2]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.picorv32_regs__DOT__regs[3]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.picorv32_regs__DOT__regs[4]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.picorv32_regs__DOT__regs[5]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.picorv32_regs__DOT__regs[6]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.picorv32_regs__DOT__regs[7]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.picorv32_regs__DOT__regs[8]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.picorv32_regs__DOT__regs[9]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.picorv32_regs__DOT__regs[10]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.picorv32_regs__DOT__regs[11]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.picorv32_regs__DOT__regs[12]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.picorv32_regs__DOT__regs[13]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.picorv32_regs__DOT__regs[14]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.picorv32_regs__DOT__regs[15]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.picorv32_regs__DOT__regs[16]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.picorv32_regs__DOT__regs[17]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.picorv32_regs__DOT__regs[18]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.picorv32_regs__DOT__regs[19]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.picorv32_regs__DOT__regs[20]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.picorv32_regs__DOT__regs[21]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.picorv32_regs__DOT__regs[22]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.picorv32_regs__DOT__regs[23]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.picorv32_regs__DOT__regs[24]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.picorv32_regs__DOT__regs[25]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.picorv32_regs__DOT__regs[26]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.picorv32_regs__DOT__regs[27]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.picorv32_regs__DOT__regs[28]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.picorv32_regs__DOT__regs[29]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.picorv32_regs__DOT__regs[30]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+38,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_valid));
        bufp->chgIData(oldp+39,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_addr),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_wdata),32);
        bufp->chgCData(oldp+41,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_wstrb),4);
        bufp->chgBit(oldp+42,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_instr));
        bufp->chgBit(oldp+43,(vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_awvalid));
        bufp->chgBit(oldp+44,(vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_arvalid));
        bufp->chgBit(oldp+45,(vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_wvalid));
        bufp->chgBit(oldp+46,(vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__xfer_done));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.trap));
        bufp->chgIData(oldp+48,((((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_do_prefetch) 
                                  | (IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_do_rinst))
                                  ? (0xfffffffcU & vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__next_pc)
                                  : (0xfffffffcU & vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op1))),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_la_wdata),32);
        bufp->chgCData(oldp+50,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_la_wstrb),4);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__irq_active));
        bufp->chgIData(oldp+52,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.pcpi_insn),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op1),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op2),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.eoi),32);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__do_waitirq));
        bufp->chgQData(oldp+57,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.trace_data),36);
        bufp->chgQData(oldp+59,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__count_cycle),64);
        bufp->chgQData(oldp+61,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__count_instr),64);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_pc),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_next_pc),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_out),32);
        bufp->chgCData(oldp+66,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_sh),5);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__next_insn_opcode),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_insn_opcode),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_insn_addr),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__next_pc),32);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__irq_delay));
        bufp->chgIData(oldp+72,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__irq_mask),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__irq_pending),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__timer),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[0]),32);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[1]),32);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[2]),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[3]),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[4]),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[5]),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[6]),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[7]),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[8]),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[9]),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[10]),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[11]),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[12]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[13]),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[14]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[15]),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[16]),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[17]),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[18]),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[19]),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[20]),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[21]),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[22]),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[23]),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[24]),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[25]),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[26]),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[27]),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[28]),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[29]),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[30]),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs[31]),32);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_state),2);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_wordsize),2);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_rdata_q),32);
        bufp->chgBit(oldp+110,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_do_prefetch));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_do_rinst));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_do_rdata));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_do_wdata));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_la_secondword));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_la_firstword_reg));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__last_mem_valid));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__prefetched_high_word));
        bufp->chgBit(oldp+118,(((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_do_prefetch) 
                                | ((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_do_rinst) 
                                   | ((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_do_rdata) 
                                      | (IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__mem_do_wdata))))));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_lui));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_auipc));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_jal));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_jalr));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_beq));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_bne));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_blt));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_bge));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_bltu));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_bgeu));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_lb));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_lh));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_lw));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_lbu));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_lhu));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_sb));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_sh));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_sw));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_addi));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_slti));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_sltiu));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_xori));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_ori));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_andi));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_slli));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_srli));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_srai));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_add));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_sub));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_sll));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_slt));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_sltu));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_xor));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_srl));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_sra));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_or));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_and));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_rdcycle));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_rdcycleh));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_rdinstr));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_rdinstrh));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_ecall_ebreak));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_fence));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_getq));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_setq));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__compressed_instr));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_maskirq));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_waitirq));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_timer));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_trap));
        bufp->chgCData(oldp+169,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__decoded_rd),5);
        bufp->chgCData(oldp+170,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__decoded_rs1),5);
        bufp->chgCData(oldp+171,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__decoded_rs2),5);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__decoded_imm),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__decoded_imm_j),32);
        bufp->chgBit(oldp+174,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__decoder_trigger));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__decoder_trigger_q));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__decoder_pseudo_trigger));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__decoder_pseudo_trigger_q));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_lui_auipc_jal));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_lb_lh_lw_lbu_lhu));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_slli_srli_srai));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_sb_sh_sw));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_sll_srl_sra));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_lui_auipc_jal_jalr_addi_add_sub));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_slti_blt_slt));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_sltiu_bltu_sltu));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_beq_bne_blt_bge_bltu_bgeu));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_lbu_lhu_lw));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_alu_reg_imm));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_alu_reg_reg));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_compare));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        bufp->chgQData(oldp+193,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__new_ascii_instr),64);
        bufp->chgQData(oldp+195,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_ascii_instr),64);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_insn_imm),32);
        bufp->chgCData(oldp+198,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_insn_rs1),5);
        bufp->chgCData(oldp+199,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_insn_rs2),5);
        bufp->chgCData(oldp+200,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_insn_rd),5);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_rs1val),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_rs2val),32);
        bufp->chgBit(oldp+203,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_rs1val_valid));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_rs2val_valid));
        bufp->chgQData(oldp+205,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__q_ascii_instr),64);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__q_insn_imm),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__q_insn_opcode),32);
        bufp->chgCData(oldp+209,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__q_insn_rs1),5);
        bufp->chgCData(oldp+210,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__q_insn_rs2),5);
        bufp->chgCData(oldp+211,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__q_insn_rd),5);
        bufp->chgBit(oldp+212,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_next));
        bufp->chgBit(oldp+213,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__launch_next_insn));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_valid_insn));
        bufp->chgQData(oldp+215,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cached_ascii_instr),64);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cached_insn_imm),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cached_insn_opcode),32);
        bufp->chgCData(oldp+219,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cached_insn_rs1),5);
        bufp->chgCData(oldp+220,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cached_insn_rs2),5);
        bufp->chgCData(oldp+221,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cached_insn_rd),5);
        bufp->chgCData(oldp+222,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpu_state),8);
        bufp->chgCData(oldp+223,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__irq_state),2);
        bufp->chgWData(oldp+224,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__dbg_ascii_state),128);
        bufp->chgBit(oldp+228,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__set_mem_do_rinst));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__set_mem_do_rdata));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__set_mem_do_wdata));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__latched_store));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__latched_stalu));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__latched_branch));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__latched_compr));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__latched_trace));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__latched_is_lu));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__latched_is_lh));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__latched_is_lb));
        bufp->chgCData(oldp+239,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__latched_rd),5);
        bufp->chgIData(oldp+240,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__current_pc),32);
        bufp->chgBit(oldp+241,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__pcpi_timeout));
        bufp->chgIData(oldp+242,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__next_irq_pending),32);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__alu_out),32);
        bufp->chgIData(oldp+244,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__alu_out_q),32);
        bufp->chgBit(oldp+245,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__alu_out_0));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__alu_out_0_q));
        bufp->chgBit(oldp+247,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__alu_wait));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__alu_wait_2));
        bufp->chgIData(oldp+249,(((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_sub)
                                   ? (vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op1 
                                      - vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op2)
                                   : (vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op1 
                                      + vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op2))),32);
        bufp->chgIData(oldp+250,((vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op1 
                                  << (0x1fU & vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op2))),32);
        bufp->chgIData(oldp+251,((IData)((0x1ffffffffULL 
                                          & VL_SHIFTRS_QQI(33,33,5, 
                                                           (((QData)((IData)(
                                                                             (((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_sra) 
                                                                               | (IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__instr_srai)) 
                                                                              & (vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op1))), 
                                                           (0x1fU 
                                                            & vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op2))))),32);
        bufp->chgBit(oldp+252,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__alu_eq));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__alu_ltu));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__alu_lts));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__clear_prefetched_high_word_q));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs_write));
        bufp->chgIData(oldp+257,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs_wrdata),32);
        bufp->chgIData(oldp+258,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs_rs1),32);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__cpuregs_rs2),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+260,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_valid));
        bufp->chgIData(oldp+261,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_addr),32);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_wdata),32);
        bufp->chgCData(oldp+263,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_wstrb),4);
        bufp->chgBit(oldp+264,(vlSelfRef.picorv32_wb__DOT__mem_ready));
        bufp->chgIData(oldp+265,(vlSelfRef.picorv32_wb__DOT__mem_rdata),32);
        bufp->chgCData(oldp+266,(vlSelfRef.picorv32_wb__DOT__state),2);
        bufp->chgBit(oldp+267,((IData)((0U != (IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_wstrb)))));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.trap));
        bufp->chgBit(oldp+269,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_instr));
        bufp->chgIData(oldp+270,((((IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_do_prefetch) 
                                   | (IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_do_rinst))
                                   ? (0xfffffffcU & vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__next_pc)
                                   : (0xfffffffcU & vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op1))),32);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_la_wdata),32);
        bufp->chgCData(oldp+272,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_la_wstrb),4);
        bufp->chgBit(oldp+273,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__irq_active));
        bufp->chgIData(oldp+274,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.pcpi_insn),32);
        bufp->chgIData(oldp+275,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op1),32);
        bufp->chgIData(oldp+276,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op2),32);
        bufp->chgIData(oldp+277,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.eoi),32);
        bufp->chgBit(oldp+278,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__do_waitirq));
        bufp->chgQData(oldp+279,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.trace_data),36);
        bufp->chgQData(oldp+281,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__count_cycle),64);
        bufp->chgQData(oldp+283,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__count_instr),64);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_pc),32);
        bufp->chgIData(oldp+286,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_next_pc),32);
        bufp->chgIData(oldp+287,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_out),32);
        bufp->chgCData(oldp+288,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_sh),5);
        bufp->chgIData(oldp+289,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__next_insn_opcode),32);
        bufp->chgIData(oldp+290,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_insn_opcode),32);
        bufp->chgIData(oldp+291,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_insn_addr),32);
        bufp->chgIData(oldp+292,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__next_pc),32);
        bufp->chgBit(oldp+293,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__irq_delay));
        bufp->chgIData(oldp+294,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__irq_mask),32);
        bufp->chgIData(oldp+295,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__irq_pending),32);
        bufp->chgIData(oldp+296,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__timer),32);
        bufp->chgIData(oldp+297,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[0]),32);
        bufp->chgIData(oldp+298,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[1]),32);
        bufp->chgIData(oldp+299,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[2]),32);
        bufp->chgIData(oldp+300,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[3]),32);
        bufp->chgIData(oldp+301,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[4]),32);
        bufp->chgIData(oldp+302,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[5]),32);
        bufp->chgIData(oldp+303,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[6]),32);
        bufp->chgIData(oldp+304,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[7]),32);
        bufp->chgIData(oldp+305,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[8]),32);
        bufp->chgIData(oldp+306,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[9]),32);
        bufp->chgIData(oldp+307,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[10]),32);
        bufp->chgIData(oldp+308,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[11]),32);
        bufp->chgIData(oldp+309,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[12]),32);
        bufp->chgIData(oldp+310,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[13]),32);
        bufp->chgIData(oldp+311,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[14]),32);
        bufp->chgIData(oldp+312,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[15]),32);
        bufp->chgIData(oldp+313,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[16]),32);
        bufp->chgIData(oldp+314,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[17]),32);
        bufp->chgIData(oldp+315,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[18]),32);
        bufp->chgIData(oldp+316,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[19]),32);
        bufp->chgIData(oldp+317,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[20]),32);
        bufp->chgIData(oldp+318,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[21]),32);
        bufp->chgIData(oldp+319,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[22]),32);
        bufp->chgIData(oldp+320,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[23]),32);
        bufp->chgIData(oldp+321,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[24]),32);
        bufp->chgIData(oldp+322,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[25]),32);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[26]),32);
        bufp->chgIData(oldp+324,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[27]),32);
        bufp->chgIData(oldp+325,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[28]),32);
        bufp->chgIData(oldp+326,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[29]),32);
        bufp->chgIData(oldp+327,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[30]),32);
        bufp->chgIData(oldp+328,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs[31]),32);
        bufp->chgCData(oldp+329,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_state),2);
        bufp->chgCData(oldp+330,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_wordsize),2);
        bufp->chgIData(oldp+331,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_rdata_word),32);
        bufp->chgIData(oldp+332,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_rdata_q),32);
        bufp->chgBit(oldp+333,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_do_prefetch));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_do_rinst));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_do_rdata));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_do_wdata));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_xfer));
        bufp->chgBit(oldp+338,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_la_secondword));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_la_firstword_reg));
        bufp->chgBit(oldp+340,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__last_mem_valid));
        bufp->chgBit(oldp+341,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__prefetched_high_word));
        bufp->chgIData(oldp+342,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_rdata_latched),32);
        bufp->chgBit(oldp+343,(((IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_do_prefetch) 
                                | ((IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_do_rinst) 
                                   | ((IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_do_rdata) 
                                      | (IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_do_wdata))))));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_lui));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_auipc));
        bufp->chgBit(oldp+346,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_jal));
        bufp->chgBit(oldp+347,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_jalr));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_beq));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_bne));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_blt));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_bge));
        bufp->chgBit(oldp+352,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_bltu));
        bufp->chgBit(oldp+353,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_bgeu));
        bufp->chgBit(oldp+354,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_lb));
        bufp->chgBit(oldp+355,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_lh));
        bufp->chgBit(oldp+356,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_lw));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_lbu));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_lhu));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_sb));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_sh));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_sw));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_addi));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_slti));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_sltiu));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_xori));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_ori));
        bufp->chgBit(oldp+367,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_andi));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_slli));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_srli));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_srai));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_add));
        bufp->chgBit(oldp+372,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_sub));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_sll));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_slt));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_sltu));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_xor));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_srl));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_sra));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_or));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_and));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_rdcycle));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_rdcycleh));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_rdinstr));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_rdinstrh));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_ecall_ebreak));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_fence));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_getq));
        bufp->chgBit(oldp+388,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_setq));
        bufp->chgBit(oldp+389,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__compressed_instr));
        bufp->chgBit(oldp+390,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_maskirq));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_waitirq));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_timer));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_trap));
        bufp->chgCData(oldp+394,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__decoded_rd),5);
        bufp->chgCData(oldp+395,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__decoded_rs1),5);
        bufp->chgCData(oldp+396,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__decoded_rs2),5);
        bufp->chgIData(oldp+397,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__decoded_imm),32);
        bufp->chgIData(oldp+398,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__decoded_imm_j),32);
        bufp->chgBit(oldp+399,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__decoder_trigger));
        bufp->chgBit(oldp+400,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__decoder_trigger_q));
        bufp->chgBit(oldp+401,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__decoder_pseudo_trigger));
        bufp->chgBit(oldp+402,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__decoder_pseudo_trigger_q));
        bufp->chgBit(oldp+403,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_lui_auipc_jal));
        bufp->chgBit(oldp+404,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_lb_lh_lw_lbu_lhu));
        bufp->chgBit(oldp+405,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_slli_srli_srai));
        bufp->chgBit(oldp+406,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_sb_sh_sw));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_sll_srl_sra));
        bufp->chgBit(oldp+409,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_lui_auipc_jal_jalr_addi_add_sub));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_slti_blt_slt));
        bufp->chgBit(oldp+411,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_sltiu_bltu_sltu));
        bufp->chgBit(oldp+412,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_beq_bne_blt_bge_bltu_bgeu));
        bufp->chgBit(oldp+413,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_lbu_lhu_lw));
        bufp->chgBit(oldp+414,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_alu_reg_imm));
        bufp->chgBit(oldp+415,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_alu_reg_reg));
        bufp->chgBit(oldp+416,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_compare));
        bufp->chgBit(oldp+417,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        bufp->chgQData(oldp+418,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__new_ascii_instr),64);
        bufp->chgQData(oldp+420,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_ascii_instr),64);
        bufp->chgIData(oldp+422,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_insn_imm),32);
        bufp->chgCData(oldp+423,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_insn_rs1),5);
        bufp->chgCData(oldp+424,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_insn_rs2),5);
        bufp->chgCData(oldp+425,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_insn_rd),5);
        bufp->chgIData(oldp+426,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_rs1val),32);
        bufp->chgIData(oldp+427,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_rs2val),32);
        bufp->chgBit(oldp+428,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_rs1val_valid));
        bufp->chgBit(oldp+429,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_rs2val_valid));
        bufp->chgQData(oldp+430,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__q_ascii_instr),64);
        bufp->chgIData(oldp+432,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__q_insn_imm),32);
        bufp->chgIData(oldp+433,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__q_insn_opcode),32);
        bufp->chgCData(oldp+434,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__q_insn_rs1),5);
        bufp->chgCData(oldp+435,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__q_insn_rs2),5);
        bufp->chgCData(oldp+436,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__q_insn_rd),5);
        bufp->chgBit(oldp+437,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_next));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__launch_next_insn));
        bufp->chgBit(oldp+439,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_valid_insn));
        bufp->chgQData(oldp+440,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cached_ascii_instr),64);
        bufp->chgIData(oldp+442,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cached_insn_imm),32);
        bufp->chgIData(oldp+443,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cached_insn_opcode),32);
        bufp->chgCData(oldp+444,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cached_insn_rs1),5);
        bufp->chgCData(oldp+445,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cached_insn_rs2),5);
        bufp->chgCData(oldp+446,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cached_insn_rd),5);
        bufp->chgCData(oldp+447,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpu_state),8);
        bufp->chgCData(oldp+448,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__irq_state),2);
        bufp->chgWData(oldp+449,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__dbg_ascii_state),128);
        bufp->chgBit(oldp+453,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__set_mem_do_rinst));
        bufp->chgBit(oldp+454,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__set_mem_do_rdata));
        bufp->chgBit(oldp+455,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__set_mem_do_wdata));
        bufp->chgBit(oldp+456,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__latched_store));
        bufp->chgBit(oldp+457,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__latched_stalu));
        bufp->chgBit(oldp+458,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__latched_branch));
        bufp->chgBit(oldp+459,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__latched_compr));
        bufp->chgBit(oldp+460,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__latched_trace));
        bufp->chgBit(oldp+461,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__latched_is_lu));
        bufp->chgBit(oldp+462,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__latched_is_lh));
        bufp->chgBit(oldp+463,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__latched_is_lb));
        bufp->chgCData(oldp+464,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__latched_rd),5);
        bufp->chgIData(oldp+465,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__current_pc),32);
        bufp->chgBit(oldp+466,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__pcpi_timeout));
        bufp->chgIData(oldp+467,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__next_irq_pending),32);
        bufp->chgIData(oldp+468,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__alu_out),32);
        bufp->chgIData(oldp+469,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__alu_out_q),32);
        bufp->chgBit(oldp+470,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__alu_out_0));
        bufp->chgBit(oldp+471,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__alu_out_0_q));
        bufp->chgBit(oldp+472,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__alu_wait));
        bufp->chgBit(oldp+473,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__alu_wait_2));
        bufp->chgIData(oldp+474,(((IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_sub)
                                   ? (vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op1 
                                      - vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op2)
                                   : (vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op1 
                                      + vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op2))),32);
        bufp->chgIData(oldp+475,((vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op1 
                                  << (0x1fU & vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op2))),32);
        bufp->chgIData(oldp+476,((IData)((0x1ffffffffULL 
                                          & VL_SHIFTRS_QQI(33,33,5, 
                                                           (((QData)((IData)(
                                                                             (((IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_sra) 
                                                                               | (IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__instr_srai)) 
                                                                              & (vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op1))), 
                                                           (0x1fU 
                                                            & vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op2))))),32);
        bufp->chgBit(oldp+477,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__alu_eq));
        bufp->chgBit(oldp+478,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__alu_ltu));
        bufp->chgBit(oldp+479,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__alu_lts));
        bufp->chgBit(oldp+480,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__clear_prefetched_high_word_q));
        bufp->chgBit(oldp+481,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs_write));
        bufp->chgIData(oldp+482,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs_wrdata),32);
        bufp->chgIData(oldp+483,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs_rs1),32);
        bufp->chgIData(oldp+484,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__cpuregs_rs2),32);
    }
    bufp->chgBit(oldp+485,(vlSelfRef.picorv32_regs__02Eclk));
    bufp->chgBit(oldp+486,(vlSelfRef.wen));
    bufp->chgCData(oldp+487,(vlSelfRef.waddr),6);
    bufp->chgCData(oldp+488,(vlSelfRef.raddr1),6);
    bufp->chgCData(oldp+489,(vlSelfRef.raddr2),6);
    bufp->chgIData(oldp+490,(vlSelfRef.wdata),32);
    bufp->chgIData(oldp+491,(vlSelfRef.rdata1),32);
    bufp->chgIData(oldp+492,(vlSelfRef.rdata2),32);
    bufp->chgBit(oldp+493,(vlSelfRef.picorv32_axi__02Eclk));
    bufp->chgBit(oldp+494,(vlSelfRef.resetn));
    bufp->chgBit(oldp+495,(vlSelfRef.picorv32_axi__02Etrap));
    bufp->chgBit(oldp+496,(vlSelfRef.mem_axi_awvalid));
    bufp->chgBit(oldp+497,(vlSelfRef.mem_axi_awready));
    bufp->chgIData(oldp+498,(vlSelfRef.mem_axi_awaddr),32);
    bufp->chgCData(oldp+499,(vlSelfRef.mem_axi_awprot),3);
    bufp->chgBit(oldp+500,(vlSelfRef.mem_axi_wvalid));
    bufp->chgBit(oldp+501,(vlSelfRef.mem_axi_wready));
    bufp->chgIData(oldp+502,(vlSelfRef.mem_axi_wdata),32);
    bufp->chgCData(oldp+503,(vlSelfRef.mem_axi_wstrb),4);
    bufp->chgBit(oldp+504,(vlSelfRef.mem_axi_bvalid));
    bufp->chgBit(oldp+505,(vlSelfRef.mem_axi_bready));
    bufp->chgBit(oldp+506,(vlSelfRef.mem_axi_arvalid));
    bufp->chgBit(oldp+507,(vlSelfRef.mem_axi_arready));
    bufp->chgIData(oldp+508,(vlSelfRef.mem_axi_araddr),32);
    bufp->chgCData(oldp+509,(vlSelfRef.mem_axi_arprot),3);
    bufp->chgBit(oldp+510,(vlSelfRef.mem_axi_rvalid));
    bufp->chgBit(oldp+511,(vlSelfRef.mem_axi_rready));
    bufp->chgIData(oldp+512,(vlSelfRef.mem_axi_rdata),32);
    bufp->chgBit(oldp+513,(vlSelfRef.picorv32_axi__02Epcpi_valid));
    bufp->chgIData(oldp+514,(vlSelfRef.picorv32_axi__02Epcpi_insn),32);
    bufp->chgIData(oldp+515,(vlSelfRef.picorv32_axi__02Epcpi_rs1),32);
    bufp->chgIData(oldp+516,(vlSelfRef.picorv32_axi__02Epcpi_rs2),32);
    bufp->chgBit(oldp+517,(vlSelfRef.picorv32_axi__02Epcpi_wr));
    bufp->chgIData(oldp+518,(vlSelfRef.picorv32_axi__02Epcpi_rd),32);
    bufp->chgBit(oldp+519,(vlSelfRef.picorv32_axi__02Epcpi_wait));
    bufp->chgBit(oldp+520,(vlSelfRef.picorv32_axi__02Epcpi_ready));
    bufp->chgIData(oldp+521,(vlSelfRef.picorv32_axi__02Eirq),32);
    bufp->chgIData(oldp+522,(vlSelfRef.picorv32_axi__02Eeoi),32);
    bufp->chgBit(oldp+523,(vlSelfRef.picorv32_axi__02Etrace_valid));
    bufp->chgQData(oldp+524,(vlSelfRef.picorv32_axi__02Etrace_data),36);
    bufp->chgBit(oldp+526,(vlSelfRef.picorv32_wb__02Etrap));
    bufp->chgBit(oldp+527,(vlSelfRef.wb_rst_i));
    bufp->chgBit(oldp+528,(vlSelfRef.wb_clk_i));
    bufp->chgIData(oldp+529,(vlSelfRef.wbm_adr_o),32);
    bufp->chgIData(oldp+530,(vlSelfRef.wbm_dat_o),32);
    bufp->chgIData(oldp+531,(vlSelfRef.wbm_dat_i),32);
    bufp->chgBit(oldp+532,(vlSelfRef.wbm_we_o));
    bufp->chgCData(oldp+533,(vlSelfRef.wbm_sel_o),4);
    bufp->chgBit(oldp+534,(vlSelfRef.wbm_stb_o));
    bufp->chgBit(oldp+535,(vlSelfRef.wbm_ack_i));
    bufp->chgBit(oldp+536,(vlSelfRef.wbm_cyc_o));
    bufp->chgBit(oldp+537,(vlSelfRef.picorv32_wb__02Epcpi_valid));
    bufp->chgIData(oldp+538,(vlSelfRef.picorv32_wb__02Epcpi_insn),32);
    bufp->chgIData(oldp+539,(vlSelfRef.picorv32_wb__02Epcpi_rs1),32);
    bufp->chgIData(oldp+540,(vlSelfRef.picorv32_wb__02Epcpi_rs2),32);
    bufp->chgBit(oldp+541,(vlSelfRef.picorv32_wb__02Epcpi_wr));
    bufp->chgIData(oldp+542,(vlSelfRef.picorv32_wb__02Epcpi_rd),32);
    bufp->chgBit(oldp+543,(vlSelfRef.picorv32_wb__02Epcpi_wait));
    bufp->chgBit(oldp+544,(vlSelfRef.picorv32_wb__02Epcpi_ready));
    bufp->chgIData(oldp+545,(vlSelfRef.picorv32_wb__02Eirq),32);
    bufp->chgIData(oldp+546,(vlSelfRef.picorv32_wb__02Eeoi),32);
    bufp->chgBit(oldp+547,(vlSelfRef.picorv32_wb__02Etrace_valid));
    bufp->chgQData(oldp+548,(vlSelfRef.picorv32_wb__02Etrace_data),36);
    bufp->chgBit(oldp+550,(vlSelfRef.mem_instr));
    bufp->chgBit(oldp+551,(vlSelfRef.picorv32_axi__DOT__mem_ready));
    bufp->chgBit(oldp+552,((1U & (~ (IData)(vlSelfRef.wb_rst_i)))));
    bufp->chgBit(oldp+553,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_la_read));
    bufp->chgBit(oldp+554,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_la_write));
    bufp->chgBit(oldp+555,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__clear_prefetched_high_word));
    bufp->chgBit(oldp+556,(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__mem_done));
}

void Vpicorv32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root__trace_cleanup\n"); );
    // Init
    Vpicorv32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32___024root*>(voidSelf);
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
