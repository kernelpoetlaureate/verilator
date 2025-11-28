// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32.h for the primary calling header

#include "Vpicorv32__pch.h"
#include "Vpicorv32__Syms.h"
#include "Vpicorv32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__ico(Vpicorv32___024root* vlSelf);
#endif  // VL_DEBUG

void Vpicorv32___024root___eval_triggers__ico(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vpicorv32___024root___ico_sequent__TOP__0(Vpicorv32___024root* vlSelf);
void Vpicorv32_picorv32__pi1___ico_sequent__TOP__picorv32_axi__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf);
void Vpicorv32_picorv32__pi1___ico_sequent__TOP__picorv32_wb__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf);

void Vpicorv32___024root___eval_ico(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vpicorv32_picorv32__pi1___ico_sequent__TOP__picorv32_axi__DOT__picorv32_core__0((&vlSymsp->TOP__picorv32_axi__DOT__picorv32_core));
        Vpicorv32_picorv32__pi1___ico_sequent__TOP__picorv32_wb__DOT__picorv32_core__0((&vlSymsp->TOP__picorv32_wb__DOT__picorv32_core));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__act(Vpicorv32___024root* vlSelf);
#endif  // VL_DEBUG

void Vpicorv32___024root___eval_triggers__act(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.picorv32_regs__02Eclk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__picorv32_regs__02Eclk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.picorv32_axi__02Eclk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__picorv32_axi__02Eclk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.wb_clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__wb_clk_i__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32_regs__02Eclk__0 
        = vlSelfRef.picorv32_regs__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__picorv32_axi__02Eclk__0 
        = vlSelfRef.picorv32_axi__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__wb_clk_i__0 = vlSelfRef.wb_clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vpicorv32___024root___nba_sequent__TOP__0(Vpicorv32___024root* vlSelf);
void Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_axi__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf);
void Vpicorv32___024root___nba_sequent__TOP__1(Vpicorv32___024root* vlSelf);
void Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_axi__DOT__picorv32_core__1(Vpicorv32_picorv32__pi1* vlSelf);
void Vpicorv32___024root___nba_sequent__TOP__2(Vpicorv32___024root* vlSelf);
void Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf);
void Vpicorv32___024root___nba_sequent__TOP__3(Vpicorv32___024root* vlSelf);
void Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__1(Vpicorv32_picorv32__pi1* vlSelf);
void Vpicorv32___024root___nba_sequent__TOP__4(Vpicorv32___024root* vlSelf);
void Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__2(Vpicorv32_picorv32__pi1* vlSelf);

void Vpicorv32___024root___eval_nba(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_axi__DOT__picorv32_core__0((&vlSymsp->TOP__picorv32_axi__DOT__picorv32_core));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vpicorv32___024root___nba_sequent__TOP__1(vlSelf);
        Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_axi__DOT__picorv32_core__1((&vlSymsp->TOP__picorv32_axi__DOT__picorv32_core));
        Vpicorv32___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__0((&vlSymsp->TOP__picorv32_wb__DOT__picorv32_core));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vpicorv32___024root___nba_sequent__TOP__3(vlSelf);
        Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__1((&vlSymsp->TOP__picorv32_wb__DOT__picorv32_core));
        Vpicorv32___024root___nba_sequent__TOP__4(vlSelf);
        Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__2((&vlSymsp->TOP__picorv32_wb__DOT__picorv32_core));
    }
}

VL_INLINE_OPT void Vpicorv32___024root___nba_sequent__TOP__1(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32_axi__02Etrace_data = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.trace_data;
    vlSelfRef.picorv32_axi__02Eeoi = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.eoi;
    vlSelfRef.picorv32_axi__02Epcpi_insn = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.pcpi_insn;
    vlSelfRef.mem_axi_wdata = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_wdata;
    vlSelfRef.mem_axi_awaddr = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_addr;
    vlSelfRef.mem_axi_araddr = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_addr;
    if (vlSelfRef.resetn) {
        if (((IData)(vlSelfRef.mem_axi_awready) & (IData)(vlSelfRef.mem_axi_awvalid))) {
            vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_awvalid = 1U;
        }
        if (((IData)(vlSelfRef.mem_axi_arready) & (IData)(vlSelfRef.mem_axi_arvalid))) {
            vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_arvalid = 1U;
        }
        if (((IData)(vlSelfRef.mem_axi_wready) & (IData)(vlSelfRef.mem_axi_wvalid))) {
            vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_wvalid = 1U;
        }
        if ((1U & ((IData)(vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__xfer_done) 
                   | (~ (IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_valid))))) {
            vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_awvalid = 0U;
            vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_arvalid = 0U;
            vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_wvalid = 0U;
        }
        vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__xfer_done 
            = ((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_valid) 
               & (IData)(vlSelfRef.picorv32_axi__DOT__mem_ready));
    } else {
        vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_awvalid = 0U;
    }
}

VL_INLINE_OPT void Vpicorv32___024root___nba_sequent__TOP__2(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_axi_arprot = ((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_instr)
                                 ? 4U : 0U);
    vlSelfRef.mem_axi_wstrb = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_wstrb;
    vlSelfRef.mem_axi_rready = ((~ (IData)((0U != (IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_wstrb)))) 
                                & (IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_valid));
    vlSelfRef.mem_axi_bready = ((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_valid) 
                                & (0U != (IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_wstrb)));
    vlSelfRef.picorv32_axi__02Etrap = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.trap;
    vlSelfRef.picorv32_axi__02Epcpi_rs2 = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op2;
    vlSelfRef.picorv32_axi__02Epcpi_rs1 = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op1;
    vlSelfRef.picorv32_axi__02Etrace_valid = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__do_waitirq;
    vlSelfRef.picorv32_axi__02Epcpi_valid = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__irq_active;
    vlSelfRef.mem_axi_arvalid = ((~ (IData)(vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_arvalid)) 
                                 & (IData)(vlSelfRef.mem_axi_rready));
    vlSelfRef.mem_axi_awvalid = ((~ (IData)(vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_awvalid)) 
                                 & (IData)(vlSelfRef.mem_axi_bready));
    vlSelfRef.mem_axi_wvalid = ((~ (IData)(vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_wvalid)) 
                                & (IData)(vlSelfRef.mem_axi_bready));
}

VL_INLINE_OPT void Vpicorv32___024root___nba_sequent__TOP__3(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__picorv32_wb__DOT__state;
    __Vdly__picorv32_wb__DOT__state = 0;
    // Body
    __Vdly__picorv32_wb__DOT__state = vlSelfRef.picorv32_wb__DOT__state;
    vlSelfRef.__Vdly__picorv32_wb__DOT__mem_rdata = vlSelfRef.picorv32_wb__DOT__mem_rdata;
    vlSelfRef.__Vdly__picorv32_wb__DOT__mem_ready = vlSelfRef.picorv32_wb__DOT__mem_ready;
    vlSelfRef.picorv32_wb__02Etrace_data = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.trace_data;
    vlSelfRef.picorv32_wb__02Eeoi = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.eoi;
    vlSelfRef.picorv32_wb__02Epcpi_insn = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.pcpi_insn;
    if (vlSelfRef.wb_rst_i) {
        vlSelfRef.wbm_adr_o = 0U;
        vlSelfRef.wbm_dat_o = 0U;
        vlSelfRef.wbm_we_o = 0U;
        vlSelfRef.wbm_sel_o = 0U;
        vlSelfRef.wbm_stb_o = 0U;
        vlSelfRef.wbm_cyc_o = 0U;
        __Vdly__picorv32_wb__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelfRef.picorv32_wb__DOT__state))) {
        if (vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_valid) {
            vlSelfRef.wbm_adr_o = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_addr;
            vlSelfRef.wbm_dat_o = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_wdata;
            vlSelfRef.wbm_we_o = (IData)((0U != (IData)(vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_wstrb)));
            vlSelfRef.wbm_sel_o = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_wstrb;
            vlSelfRef.wbm_stb_o = 1U;
            vlSelfRef.wbm_cyc_o = 1U;
            __Vdly__picorv32_wb__DOT__state = 1U;
        } else {
            vlSelfRef.__Vdly__picorv32_wb__DOT__mem_ready = 0U;
            vlSelfRef.wbm_stb_o = 0U;
            vlSelfRef.wbm_cyc_o = 0U;
            vlSelfRef.wbm_we_o = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.picorv32_wb__DOT__state))) {
        if (vlSelfRef.wbm_ack_i) {
            vlSelfRef.__Vdly__picorv32_wb__DOT__mem_rdata 
                = vlSelfRef.wbm_dat_i;
            vlSelfRef.__Vdly__picorv32_wb__DOT__mem_ready = 1U;
            __Vdly__picorv32_wb__DOT__state = 2U;
            vlSelfRef.wbm_stb_o = 0U;
            vlSelfRef.wbm_cyc_o = 0U;
            vlSelfRef.wbm_we_o = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.picorv32_wb__DOT__state))) {
        vlSelfRef.__Vdly__picorv32_wb__DOT__mem_ready = 0U;
        __Vdly__picorv32_wb__DOT__state = 0U;
    } else {
        __Vdly__picorv32_wb__DOT__state = 0U;
    }
    vlSelfRef.picorv32_wb__DOT__state = __Vdly__picorv32_wb__DOT__state;
}

VL_INLINE_OPT void Vpicorv32___024root___nba_sequent__TOP__4(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32_wb__DOT__mem_ready = vlSelfRef.__Vdly__picorv32_wb__DOT__mem_ready;
    vlSelfRef.mem_instr = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_instr;
    vlSelfRef.picorv32_wb__02Etrap = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.trap;
    vlSelfRef.picorv32_wb__02Epcpi_rs2 = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op2;
    vlSelfRef.picorv32_wb__02Epcpi_rs1 = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op1;
    vlSelfRef.picorv32_wb__02Etrace_valid = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__do_waitirq;
    vlSelfRef.picorv32_wb__02Epcpi_valid = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__irq_active;
    vlSelfRef.picorv32_wb__DOT__mem_rdata = vlSelfRef.__Vdly__picorv32_wb__DOT__mem_rdata;
}
