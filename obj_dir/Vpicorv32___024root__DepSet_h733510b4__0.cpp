// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32.h for the primary calling header

#include "Vpicorv32__pch.h"
#include "Vpicorv32___024root.h"

VL_INLINE_OPT void Vpicorv32___024root___ico_sequent__TOP__0(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rdata1 = ((0x1eU >= (0x1fU & (~ (IData)(vlSelfRef.raddr1))))
                         ? vlSelfRef.picorv32_regs__DOT__regs
                        [(0x1fU & (~ (IData)(vlSelfRef.raddr1)))]
                         : 0U);
    vlSelfRef.rdata2 = ((0x1eU >= (0x1fU & (~ (IData)(vlSelfRef.raddr2))))
                         ? vlSelfRef.picorv32_regs__DOT__regs
                        [(0x1fU & (~ (IData)(vlSelfRef.raddr2)))]
                         : 0U);
    vlSelfRef.picorv32_axi__DOT__mem_ready = ((IData)(vlSelfRef.mem_axi_bvalid) 
                                              | (IData)(vlSelfRef.mem_axi_rvalid));
}

void Vpicorv32___024root___eval_triggers__ico(Vpicorv32___024root* vlSelf);
void Vpicorv32___024root___eval_ico(Vpicorv32___024root* vlSelf);

bool Vpicorv32___024root___eval_phase__ico(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vpicorv32___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vpicorv32___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vpicorv32___024root___eval_act(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void Vpicorv32___024root___nba_sequent__TOP__0(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__picorv32_regs__DOT__regs__v0;
    __VdlyVal__picorv32_regs__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__picorv32_regs__DOT__regs__v0;
    __VdlyDim0__picorv32_regs__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__picorv32_regs__DOT__regs__v0;
    __VdlySet__picorv32_regs__DOT__regs__v0 = 0;
    // Body
    __VdlySet__picorv32_regs__DOT__regs__v0 = 0U;
    if (vlSelfRef.wen) {
        vlSelfRef.picorv32_regs__DOT____Vlvbound_h42af6e1e__0 
            = vlSelfRef.wdata;
        if ((0x1eU >= (0x1fU & (~ (IData)(vlSelfRef.waddr))))) {
            __VdlyVal__picorv32_regs__DOT__regs__v0 
                = vlSelfRef.picorv32_regs__DOT____Vlvbound_h42af6e1e__0;
            __VdlyDim0__picorv32_regs__DOT__regs__v0 
                = (0x1fU & (~ (IData)(vlSelfRef.waddr)));
            __VdlySet__picorv32_regs__DOT__regs__v0 = 1U;
        }
    }
    if (__VdlySet__picorv32_regs__DOT__regs__v0) {
        vlSelfRef.picorv32_regs__DOT__regs[__VdlyDim0__picorv32_regs__DOT__regs__v0] 
            = __VdlyVal__picorv32_regs__DOT__regs__v0;
    }
    vlSelfRef.rdata1 = ((0x1eU >= (0x1fU & (~ (IData)(vlSelfRef.raddr1))))
                         ? vlSelfRef.picorv32_regs__DOT__regs
                        [(0x1fU & (~ (IData)(vlSelfRef.raddr1)))]
                         : 0U);
    vlSelfRef.rdata2 = ((0x1eU >= (0x1fU & (~ (IData)(vlSelfRef.raddr2))))
                         ? vlSelfRef.picorv32_regs__DOT__regs
                        [(0x1fU & (~ (IData)(vlSelfRef.raddr2)))]
                         : 0U);
}

void Vpicorv32___024root___eval_triggers__act(Vpicorv32___024root* vlSelf);

bool Vpicorv32___024root___eval_phase__act(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpicorv32___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpicorv32___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vpicorv32___024root___eval_nba(Vpicorv32___024root* vlSelf);

bool Vpicorv32___024root___eval_phase__nba(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpicorv32___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__ico(Vpicorv32___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__nba(Vpicorv32___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__act(Vpicorv32___024root* vlSelf);
#endif  // VL_DEBUG

void Vpicorv32___024root___eval(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval\n"); );
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
            Vpicorv32___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("picorv32.v", 2174, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vpicorv32___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpicorv32___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("picorv32.v", 2174, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vpicorv32___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("picorv32.v", 2174, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpicorv32___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpicorv32___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpicorv32___024root___eval_debug_assertions(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.picorv32_regs__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("picorv32_regs.clk");}
    if (VL_UNLIKELY((vlSelfRef.wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
    if (VL_UNLIKELY((vlSelfRef.waddr & 0xc0U))) {
        Verilated::overWidthError("waddr");}
    if (VL_UNLIKELY((vlSelfRef.raddr1 & 0xc0U))) {
        Verilated::overWidthError("raddr1");}
    if (VL_UNLIKELY((vlSelfRef.raddr2 & 0xc0U))) {
        Verilated::overWidthError("raddr2");}
    if (VL_UNLIKELY((vlSelfRef.picorv32_axi__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("picorv32_axi.clk");}
    if (VL_UNLIKELY((vlSelfRef.resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
    if (VL_UNLIKELY((vlSelfRef.mem_axi_awready & 0xfeU))) {
        Verilated::overWidthError("mem_axi_awready");}
    if (VL_UNLIKELY((vlSelfRef.mem_axi_wready & 0xfeU))) {
        Verilated::overWidthError("mem_axi_wready");}
    if (VL_UNLIKELY((vlSelfRef.mem_axi_bvalid & 0xfeU))) {
        Verilated::overWidthError("mem_axi_bvalid");}
    if (VL_UNLIKELY((vlSelfRef.mem_axi_arready & 0xfeU))) {
        Verilated::overWidthError("mem_axi_arready");}
    if (VL_UNLIKELY((vlSelfRef.mem_axi_rvalid & 0xfeU))) {
        Verilated::overWidthError("mem_axi_rvalid");}
    if (VL_UNLIKELY((vlSelfRef.picorv32_axi__02Epcpi_wr 
                     & 0xfeU))) {
        Verilated::overWidthError("picorv32_axi.pcpi_wr");}
    if (VL_UNLIKELY((vlSelfRef.picorv32_axi__02Epcpi_wait 
                     & 0xfeU))) {
        Verilated::overWidthError("picorv32_axi.pcpi_wait");}
    if (VL_UNLIKELY((vlSelfRef.picorv32_axi__02Epcpi_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("picorv32_axi.pcpi_ready");}
    if (VL_UNLIKELY((vlSelfRef.wb_rst_i & 0xfeU))) {
        Verilated::overWidthError("wb_rst_i");}
    if (VL_UNLIKELY((vlSelfRef.wb_clk_i & 0xfeU))) {
        Verilated::overWidthError("wb_clk_i");}
    if (VL_UNLIKELY((vlSelfRef.wbm_ack_i & 0xfeU))) {
        Verilated::overWidthError("wbm_ack_i");}
    if (VL_UNLIKELY((vlSelfRef.picorv32_wb__02Epcpi_wr 
                     & 0xfeU))) {
        Verilated::overWidthError("picorv32_wb.pcpi_wr");}
    if (VL_UNLIKELY((vlSelfRef.picorv32_wb__02Epcpi_wait 
                     & 0xfeU))) {
        Verilated::overWidthError("picorv32_wb.pcpi_wait");}
    if (VL_UNLIKELY((vlSelfRef.picorv32_wb__02Epcpi_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("picorv32_wb.pcpi_ready");}
}
#endif  // VL_DEBUG
