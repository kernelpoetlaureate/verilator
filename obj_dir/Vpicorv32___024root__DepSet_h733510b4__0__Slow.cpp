// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32.h for the primary calling header

#include "Vpicorv32__pch.h"
#include "Vpicorv32___024root.h"

VL_ATTR_COLD void Vpicorv32___024root___eval_static(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpicorv32___024root___eval_initial__TOP(Vpicorv32___024root* vlSelf);

VL_ATTR_COLD void Vpicorv32___024root___eval_initial(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpicorv32___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32_regs__02Eclk__0 
        = vlSelfRef.picorv32_regs__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32_axi__02Eclk__0 
        = vlSelfRef.picorv32_axi__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__wb_clk_i__0 = vlSelfRef.wb_clk_i;
}

VL_ATTR_COLD void Vpicorv32___024root___eval_initial__TOP(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_axi_awprot = 0U;
}

VL_ATTR_COLD void Vpicorv32___024root___eval_final(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__stl(Vpicorv32___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpicorv32___024root___eval_phase__stl(Vpicorv32___024root* vlSelf);

VL_ATTR_COLD void Vpicorv32___024root___eval_settle(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_settle\n"); );
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
            Vpicorv32___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("picorv32.v", 2174, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpicorv32___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__stl(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vpicorv32___024root___eval_triggers__stl(Vpicorv32___024root* vlSelf);
VL_ATTR_COLD void Vpicorv32___024root___eval_stl(Vpicorv32___024root* vlSelf);

VL_ATTR_COLD bool Vpicorv32___024root___eval_phase__stl(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpicorv32___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vpicorv32___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__ico(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__act(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge picorv32_regs.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge picorv32_axi.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge wb_clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__nba(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge picorv32_regs.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge picorv32_axi.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge wb_clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpicorv32___024root____Vm_traceActivitySetAll(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vpicorv32___024root___ctor_var_reset(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->picorv32_regs__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->wen = VL_RAND_RESET_I(1);
    vlSelf->waddr = VL_RAND_RESET_I(6);
    vlSelf->raddr1 = VL_RAND_RESET_I(6);
    vlSelf->raddr2 = VL_RAND_RESET_I(6);
    vlSelf->wdata = VL_RAND_RESET_I(32);
    vlSelf->rdata1 = VL_RAND_RESET_I(32);
    vlSelf->rdata2 = VL_RAND_RESET_I(32);
    vlSelf->picorv32_axi__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->picorv32_axi__02Etrap = VL_RAND_RESET_I(1);
    vlSelf->mem_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->mem_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->mem_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->mem_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->mem_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->mem_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->mem_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->mem_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->mem_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->mem_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->mem_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->mem_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->mem_axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->mem_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->mem_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->mem_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->mem_axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->picorv32_axi__02Epcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_axi__02Epcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->picorv32_axi__02Epcpi_rs1 = VL_RAND_RESET_I(32);
    vlSelf->picorv32_axi__02Epcpi_rs2 = VL_RAND_RESET_I(32);
    vlSelf->picorv32_axi__02Epcpi_wr = VL_RAND_RESET_I(1);
    vlSelf->picorv32_axi__02Epcpi_rd = VL_RAND_RESET_I(32);
    vlSelf->picorv32_axi__02Epcpi_wait = VL_RAND_RESET_I(1);
    vlSelf->picorv32_axi__02Epcpi_ready = VL_RAND_RESET_I(1);
    vlSelf->picorv32_axi__02Eirq = VL_RAND_RESET_I(32);
    vlSelf->picorv32_axi__02Eeoi = VL_RAND_RESET_I(32);
    vlSelf->picorv32_axi__02Etrace_valid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_axi__02Etrace_data = VL_RAND_RESET_Q(36);
    vlSelf->picorv32_wb__02Etrap = VL_RAND_RESET_I(1);
    vlSelf->wb_rst_i = VL_RAND_RESET_I(1);
    vlSelf->wb_clk_i = VL_RAND_RESET_I(1);
    vlSelf->wbm_adr_o = VL_RAND_RESET_I(32);
    vlSelf->wbm_dat_o = VL_RAND_RESET_I(32);
    vlSelf->wbm_dat_i = VL_RAND_RESET_I(32);
    vlSelf->wbm_we_o = VL_RAND_RESET_I(1);
    vlSelf->wbm_sel_o = VL_RAND_RESET_I(4);
    vlSelf->wbm_stb_o = VL_RAND_RESET_I(1);
    vlSelf->wbm_ack_i = VL_RAND_RESET_I(1);
    vlSelf->wbm_cyc_o = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wb__02Epcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wb__02Epcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wb__02Epcpi_rs1 = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wb__02Epcpi_rs2 = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wb__02Epcpi_wr = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wb__02Epcpi_rd = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wb__02Epcpi_wait = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wb__02Epcpi_ready = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wb__02Eirq = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wb__02Eeoi = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wb__02Etrace_valid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wb__02Etrace_data = VL_RAND_RESET_Q(36);
    vlSelf->mem_instr = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->picorv32_regs__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->picorv32_regs__DOT____Vlvbound_h42af6e1e__0 = VL_RAND_RESET_I(32);
    vlSelf->picorv32_axi__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->picorv32_axi__DOT__axi_adapter__DOT__ack_awvalid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_axi__DOT__axi_adapter__DOT__ack_arvalid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_axi__DOT__axi_adapter__DOT__ack_wvalid = VL_RAND_RESET_I(1);
    vlSelf->picorv32_axi__DOT__axi_adapter__DOT__xfer_done = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wb__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->picorv32_wb__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->picorv32_wb__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__picorv32_wb__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__picorv32_wb__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__picorv32_regs__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__picorv32_axi__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__wb_clk_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
