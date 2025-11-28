// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpicorv32_wrapper__Syms.h"


void Vpicorv32_wrapper___024root__trace_chg_0_sub_0(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpicorv32_wrapper___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_chg_0\n"); );
    // Init
    Vpicorv32_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_wrapper___024root*>(voidSelf);
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpicorv32_wrapper___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpicorv32_wrapper___024root__trace_chg_0_sub_0(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_read));
        bufp->chgBit(oldp+1,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_write));
        bufp->chgIData(oldp+2,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word),32);
        bufp->chgBit(oldp+3,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer));
        bufp->chgBit(oldp+4,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word));
        bufp->chgIData(oldp+5,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched),32);
        bufp->chgBit(oldp+6,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+7,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_instr));
        bufp->chgIData(oldp+8,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wdata),32);
        bufp->chgCData(oldp+9,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wstrb),4);
        bufp->chgIData(oldp+10,((((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch) 
                                  | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst))
                                  ? (0xfffffffcU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_pc)
                                  : (0xfffffffcU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1))),32);
        bufp->chgIData(oldp+11,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wdata),32);
        bufp->chgCData(oldp+12,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wstrb),4);
        bufp->chgBit(oldp+13,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__pcpi_valid));
        bufp->chgIData(oldp+14,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__pcpi_insn),32);
        bufp->chgIData(oldp+15,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1),32);
        bufp->chgIData(oldp+16,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2),32);
        bufp->chgIData(oldp+17,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__eoi),32);
        bufp->chgBit(oldp+18,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__trace_valid));
        bufp->chgQData(oldp+19,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__trace_data),36);
        bufp->chgQData(oldp+21,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__count_cycle),64);
        bufp->chgQData(oldp+23,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__count_instr),64);
        bufp->chgIData(oldp+25,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_pc),32);
        bufp->chgIData(oldp+26,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_next_pc),32);
        bufp->chgIData(oldp+27,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_out),32);
        bufp->chgCData(oldp+28,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_sh),5);
        bufp->chgIData(oldp+29,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode),32);
        bufp->chgIData(oldp+30,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_opcode),32);
        bufp->chgIData(oldp+31,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_addr),32);
        bufp->chgIData(oldp+32,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_pc),32);
        bufp->chgBit(oldp+33,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_delay));
        bufp->chgBit(oldp+34,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_active));
        bufp->chgIData(oldp+35,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_mask),32);
        bufp->chgIData(oldp+36,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_pending),32);
        bufp->chgIData(oldp+37,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__timer),32);
        bufp->chgIData(oldp+38,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[0]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[1]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[2]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[3]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[4]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[5]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[6]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[7]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[8]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[9]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[10]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[11]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[12]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[13]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[14]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[15]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[16]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[17]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[18]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[19]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[20]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[21]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[22]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[23]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[24]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[25]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[26]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[27]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[28]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[29]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[30]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[31]),32);
        bufp->chgCData(oldp+70,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state),2);
        bufp->chgCData(oldp+71,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize),2);
        bufp->chgIData(oldp+72,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q),32);
        bufp->chgBit(oldp+73,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch));
        bufp->chgBit(oldp+74,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst));
        bufp->chgBit(oldp+75,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata));
        bufp->chgBit(oldp+76,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata));
        bufp->chgBit(oldp+77,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_secondword));
        bufp->chgBit(oldp+78,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_firstword_reg));
        bufp->chgBit(oldp+79,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__last_mem_valid));
        bufp->chgBit(oldp+80,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__prefetched_high_word));
        bufp->chgBit(oldp+81,(((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch) 
                               | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT____VdfgRegularize_he02009ca_0_0))));
        bufp->chgBit(oldp+82,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lui));
        bufp->chgBit(oldp+83,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_auipc));
        bufp->chgBit(oldp+84,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jal));
        bufp->chgBit(oldp+85,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jalr));
        bufp->chgBit(oldp+86,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_beq));
        bufp->chgBit(oldp+87,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bne));
        bufp->chgBit(oldp+88,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_blt));
        bufp->chgBit(oldp+89,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bge));
        bufp->chgBit(oldp+90,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bltu));
        bufp->chgBit(oldp+91,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bgeu));
        bufp->chgBit(oldp+92,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lb));
        bufp->chgBit(oldp+93,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lh));
        bufp->chgBit(oldp+94,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lw));
        bufp->chgBit(oldp+95,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lbu));
        bufp->chgBit(oldp+96,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lhu));
        bufp->chgBit(oldp+97,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sb));
        bufp->chgBit(oldp+98,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sh));
        bufp->chgBit(oldp+99,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sw));
        bufp->chgBit(oldp+100,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_addi));
        bufp->chgBit(oldp+101,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slti));
        bufp->chgBit(oldp+102,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltiu));
        bufp->chgBit(oldp+103,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xori));
        bufp->chgBit(oldp+104,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_ori));
        bufp->chgBit(oldp+105,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_andi));
        bufp->chgBit(oldp+106,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slli));
        bufp->chgBit(oldp+107,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srli));
        bufp->chgBit(oldp+108,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srai));
        bufp->chgBit(oldp+109,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_add));
        bufp->chgBit(oldp+110,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sub));
        bufp->chgBit(oldp+111,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sll));
        bufp->chgBit(oldp+112,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slt));
        bufp->chgBit(oldp+113,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltu));
        bufp->chgBit(oldp+114,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xor));
        bufp->chgBit(oldp+115,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srl));
        bufp->chgBit(oldp+116,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sra));
        bufp->chgBit(oldp+117,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_or));
        bufp->chgBit(oldp+118,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_and));
        bufp->chgBit(oldp+119,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycle));
        bufp->chgBit(oldp+120,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycleh));
        bufp->chgBit(oldp+121,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstr));
        bufp->chgBit(oldp+122,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstrh));
        bufp->chgBit(oldp+123,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_ecall_ebreak));
        bufp->chgBit(oldp+124,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_fence));
        bufp->chgBit(oldp+125,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_getq));
        bufp->chgBit(oldp+126,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_setq));
        bufp->chgBit(oldp+127,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__compressed_instr));
        bufp->chgBit(oldp+128,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_maskirq));
        bufp->chgBit(oldp+129,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_waitirq));
        bufp->chgBit(oldp+130,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_timer));
        bufp->chgBit(oldp+131,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_trap));
        bufp->chgCData(oldp+132,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rd),5);
        bufp->chgCData(oldp+133,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs1),5);
        bufp->chgCData(oldp+134,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs2),5);
        bufp->chgIData(oldp+135,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm),32);
        bufp->chgIData(oldp+136,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j),32);
        bufp->chgBit(oldp+137,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger));
        bufp->chgBit(oldp+138,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger_q));
        bufp->chgBit(oldp+139,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger));
        bufp->chgBit(oldp+140,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger_q));
        bufp->chgBit(oldp+141,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal));
        bufp->chgBit(oldp+142,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu));
        bufp->chgBit(oldp+143,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_slli_srli_srai));
        bufp->chgBit(oldp+144,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        bufp->chgBit(oldp+145,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sb_sh_sw));
        bufp->chgBit(oldp+146,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sll_srl_sra));
        bufp->chgBit(oldp+147,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        bufp->chgBit(oldp+148,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_slti_blt_slt));
        bufp->chgBit(oldp+149,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sltiu_bltu_sltu));
        bufp->chgBit(oldp+150,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        bufp->chgBit(oldp+151,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lbu_lhu_lw));
        bufp->chgBit(oldp+152,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm));
        bufp->chgBit(oldp+153,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg));
        bufp->chgBit(oldp+154,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_compare));
        bufp->chgBit(oldp+155,(((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycle) 
                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycleh) 
                                   | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstr) 
                                      | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstrh))))));
        bufp->chgQData(oldp+156,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr),64);
        bufp->chgQData(oldp+158,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_instr),64);
        bufp->chgIData(oldp+160,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_imm),32);
        bufp->chgCData(oldp+161,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs1),5);
        bufp->chgCData(oldp+162,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs2),5);
        bufp->chgCData(oldp+163,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rd),5);
        bufp->chgIData(oldp+164,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val),32);
        bufp->chgIData(oldp+165,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val),32);
        bufp->chgBit(oldp+166,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val_valid));
        bufp->chgBit(oldp+167,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val_valid));
        bufp->chgQData(oldp+168,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_ascii_instr),64);
        bufp->chgIData(oldp+170,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_imm),32);
        bufp->chgIData(oldp+171,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_opcode),32);
        bufp->chgCData(oldp+172,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rs1),5);
        bufp->chgCData(oldp+173,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rs2),5);
        bufp->chgCData(oldp+174,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rd),5);
        bufp->chgBit(oldp+175,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_next));
        bufp->chgBit(oldp+176,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__launch_next_insn));
        bufp->chgBit(oldp+177,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_valid_insn));
        bufp->chgQData(oldp+178,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_ascii_instr),64);
        bufp->chgIData(oldp+180,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_imm),32);
        bufp->chgIData(oldp+181,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_opcode),32);
        bufp->chgCData(oldp+182,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs1),5);
        bufp->chgCData(oldp+183,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs2),5);
        bufp->chgCData(oldp+184,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rd),5);
        bufp->chgCData(oldp+185,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state),8);
        bufp->chgCData(oldp+186,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_state),2);
        bufp->chgWData(oldp+187,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_state),128);
        bufp->chgBit(oldp+191,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rinst));
        bufp->chgBit(oldp+192,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rdata));
        bufp->chgBit(oldp+193,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_wdata));
        bufp->chgBit(oldp+194,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store));
        bufp->chgBit(oldp+195,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_stalu));
        bufp->chgBit(oldp+196,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch));
        bufp->chgBit(oldp+197,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_compr));
        bufp->chgBit(oldp+198,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_trace));
        bufp->chgBit(oldp+199,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lu));
        bufp->chgBit(oldp+200,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lh));
        bufp->chgBit(oldp+201,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lb));
        bufp->chgCData(oldp+202,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_rd),5);
        bufp->chgIData(oldp+203,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__current_pc),32);
        bufp->chgBit(oldp+204,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__pcpi_timeout));
        bufp->chgIData(oldp+205,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_irq_pending),32);
        bufp->chgBit(oldp+206,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__do_waitirq));
        bufp->chgIData(oldp+207,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out),32);
        bufp->chgIData(oldp+208,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_q),32);
        bufp->chgBit(oldp+209,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0));
        bufp->chgBit(oldp+210,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0_q));
        bufp->chgBit(oldp+211,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_wait));
        bufp->chgBit(oldp+212,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_wait_2));
        bufp->chgIData(oldp+213,(((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sub)
                                   ? (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                                      - vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2)
                                   : (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                                      + vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2))),32);
        bufp->chgIData(oldp+214,((vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                                  << (0x1fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2))),32);
        bufp->chgIData(oldp+215,((IData)((0x1ffffffffULL 
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
        bufp->chgBit(oldp+216,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_eq));
        bufp->chgBit(oldp+217,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_ltu));
        bufp->chgBit(oldp+218,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_lts));
        bufp->chgBit(oldp+219,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word_q));
        bufp->chgBit(oldp+220,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_write));
        bufp->chgIData(oldp+221,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_wrdata),32);
        bufp->chgIData(oldp+222,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1),32);
        bufp->chgIData(oldp+223,(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs2),32);
    }
    bufp->chgBit(oldp+224,(vlSelfRef.clk));
    bufp->chgBit(oldp+225,(vlSelfRef.resetn));
    bufp->chgBit(oldp+226,(vlSelfRef.trap));
    bufp->chgBit(oldp+227,(vlSelfRef.mem_valid));
    bufp->chgBit(oldp+228,(vlSelfRef.mem_ready));
    bufp->chgIData(oldp+229,(vlSelfRef.mem_addr),32);
    bufp->chgIData(oldp+230,(vlSelfRef.mem_rdata),32);
}

void Vpicorv32_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_cleanup\n"); );
    // Init
    Vpicorv32_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_wrapper___024root*>(voidSelf);
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
