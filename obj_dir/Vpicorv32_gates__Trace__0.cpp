// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpicorv32_gates__Syms.h"


void Vpicorv32_gates___024root__trace_chg_0_sub_0(Vpicorv32_gates___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpicorv32_gates___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root__trace_chg_0\n"); );
    // Init
    Vpicorv32_gates___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_gates___024root*>(voidSelf);
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpicorv32_gates___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpicorv32_gates___024root__trace_chg_0_sub_0(Vpicorv32_gates___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgIData(oldp+0,(((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3045) 
                                    << 0x1eU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3043) 
                                                 << 0x1dU)) 
                                  | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3044) 
                                      << 0x1bU) | (
                                                   ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3041) 
                                                    << 0x1aU) 
                                                   | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3042) 
                                                      << 0x18U)))) 
                                 | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3039) 
                                      << 0x17U) | (
                                                   ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3040) 
                                                    << 0x15U) 
                                                   | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3037) 
                                                      << 0x14U))) 
                                    | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3038) 
                                        << 0x12U) | 
                                       ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3035) 
                                        << 0x11U)))) 
                                | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3036) 
                                      << 0xfU) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3033) 
                                                   << 0xeU) 
                                                  | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3034) 
                                                     << 0xcU))) 
                                    | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3031) 
                                        << 0xbU) | 
                                       (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3032) 
                                         << 9U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3029) 
                                                   << 8U)))) 
                                   | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3030) 
                                        << 6U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3027) 
                                                  << 5U)) 
                                      | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3028) 
                                          << 3U) | 
                                         (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3024) 
                                           << 2U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3026))))))),32);
        bufp->chgIData(oldp+1,(((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3067) 
                                    << 0x1eU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3065) 
                                                 << 0x1dU)) 
                                  | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3066) 
                                      << 0x1bU) | (
                                                   ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3063) 
                                                    << 0x1aU) 
                                                   | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3064) 
                                                      << 0x18U)))) 
                                 | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3061) 
                                      << 0x17U) | (
                                                   ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3062) 
                                                    << 0x15U) 
                                                   | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3059) 
                                                      << 0x14U))) 
                                    | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3060) 
                                        << 0x12U) | 
                                       ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3057) 
                                        << 0x11U)))) 
                                | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3058) 
                                      << 0xfU) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3055) 
                                                   << 0xeU) 
                                                  | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3056) 
                                                     << 0xcU))) 
                                    | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3053) 
                                        << 0xbU) | 
                                       (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3054) 
                                         << 9U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3051) 
                                                   << 8U)))) 
                                   | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3052) 
                                       << 6U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3049) 
                                                  << 5U) 
                                                 | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5340)))))),32);
        bufp->chgIData(oldp+2,(vlSelfRef.picorv32__DOT__decoded_imm_j),32);
        bufp->chgCData(oldp+3,(vlSelfRef.picorv32__DOT__decoded_rs1),5);
        bufp->chgCData(oldp+4,(vlSelfRef.picorv32__DOT__decoded_rs2),5);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+5,(vlSelfRef.picorv32__DOT__alu_out_q),32);
        bufp->chgQData(oldp+6,(vlSelfRef.picorv32__DOT__count_cycle),64);
        bufp->chgQData(oldp+8,(vlSelfRef.picorv32__DOT__count_instr),64);
        bufp->chgCData(oldp+10,(vlSelfRef.picorv32__DOT__cpu_state),8);
        bufp->chgIData(oldp+11,(vlSelfRef.picorv32__DOT__cpuregs__05b0__05d),32);
        bufp->chgIData(oldp+12,(vlSelfRef.picorv32__DOT__cpuregs__05b10__05d),32);
        bufp->chgIData(oldp+13,(vlSelfRef.picorv32__DOT__cpuregs__05b11__05d),32);
        bufp->chgIData(oldp+14,(vlSelfRef.picorv32__DOT__cpuregs__05b12__05d),32);
        bufp->chgIData(oldp+15,(vlSelfRef.picorv32__DOT__cpuregs__05b13__05d),32);
        bufp->chgIData(oldp+16,(vlSelfRef.picorv32__DOT__cpuregs__05b14__05d),32);
        bufp->chgIData(oldp+17,(vlSelfRef.picorv32__DOT__cpuregs__05b15__05d),32);
        bufp->chgIData(oldp+18,(vlSelfRef.picorv32__DOT__cpuregs__05b16__05d),32);
        bufp->chgIData(oldp+19,(vlSelfRef.picorv32__DOT__cpuregs__05b17__05d),32);
        bufp->chgIData(oldp+20,(vlSelfRef.picorv32__DOT__cpuregs__05b18__05d),32);
        bufp->chgIData(oldp+21,(vlSelfRef.picorv32__DOT__cpuregs__05b19__05d),32);
        bufp->chgIData(oldp+22,(vlSelfRef.picorv32__DOT__cpuregs__05b1__05d),32);
        bufp->chgIData(oldp+23,(vlSelfRef.picorv32__DOT__cpuregs__05b20__05d),32);
        bufp->chgIData(oldp+24,(vlSelfRef.picorv32__DOT__cpuregs__05b21__05d),32);
        bufp->chgIData(oldp+25,(vlSelfRef.picorv32__DOT__cpuregs__05b22__05d),32);
        bufp->chgIData(oldp+26,(vlSelfRef.picorv32__DOT__cpuregs__05b23__05d),32);
        bufp->chgIData(oldp+27,(vlSelfRef.picorv32__DOT__cpuregs__05b24__05d),32);
        bufp->chgIData(oldp+28,(vlSelfRef.picorv32__DOT__cpuregs__05b25__05d),32);
        bufp->chgIData(oldp+29,(vlSelfRef.picorv32__DOT__cpuregs__05b26__05d),32);
        bufp->chgIData(oldp+30,(vlSelfRef.picorv32__DOT__cpuregs__05b27__05d),32);
        bufp->chgIData(oldp+31,(vlSelfRef.picorv32__DOT__cpuregs__05b28__05d),32);
        bufp->chgIData(oldp+32,(vlSelfRef.picorv32__DOT__cpuregs__05b29__05d),32);
        bufp->chgIData(oldp+33,(vlSelfRef.picorv32__DOT__cpuregs__05b2__05d),32);
        bufp->chgIData(oldp+34,(vlSelfRef.picorv32__DOT__cpuregs__05b30__05d),32);
        bufp->chgIData(oldp+35,(vlSelfRef.picorv32__DOT__cpuregs__05b31__05d),32);
        bufp->chgIData(oldp+36,(vlSelfRef.picorv32__DOT__cpuregs__05b3__05d),32);
        bufp->chgIData(oldp+37,(vlSelfRef.picorv32__DOT__cpuregs__05b4__05d),32);
        bufp->chgIData(oldp+38,(vlSelfRef.picorv32__DOT__cpuregs__05b5__05d),32);
        bufp->chgIData(oldp+39,(vlSelfRef.picorv32__DOT__cpuregs__05b6__05d),32);
        bufp->chgIData(oldp+40,(vlSelfRef.picorv32__DOT__cpuregs__05b7__05d),32);
        bufp->chgIData(oldp+41,(vlSelfRef.picorv32__DOT__cpuregs__05b8__05d),32);
        bufp->chgIData(oldp+42,(vlSelfRef.picorv32__DOT__cpuregs__05b9__05d),32);
        bufp->chgBit(oldp+43,(((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
                               & (IData)(vlSelfRef.picorv32__DOT___00015_))));
        bufp->chgIData(oldp+44,(vlSelfRef.picorv32__DOT__decoded_imm),32);
        bufp->chgCData(oldp+45,(vlSelfRef.picorv32__DOT__decoded_rd),5);
        bufp->chgBit(oldp+46,(vlSelfRef.picorv32__DOT__decoder_pseudo_trigger));
        bufp->chgBit(oldp+47,(vlSelfRef.picorv32__DOT__decoder_trigger));
        bufp->chgBit(oldp+48,(vlSelfRef.picorv32__DOT__instr_add));
        bufp->chgBit(oldp+49,(vlSelfRef.picorv32__DOT__instr_addi));
        bufp->chgBit(oldp+50,(vlSelfRef.picorv32__DOT__instr_and));
        bufp->chgBit(oldp+51,(vlSelfRef.picorv32__DOT__instr_andi));
        bufp->chgBit(oldp+52,(vlSelfRef.picorv32__DOT__instr_auipc));
        bufp->chgBit(oldp+53,(vlSelfRef.picorv32__DOT__instr_beq));
        bufp->chgBit(oldp+54,(vlSelfRef.picorv32__DOT__instr_bge));
        bufp->chgBit(oldp+55,(vlSelfRef.picorv32__DOT__instr_bgeu));
        bufp->chgBit(oldp+56,(vlSelfRef.picorv32__DOT__instr_blt));
        bufp->chgBit(oldp+57,(vlSelfRef.picorv32__DOT__instr_bltu));
        bufp->chgBit(oldp+58,(vlSelfRef.picorv32__DOT__instr_bne));
        bufp->chgBit(oldp+59,(vlSelfRef.picorv32__DOT__instr_fence));
        bufp->chgBit(oldp+60,(vlSelfRef.picorv32__DOT__instr_jal));
        bufp->chgBit(oldp+61,(vlSelfRef.picorv32__DOT__instr_jalr));
        bufp->chgBit(oldp+62,(vlSelfRef.picorv32__DOT__instr_lb));
        bufp->chgBit(oldp+63,(vlSelfRef.picorv32__DOT__instr_lbu));
        bufp->chgBit(oldp+64,(vlSelfRef.picorv32__DOT__instr_lh));
        bufp->chgBit(oldp+65,(vlSelfRef.picorv32__DOT__instr_lhu));
        bufp->chgBit(oldp+66,(vlSelfRef.picorv32__DOT__instr_lui));
        bufp->chgBit(oldp+67,(vlSelfRef.picorv32__DOT__instr_lw));
        bufp->chgBit(oldp+68,(vlSelfRef.picorv32__DOT__instr_or));
        bufp->chgBit(oldp+69,(vlSelfRef.picorv32__DOT__instr_ori));
        bufp->chgBit(oldp+70,(vlSelfRef.picorv32__DOT__instr_rdcycle));
        bufp->chgBit(oldp+71,(vlSelfRef.picorv32__DOT__instr_rdcycleh));
        bufp->chgBit(oldp+72,(vlSelfRef.picorv32__DOT__instr_rdinstr));
        bufp->chgBit(oldp+73,(vlSelfRef.picorv32__DOT__instr_rdinstrh));
        bufp->chgBit(oldp+74,(vlSelfRef.picorv32__DOT__instr_sb));
        bufp->chgBit(oldp+75,(vlSelfRef.picorv32__DOT__instr_sh));
        bufp->chgBit(oldp+76,(vlSelfRef.picorv32__DOT__instr_sll));
        bufp->chgBit(oldp+77,(vlSelfRef.picorv32__DOT__instr_slli));
        bufp->chgBit(oldp+78,(vlSelfRef.picorv32__DOT__instr_slt));
        bufp->chgBit(oldp+79,(vlSelfRef.picorv32__DOT__instr_slti));
        bufp->chgBit(oldp+80,(vlSelfRef.picorv32__DOT__instr_sltiu));
        bufp->chgBit(oldp+81,(vlSelfRef.picorv32__DOT__instr_sltu));
        bufp->chgBit(oldp+82,(vlSelfRef.picorv32__DOT__instr_sra));
        bufp->chgBit(oldp+83,(vlSelfRef.picorv32__DOT__instr_srai));
        bufp->chgBit(oldp+84,(vlSelfRef.picorv32__DOT__instr_srl));
        bufp->chgBit(oldp+85,(vlSelfRef.picorv32__DOT__instr_srli));
        bufp->chgBit(oldp+86,(vlSelfRef.picorv32__DOT__instr_sub));
        bufp->chgBit(oldp+87,(vlSelfRef.picorv32__DOT__instr_sw));
        bufp->chgBit(oldp+88,((1U & (~ (IData)(vlSelfRef.picorv32__DOT___00677_)))));
        bufp->chgBit(oldp+89,(vlSelfRef.picorv32__DOT__instr_xor));
        bufp->chgBit(oldp+90,(vlSelfRef.picorv32__DOT__instr_xori));
        bufp->chgBit(oldp+91,(vlSelfRef.picorv32__DOT__is_alu_reg_imm));
        bufp->chgBit(oldp+92,(vlSelfRef.picorv32__DOT__is_alu_reg_reg));
        bufp->chgBit(oldp+93,(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        bufp->chgBit(oldp+94,(vlSelfRef.picorv32__DOT__is_compare));
        bufp->chgBit(oldp+95,(vlSelfRef.picorv32__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        bufp->chgBit(oldp+96,(vlSelfRef.picorv32__DOT__is_lb_lh_lw_lbu_lhu));
        bufp->chgBit(oldp+97,(vlSelfRef.picorv32__DOT__is_lbu_lhu_lw));
        bufp->chgBit(oldp+98,(vlSelfRef.picorv32__DOT__is_lui_auipc_jal));
        bufp->chgBit(oldp+99,(vlSelfRef.picorv32__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        bufp->chgBit(oldp+100,(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        bufp->chgBit(oldp+101,(vlSelfRef.picorv32__DOT__is_sb_sh_sw));
        bufp->chgBit(oldp+102,(vlSelfRef.picorv32__DOT__is_sll_srl_sra));
        bufp->chgBit(oldp+103,(vlSelfRef.picorv32__DOT__is_slli_srli_srai));
        bufp->chgBit(oldp+104,(vlSelfRef.picorv32__DOT__is_slti_blt_slt));
        bufp->chgBit(oldp+105,(vlSelfRef.picorv32__DOT__is_sltiu_bltu_sltu));
        bufp->chgBit(oldp+106,(vlSelfRef.picorv32__DOT__latched_branch));
        bufp->chgBit(oldp+107,(vlSelfRef.picorv32__DOT__latched_is_lb));
        bufp->chgBit(oldp+108,(vlSelfRef.picorv32__DOT__latched_is_lh));
        bufp->chgBit(oldp+109,(vlSelfRef.picorv32__DOT__latched_is_lu));
        bufp->chgCData(oldp+110,(vlSelfRef.picorv32__DOT__latched_rd),5);
        bufp->chgBit(oldp+111,(vlSelfRef.picorv32__DOT__latched_stalu));
        bufp->chgBit(oldp+112,(vlSelfRef.picorv32__DOT__latched_store));
        bufp->chgBit(oldp+113,(vlSelfRef.picorv32__DOT__mem_do_prefetch));
        bufp->chgBit(oldp+114,(vlSelfRef.picorv32__DOT__mem_do_rdata));
        bufp->chgBit(oldp+115,(vlSelfRef.picorv32__DOT__mem_do_rinst));
        bufp->chgBit(oldp+116,(vlSelfRef.picorv32__DOT__mem_do_wdata));
        bufp->chgIData(oldp+117,(vlSelfRef.picorv32__DOT__mem_rdata_q),32);
        bufp->chgCData(oldp+118,(vlSelfRef.picorv32__DOT__mem_state),2);
        bufp->chgCData(oldp+119,(vlSelfRef.picorv32__DOT__mem_wordsize),2);
        bufp->chgIData(oldp+120,(vlSelfRef.picorv32__DOT__next_pc),32);
        bufp->chgIData(oldp+121,(vlSelfRef.picorv32__DOT__reg_next_pc),32);
        bufp->chgIData(oldp+122,(vlSelfRef.picorv32__DOT__reg_op1),32);
        bufp->chgIData(oldp+123,(vlSelfRef.picorv32__DOT__reg_op2),32);
        bufp->chgIData(oldp+124,(vlSelfRef.picorv32__DOT__reg_out),32);
        bufp->chgIData(oldp+125,(vlSelfRef.picorv32__DOT__reg_pc),32);
        bufp->chgCData(oldp+126,(vlSelfRef.picorv32__DOT__reg_sh),5);
        bufp->chgBit(oldp+127,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b1__05d));
        bufp->chgBit(oldp+128,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b2__05d));
        bufp->chgBit(oldp+129,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b3__05d));
        bufp->chgBit(oldp+130,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b4__05d));
        bufp->chgBit(oldp+131,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b5__05d));
        bufp->chgBit(oldp+132,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b6__05d));
        bufp->chgBit(oldp+133,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b7__05d));
        bufp->chgBit(oldp+134,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b8__05d));
        bufp->chgBit(oldp+135,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b9__05d));
        bufp->chgBit(oldp+136,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b10__05d));
        bufp->chgBit(oldp+137,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b11__05d));
        bufp->chgBit(oldp+138,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b12__05d));
        bufp->chgBit(oldp+139,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b13__05d));
        bufp->chgBit(oldp+140,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b14__05d));
        bufp->chgBit(oldp+141,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b15__05d));
        bufp->chgBit(oldp+142,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b16__05d));
        bufp->chgBit(oldp+143,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b17__05d));
        bufp->chgBit(oldp+144,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b18__05d));
        bufp->chgBit(oldp+145,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b19__05d));
        bufp->chgBit(oldp+146,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b20__05d));
        bufp->chgBit(oldp+147,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b21__05d));
        bufp->chgBit(oldp+148,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b22__05d));
        bufp->chgBit(oldp+149,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b23__05d));
        bufp->chgBit(oldp+150,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b24__05d));
        bufp->chgBit(oldp+151,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b25__05d));
        bufp->chgBit(oldp+152,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b26__05d));
        bufp->chgBit(oldp+153,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b27__05d));
        bufp->chgBit(oldp+154,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b28__05d));
        bufp->chgBit(oldp+155,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b29__05d));
        bufp->chgBit(oldp+156,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b30__05d));
        bufp->chgBit(oldp+157,(vlSelfRef.picorv32__DOT__reg_pc_reg__05b31__05d));
        bufp->chgBit(oldp+158,(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b0__05d));
        bufp->chgBit(oldp+159,(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b1__05d));
        bufp->chgBit(oldp+160,(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b2__05d));
        bufp->chgBit(oldp+161,(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b3__05d));
        bufp->chgBit(oldp+162,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b10__05d));
        bufp->chgBit(oldp+163,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b2__05d));
        bufp->chgBit(oldp+164,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b3__05d));
        bufp->chgBit(oldp+165,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b4__05d));
        bufp->chgBit(oldp+166,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b5__05d));
        bufp->chgBit(oldp+167,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b6__05d));
        bufp->chgBit(oldp+168,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b7__05d));
        bufp->chgBit(oldp+169,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b8__05d));
        bufp->chgBit(oldp+170,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b9__05d));
        bufp->chgBit(oldp+171,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b10__05d));
        bufp->chgBit(oldp+172,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b11__05d));
        bufp->chgBit(oldp+173,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b12__05d));
        bufp->chgBit(oldp+174,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b13__05d));
        bufp->chgBit(oldp+175,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b14__05d));
        bufp->chgBit(oldp+176,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b15__05d));
        bufp->chgBit(oldp+177,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b16__05d));
        bufp->chgBit(oldp+178,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b17__05d));
        bufp->chgBit(oldp+179,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b18__05d));
        bufp->chgBit(oldp+180,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b19__05d));
        bufp->chgBit(oldp+181,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b20__05d));
        bufp->chgBit(oldp+182,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b21__05d));
        bufp->chgBit(oldp+183,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b22__05d));
        bufp->chgBit(oldp+184,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b23__05d));
        bufp->chgBit(oldp+185,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b24__05d));
        bufp->chgBit(oldp+186,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b25__05d));
        bufp->chgBit(oldp+187,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b26__05d));
        bufp->chgBit(oldp+188,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b27__05d));
        bufp->chgBit(oldp+189,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b28__05d));
        bufp->chgBit(oldp+190,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b29__05d));
        bufp->chgBit(oldp+191,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b30__05d));
        bufp->chgBit(oldp+192,(vlSelfRef.picorv32__DOT__mem_addr_reg__05b31__05d));
        bufp->chgBit(oldp+193,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b12__05d));
        bufp->chgBit(oldp+194,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b13__05d));
        bufp->chgBit(oldp+195,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b14__05d));
        bufp->chgBit(oldp+196,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b18__05d));
        bufp->chgBit(oldp+197,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b19__05d));
        bufp->chgBit(oldp+198,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b30__05d));
        bufp->chgBit(oldp+199,(vlSelfRef.picorv32__DOT__decoded_rs1_reg__05b0__05d));
        bufp->chgBit(oldp+200,(vlSelfRef.picorv32__DOT__decoded_rs1_reg__05b1__05d));
        bufp->chgBit(oldp+201,(vlSelfRef.picorv32__DOT__decoded_rs1_reg__05b2__05d));
        bufp->chgBit(oldp+202,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b4__05d));
        bufp->chgBit(oldp+203,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b8__05d));
        bufp->chgBit(oldp+204,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b9__05d));
        bufp->chgBit(oldp+205,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b5__05d));
        bufp->chgBit(oldp+206,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b6__05d));
        bufp->chgBit(oldp+207,(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b7__05d));
    }
    bufp->chgBit(oldp+208,(vlSelfRef.clk));
    bufp->chgIData(oldp+209,(vlSelfRef.eoi),32);
    bufp->chgIData(oldp+210,(vlSelfRef.irq),32);
    bufp->chgIData(oldp+211,(vlSelfRef.mem_addr),32);
    bufp->chgBit(oldp+212,(vlSelfRef.mem_instr));
    bufp->chgIData(oldp+213,(vlSelfRef.mem_la_addr),32);
    bufp->chgBit(oldp+214,(vlSelfRef.mem_la_read));
    bufp->chgIData(oldp+215,(vlSelfRef.mem_la_wdata),32);
    bufp->chgBit(oldp+216,(vlSelfRef.mem_la_write));
    bufp->chgCData(oldp+217,(vlSelfRef.mem_la_wstrb),4);
    bufp->chgIData(oldp+218,(vlSelfRef.mem_rdata),32);
    bufp->chgBit(oldp+219,(vlSelfRef.mem_ready));
    bufp->chgBit(oldp+220,(vlSelfRef.mem_valid));
    bufp->chgIData(oldp+221,(vlSelfRef.mem_wdata),32);
    bufp->chgCData(oldp+222,(vlSelfRef.mem_wstrb),4);
    bufp->chgIData(oldp+223,(vlSelfRef.pcpi_insn),32);
    bufp->chgIData(oldp+224,(vlSelfRef.pcpi_rd),32);
    bufp->chgBit(oldp+225,(vlSelfRef.pcpi_ready));
    bufp->chgIData(oldp+226,(vlSelfRef.pcpi_rs1),32);
    bufp->chgIData(oldp+227,(vlSelfRef.pcpi_rs2),32);
    bufp->chgBit(oldp+228,(vlSelfRef.pcpi_valid));
    bufp->chgBit(oldp+229,(vlSelfRef.pcpi_wait));
    bufp->chgBit(oldp+230,(vlSelfRef.pcpi_wr));
    bufp->chgBit(oldp+231,(vlSelfRef.resetn));
    bufp->chgQData(oldp+232,(vlSelfRef.trace_data),36);
    bufp->chgBit(oldp+234,(vlSelfRef.trace_valid));
    bufp->chgBit(oldp+235,(vlSelfRef.trap));
    bufp->chgIData(oldp+236,(vlSelfRef.picorv32__DOT__alu_add_sub),32);
    bufp->chgBit(oldp+237,((1U & (~ ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                     >> 4U)))));
    bufp->chgBit(oldp+238,(vlSelfRef.picorv32__DOT__alu_lts));
    bufp->chgBit(oldp+239,((1U & (~ ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                     >> 2U)))));
    bufp->chgIData(oldp+240,(vlSelfRef.picorv32__DOT__alu_out),32);
    bufp->chgBit(oldp+241,(vlSelfRef.picorv32__DOT__alu_out_0));
    bufp->chgIData(oldp+242,((((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5352) 
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
                                       << 0x12U)) | 
                                     (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5366) 
                                       << 0x11U) | 
                                      ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5365) 
                                       << 0x10U))))) 
                              | ((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5368) 
                                     << 0xfU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5367) 
                                                 << 0xeU)) 
                                   | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5370) 
                                       << 0xdU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5369) 
                                                   << 0xcU))) 
                                  | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5372) 
                                       << 0xbU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5371) 
                                                   << 0xaU)) 
                                     | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5374) 
                                         << 9U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5373) 
                                                   << 8U)))) 
                                 | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5376) 
                                       << 7U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5375) 
                                                 << 6U)) 
                                     | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5378) 
                                         << 5U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5377) 
                                                   << 4U))) 
                                    | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5380) 
                                         << 3U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5379) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5382) 
                                           << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5381))))))),32);
    bufp->chgBit(oldp+243,(vlSelfRef.picorv32__DOT__mem_done));
    bufp->chgIData(oldp+244,(vlSelfRef.picorv32__DOT__mem_rdata_latched),32);
    bufp->chgIData(oldp+245,(vlSelfRef.picorv32__DOT__mem_rdata_word),32);
    bufp->chgBit(oldp+246,(vlSelfRef.picorv32__DOT__mem_xfer));
}

void Vpicorv32_gates___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root__trace_cleanup\n"); );
    // Init
    Vpicorv32_gates___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_gates___024root*>(voidSelf);
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
