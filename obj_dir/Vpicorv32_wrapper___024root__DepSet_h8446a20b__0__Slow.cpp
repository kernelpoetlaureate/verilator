// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"
#include "Vpicorv32_wrapper___024root.h"

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_static(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_initial(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_final(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__stl(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpicorv32_wrapper___024root___eval_phase__stl(Vpicorv32_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_settle(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vpicorv32_wrapper___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("picorv32_wrapper.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpicorv32_wrapper___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__stl(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpicorv32_wrapper___024root___stl_sequent__TOP__0(Vpicorv32_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vpicorv32_wrapper___024root____Vm_traceActivitySetAll(Vpicorv32_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_stl(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpicorv32_wrapper___024root___stl_sequent__TOP__0(vlSelf);
        Vpicorv32_wrapper___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vpicorv32_wrapper__ConstPool__TABLE_h56414f00_0;

VL_ATTR_COLD void Vpicorv32_wrapper___024root___stl_sequent__TOP__0(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if ((0U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wdata 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wstrb = 0xfU;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word 
            = vlSelfRef.mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wdata 
            = ((vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2 
                << 0x10U) | (0xffffU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2));
        if ((2U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1)) {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wstrb = 0xcU;
            if ((2U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1)) {
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word 
                    = (vlSelfRef.mem_rdata >> 0x10U);
            }
        } else {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wstrb = 3U;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word 
                = (0xffffU & vlSelfRef.mem_rdata);
        }
    } else if ((2U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wdata 
            = ((vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2 
                << 0x18U) | ((0xff0000U & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2 
                                            << 8U)) 
                                | (0xffU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2))));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wstrb 
            = (0xfU & ((IData)(1U) << (3U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1)
                ? ((1U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1)
                    ? (vlSelfRef.mem_rdata >> 0x18U)
                    : (0xffU & (vlSelfRef.mem_rdata 
                                >> 0x10U))) : ((1U 
                                                & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1)
                                                ? (0xffU 
                                                   & (vlSelfRef.mem_rdata 
                                                      >> 8U))
                                                : (0xffU 
                                                   & vlSelfRef.mem_rdata)));
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs1))
            ? vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs
           [vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs1]
            : 0U);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs2))
            ? vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs
           [vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs2]
            : 0U);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state)) 
           & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_write = 0U;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_write 
        = ((IData)(vlSelfRef.resetn) & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state)))) 
                                        & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata)));
    __Vtableidx1 = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_state[0U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_h56414f00_0
        [__Vtableidx1][0U];
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_state[1U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_h56414f00_0
        [__Vtableidx1][1U];
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_state[2U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_h56414f00_0
        [__Vtableidx1][2U];
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_state[3U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_h56414f00_0
        [__Vtableidx1][3U];
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_pc 
        = (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch) 
            & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store))
            ? (0xfffffffeU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_out)
            : vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_next_pc);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_imm 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_imm;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_opcode 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_opcode;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs1 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rs1;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs2 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rs2;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rd 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rd;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__prefetched_high_word)))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.resetn))))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_read 
        = ((IData)(vlSelfRef.resetn) & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state)))) 
                                        & ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst) 
                                           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch) 
                                              | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata)))));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) {
        if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch) {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_write = 1U;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_wrdata 
                = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_pc 
                   + ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch)))) {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_write = 1U;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_stalu)
                    ? vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_q
                    : vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_out);
        }
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT____VdfgRegularize_he02009ca_0_0 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata)));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer 
        = ((IData)(vlSelfRef.mem_ready) & (IData)(vlSelfRef.mem_valid));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_eq 
        = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
           == vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1, vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_ltu 
        = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
           < vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_auipc) 
                       | (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jal) 
                           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jalr) 
                              | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_beq) 
                                 | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bne) 
                                    | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_blt) 
                                       | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bge) 
                                          | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bltu) 
                                             | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bgeu) 
                                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lb) 
                                                   | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lh) 
                                                      | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lw) 
                                                         | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lbu) 
                                                            | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lhu) 
                                                               | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sb) 
                                                                  | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sh) 
                                                                     | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sw) 
                                                                        | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_addi) 
                                                                           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slti) 
                                                                              | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slt) 
                                                                                | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltu)))))))))))))))))))))))))))))) 
                          | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xor) 
                             | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srl) 
                                | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sra) 
                                   | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_or) 
                                      | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_and) 
                                         | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycle) 
                                            | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycleh) 
                                               | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstr) 
                                                  | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstrh) 
                                                     | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_fence) 
                                                        | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_getq) 
                                                           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_setq) 
                                                              | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__compressed_instr) 
                                                                 | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_maskirq) 
                                                                    | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_timer) 
                                                                       | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_waitirq)))))))))))))))))))));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lui) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6c7569ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_auipc) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6175697063ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jal) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6a616cULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jalr) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6a616c72ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_beq) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x626571ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bne) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x626e65ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_blt) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x626c74ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bge) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x626765ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bltu) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x626c7475ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bgeu) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x62676575ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lb) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6c62ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lh) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6c68ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lw) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6c77ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lbu) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6c6275ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lhu) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6c6875ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sb) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x7362ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sh) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x7368ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sw) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x7377ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_addi) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x61646469ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slti) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x736c7469ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltiu) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x736c746975ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xori) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x786f7269ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_ori) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6f7269ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_andi) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x616e6469ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slli) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x736c6c69ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srli) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x73726c69ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srai) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x73726169ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_add) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x616464ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sub) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x737562ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sll) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x736c6cULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slt) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x736c74ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltu) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x736c7475ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xor) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x786f72ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srl) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x73726cULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sra) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x737261ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_or) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6f72ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_and) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x616e64ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycle) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x72646379636c65ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycleh) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstr) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x7264696e737472ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstrh) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_fence) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x66656e6365ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_getq) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x67657471ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_setq) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x73657471ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__compressed_instr) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x726574697271ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_maskirq) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x6d61736b697271ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_waitirq) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x77616974697271ULL;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_timer) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = 0x74696d6572ULL;
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer)
            ? vlSelfRef.mem_rdata : vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done 
        = ((IData)(vlSelfRef.resetn) & (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer) 
                                         & ((0U != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state)) 
                                            & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT____VdfgRegularize_he02009ca_0_0))) 
                                        | ((3U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state)) 
                                           & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst))));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0 = 0U;
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_beq) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_eq;
    } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bne) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_eq)));
    } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bge) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_lts)));
    } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bgeu) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_ltu)));
    } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_slti_blt_slt) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_lts;
    } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_ltu;
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out = 0U;
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sub)
                ? (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                   - vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2)
                : (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                   + vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2));
    } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_compare) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xori) 
                | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xor))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out 
            = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
               ^ vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_ori) 
                | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_or))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out 
            = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
               | vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_andi) 
                | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_and))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out 
            = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
               & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2);
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_instr 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_ascii_instr;
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_next) {
        if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_imm;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_opcode 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_opcode;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs1 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs1;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs2;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rd;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode))
                    ? vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode
                    : (0xffffU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode));
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs1 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs1;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs2;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rd;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr;
        }
    }
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_triggers__stl(Vpicorv32_wrapper___024root* vlSelf);

VL_ATTR_COLD bool Vpicorv32_wrapper___024root___eval_phase__stl(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpicorv32_wrapper___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vpicorv32_wrapper___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__ico(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__act(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__nba(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpicorv32_wrapper___024root____Vm_traceActivitySetAll(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root___ctor_var_reset(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->trap = VL_RAND_RESET_I(1);
    vlSelf->mem_valid = VL_RAND_RESET_I(1);
    vlSelf->mem_ready = VL_RAND_RESET_I(1);
    vlSelf->mem_addr = VL_RAND_RESET_I(32);
    vlSelf->mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_la_read = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_la_write = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__eoi = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__trace_valid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__trace_data = VL_RAND_RESET_Q(36);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__count_cycle = VL_RAND_RESET_Q(64);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__count_instr = VL_RAND_RESET_Q(64);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__reg_op2 = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__reg_sh = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_insn_addr = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__irq_delay = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__irq_active = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__irq_mask = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__irq_pending = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__timer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->picorv32_wrapper__DOT__cpu__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_xfer = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_la_secondword = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_la_firstword_reg = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__last_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_16bit_buffer = VL_RAND_RESET_I(16);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__mem_done = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_lui = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_auipc = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_jal = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_jalr = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_beq = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_bne = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_blt = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_bge = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_bltu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_lb = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_lh = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_lw = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_lbu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_lhu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_sb = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_sh = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_sw = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_addi = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_slti = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_xori = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_ori = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_andi = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_slli = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_srli = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_srai = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_add = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_sub = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_sll = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_slt = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_sltu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_xor = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_srl = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_sra = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_or = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_and = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_fence = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_getq = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_setq = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_timer = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__instr_trap = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__decoded_rd = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__decoded_rs1 = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__decoded_imm = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__compressed_instr = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_sll_srl_sra = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__is_compare = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val_valid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val_valid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__q_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__q_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__q_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__q_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__q_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__q_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_next = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__launch_next_insn = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_valid_insn = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__cached_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__cached_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__cached_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__cached_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__cpu_state = VL_RAND_RESET_I(8);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__irq_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_state);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__latched_store = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__latched_stalu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__latched_branch = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__latched_compr = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__latched_trace = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__latched_rd = VL_RAND_RESET_I(5);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__next_irq_pending = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__do_waitirq = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__alu_out_q = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__alu_out_0_q = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__alu_wait = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__alu_wait_2 = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__alu_eq = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__alu_ltu = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__alu_lts = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word_q = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wrapper__DOT__cpu__DOT____VdfgRegularize_he02009ca_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
