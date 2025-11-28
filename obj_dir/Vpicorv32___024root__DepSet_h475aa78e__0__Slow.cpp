// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32.h for the primary calling header

#include "Vpicorv32__pch.h"
#include "Vpicorv32__Syms.h"
#include "Vpicorv32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__stl(Vpicorv32___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpicorv32___024root___eval_triggers__stl(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vpicorv32___024root___stl_sequent__TOP__0(Vpicorv32___024root* vlSelf);
VL_ATTR_COLD void Vpicorv32___024root____Vm_traceActivitySetAll(Vpicorv32___024root* vlSelf);
VL_ATTR_COLD void Vpicorv32_picorv32__pi1___stl_sequent__TOP__picorv32_axi__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf);
VL_ATTR_COLD void Vpicorv32_picorv32__pi1___stl_sequent__TOP__picorv32_wb__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf);

VL_ATTR_COLD void Vpicorv32___024root___eval_stl(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpicorv32___024root___stl_sequent__TOP__0(vlSelf);
        Vpicorv32___024root____Vm_traceActivitySetAll(vlSelf);
        Vpicorv32_picorv32__pi1___stl_sequent__TOP__picorv32_axi__DOT__picorv32_core__0((&vlSymsp->TOP__picorv32_axi__DOT__picorv32_core));
        Vpicorv32_picorv32__pi1___stl_sequent__TOP__picorv32_wb__DOT__picorv32_core__0((&vlSymsp->TOP__picorv32_wb__DOT__picorv32_core));
    }
}

VL_ATTR_COLD void Vpicorv32___024root___stl_sequent__TOP__0(Vpicorv32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32_axi__02Etrace_data = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.trace_data;
    vlSelfRef.picorv32_axi__02Etrace_valid = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__do_waitirq;
    vlSelfRef.picorv32_axi__02Eeoi = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.eoi;
    vlSelfRef.picorv32_axi__02Epcpi_rs2 = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op2;
    vlSelfRef.picorv32_axi__02Epcpi_rs1 = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__reg_op1;
    vlSelfRef.picorv32_axi__02Epcpi_insn = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.pcpi_insn;
    vlSelfRef.picorv32_axi__02Epcpi_valid = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.__PVT__irq_active;
    vlSelfRef.picorv32_axi__02Etrap = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.trap;
    vlSelfRef.picorv32_wb__02Etrace_data = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.trace_data;
    vlSelfRef.picorv32_wb__02Etrace_valid = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__do_waitirq;
    vlSelfRef.picorv32_wb__02Eeoi = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.eoi;
    vlSelfRef.picorv32_wb__02Epcpi_rs2 = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op2;
    vlSelfRef.picorv32_wb__02Epcpi_rs1 = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__reg_op1;
    vlSelfRef.picorv32_wb__02Epcpi_insn = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.pcpi_insn;
    vlSelfRef.picorv32_wb__02Epcpi_valid = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.__PVT__irq_active;
    vlSelfRef.mem_instr = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.mem_instr;
    vlSelfRef.picorv32_wb__02Etrap = vlSymsp->TOP__picorv32_wb__DOT__picorv32_core.trap;
    vlSelfRef.mem_axi_wstrb = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_wstrb;
    vlSelfRef.mem_axi_awaddr = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_addr;
    vlSelfRef.mem_axi_araddr = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_addr;
    vlSelfRef.mem_axi_wdata = vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_wdata;
    vlSelfRef.mem_axi_arprot = ((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_instr)
                                 ? 4U : 0U);
    vlSelfRef.rdata1 = ((0x1eU >= (0x1fU & (~ (IData)(vlSelfRef.raddr1))))
                         ? vlSelfRef.picorv32_regs__DOT__regs
                        [(0x1fU & (~ (IData)(vlSelfRef.raddr1)))]
                         : 0U);
    vlSelfRef.rdata2 = ((0x1eU >= (0x1fU & (~ (IData)(vlSelfRef.raddr2))))
                         ? vlSelfRef.picorv32_regs__DOT__regs
                        [(0x1fU & (~ (IData)(vlSelfRef.raddr2)))]
                         : 0U);
    vlSelfRef.mem_axi_rready = ((~ (IData)((0U != (IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_wstrb)))) 
                                & (IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_valid));
    vlSelfRef.mem_axi_bready = ((IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_valid) 
                                & (0U != (IData)(vlSymsp->TOP__picorv32_axi__DOT__picorv32_core.mem_wstrb)));
    vlSelfRef.picorv32_axi__DOT__mem_ready = ((IData)(vlSelfRef.mem_axi_bvalid) 
                                              | (IData)(vlSelfRef.mem_axi_rvalid));
    vlSelfRef.mem_axi_arvalid = ((~ (IData)(vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_arvalid)) 
                                 & (IData)(vlSelfRef.mem_axi_rready));
    vlSelfRef.mem_axi_awvalid = ((~ (IData)(vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_awvalid)) 
                                 & (IData)(vlSelfRef.mem_axi_bready));
    vlSelfRef.mem_axi_wvalid = ((~ (IData)(vlSelfRef.picorv32_axi__DOT__axi_adapter__DOT__ack_wvalid)) 
                                & (IData)(vlSelfRef.mem_axi_bready));
}
