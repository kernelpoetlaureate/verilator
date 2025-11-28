// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"
#include "Vpicorv32_wrapper___024root.h"

void Vpicorv32_wrapper___024root___ico_sequent__TOP__0(Vpicorv32_wrapper___024root* vlSelf);

void Vpicorv32_wrapper___024root___eval_ico(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_wrapper___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vpicorv32_wrapper___024root___ico_sequent__TOP__0(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word 
            = vlSelfRef.mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize))) {
        if ((2U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1)) {
            if ((2U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1)) {
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word 
                    = (vlSelfRef.mem_rdata >> 0x10U);
            }
        } else {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word 
                = (0xffffU & vlSelfRef.mem_rdata);
        }
    } else if ((2U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize))) {
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
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_write 
        = ((IData)(vlSelfRef.resetn) & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state)))) 
                                        & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata)));
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
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer 
        = ((IData)(vlSelfRef.mem_ready) & (IData)(vlSelfRef.mem_valid));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer)
            ? vlSelfRef.mem_rdata : vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done 
        = ((IData)(vlSelfRef.resetn) & (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer) 
                                         & ((0U != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state)) 
                                            & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT____VdfgRegularize_he02009ca_0_0))) 
                                        | ((3U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state)) 
                                           & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst))));
}

void Vpicorv32_wrapper___024root___eval_triggers__ico(Vpicorv32_wrapper___024root* vlSelf);

bool Vpicorv32_wrapper___024root___eval_phase__ico(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vpicorv32_wrapper___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vpicorv32_wrapper___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vpicorv32_wrapper___024root___eval_act(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vpicorv32_wrapper___024root___nba_sequent__TOP__0(Vpicorv32_wrapper___024root* vlSelf);

void Vpicorv32_wrapper___024root___eval_nba(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32_wrapper___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vpicorv32_wrapper__ConstPool__TABLE_h56414f00_0;

VL_INLINE_OPT void Vpicorv32_wrapper___024root___nba_sequent__TOP__0(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_state;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_sh;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_out;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_out = 0;
    CData/*0:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_trigger;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_wordsize;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lu;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lh;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lb;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lb = 0;
    IData/*31:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_pc;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_pc = 0;
    CData/*0:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 = 0;
    IData/*31:0*/ __VdlyVal__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0;
    __VdlyVal__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0;
    __VdlyDim0__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0;
    __VdlySet__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0 = 0;
    // Body
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_sh 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_sh;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lu 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lu;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lh 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lh;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lb 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lb;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_trigger 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_pc 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_pc;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_wordsize 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_out 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_out;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1;
    __VdlySet__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0 = 0U;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_state 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state;
    if ((((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_rd)))) {
        __VdlyVal__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_wrdata;
        __VdlyDim0__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_rd;
        __VdlySet__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0 = 1U;
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_wait_2 = 0U;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__trace_valid = 0U;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__trace_data = 0ULL;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_wait = 0U;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__count_cycle = 0ULL;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__count_instr = 0ULL;
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__launch_next_insn) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_addr 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_pc;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val_valid = 0U;
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rd 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rd;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rs2 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs2;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rs1 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs1;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_opcode 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_opcode;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_imm 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_imm;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_ascii_instr 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_instr;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word_q 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0_q 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_irq_pending = 0U;
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_trace = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_mask = 0xffffffffU;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__pcpi_valid = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__pcpi_timeout = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__eoi = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_irq_pending = 0U;
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_pending 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_irq_pending;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_next 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__launch_next_insn;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger;
    if ((1U & (~ ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.trap))))) {
        if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_write) {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wdata 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_read) 
             | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_write))) {
            vlSelfRef.mem_addr = (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch) 
                                   | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst))
                                   ? (0xfffffffcU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_pc)
                                   : (0xfffffffcU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1));
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.trap)))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_valid_insn = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__launch_next_insn) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__prefetched_high_word = 0U;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger_q) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_ascii_instr 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode))
                ? vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode
                : (0xffffU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rd 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rd;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs1 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs1;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs2 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs2;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_imm 
            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm;
    }
    if (__VdlySet__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs[__VdlyDim0__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0] 
            = __VdlyVal__picorv32_wrapper__DOT__cpu__DOT__cpuregs__v0;
    }
    if (vlSelfRef.resetn) {
        if ((1U & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__last_mem_valid)))) {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_firstword_reg = 0U;
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__last_mem_valid 
        = ((IData)(vlSelfRef.resetn) && ((IData)(vlSelfRef.mem_valid) 
                                         & (~ (IData)(vlSelfRef.mem_ready))));
    if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.trap)))) {
        if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
            __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.mem_ready)))) {
            vlSelfRef.mem_valid = 0U;
        }
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_read) 
             | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_write))) {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wstrb 
                = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata))) {
                vlSelfRef.mem_valid = 1U;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_instr 
                    = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst));
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wstrb = 0U;
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_state = 1U;
            }
            if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata) {
                vlSelfRef.mem_valid = 1U;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_instr = 0U;
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state))) {
            if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer) {
                vlSelfRef.mem_valid = 0U;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_secondword = 0U;
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_state 
                    = (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst) 
                        | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state))) {
            if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer) {
                vlSelfRef.mem_valid = 0U;
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state))) {
            if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst) {
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_state = 0U;
            }
        }
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_opcode 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_opcode;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs1 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rs1;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_state;
    vlSelfRef.trap = 0U;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_sh = 0U;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_out = 0U;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_wdata = 0U;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_trigger 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst) 
           & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger_q 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger;
    __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger = 0U;
    if (vlSelfRef.resetn) {
        if (((((((((0x80U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) {
                vlSelfRef.trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) {
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__do_waitirq))));
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_wordsize = 0U;
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lu = 0U;
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lh = 0U;
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lb = 0U;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_rd 
                    = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rd;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_compr 
                    = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__compressed_instr;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__current_pc 
                    = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_next_pc;
                if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch) {
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__current_pc 
                        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_stalu)
                                               ? vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_q
                                               : vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_out))
                            : vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_next_pc);
                }
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_pc 
                    = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__current_pc;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_next_pc 
                    = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__current_pc;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store = 0U;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_stalu = 0U;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch = 0U;
                if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger) {
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_delay 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_active;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_next_pc 
                        = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__current_pc 
                           + ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jal) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst = 1U;
                        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_next_pc 
                            = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__current_pc 
                               + vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j);
                        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst = 0U;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__compressed_instr))));
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) {
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 = 0U;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2 = 0U;
                if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_trap) 
                     | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal))) {
                    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_trap) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x80U;
                    } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lui)
                                ? 0U : vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_pc);
                        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2 
                            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst 
                            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 8U;
                    } else {
                        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store = 1U;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_out 
                            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__timer;
                        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val 
                            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1;
                        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x40U;
                        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__timer 
                            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_trap)))) {
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 1U;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_slli_srli_srai) {
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_sh 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs2;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 4U;
                } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 8U;
                } else {
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_sh 
                        = (0x1fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs2);
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs2;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs2;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sb_sh_sw) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 2U;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sll_srl_sra) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst 
                            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) {
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_sh 
                    = (0x1fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs2);
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2 
                    = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs2;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val 
                    = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs2;
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sb_sh_sw) {
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 2U;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sll_srl_sra) {
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 4U;
                } else {
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) {
                __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_out 
                    = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_pc 
                       + vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm);
                if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_rd = 0U;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0;
                    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0) {
                        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rinst = 1U;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jalr;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store = 1U;
                    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_stalu = 1U;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) {
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_sh))) {
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_out 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst 
                        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch;
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slli) 
                         | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sll))) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srli) 
                                | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srl))) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srai) 
                                | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sra))) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1, 4U);
                    }
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_sh) 
                                    - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slli) 
                         | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sll))) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srli) 
                                | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srl))) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srai) 
                                | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sra))) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1, 1U);
                    }
                    __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_sh) 
                                    - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata)))) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                            = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                               + vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm);
                        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sb) {
                            __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sh) {
                            __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sw) {
                            __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done))) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x40U;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_trigger = 1U;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done))) {
                        if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lu) {
                            __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_out 
                                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word;
                        } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lh) {
                            __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word));
                        } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lb) {
                            __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_word));
                        }
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_trigger = 1U;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata)))) {
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                            = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
                               + vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm);
                        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lb) 
                             | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lbu))) {
                            __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lhu))) {
                            __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lw) {
                            __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lu 
                            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lbu_lhu_lw;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lh 
                            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lh;
                        __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lb 
                            = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__timer = 0U;
        __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_pc = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_next_pc = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_stalu = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch = 0U;
        __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lu = 0U;
        __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lh = 0U;
        __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lb = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_delay = 0U;
        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x40U;
    }
    if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__pcpi_insn = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x7fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)) 
                & (~ (IData)((0U != (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                     >> 0x15U))))) 
               & (~ (IData)((0U != (0x1fffU & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                               >> 7U))))));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstrh = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycleh = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_timer = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_maskirq = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_getq = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_setq = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdcycle = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_rdinstr = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_fence 
            = ((0xfU == (0x7fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)) 
               & (~ (IData)((0U != (7U & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                          >> 0xcU))))));
    }
    if (((IData)(vlSelfRef.resetn) & ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata) 
                                      | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1)))) {
            __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize)) 
             & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1)) {
            __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_pc)))) {
        __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done)))) {
        __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch = 0U;
        __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rinst) {
        __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_rdata) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__set_mem_do_wdata) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__current_pc = 0U;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_sh 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_sh;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lu 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lu;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lh 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lh;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_is_lb 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__latched_is_lb;
    if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_waitirq = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs1 
            = (0x1fU & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched 
                        >> 0xfU));
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs1))
            ? vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs
           [vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs1]
            : 0U);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_pc 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_pc;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_wordsize 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_wordsize;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_out 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_out;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__cpu_state;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__reg_op1;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__do_waitirq = 0U;
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
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_write = 0U;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_pc 
        = (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch) 
            & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_store))
            ? (0xfffffffeU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_out)
            : vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_next_pc);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__prefetched_high_word)))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_state = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.resetn))))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_q 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out;
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
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_eq 
        = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
           == vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1, vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_ltu 
        = (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op1 
           < vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__reg_op2);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lbu) 
           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lhu) 
              | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lw)));
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
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rd 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rd 
            = (0x1fU & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched 
                        >> 7U));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs2 
            = (0x1fU & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched 
                        >> 0x14U));
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs2))
            ? vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpuregs
           [vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs2]
            : 0U);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs2 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_rs2;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lui) 
           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_auipc) 
              | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jal)));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lui) 
           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_add) 
                          | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sub)))))));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_slti_blt_slt 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slti) 
           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_blt) 
              | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slt)));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltiu) 
           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bltu) 
              | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltu)));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_compare 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slti) 
              | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slt) 
                 | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltiu) 
                    | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_beq 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bne 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x1000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_blt 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x4000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bge 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x5000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bltu 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x6000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bgeu 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x7000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lb 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lh 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x1000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lw 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x2000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lbu 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x4000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lhu 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x5000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sb 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sb_sh_sw) 
               & (0U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sh 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sb_sh_sw) 
               & (0x1000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sw 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sb_sh_sw) 
               & (0x2000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_addi 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slti 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x2000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltiu 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x3000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xori 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x4000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_ori 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x6000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_andi 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x7000U == (0x7000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slli 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x1000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srli 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x5000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srai 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q))))));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_compare = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jal)
                ? vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j
                : (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lui) 
                    | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_auipc))
                    ? VL_SHIFTL_III(32,32,32, (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                               >> 0xcU), 0xcU)
                    : (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jalr) 
                        | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            (((0x1000U 
                                               & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                  >> 0x13U)) 
                                              | (0x800U 
                                                 & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                    << 4U))) 
                                             | ((0x7e0U 
                                                 & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                      >> 7U)))))
                            : ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_add 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sub 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sll 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x1000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slt 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x2000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltu 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x3000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xor 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x4000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srl 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x5000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sra 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_or 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x6000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_and 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x7000U == (0xfe007000U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sll_srl_sra 
            = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q))))));
    }
    if (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__compressed_instr = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffffU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched 
                                                  >> 0xbU)))));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            << 2U)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched 
                                               >> 0xbU)))));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_lui 
            = (0x37U == (0x7fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_jalr 
            = (IData)((0x67U == (0x707fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched)));
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched));
    }
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_fence = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__irq_active = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_compare = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_beq = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bne = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_blt = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bge = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bltu = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_bgeu = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_addi = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slti = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltiu = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xori = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_ori = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_andi = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_add = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sub = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sll = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_slt = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sltu = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_xor = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_srl = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_sra = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_or = 0U;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__instr_and = 0U;
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_imm 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_insn_imm;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__decoder_trigger;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cpu_state)) 
           & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_trigger));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out_0 = 0U;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__alu_out = 0U;
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
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer) {
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode 
            = vlSelfRef.mem_rdata;
        vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q 
            = vlSelfRef.mem_rdata;
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer 
        = ((IData)(vlSelfRef.mem_ready) & (IData)(vlSelfRef.mem_valid));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_latched 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer)
            ? vlSelfRef.mem_rdata : vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_rdata_q);
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_instr 
        = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__q_ascii_instr;
    if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_next) {
        if (vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_opcode 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_opcode;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs1 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs1;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rd;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_rs2;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_insn_imm;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode))
                    ? vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode
                    : (0xffffU & vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__next_insn_opcode));
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs1 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs1;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rd;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_rs2;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__decoded_imm;
            vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst 
        = __Vdly__picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst;
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_la_read 
        = ((IData)(vlSelfRef.resetn) & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state)))) 
                                        & ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst) 
                                           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_prefetch) 
                                              | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata)))));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT____VdfgRegularize_he02009ca_0_0 
        = ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_wdata)));
    vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_done 
        = ((IData)(vlSelfRef.resetn) & (((IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_xfer) 
                                         & ((0U != (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state)) 
                                            & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT____VdfgRegularize_he02009ca_0_0))) 
                                        | ((3U == (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_state)) 
                                           & (IData)(vlSelfRef.picorv32_wrapper__DOT__cpu__DOT__mem_do_rinst))));
}

void Vpicorv32_wrapper___024root___eval_triggers__act(Vpicorv32_wrapper___024root* vlSelf);

bool Vpicorv32_wrapper___024root___eval_phase__act(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpicorv32_wrapper___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpicorv32_wrapper___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpicorv32_wrapper___024root___eval_phase__nba(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpicorv32_wrapper___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__ico(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__nba(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__act(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vpicorv32_wrapper___024root___eval(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vpicorv32_wrapper___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("picorv32_wrapper.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vpicorv32_wrapper___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpicorv32_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("picorv32_wrapper.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vpicorv32_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("picorv32_wrapper.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpicorv32_wrapper___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpicorv32_wrapper___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpicorv32_wrapper___024root___eval_debug_assertions(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
    if (VL_UNLIKELY((vlSelfRef.mem_ready & 0xfeU))) {
        Verilated::overWidthError("mem_ready");}
}
#endif  // VL_DEBUG
