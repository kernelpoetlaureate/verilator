// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_gates.h for the primary calling header

#include "Vpicorv32_gates__pch.h"
#include "Vpicorv32_gates___024root.h"

void Vpicorv32_gates___024root___eval_triggers__ico(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___eval_ico(Vpicorv32_gates___024root* vlSelf);

bool Vpicorv32_gates___024root___eval_phase__ico(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vpicorv32_gates___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vpicorv32_gates___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vpicorv32_gates___024root___act_sequent__TOP__0(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__1(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__2(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__3(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__4(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__5(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__6(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__7(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__8(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__9(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__10(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__11(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__12(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__13(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__14(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__15(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__16(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__5(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__18(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__19(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__1(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__21(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__22(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__6(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__24(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__7(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_sequent__TOP__26(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__0(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__1(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__2(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__3(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__4(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__5(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__6(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__10(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__8(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__9(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__10(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__11(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__12(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__13(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__14(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__15(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__16(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__17(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__18(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__19(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__20(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__21(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__22(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__23(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__24(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__25(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__3(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__27(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__28(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__29(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__30(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__31(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__32(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___act_comb__TOP__33(Vpicorv32_gates___024root* vlSelf);

void Vpicorv32_gates___024root___eval_act(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(1U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(1U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x18000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(1U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x18ULL & vlSelfRef.__VactTriggered.word(1U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VactTriggered.word(1U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__13(vlSelf);
    }
    if ((0x60000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__14(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__15(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__16(vlSelf);
    }
    if ((0x7000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__18(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__19(vlSelf);
    }
    if ((0x380000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__21(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__22(vlSelf);
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__24(vlSelf);
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_sequent__TOP__26(vlSelf);
    }
    if ((0x18000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__0(vlSelf);
    }
    if (((0x18000000ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (0x18ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___act_comb__TOP__1(vlSelf);
    }
    if (((0x1000ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (0x18ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x300000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__3(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VactTriggered.word(1U))) {
        Vpicorv32_gates___024root___act_comb__TOP__4(vlSelf);
    }
    if (((0x8000000000000000ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (7ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___act_comb__TOP__5(vlSelf);
    }
    if (((2ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (0x18ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x7c00000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((0x3e0000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x81ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x4004ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x804ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__11(vlSelf);
    }
    if ((0x202ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x102ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__13(vlSelf);
    }
    if (((0x3000ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (0x18ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___act_comb__TOP__14(vlSelf);
    }
    if ((0x300000400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x7c18000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x3e0010ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x4006ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x4804ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x4104ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x7fffffff00000400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__21(vlSelf);
    }
    if ((0x7c18004ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__22(vlSelf);
    }
    if ((0x300004006ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__23(vlSelf);
    }
    if ((0x4106ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__24(vlSelf);
    }
    if ((0x7c1c006ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__25(vlSelf);
    }
    if (((0x4046ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (0x20ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x4206ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpicorv32_gates___024root___act_comb__TOP__27(vlSelf);
    }
    if (((0x8000000000004006ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (7ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___act_comb__TOP__28(vlSelf);
    }
    if (((0x4006ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (6ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___act_comb__TOP__29(vlSelf);
    }
    if (((0x4006ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (0x18ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___act_comb__TOP__30(vlSelf);
    }
    if (((0x4006ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (0x1eULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___act_comb__TOP__31(vlSelf);
    }
    if (((0x8000000000004006ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (0x1fULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___act_comb__TOP__32(vlSelf);
    }
    if (((0x4806ULL & vlSelfRef.__VactTriggered.word(0U)) 
         | (0x1eULL & vlSelfRef.__VactTriggered.word(1U)))) {
        Vpicorv32_gates___024root___act_comb__TOP__33(vlSelf);
    }
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__0(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___01084_ = (1U & ((IData)(vlSelfRef.picorv32__DOT___01084_) 
                                              >> 1U));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__1(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT____Vconcswap_1_h67f4875e__0 
        = ((((((0x4000000U & (vlSelfRef.picorv32__DOT___01179_ 
                              >> 5U)) | (0x2000000U 
                                         & (vlSelfRef.picorv32__DOT___01179_ 
                                            >> 6U))) 
              | ((0x1000000U & (vlSelfRef.picorv32__DOT___01179_ 
                                >> 7U)) | (0x800000U 
                                           & (vlSelfRef.picorv32__DOT___01179_ 
                                              >> 8U)))) 
             | ((0x400000U & (vlSelfRef.picorv32__DOT___01179_ 
                              >> 9U)) | ((0x200000U 
                                          & (vlSelfRef.picorv32__DOT___01179_ 
                                             >> 0xaU)) 
                                         | (0x100000U 
                                            & (vlSelfRef.picorv32__DOT___01179_ 
                                               >> 0xbU))))) 
            | ((((0x80000U & (vlSelfRef.picorv32__DOT___01179_ 
                              >> 0xcU)) | (0x40000U 
                                           & (vlSelfRef.picorv32__DOT___01179_ 
                                              >> 0xdU))) 
                | ((0x20000U & (vlSelfRef.picorv32__DOT___01179_ 
                                >> 0xeU)) | (0x10000U 
                                             & (vlSelfRef.picorv32__DOT___01179_ 
                                                >> 0xfU)))) 
               | ((0x8000U & (vlSelfRef.picorv32__DOT___01179_ 
                              >> 0x10U)) | ((0x4000U 
                                             & (vlSelfRef.picorv32__DOT___01179_ 
                                                >> 0x11U)) 
                                            | (0x2000U 
                                               & (vlSelfRef.picorv32__DOT___01179_ 
                                                  >> 0x12U)))))) 
           | (((((0x1000U & (vlSelfRef.picorv32__DOT___01179_ 
                             >> 0x13U)) | (0x800U & 
                                           (vlSelfRef.picorv32__DOT___01179_ 
                                            >> 0x14U))) 
                | ((0x400U & (vlSelfRef.picorv32__DOT___01179_ 
                              >> 0x15U)) | (0x200U 
                                            & (vlSelfRef.picorv32__DOT___01179_ 
                                               >> 0x16U)))) 
               | ((0x100U & (vlSelfRef.picorv32__DOT___01179_ 
                             >> 0x17U)) | ((0x80U & 
                                            (vlSelfRef.picorv32__DOT___01179_ 
                                             >> 0x18U)) 
                                           | (0x40U 
                                              & (vlSelfRef.picorv32__DOT___01179_ 
                                                 >> 0x19U))))) 
              | (((0x20U & (vlSelfRef.picorv32__DOT___01179_ 
                            >> 0x1aU)) | ((0x10U & 
                                           (vlSelfRef.picorv32__DOT___01179_ 
                                            >> 0x1bU)) 
                                          | (8U & (vlSelfRef.picorv32__DOT___01179_ 
                                                   >> 0x1cU)))) 
                 | ((4U & (vlSelfRef.picorv32__DOT___01179_ 
                           >> 0x1dU)) | ((2U & (vlSelfRef.picorv32__DOT___01179_ 
                                                >> 0x1eU)) 
                                         | (vlSelfRef.picorv32__DOT___01179_ 
                                            >> 0x1fU))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__2(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT___01710_;
    picorv32__DOT___01710_ = 0;
    // Body
    vlSelfRef.picorv32__DOT____Vconcswap_1_h9a41b932__0 
        = ((((((0x4000000U & (vlSelfRef.picorv32__DOT___01142_ 
                              >> 5U)) | (0x2000000U 
                                         & (vlSelfRef.picorv32__DOT___01142_ 
                                            >> 6U))) 
              | ((0x1000000U & (vlSelfRef.picorv32__DOT___01142_ 
                                >> 7U)) | (0x800000U 
                                           & (vlSelfRef.picorv32__DOT___01142_ 
                                              >> 8U)))) 
             | ((0x400000U & (vlSelfRef.picorv32__DOT___01142_ 
                              >> 9U)) | ((0x200000U 
                                          & (vlSelfRef.picorv32__DOT___01142_ 
                                             >> 0xaU)) 
                                         | (0x100000U 
                                            & (vlSelfRef.picorv32__DOT___01142_ 
                                               >> 0xbU))))) 
            | ((((0x80000U & (vlSelfRef.picorv32__DOT___01142_ 
                              >> 0xcU)) | (0x40000U 
                                           & (vlSelfRef.picorv32__DOT___01142_ 
                                              >> 0xdU))) 
                | ((0x20000U & (vlSelfRef.picorv32__DOT___01142_ 
                                >> 0xeU)) | (0x10000U 
                                             & (vlSelfRef.picorv32__DOT___01142_ 
                                                >> 0xfU)))) 
               | ((0x8000U & (vlSelfRef.picorv32__DOT___01142_ 
                              >> 0x10U)) | ((0x4000U 
                                             & (vlSelfRef.picorv32__DOT___01142_ 
                                                >> 0x11U)) 
                                            | (0x2000U 
                                               & (vlSelfRef.picorv32__DOT___01142_ 
                                                  >> 0x12U)))))) 
           | (((((0x1000U & (vlSelfRef.picorv32__DOT___01142_ 
                             >> 0x13U)) | (0x800U & 
                                           (vlSelfRef.picorv32__DOT___01142_ 
                                            >> 0x14U))) 
                | ((0x400U & (vlSelfRef.picorv32__DOT___01142_ 
                              >> 0x15U)) | (0x200U 
                                            & (vlSelfRef.picorv32__DOT___01142_ 
                                               >> 0x16U)))) 
               | ((0x100U & (vlSelfRef.picorv32__DOT___01142_ 
                             >> 0x17U)) | ((0x80U & 
                                            (vlSelfRef.picorv32__DOT___01142_ 
                                             >> 0x18U)) 
                                           | (0x40U 
                                              & (vlSelfRef.picorv32__DOT___01142_ 
                                                 >> 0x19U))))) 
              | (((0x20U & (vlSelfRef.picorv32__DOT___01142_ 
                            >> 0x1aU)) | ((0x10U & 
                                           (vlSelfRef.picorv32__DOT___01142_ 
                                            >> 0x1bU)) 
                                          | (8U & (vlSelfRef.picorv32__DOT___01142_ 
                                                   >> 0x1cU)))) 
                 | ((4U & (vlSelfRef.picorv32__DOT___01142_ 
                           >> 0x1dU)) | ((2U & (vlSelfRef.picorv32__DOT___01142_ 
                                                >> 0x1eU)) 
                                         | (vlSelfRef.picorv32__DOT___01142_ 
                                            >> 0x1fU))))));
    picorv32__DOT___01710_ = (1U & ((vlSelfRef.picorv32__DOT___01143_ 
                                     >> 4U) & (vlSelfRef.picorv32__DOT___01142_ 
                                               >> 3U)));
    vlSelfRef.picorv32__DOT___01142_ = (3U | (((IData)(
                                                       (((IData)(vlSelfRef.picorv32__DOT__reg_sh) 
                                                         >> 4U) 
                                                        | (IData)(picorv32__DOT___01710_))) 
                                               << 0x1fU) 
                                              | ((vlSelfRef.picorv32__DOT____Vconcswap_1_h9a41b932__0 
                                                  << 4U) 
                                                 | ((8U 
                                                     & ((0xfffffff8U 
                                                         & (IData)(vlSelfRef.picorv32__DOT__reg_sh)) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5316) 
                                                           << 3U))) 
                                                    | (4U 
                                                       & (IData)(vlSelfRef.picorv32__DOT__reg_sh))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__3(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT__alu_eq = (1U & (~ ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                                >> 4U)));
    vlSelfRef.picorv32__DOT__alu_ltu = (1U & (~ ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                                 >> 2U)));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__4(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___01591_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 0x1eU) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 0x1dU)));
    vlSelfRef.picorv32__DOT___01576_ = (IData)(((0x30000000U 
                                                 == 
                                                 (0x30000000U 
                                                  & vlSelfRef.picorv32__DOT___01136_)) 
                                                & (vlSelfRef.picorv32__DOT___01135_ 
                                                   >> 0x1bU)));
    vlSelfRef.picorv32__DOT___01590_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 0x1cU) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 0x1bU)));
    vlSelfRef.picorv32__DOT___01589_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 0x1aU) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 0x19U)));
    vlSelfRef.picorv32__DOT___01588_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 0x18U) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 0x17U)));
    vlSelfRef.picorv32__DOT___01587_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 0x16U) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 0x15U)));
    vlSelfRef.picorv32__DOT___01586_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 0x14U) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 0x13U)));
    vlSelfRef.picorv32__DOT___01585_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 0x12U) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 0x11U)));
    vlSelfRef.picorv32__DOT___01584_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 0x10U) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 0xfU)));
    vlSelfRef.picorv32__DOT___01583_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 0xeU) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 0xdU)));
    vlSelfRef.picorv32__DOT___01582_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 0xcU) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 0xbU)));
    vlSelfRef.picorv32__DOT___01581_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 0xaU) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 9U)));
    vlSelfRef.picorv32__DOT___01580_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 8U) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 7U)));
    vlSelfRef.picorv32__DOT___01579_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 6U) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 5U)));
    vlSelfRef.picorv32__DOT___01578_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 4U) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 3U)));
    vlSelfRef.picorv32__DOT___01533_ = (IData)(((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & vlSelfRef.picorv32__DOT___01136_)) 
                                                & (vlSelfRef.picorv32__DOT___01135_ 
                                                   >> 1U)));
    vlSelfRef.picorv32__DOT___01577_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 2U) 
                                              & (vlSelfRef.picorv32__DOT___01135_ 
                                                 >> 1U)));
    vlSelfRef.picorv32__DOT___01518_ = (1U & ((vlSelfRef.picorv32__DOT___01136_ 
                                               >> 1U) 
                                              & vlSelfRef.picorv32__DOT___01135_));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__5(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___00977_ = (((IData)(vlSelfRef.picorv32__DOT__decoded_rd) 
                                         << 5U) | (IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_h1dbc993f__0));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h1dbc993f__0 
        = (((8U & ((IData)(vlSelfRef.picorv32__DOT___00977_) 
                   >> 1U)) | (4U & ((IData)(vlSelfRef.picorv32__DOT___00977_) 
                                    >> 2U))) | ((2U 
                                                 & ((IData)(vlSelfRef.picorv32__DOT___00977_) 
                                                    >> 3U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.picorv32__DOT___00977_) 
                                                      >> 4U))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__6(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___01546_ = (IData)((0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01556_ = (IData)((0xc000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01545_ = (IData)((0x30U 
                                                == 
                                                (0x30U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01555_ = (IData)((0x3000000U 
                                                == 
                                                (0x3000000U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01550_ = (IData)((0xc000U 
                                                == 
                                                (0xc000U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01554_ = (IData)((0xc00000U 
                                                == 
                                                (0xc00000U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01549_ = (IData)((0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01553_ = (IData)((0x300000U 
                                                == 
                                                (0x300000U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01547_ = (IData)((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01551_ = (IData)((0x30000U 
                                                == 
                                                (0x30000U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01548_ = (IData)((0xc00U 
                                                == 
                                                (0xc00U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01552_ = (IData)((0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelfRef.picorv32__DOT___01136_)));
    vlSelfRef.picorv32__DOT___01560_ = ((IData)(vlSelfRef.picorv32__DOT___01550_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01549_));
    vlSelfRef.picorv32__DOT___01562_ = ((IData)(vlSelfRef.picorv32__DOT___01554_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01553_));
    vlSelfRef.picorv32__DOT___01559_ = ((IData)(vlSelfRef.picorv32__DOT___01548_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01547_));
    vlSelfRef.picorv32__DOT___01561_ = ((IData)(vlSelfRef.picorv32__DOT___01552_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01551_));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__7(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT___01614_;
    picorv32__DOT___01614_ = 0;
    CData/*0:0*/ picorv32__DOT___01629_;
    picorv32__DOT___01629_ = 0;
    CData/*0:0*/ picorv32__DOT___01636_;
    picorv32__DOT___01636_ = 0;
    CData/*0:0*/ picorv32__DOT___01639_;
    picorv32__DOT___01639_ = 0;
    CData/*0:0*/ picorv32__DOT___01662_;
    picorv32__DOT___01662_ = 0;
    CData/*0:0*/ picorv32__DOT___01663_;
    picorv32__DOT___01663_ = 0;
    CData/*0:0*/ picorv32__DOT___01664_;
    picorv32__DOT___01664_ = 0;
    CData/*0:0*/ picorv32__DOT___01665_;
    picorv32__DOT___01665_ = 0;
    CData/*0:0*/ picorv32__DOT___01666_;
    picorv32__DOT___01666_ = 0;
    CData/*0:0*/ picorv32__DOT___01667_;
    picorv32__DOT___01667_ = 0;
    CData/*0:0*/ picorv32__DOT___01668_;
    picorv32__DOT___01668_ = 0;
    CData/*0:0*/ picorv32__DOT___01669_;
    picorv32__DOT___01669_ = 0;
    CData/*0:0*/ picorv32__DOT___01670_;
    picorv32__DOT___01670_ = 0;
    CData/*0:0*/ picorv32__DOT___01671_;
    picorv32__DOT___01671_ = 0;
    CData/*0:0*/ picorv32__DOT___01672_;
    picorv32__DOT___01672_ = 0;
    CData/*0:0*/ picorv32__DOT___01673_;
    picorv32__DOT___01673_ = 0;
    CData/*0:0*/ picorv32__DOT___01674_;
    picorv32__DOT___01674_ = 0;
    CData/*0:0*/ picorv32__DOT___01675_;
    picorv32__DOT___01675_ = 0;
    CData/*0:0*/ picorv32__DOT___01676_;
    picorv32__DOT___01676_ = 0;
    CData/*0:0*/ picorv32__DOT___01677_;
    picorv32__DOT___01677_ = 0;
    CData/*0:0*/ picorv32__DOT___01678_;
    picorv32__DOT___01678_ = 0;
    CData/*0:0*/ picorv32__DOT___01679_;
    picorv32__DOT___01679_ = 0;
    CData/*0:0*/ picorv32__DOT___01680_;
    picorv32__DOT___01680_ = 0;
    CData/*0:0*/ picorv32__DOT___01681_;
    picorv32__DOT___01681_ = 0;
    CData/*0:0*/ picorv32__DOT___01682_;
    picorv32__DOT___01682_ = 0;
    CData/*0:0*/ picorv32__DOT___01683_;
    picorv32__DOT___01683_ = 0;
    CData/*0:0*/ picorv32__DOT___01684_;
    picorv32__DOT___01684_ = 0;
    CData/*0:0*/ picorv32__DOT___01685_;
    picorv32__DOT___01685_ = 0;
    CData/*0:0*/ picorv32__DOT___01686_;
    picorv32__DOT___01686_ = 0;
    CData/*0:0*/ picorv32__DOT___01687_;
    picorv32__DOT___01687_ = 0;
    CData/*0:0*/ picorv32__DOT___01689_;
    picorv32__DOT___01689_ = 0;
    CData/*0:0*/ picorv32__DOT___01691_;
    picorv32__DOT___01691_ = 0;
    CData/*0:0*/ picorv32__DOT___01693_;
    picorv32__DOT___01693_ = 0;
    CData/*0:0*/ picorv32__DOT___01695_;
    picorv32__DOT___01695_ = 0;
    CData/*0:0*/ picorv32__DOT___01697_;
    picorv32__DOT___01697_ = 0;
    CData/*0:0*/ picorv32__DOT___01699_;
    picorv32__DOT___01699_ = 0;
    CData/*0:0*/ picorv32__DOT___01703_;
    picorv32__DOT___01703_ = 0;
    CData/*0:0*/ picorv32__DOT___01705_;
    picorv32__DOT___01705_ = 0;
    IData/*30:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5272;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5272 = 0;
    // Body
    vlSelfRef.picorv32__DOT___01141_ = ((0x80000000U 
                                         & vlSelfRef.picorv32__DOT___01141_) 
                                        | ((0x7ffffffeU 
                                            & (vlSelfRef.picorv32__DOT__reg_op1 
                                               & vlSelfRef.picorv32__DOT__decoded_imm)) 
                                           | (1U & vlSelfRef.picorv32__DOT___01138_)));
    picorv32__DOT___01687_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 0x1eU) & (vlSelfRef.picorv32__DOT___01138_ 
                                                  >> 0x1dU)));
    picorv32__DOT___01672_ = (IData)(((0x30000000U 
                                       == (0x30000000U 
                                           & vlSelfRef.picorv32__DOT___01139_)) 
                                      & (vlSelfRef.picorv32__DOT___01138_ 
                                         >> 0x1bU)));
    picorv32__DOT___01686_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 0x1cU) & (vlSelfRef.picorv32__DOT___01138_ 
                                                  >> 0x1bU)));
    picorv32__DOT___01685_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 0x1aU) & (vlSelfRef.picorv32__DOT___01138_ 
                                                  >> 0x19U)));
    picorv32__DOT___01684_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 0x18U) & (vlSelfRef.picorv32__DOT___01138_ 
                                                  >> 0x17U)));
    picorv32__DOT___01683_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 0x16U) & (vlSelfRef.picorv32__DOT___01138_ 
                                                  >> 0x15U)));
    picorv32__DOT___01682_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 0x14U) & (vlSelfRef.picorv32__DOT___01138_ 
                                                  >> 0x13U)));
    picorv32__DOT___01681_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 0x12U) & (vlSelfRef.picorv32__DOT___01138_ 
                                                  >> 0x11U)));
    picorv32__DOT___01680_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 0x10U) & (vlSelfRef.picorv32__DOT___01138_ 
                                                  >> 0xfU)));
    picorv32__DOT___01679_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 0xeU) & (vlSelfRef.picorv32__DOT___01138_ 
                                                 >> 0xdU)));
    picorv32__DOT___01678_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 0xcU) & (vlSelfRef.picorv32__DOT___01138_ 
                                                 >> 0xbU)));
    picorv32__DOT___01677_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 0xaU) & (vlSelfRef.picorv32__DOT___01138_ 
                                                 >> 9U)));
    picorv32__DOT___01676_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 8U) & (vlSelfRef.picorv32__DOT___01138_ 
                                               >> 7U)));
    picorv32__DOT___01675_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 6U) & (vlSelfRef.picorv32__DOT___01138_ 
                                               >> 5U)));
    picorv32__DOT___01674_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 4U) & (vlSelfRef.picorv32__DOT___01138_ 
                                               >> 3U)));
    picorv32__DOT___01629_ = (IData)(((0xcU == (0xcU 
                                                & vlSelfRef.picorv32__DOT___01139_)) 
                                      & (vlSelfRef.picorv32__DOT___01138_ 
                                         >> 1U)));
    picorv32__DOT___01673_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 2U) & (vlSelfRef.picorv32__DOT___01138_ 
                                               >> 1U)));
    picorv32__DOT___01614_ = (1U & ((vlSelfRef.picorv32__DOT___01139_ 
                                     >> 1U) & vlSelfRef.picorv32__DOT___01138_));
    picorv32__DOT___01671_ = ((IData)(vlSelfRef.picorv32__DOT___01651_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0x17U));
    picorv32__DOT___01670_ = ((IData)(vlSelfRef.picorv32__DOT___01649_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0x13U));
    picorv32__DOT___01669_ = ((IData)(vlSelfRef.picorv32__DOT___01647_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0xfU));
    picorv32__DOT___01668_ = ((IData)(vlSelfRef.picorv32__DOT___01645_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0xbU));
    picorv32__DOT___01667_ = ((IData)(vlSelfRef.picorv32__DOT___01643_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 7U));
    picorv32__DOT___01666_ = ((IData)(vlSelfRef.picorv32__DOT___01641_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 3U));
    picorv32__DOT___01665_ = (((IData)(vlSelfRef.picorv32__DOT___01652_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01651_)) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0x17U));
    picorv32__DOT___01636_ = (((IData)(vlSelfRef.picorv32__DOT___01642_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01641_)) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 3U));
    picorv32__DOT___01664_ = ((IData)(vlSelfRef.picorv32__DOT___01657_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0xfU));
    picorv32__DOT___01663_ = ((IData)(vlSelfRef.picorv32__DOT___01655_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 7U));
    picorv32__DOT___01662_ = (((IData)(vlSelfRef.picorv32__DOT___01658_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01657_)) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0xfU));
    picorv32__DOT___01639_ = (((IData)(vlSelfRef.picorv32__DOT___01656_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01655_)) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 7U));
    picorv32__DOT___01699_ = (1U & ((vlSelfRef.picorv32__DOT___01141_ 
                                     >> 0x19U) | ((vlSelfRef.picorv32__DOT___01139_ 
                                                   >> 0x19U) 
                                                  & (vlSelfRef.picorv32__DOT___01141_ 
                                                     >> 0x18U))));
    picorv32__DOT___01697_ = (1U & ((vlSelfRef.picorv32__DOT___01141_ 
                                     >> 0x15U) | ((vlSelfRef.picorv32__DOT___01139_ 
                                                   >> 0x15U) 
                                                  & (vlSelfRef.picorv32__DOT___01141_ 
                                                     >> 0x14U))));
    picorv32__DOT___01693_ = (1U & ((vlSelfRef.picorv32__DOT___01141_ 
                                     >> 0xdU) | ((vlSelfRef.picorv32__DOT___01139_ 
                                                  >> 0xdU) 
                                                 & (vlSelfRef.picorv32__DOT___01141_ 
                                                    >> 0xcU))));
    picorv32__DOT___01689_ = (1U & ((vlSelfRef.picorv32__DOT___01141_ 
                                     >> 5U) | ((vlSelfRef.picorv32__DOT___01139_ 
                                                >> 5U) 
                                               & (vlSelfRef.picorv32__DOT___01141_ 
                                                  >> 4U))));
    picorv32__DOT___01695_ = (1U & ((vlSelfRef.picorv32__DOT___01141_ 
                                     >> 0x11U) | ((vlSelfRef.picorv32__DOT___01139_ 
                                                   >> 0x11U) 
                                                  & (vlSelfRef.picorv32__DOT___01141_ 
                                                     >> 0x10U))));
    picorv32__DOT___01691_ = (1U & ((vlSelfRef.picorv32__DOT___01141_ 
                                     >> 9U) | ((vlSelfRef.picorv32__DOT___01139_ 
                                                >> 9U) 
                                               & (vlSelfRef.picorv32__DOT___01141_ 
                                                  >> 8U))));
    picorv32__DOT___01705_ = (1U & (((vlSelfRef.picorv32__DOT___01141_ 
                                      >> 0x13U) | (
                                                   (vlSelfRef.picorv32__DOT___01139_ 
                                                    >> 0x13U) 
                                                   & (vlSelfRef.picorv32__DOT___01141_ 
                                                      >> 0x12U))) 
                                    | ((IData)(vlSelfRef.picorv32__DOT___01648_) 
                                       & (IData)(picorv32__DOT___01695_))));
    picorv32__DOT___01703_ = (1U & (((vlSelfRef.picorv32__DOT___01141_ 
                                      >> 0xbU) | ((vlSelfRef.picorv32__DOT___01139_ 
                                                   >> 0xbU) 
                                                  & (vlSelfRef.picorv32__DOT___01141_ 
                                                     >> 0xaU))) 
                                    | ((IData)(vlSelfRef.picorv32__DOT___01644_) 
                                       & (IData)(picorv32__DOT___01691_))));
    vlSelfRef.picorv32__DOT___01138_ = ((0x80000000U 
                                         & vlSelfRef.picorv32__DOT___01138_) 
                                        | ((((((0x40000000U 
                                                & ((0xc0000000U 
                                                    & vlSelfRef.picorv32__DOT___01141_) 
                                                   | ((IData)(picorv32__DOT___01687_) 
                                                      << 0x1eU))) 
                                               | (0x20000000U 
                                                  & ((0xe0000000U 
                                                      & (vlSelfRef.picorv32__DOT___01141_ 
                                                         | (vlSelfRef.picorv32__DOT___01139_ 
                                                            & (vlSelfRef.picorv32__DOT___01141_ 
                                                               << 1U)))) 
                                                     | ((IData)(picorv32__DOT___01672_) 
                                                        << 0x1dU)))) 
                                              | ((0x10000000U 
                                                  & ((0xf0000000U 
                                                      & vlSelfRef.picorv32__DOT___01141_) 
                                                     | ((IData)(picorv32__DOT___01686_) 
                                                        << 0x1cU))) 
                                                 | (0x8000000U 
                                                    & (((0xf8000000U 
                                                         & (vlSelfRef.picorv32__DOT___01141_ 
                                                            | (vlSelfRef.picorv32__DOT___01139_ 
                                                               & (vlSelfRef.picorv32__DOT___01141_ 
                                                                  << 1U)))) 
                                                        | (((IData)(vlSelfRef.picorv32__DOT___01652_) 
                                                            & (IData)(picorv32__DOT___01699_)) 
                                                           << 0x1bU)) 
                                                       | ((IData)(picorv32__DOT___01665_) 
                                                          << 0x1bU))))) 
                                             | (((0x4000000U 
                                                  & ((0xfc000000U 
                                                      & vlSelfRef.picorv32__DOT___01141_) 
                                                     | ((IData)(picorv32__DOT___01685_) 
                                                        << 0x1aU))) 
                                                 | (((IData)(picorv32__DOT___01699_) 
                                                     | (IData)(picorv32__DOT___01671_)) 
                                                    << 0x19U)) 
                                                | ((0x1000000U 
                                                    & ((0xff000000U 
                                                        & vlSelfRef.picorv32__DOT___01141_) 
                                                       | ((IData)(picorv32__DOT___01684_) 
                                                          << 0x18U))) 
                                                   | (0x800000U 
                                                      & ((((0xff800000U 
                                                            & (vlSelfRef.picorv32__DOT___01141_ 
                                                               | (vlSelfRef.picorv32__DOT___01139_ 
                                                                  & (vlSelfRef.picorv32__DOT___01141_ 
                                                                     << 1U)))) 
                                                           | (((IData)(vlSelfRef.picorv32__DOT___01650_) 
                                                               & (IData)(picorv32__DOT___01697_)) 
                                                              << 0x17U)) 
                                                          | (((IData)(vlSelfRef.picorv32__DOT___01658_) 
                                                              & (IData)(picorv32__DOT___01705_)) 
                                                             << 0x17U)) 
                                                         | ((IData)(picorv32__DOT___01662_) 
                                                            << 0x17U)))))) 
                                            | ((((0x400000U 
                                                  & ((0xffc00000U 
                                                      & vlSelfRef.picorv32__DOT___01141_) 
                                                     | ((IData)(picorv32__DOT___01683_) 
                                                        << 0x16U))) 
                                                 | (((IData)(picorv32__DOT___01697_) 
                                                     | (IData)(picorv32__DOT___01670_)) 
                                                    << 0x15U)) 
                                                | ((0x100000U 
                                                    & ((0xfff00000U 
                                                        & vlSelfRef.picorv32__DOT___01141_) 
                                                       | ((IData)(picorv32__DOT___01682_) 
                                                          << 0x14U))) 
                                                   | (((IData)(picorv32__DOT___01705_) 
                                                       | (IData)(picorv32__DOT___01664_)) 
                                                      << 0x13U))) 
                                               | (((0x40000U 
                                                    & ((0xfffc0000U 
                                                        & vlSelfRef.picorv32__DOT___01141_) 
                                                       | ((IData)(picorv32__DOT___01681_) 
                                                          << 0x12U))) 
                                                   | (((IData)(picorv32__DOT___01695_) 
                                                       | (IData)(picorv32__DOT___01669_)) 
                                                      << 0x11U)) 
                                                  | ((0x10000U 
                                                      & ((0xffff0000U 
                                                          & vlSelfRef.picorv32__DOT___01141_) 
                                                         | ((IData)(picorv32__DOT___01680_) 
                                                            << 0x10U))) 
                                                     | (0x8000U 
                                                        & ((((0xffff8000U 
                                                              & (vlSelfRef.picorv32__DOT___01141_ 
                                                                 | (vlSelfRef.picorv32__DOT___01139_ 
                                                                    & (vlSelfRef.picorv32__DOT___01141_ 
                                                                       << 1U)))) 
                                                             | (((IData)(vlSelfRef.picorv32__DOT___01646_) 
                                                                 & (IData)(picorv32__DOT___01693_)) 
                                                                << 0xfU)) 
                                                            | (((IData)(vlSelfRef.picorv32__DOT___01656_) 
                                                                & (IData)(picorv32__DOT___01703_)) 
                                                               << 0xfU)) 
                                                           | ((IData)(picorv32__DOT___01639_) 
                                                              << 0xfU))))))) 
                                           | (((((0x4000U 
                                                  & ((0xffffc000U 
                                                      & vlSelfRef.picorv32__DOT___01141_) 
                                                     | ((IData)(picorv32__DOT___01679_) 
                                                        << 0xeU))) 
                                                 | (((IData)(picorv32__DOT___01693_) 
                                                     | (IData)(picorv32__DOT___01668_)) 
                                                    << 0xdU)) 
                                                | ((0x1000U 
                                                    & ((0xfffff000U 
                                                        & vlSelfRef.picorv32__DOT___01141_) 
                                                       | ((IData)(picorv32__DOT___01678_) 
                                                          << 0xcU))) 
                                                   | (((IData)(picorv32__DOT___01703_) 
                                                       | (IData)(picorv32__DOT___01663_)) 
                                                      << 0xbU))) 
                                               | (((0x400U 
                                                    & ((0xfffffc00U 
                                                        & vlSelfRef.picorv32__DOT___01141_) 
                                                       | ((IData)(picorv32__DOT___01677_) 
                                                          << 0xaU))) 
                                                   | (((IData)(picorv32__DOT___01691_) 
                                                       | (IData)(picorv32__DOT___01667_)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((0xffffff00U 
                                                          & vlSelfRef.picorv32__DOT___01141_) 
                                                         | ((IData)(picorv32__DOT___01676_) 
                                                            << 8U))) 
                                                     | (0x80U 
                                                        & (((0xffffff80U 
                                                             & (vlSelfRef.picorv32__DOT___01141_ 
                                                                | (vlSelfRef.picorv32__DOT___01139_ 
                                                                   & (vlSelfRef.picorv32__DOT___01141_ 
                                                                      << 1U)))) 
                                                            | (((IData)(vlSelfRef.picorv32__DOT___01642_) 
                                                                & (IData)(picorv32__DOT___01689_)) 
                                                               << 7U)) 
                                                           | ((IData)(picorv32__DOT___01636_) 
                                                              << 7U)))))) 
                                              | ((((0x40U 
                                                    & ((0xffffffc0U 
                                                        & vlSelfRef.picorv32__DOT___01141_) 
                                                       | ((IData)(picorv32__DOT___01675_) 
                                                          << 6U))) 
                                                   | (((IData)(picorv32__DOT___01689_) 
                                                       | (IData)(picorv32__DOT___01666_)) 
                                                      << 5U)) 
                                                  | ((0x10U 
                                                      & ((0xfffffff0U 
                                                          & vlSelfRef.picorv32__DOT___01141_) 
                                                         | ((IData)(picorv32__DOT___01674_) 
                                                            << 4U))) 
                                                     | (8U 
                                                        & ((0xfffffff8U 
                                                            & (vlSelfRef.picorv32__DOT___01141_ 
                                                               | (vlSelfRef.picorv32__DOT___01139_ 
                                                                  & (vlSelfRef.picorv32__DOT___01141_ 
                                                                     << 1U)))) 
                                                           | ((IData)(picorv32__DOT___01629_) 
                                                              << 3U))))) 
                                                 | ((4U 
                                                     & ((0xfffffffcU 
                                                         & vlSelfRef.picorv32__DOT___01141_) 
                                                        | ((IData)(picorv32__DOT___01673_) 
                                                           << 2U))) 
                                                    | ((2U 
                                                        & ((0xfffffffeU 
                                                            & vlSelfRef.picorv32__DOT___01141_) 
                                                           | ((IData)(picorv32__DOT___01614_) 
                                                              << 1U))) 
                                                       | (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_op1 
                                                             & vlSelfRef.picorv32__DOT__decoded_imm))))))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
        = (0x7fffffffU & ((vlSelfRef.picorv32__DOT___01139_ 
                           >> 1U) ^ vlSelfRef.picorv32__DOT___01138_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5519 
        = ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
           & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
              >> 0x1eU));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5517 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x1dU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5523 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x1cU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5521 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x1bU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5527 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x1aU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5525 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x19U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5531 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x18U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5529 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x17U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5535 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x16U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5533 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x15U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5539 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x14U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5537 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x13U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5543 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x12U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5541 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x11U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5547 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x10U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5545 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xfU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5551 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xeU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5549 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xdU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5555 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xcU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5553 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xbU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5559 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xaU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5557 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 9U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5563 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 8U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5561 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 7U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5567 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 6U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5565 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 5U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5571 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 4U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5569 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 3U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5575 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 2U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5573 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5578 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                 & picorv32__DOT____VdfgRegularize_h2364b514_0_5272));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5454 
        = ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
           & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
              >> 0x1eU));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5453 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x1dU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5456 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x1cU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5455 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x1bU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5458 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x1aU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5457 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x19U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5460 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x18U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5459 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x17U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5462 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x16U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5461 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x15U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5464 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x14U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5463 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x13U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5466 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x12U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5465 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x11U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5468 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0x10U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5467 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xfU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5470 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xeU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5469 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xdU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5472 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xcU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5471 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xbU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5474 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 0xaU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5473 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 9U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5476 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 8U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5475 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 7U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5478 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 6U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5477 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 5U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5480 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 4U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5479 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 3U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5482 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 2U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5481 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & (picorv32__DOT____VdfgRegularize_h2364b514_0_5272 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5484 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                 & picorv32__DOT____VdfgRegularize_h2364b514_0_5272));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5486 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5519));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5485 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5517));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5488 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5523));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5487 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5521));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5490 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5527));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5489 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5525));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5492 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5531));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5491 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5529));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5494 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5535));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5493 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5533));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5496 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5539));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5495 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5537));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5498 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5543));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5497 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5541));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5500 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5547));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5499 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5545));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5502 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5551));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5501 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5549));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5504 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5555));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5503 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5553));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5506 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5559));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5505 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5557));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5508 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5563));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5507 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5561));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5510 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5567));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5509 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5565));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5512 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5571));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5511 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5569));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5514 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5575));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5513 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5573));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5516 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5578));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5422 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5454));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5421 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5453));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5424 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5456));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5423 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5455));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5426 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5458));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5425 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5457));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5428 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5460));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5427 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5459));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5430 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5462));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5429 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5461));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5432 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5464));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5431 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5463));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5434 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5466));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5433 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5465));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5436 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5468));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5435 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5467));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5438 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5470));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5437 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5469));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5440 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5472));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5439 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5471));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5442 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5474));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5441 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5473));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5444 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5476));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5443 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5475));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5446 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5478));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5445 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5477));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5448 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5480));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5447 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5479));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5450 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5482));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5449 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5481));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5452 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5484));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__8(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT___01111_;
    picorv32__DOT___01111_ = 0;
    CData/*0:0*/ picorv32__DOT___01112_;
    picorv32__DOT___01112_ = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_785;
    picorv32__DOT____VdfgRegularize_h2364b514_0_785 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_788;
    picorv32__DOT____VdfgRegularize_h2364b514_0_788 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_792;
    picorv32__DOT____VdfgRegularize_h2364b514_0_792 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_795;
    picorv32__DOT____VdfgRegularize_h2364b514_0_795 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4576;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4576 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4577;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4577 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4578;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4578 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4579;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4579 = 0;
    // Body
    vlSelfRef.picorv32__DOT__decoded_imm_j = (((((IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_heb3759c2__0) 
                                                 << 0x1fU) 
                                                | ((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b30__05d) 
                                                   << 0x1eU)) 
                                               | ((0x3ff00000U 
                                                   & (vlSelfRef.picorv32__DOT____Vconcswap_1_h06e69400__0 
                                                      << 0xcU)) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b19__05d) 
                                                      << 0x13U) 
                                                     | ((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b18__05d) 
                                                        << 0x12U)))) 
                                              | ((((0x38000U 
                                                    & (vlSelfRef.picorv32__DOT____Vconcswap_1_h06e69400__0 
                                                       << 0xaU)) 
                                                   | (((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b14__05d) 
                                                       << 0xeU) 
                                                      | ((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b13__05d) 
                                                         << 0xdU))) 
                                                  | ((((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b12__05d) 
                                                       << 0xcU) 
                                                      | (0x800U 
                                                         & (vlSelfRef.picorv32__DOT____Vconcswap_1_h06e69400__0 
                                                            << 7U))) 
                                                     | (((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b10__05d) 
                                                         << 0xaU) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b9__05d) 
                                                           << 9U)))) 
                                                 | ((((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b8__05d) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b7__05d) 
                                                         << 7U) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b6__05d) 
                                                           << 6U))) 
                                                    | (((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b5__05d) 
                                                        << 5U) 
                                                       | (((IData)(vlSelfRef.picorv32__DOT__decoded_imm_j_reg__05b4__05d) 
                                                           << 4U) 
                                                          | (0xfU 
                                                             & vlSelfRef.picorv32__DOT____Vconcswap_1_h06e69400__0))))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_heb3759c2__0 
        = (1U & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                 >> 0x1eU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4578 
        = ((vlSelfRef.picorv32__DOT__decoded_imm_j 
            >> 4U) & (IData)(vlSelfRef.picorv32__DOT__is_slli_srli_srai));
    vlSelfRef.picorv32__DOT__decoded_rs1 = (((0x18U 
                                              & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                 >> 0xfU)) 
                                             | ((IData)(vlSelfRef.picorv32__DOT__decoded_rs1_reg__05b2__05d) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.picorv32__DOT__decoded_rs1_reg__05b1__05d) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.picorv32__DOT__decoded_rs1_reg__05b0__05d)));
    vlSelfRef.picorv32__DOT__decoded_rs2 = (((0x10U 
                                              & vlSelfRef.picorv32__DOT__decoded_imm_j) 
                                             | (((IData)(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b3__05d) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b2__05d) 
                                                   << 2U))) 
                                            | (((IData)(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b1__05d) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.picorv32__DOT__decoded_rs2_reg__05b0__05d)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5298 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5632) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5296 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5631) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5297 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5634) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5294 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5633) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5295 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5636) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5292 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5635) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5293 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5638) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5290 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5637) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5277 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5657) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 4U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5291 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5640) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5288 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5639) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5289 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5642) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5286 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5641) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5287 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5644) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x13U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5283 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5643) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x12U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5282 
        = (7U & ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5647) 
                   << 2U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5650) 
                              << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5649))) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0xcU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5280 
        = (0x3fU & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5348) 
                    ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                       >> 5U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_788 
        = (IData)((0U != (3U & (IData)(vlSelfRef.picorv32__DOT__decoded_rs1))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_785 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT__decoded_rs1) 
                  >> 2U) | (vlSelfRef.picorv32__DOT__decoded_imm_j 
                            >> 0x12U)));
    vlSelfRef.picorv32__DOT___00133_ = (((0x10U & (
                                                   ((IData)(vlSelfRef.picorv32__DOT___00950_)
                                                     ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2944)
                                                     : 
                                                    (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                     >> 0x13U)) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   ((IData)(vlSelfRef.picorv32__DOT___00950_)
                                                     ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2946)
                                                     : 
                                                    (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                     >> 0x12U)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((IData)(vlSelfRef.picorv32__DOT___00950_)
                                                  ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2940)
                                                  : 
                                                 ((IData)(vlSelfRef.picorv32__DOT__decoded_rs1) 
                                                  >> 2U)) 
                                                << 2U)))) 
                                        | ((2U & (((IData)(vlSelfRef.picorv32__DOT___00950_)
                                                    ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2942)
                                                    : 
                                                   ((IData)(vlSelfRef.picorv32__DOT__decoded_rs1) 
                                                    >> 1U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.picorv32__DOT___00950_)
                                                ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2936)
                                                : (IData)(vlSelfRef.picorv32__DOT__decoded_rs1)))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5281 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5648) 
                 ^ (IData)(vlSelfRef.picorv32__DOT__decoded_rs1)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5284 
        = (3U & ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5646) 
                   << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5645)) 
                 ^ ((IData)(vlSelfRef.picorv32__DOT__decoded_rs1) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h06e69400__0 
        = (((((0x20000U & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                           >> 0xdU)) | ((0x10000U & 
                                         (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                          >> 0xeU)) 
                                        | (0x8000U 
                                           & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                              >> 0xfU)))) 
             | ((0x4000U & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                            >> 0x10U)) | (0x2000U & 
                                          (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                           >> 0x11U)))) 
            | (((0x1000U & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                            >> 0x12U)) | (0x800U & 
                                          (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                           >> 0x13U))) 
               | ((0x400U & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                             >> 0x14U)) | (0x200U & 
                                           (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                            >> 0x15U))))) 
           | (((0x100U & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                          >> 0x16U)) | ((0xe0U & ((IData)(vlSelfRef.picorv32__DOT__decoded_rs1) 
                                                  << 5U)) 
                                        | (0x10U & 
                                           ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                                            << 4U)))) 
              | (0xeU & (IData)(vlSelfRef.picorv32__DOT__decoded_rs2))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4579 
        = (((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
            >> 3U) & (IData)(vlSelfRef.picorv32__DOT__is_slli_srli_srai));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4576 
        = (((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
            >> 2U) & (IData)(vlSelfRef.picorv32__DOT__is_slli_srli_srai));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4577 
        = (3U & ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                 & (- (IData)((IData)(vlSelfRef.picorv32__DOT__is_slli_srli_srai)))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_792 
        = (IData)((0U != (0xcU & (IData)(vlSelfRef.picorv32__DOT__decoded_rs2))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_795 
        = (IData)((0U != (3U & (IData)(vlSelfRef.picorv32__DOT__decoded_rs2))));
    vlSelfRef.picorv32__DOT___00132_ = (((0x10U & (
                                                   ((IData)(vlSelfRef.picorv32__DOT___00950_)
                                                     ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2957)
                                                     : 
                                                    (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                     >> 4U)) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   ((IData)(vlSelfRef.picorv32__DOT___00950_)
                                                     ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2952)
                                                     : 
                                                    ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                                                     >> 3U)) 
                                                   << 3U)) 
                                            | (4U & 
                                               (((IData)(vlSelfRef.picorv32__DOT___00950_)
                                                  ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2954)
                                                  : 
                                                 ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                                                  >> 2U)) 
                                                << 2U)))) 
                                        | ((2U & (((IData)(vlSelfRef.picorv32__DOT___00950_)
                                                    ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2948)
                                                    : 
                                                   ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                                                    >> 1U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.picorv32__DOT___00950_)
                                                ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2950)
                                                : (IData)(vlSelfRef.picorv32__DOT__decoded_rs2)))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5278 
        = (7U & ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5660) 
                   << 2U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5659) 
                              << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5661))) 
                 ^ ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5279 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5652) 
                 ^ (IData)(vlSelfRef.picorv32__DOT__decoded_rs2)));
    vlSelfRef.picorv32__DOT___01460_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5295) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5292));
    vlSelfRef.picorv32__DOT___01459_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5293) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5290));
    vlSelfRef.picorv32__DOT___01458_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5291) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5288));
    vlSelfRef.picorv32__DOT___01457_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5289) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5286));
    vlSelfRef.picorv32__DOT___01456_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5287) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5283));
    vlSelfRef.picorv32__DOT___01453_ = (IData)((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5282))));
    vlSelfRef.picorv32__DOT___01450_ = (IData)((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5280))));
    vlSelfRef.picorv32__DOT___01449_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5280) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5277));
    vlSelfRef.picorv32__DOT___01451_ = (IData)((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5280))));
    picorv32__DOT___01111_ = (1U & (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_788) 
                                     | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_785)) 
                                    | (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                       >> 0x13U)));
    vlSelfRef.picorv32__DOT___01454_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5281) 
                                        & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5282) 
                                           >> 2U));
    vlSelfRef.picorv32__DOT___01455_ = (IData)((3U 
                                                == (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5284)));
    picorv32__DOT___01112_ = (1U & (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_795) 
                                     | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_792)) 
                                    | (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                       >> 4U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3267 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT__instr_jal)
                  ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5278)
                  : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5661)));
    vlSelfRef.picorv32__DOT___01452_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5279) 
                                        & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5280) 
                                           >> 5U));
    vlSelfRef.picorv32__DOT___01132_ = (((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5298) 
                                             << 0x1fU) 
                                            | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5296) 
                                               << 0x1eU)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5297) 
                                               << 0x1dU) 
                                              | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5294) 
                                                 << 0x1cU))) 
                                          | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5295) 
                                               << 0x1bU) 
                                              | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5292) 
                                                 << 0x1aU)) 
                                             | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5293) 
                                                 << 0x19U) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5290) 
                                                   << 0x18U)))) 
                                         | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5291) 
                                               << 0x17U) 
                                              | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5288) 
                                                 << 0x16U)) 
                                             | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5289) 
                                                 << 0x15U) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5286) 
                                                   << 0x14U))) 
                                            | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5287) 
                                                << 0x13U) 
                                               | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5283) 
                                                   << 0x12U) 
                                                  | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5284) 
                                                     << 0x10U))))) 
                                        | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5281) 
                                             << 0xfU) 
                                            | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5282) 
                                                << 0xcU) 
                                               | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5279) 
                                                  << 0xbU))) 
                                           | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5280) 
                                               << 5U) 
                                              | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5277) 
                                                  << 4U) 
                                                 | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5278) 
                                                    << 1U)))));
    vlSelfRef.picorv32__DOT___01466_ = ((IData)(vlSelfRef.picorv32__DOT___01458_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01457_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3043 
        = ((IData)(picorv32__DOT___01111_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4376));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3041 
        = ((IData)(picorv32__DOT___01111_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4375));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3039 
        = ((IData)(picorv32__DOT___01111_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4370));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3037 
        = ((IData)(picorv32__DOT___01111_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4369));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3035 
        = ((IData)(picorv32__DOT___01111_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4364));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3033 
        = ((IData)(picorv32__DOT___01111_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4363));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3031 
        = ((IData)(picorv32__DOT___01111_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4358));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3029 
        = ((IData)(picorv32__DOT___01111_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4357));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3027 
        = ((IData)(picorv32__DOT___01111_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4352));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3024 
        = ((IData)(picorv32__DOT___01111_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4351));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3026 
        = ((- (IData)((IData)(picorv32__DOT___01111_))) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5341));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3045 
        = ((- (IData)((IData)(picorv32__DOT___01111_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4378) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4379)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3044 
        = ((- (IData)((IData)(picorv32__DOT___01111_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4377) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4374)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3042 
        = ((- (IData)((IData)(picorv32__DOT___01111_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4372) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4373)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3040 
        = ((- (IData)((IData)(picorv32__DOT___01111_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4371) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4368)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3038 
        = ((- (IData)((IData)(picorv32__DOT___01111_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4366) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4367)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3036 
        = ((- (IData)((IData)(picorv32__DOT___01111_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4365) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4362)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3034 
        = ((- (IData)((IData)(picorv32__DOT___01111_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4360) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4361)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3032 
        = ((- (IData)((IData)(picorv32__DOT___01111_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4359) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4356)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3030 
        = ((- (IData)((IData)(picorv32__DOT___01111_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4354) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4355)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3028 
        = ((- (IData)((IData)(picorv32__DOT___01111_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4353) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4350)));
    vlSelfRef.picorv32__DOT___01464_ = ((IData)(vlSelfRef.picorv32__DOT___01454_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01453_));
    vlSelfRef.picorv32__DOT___01465_ = ((IData)(vlSelfRef.picorv32__DOT___01456_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01455_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3046 
        = ((IData)(picorv32__DOT___01112_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2778));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3065 
        = ((IData)(picorv32__DOT___01112_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2803));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3063 
        = ((IData)(picorv32__DOT___01112_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2802));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3061 
        = ((IData)(picorv32__DOT___01112_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2797));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3059 
        = ((IData)(picorv32__DOT___01112_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2796));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3057 
        = ((IData)(picorv32__DOT___01112_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2791));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3055 
        = ((IData)(picorv32__DOT___01112_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2790));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3053 
        = ((IData)(picorv32__DOT___01112_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2785));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3051 
        = ((IData)(picorv32__DOT___01112_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2784));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3049 
        = ((IData)(picorv32__DOT___01112_) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2779));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3050 
        = ((- (IData)((IData)(picorv32__DOT___01112_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2780) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2777)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3048 
        = ((- (IData)((IData)(picorv32__DOT___01112_))) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5338));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3067 
        = ((- (IData)((IData)(picorv32__DOT___01112_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2805) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2806)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3066 
        = ((- (IData)((IData)(picorv32__DOT___01112_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2804) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2801)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3064 
        = ((- (IData)((IData)(picorv32__DOT___01112_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2799) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2800)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3062 
        = ((- (IData)((IData)(picorv32__DOT___01112_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2798) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2795)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3060 
        = ((- (IData)((IData)(picorv32__DOT___01112_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2793) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2794)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3058 
        = ((- (IData)((IData)(picorv32__DOT___01112_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2792) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2789)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3056 
        = ((- (IData)((IData)(picorv32__DOT___01112_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2787) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2788)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3054 
        = ((- (IData)((IData)(picorv32__DOT___01112_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2786) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2783)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3052 
        = ((- (IData)((IData)(picorv32__DOT___01112_))) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2781) 
               << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2782)));
    vlSelfRef.picorv32__DOT___01463_ = ((IData)(vlSelfRef.picorv32__DOT___01452_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01451_));
    if (vlSelfRef.picorv32__DOT___01171_) {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2878 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4904;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2877 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4902;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2872 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4900;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2871 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4898;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2866 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4896;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2865 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4894;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2860 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4892;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2859 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4890;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2854 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4888;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2853 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4885;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2850 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4887) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2851 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4887));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2880 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4906) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2881 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4906));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2879 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4905) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2876 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4905));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2874 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4903) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2875 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4903));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2873 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4901) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2870 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4901));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2868 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4899) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2869 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4899));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2867 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4897) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2864 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4897));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2862 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4895) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2863 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4895));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2861 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4893) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2858 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4893));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2856 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4891) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2857 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4891));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2855 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4889) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2852 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4889));
    } else {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2878 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3043;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2877 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3041;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2872 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3039;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2871 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3037;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2866 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3035;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2865 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3033;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2860 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3031;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2859 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3029;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2854 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3027;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2853 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3024;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2850 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3026) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2851 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3026));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2880 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3045) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2881 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3045));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2879 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3044) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2876 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3044));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2874 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3042) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2875 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3042));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2873 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3040) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2870 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3040));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2868 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3038) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2869 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3038));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2867 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3036) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2864 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3036));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2862 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3034) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2863 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3034));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2861 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3032) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2858 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3032));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2856 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3030) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2857 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3030));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2855 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3028) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2852 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3028));
    }
    if (vlSelfRef.picorv32__DOT___01169_) {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2821 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4792;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2846 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4817;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2845 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4816;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2840 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4811;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2839 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4810;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2834 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4805;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2833 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4804;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2828 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4799;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2827 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4798;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2822 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4793;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2823 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4794));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2820 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4791));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2818 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4789));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2819 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4790));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2848 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4819));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2849 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4820));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2847 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4818));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2844 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4815));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2842 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4813));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2843 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4814));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2841 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4812));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2838 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4809));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2836 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4807));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2837 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4808));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2835 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4806));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2832 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4803));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2830 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4801));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2831 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4802));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2829 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4800));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2826 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4797));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2824 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4795));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2825 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4796));
    } else {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2821 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3046;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2846 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3065;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2845 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3063;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2840 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3061;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2839 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3059;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2834 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3057;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2833 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3055;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2828 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3053;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2827 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3051;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2822 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3049;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2823 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3050) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2820 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3050));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2818 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3048) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2819 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3048));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2848 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3067) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2849 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3067));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2847 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3066) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2844 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3066));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2842 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3064) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2843 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3064));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2841 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3062) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2838 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3062));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2836 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3060) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2837 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3060));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2835 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3058) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2832 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3058));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2830 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3056) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2831 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3056));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2829 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3054) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2826 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3054));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2824 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3052) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2825 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3052));
    }
    if (vlSelfRef.picorv32__DOT___01160_) {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2816 
            = picorv32__DOT____VdfgRegularize_h2364b514_0_4576;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2817 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4578));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2815 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4579));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2813 
            = (1U & ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4577) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2814 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4577));
    } else {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2816 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3046;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2817 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3050) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2815 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3050));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2813 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3048) 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2814 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3048));
    }
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5340 
        = (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3050) 
            << 3U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3046) 
                       << 2U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3048)));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__9(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___01082_ = ((2U & ((~ (IData)(vlSelfRef.picorv32__DOT___00837_)) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlSelfRef.picorv32__DOT___01082_) 
                                                 >> 1U)));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__10(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___01793_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 0x1eU) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 0x1dU)));
    vlSelfRef.picorv32__DOT___01792_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 0x1cU) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 0x1bU)));
    vlSelfRef.picorv32__DOT___01791_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 0x1aU) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 0x19U)));
    vlSelfRef.picorv32__DOT___01790_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 0x18U) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 0x17U)));
    vlSelfRef.picorv32__DOT___01789_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 0x16U) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 0x15U)));
    vlSelfRef.picorv32__DOT___01788_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 0x14U) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 0x13U)));
    vlSelfRef.picorv32__DOT___01787_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 0x12U) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 0x11U)));
    vlSelfRef.picorv32__DOT___01786_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 0x10U) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 0xfU)));
    vlSelfRef.picorv32__DOT___01785_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 0xeU) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 0xdU)));
    vlSelfRef.picorv32__DOT___01784_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 0xcU) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 0xbU)));
    vlSelfRef.picorv32__DOT___01783_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 0xaU) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 9U)));
    vlSelfRef.picorv32__DOT___01782_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 8U) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 7U)));
    vlSelfRef.picorv32__DOT___01781_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 6U) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 5U)));
    vlSelfRef.picorv32__DOT___01780_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 4U) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 3U)));
    vlSelfRef.picorv32__DOT___01727_ = (IData)(((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & vlSelfRef.picorv32__DOT___01149_)) 
                                                & (vlSelfRef.picorv32__DOT___01148_ 
                                                   >> 1U)));
    vlSelfRef.picorv32__DOT___01779_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 2U) 
                                              & (vlSelfRef.picorv32__DOT___01148_ 
                                                 >> 1U)));
    vlSelfRef.picorv32__DOT___01711_ = (1U & ((vlSelfRef.picorv32__DOT___01149_ 
                                               >> 1U) 
                                              & vlSelfRef.picorv32__DOT___01148_));
    vlSelfRef.picorv32__DOT___01150_ = ((0xffff0000U 
                                         & ((0xffff0000U 
                                             & vlSelfRef.picorv32__DOT___01149_) 
                                            ^ (0xffff0000U 
                                               & (vlSelfRef.picorv32__DOT___01148_ 
                                                  << 1U)))) 
                                        | ((0xff00U 
                                            & ((0xffffff00U 
                                                & vlSelfRef.picorv32__DOT___01149_) 
                                               ^ (0xffffff00U 
                                                  & (vlSelfRef.picorv32__DOT___01148_ 
                                                     << 1U)))) 
                                           | ((0xf0U 
                                               & ((0xfffffff0U 
                                                   & vlSelfRef.picorv32__DOT___01149_) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (vlSelfRef.picorv32__DOT___01148_ 
                                                      << 1U)))) 
                                              | ((0xcU 
                                                  & ((0xfffffffcU 
                                                      & vlSelfRef.picorv32__DOT___01149_) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & (vlSelfRef.picorv32__DOT___01148_ 
                                                         << 1U)))) 
                                                 | ((2U 
                                                     & ((0xfffffffeU 
                                                         & vlSelfRef.picorv32__DOT___01149_) 
                                                        ^ 
                                                        (vlSelfRef.picorv32__DOT___01148_ 
                                                         << 1U))) 
                                                    | (1U 
                                                       & (~ vlSelfRef.picorv32__DOT___01149_)))))));
    vlSelfRef.picorv32__DOT___01778_ = ((IData)(vlSelfRef.picorv32__DOT___01755_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0x1bU));
    vlSelfRef.picorv32__DOT___01777_ = ((IData)(vlSelfRef.picorv32__DOT___01753_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0x17U));
    vlSelfRef.picorv32__DOT___01776_ = ((IData)(vlSelfRef.picorv32__DOT___01751_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0x13U));
    vlSelfRef.picorv32__DOT___01775_ = ((IData)(vlSelfRef.picorv32__DOT___01749_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0xfU));
    vlSelfRef.picorv32__DOT___01774_ = ((IData)(vlSelfRef.picorv32__DOT___01747_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0xbU));
    vlSelfRef.picorv32__DOT___01773_ = ((IData)(vlSelfRef.picorv32__DOT___01745_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 7U));
    vlSelfRef.picorv32__DOT___01772_ = ((IData)(vlSelfRef.picorv32__DOT___01743_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 3U));
    vlSelfRef.picorv32__DOT___01735_ = (((IData)(vlSelfRef.picorv32__DOT___01744_) 
                                         & (IData)(vlSelfRef.picorv32__DOT___01743_)) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 3U));
    vlSelfRef.picorv32__DOT___01771_ = ((IData)(vlSelfRef.picorv32__DOT___01762_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0x17U));
    vlSelfRef.picorv32__DOT___01770_ = ((IData)(vlSelfRef.picorv32__DOT___01760_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0xfU));
    vlSelfRef.picorv32__DOT___01769_ = ((IData)(vlSelfRef.picorv32__DOT___01758_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 7U));
    vlSelfRef.picorv32__DOT___01739_ = (((IData)(vlSelfRef.picorv32__DOT___01759_) 
                                         & (IData)(vlSelfRef.picorv32__DOT___01758_)) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 7U));
    vlSelfRef.picorv32__DOT___01768_ = ((IData)(vlSelfRef.picorv32__DOT___01765_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0xfU));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__11(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__11\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ picorv32__DOT___01106_;
    picorv32__DOT___01106_ = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_666;
    picorv32__DOT____VdfgRegularize_h2364b514_0_666 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_667;
    picorv32__DOT____VdfgRegularize_h2364b514_0_667 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_669;
    picorv32__DOT____VdfgRegularize_h2364b514_0_669 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_670;
    picorv32__DOT____VdfgRegularize_h2364b514_0_670 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3301;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3301 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3302;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3302 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3303;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3303 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3304;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3304 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3305;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3305 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3306;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3306 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3307;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3307 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3308;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3308 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5317;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5317 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5318;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5318 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5319;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5319 = 0;
    // Body
    picorv32__DOT___01106_ = (((0xf00U & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                         >> 2U)))) 
                                          << 8U)) | 
                               ((0x80U & ((vlSelfRef.picorv32__DOT__reg_op1 
                                           & (IData)(vlSelfRef.picorv32__DOT___01103_)) 
                                          << 6U)) | 
                                (0x40U & ((IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_h52090ae9__0) 
                                          << 5U)))) 
                              | (((0x20U & (((~ (vlSelfRef.picorv32__DOT__reg_op1 
                                                 >> 1U)) 
                                             << 5U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               << 4U))) 
                                  | ((0x10U & ((IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_h52090ae9__0) 
                                               << 4U)) 
                                     | (8U & ((IData)(vlSelfRef.picorv32__DOT___01105_) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 << 3U))))) 
                                 | ((4U & ((IData)(vlSelfRef.picorv32__DOT___01105_) 
                                           & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                              << 2U))) 
                                    | ((2U & ((IData)(vlSelfRef.picorv32__DOT___01105_) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 << 1U))) 
                                       | (1U & ((IData)(vlSelfRef.picorv32__DOT___01105_) 
                                                & (IData)(vlSelfRef.picorv32__DOT___01103_)))))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h52090ae9__0 
        = ((2U & ((IData)(picorv32__DOT___01106_) >> 6U)) 
           | (1U & ((IData)(picorv32__DOT___01106_) 
                    >> 5U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_666 
        = (IData)(((0U != (0x88U & (IData)(picorv32__DOT___01106_))) 
                   | ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                      >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_667 
        = (IData)(((0U != (0x84U & (IData)(picorv32__DOT___01106_))) 
                   | ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                      >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_669 
        = (IData)(((0U != (0x22U & (IData)(picorv32__DOT___01106_))) 
                   | ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                      >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_670 
        = (IData)(((0U != (0x21U & (IData)(picorv32__DOT___01106_))) 
                   | ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                      >> 2U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5666 
        = ((IData)(vlSelfRef.picorv32__DOT___01178_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_666));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5665 
        = ((IData)(vlSelfRef.picorv32__DOT___01178_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_667));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5320 
        = ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
             & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_669)) 
            << 1U) | ((IData)(vlSelfRef.picorv32__DOT___01178_) 
                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_670)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5319 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5666) 
           & (IData)(vlSelfRef.mem_la_write));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5317 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5665) 
           & (IData)(vlSelfRef.mem_la_write));
    vlSelfRef.mem_la_wstrb = (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5666) 
                               << 3U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5665) 
                                          << 2U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5320)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5318 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5320) 
           & (- (IData)((IData)(vlSelfRef.mem_la_write))));
    if (vlSelfRef.picorv32__DOT___00840_) {
        picorv32__DOT____VdfgRegularize_h2364b514_0_3303 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5319));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3304 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5317));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3301 
            = (1U & ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5318) 
                     >> 1U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3302 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5318));
    } else {
        picorv32__DOT____VdfgRegularize_h2364b514_0_3303 
            = (1U & ((IData)(vlSelfRef.mem_wstrb) >> 3U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3304 
            = (1U & ((IData)(vlSelfRef.mem_wstrb) >> 2U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3301 
            = (1U & ((IData)(vlSelfRef.mem_wstrb) >> 1U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3302 
            = (1U & (IData)(vlSelfRef.mem_wstrb));
    }
    picorv32__DOT____VdfgRegularize_h2364b514_0_3308 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_894)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3303));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3307 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_894)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3304));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3306 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_894)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3301));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3305 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_894)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3302));
    vlSelfRef.picorv32__DOT___01087_ = (((((IData)(vlSelfRef.picorv32__DOT___00175_)
                                            ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3303)
                                            : (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3308)) 
                                          << 3U) | 
                                         (((IData)(vlSelfRef.picorv32__DOT___00175_)
                                            ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3304)
                                            : (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3307)) 
                                          << 2U)) | 
                                        ((((IData)(vlSelfRef.picorv32__DOT___00175_)
                                            ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3301)
                                            : (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3306)) 
                                          << 1U) | 
                                         ((IData)(vlSelfRef.picorv32__DOT___00175_)
                                           ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3302)
                                           : (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3305))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__12(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__12\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___01137_ = ((0x80000000U 
                                         & vlSelfRef.picorv32__DOT___01137_) 
                                        | ((0x7ffffffeU 
                                            & (vlSelfRef.picorv32__DOT__reg_pc 
                                               & vlSelfRef.picorv32__DOT__decoded_imm)) 
                                           | (1U & vlSelfRef.picorv32__DOT___01135_)));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__13(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__13\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_38;
    picorv32__DOT____VdfgRegularize_h2364b514_0_38 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_830;
    picorv32__DOT____VdfgRegularize_h2364b514_0_830 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_849;
    picorv32__DOT____VdfgRegularize_h2364b514_0_849 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3197;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3197 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3234;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3234 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3235;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3235 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3236;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3236 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3237;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3237 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3238;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3238 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3239;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3239 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3240;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3240 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3241;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3241 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3242;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3242 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3243;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3243 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3244;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3244 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3245;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3245 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3246;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3246 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3247;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3247 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3248;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3248 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3249;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3249 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3250;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3250 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3251;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3251 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3252;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3252 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3253;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3253 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3254;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3254 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3255;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3255 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3256;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3256 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3257;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3257 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3258;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3258 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3259;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3259 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3260;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3260 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3261;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3261 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3262;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3262 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3263;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3263 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3264;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3264 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3265;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3265 = 0;
    // Body
    vlSelfRef.picorv32__DOT___01144_ = (((~ (vlSelfRef.picorv32__DOT___01142_ 
                                             >> 0x1fU)) 
                                         << 0x1fU) 
                                        | ((vlSelfRef.picorv32__DOT____Vconcswap_1_h7a2ce2f9__0 
                                            << 5U) 
                                           | ((0x10U 
                                               & ((0xfffffff0U 
                                                   & vlSelfRef.picorv32__DOT___01143_) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (vlSelfRef.picorv32__DOT___01142_ 
                                                      << 1U)))) 
                                              | ((8U 
                                                  & ((0xfffffff8U 
                                                      & vlSelfRef.picorv32__DOT___01143_) 
                                                     ^ 
                                                     (0xfffffff8U 
                                                      & ((IData)(vlSelfRef.picorv32__DOT__reg_sh) 
                                                         << 1U)))) 
                                                 | ((4U 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.picorv32__DOT__reg_sh) 
                                                          >> 2U)) 
                                                        << 2U)) 
                                                    | (3U 
                                                       & (IData)(vlSelfRef.picorv32__DOT__reg_sh)))))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h7a2ce2f9__0 
        = ((((((0x2000000U & (vlSelfRef.picorv32__DOT___01144_ 
                              >> 6U)) | (0x1000000U 
                                         & (vlSelfRef.picorv32__DOT___01144_ 
                                            >> 7U))) 
              | ((0x800000U & (vlSelfRef.picorv32__DOT___01144_ 
                               >> 8U)) | (0x400000U 
                                          & (vlSelfRef.picorv32__DOT___01144_ 
                                             >> 9U)))) 
             | ((0x200000U & (vlSelfRef.picorv32__DOT___01144_ 
                              >> 0xaU)) | ((0x100000U 
                                            & (vlSelfRef.picorv32__DOT___01144_ 
                                               >> 0xbU)) 
                                           | (0x80000U 
                                              & (vlSelfRef.picorv32__DOT___01144_ 
                                                 >> 0xcU))))) 
            | (((0x40000U & (vlSelfRef.picorv32__DOT___01144_ 
                             >> 0xdU)) | ((0x20000U 
                                           & (vlSelfRef.picorv32__DOT___01144_ 
                                              >> 0xeU)) 
                                          | (0x10000U 
                                             & (vlSelfRef.picorv32__DOT___01144_ 
                                                >> 0xfU)))) 
               | ((0x8000U & (vlSelfRef.picorv32__DOT___01144_ 
                              >> 0x10U)) | ((0x4000U 
                                             & (vlSelfRef.picorv32__DOT___01144_ 
                                                >> 0x11U)) 
                                            | (0x2000U 
                                               & (vlSelfRef.picorv32__DOT___01144_ 
                                                  >> 0x12U)))))) 
           | (((((0x1000U & (vlSelfRef.picorv32__DOT___01144_ 
                             >> 0x13U)) | (0x800U & 
                                           (vlSelfRef.picorv32__DOT___01144_ 
                                            >> 0x14U))) 
                | ((0x400U & (vlSelfRef.picorv32__DOT___01144_ 
                              >> 0x15U)) | (0x200U 
                                            & (vlSelfRef.picorv32__DOT___01144_ 
                                               >> 0x16U)))) 
               | ((0x100U & (vlSelfRef.picorv32__DOT___01144_ 
                             >> 0x17U)) | ((0x80U & 
                                            (vlSelfRef.picorv32__DOT___01144_ 
                                             >> 0x18U)) 
                                           | (0x40U 
                                              & (vlSelfRef.picorv32__DOT___01144_ 
                                                 >> 0x19U))))) 
              | (((0x20U & (vlSelfRef.picorv32__DOT___01144_ 
                            >> 0x1aU)) | ((0x10U & 
                                           (vlSelfRef.picorv32__DOT___01144_ 
                                            >> 0x1bU)) 
                                          | (8U & (vlSelfRef.picorv32__DOT___01144_ 
                                                   >> 0x1cU)))) 
                 | ((4U & (vlSelfRef.picorv32__DOT___01144_ 
                           >> 0x1dU)) | ((2U & (vlSelfRef.picorv32__DOT___01144_ 
                                                >> 0x1eU)) 
                                         | (vlSelfRef.picorv32__DOT___01144_ 
                                            >> 0x1fU))))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_108 
        = (1U & ((~ ((vlSelfRef.picorv32__DOT___01144_ 
                      >> 0x1fU) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5901))) 
                 | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5901)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_38 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT___00184_)) 
                 | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_108)));
    if (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_108) {
        picorv32__DOT____VdfgRegularize_h2364b514_0_3197 
            = (1U & (IData)(vlSelfRef.picorv32__DOT__reg_sh));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3264 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5702;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3265 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5701;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3262 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5704;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3263 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5703;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3260 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5706;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3261 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5705;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3258 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5708;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3259 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5707;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3256 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5710;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3257 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5709;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3254 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5712;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3255 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5711;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3252 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5714;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3253 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5713;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3250 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5716;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3251 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5715;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3248 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5718;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3249 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5717;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3246 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5720;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3247 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5719;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3244 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5722;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3245 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5721;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3242 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5724;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3243 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5723;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3240 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5726;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3241 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5725;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3238 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5728;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3239 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5727;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3236 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5730;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3237 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5729;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3234 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5732;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3235 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5731;
    } else {
        picorv32__DOT____VdfgRegularize_h2364b514_0_3197 
            = (1U & (~ (IData)(vlSelfRef.picorv32__DOT__reg_sh)));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3264 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5734;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3265 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5733;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3262 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5736;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3263 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5735;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3260 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5738;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3261 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5737;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3258 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5740;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3259 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5739;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3256 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5742;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3257 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5741;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3254 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5744;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3255 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5743;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3252 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5746;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3253 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5745;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3250 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5748;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3251 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5747;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3248 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5750;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3249 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5749;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3246 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5752;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3247 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5751;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3244 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5754;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3245 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5753;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3242 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5756;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3243 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5755;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3240 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5758;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3241 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5757;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3238 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5760;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3239 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5759;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3236 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5762;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3237 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5761;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3234 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5764;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3235 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5763;
    }
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5873 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_108)) 
                 | (~ (IData)(vlSelfRef.picorv32__DOT___00184_))));
    vlSelfRef.picorv32__DOT___00050_ = (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_38) 
                                         | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_40)) 
                                        | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_39));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5598 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3197));
    picorv32__DOT____VdfgRegularize_h2364b514_0_830 
        = (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_38) 
            & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5873)) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_37));
    picorv32__DOT____VdfgRegularize_h2364b514_0_849 
        = ((IData)(vlSelfRef.picorv32__DOT___00034_) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5873) 
               | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_40)) 
              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_39)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5390 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3264));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5389 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3265));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5392 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3262));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5391 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3263));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5394 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3260));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5393 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3261));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5396 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3258));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5395 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3259));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5398 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3256));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5397 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3257));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5400 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3254));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5399 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3255));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5402 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3252));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5401 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3253));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5404 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3250));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5403 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3251));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5406 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3248));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5405 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3249));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5408 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3246));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5407 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3247));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5410 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3244));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5409 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3245));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5412 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3242));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5411 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3243));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5414 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3240));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5413 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3241));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5416 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3238));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5415 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3239));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5418 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3236));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5417 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3237));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5420 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3234));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5419 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3235));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_831 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_830) 
           & (IData)(vlSelfRef.picorv32__DOT___00050_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_851 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_43) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_849));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__14(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__14\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT___00537_;
    picorv32__DOT___00537_ = 0;
    CData/*0:0*/ picorv32__DOT___00538_;
    picorv32__DOT___00538_ = 0;
    CData/*0:0*/ picorv32__DOT___00539_;
    picorv32__DOT___00539_ = 0;
    CData/*0:0*/ picorv32__DOT___00540_;
    picorv32__DOT___00540_ = 0;
    CData/*0:0*/ picorv32__DOT___00541_;
    picorv32__DOT___00541_ = 0;
    CData/*0:0*/ picorv32__DOT___00542_;
    picorv32__DOT___00542_ = 0;
    CData/*0:0*/ picorv32__DOT___00543_;
    picorv32__DOT___00543_ = 0;
    CData/*0:0*/ picorv32__DOT___00544_;
    picorv32__DOT___00544_ = 0;
    CData/*0:0*/ picorv32__DOT___00545_;
    picorv32__DOT___00545_ = 0;
    CData/*0:0*/ picorv32__DOT___00546_;
    picorv32__DOT___00546_ = 0;
    CData/*0:0*/ picorv32__DOT___00547_;
    picorv32__DOT___00547_ = 0;
    CData/*0:0*/ picorv32__DOT___00548_;
    picorv32__DOT___00548_ = 0;
    CData/*0:0*/ picorv32__DOT___00549_;
    picorv32__DOT___00549_ = 0;
    CData/*0:0*/ picorv32__DOT___00550_;
    picorv32__DOT___00550_ = 0;
    CData/*0:0*/ picorv32__DOT___00551_;
    picorv32__DOT___00551_ = 0;
    CData/*0:0*/ picorv32__DOT___00552_;
    picorv32__DOT___00552_ = 0;
    VlWide<3>/*95:0*/ picorv32__DOT___01108_;
    VL_ZERO_W(96, picorv32__DOT___01108_);
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_671;
    picorv32__DOT____VdfgRegularize_h2364b514_0_671 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_672;
    picorv32__DOT____VdfgRegularize_h2364b514_0_672 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_673;
    picorv32__DOT____VdfgRegularize_h2364b514_0_673 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_674;
    picorv32__DOT____VdfgRegularize_h2364b514_0_674 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_675;
    picorv32__DOT____VdfgRegularize_h2364b514_0_675 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_676;
    picorv32__DOT____VdfgRegularize_h2364b514_0_676 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_677;
    picorv32__DOT____VdfgRegularize_h2364b514_0_677 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_678;
    picorv32__DOT____VdfgRegularize_h2364b514_0_678 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_679;
    picorv32__DOT____VdfgRegularize_h2364b514_0_679 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_680;
    picorv32__DOT____VdfgRegularize_h2364b514_0_680 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_681;
    picorv32__DOT____VdfgRegularize_h2364b514_0_681 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_682;
    picorv32__DOT____VdfgRegularize_h2364b514_0_682 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_683;
    picorv32__DOT____VdfgRegularize_h2364b514_0_683 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_684;
    picorv32__DOT____VdfgRegularize_h2364b514_0_684 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_685;
    picorv32__DOT____VdfgRegularize_h2364b514_0_685 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_686;
    picorv32__DOT____VdfgRegularize_h2364b514_0_686 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_688;
    picorv32__DOT____VdfgRegularize_h2364b514_0_688 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_690;
    picorv32__DOT____VdfgRegularize_h2364b514_0_690 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_692;
    picorv32__DOT____VdfgRegularize_h2364b514_0_692 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_694;
    picorv32__DOT____VdfgRegularize_h2364b514_0_694 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_696;
    picorv32__DOT____VdfgRegularize_h2364b514_0_696 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_698;
    picorv32__DOT____VdfgRegularize_h2364b514_0_698 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_700;
    picorv32__DOT____VdfgRegularize_h2364b514_0_700 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_702;
    picorv32__DOT____VdfgRegularize_h2364b514_0_702 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_703;
    picorv32__DOT____VdfgRegularize_h2364b514_0_703 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_704;
    picorv32__DOT____VdfgRegularize_h2364b514_0_704 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_705;
    picorv32__DOT____VdfgRegularize_h2364b514_0_705 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_706;
    picorv32__DOT____VdfgRegularize_h2364b514_0_706 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_707;
    picorv32__DOT____VdfgRegularize_h2364b514_0_707 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_708;
    picorv32__DOT____VdfgRegularize_h2364b514_0_708 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_709;
    picorv32__DOT____VdfgRegularize_h2364b514_0_709 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_710;
    picorv32__DOT____VdfgRegularize_h2364b514_0_710 = 0;
    // Body
    picorv32__DOT___01108_[0U] = ((((0x80000000U & 
                                     ((vlSelfRef.picorv32__DOT__reg_op2 
                                       << 0x18U) & 
                                      ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                       << 0x1fU))) 
                                    | (0x40000000U 
                                       & ((vlSelfRef.picorv32__DOT__reg_op2 
                                           << 0x18U) 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                             << 0x1eU)))) 
                                   | ((0x20000000U 
                                       & ((vlSelfRef.picorv32__DOT__reg_op2 
                                           << 0x18U) 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                             << 0x1dU))) 
                                      | (0x10000000U 
                                         & ((vlSelfRef.picorv32__DOT__reg_op2 
                                             << 0x18U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               << 0x1cU))))) 
                                  | (((0x8000000U & 
                                       ((vlSelfRef.picorv32__DOT__reg_op2 
                                         << 0x18U) 
                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                           << 0x1bU))) 
                                      | (0x4000000U 
                                         & ((vlSelfRef.picorv32__DOT__reg_op2 
                                             << 0x18U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               << 0x1aU)))) 
                                     | ((0x2000000U 
                                         & ((vlSelfRef.picorv32__DOT__reg_op2 
                                             << 0x18U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               << 0x19U))) 
                                        | ((0x1000000U 
                                            & ((vlSelfRef.picorv32__DOT__reg_op2 
                                                & (IData)(vlSelfRef.picorv32__DOT___01103_)) 
                                               << 0x18U)) 
                                           | vlSelfRef.picorv32__DOT____Vconcswap_1_hc9f44268__0))));
    picorv32__DOT___01108_[1U] = (((((0x80000000U & 
                                      ((vlSelfRef.picorv32__DOT__reg_op2 
                                        << 0x10U) & 
                                       ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                        << 0x1eU))) 
                                     | (0x40000000U 
                                        & ((vlSelfRef.picorv32__DOT__reg_op2 
                                            << 0x10U) 
                                           & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                              << 0x1dU)))) 
                                    | ((0x20000000U 
                                        & ((vlSelfRef.picorv32__DOT__reg_op2 
                                            << 0x10U) 
                                           & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                              << 0x1cU))) 
                                       | (0x10000000U 
                                          & ((vlSelfRef.picorv32__DOT__reg_op2 
                                              << 0x10U) 
                                             & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                << 0x1bU))))) 
                                   | (((0x8000000U 
                                        & ((vlSelfRef.picorv32__DOT__reg_op2 
                                            << 0x10U) 
                                           & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                              << 0x1aU))) 
                                       | (0x4000000U 
                                          & ((vlSelfRef.picorv32__DOT__reg_op2 
                                              << 0x10U) 
                                             & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                << 0x19U)))) 
                                      | ((0x2000000U 
                                          & ((vlSelfRef.picorv32__DOT__reg_op2 
                                              << 0x10U) 
                                             & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                << 0x18U))) 
                                         | (0x1000000U 
                                            & ((vlSelfRef.picorv32__DOT__reg_op2 
                                                << 0x10U) 
                                               & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                  << 0x17U)))))) 
                                  | ((((0x800000U & 
                                        ((vlSelfRef.picorv32__DOT__reg_op2 
                                          << 0x10U) 
                                         & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                            << 0x16U))) 
                                       | (0x400000U 
                                          & ((vlSelfRef.picorv32__DOT__reg_op2 
                                              << 0x10U) 
                                             & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                << 0x15U)))) 
                                      | ((0x200000U 
                                          & ((vlSelfRef.picorv32__DOT__reg_op2 
                                              << 0x10U) 
                                             & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                << 0x14U))) 
                                         | (0x100000U 
                                            & ((vlSelfRef.picorv32__DOT__reg_op2 
                                                << 0x10U) 
                                               & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                  << 0x13U))))) 
                                     | (((0x80000U 
                                          & ((vlSelfRef.picorv32__DOT__reg_op2 
                                              << 0x10U) 
                                             & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                << 0x12U))) 
                                         | (0x40000U 
                                            & ((vlSelfRef.picorv32__DOT__reg_op2 
                                                << 0x10U) 
                                               & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                  << 0x11U)))) 
                                        | ((0x20000U 
                                            & ((vlSelfRef.picorv32__DOT__reg_op2 
                                                & (IData)(vlSelfRef.picorv32__DOT___01103_)) 
                                               << 0x10U)) 
                                           | ((0x10000U 
                                               & ((vlSelfRef.picorv32__DOT__reg_op2 
                                                   << 0x10U) 
                                                  & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                     << 0xfU))) 
                                              | (IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_haff8da88__0))))));
    picorv32__DOT___01108_[2U] = ((((((((vlSelfRef.picorv32__DOT__reg_op2 
                                         >> 0x1fU) 
                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                           >> 2U)) 
                                       << 0x1fU) | 
                                      (((vlSelfRef.picorv32__DOT__reg_op2 
                                         >> 0x1eU) 
                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                           >> 2U)) 
                                       << 0x1eU)) | 
                                     ((((vlSelfRef.picorv32__DOT__reg_op2 
                                         >> 0x1dU) 
                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                           >> 2U)) 
                                       << 0x1dU) | 
                                      (((vlSelfRef.picorv32__DOT__reg_op2 
                                         >> 0x1cU) 
                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                           >> 2U)) 
                                       << 0x1cU))) 
                                    | (((((vlSelfRef.picorv32__DOT__reg_op2 
                                           >> 0x1bU) 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                             >> 2U)) 
                                         << 0x1bU) 
                                        | (((vlSelfRef.picorv32__DOT__reg_op2 
                                             >> 0x1aU) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0x1aU)) 
                                       | ((((vlSelfRef.picorv32__DOT__reg_op2 
                                             >> 0x19U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0x19U) 
                                          | (((vlSelfRef.picorv32__DOT__reg_op2 
                                               >> 0x18U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0x18U)))) 
                                   | ((((((vlSelfRef.picorv32__DOT__reg_op2 
                                           >> 0x17U) 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                             >> 2U)) 
                                         << 0x17U) 
                                        | (((vlSelfRef.picorv32__DOT__reg_op2 
                                             >> 0x16U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0x16U)) 
                                       | ((((vlSelfRef.picorv32__DOT__reg_op2 
                                             >> 0x15U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0x15U) 
                                          | (((vlSelfRef.picorv32__DOT__reg_op2 
                                               >> 0x14U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0x14U))) 
                                      | (((((vlSelfRef.picorv32__DOT__reg_op2 
                                             >> 0x13U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0x13U) 
                                          | (((vlSelfRef.picorv32__DOT__reg_op2 
                                               >> 0x12U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0x12U)) 
                                         | ((((vlSelfRef.picorv32__DOT__reg_op2 
                                               >> 0x11U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0x11U) 
                                            | (((vlSelfRef.picorv32__DOT__reg_op2 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                   >> 2U)) 
                                               << 0x10U))))) 
                                  | (((((((vlSelfRef.picorv32__DOT__reg_op2 
                                           >> 0xfU) 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                             >> 2U)) 
                                         << 0xfU) | 
                                        (((vlSelfRef.picorv32__DOT__reg_op2 
                                           >> 0xeU) 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                             >> 2U)) 
                                         << 0xeU)) 
                                       | ((((vlSelfRef.picorv32__DOT__reg_op2 
                                             >> 0xdU) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0xdU) 
                                          | (((vlSelfRef.picorv32__DOT__reg_op2 
                                               >> 0xcU) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0xcU))) 
                                      | (((((vlSelfRef.picorv32__DOT__reg_op2 
                                             >> 0xbU) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0xbU) 
                                          | (((vlSelfRef.picorv32__DOT__reg_op2 
                                               >> 0xaU) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0xaU)) 
                                         | ((((vlSelfRef.picorv32__DOT__reg_op2 
                                               >> 9U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 9U) 
                                            | (((vlSelfRef.picorv32__DOT__reg_op2 
                                                 >> 8U) 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                   >> 2U)) 
                                               << 8U)))) 
                                     | ((((((vlSelfRef.picorv32__DOT__reg_op2 
                                             >> 7U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 7U) | 
                                          (((vlSelfRef.picorv32__DOT__reg_op2 
                                             >> 6U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 6U)) 
                                         | ((((vlSelfRef.picorv32__DOT__reg_op2 
                                               >> 5U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 5U) 
                                            | (((vlSelfRef.picorv32__DOT__reg_op2 
                                                 >> 4U) 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                   >> 2U)) 
                                               << 4U))) 
                                        | (((((vlSelfRef.picorv32__DOT__reg_op2 
                                               >> 3U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 3U) 
                                            | (4U & 
                                               (vlSelfRef.picorv32__DOT__reg_op2 
                                                & (IData)(vlSelfRef.picorv32__DOT___01103_)))) 
                                           | ((((vlSelfRef.picorv32__DOT__reg_op2 
                                                 >> 1U) 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                   >> 2U)) 
                                               << 1U) 
                                              | (vlSelfRef.picorv32__DOT__reg_op2 
                                                 & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                    >> 2U)))))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_haff8da88__0 
        = (picorv32__DOT___01108_[1U] >> 0x10U);
    vlSelfRef.picorv32__DOT____Vconcswap_1_hc9f44268__0 
        = ((0xff0000U & (picorv32__DOT___01108_[0U] 
                         >> 8U)) | ((0xff00U & (picorv32__DOT___01108_[0U] 
                                                >> 0x10U)) 
                                    | (picorv32__DOT___01108_[0U] 
                                       >> 0x18U)));
    picorv32__DOT___00537_ = ((picorv32__DOT___01108_[0U] 
                               | picorv32__DOT___01108_[1U]) 
                              >> 0x1fU);
    picorv32__DOT___00538_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     | picorv32__DOT___01108_[1U]) 
                                    >> 0x1eU));
    picorv32__DOT___00539_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     | picorv32__DOT___01108_[1U]) 
                                    >> 0x1dU));
    picorv32__DOT___00540_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     | picorv32__DOT___01108_[1U]) 
                                    >> 0x1cU));
    picorv32__DOT___00541_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     | picorv32__DOT___01108_[1U]) 
                                    >> 0x1bU));
    picorv32__DOT___00542_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     | picorv32__DOT___01108_[1U]) 
                                    >> 0x1aU));
    picorv32__DOT___00543_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     | picorv32__DOT___01108_[1U]) 
                                    >> 0x19U));
    picorv32__DOT___00544_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     | picorv32__DOT___01108_[1U]) 
                                    >> 0x18U));
    picorv32__DOT___00545_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     >> 0x1fU) | (picorv32__DOT___01108_[1U] 
                                                  >> 0x17U)));
    picorv32__DOT___00546_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     >> 0x1eU) | (picorv32__DOT___01108_[1U] 
                                                  >> 0x16U)));
    picorv32__DOT___00547_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     >> 0x1dU) | (picorv32__DOT___01108_[1U] 
                                                  >> 0x15U)));
    picorv32__DOT___00548_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     >> 0x1cU) | (picorv32__DOT___01108_[1U] 
                                                  >> 0x14U)));
    picorv32__DOT___00549_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     >> 0x1bU) | (picorv32__DOT___01108_[1U] 
                                                  >> 0x13U)));
    picorv32__DOT___00550_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     >> 0x1aU) | (picorv32__DOT___01108_[1U] 
                                                  >> 0x12U)));
    picorv32__DOT___00551_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     >> 0x19U) | (picorv32__DOT___01108_[1U] 
                                                  >> 0x11U)));
    picorv32__DOT___00552_ = (1U & ((picorv32__DOT___01108_[0U] 
                                     >> 0x18U) | (picorv32__DOT___01108_[1U] 
                                                  >> 0x10U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_671 
        = ((IData)(picorv32__DOT___00537_) | (picorv32__DOT___01108_[2U] 
                                              >> 0x1fU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_688 
        = (1U & ((IData)(picorv32__DOT___00537_) | 
                 (picorv32__DOT___01108_[2U] >> 0xfU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_672 
        = (1U & ((IData)(picorv32__DOT___00538_) | 
                 (picorv32__DOT___01108_[2U] >> 0x1eU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_690 
        = (1U & ((IData)(picorv32__DOT___00538_) | 
                 (picorv32__DOT___01108_[2U] >> 0xeU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_673 
        = (1U & ((IData)(picorv32__DOT___00539_) | 
                 (picorv32__DOT___01108_[2U] >> 0x1dU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_692 
        = (1U & ((IData)(picorv32__DOT___00539_) | 
                 (picorv32__DOT___01108_[2U] >> 0xdU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_674 
        = (1U & ((IData)(picorv32__DOT___00540_) | 
                 (picorv32__DOT___01108_[2U] >> 0x1cU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_694 
        = (1U & ((IData)(picorv32__DOT___00540_) | 
                 (picorv32__DOT___01108_[2U] >> 0xcU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_675 
        = (1U & ((IData)(picorv32__DOT___00541_) | 
                 (picorv32__DOT___01108_[2U] >> 0x1bU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_696 
        = (1U & ((IData)(picorv32__DOT___00541_) | 
                 (picorv32__DOT___01108_[2U] >> 0xbU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_676 
        = (1U & ((IData)(picorv32__DOT___00542_) | 
                 (picorv32__DOT___01108_[2U] >> 0x1aU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_698 
        = (1U & ((IData)(picorv32__DOT___00542_) | 
                 (picorv32__DOT___01108_[2U] >> 0xaU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_677 
        = (1U & ((IData)(picorv32__DOT___00543_) | 
                 (picorv32__DOT___01108_[2U] >> 0x19U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_700 
        = (1U & ((IData)(picorv32__DOT___00543_) | 
                 (picorv32__DOT___01108_[2U] >> 9U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_678 
        = (1U & ((IData)(picorv32__DOT___00544_) | 
                 (picorv32__DOT___01108_[2U] >> 0x18U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_702 
        = (1U & ((IData)(picorv32__DOT___00544_) | 
                 (picorv32__DOT___01108_[2U] >> 8U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_679 
        = (1U & ((IData)(picorv32__DOT___00545_) | 
                 (picorv32__DOT___01108_[2U] >> 0x17U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_703 
        = (1U & ((IData)(picorv32__DOT___00545_) | 
                 (picorv32__DOT___01108_[2U] >> 7U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_680 
        = (1U & ((IData)(picorv32__DOT___00546_) | 
                 (picorv32__DOT___01108_[2U] >> 0x16U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_704 
        = (1U & ((IData)(picorv32__DOT___00546_) | 
                 (picorv32__DOT___01108_[2U] >> 6U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_681 
        = (1U & ((IData)(picorv32__DOT___00547_) | 
                 (picorv32__DOT___01108_[2U] >> 0x15U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_705 
        = (1U & ((IData)(picorv32__DOT___00547_) | 
                 (picorv32__DOT___01108_[2U] >> 5U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_682 
        = (1U & ((IData)(picorv32__DOT___00548_) | 
                 (picorv32__DOT___01108_[2U] >> 0x14U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_706 
        = (1U & ((IData)(picorv32__DOT___00548_) | 
                 (picorv32__DOT___01108_[2U] >> 4U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_683 
        = (1U & ((IData)(picorv32__DOT___00549_) | 
                 (picorv32__DOT___01108_[2U] >> 0x13U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_707 
        = (1U & ((IData)(picorv32__DOT___00549_) | 
                 (picorv32__DOT___01108_[2U] >> 3U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_684 
        = (1U & ((IData)(picorv32__DOT___00550_) | 
                 (picorv32__DOT___01108_[2U] >> 0x12U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_708 
        = (1U & ((IData)(picorv32__DOT___00550_) | 
                 (picorv32__DOT___01108_[2U] >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_685 
        = (1U & ((IData)(picorv32__DOT___00551_) | 
                 (picorv32__DOT___01108_[2U] >> 0x11U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_709 
        = (1U & ((IData)(picorv32__DOT___00551_) | 
                 (picorv32__DOT___01108_[2U] >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_686 
        = (1U & ((IData)(picorv32__DOT___00552_) | 
                 (picorv32__DOT___01108_[2U] >> 0x10U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_710 
        = (1U & ((IData)(picorv32__DOT___00552_) | 
                 picorv32__DOT___01108_[2U]));
    vlSelfRef.mem_la_wdata = ((((((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_671)) 
                                   << 0x1fU) | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                 & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_672)) 
                                                << 0x1eU)) 
                                 | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_673)) 
                                     << 0x1dU) | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                   & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_674)) 
                                                  << 0x1cU))) 
                                | (((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_675)) 
                                     << 0x1bU) | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                   & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_676)) 
                                                  << 0x1aU)) 
                                   | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_677)) 
                                       << 0x19U) | 
                                      (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_678)) 
                                       << 0x18U)))) 
                               | ((((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_679)) 
                                     << 0x17U) | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                   & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_680)) 
                                                  << 0x16U)) 
                                   | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_681)) 
                                       << 0x15U) | 
                                      (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_682)) 
                                       << 0x14U))) 
                                  | (((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_683)) 
                                       << 0x13U) | 
                                      (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_684)) 
                                       << 0x12U)) | 
                                     ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_685)) 
                                       << 0x11U) | 
                                      (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_686)) 
                                       << 0x10U))))) 
                              | (((((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_688)) 
                                     << 0xfU) | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_690)) 
                                                 << 0xeU)) 
                                   | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_692)) 
                                       << 0xdU) | (
                                                   ((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_694)) 
                                                   << 0xcU))) 
                                  | (((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_696)) 
                                       << 0xbU) | (
                                                   ((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_698)) 
                                                   << 0xaU)) 
                                     | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                          & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_700)) 
                                         << 9U) | (
                                                   ((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_702)) 
                                                   << 8U)))) 
                                 | ((((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_703)) 
                                       << 7U) | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_704)) 
                                                 << 6U)) 
                                     | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                          & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_705)) 
                                         << 5U) | (
                                                   ((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_706)) 
                                                   << 4U))) 
                                    | (((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                          & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_707)) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_708)) 
                                                   << 2U)) 
                                       | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                            & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_709)) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_710)))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__15(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__15\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___00972_ = ((4U & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                               >> 1U)) 
                                        | ((2U & ((~ 
                                                   ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_825) 
                                                    | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_826))) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                               >> 1U))));
    vlSelfRef.picorv32__DOT___00049_ = (1U & (((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                               >> 3U) 
                                              | ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                                                 >> 1U)));
    vlSelfRef.picorv32__DOT___00068_ = ((IData)(vlSelfRef.picorv32__DOT___00049_) 
                                        & (IData)(vlSelfRef.resetn));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__16(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__16\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ picorv32__DOT___01065_;
    picorv32__DOT___01065_ = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5129;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5129 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5132;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5132 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5133;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5133 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5134;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5134 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5135;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5135 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5136;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5136 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5137;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5137 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5138;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5138 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5139;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5139 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5140;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5140 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5141;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5141 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5142;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5142 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5143;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5143 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5144;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5144 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5145;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5145 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5146;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5146 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5147;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5147 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5148;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5148 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5149;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5149 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5299;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5299 = 0;
    IData/*26:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5300;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5300 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5669;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5669 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5670;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5670 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5671;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5671 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5672;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5672 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5673;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5673 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5674;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5674 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5675;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5675 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5676;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5676 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5677;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5677 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5678;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5678 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5679;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5679 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5680;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5680 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5681;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5681 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5682;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5682 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5683;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5683 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5684;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5684 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5685;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5685 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5686;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5686 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5687;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5687 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5688;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5688 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5689;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5689 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5690;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5690 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5691;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5691 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5692;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5692 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5693;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5693 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5694;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5694 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5695;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5695 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5696;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5696 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5697;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5697 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5698;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5698 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5699;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5699 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5700;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5700 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((((0x40000000U & (vlSelfRef.picorv32__DOT__reg_pc 
                                     & (vlSelfRef.picorv32__DOT___01120_ 
                                        << 1U))) | 
                     (0xe0000000U & ((((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b28__05d) 
                                       & (IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b29__05d)) 
                                      << 0x1dU) & (vlSelfRef.picorv32__DOT___01120_ 
                                                   << 2U)))) 
                    | ((0x10000000U & (vlSelfRef.picorv32__DOT__reg_pc 
                                       & (vlSelfRef.picorv32__DOT___01120_ 
                                          << 1U))) 
                       | (0xf8000000U & (((((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b26__05d) 
                                            & (IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b27__05d)) 
                                           & (IData)(vlSelfRef.picorv32__DOT___01287_)) 
                                          << 0x1bU) 
                                         & (vlSelfRef.picorv32__DOT___01120_ 
                                            << 4U))))) 
                   | (((0x4000000U & (vlSelfRef.picorv32__DOT__reg_pc 
                                      & (vlSelfRef.picorv32__DOT___01120_ 
                                         << 1U))) | 
                       (0xfe000000U & (((IData)(vlSelfRef.picorv32__DOT___01287_) 
                                        << 0x19U) & 
                                       (vlSelfRef.picorv32__DOT___01120_ 
                                        << 2U)))) | 
                      ((0x1000000U & (vlSelfRef.picorv32__DOT__reg_pc 
                                      & (vlSelfRef.picorv32__DOT___01120_ 
                                         << 1U))) | 
                       (0xff800000U & ((((((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b22__05d) 
                                           & (IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b23__05d)) 
                                          & (IData)(vlSelfRef.picorv32__DOT___01285_)) 
                                         & (IData)(vlSelfRef.picorv32__DOT___01293_)) 
                                        << 0x17U) & 
                                       (vlSelfRef.picorv32__DOT___01120_ 
                                        << 8U)))))) 
                  | ((((0x400000U & (vlSelfRef.picorv32__DOT__reg_pc 
                                     & (vlSelfRef.picorv32__DOT___01120_ 
                                        << 1U))) | 
                       (0xffe00000U & (((IData)(vlSelfRef.picorv32__DOT___01285_) 
                                        << 0x15U) & 
                                       (vlSelfRef.picorv32__DOT___01120_ 
                                        << 2U)))) | 
                      ((0x100000U & (vlSelfRef.picorv32__DOT__reg_pc 
                                     & (vlSelfRef.picorv32__DOT___01120_ 
                                        << 1U))) | 
                       (0xfff80000U & (((IData)(vlSelfRef.picorv32__DOT___01293_) 
                                        << 0x13U) & 
                                       (vlSelfRef.picorv32__DOT___01120_ 
                                        << 4U))))) 
                     | (((0x40000U & (vlSelfRef.picorv32__DOT__reg_pc 
                                      & (vlSelfRef.picorv32__DOT___01120_ 
                                         << 1U))) | 
                         (0xfffe0000U & (((IData)(vlSelfRef.picorv32__DOT___01283_) 
                                          << 0x11U) 
                                         & (vlSelfRef.picorv32__DOT___01120_ 
                                            << 2U)))) 
                        | ((0x10000U & (vlSelfRef.picorv32__DOT__reg_pc 
                                        & (vlSelfRef.picorv32__DOT___01120_ 
                                           << 1U))) 
                           | (0xffff8000U & ((((((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b14__05d) 
                                                 & (IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b15__05d)) 
                                                & (IData)(vlSelfRef.picorv32__DOT___01281_)) 
                                               & (IData)(vlSelfRef.picorv32__DOT___01291_)) 
                                              << 0xfU) 
                                             & (vlSelfRef.picorv32__DOT___01120_ 
                                                << 8U))))))) 
                 | (((((0x4000U & (vlSelfRef.picorv32__DOT__reg_pc 
                                   & (vlSelfRef.picorv32__DOT___01120_ 
                                      << 1U))) | (0xffffe000U 
                                                  & (((IData)(vlSelfRef.picorv32__DOT___01281_) 
                                                      << 0xdU) 
                                                     & (vlSelfRef.picorv32__DOT___01120_ 
                                                        << 2U)))) 
                      | ((0x1000U & (vlSelfRef.picorv32__DOT__reg_pc 
                                     & (vlSelfRef.picorv32__DOT___01120_ 
                                        << 1U))) | 
                         (0xfffff800U & (((IData)(vlSelfRef.picorv32__DOT___01291_) 
                                          << 0xbU) 
                                         & (vlSelfRef.picorv32__DOT___01120_ 
                                            << 4U))))) 
                     | (((0x400U & (vlSelfRef.picorv32__DOT__reg_pc 
                                    & (vlSelfRef.picorv32__DOT___01120_ 
                                       << 1U))) | (0xfffffe00U 
                                                   & (((IData)(vlSelfRef.picorv32__DOT___01279_) 
                                                       << 9U) 
                                                      & (vlSelfRef.picorv32__DOT___01120_ 
                                                         << 2U)))) 
                        | ((0x100U & (vlSelfRef.picorv32__DOT__reg_pc 
                                      & (vlSelfRef.picorv32__DOT___01120_ 
                                         << 1U))) | 
                           (0xffffff80U & (((((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b6__05d) 
                                              & (IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b7__05d)) 
                                             & (IData)(vlSelfRef.picorv32__DOT___01277_)) 
                                            << 7U) 
                                           & (vlSelfRef.picorv32__DOT___01120_ 
                                              << 4U)))))) 
                    | ((((0x40U & (vlSelfRef.picorv32__DOT__reg_pc 
                                   & (vlSelfRef.picorv32__DOT___01120_ 
                                      << 1U))) | (0xffffffe0U 
                                                  & (((IData)(vlSelfRef.picorv32__DOT___01277_) 
                                                      << 5U) 
                                                     & (vlSelfRef.picorv32__DOT___01120_ 
                                                        << 2U)))) 
                        | ((0x10U & (vlSelfRef.picorv32__DOT__reg_pc 
                                     & (vlSelfRef.picorv32__DOT___01120_ 
                                        << 1U))) | 
                           ((IData)((0xcU == (0xcU 
                                              & vlSelfRef.picorv32__DOT__reg_pc))) 
                            << 3U))) | (4U & vlSelfRef.picorv32__DOT__reg_pc))));
    vlSelfRef.picorv32__DOT___01120_ = ((0x80000000U 
                                         & vlSelfRef.picorv32__DOT___01120_) 
                                        | __Vtemp_1);
    picorv32__DOT____VdfgRegularize_h2364b514_0_5299 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b4__05d) 
                 ^ (vlSelfRef.picorv32__DOT___01120_ 
                    >> 3U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
        = (0x7ffffffU & ((((((((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b31__05d) 
                               << 0x1aU) | ((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b30__05d) 
                                            << 0x19U)) 
                             | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b29__05d) 
                                 << 0x18U) | ((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b28__05d) 
                                              << 0x17U))) 
                            | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b27__05d) 
                                << 0x16U) | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b26__05d) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b25__05d) 
                                                << 0x14U)))) 
                           | (((((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b24__05d) 
                                 << 0x13U) | ((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b23__05d) 
                                              << 0x12U)) 
                               | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b22__05d) 
                                   << 0x11U) | ((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b21__05d) 
                                                << 0x10U))) 
                              | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b20__05d) 
                                  << 0xfU) | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b19__05d) 
                                               << 0xeU) 
                                              | ((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b18__05d) 
                                                 << 0xdU))))) 
                          | ((((((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b17__05d) 
                                 << 0xcU) | ((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b16__05d) 
                                             << 0xbU)) 
                               | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b15__05d) 
                                   << 0xaU) | ((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b14__05d) 
                                               << 9U))) 
                              | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b13__05d) 
                                  << 8U) | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b12__05d) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b11__05d) 
                                               << 6U)))) 
                             | ((((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b10__05d) 
                                  << 5U) | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b9__05d) 
                                             << 4U) 
                                            | ((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b8__05d) 
                                               << 3U))) 
                                | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b7__05d) 
                                    << 2U) | (((IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b6__05d) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b5__05d)))))) 
                         ^ (vlSelfRef.picorv32__DOT___01120_ 
                            >> 4U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5129 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5299) 
           & (IData)(vlSelfRef.picorv32__DOT__latched_branch));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5148 
        = ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
            >> 0x1aU) & (IData)(vlSelfRef.picorv32__DOT__latched_branch));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5149 
        = (3U & ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
                  >> 0x18U) & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_branch)))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5146 
        = ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
            >> 0x17U) & (IData)(vlSelfRef.picorv32__DOT__latched_branch));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5147 
        = (3U & ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
                  >> 0x15U) & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_branch)))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5144 
        = ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
            >> 0x14U) & (IData)(vlSelfRef.picorv32__DOT__latched_branch));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5145 
        = (3U & ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
                  >> 0x12U) & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_branch)))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5142 
        = ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
            >> 0x11U) & (IData)(vlSelfRef.picorv32__DOT__latched_branch));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5143 
        = (3U & ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
                  >> 0xfU) & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_branch)))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5140 
        = ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
            >> 0xeU) & (IData)(vlSelfRef.picorv32__DOT__latched_branch));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5141 
        = (3U & ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
                  >> 0xcU) & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_branch)))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5138 
        = ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
            >> 0xbU) & (IData)(vlSelfRef.picorv32__DOT__latched_branch));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5139 
        = (3U & ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
                  >> 9U) & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_branch)))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5136 
        = ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
            >> 8U) & (IData)(vlSelfRef.picorv32__DOT__latched_branch));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5137 
        = (3U & ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
                  >> 6U) & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_branch)))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5134 
        = ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
            >> 5U) & (IData)(vlSelfRef.picorv32__DOT__latched_branch));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5135 
        = (3U & ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
                  >> 3U) & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_branch)))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5132 
        = ((picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
            >> 2U) & (IData)(vlSelfRef.picorv32__DOT__latched_branch));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5133 
        = (3U & (picorv32__DOT____VdfgRegularize_h2364b514_0_5300 
                 & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_branch)))));
    picorv32__DOT___01065_ = (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5326 
                              | ((((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5148) 
                                     << 0x1fU) | (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5149) 
                                                   << 0x1dU) 
                                                  | ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5146) 
                                                     << 0x1cU))) 
                                   | (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5147) 
                                       << 0x1aU) | 
                                      ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5144) 
                                       << 0x19U))) 
                                  | ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5145) 
                                       << 0x17U) | 
                                      (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5142) 
                                        << 0x16U) | 
                                       ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5143) 
                                        << 0x14U))) 
                                     | (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5140) 
                                         << 0x13U) 
                                        | (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5141) 
                                            << 0x11U) 
                                           | ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5138) 
                                              << 0x10U))))) 
                                 | (((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5139) 
                                       << 0xeU) | ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5136) 
                                                   << 0xdU)) 
                                     | (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5137) 
                                         << 0xbU) | 
                                        (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5134) 
                                          << 0xaU) 
                                         | ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5135) 
                                            << 8U)))) 
                                    | ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5132) 
                                         << 7U) | (
                                                   ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5133) 
                                                    << 5U) 
                                                   | ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5129) 
                                                      << 4U))) 
                                       | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5131) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5885) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5128)))))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5670 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x1fU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5669 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x1eU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5672 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x1dU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5671 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x1cU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5674 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x1bU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5673 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x1aU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5676 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x19U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5675 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x18U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5678 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x17U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5677 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x16U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5680 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x15U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5679 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x14U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5682 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x13U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5681 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x12U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5684 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x11U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5683 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0x10U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5686 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0xfU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5685 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0xeU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5688 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0xdU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5687 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0xcU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5690 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0xbU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5689 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 0xaU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5692 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 9U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5691 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 8U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5694 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 7U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5693 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 6U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5696 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 5U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5695 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 4U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5698 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5697 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 2U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5700 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & (picorv32__DOT___01065_ >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5699 
        = ((IData)(vlSelfRef.picorv32__DOT___00015_) 
           & picorv32__DOT___01065_);
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5352 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5670));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5351 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5669));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5354 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5672));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5353 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5671));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5356 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5674));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5355 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5673));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5358 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5676));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5357 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5675));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5360 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5678));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5359 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5677));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5362 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5680));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5361 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5679));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5364 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5682));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5363 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5681));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5366 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5684));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5365 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5683));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5368 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5686));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5367 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5685));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5370 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5688));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5369 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5687));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5372 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5690));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5371 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5689));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5374 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5692));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5373 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5691));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5376 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5694));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5375 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5693));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5378 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5696));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5377 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5695));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5380 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5698));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5379 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5697));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5382 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5700));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5381 
        = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5699));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__18(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__18\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)(((((((0x40000000U 
                                        & (((IData)(
                                                    (vlSelfRef.picorv32__DOT__count_cycle 
                                                     >> 0x3eU)) 
                                            & (IData)(
                                                      (vlSelfRef.picorv32__DOT___01121_ 
                                                       >> 0x3dU))) 
                                           << 0x1eU)) 
                                       | ((IData)((
                                                   (0x3000000000000000ULL 
                                                    == 
                                                    (0x3000000000000000ULL 
                                                     & vlSelfRef.picorv32__DOT__count_cycle)) 
                                                   & (vlSelfRef.picorv32__DOT___01121_ 
                                                      >> 0x3bU))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & (((IData)(
                                                      (vlSelfRef.picorv32__DOT__count_cycle 
                                                       >> 0x3cU)) 
                                              & (IData)(
                                                        (vlSelfRef.picorv32__DOT___01121_ 
                                                         >> 0x3bU))) 
                                             << 0x1cU)) 
                                         | ((((IData)(
                                                      (0xc00000000000000ULL 
                                                       == 
                                                       (0xc00000000000000ULL 
                                                        & vlSelfRef.picorv32__DOT__count_cycle))) 
                                              & (IData)(vlSelfRef.picorv32__DOT___01325_)) 
                                             & (IData)(
                                                       (vlSelfRef.picorv32__DOT___01121_ 
                                                        >> 0x37U))) 
                                            << 0x1bU))) 
                                     | (((0x4000000U 
                                          & (((IData)(
                                                      (vlSelfRef.picorv32__DOT__count_cycle 
                                                       >> 0x3aU)) 
                                              & (IData)(
                                                        (vlSelfRef.picorv32__DOT___01121_ 
                                                         >> 0x39U))) 
                                             << 0x1aU)) 
                                         | (((IData)(vlSelfRef.picorv32__DOT___01325_) 
                                             & (IData)(
                                                       (vlSelfRef.picorv32__DOT___01121_ 
                                                        >> 0x37U))) 
                                            << 0x19U)) 
                                        | ((0x1000000U 
                                            & (((IData)(
                                                        (vlSelfRef.picorv32__DOT__count_cycle 
                                                         >> 0x38U)) 
                                                & (IData)(
                                                          (vlSelfRef.picorv32__DOT___01121_ 
                                                           >> 0x37U))) 
                                               << 0x18U)) 
                                           | (((((IData)(
                                                         (0xc0000000000000ULL 
                                                          == 
                                                          (0xc0000000000000ULL 
                                                           & vlSelfRef.picorv32__DOT__count_cycle))) 
                                                 & (IData)(vlSelfRef.picorv32__DOT___01323_)) 
                                                & (IData)(vlSelfRef.picorv32__DOT___01339_)) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01121_ 
                                                          >> 0x2fU))) 
                                              << 0x17U)))) 
                                    | ((((0x400000U 
                                          & (((IData)(
                                                      (vlSelfRef.picorv32__DOT__count_cycle 
                                                       >> 0x36U)) 
                                              & (IData)(
                                                        (vlSelfRef.picorv32__DOT___01121_ 
                                                         >> 0x35U))) 
                                             << 0x16U)) 
                                         | (((IData)(vlSelfRef.picorv32__DOT___01323_) 
                                             & (IData)(
                                                       (vlSelfRef.picorv32__DOT___01121_ 
                                                        >> 0x33U))) 
                                            << 0x15U)) 
                                        | ((0x100000U 
                                            & (((IData)(
                                                        (vlSelfRef.picorv32__DOT__count_cycle 
                                                         >> 0x34U)) 
                                                & (IData)(
                                                          (vlSelfRef.picorv32__DOT___01121_ 
                                                           >> 0x33U))) 
                                               << 0x14U)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT___01339_) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01121_ 
                                                          >> 0x2fU))) 
                                              << 0x13U))) 
                                       | (((0x40000U 
                                            & (((IData)(
                                                        (vlSelfRef.picorv32__DOT__count_cycle 
                                                         >> 0x32U)) 
                                                & (IData)(
                                                          (vlSelfRef.picorv32__DOT___01121_ 
                                                           >> 0x31U))) 
                                               << 0x12U)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT___01321_) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01121_ 
                                                          >> 0x2fU))) 
                                              << 0x11U)) 
                                          | ((0x10000U 
                                              & (((IData)(
                                                          (vlSelfRef.picorv32__DOT__count_cycle 
                                                           >> 0x30U)) 
                                                  & (IData)(
                                                            (vlSelfRef.picorv32__DOT___01121_ 
                                                             >> 0x2fU))) 
                                                 << 0x10U)) 
                                             | ((((((IData)(
                                                            (0xc00000000000ULL 
                                                             == 
                                                             (0xc00000000000ULL 
                                                              & vlSelfRef.picorv32__DOT__count_cycle))) 
                                                    & (IData)(vlSelfRef.picorv32__DOT___01319_)) 
                                                   & (IData)(vlSelfRef.picorv32__DOT___01337_)) 
                                                  & (IData)(vlSelfRef.picorv32__DOT___01345_)) 
                                                 & (IData)(
                                                           (vlSelfRef.picorv32__DOT___01121_ 
                                                            >> 0x1fU))) 
                                                << 0xfU))))) 
                                   | (((((0x4000U & 
                                          (((IData)(
                                                    (vlSelfRef.picorv32__DOT__count_cycle 
                                                     >> 0x2eU)) 
                                            & (IData)(
                                                      (vlSelfRef.picorv32__DOT___01121_ 
                                                       >> 0x2dU))) 
                                           << 0xeU)) 
                                         | (((IData)(vlSelfRef.picorv32__DOT___01319_) 
                                             & (IData)(
                                                       (vlSelfRef.picorv32__DOT___01121_ 
                                                        >> 0x2bU))) 
                                            << 0xdU)) 
                                        | ((0x1000U 
                                            & (((IData)(
                                                        (vlSelfRef.picorv32__DOT__count_cycle 
                                                         >> 0x2cU)) 
                                                & (IData)(
                                                          (vlSelfRef.picorv32__DOT___01121_ 
                                                           >> 0x2bU))) 
                                               << 0xcU)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT___01337_) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01121_ 
                                                          >> 0x27U))) 
                                              << 0xbU))) 
                                       | (((0x400U 
                                            & (((IData)(
                                                        (vlSelfRef.picorv32__DOT__count_cycle 
                                                         >> 0x2aU)) 
                                                & (IData)(
                                                          (vlSelfRef.picorv32__DOT___01121_ 
                                                           >> 0x29U))) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT___01317_) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01121_ 
                                                          >> 0x27U))) 
                                              << 9U)) 
                                          | ((0x100U 
                                              & (((IData)(
                                                          (vlSelfRef.picorv32__DOT__count_cycle 
                                                           >> 0x28U)) 
                                                  & (IData)(
                                                            (vlSelfRef.picorv32__DOT___01121_ 
                                                             >> 0x27U))) 
                                                 << 8U)) 
                                             | (((IData)(vlSelfRef.picorv32__DOT___01345_) 
                                                 & (IData)(
                                                           (vlSelfRef.picorv32__DOT___01121_ 
                                                            >> 0x1fU))) 
                                                << 7U)))) 
                                      | ((((0x40U & 
                                            (((IData)(
                                                      (vlSelfRef.picorv32__DOT__count_cycle 
                                                       >> 0x26U)) 
                                              & (IData)(
                                                        (vlSelfRef.picorv32__DOT___01121_ 
                                                         >> 0x25U))) 
                                             << 6U)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT___01315_) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01121_ 
                                                          >> 0x23U))) 
                                              << 5U)) 
                                          | ((0x10U 
                                              & (((IData)(
                                                          (vlSelfRef.picorv32__DOT__count_cycle 
                                                           >> 0x24U)) 
                                                  & (IData)(
                                                            (vlSelfRef.picorv32__DOT___01121_ 
                                                             >> 0x23U))) 
                                                 << 4U)) 
                                             | (((IData)(vlSelfRef.picorv32__DOT___01335_) 
                                                 & (IData)(
                                                           (vlSelfRef.picorv32__DOT___01121_ 
                                                            >> 0x1fU))) 
                                                << 3U))) 
                                         | ((4U & (
                                                   ((IData)(
                                                            (vlSelfRef.picorv32__DOT__count_cycle 
                                                             >> 0x22U)) 
                                                    & (IData)(
                                                              (vlSelfRef.picorv32__DOT___01121_ 
                                                               >> 0x21U))) 
                                                   << 2U)) 
                                            | ((((IData)(vlSelfRef.picorv32__DOT___01313_) 
                                                 & (IData)(
                                                           (vlSelfRef.picorv32__DOT___01121_ 
                                                            >> 0x1fU))) 
                                                << 1U) 
                                               | (1U 
                                                  & ((IData)(
                                                             (vlSelfRef.picorv32__DOT__count_cycle 
                                                              >> 0x20U)) 
                                                     & (IData)(
                                                               (vlSelfRef.picorv32__DOT___01121_ 
                                                                >> 0x1fU))))))))))) 
                  << 0x20U) | (QData)((IData)((((((
                                                   ((((((IData)(
                                                                (0xc0000000ULL 
                                                                 == 
                                                                 (0xc0000000ULL 
                                                                  & vlSelfRef.picorv32__DOT__count_cycle))) 
                                                        & (IData)(vlSelfRef.picorv32__DOT___01311_)) 
                                                       & (IData)(vlSelfRef.picorv32__DOT___01333_)) 
                                                      & (IData)(vlSelfRef.picorv32__DOT___01343_)) 
                                                     & (IData)(
                                                               (vlSelfRef.picorv32__DOT___01121_ 
                                                                >> 0xfU))) 
                                                    << 0x1fU) 
                                                   | (0x40000000U 
                                                      & (((IData)(
                                                                  (vlSelfRef.picorv32__DOT__count_cycle 
                                                                   >> 0x1eU)) 
                                                          & (IData)(
                                                                    (vlSelfRef.picorv32__DOT___01121_ 
                                                                     >> 0x1dU))) 
                                                         << 0x1eU))) 
                                                  | ((((IData)(vlSelfRef.picorv32__DOT___01311_) 
                                                       & (IData)(
                                                                 (vlSelfRef.picorv32__DOT___01121_ 
                                                                  >> 0x1bU))) 
                                                      << 0x1dU) 
                                                     | (0x10000000U 
                                                        & (((IData)(
                                                                    (vlSelfRef.picorv32__DOT__count_cycle 
                                                                     >> 0x1cU)) 
                                                            & (IData)(
                                                                      (vlSelfRef.picorv32__DOT___01121_ 
                                                                       >> 0x1bU))) 
                                                           << 0x1cU)))) 
                                                 | (((((IData)(vlSelfRef.picorv32__DOT___01333_) 
                                                       & (IData)(
                                                                 (vlSelfRef.picorv32__DOT___01121_ 
                                                                  >> 0x17U))) 
                                                      << 0x1bU) 
                                                     | (0x4000000U 
                                                        & (((IData)(
                                                                    (vlSelfRef.picorv32__DOT__count_cycle 
                                                                     >> 0x1aU)) 
                                                            & (IData)(
                                                                      (vlSelfRef.picorv32__DOT___01121_ 
                                                                       >> 0x19U))) 
                                                           << 0x1aU))) 
                                                    | ((((IData)(vlSelfRef.picorv32__DOT___01309_) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01121_ 
                                                                    >> 0x17U))) 
                                                        << 0x19U) 
                                                       | (0x1000000U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_cycle 
                                                                       >> 0x18U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01121_ 
                                                                         >> 0x17U))) 
                                                             << 0x18U))))) 
                                                | ((((((IData)(vlSelfRef.picorv32__DOT___01343_) 
                                                       & (IData)(
                                                                 (vlSelfRef.picorv32__DOT___01121_ 
                                                                  >> 0xfU))) 
                                                      << 0x17U) 
                                                     | (0x400000U 
                                                        & (((IData)(
                                                                    (vlSelfRef.picorv32__DOT__count_cycle 
                                                                     >> 0x16U)) 
                                                            & (IData)(
                                                                      (vlSelfRef.picorv32__DOT___01121_ 
                                                                       >> 0x15U))) 
                                                           << 0x16U))) 
                                                    | ((((IData)(vlSelfRef.picorv32__DOT___01307_) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01121_ 
                                                                    >> 0x13U))) 
                                                        << 0x15U) 
                                                       | (0x100000U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_cycle 
                                                                       >> 0x14U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01121_ 
                                                                         >> 0x13U))) 
                                                             << 0x14U)))) 
                                                   | (((((IData)(vlSelfRef.picorv32__DOT___01331_) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01121_ 
                                                                    >> 0xfU))) 
                                                        << 0x13U) 
                                                       | (0x40000U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_cycle 
                                                                       >> 0x12U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01121_ 
                                                                         >> 0x11U))) 
                                                             << 0x12U))) 
                                                      | ((((IData)(vlSelfRef.picorv32__DOT___01305_) 
                                                           & (IData)(
                                                                     (vlSelfRef.picorv32__DOT___01121_ 
                                                                      >> 0xfU))) 
                                                          << 0x11U) 
                                                         | (0x10000U 
                                                            & (((IData)(
                                                                        (vlSelfRef.picorv32__DOT__count_cycle 
                                                                         >> 0x10U)) 
                                                                & (IData)(
                                                                          (vlSelfRef.picorv32__DOT___01121_ 
                                                                           >> 0xfU))) 
                                                               << 0x10U)))))) 
                                               | (((((((((IData)(
                                                                 (0xc000ULL 
                                                                  == 
                                                                  (0xc000ULL 
                                                                   & vlSelfRef.picorv32__DOT__count_cycle))) 
                                                         & (IData)(vlSelfRef.picorv32__DOT___01303_)) 
                                                        & (IData)(vlSelfRef.picorv32__DOT___01329_)) 
                                                       & (IData)(
                                                                 (vlSelfRef.picorv32__DOT___01121_ 
                                                                  >> 7U))) 
                                                      << 0xfU) 
                                                     | (0x4000U 
                                                        & (((IData)(
                                                                    (vlSelfRef.picorv32__DOT__count_cycle 
                                                                     >> 0xeU)) 
                                                            & (IData)(
                                                                      (vlSelfRef.picorv32__DOT___01121_ 
                                                                       >> 0xdU))) 
                                                           << 0xeU))) 
                                                    | ((((IData)(vlSelfRef.picorv32__DOT___01303_) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01121_ 
                                                                    >> 0xbU))) 
                                                        << 0xdU) 
                                                       | (0x1000U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_cycle 
                                                                       >> 0xcU)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01121_ 
                                                                         >> 0xbU))) 
                                                             << 0xcU)))) 
                                                   | (((((IData)(vlSelfRef.picorv32__DOT___01329_) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01121_ 
                                                                    >> 7U))) 
                                                        << 0xbU) 
                                                       | (0x400U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_cycle 
                                                                       >> 0xaU)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01121_ 
                                                                         >> 9U))) 
                                                             << 0xaU))) 
                                                      | ((((IData)(vlSelfRef.picorv32__DOT___01301_) 
                                                           & (IData)(
                                                                     (vlSelfRef.picorv32__DOT___01121_ 
                                                                      >> 7U))) 
                                                          << 9U) 
                                                         | (0x100U 
                                                            & (((IData)(
                                                                        (vlSelfRef.picorv32__DOT__count_cycle 
                                                                         >> 8U)) 
                                                                & (IData)(
                                                                          (vlSelfRef.picorv32__DOT___01121_ 
                                                                           >> 7U))) 
                                                               << 8U))))) 
                                                  | (((((((IData)(
                                                                  (0xc0ULL 
                                                                   == 
                                                                   (0xc0ULL 
                                                                    & vlSelfRef.picorv32__DOT__count_cycle))) 
                                                          & (IData)(vlSelfRef.picorv32__DOT___01299_)) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01121_ 
                                                                    >> 3U))) 
                                                        << 7U) 
                                                       | (0x40U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_cycle 
                                                                       >> 6U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01121_ 
                                                                         >> 5U))) 
                                                             << 6U))) 
                                                      | ((((IData)(vlSelfRef.picorv32__DOT___01299_) 
                                                           & (IData)(
                                                                     (vlSelfRef.picorv32__DOT___01121_ 
                                                                      >> 3U))) 
                                                          << 5U) 
                                                         | (0x10U 
                                                            & (((IData)(
                                                                        (vlSelfRef.picorv32__DOT__count_cycle 
                                                                         >> 4U)) 
                                                                & (IData)(
                                                                          (vlSelfRef.picorv32__DOT___01121_ 
                                                                           >> 3U))) 
                                                               << 4U)))) 
                                                     | ((((IData)(
                                                                  ((0xcULL 
                                                                    == 
                                                                    (0xcULL 
                                                                     & vlSelfRef.picorv32__DOT__count_cycle)) 
                                                                   & (vlSelfRef.picorv32__DOT___01121_ 
                                                                      >> 1U))) 
                                                          << 3U) 
                                                         | (4U 
                                                            & (((IData)(
                                                                        (vlSelfRef.picorv32__DOT__count_cycle 
                                                                         >> 2U)) 
                                                                & (IData)(
                                                                          (vlSelfRef.picorv32__DOT___01121_ 
                                                                           >> 1U))) 
                                                               << 2U))) 
                                                        | (((IData)(
                                                                    (3ULL 
                                                                     == 
                                                                     (3ULL 
                                                                      & vlSelfRef.picorv32__DOT__count_cycle))) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (IData)(vlSelfRef.picorv32__DOT__count_cycle))))))))));
    vlSelfRef.picorv32__DOT___01121_ = ((0x8000000000000000ULL 
                                         & vlSelfRef.picorv32__DOT___01121_) 
                                        | __Vtemp_1);
    vlSelfRef.picorv32__DOT___01123_ = ((0xfffffffffffffff8ULL 
                                         & ((0xfffffffffffffff8ULL 
                                             & vlSelfRef.picorv32__DOT__count_cycle) 
                                            ^ (0xfffffffffffffff8ULL 
                                               & (vlSelfRef.picorv32__DOT___01121_ 
                                                  << 1U)))) 
                                        | (QData)((IData)(
                                                          ((4U 
                                                            & (((IData)(
                                                                        (vlSelfRef.picorv32__DOT__count_cycle 
                                                                         >> 2U)) 
                                                                ^ (IData)(
                                                                          (vlSelfRef.picorv32__DOT___01121_ 
                                                                           >> 1U))) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & (((IData)(
                                                                           (vlSelfRef.picorv32__DOT__count_cycle 
                                                                            >> 1U)) 
                                                                   ^ (IData)(vlSelfRef.picorv32__DOT__count_cycle)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (~ (IData)(vlSelfRef.picorv32__DOT__count_cycle))))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__19(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__19\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)(((((((0x40000000U 
                                        & (((IData)(
                                                    (vlSelfRef.picorv32__DOT__count_instr 
                                                     >> 0x3eU)) 
                                            & (IData)(
                                                      (vlSelfRef.picorv32__DOT___01128_ 
                                                       >> 0x3dU))) 
                                           << 0x1eU)) 
                                       | ((IData)((
                                                   (0x3000000000000000ULL 
                                                    == 
                                                    (0x3000000000000000ULL 
                                                     & vlSelfRef.picorv32__DOT__count_instr)) 
                                                   & (vlSelfRef.picorv32__DOT___01128_ 
                                                      >> 0x3bU))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & (((IData)(
                                                      (vlSelfRef.picorv32__DOT__count_instr 
                                                       >> 0x3cU)) 
                                              & (IData)(
                                                        (vlSelfRef.picorv32__DOT___01128_ 
                                                         >> 0x3bU))) 
                                             << 0x1cU)) 
                                         | ((((IData)(
                                                      (0xc00000000000000ULL 
                                                       == 
                                                       (0xc00000000000000ULL 
                                                        & vlSelfRef.picorv32__DOT__count_instr))) 
                                              & (IData)(vlSelfRef.picorv32__DOT___01398_)) 
                                             & (IData)(
                                                       (vlSelfRef.picorv32__DOT___01128_ 
                                                        >> 0x37U))) 
                                            << 0x1bU))) 
                                     | (((0x4000000U 
                                          & (((IData)(
                                                      (vlSelfRef.picorv32__DOT__count_instr 
                                                       >> 0x3aU)) 
                                              & (IData)(
                                                        (vlSelfRef.picorv32__DOT___01128_ 
                                                         >> 0x39U))) 
                                             << 0x1aU)) 
                                         | (((IData)(vlSelfRef.picorv32__DOT___01398_) 
                                             & (IData)(
                                                       (vlSelfRef.picorv32__DOT___01128_ 
                                                        >> 0x37U))) 
                                            << 0x19U)) 
                                        | ((0x1000000U 
                                            & (((IData)(
                                                        (vlSelfRef.picorv32__DOT__count_instr 
                                                         >> 0x38U)) 
                                                & (IData)(
                                                          (vlSelfRef.picorv32__DOT___01128_ 
                                                           >> 0x37U))) 
                                               << 0x18U)) 
                                           | (((((IData)(
                                                         (0xc0000000000000ULL 
                                                          == 
                                                          (0xc0000000000000ULL 
                                                           & vlSelfRef.picorv32__DOT__count_instr))) 
                                                 & (IData)(vlSelfRef.picorv32__DOT___01396_)) 
                                                & (IData)(vlSelfRef.picorv32__DOT___01412_)) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01128_ 
                                                          >> 0x2fU))) 
                                              << 0x17U)))) 
                                    | ((((0x400000U 
                                          & (((IData)(
                                                      (vlSelfRef.picorv32__DOT__count_instr 
                                                       >> 0x36U)) 
                                              & (IData)(
                                                        (vlSelfRef.picorv32__DOT___01128_ 
                                                         >> 0x35U))) 
                                             << 0x16U)) 
                                         | (((IData)(vlSelfRef.picorv32__DOT___01396_) 
                                             & (IData)(
                                                       (vlSelfRef.picorv32__DOT___01128_ 
                                                        >> 0x33U))) 
                                            << 0x15U)) 
                                        | ((0x100000U 
                                            & (((IData)(
                                                        (vlSelfRef.picorv32__DOT__count_instr 
                                                         >> 0x34U)) 
                                                & (IData)(
                                                          (vlSelfRef.picorv32__DOT___01128_ 
                                                           >> 0x33U))) 
                                               << 0x14U)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT___01412_) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01128_ 
                                                          >> 0x2fU))) 
                                              << 0x13U))) 
                                       | (((0x40000U 
                                            & (((IData)(
                                                        (vlSelfRef.picorv32__DOT__count_instr 
                                                         >> 0x32U)) 
                                                & (IData)(
                                                          (vlSelfRef.picorv32__DOT___01128_ 
                                                           >> 0x31U))) 
                                               << 0x12U)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT___01394_) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01128_ 
                                                          >> 0x2fU))) 
                                              << 0x11U)) 
                                          | ((0x10000U 
                                              & (((IData)(
                                                          (vlSelfRef.picorv32__DOT__count_instr 
                                                           >> 0x30U)) 
                                                  & (IData)(
                                                            (vlSelfRef.picorv32__DOT___01128_ 
                                                             >> 0x2fU))) 
                                                 << 0x10U)) 
                                             | ((((((IData)(
                                                            (0xc00000000000ULL 
                                                             == 
                                                             (0xc00000000000ULL 
                                                              & vlSelfRef.picorv32__DOT__count_instr))) 
                                                    & (IData)(vlSelfRef.picorv32__DOT___01392_)) 
                                                   & (IData)(vlSelfRef.picorv32__DOT___01410_)) 
                                                  & (IData)(vlSelfRef.picorv32__DOT___01418_)) 
                                                 & (IData)(
                                                           (vlSelfRef.picorv32__DOT___01128_ 
                                                            >> 0x1fU))) 
                                                << 0xfU))))) 
                                   | (((((0x4000U & 
                                          (((IData)(
                                                    (vlSelfRef.picorv32__DOT__count_instr 
                                                     >> 0x2eU)) 
                                            & (IData)(
                                                      (vlSelfRef.picorv32__DOT___01128_ 
                                                       >> 0x2dU))) 
                                           << 0xeU)) 
                                         | (((IData)(vlSelfRef.picorv32__DOT___01392_) 
                                             & (IData)(
                                                       (vlSelfRef.picorv32__DOT___01128_ 
                                                        >> 0x2bU))) 
                                            << 0xdU)) 
                                        | ((0x1000U 
                                            & (((IData)(
                                                        (vlSelfRef.picorv32__DOT__count_instr 
                                                         >> 0x2cU)) 
                                                & (IData)(
                                                          (vlSelfRef.picorv32__DOT___01128_ 
                                                           >> 0x2bU))) 
                                               << 0xcU)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT___01410_) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01128_ 
                                                          >> 0x27U))) 
                                              << 0xbU))) 
                                       | (((0x400U 
                                            & (((IData)(
                                                        (vlSelfRef.picorv32__DOT__count_instr 
                                                         >> 0x2aU)) 
                                                & (IData)(
                                                          (vlSelfRef.picorv32__DOT___01128_ 
                                                           >> 0x29U))) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT___01390_) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01128_ 
                                                          >> 0x27U))) 
                                              << 9U)) 
                                          | ((0x100U 
                                              & (((IData)(
                                                          (vlSelfRef.picorv32__DOT__count_instr 
                                                           >> 0x28U)) 
                                                  & (IData)(
                                                            (vlSelfRef.picorv32__DOT___01128_ 
                                                             >> 0x27U))) 
                                                 << 8U)) 
                                             | (((IData)(vlSelfRef.picorv32__DOT___01418_) 
                                                 & (IData)(
                                                           (vlSelfRef.picorv32__DOT___01128_ 
                                                            >> 0x1fU))) 
                                                << 7U)))) 
                                      | ((((0x40U & 
                                            (((IData)(
                                                      (vlSelfRef.picorv32__DOT__count_instr 
                                                       >> 0x26U)) 
                                              & (IData)(
                                                        (vlSelfRef.picorv32__DOT___01128_ 
                                                         >> 0x25U))) 
                                             << 6U)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT___01388_) 
                                               & (IData)(
                                                         (vlSelfRef.picorv32__DOT___01128_ 
                                                          >> 0x23U))) 
                                              << 5U)) 
                                          | ((0x10U 
                                              & (((IData)(
                                                          (vlSelfRef.picorv32__DOT__count_instr 
                                                           >> 0x24U)) 
                                                  & (IData)(
                                                            (vlSelfRef.picorv32__DOT___01128_ 
                                                             >> 0x23U))) 
                                                 << 4U)) 
                                             | (((IData)(vlSelfRef.picorv32__DOT___01408_) 
                                                 & (IData)(
                                                           (vlSelfRef.picorv32__DOT___01128_ 
                                                            >> 0x1fU))) 
                                                << 3U))) 
                                         | ((4U & (
                                                   ((IData)(
                                                            (vlSelfRef.picorv32__DOT__count_instr 
                                                             >> 0x22U)) 
                                                    & (IData)(
                                                              (vlSelfRef.picorv32__DOT___01128_ 
                                                               >> 0x21U))) 
                                                   << 2U)) 
                                            | ((((IData)(vlSelfRef.picorv32__DOT___01386_) 
                                                 & (IData)(
                                                           (vlSelfRef.picorv32__DOT___01128_ 
                                                            >> 0x1fU))) 
                                                << 1U) 
                                               | (1U 
                                                  & ((IData)(
                                                             (vlSelfRef.picorv32__DOT__count_instr 
                                                              >> 0x20U)) 
                                                     & (IData)(
                                                               (vlSelfRef.picorv32__DOT___01128_ 
                                                                >> 0x1fU))))))))))) 
                  << 0x20U) | (QData)((IData)((((((
                                                   ((((((IData)(
                                                                (0xc0000000ULL 
                                                                 == 
                                                                 (0xc0000000ULL 
                                                                  & vlSelfRef.picorv32__DOT__count_instr))) 
                                                        & (IData)(vlSelfRef.picorv32__DOT___01384_)) 
                                                       & (IData)(vlSelfRef.picorv32__DOT___01406_)) 
                                                      & (IData)(vlSelfRef.picorv32__DOT___01416_)) 
                                                     & (IData)(
                                                               (vlSelfRef.picorv32__DOT___01128_ 
                                                                >> 0xfU))) 
                                                    << 0x1fU) 
                                                   | (0x40000000U 
                                                      & (((IData)(
                                                                  (vlSelfRef.picorv32__DOT__count_instr 
                                                                   >> 0x1eU)) 
                                                          & (IData)(
                                                                    (vlSelfRef.picorv32__DOT___01128_ 
                                                                     >> 0x1dU))) 
                                                         << 0x1eU))) 
                                                  | ((((IData)(vlSelfRef.picorv32__DOT___01384_) 
                                                       & (IData)(
                                                                 (vlSelfRef.picorv32__DOT___01128_ 
                                                                  >> 0x1bU))) 
                                                      << 0x1dU) 
                                                     | (0x10000000U 
                                                        & (((IData)(
                                                                    (vlSelfRef.picorv32__DOT__count_instr 
                                                                     >> 0x1cU)) 
                                                            & (IData)(
                                                                      (vlSelfRef.picorv32__DOT___01128_ 
                                                                       >> 0x1bU))) 
                                                           << 0x1cU)))) 
                                                 | (((((IData)(vlSelfRef.picorv32__DOT___01406_) 
                                                       & (IData)(
                                                                 (vlSelfRef.picorv32__DOT___01128_ 
                                                                  >> 0x17U))) 
                                                      << 0x1bU) 
                                                     | (0x4000000U 
                                                        & (((IData)(
                                                                    (vlSelfRef.picorv32__DOT__count_instr 
                                                                     >> 0x1aU)) 
                                                            & (IData)(
                                                                      (vlSelfRef.picorv32__DOT___01128_ 
                                                                       >> 0x19U))) 
                                                           << 0x1aU))) 
                                                    | ((((IData)(vlSelfRef.picorv32__DOT___01382_) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01128_ 
                                                                    >> 0x17U))) 
                                                        << 0x19U) 
                                                       | (0x1000000U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_instr 
                                                                       >> 0x18U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01128_ 
                                                                         >> 0x17U))) 
                                                             << 0x18U))))) 
                                                | ((((((IData)(vlSelfRef.picorv32__DOT___01416_) 
                                                       & (IData)(
                                                                 (vlSelfRef.picorv32__DOT___01128_ 
                                                                  >> 0xfU))) 
                                                      << 0x17U) 
                                                     | (0x400000U 
                                                        & (((IData)(
                                                                    (vlSelfRef.picorv32__DOT__count_instr 
                                                                     >> 0x16U)) 
                                                            & (IData)(
                                                                      (vlSelfRef.picorv32__DOT___01128_ 
                                                                       >> 0x15U))) 
                                                           << 0x16U))) 
                                                    | ((((IData)(vlSelfRef.picorv32__DOT___01380_) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01128_ 
                                                                    >> 0x13U))) 
                                                        << 0x15U) 
                                                       | (0x100000U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_instr 
                                                                       >> 0x14U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01128_ 
                                                                         >> 0x13U))) 
                                                             << 0x14U)))) 
                                                   | (((((IData)(vlSelfRef.picorv32__DOT___01404_) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01128_ 
                                                                    >> 0xfU))) 
                                                        << 0x13U) 
                                                       | (0x40000U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_instr 
                                                                       >> 0x12U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01128_ 
                                                                         >> 0x11U))) 
                                                             << 0x12U))) 
                                                      | ((((IData)(vlSelfRef.picorv32__DOT___01378_) 
                                                           & (IData)(
                                                                     (vlSelfRef.picorv32__DOT___01128_ 
                                                                      >> 0xfU))) 
                                                          << 0x11U) 
                                                         | (0x10000U 
                                                            & (((IData)(
                                                                        (vlSelfRef.picorv32__DOT__count_instr 
                                                                         >> 0x10U)) 
                                                                & (IData)(
                                                                          (vlSelfRef.picorv32__DOT___01128_ 
                                                                           >> 0xfU))) 
                                                               << 0x10U)))))) 
                                               | (((((((((IData)(
                                                                 (0xc000ULL 
                                                                  == 
                                                                  (0xc000ULL 
                                                                   & vlSelfRef.picorv32__DOT__count_instr))) 
                                                         & (IData)(vlSelfRef.picorv32__DOT___01376_)) 
                                                        & (IData)(vlSelfRef.picorv32__DOT___01402_)) 
                                                       & (IData)(
                                                                 (vlSelfRef.picorv32__DOT___01128_ 
                                                                  >> 7U))) 
                                                      << 0xfU) 
                                                     | (0x4000U 
                                                        & (((IData)(
                                                                    (vlSelfRef.picorv32__DOT__count_instr 
                                                                     >> 0xeU)) 
                                                            & (IData)(
                                                                      (vlSelfRef.picorv32__DOT___01128_ 
                                                                       >> 0xdU))) 
                                                           << 0xeU))) 
                                                    | ((((IData)(vlSelfRef.picorv32__DOT___01376_) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01128_ 
                                                                    >> 0xbU))) 
                                                        << 0xdU) 
                                                       | (0x1000U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_instr 
                                                                       >> 0xcU)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01128_ 
                                                                         >> 0xbU))) 
                                                             << 0xcU)))) 
                                                   | (((((IData)(vlSelfRef.picorv32__DOT___01402_) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01128_ 
                                                                    >> 7U))) 
                                                        << 0xbU) 
                                                       | (0x400U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_instr 
                                                                       >> 0xaU)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01128_ 
                                                                         >> 9U))) 
                                                             << 0xaU))) 
                                                      | ((((IData)(vlSelfRef.picorv32__DOT___01374_) 
                                                           & (IData)(
                                                                     (vlSelfRef.picorv32__DOT___01128_ 
                                                                      >> 7U))) 
                                                          << 9U) 
                                                         | (0x100U 
                                                            & (((IData)(
                                                                        (vlSelfRef.picorv32__DOT__count_instr 
                                                                         >> 8U)) 
                                                                & (IData)(
                                                                          (vlSelfRef.picorv32__DOT___01128_ 
                                                                           >> 7U))) 
                                                               << 8U))))) 
                                                  | (((((((IData)(
                                                                  (0xc0ULL 
                                                                   == 
                                                                   (0xc0ULL 
                                                                    & vlSelfRef.picorv32__DOT__count_instr))) 
                                                          & (IData)(vlSelfRef.picorv32__DOT___01372_)) 
                                                         & (IData)(
                                                                   (vlSelfRef.picorv32__DOT___01128_ 
                                                                    >> 3U))) 
                                                        << 7U) 
                                                       | (0x40U 
                                                          & (((IData)(
                                                                      (vlSelfRef.picorv32__DOT__count_instr 
                                                                       >> 6U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.picorv32__DOT___01128_ 
                                                                         >> 5U))) 
                                                             << 6U))) 
                                                      | ((((IData)(vlSelfRef.picorv32__DOT___01372_) 
                                                           & (IData)(
                                                                     (vlSelfRef.picorv32__DOT___01128_ 
                                                                      >> 3U))) 
                                                          << 5U) 
                                                         | (0x10U 
                                                            & (((IData)(
                                                                        (vlSelfRef.picorv32__DOT__count_instr 
                                                                         >> 4U)) 
                                                                & (IData)(
                                                                          (vlSelfRef.picorv32__DOT___01128_ 
                                                                           >> 3U))) 
                                                               << 4U)))) 
                                                     | ((((IData)(
                                                                  ((0xcULL 
                                                                    == 
                                                                    (0xcULL 
                                                                     & vlSelfRef.picorv32__DOT__count_instr)) 
                                                                   & (vlSelfRef.picorv32__DOT___01128_ 
                                                                      >> 1U))) 
                                                          << 3U) 
                                                         | (4U 
                                                            & (((IData)(
                                                                        (vlSelfRef.picorv32__DOT__count_instr 
                                                                         >> 2U)) 
                                                                & (IData)(
                                                                          (vlSelfRef.picorv32__DOT___01128_ 
                                                                           >> 1U))) 
                                                               << 2U))) 
                                                        | (((IData)(
                                                                    (3ULL 
                                                                     == 
                                                                     (3ULL 
                                                                      & vlSelfRef.picorv32__DOT__count_instr))) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (IData)(vlSelfRef.picorv32__DOT__count_instr))))))))));
    vlSelfRef.picorv32__DOT___01128_ = ((0x8000000000000000ULL 
                                         & vlSelfRef.picorv32__DOT___01128_) 
                                        | __Vtemp_1);
    vlSelfRef.picorv32__DOT___01130_ = ((0xfffffffffffffff8ULL 
                                         & ((0xfffffffffffffff8ULL 
                                             & vlSelfRef.picorv32__DOT__count_instr) 
                                            ^ (0xfffffffffffffff8ULL 
                                               & (vlSelfRef.picorv32__DOT___01128_ 
                                                  << 1U)))) 
                                        | (QData)((IData)(
                                                          ((4U 
                                                            & (((IData)(
                                                                        (vlSelfRef.picorv32__DOT__count_instr 
                                                                         >> 2U)) 
                                                                ^ (IData)(
                                                                          (vlSelfRef.picorv32__DOT___01128_ 
                                                                           >> 1U))) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & (((IData)(
                                                                           (vlSelfRef.picorv32__DOT__count_instr 
                                                                            >> 1U)) 
                                                                   ^ (IData)(vlSelfRef.picorv32__DOT__count_instr)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (~ (IData)(vlSelfRef.picorv32__DOT__count_instr))))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__21(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__21\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT___00079_;
    picorv32__DOT___00079_ = 0;
    CData/*0:0*/ picorv32__DOT___00080_;
    picorv32__DOT___00080_ = 0;
    CData/*0:0*/ picorv32__DOT___00081_;
    picorv32__DOT___00081_ = 0;
    CData/*0:0*/ picorv32__DOT___00083_;
    picorv32__DOT___00083_ = 0;
    CData/*0:0*/ picorv32__DOT___00085_;
    picorv32__DOT___00085_ = 0;
    CData/*0:0*/ picorv32__DOT___00087_;
    picorv32__DOT___00087_ = 0;
    CData/*0:0*/ picorv32__DOT___00089_;
    picorv32__DOT___00089_ = 0;
    CData/*0:0*/ picorv32__DOT___00094_;
    picorv32__DOT___00094_ = 0;
    CData/*0:0*/ picorv32__DOT___00095_;
    picorv32__DOT___00095_ = 0;
    CData/*0:0*/ picorv32__DOT___00100_;
    picorv32__DOT___00100_ = 0;
    CData/*0:0*/ picorv32__DOT___00105_;
    picorv32__DOT___00105_ = 0;
    CData/*0:0*/ picorv32__DOT___00106_;
    picorv32__DOT___00106_ = 0;
    CData/*0:0*/ picorv32__DOT___00111_;
    picorv32__DOT___00111_ = 0;
    CData/*0:0*/ picorv32__DOT___00116_;
    picorv32__DOT___00116_ = 0;
    CData/*0:0*/ picorv32__DOT___00117_;
    picorv32__DOT___00117_ = 0;
    CData/*0:0*/ picorv32__DOT___00122_;
    picorv32__DOT___00122_ = 0;
    CData/*0:0*/ picorv32__DOT___00127_;
    picorv32__DOT___00127_ = 0;
    CData/*0:0*/ picorv32__DOT___00128_;
    picorv32__DOT___00128_ = 0;
    CData/*0:0*/ picorv32__DOT___00129_;
    picorv32__DOT___00129_ = 0;
    CData/*0:0*/ picorv32__DOT___00130_;
    picorv32__DOT___00130_ = 0;
    CData/*0:0*/ picorv32__DOT___00131_;
    picorv32__DOT___00131_ = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5383;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5383 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5384;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5384 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5385;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5385 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5386;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5386 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5387;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5387 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((((((((IData)(vlSelfRef.resetn) & 
                        ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820)) 
                         & (IData)(vlSelfRef.picorv32__DOT___00015_))) 
                       << 0x1fU) & ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_887) 
                                      | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_884)) 
                                     << 0x1fU) | (0x80000000U 
                                                  & ((IData)(vlSelfRef.picorv32__DOT__latched_rd) 
                                                     << 0x1bU)))) 
                     | (0x40000000U & (vlSelfRef.picorv32__DOT___00002_ 
                                       >> 1U))) | (
                                                   (0x20000000U 
                                                    & (vlSelfRef.picorv32__DOT___00002_ 
                                                       >> 2U)) 
                                                   | (0x10000000U 
                                                      & (vlSelfRef.picorv32__DOT___00002_ 
                                                         >> 3U)))) 
                   | (((0x8000000U & (vlSelfRef.picorv32__DOT___00002_ 
                                      >> 4U)) | (0x4000000U 
                                                 & (vlSelfRef.picorv32__DOT___00002_ 
                                                    >> 5U))) 
                      | ((0x2000000U & (vlSelfRef.picorv32__DOT___00002_ 
                                        >> 6U)) | (0x1000000U 
                                                   & (vlSelfRef.picorv32__DOT___00002_ 
                                                      >> 7U))))) 
                  | ((((0x800000U & (vlSelfRef.picorv32__DOT___00002_ 
                                     >> 8U)) | (0x400000U 
                                                & (vlSelfRef.picorv32__DOT___00002_ 
                                                   >> 9U))) 
                      | ((0x200000U & (vlSelfRef.picorv32__DOT___00002_ 
                                       >> 0xaU)) | 
                         (0x100000U & (vlSelfRef.picorv32__DOT___00002_ 
                                       >> 0xbU)))) 
                     | (((0x80000U & (vlSelfRef.picorv32__DOT___00002_ 
                                      >> 0xcU)) | (0x40000U 
                                                   & (vlSelfRef.picorv32__DOT___00002_ 
                                                      >> 0xdU))) 
                        | ((0x20000U & (vlSelfRef.picorv32__DOT___00002_ 
                                        >> 0xeU)) | 
                           (0x10000U & (vlSelfRef.picorv32__DOT___00002_ 
                                        >> 0xfU)))))) 
                 | (((((0x8000U & (vlSelfRef.picorv32__DOT___00002_ 
                                   >> 0x10U)) | (0x4000U 
                                                 & (vlSelfRef.picorv32__DOT___00002_ 
                                                    >> 0x11U))) 
                      | ((0x2000U & (vlSelfRef.picorv32__DOT___00002_ 
                                     >> 0x12U)) | (0x1000U 
                                                   & (vlSelfRef.picorv32__DOT___00002_ 
                                                      >> 0x13U)))) 
                     | (((0x800U & (vlSelfRef.picorv32__DOT___00002_ 
                                    >> 0x14U)) | (0x400U 
                                                  & (vlSelfRef.picorv32__DOT___00002_ 
                                                     >> 0x15U))) 
                        | ((0x200U & (vlSelfRef.picorv32__DOT___00002_ 
                                      >> 0x16U)) | 
                           (0x100U & (vlSelfRef.picorv32__DOT___00002_ 
                                      >> 0x17U))))) 
                    | ((((0x80U & (vlSelfRef.picorv32__DOT___00002_ 
                                   >> 0x18U)) | (0x40U 
                                                 & (vlSelfRef.picorv32__DOT___00002_ 
                                                    >> 0x19U))) 
                        | ((0x20U & (vlSelfRef.picorv32__DOT___00002_ 
                                     >> 0x1aU)) | (0x10U 
                                                   & (vlSelfRef.picorv32__DOT___00002_ 
                                                      >> 0x1bU)))) 
                       | (((8U & (vlSelfRef.picorv32__DOT___00002_ 
                                  >> 0x1cU)) | (4U 
                                                & (vlSelfRef.picorv32__DOT___00002_ 
                                                   >> 0x1dU))) 
                          | ((2U & (vlSelfRef.picorv32__DOT___00002_ 
                                    >> 0x1eU)) | (vlSelfRef.picorv32__DOT___00002_ 
                                                  >> 0x1fU))))));
    vlSelfRef.picorv32__DOT___00002_ = __Vtemp_1;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5387 
        = ((vlSelfRef.picorv32__DOT___00002_ >> 0x1fU) 
           & ((IData)(vlSelfRef.picorv32__DOT__latched_rd) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5386 
        = ((vlSelfRef.picorv32__DOT___00002_ >> 0x1fU) 
           & (IData)(vlSelfRef.picorv32__DOT__latched_rd));
    picorv32__DOT___00128_ = (1U & ((~ (vlSelfRef.picorv32__DOT___00002_ 
                                        >> 0x1fU)) 
                                    | (~ ((IData)(vlSelfRef.picorv32__DOT__latched_rd) 
                                          >> 1U))));
    picorv32__DOT___00127_ = (1U & ((~ (vlSelfRef.picorv32__DOT___00002_ 
                                        >> 0x1fU)) 
                                    | (~ (IData)(vlSelfRef.picorv32__DOT__latched_rd))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5384 
        = ((vlSelfRef.picorv32__DOT___00002_ >> 0x1fU) 
           & ((IData)(vlSelfRef.picorv32__DOT__latched_rd) 
              >> 2U));
    picorv32__DOT___00129_ = (1U & ((~ (vlSelfRef.picorv32__DOT___00002_ 
                                        >> 0x1fU)) 
                                    | (~ ((IData)(vlSelfRef.picorv32__DOT__latched_rd) 
                                          >> 2U))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5383 
        = ((vlSelfRef.picorv32__DOT___00002_ >> 0x1fU) 
           & ((IData)(vlSelfRef.picorv32__DOT__latched_rd) 
              >> 4U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5385 
        = ((vlSelfRef.picorv32__DOT___00002_ >> 0x1fU) 
           & ((IData)(vlSelfRef.picorv32__DOT__latched_rd) 
              >> 3U));
    picorv32__DOT___00131_ = (1U & ((~ (vlSelfRef.picorv32__DOT___00002_ 
                                        >> 0x1fU)) 
                                    | (~ ((IData)(vlSelfRef.picorv32__DOT__latched_rd) 
                                          >> 4U))));
    picorv32__DOT___00130_ = (1U & ((~ (vlSelfRef.picorv32__DOT___00002_ 
                                        >> 0x1fU)) 
                                    | (~ ((IData)(vlSelfRef.picorv32__DOT__latched_rd) 
                                          >> 3U))));
    picorv32__DOT___00087_ = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5386) 
                              & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5387));
    picorv32__DOT___00083_ = ((IData)(picorv32__DOT___00128_) 
                              & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5386));
    picorv32__DOT___00085_ = ((IData)(picorv32__DOT___00127_) 
                              & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5387));
    picorv32__DOT___00079_ = ((IData)(picorv32__DOT___00128_) 
                              & (IData)(picorv32__DOT___00127_));
    picorv32__DOT___00116_ = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5385) 
                              & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5383));
    picorv32__DOT___00094_ = ((IData)(picorv32__DOT___00131_) 
                              & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5385));
    picorv32__DOT___00105_ = ((IData)(picorv32__DOT___00130_) 
                              & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5383));
    picorv32__DOT___00080_ = ((IData)(picorv32__DOT___00131_) 
                              & (IData)(picorv32__DOT___00130_));
    picorv32__DOT___00122_ = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5384) 
                              & (IData)(picorv32__DOT___00116_));
    picorv32__DOT___00117_ = ((IData)(picorv32__DOT___00129_) 
                              & (IData)(picorv32__DOT___00116_));
    picorv32__DOT___00100_ = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5384) 
                              & (IData)(picorv32__DOT___00094_));
    picorv32__DOT___00095_ = ((IData)(picorv32__DOT___00129_) 
                              & (IData)(picorv32__DOT___00094_));
    picorv32__DOT___00111_ = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5384) 
                              & (IData)(picorv32__DOT___00105_));
    picorv32__DOT___00106_ = ((IData)(picorv32__DOT___00129_) 
                              & (IData)(picorv32__DOT___00105_));
    picorv32__DOT___00089_ = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5384) 
                              & (IData)(picorv32__DOT___00080_));
    picorv32__DOT___00081_ = ((IData)(picorv32__DOT___00129_) 
                              & (IData)(picorv32__DOT___00080_));
    vlSelfRef.picorv32__DOT___00924_ = (((IData)(picorv32__DOT___00085_) 
                                         & (IData)(picorv32__DOT___00122_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00925_ = (((IData)(picorv32__DOT___00087_) 
                                         & (IData)(picorv32__DOT___00122_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00921_ = (((IData)(picorv32__DOT___00079_) 
                                         & (IData)(picorv32__DOT___00122_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00922_ = (((IData)(picorv32__DOT___00083_) 
                                         & (IData)(picorv32__DOT___00122_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00919_ = (((IData)(picorv32__DOT___00085_) 
                                         & (IData)(picorv32__DOT___00117_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00918_ = (((IData)(picorv32__DOT___00083_) 
                                         & (IData)(picorv32__DOT___00117_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00920_ = (((IData)(picorv32__DOT___00087_) 
                                         & (IData)(picorv32__DOT___00117_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00917_ = (((IData)(picorv32__DOT___00079_) 
                                         & (IData)(picorv32__DOT___00117_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00907_ = (((IData)(picorv32__DOT___00087_) 
                                         & (IData)(picorv32__DOT___00100_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00904_ = (((IData)(picorv32__DOT___00079_) 
                                         & (IData)(picorv32__DOT___00100_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00905_ = (((IData)(picorv32__DOT___00083_) 
                                         & (IData)(picorv32__DOT___00100_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00906_ = (((IData)(picorv32__DOT___00085_) 
                                         & (IData)(picorv32__DOT___00100_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00903_ = (((IData)(picorv32__DOT___00087_) 
                                         & (IData)(picorv32__DOT___00095_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00902_ = (((IData)(picorv32__DOT___00085_) 
                                         & (IData)(picorv32__DOT___00095_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00931_ = (((IData)(picorv32__DOT___00079_) 
                                         & (IData)(picorv32__DOT___00095_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00932_ = (((IData)(picorv32__DOT___00083_) 
                                         & (IData)(picorv32__DOT___00095_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00914_ = (((IData)(picorv32__DOT___00083_) 
                                         & (IData)(picorv32__DOT___00111_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00915_ = (((IData)(picorv32__DOT___00085_) 
                                         & (IData)(picorv32__DOT___00111_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00913_ = (((IData)(picorv32__DOT___00079_) 
                                         & (IData)(picorv32__DOT___00111_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00916_ = (((IData)(picorv32__DOT___00087_) 
                                         & (IData)(picorv32__DOT___00111_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00910_ = (((IData)(picorv32__DOT___00085_) 
                                         & (IData)(picorv32__DOT___00106_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00909_ = (((IData)(picorv32__DOT___00083_) 
                                         & (IData)(picorv32__DOT___00106_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00911_ = (((IData)(picorv32__DOT___00087_) 
                                         & (IData)(picorv32__DOT___00106_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00908_ = (((IData)(picorv32__DOT___00079_) 
                                         & (IData)(picorv32__DOT___00106_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00929_ = (((IData)(picorv32__DOT___00085_) 
                                         & (IData)(picorv32__DOT___00089_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00928_ = (((IData)(picorv32__DOT___00083_) 
                                         & (IData)(picorv32__DOT___00089_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00930_ = (((IData)(picorv32__DOT___00087_) 
                                         & (IData)(picorv32__DOT___00089_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00927_ = (((IData)(picorv32__DOT___00079_) 
                                         & (IData)(picorv32__DOT___00089_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00923_ = (((IData)(picorv32__DOT___00085_) 
                                         & (IData)(picorv32__DOT___00081_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00926_ = (((IData)(picorv32__DOT___00087_) 
                                         & (IData)(picorv32__DOT___00081_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00912_ = (((IData)(picorv32__DOT___00083_) 
                                         & (IData)(picorv32__DOT___00081_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
    vlSelfRef.picorv32__DOT___00901_ = (((IData)(picorv32__DOT___00079_) 
                                         & (IData)(picorv32__DOT___00081_)) 
                                        & (vlSelfRef.picorv32__DOT___00002_ 
                                           >> 0x1fU));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__22(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__22\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___00943_ = (((IData)((0U 
                                                  != (IData)(vlSelfRef.picorv32__DOT___00557_))) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.picorv32__DOT___00169_))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5324 
        = ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5585) 
             & (IData)(vlSelfRef.picorv32__DOT___00943_)) 
            << 1U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5584) 
                      & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5004 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5515) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__24(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__24\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___01017_ = (((8U & (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                  ? (IData)(vlSelfRef.picorv32__DOT__instr_jal)
                                                  : 
                                                 (~ (IData)(vlSelfRef.picorv32__DOT__decoder_trigger))) 
                                                << 3U)) 
                                         | (4U & ((
                                                   (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5882) 
                                                     | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_837)) 
                                                    | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_896))
                                                    ? 
                                                   ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4782) 
                                                    | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_896))
                                                    : 
                                                   ((IData)(vlSelfRef.picorv32__DOT___01017_) 
                                                    >> 1U)) 
                                                  << 2U))) 
                                        | ((((IData)(vlSelfRef.picorv32__DOT___01163_)
                                              ? ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5349) 
                                                 | (IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw))
                                              : (IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch)) 
                                            << 1U) 
                                           | ((1U & 
                                               (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                              && (IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_sequent__TOP__26(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_sequent__TOP__26\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((((0x10U & (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                ? ((IData)(vlSelfRef.picorv32__DOT___01012_) 
                                                   >> 7U)
                                                : ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                   >> 7U)) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                ? ((IData)(vlSelfRef.picorv32__DOT___01012_) 
                                                   >> 6U)
                                                : ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                   >> 6U)) 
                                              << 3U)) 
                                       | (4U & (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                  ? 
                                                 ((IData)(vlSelfRef.picorv32__DOT___01012_) 
                                                  >> 5U)
                                                  : 
                                                 ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                  >> 5U)) 
                                                << 2U)))) 
                                   | ((2U & (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                               ? ((IData)(vlSelfRef.picorv32__DOT___01012_) 
                                                  >> 4U)
                                               : ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                  >> 4U)) 
                                             << 1U)) 
                                      | (1U & ((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                ? ((IData)(vlSelfRef.picorv32__DOT___01012_) 
                                                   >> 3U)
                                                : ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                   >> 3U))))))) 
                  << 0x2bU) | (((QData)((IData)(((4U 
                                                  & (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                       ? 
                                                      ((IData)(vlSelfRef.picorv32__DOT___01012_) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                       >> 2U)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                          ? 
                                                         ((IData)(vlSelfRef.picorv32__DOT___01012_) 
                                                          >> 1U)
                                                          : 
                                                         ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                           ? (IData)(vlSelfRef.picorv32__DOT___01012_)
                                                           : (IData)(vlSelfRef.picorv32__DOT__cpu_state))))))) 
                                << 0x28U) | (((QData)((IData)(
                                                              ((IData)(vlSelfRef.picorv32__DOT___01164_) 
                                                               & (~ (IData)(vlSelfRef.picorv32__DOT___00677_))))) 
                                              << 0x27U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelfRef.picorv32__DOT___01164_) 
                                                                  & (IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)))) 
                                                 << 0x26U) 
                                                | (((QData)((IData)(
                                                                    ((2U 
                                                                      & (((IData)(vlSelfRef.picorv32__DOT___01164_)
                                                                           ? (IData)(
                                                                                (vlSelfRef.picorv32__DOT___01011_ 
                                                                                >> 3U))
                                                                           : (IData)(
                                                                                (vlSelfRef.picorv32__DOT___01006_ 
                                                                                >> 0x1bU))) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelfRef.picorv32__DOT___01164_)
                                                                            ? (IData)(vlSelfRef.picorv32__DOT__is_slli_srli_srai)
                                                                            : (IData)(
                                                                                (vlSelfRef.picorv32__DOT___01006_ 
                                                                                >> 0x1aU))))))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((~ (IData)(vlSelfRef.picorv32__DOT___01164_)) 
                                                                           & (IData)(
                                                                                (vlSelfRef.picorv32__DOT___01006_ 
                                                                                >> 0x19U)))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          ((IData)(vlSelfRef.picorv32__DOT___01164_) 
                                                                           & (IData)(
                                                                                (vlSelfRef.picorv32__DOT___01011_ 
                                                                                >> 0x10U))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((0x8000000U 
                                                                             & ((~ (IData)(vlSelfRef.picorv32__DOT___01163_)) 
                                                                                << 0x1bU)) 
                                                                            | ((((IData)(vlSelfRef.picorv32__DOT___01163_) 
                                                                                & (IData)(vlSelfRef.picorv32__DOT__is_sll_srl_sra)) 
                                                                                << 0x1aU) 
                                                                               | ((((IData)(vlSelfRef.picorv32__DOT___01163_) 
                                                                                & (IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw)) 
                                                                                << 0x19U) 
                                                                                | (((((0xff800000U 
                                                                                & (((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                                                << 0x17U) 
                                                                                & ((IData)(vlSelfRef.picorv32__DOT___01010_) 
                                                                                << 0x10U))) 
                                                                                | ((0x400000U 
                                                                                & (((~ (IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu)) 
                                                                                << 0x16U) 
                                                                                | (0xffc00000U 
                                                                                & ((IData)(vlSelfRef.picorv32__DOT___01010_) 
                                                                                << 0x10U)))) 
                                                                                | (0xffe00000U 
                                                                                & (((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                                                << 0x15U) 
                                                                                & ((IData)(vlSelfRef.picorv32__DOT___01010_) 
                                                                                << 0x10U))))) 
                                                                                | ((0x180000U 
                                                                                & (((- (IData)((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu))) 
                                                                                << 0x13U) 
                                                                                & ((IData)(vlSelfRef.picorv32__DOT___01010_) 
                                                                                << 0x10U))) 
                                                                                | (0xfffc0000U 
                                                                                & (((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                                                << 0x12U) 
                                                                                & ((IData)(vlSelfRef.picorv32__DOT___01010_) 
                                                                                << 0x10U))))) 
                                                                                | (((0x30000U 
                                                                                & (((- (IData)((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu))) 
                                                                                & (IData)(vlSelfRef.picorv32__DOT___01010_)) 
                                                                                << 0x10U)) 
                                                                                | (0xffff8000U 
                                                                                & (((IData)(vlSelfRef.picorv32__DOT___00184_) 
                                                                                << 0xfU) 
                                                                                & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                << 8U)))) 
                                                                                | ((0x4000U 
                                                                                & (((~ (IData)(vlSelfRef.picorv32__DOT___00184_)) 
                                                                                << 0xeU) 
                                                                                | (0xffffc000U 
                                                                                & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                << 8U)))) 
                                                                                | (0xffffe000U 
                                                                                & (((IData)(vlSelfRef.picorv32__DOT___00184_) 
                                                                                << 0xdU) 
                                                                                & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                << 8U)))))) 
                                                                                | ((((0x1800U 
                                                                                & (((- (IData)((IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                                                << 0xbU) 
                                                                                & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                << 8U))) 
                                                                                | (0xfffffc00U 
                                                                                & (((IData)(vlSelfRef.picorv32__DOT___00184_) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                << 8U)))) 
                                                                                | ((0x300U 
                                                                                & (((- (IData)((IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                                                & (IData)(vlSelfRef.picorv32__DOT__cpu_state)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((1U 
                                                                                & (IData)(vlSelfRef.picorv32__DOT___00693_))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.picorv32__DOT___01005_) 
                                                                                >> 7U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | (0x40U 
                                                                                & (((1U 
                                                                                & (IData)(vlSelfRef.picorv32__DOT___00693_))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.picorv32__DOT___01005_) 
                                                                                >> 6U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                >> 6U)) 
                                                                                << 6U))))) 
                                                                                | (((0x20U 
                                                                                & (((1U 
                                                                                & (IData)(vlSelfRef.picorv32__DOT___00693_))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.picorv32__DOT___01005_) 
                                                                                >> 5U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((1U 
                                                                                & (IData)(vlSelfRef.picorv32__DOT___00693_))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.picorv32__DOT___01005_) 
                                                                                >> 4U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | (8U 
                                                                                & (((1U 
                                                                                & (IData)(vlSelfRef.picorv32__DOT___00693_))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.picorv32__DOT___01005_) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                >> 3U)) 
                                                                                << 3U)))) 
                                                                                | ((4U 
                                                                                & (((1U 
                                                                                & (IData)(vlSelfRef.picorv32__DOT___00693_))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.picorv32__DOT___01005_) 
                                                                                >> 2U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((1U 
                                                                                & (IData)(vlSelfRef.picorv32__DOT___00693_))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.picorv32__DOT___01005_) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & (IData)(vlSelfRef.picorv32__DOT___00693_))
                                                                                 ? (IData)(vlSelfRef.picorv32__DOT___01005_)
                                                                                 : (IData)(vlSelfRef.picorv32__DOT__cpu_state))))))))))))))))))));
    vlSelfRef.picorv32__DOT___01006_ = __Vtemp_1;
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_comb__TOP__0(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___01570_ = ((IData)(vlSelfRef.picorv32__DOT___01545_) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 3U));
    vlSelfRef.picorv32__DOT___01540_ = (((IData)(vlSelfRef.picorv32__DOT___01546_) 
                                         & (IData)(vlSelfRef.picorv32__DOT___01545_)) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 3U));
    vlSelfRef.picorv32__DOT___01575_ = ((IData)(vlSelfRef.picorv32__DOT___01555_) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 0x17U));
    vlSelfRef.picorv32__DOT___01569_ = (((IData)(vlSelfRef.picorv32__DOT___01556_) 
                                         & (IData)(vlSelfRef.picorv32__DOT___01555_)) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 0x17U));
    vlSelfRef.picorv32__DOT___01572_ = ((IData)(vlSelfRef.picorv32__DOT___01549_) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 0xbU));
    vlSelfRef.picorv32__DOT___01574_ = ((IData)(vlSelfRef.picorv32__DOT___01553_) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 0x13U));
    vlSelfRef.picorv32__DOT___01571_ = ((IData)(vlSelfRef.picorv32__DOT___01547_) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 7U));
    vlSelfRef.picorv32__DOT___01573_ = ((IData)(vlSelfRef.picorv32__DOT___01551_) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 0xfU));
    vlSelfRef.picorv32__DOT___01567_ = ((IData)(vlSelfRef.picorv32__DOT___01559_) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 7U));
    vlSelfRef.picorv32__DOT___01543_ = (((IData)(vlSelfRef.picorv32__DOT___01560_) 
                                         & (IData)(vlSelfRef.picorv32__DOT___01559_)) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 7U));
    vlSelfRef.picorv32__DOT___01568_ = ((IData)(vlSelfRef.picorv32__DOT___01561_) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 0xfU));
    vlSelfRef.picorv32__DOT___01566_ = (((IData)(vlSelfRef.picorv32__DOT___01562_) 
                                         & (IData)(vlSelfRef.picorv32__DOT___01561_)) 
                                        & (vlSelfRef.picorv32__DOT___01135_ 
                                           >> 0xfU));
    vlSelfRef.picorv32__DOT___01603_ = (1U & ((vlSelfRef.picorv32__DOT___01137_ 
                                               >> 0x19U) 
                                              | ((vlSelfRef.picorv32__DOT___01136_ 
                                                  >> 0x19U) 
                                                 & (vlSelfRef.picorv32__DOT___01137_ 
                                                    >> 0x18U))));
    vlSelfRef.picorv32__DOT___01601_ = (1U & ((vlSelfRef.picorv32__DOT___01137_ 
                                               >> 0x15U) 
                                              | ((vlSelfRef.picorv32__DOT___01136_ 
                                                  >> 0x15U) 
                                                 & (vlSelfRef.picorv32__DOT___01137_ 
                                                    >> 0x14U))));
    vlSelfRef.picorv32__DOT___01597_ = (1U & ((vlSelfRef.picorv32__DOT___01137_ 
                                               >> 0xdU) 
                                              | ((vlSelfRef.picorv32__DOT___01136_ 
                                                  >> 0xdU) 
                                                 & (vlSelfRef.picorv32__DOT___01137_ 
                                                    >> 0xcU))));
    vlSelfRef.picorv32__DOT___01593_ = (1U & ((vlSelfRef.picorv32__DOT___01137_ 
                                               >> 5U) 
                                              | ((vlSelfRef.picorv32__DOT___01136_ 
                                                  >> 5U) 
                                                 & (vlSelfRef.picorv32__DOT___01137_ 
                                                    >> 4U))));
    vlSelfRef.picorv32__DOT___01599_ = (1U & ((vlSelfRef.picorv32__DOT___01137_ 
                                               >> 0x11U) 
                                              | ((vlSelfRef.picorv32__DOT___01136_ 
                                                  >> 0x11U) 
                                                 & (vlSelfRef.picorv32__DOT___01137_ 
                                                    >> 0x10U))));
    vlSelfRef.picorv32__DOT___01595_ = (1U & ((vlSelfRef.picorv32__DOT___01137_ 
                                               >> 9U) 
                                              | ((vlSelfRef.picorv32__DOT___01136_ 
                                                  >> 9U) 
                                                 & (vlSelfRef.picorv32__DOT___01137_ 
                                                    >> 8U))));
    vlSelfRef.picorv32__DOT___01609_ = (1U & (((vlSelfRef.picorv32__DOT___01137_ 
                                                >> 0x13U) 
                                               | ((vlSelfRef.picorv32__DOT___01136_ 
                                                   >> 0x13U) 
                                                  & (vlSelfRef.picorv32__DOT___01137_ 
                                                     >> 0x12U))) 
                                              | ((IData)(vlSelfRef.picorv32__DOT___01552_) 
                                                 & (IData)(vlSelfRef.picorv32__DOT___01599_))));
    vlSelfRef.picorv32__DOT___01607_ = (1U & (((vlSelfRef.picorv32__DOT___01137_ 
                                                >> 0xbU) 
                                               | ((vlSelfRef.picorv32__DOT___01136_ 
                                                   >> 0xbU) 
                                                  & (vlSelfRef.picorv32__DOT___01137_ 
                                                     >> 0xaU))) 
                                              | ((IData)(vlSelfRef.picorv32__DOT___01548_) 
                                                 & (IData)(vlSelfRef.picorv32__DOT___01595_))));
    vlSelfRef.picorv32__DOT___01135_ = ((0x80000000U 
                                         & vlSelfRef.picorv32__DOT___01135_) 
                                        | ((((((0x40000000U 
                                                & ((0xc0000000U 
                                                    & vlSelfRef.picorv32__DOT___01137_) 
                                                   | ((IData)(vlSelfRef.picorv32__DOT___01591_) 
                                                      << 0x1eU))) 
                                               | (0x20000000U 
                                                  & ((0xe0000000U 
                                                      & (vlSelfRef.picorv32__DOT___01137_ 
                                                         | (vlSelfRef.picorv32__DOT___01136_ 
                                                            & (vlSelfRef.picorv32__DOT___01137_ 
                                                               << 1U)))) 
                                                     | ((IData)(vlSelfRef.picorv32__DOT___01576_) 
                                                        << 0x1dU)))) 
                                              | ((0x10000000U 
                                                  & ((0xf0000000U 
                                                      & vlSelfRef.picorv32__DOT___01137_) 
                                                     | ((IData)(vlSelfRef.picorv32__DOT___01590_) 
                                                        << 0x1cU))) 
                                                 | (0x8000000U 
                                                    & (((0xf8000000U 
                                                         & (vlSelfRef.picorv32__DOT___01137_ 
                                                            | (vlSelfRef.picorv32__DOT___01136_ 
                                                               & (vlSelfRef.picorv32__DOT___01137_ 
                                                                  << 1U)))) 
                                                        | (((IData)(vlSelfRef.picorv32__DOT___01556_) 
                                                            & (IData)(vlSelfRef.picorv32__DOT___01603_)) 
                                                           << 0x1bU)) 
                                                       | ((IData)(vlSelfRef.picorv32__DOT___01569_) 
                                                          << 0x1bU))))) 
                                             | (((0x4000000U 
                                                  & ((0xfc000000U 
                                                      & vlSelfRef.picorv32__DOT___01137_) 
                                                     | ((IData)(vlSelfRef.picorv32__DOT___01589_) 
                                                        << 0x1aU))) 
                                                 | (((IData)(vlSelfRef.picorv32__DOT___01603_) 
                                                     | (IData)(vlSelfRef.picorv32__DOT___01575_)) 
                                                    << 0x19U)) 
                                                | ((0x1000000U 
                                                    & ((0xff000000U 
                                                        & vlSelfRef.picorv32__DOT___01137_) 
                                                       | ((IData)(vlSelfRef.picorv32__DOT___01588_) 
                                                          << 0x18U))) 
                                                   | (0x800000U 
                                                      & ((((0xff800000U 
                                                            & (vlSelfRef.picorv32__DOT___01137_ 
                                                               | (vlSelfRef.picorv32__DOT___01136_ 
                                                                  & (vlSelfRef.picorv32__DOT___01137_ 
                                                                     << 1U)))) 
                                                           | (((IData)(vlSelfRef.picorv32__DOT___01554_) 
                                                               & (IData)(vlSelfRef.picorv32__DOT___01601_)) 
                                                              << 0x17U)) 
                                                          | (((IData)(vlSelfRef.picorv32__DOT___01562_) 
                                                              & (IData)(vlSelfRef.picorv32__DOT___01609_)) 
                                                             << 0x17U)) 
                                                         | ((IData)(vlSelfRef.picorv32__DOT___01566_) 
                                                            << 0x17U)))))) 
                                            | ((((0x400000U 
                                                  & ((0xffc00000U 
                                                      & vlSelfRef.picorv32__DOT___01137_) 
                                                     | ((IData)(vlSelfRef.picorv32__DOT___01587_) 
                                                        << 0x16U))) 
                                                 | (((IData)(vlSelfRef.picorv32__DOT___01601_) 
                                                     | (IData)(vlSelfRef.picorv32__DOT___01574_)) 
                                                    << 0x15U)) 
                                                | ((0x100000U 
                                                    & ((0xfff00000U 
                                                        & vlSelfRef.picorv32__DOT___01137_) 
                                                       | ((IData)(vlSelfRef.picorv32__DOT___01586_) 
                                                          << 0x14U))) 
                                                   | (((IData)(vlSelfRef.picorv32__DOT___01609_) 
                                                       | (IData)(vlSelfRef.picorv32__DOT___01568_)) 
                                                      << 0x13U))) 
                                               | (((0x40000U 
                                                    & ((0xfffc0000U 
                                                        & vlSelfRef.picorv32__DOT___01137_) 
                                                       | ((IData)(vlSelfRef.picorv32__DOT___01585_) 
                                                          << 0x12U))) 
                                                   | (((IData)(vlSelfRef.picorv32__DOT___01599_) 
                                                       | (IData)(vlSelfRef.picorv32__DOT___01573_)) 
                                                      << 0x11U)) 
                                                  | ((0x10000U 
                                                      & ((0xffff0000U 
                                                          & vlSelfRef.picorv32__DOT___01137_) 
                                                         | ((IData)(vlSelfRef.picorv32__DOT___01584_) 
                                                            << 0x10U))) 
                                                     | (0x8000U 
                                                        & ((((0xffff8000U 
                                                              & (vlSelfRef.picorv32__DOT___01137_ 
                                                                 | (vlSelfRef.picorv32__DOT___01136_ 
                                                                    & (vlSelfRef.picorv32__DOT___01137_ 
                                                                       << 1U)))) 
                                                             | (((IData)(vlSelfRef.picorv32__DOT___01550_) 
                                                                 & (IData)(vlSelfRef.picorv32__DOT___01597_)) 
                                                                << 0xfU)) 
                                                            | (((IData)(vlSelfRef.picorv32__DOT___01560_) 
                                                                & (IData)(vlSelfRef.picorv32__DOT___01607_)) 
                                                               << 0xfU)) 
                                                           | ((IData)(vlSelfRef.picorv32__DOT___01543_) 
                                                              << 0xfU))))))) 
                                           | (((((0x4000U 
                                                  & ((0xffffc000U 
                                                      & vlSelfRef.picorv32__DOT___01137_) 
                                                     | ((IData)(vlSelfRef.picorv32__DOT___01583_) 
                                                        << 0xeU))) 
                                                 | (((IData)(vlSelfRef.picorv32__DOT___01597_) 
                                                     | (IData)(vlSelfRef.picorv32__DOT___01572_)) 
                                                    << 0xdU)) 
                                                | ((0x1000U 
                                                    & ((0xfffff000U 
                                                        & vlSelfRef.picorv32__DOT___01137_) 
                                                       | ((IData)(vlSelfRef.picorv32__DOT___01582_) 
                                                          << 0xcU))) 
                                                   | (((IData)(vlSelfRef.picorv32__DOT___01607_) 
                                                       | (IData)(vlSelfRef.picorv32__DOT___01567_)) 
                                                      << 0xbU))) 
                                               | (((0x400U 
                                                    & ((0xfffffc00U 
                                                        & vlSelfRef.picorv32__DOT___01137_) 
                                                       | ((IData)(vlSelfRef.picorv32__DOT___01581_) 
                                                          << 0xaU))) 
                                                   | (((IData)(vlSelfRef.picorv32__DOT___01595_) 
                                                       | (IData)(vlSelfRef.picorv32__DOT___01571_)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((0xffffff00U 
                                                          & vlSelfRef.picorv32__DOT___01137_) 
                                                         | ((IData)(vlSelfRef.picorv32__DOT___01580_) 
                                                            << 8U))) 
                                                     | (0x80U 
                                                        & (((0xffffff80U 
                                                             & (vlSelfRef.picorv32__DOT___01137_ 
                                                                | (vlSelfRef.picorv32__DOT___01136_ 
                                                                   & (vlSelfRef.picorv32__DOT___01137_ 
                                                                      << 1U)))) 
                                                            | (((IData)(vlSelfRef.picorv32__DOT___01546_) 
                                                                & (IData)(vlSelfRef.picorv32__DOT___01593_)) 
                                                               << 7U)) 
                                                           | ((IData)(vlSelfRef.picorv32__DOT___01540_) 
                                                              << 7U)))))) 
                                              | ((((0x40U 
                                                    & ((0xffffffc0U 
                                                        & vlSelfRef.picorv32__DOT___01137_) 
                                                       | ((IData)(vlSelfRef.picorv32__DOT___01579_) 
                                                          << 6U))) 
                                                   | (((IData)(vlSelfRef.picorv32__DOT___01593_) 
                                                       | (IData)(vlSelfRef.picorv32__DOT___01570_)) 
                                                      << 5U)) 
                                                  | ((0x10U 
                                                      & ((0xfffffff0U 
                                                          & vlSelfRef.picorv32__DOT___01137_) 
                                                         | ((IData)(vlSelfRef.picorv32__DOT___01578_) 
                                                            << 4U))) 
                                                     | (8U 
                                                        & ((0xfffffff8U 
                                                            & (vlSelfRef.picorv32__DOT___01137_ 
                                                               | (vlSelfRef.picorv32__DOT___01136_ 
                                                                  & (vlSelfRef.picorv32__DOT___01137_ 
                                                                     << 1U)))) 
                                                           | ((IData)(vlSelfRef.picorv32__DOT___01533_) 
                                                              << 3U))))) 
                                                 | ((4U 
                                                     & ((0xfffffffcU 
                                                         & vlSelfRef.picorv32__DOT___01137_) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT___01577_) 
                                                           << 2U))) 
                                                    | ((2U 
                                                        & ((0xfffffffeU 
                                                            & vlSelfRef.picorv32__DOT___01137_) 
                                                           | ((IData)(vlSelfRef.picorv32__DOT___01518_) 
                                                              << 1U))) 
                                                       | (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_next_pc 
                                                             & vlSelfRef.picorv32__DOT__decoded_imm))))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_comb__TOP__1(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ picorv32__DOT___01073_;
    VL_ZERO_W(160, picorv32__DOT___01073_);
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_607;
    picorv32__DOT____VdfgRegularize_h2364b514_0_607 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_609;
    picorv32__DOT____VdfgRegularize_h2364b514_0_609 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_610;
    picorv32__DOT____VdfgRegularize_h2364b514_0_610 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_611;
    picorv32__DOT____VdfgRegularize_h2364b514_0_611 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_612;
    picorv32__DOT____VdfgRegularize_h2364b514_0_612 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_613;
    picorv32__DOT____VdfgRegularize_h2364b514_0_613 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_614;
    picorv32__DOT____VdfgRegularize_h2364b514_0_614 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_615;
    picorv32__DOT____VdfgRegularize_h2364b514_0_615 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_616;
    picorv32__DOT____VdfgRegularize_h2364b514_0_616 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_617;
    picorv32__DOT____VdfgRegularize_h2364b514_0_617 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_618;
    picorv32__DOT____VdfgRegularize_h2364b514_0_618 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_619;
    picorv32__DOT____VdfgRegularize_h2364b514_0_619 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_620;
    picorv32__DOT____VdfgRegularize_h2364b514_0_620 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_621;
    picorv32__DOT____VdfgRegularize_h2364b514_0_621 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_622;
    picorv32__DOT____VdfgRegularize_h2364b514_0_622 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_623;
    picorv32__DOT____VdfgRegularize_h2364b514_0_623 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_624;
    picorv32__DOT____VdfgRegularize_h2364b514_0_624 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_625;
    picorv32__DOT____VdfgRegularize_h2364b514_0_625 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_626;
    picorv32__DOT____VdfgRegularize_h2364b514_0_626 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_628;
    picorv32__DOT____VdfgRegularize_h2364b514_0_628 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_629;
    picorv32__DOT____VdfgRegularize_h2364b514_0_629 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_630;
    picorv32__DOT____VdfgRegularize_h2364b514_0_630 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_631;
    picorv32__DOT____VdfgRegularize_h2364b514_0_631 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_633;
    picorv32__DOT____VdfgRegularize_h2364b514_0_633 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_635;
    picorv32__DOT____VdfgRegularize_h2364b514_0_635 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_637;
    picorv32__DOT____VdfgRegularize_h2364b514_0_637 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_639;
    picorv32__DOT____VdfgRegularize_h2364b514_0_639 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_641;
    picorv32__DOT____VdfgRegularize_h2364b514_0_641 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_643;
    picorv32__DOT____VdfgRegularize_h2364b514_0_643 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_645;
    picorv32__DOT____VdfgRegularize_h2364b514_0_645 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_647;
    picorv32__DOT____VdfgRegularize_h2364b514_0_647 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_649;
    picorv32__DOT____VdfgRegularize_h2364b514_0_649 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_651;
    picorv32__DOT____VdfgRegularize_h2364b514_0_651 = 0;
    // Body
    picorv32__DOT___01073_[0U] = ((0x80000000U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                  & ((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw) 
                                                     << 0x1fU))) 
                                  | ((vlSelfRef.picorv32__DOT____Vconcswap_1_hb564ee16__0 
                                      << 0xbU) | ((
                                                   ((0x600U 
                                                     & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                         >> 0x14U) 
                                                        & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw))) 
                                                           << 9U))) 
                                                    | (0xf00U 
                                                       & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                           >> 0x14U) 
                                                          & ((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw) 
                                                             << 8U)))) 
                                                   | ((0xc0U 
                                                       & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                           >> 0x14U) 
                                                          & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw))) 
                                                             << 6U))) 
                                                      | (0xfe0U 
                                                         & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                             >> 0x14U) 
                                                            & ((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw) 
                                                               << 5U))))) 
                                                  | ((0x18U 
                                                      & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                          >> 7U) 
                                                         & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw))) 
                                                            << 3U))) 
                                                     | ((0x1fffffcU 
                                                         & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                             >> 7U) 
                                                            & ((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw) 
                                                               << 2U))) 
                                                        | (3U 
                                                           & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                               >> 7U) 
                                                              & (- (IData)((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw))))))))));
    picorv32__DOT___01073_[1U] = ((0x80000000U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                  & ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                     << 0x1fU))) 
                                  | ((0x7ffff000U & 
                                      ((IData)((vlSelfRef.picorv32__DOT____Vconcswap_1_h408d728f__0 
                                                >> 1U)) 
                                       << 0xcU)) | 
                                     ((((0xfffff800U 
                                         & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                             << 4U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                               << 0xbU))) 
                                        | (0x600U & 
                                           ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                             >> 0x14U) 
                                            & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu))) 
                                               << 9U)))) 
                                       | ((0xf00U & 
                                           ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                             >> 0x14U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                               << 8U))) 
                                          | (0xc0U 
                                             & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                 >> 0x14U) 
                                                & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu))) 
                                                   << 6U))))) 
                                      | (((0xfe0U & 
                                           ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                             >> 0x14U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                               << 5U))) 
                                          | ((0x1fffff0U 
                                              & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                  >> 7U) 
                                                 & ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                    << 4U))) 
                                             | (0x1fffff8U 
                                                & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                    >> 7U) 
                                                   & ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                      << 3U))))) 
                                         | ((6U & (
                                                   (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                    >> 7U) 
                                                   & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu))) 
                                                      << 1U))) 
                                            | (1U & (IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_h408d728f__0)))))));
    picorv32__DOT___01073_[2U] = ((((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                     >> 0x1fU) & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                  >> 2U)) 
                                   << 0x1fU) | ((0x7ffff800U 
                                                 & ((IData)(
                                                            (vlSelfRef.picorv32__DOT____Vconcswap_1_h408d728f__0 
                                                             >> 0x14U)) 
                                                    << 0xbU)) 
                                                | ((((0x400U 
                                                      & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                          >> 0x14U) 
                                                         & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                            << 8U))) 
                                                     | ((0x200U 
                                                         & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                             >> 0x14U) 
                                                            & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                               << 7U))) 
                                                        | (0x100U 
                                                           & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                               >> 0x14U) 
                                                              & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                                 << 6U))))) 
                                                    | ((0x80U 
                                                        & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                            >> 0x14U) 
                                                           & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                              << 5U))) 
                                                       | ((0x40U 
                                                           & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                               >> 0x14U) 
                                                              & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                                 << 4U))) 
                                                          | (0x20U 
                                                             & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                 >> 0x14U) 
                                                                & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                                   << 3U)))))) 
                                                   | (((0x10U 
                                                        & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                            >> 0x14U) 
                                                           & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                              << 2U))) 
                                                       | ((8U 
                                                           & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                               >> 0x14U) 
                                                              & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                                 << 1U))) 
                                                          | (4U 
                                                             & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                 >> 0x14U) 
                                                                & (IData)(vlSelfRef.picorv32__DOT___01074_))))) 
                                                      | ((2U 
                                                          & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                              >> 0x14U) 
                                                             & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                                >> 1U))) 
                                                         | (1U 
                                                            & ((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                >> 0x14U) 
                                                               & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                                  >> 2U))))))));
    picorv32__DOT___01073_[3U] = ((((((((vlSelfRef.picorv32__DOT__mem_rdata_q 
                                         >> 0x1fU) 
                                        & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                           >> 3U)) 
                                       << 0x1fU) | 
                                      (0x40000000U 
                                       & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                             << 0x1bU)))) 
                                     | ((0x20000000U 
                                         & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                               << 0x1aU))) 
                                        | (0x10000000U 
                                           & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                 << 0x19U))))) 
                                    | (((0x8000000U 
                                         & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                               << 0x18U))) 
                                        | (0x4000000U 
                                           & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                 << 0x17U)))) 
                                       | ((0x2000000U 
                                           & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                 << 0x16U))) 
                                          | (0x1000000U 
                                             & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                   << 0x15U)))))) 
                                   | ((((0x800000U 
                                         & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                               << 0x14U))) 
                                        | (0x400000U 
                                           & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                 << 0x13U)))) 
                                       | ((0x200000U 
                                           & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                 << 0x12U))) 
                                          | (0x100000U 
                                             & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                   << 0x11U))))) 
                                      | (((0x80000U 
                                           & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                 << 0x10U))) 
                                          | (0x40000U 
                                             & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                   << 0xfU)))) 
                                         | ((0x20000U 
                                             & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                   << 0xeU))) 
                                            | (0x10000U 
                                               & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                  & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                     << 0xdU))))))) 
                                  | (((0x8000U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                  & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                     << 0xcU))) 
                                      | (0x4000U & 
                                         (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                             << 0xbU)))) 
                                     | ((0x2000U & 
                                         (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                             << 0xaU))) 
                                        | ((0x1000U 
                                            & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                               & ((IData)(vlSelfRef.picorv32__DOT___01074_) 
                                                  << 9U))) 
                                           | (0xfffU 
                                              & (IData)(
                                                        (vlSelfRef.picorv32__DOT____Vconcswap_1_h408d728f__0 
                                                         >> 0x28U)))))));
    picorv32__DOT___01073_[4U] = (((0x80000000U & (
                                                   (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                    << 1U) 
                                                   & ((IData)(vlSelfRef.picorv32__DOT__instr_jal) 
                                                      << 0x1fU))) 
                                   | ((0x7ff00000U 
                                       & ((IData)((vlSelfRef.picorv32__DOT____Vconcswap_1_h408d728f__0 
                                                   >> 0x35U)) 
                                          << 0x14U)) 
                                      | ((0xc0000U 
                                          & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                             & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__instr_jal))) 
                                                << 0x12U))) 
                                         | (0xfffe0000U 
                                            & (((IData)(vlSelfRef.picorv32__DOT__decoded_rs1) 
                                                << 0xfU) 
                                               & ((IData)(vlSelfRef.picorv32__DOT__instr_jal) 
                                                  << 0x11U)))))) 
                                  | ((((0x18000U & 
                                        (((IData)(vlSelfRef.picorv32__DOT__decoded_rs1) 
                                          & (- (IData)((IData)(vlSelfRef.picorv32__DOT__instr_jal)))) 
                                         << 0xfU)) 
                                       | (0xffffc000U 
                                          & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                             & ((IData)(vlSelfRef.picorv32__DOT__instr_jal) 
                                                << 0xeU)))) 
                                      | ((0x3000U & 
                                          (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                           & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__instr_jal))) 
                                              << 0xcU))) 
                                         | ((((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                                              & (IData)(vlSelfRef.picorv32__DOT__instr_jal)) 
                                             << 0xbU) 
                                            | (0x600U 
                                               & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                  & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__instr_jal))) 
                                                     << 9U)))))) 
                                     | (((0x180U & 
                                          (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                           & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__instr_jal))) 
                                              << 7U))) 
                                         | ((0xffffffc0U 
                                             & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                & ((IData)(vlSelfRef.picorv32__DOT__instr_jal) 
                                                   << 6U))) 
                                            | (0x30U 
                                               & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                  & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__instr_jal))) 
                                                     << 4U))))) 
                                        | ((0xfffffff8U 
                                            & ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                                               & ((IData)(vlSelfRef.picorv32__DOT__instr_jal) 
                                                  << 3U))) 
                                           | ((6U & 
                                               ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                                                & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__instr_jal))) 
                                                   << 1U))) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelfRef.picorv32__DOT____Vconcswap_1_h408d728f__0 
                                                            >> 0x34U))))))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h408d728f__0 
        = (((QData)((IData)(((((0x80000000U & picorv32__DOT___01073_[4U]) 
                               | ((0x40000000U & (picorv32__DOT___01073_[4U] 
                                                  >> 1U)) 
                                  | (0x20000000U & 
                                     (picorv32__DOT___01073_[4U] 
                                      >> 2U)))) | (
                                                   (0x10000000U 
                                                    & (picorv32__DOT___01073_[4U] 
                                                       >> 3U)) 
                                                   | ((0x8000000U 
                                                       & (picorv32__DOT___01073_[4U] 
                                                          >> 4U)) 
                                                      | (0x4000000U 
                                                         & (picorv32__DOT___01073_[4U] 
                                                            >> 5U))))) 
                             | (((0x2000000U & (picorv32__DOT___01073_[4U] 
                                                >> 6U)) 
                                 | ((0x1000000U & (
                                                   picorv32__DOT___01073_[4U] 
                                                   >> 7U)) 
                                    | (0x800000U & 
                                       (picorv32__DOT___01073_[4U] 
                                        >> 8U)))) | 
                                ((0x400000U & (picorv32__DOT___01073_[4U] 
                                               >> 9U)) 
                                 | ((0x200000U & (picorv32__DOT___01073_[4U] 
                                                  >> 0xaU)) 
                                    | ((((0x80U & (
                                                   picorv32__DOT___01073_[2U] 
                                                   >> 0x18U)) 
                                         | (0x40U & 
                                            (picorv32__DOT___01073_[2U] 
                                             >> 0x19U))) 
                                        | ((0x20U & 
                                            (picorv32__DOT___01073_[2U] 
                                             >> 0x1aU)) 
                                           | (0x10U 
                                              & (picorv32__DOT___01073_[2U] 
                                                 >> 0x1bU)))) 
                                       | (((8U & (picorv32__DOT___01073_[2U] 
                                                  >> 0x1cU)) 
                                           | (4U & 
                                              (picorv32__DOT___01073_[2U] 
                                               >> 0x1dU))) 
                                          | ((2U & 
                                              (picorv32__DOT___01073_[2U] 
                                               >> 0x1eU)) 
                                             | (picorv32__DOT___01073_[2U] 
                                                >> 0x1fU)))))))))) 
            << 0x20U) | (QData)((IData)(((((((0x80000000U 
                                              & picorv32__DOT___01073_[2U]) 
                                             | (0x40000000U 
                                                & (picorv32__DOT___01073_[2U] 
                                                   >> 1U))) 
                                            | ((0x20000000U 
                                                & (picorv32__DOT___01073_[2U] 
                                                   >> 2U)) 
                                               | (0x10000000U 
                                                  & (picorv32__DOT___01073_[2U] 
                                                     >> 3U)))) 
                                           | (((0x8000000U 
                                                & (picorv32__DOT___01073_[2U] 
                                                   >> 4U)) 
                                               | (0x4000000U 
                                                  & (picorv32__DOT___01073_[2U] 
                                                     >> 5U))) 
                                              | ((0x2000000U 
                                                  & (picorv32__DOT___01073_[2U] 
                                                     >> 6U)) 
                                                 | (0x1000000U 
                                                    & (picorv32__DOT___01073_[2U] 
                                                       >> 7U))))) 
                                          | ((((0x800000U 
                                                & (picorv32__DOT___01073_[2U] 
                                                   >> 8U)) 
                                               | (0x400000U 
                                                  & (picorv32__DOT___01073_[2U] 
                                                     >> 9U))) 
                                              | ((0x200000U 
                                                  & (picorv32__DOT___01073_[2U] 
                                                     >> 0xaU)) 
                                                 | (0x100000U 
                                                    & (picorv32__DOT___01073_[2U] 
                                                       >> 0xbU)))) 
                                             | (((0x80000U 
                                                  & (picorv32__DOT___01073_[1U] 
                                                     >> 0xcU)) 
                                                 | (0x40000U 
                                                    & (picorv32__DOT___01073_[1U] 
                                                       >> 0xdU))) 
                                                | ((0x20000U 
                                                    & (picorv32__DOT___01073_[1U] 
                                                       >> 0xeU)) 
                                                   | (0x10000U 
                                                      & (picorv32__DOT___01073_[1U] 
                                                         >> 0xfU)))))) 
                                         | (((((0x8000U 
                                                & (picorv32__DOT___01073_[1U] 
                                                   >> 0x10U)) 
                                               | (0x4000U 
                                                  & (picorv32__DOT___01073_[1U] 
                                                     >> 0x11U))) 
                                              | ((0x2000U 
                                                  & (picorv32__DOT___01073_[1U] 
                                                     >> 0x12U)) 
                                                 | (0x1000U 
                                                    & (picorv32__DOT___01073_[1U] 
                                                       >> 0x13U)))) 
                                             | (((0x800U 
                                                  & (picorv32__DOT___01073_[1U] 
                                                     >> 0x14U)) 
                                                 | (0x400U 
                                                    & (picorv32__DOT___01073_[1U] 
                                                       >> 0x15U))) 
                                                | ((0x200U 
                                                    & (picorv32__DOT___01073_[1U] 
                                                       >> 0x16U)) 
                                                   | (0x100U 
                                                      & (picorv32__DOT___01073_[1U] 
                                                         >> 0x17U))))) 
                                            | ((((0x80U 
                                                  & (picorv32__DOT___01073_[1U] 
                                                     >> 0x18U)) 
                                                 | (0x40U 
                                                    & (picorv32__DOT___01073_[1U] 
                                                       >> 0x19U))) 
                                                | ((0x20U 
                                                    & (picorv32__DOT___01073_[1U] 
                                                       >> 0x1aU)) 
                                                   | (0x10U 
                                                      & (picorv32__DOT___01073_[1U] 
                                                         >> 0x1bU)))) 
                                               | (((8U 
                                                    & (picorv32__DOT___01073_[1U] 
                                                       >> 0x1cU)) 
                                                   | (4U 
                                                      & (picorv32__DOT___01073_[1U] 
                                                         >> 0x1dU))) 
                                                  | (2U 
                                                     & (picorv32__DOT___01073_[1U] 
                                                        >> 0x1eU)))))))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_hb564ee16__0 
        = (((((0x80000U & (picorv32__DOT___01073_[0U] 
                           >> 0xcU)) | ((0x40000U & 
                                         (picorv32__DOT___01073_[0U] 
                                          >> 0xdU)) 
                                        | (0x20000U 
                                           & (picorv32__DOT___01073_[0U] 
                                              >> 0xeU)))) 
             | ((0x10000U & (picorv32__DOT___01073_[0U] 
                             >> 0xfU)) | (0x8000U & 
                                          (picorv32__DOT___01073_[0U] 
                                           >> 0x10U)))) 
            | (((0x4000U & (picorv32__DOT___01073_[0U] 
                            >> 0x11U)) | ((0x2000U 
                                           & (picorv32__DOT___01073_[0U] 
                                              >> 0x12U)) 
                                          | (0x1000U 
                                             & (picorv32__DOT___01073_[0U] 
                                                >> 0x13U)))) 
               | ((0x800U & (picorv32__DOT___01073_[0U] 
                             >> 0x14U)) | (0x400U & 
                                           (picorv32__DOT___01073_[0U] 
                                            >> 0x15U))))) 
           | ((((0x200U & (picorv32__DOT___01073_[0U] 
                           >> 0x16U)) | ((0x100U & 
                                          (picorv32__DOT___01073_[0U] 
                                           >> 0x17U)) 
                                         | (0x80U & 
                                            (picorv32__DOT___01073_[0U] 
                                             >> 0x18U)))) 
               | ((0x40U & (picorv32__DOT___01073_[0U] 
                            >> 0x19U)) | (0x20U & (
                                                   picorv32__DOT___01073_[0U] 
                                                   >> 0x1aU)))) 
              | (((0x10U & (picorv32__DOT___01073_[0U] 
                            >> 0x1bU)) | ((8U & (picorv32__DOT___01073_[0U] 
                                                 >> 0x1cU)) 
                                          | (4U & (
                                                   picorv32__DOT___01073_[0U] 
                                                   >> 0x1dU)))) 
                 | ((2U & (picorv32__DOT___01073_[0U] 
                           >> 0x1eU)) | (picorv32__DOT___01073_[0U] 
                                         >> 0x1fU)))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_607 
        = ((picorv32__DOT___01073_[2U] | picorv32__DOT___01073_[3U]) 
           >> 0x1fU);
    picorv32__DOT____VdfgRegularize_h2364b514_0_628 
        = ((picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[1U]) 
           >> 0x1fU);
    picorv32__DOT____VdfgRegularize_h2364b514_0_609 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x1eU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_610 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x1dU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_611 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x1cU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_612 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x1bU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_613 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x1aU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_614 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x19U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_615 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x18U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_616 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x17U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_617 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x16U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_618 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x15U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_619 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x14U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_620 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x13U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_621 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x12U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_622 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x11U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_623 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0x10U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_624 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0xfU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_625 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0xeU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_626 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0xdU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_629 
        = (1U & ((picorv32__DOT___01073_[2U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[3U] >> 0xcU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_630 
        = (1U & ((picorv32__DOT___01073_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01073_[1U] >> 0xbU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_631 
        = (1U & ((picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[1U]) 
                 >> 0xaU));
    picorv32__DOT____VdfgRegularize_h2364b514_0_633 
        = (1U & ((picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[1U]) 
                 >> 9U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_635 
        = (1U & ((picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[1U]) 
                 >> 8U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_637 
        = (1U & ((picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[1U]) 
                 >> 7U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_639 
        = (1U & ((picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[1U]) 
                 >> 6U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_641 
        = (1U & ((picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[1U]) 
                 >> 5U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_643 
        = (1U & ((picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[1U]) 
                 >> 4U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_645 
        = (1U & ((picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[1U]) 
                 >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_647 
        = (1U & ((picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[1U]) 
                 >> 2U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_649 
        = (1U & ((picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[1U]) 
                 >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_651 
        = (1U & (picorv32__DOT___01073_[0U] | picorv32__DOT___01073_[2U]));
    vlSelfRef.picorv32__DOT___01075_ = ((0xfffffffeU 
                                         & vlSelfRef.picorv32__DOT___01075_) 
                                        | ((IData)(vlSelfRef.picorv32__DOT___01174_) 
                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_651)));
    vlSelfRef.picorv32__DOT___01076_ = (((((((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                               | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_607)) 
                                              << 0x1fU) 
                                             | (0x80000000U 
                                                & picorv32__DOT___01073_[4U])) 
                                            | ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                 | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_609)) 
                                                << 0x1eU) 
                                               | (0x40000000U 
                                                  & (picorv32__DOT___01073_[4U] 
                                                     >> 1U)))) 
                                           | (((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                 | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_610)) 
                                                << 0x1dU) 
                                               | (0x20000000U 
                                                  & (picorv32__DOT___01073_[4U] 
                                                     >> 2U))) 
                                              | ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                   | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_611)) 
                                                  << 0x1cU) 
                                                 | (0x10000000U 
                                                    & (picorv32__DOT___01073_[4U] 
                                                       >> 3U))))) 
                                          | ((((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                 | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_612)) 
                                                << 0x1bU) 
                                               | (0x8000000U 
                                                  & (picorv32__DOT___01073_[4U] 
                                                     >> 4U))) 
                                              | ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                   | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_613)) 
                                                  << 0x1aU) 
                                                 | (0x4000000U 
                                                    & (picorv32__DOT___01073_[4U] 
                                                       >> 5U)))) 
                                             | (((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                   | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_614)) 
                                                  << 0x19U) 
                                                 | (0x2000000U 
                                                    & (picorv32__DOT___01073_[4U] 
                                                       >> 6U))) 
                                                | ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                     | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_615)) 
                                                    << 0x18U) 
                                                   | (0x1000000U 
                                                      & (picorv32__DOT___01073_[4U] 
                                                         >> 7U)))))) 
                                         | (((((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                 | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_616)) 
                                                << 0x17U) 
                                               | (0x800000U 
                                                  & (picorv32__DOT___01073_[4U] 
                                                     >> 8U))) 
                                              | ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                   | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_617)) 
                                                  << 0x16U) 
                                                 | (0x400000U 
                                                    & (picorv32__DOT___01073_[4U] 
                                                       >> 9U)))) 
                                             | (((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                   | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_618)) 
                                                  << 0x15U) 
                                                 | (0x200000U 
                                                    & (picorv32__DOT___01073_[4U] 
                                                       >> 0xaU))) 
                                                | ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                     | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_619)) 
                                                    << 0x14U) 
                                                   | (0x100000U 
                                                      & (picorv32__DOT___01073_[4U] 
                                                         >> 0xbU))))) 
                                            | (((0x80000U 
                                                 & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                      | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_620)) 
                                                     << 0x13U) 
                                                    | (0xfff80000U 
                                                       & picorv32__DOT___01073_[4U]))) 
                                                | (0x40000U 
                                                   & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                        | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_621)) 
                                                       << 0x12U) 
                                                      | (0xfffc0000U 
                                                         & picorv32__DOT___01073_[4U])))) 
                                               | ((0x20000U 
                                                   & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                        | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_622)) 
                                                       << 0x11U) 
                                                      | (0xfffe0000U 
                                                         & picorv32__DOT___01073_[4U]))) 
                                                  | (0x10000U 
                                                     & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                          | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_623)) 
                                                         << 0x10U) 
                                                        | (0xffff0000U 
                                                           & picorv32__DOT___01073_[4U]))))))) 
                                        | (((((0x8000U 
                                               & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                    | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_624)) 
                                                   << 0xfU) 
                                                  | (0xffff8000U 
                                                     & picorv32__DOT___01073_[4U]))) 
                                              | (0x4000U 
                                                 & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                      | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_625)) 
                                                     << 0xeU) 
                                                    | (0xffffc000U 
                                                       & picorv32__DOT___01073_[4U])))) 
                                             | ((0x2000U 
                                                 & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                      | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_626)) 
                                                     << 0xdU) 
                                                    | (0xffffe000U 
                                                       & picorv32__DOT___01073_[4U]))) 
                                                | (0x1000U 
                                                   & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_628) 
                                                        | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_629)) 
                                                       << 0xcU) 
                                                      | (0xfffff000U 
                                                         & picorv32__DOT___01073_[4U]))))) 
                                            | (((0x800U 
                                                 & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_630) 
                                                      << 0xbU) 
                                                     | (0x800U 
                                                        & (picorv32__DOT___01073_[2U] 
                                                           >> 0x14U))) 
                                                    | (0xfffff800U 
                                                       & picorv32__DOT___01073_[4U]))) 
                                                | (0x400U 
                                                   & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_631) 
                                                        << 0xaU) 
                                                       | (0xfffffc00U 
                                                          & picorv32__DOT___01073_[2U])) 
                                                      | (0xfffffc00U 
                                                         & picorv32__DOT___01073_[4U])))) 
                                               | ((0x200U 
                                                   & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_633) 
                                                        << 9U) 
                                                       | (0xfffffe00U 
                                                          & picorv32__DOT___01073_[2U])) 
                                                      | (0xfffffe00U 
                                                         & picorv32__DOT___01073_[4U]))) 
                                                  | (0x100U 
                                                     & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_635) 
                                                          << 8U) 
                                                         | (0xffffff00U 
                                                            & picorv32__DOT___01073_[2U])) 
                                                        | (0xffffff00U 
                                                           & picorv32__DOT___01073_[4U])))))) 
                                           | ((((0x80U 
                                                 & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_637) 
                                                      << 7U) 
                                                     | (0xffffff80U 
                                                        & picorv32__DOT___01073_[2U])) 
                                                    | (0xffffff80U 
                                                       & picorv32__DOT___01073_[4U]))) 
                                                | (0x40U 
                                                   & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_639) 
                                                        << 6U) 
                                                       | (0xffffffc0U 
                                                          & picorv32__DOT___01073_[2U])) 
                                                      | (0xffffffc0U 
                                                         & picorv32__DOT___01073_[4U])))) 
                                               | ((0x20U 
                                                   & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_641) 
                                                        << 5U) 
                                                       | (0xffffffe0U 
                                                          & picorv32__DOT___01073_[2U])) 
                                                      | (0xffffffe0U 
                                                         & picorv32__DOT___01073_[4U]))) 
                                                  | (0x10U 
                                                     & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_643) 
                                                          << 4U) 
                                                         | (0xfffffff0U 
                                                            & picorv32__DOT___01073_[2U])) 
                                                        | (0xfffffff0U 
                                                           & picorv32__DOT___01073_[4U]))))) 
                                              | (((8U 
                                                   & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_645) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & picorv32__DOT___01073_[2U])) 
                                                      | (0xfffffff8U 
                                                         & picorv32__DOT___01073_[4U]))) 
                                                  | (4U 
                                                     & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_647) 
                                                          << 2U) 
                                                         | (0xfffffffcU 
                                                            & picorv32__DOT___01073_[2U])) 
                                                        | (0xfffffffcU 
                                                           & picorv32__DOT___01073_[4U])))) 
                                                 | ((2U 
                                                     & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_649) 
                                                          << 1U) 
                                                         | (0xfffffffeU 
                                                            & picorv32__DOT___01073_[2U])) 
                                                        | (0xfffffffeU 
                                                           & picorv32__DOT___01073_[4U]))) 
                                                    | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_651))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_comb__TOP__2(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_comb__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT___01437_;
    picorv32__DOT___01437_ = 0;
    CData/*0:0*/ picorv32__DOT___01444_;
    picorv32__DOT___01444_ = 0;
    CData/*0:0*/ picorv32__DOT___01447_;
    picorv32__DOT___01447_ = 0;
    CData/*0:0*/ picorv32__DOT___01470_;
    picorv32__DOT___01470_ = 0;
    CData/*0:0*/ picorv32__DOT___01471_;
    picorv32__DOT___01471_ = 0;
    CData/*0:0*/ picorv32__DOT___01472_;
    picorv32__DOT___01472_ = 0;
    CData/*0:0*/ picorv32__DOT___01473_;
    picorv32__DOT___01473_ = 0;
    CData/*0:0*/ picorv32__DOT___01474_;
    picorv32__DOT___01474_ = 0;
    CData/*0:0*/ picorv32__DOT___01475_;
    picorv32__DOT___01475_ = 0;
    CData/*0:0*/ picorv32__DOT___01476_;
    picorv32__DOT___01476_ = 0;
    CData/*0:0*/ picorv32__DOT___01477_;
    picorv32__DOT___01477_ = 0;
    CData/*0:0*/ picorv32__DOT___01478_;
    picorv32__DOT___01478_ = 0;
    CData/*0:0*/ picorv32__DOT___01479_;
    picorv32__DOT___01479_ = 0;
    CData/*0:0*/ picorv32__DOT___01480_;
    picorv32__DOT___01480_ = 0;
    CData/*0:0*/ picorv32__DOT___01481_;
    picorv32__DOT___01481_ = 0;
    CData/*0:0*/ picorv32__DOT___01482_;
    picorv32__DOT___01482_ = 0;
    CData/*0:0*/ picorv32__DOT___01483_;
    picorv32__DOT___01483_ = 0;
    CData/*0:0*/ picorv32__DOT___01484_;
    picorv32__DOT___01484_ = 0;
    CData/*0:0*/ picorv32__DOT___01485_;
    picorv32__DOT___01485_ = 0;
    CData/*0:0*/ picorv32__DOT___01486_;
    picorv32__DOT___01486_ = 0;
    CData/*0:0*/ picorv32__DOT___01487_;
    picorv32__DOT___01487_ = 0;
    CData/*0:0*/ picorv32__DOT___01488_;
    picorv32__DOT___01488_ = 0;
    CData/*0:0*/ picorv32__DOT___01489_;
    picorv32__DOT___01489_ = 0;
    CData/*0:0*/ picorv32__DOT___01490_;
    picorv32__DOT___01490_ = 0;
    CData/*0:0*/ picorv32__DOT___01491_;
    picorv32__DOT___01491_ = 0;
    CData/*0:0*/ picorv32__DOT___01492_;
    picorv32__DOT___01492_ = 0;
    CData/*0:0*/ picorv32__DOT___01493_;
    picorv32__DOT___01493_ = 0;
    CData/*0:0*/ picorv32__DOT___01494_;
    picorv32__DOT___01494_ = 0;
    CData/*0:0*/ picorv32__DOT___01495_;
    picorv32__DOT___01495_ = 0;
    CData/*0:0*/ picorv32__DOT___01497_;
    picorv32__DOT___01497_ = 0;
    CData/*0:0*/ picorv32__DOT___01499_;
    picorv32__DOT___01499_ = 0;
    CData/*0:0*/ picorv32__DOT___01501_;
    picorv32__DOT___01501_ = 0;
    CData/*0:0*/ picorv32__DOT___01503_;
    picorv32__DOT___01503_ = 0;
    CData/*0:0*/ picorv32__DOT___01505_;
    picorv32__DOT___01505_ = 0;
    CData/*0:0*/ picorv32__DOT___01507_;
    picorv32__DOT___01507_ = 0;
    CData/*0:0*/ picorv32__DOT___01511_;
    picorv32__DOT___01511_ = 0;
    CData/*0:0*/ picorv32__DOT___01513_;
    picorv32__DOT___01513_ = 0;
    // Body
    vlSelfRef.picorv32__DOT___01134_ = ((0x80000000U 
                                         & vlSelfRef.picorv32__DOT___01134_) 
                                        | ((((((0x40000000U 
                                                & (vlSelfRef.picorv32__DOT___01124_ 
                                                   & vlSelfRef.picorv32__DOT__decoded_imm_j)) 
                                               | (0x20000000U 
                                                  & (vlSelfRef.picorv32__DOT___01124_ 
                                                     & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                        >> 1U)))) 
                                              | ((0x10000000U 
                                                  & (vlSelfRef.picorv32__DOT___01124_ 
                                                     & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                        >> 2U))) 
                                                 | (0x8000000U 
                                                    & (vlSelfRef.picorv32__DOT___01124_ 
                                                       & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                          >> 3U))))) 
                                             | (((0x4000000U 
                                                  & (vlSelfRef.picorv32__DOT___01124_ 
                                                     & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                        >> 4U))) 
                                                 | (0x2000000U 
                                                    & (vlSelfRef.picorv32__DOT___01124_ 
                                                       & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                          >> 5U)))) 
                                                | ((0x1000000U 
                                                    & (vlSelfRef.picorv32__DOT___01124_ 
                                                       & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                          >> 6U))) 
                                                   | (0x800000U 
                                                      & (vlSelfRef.picorv32__DOT___01124_ 
                                                         & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                            >> 7U)))))) 
                                            | ((((0x400000U 
                                                  & (vlSelfRef.picorv32__DOT___01124_ 
                                                     & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                        >> 8U))) 
                                                 | (0x200000U 
                                                    & (vlSelfRef.picorv32__DOT___01124_ 
                                                       & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                          >> 9U)))) 
                                                | ((0x100000U 
                                                    & (vlSelfRef.picorv32__DOT___01124_ 
                                                       & (vlSelfRef.picorv32__DOT__decoded_imm_j 
                                                          >> 0xaU))) 
                                                   | (0x80000U 
                                                      & (vlSelfRef.picorv32__DOT___01124_ 
                                                         & vlSelfRef.picorv32__DOT__decoded_imm_j)))) 
                                               | ((0x40000U 
                                                   & (vlSelfRef.picorv32__DOT___01124_ 
                                                      & vlSelfRef.picorv32__DOT__decoded_imm_j)) 
                                                  | (0x38000U 
                                                     & (vlSelfRef.picorv32__DOT___01124_ 
                                                        & ((IData)(vlSelfRef.picorv32__DOT__decoded_rs1) 
                                                           << 0xfU)))))) 
                                           | (((0x7000U 
                                                & (vlSelfRef.picorv32__DOT___01124_ 
                                                   & vlSelfRef.picorv32__DOT__decoded_imm_j)) 
                                               | (0x800U 
                                                  & (vlSelfRef.picorv32__DOT___01124_ 
                                                     & ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                                                        << 0xbU)))) 
                                              | ((0x7e0U 
                                                  & (vlSelfRef.picorv32__DOT___01124_ 
                                                     & vlSelfRef.picorv32__DOT__decoded_imm_j)) 
                                                 | (((0x10U 
                                                      & (vlSelfRef.picorv32__DOT___01124_ 
                                                         & vlSelfRef.picorv32__DOT__decoded_imm_j)) 
                                                     | (0xcU 
                                                        & (vlSelfRef.picorv32__DOT___01124_ 
                                                           & (IData)(vlSelfRef.picorv32__DOT__decoded_rs2)))) 
                                                    | (2U 
                                                       & vlSelfRef.picorv32__DOT___01131_))))));
    picorv32__DOT___01480_ = (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5297) 
                               & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5294)) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0x1bU));
    picorv32__DOT___01437_ = (IData)(((6U == (6U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5278))) 
                                      & (vlSelfRef.picorv32__DOT___01131_ 
                                         >> 1U)));
    picorv32__DOT___01479_ = ((IData)(vlSelfRef.picorv32__DOT___01459_) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0x17U));
    picorv32__DOT___01473_ = (((IData)(vlSelfRef.picorv32__DOT___01460_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01459_)) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0x17U));
    picorv32__DOT___01478_ = ((IData)(vlSelfRef.picorv32__DOT___01457_) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0x13U));
    picorv32__DOT___01476_ = ((IData)(vlSelfRef.picorv32__DOT___01453_) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0xbU));
    picorv32__DOT___01474_ = ((IData)(vlSelfRef.picorv32__DOT___01449_) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 3U));
    picorv32__DOT___01444_ = (((IData)(vlSelfRef.picorv32__DOT___01450_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01449_)) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 3U));
    picorv32__DOT___01475_ = ((IData)(vlSelfRef.picorv32__DOT___01451_) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 7U));
    picorv32__DOT___01477_ = ((IData)(vlSelfRef.picorv32__DOT___01455_) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0xfU));
    picorv32__DOT___01495_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 0x1eU) & (vlSelfRef.picorv32__DOT___01131_ 
                                                  >> 0x1dU)));
    picorv32__DOT___01494_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 0x1cU) & (vlSelfRef.picorv32__DOT___01131_ 
                                                  >> 0x1bU)));
    picorv32__DOT___01493_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 0x1aU) & (vlSelfRef.picorv32__DOT___01131_ 
                                                  >> 0x19U)));
    picorv32__DOT___01492_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 0x18U) & (vlSelfRef.picorv32__DOT___01131_ 
                                                  >> 0x17U)));
    picorv32__DOT___01491_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 0x16U) & (vlSelfRef.picorv32__DOT___01131_ 
                                                  >> 0x15U)));
    picorv32__DOT___01490_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 0x14U) & (vlSelfRef.picorv32__DOT___01131_ 
                                                  >> 0x13U)));
    picorv32__DOT___01489_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 0x12U) & (vlSelfRef.picorv32__DOT___01131_ 
                                                  >> 0x11U)));
    picorv32__DOT___01488_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 0x10U) & (vlSelfRef.picorv32__DOT___01131_ 
                                                  >> 0xfU)));
    picorv32__DOT___01487_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 0xeU) & (vlSelfRef.picorv32__DOT___01131_ 
                                                 >> 0xdU)));
    picorv32__DOT___01486_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 0xcU) & (vlSelfRef.picorv32__DOT___01131_ 
                                                 >> 0xbU)));
    picorv32__DOT___01485_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 0xaU) & (vlSelfRef.picorv32__DOT___01131_ 
                                                 >> 9U)));
    picorv32__DOT___01484_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 8U) & (vlSelfRef.picorv32__DOT___01131_ 
                                               >> 7U)));
    picorv32__DOT___01483_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 6U) & (vlSelfRef.picorv32__DOT___01131_ 
                                               >> 5U)));
    picorv32__DOT___01482_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 4U) & (vlSelfRef.picorv32__DOT___01131_ 
                                               >> 3U)));
    picorv32__DOT___01481_ = (1U & ((vlSelfRef.picorv32__DOT___01132_ 
                                     >> 2U) & (vlSelfRef.picorv32__DOT___01131_ 
                                               >> 1U)));
    picorv32__DOT___01472_ = ((IData)(vlSelfRef.picorv32__DOT___01465_) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0xfU));
    picorv32__DOT___01470_ = (((IData)(vlSelfRef.picorv32__DOT___01466_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01465_)) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0xfU));
    picorv32__DOT___01471_ = ((IData)(vlSelfRef.picorv32__DOT___01463_) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 7U));
    picorv32__DOT___01447_ = (((IData)(vlSelfRef.picorv32__DOT___01464_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01463_)) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 7U));
    picorv32__DOT___01507_ = (1U & ((vlSelfRef.picorv32__DOT___01134_ 
                                     >> 0x19U) | ((vlSelfRef.picorv32__DOT___01132_ 
                                                   >> 0x19U) 
                                                  & (vlSelfRef.picorv32__DOT___01134_ 
                                                     >> 0x18U))));
    picorv32__DOT___01505_ = (1U & ((vlSelfRef.picorv32__DOT___01134_ 
                                     >> 0x15U) | ((vlSelfRef.picorv32__DOT___01132_ 
                                                   >> 0x15U) 
                                                  & (vlSelfRef.picorv32__DOT___01134_ 
                                                     >> 0x14U))));
    picorv32__DOT___01501_ = (1U & ((vlSelfRef.picorv32__DOT___01134_ 
                                     >> 0xdU) | ((vlSelfRef.picorv32__DOT___01132_ 
                                                  >> 0xdU) 
                                                 & (vlSelfRef.picorv32__DOT___01134_ 
                                                    >> 0xcU))));
    picorv32__DOT___01497_ = (1U & ((vlSelfRef.picorv32__DOT___01134_ 
                                     >> 5U) | ((vlSelfRef.picorv32__DOT___01132_ 
                                                >> 5U) 
                                               & (vlSelfRef.picorv32__DOT___01134_ 
                                                  >> 4U))));
    picorv32__DOT___01503_ = (1U & ((vlSelfRef.picorv32__DOT___01134_ 
                                     >> 0x11U) | ((vlSelfRef.picorv32__DOT___01132_ 
                                                   >> 0x11U) 
                                                  & (vlSelfRef.picorv32__DOT___01134_ 
                                                     >> 0x10U))));
    picorv32__DOT___01499_ = (1U & ((vlSelfRef.picorv32__DOT___01134_ 
                                     >> 9U) | ((vlSelfRef.picorv32__DOT___01132_ 
                                                >> 9U) 
                                               & (vlSelfRef.picorv32__DOT___01134_ 
                                                  >> 8U))));
    picorv32__DOT___01513_ = (1U & (((vlSelfRef.picorv32__DOT___01134_ 
                                      >> 0x13U) | (
                                                   (vlSelfRef.picorv32__DOT___01132_ 
                                                    >> 0x13U) 
                                                   & (vlSelfRef.picorv32__DOT___01134_ 
                                                      >> 0x12U))) 
                                    | ((IData)(vlSelfRef.picorv32__DOT___01456_) 
                                       & (IData)(picorv32__DOT___01503_))));
    picorv32__DOT___01511_ = (1U & (((vlSelfRef.picorv32__DOT___01134_ 
                                      >> 0xbU) | ((vlSelfRef.picorv32__DOT___01132_ 
                                                   >> 0xbU) 
                                                  & (vlSelfRef.picorv32__DOT___01134_ 
                                                     >> 0xaU))) 
                                    | ((IData)(vlSelfRef.picorv32__DOT___01452_) 
                                       & (IData)(picorv32__DOT___01499_))));
    vlSelfRef.picorv32__DOT___01131_ = ((0x80000000U 
                                         & vlSelfRef.picorv32__DOT___01131_) 
                                        | ((((((0x40000000U 
                                                & ((0xc0000000U 
                                                    & vlSelfRef.picorv32__DOT___01134_) 
                                                   | ((IData)(picorv32__DOT___01495_) 
                                                      << 0x1eU))) 
                                               | (0x20000000U 
                                                  & ((0xe0000000U 
                                                      & (vlSelfRef.picorv32__DOT___01134_ 
                                                         | (vlSelfRef.picorv32__DOT___01132_ 
                                                            & (vlSelfRef.picorv32__DOT___01134_ 
                                                               << 1U)))) 
                                                     | ((IData)(picorv32__DOT___01480_) 
                                                        << 0x1dU)))) 
                                              | ((0x10000000U 
                                                  & ((0xf0000000U 
                                                      & vlSelfRef.picorv32__DOT___01134_) 
                                                     | ((IData)(picorv32__DOT___01494_) 
                                                        << 0x1cU))) 
                                                 | (0x8000000U 
                                                    & (((0xf8000000U 
                                                         & (vlSelfRef.picorv32__DOT___01134_ 
                                                            | (vlSelfRef.picorv32__DOT___01132_ 
                                                               & (vlSelfRef.picorv32__DOT___01134_ 
                                                                  << 1U)))) 
                                                        | (((IData)(vlSelfRef.picorv32__DOT___01460_) 
                                                            & (IData)(picorv32__DOT___01507_)) 
                                                           << 0x1bU)) 
                                                       | ((IData)(picorv32__DOT___01473_) 
                                                          << 0x1bU))))) 
                                             | (((0x4000000U 
                                                  & ((0xfc000000U 
                                                      & vlSelfRef.picorv32__DOT___01134_) 
                                                     | ((IData)(picorv32__DOT___01493_) 
                                                        << 0x1aU))) 
                                                 | (((IData)(picorv32__DOT___01507_) 
                                                     | (IData)(picorv32__DOT___01479_)) 
                                                    << 0x19U)) 
                                                | ((0x1000000U 
                                                    & ((0xff000000U 
                                                        & vlSelfRef.picorv32__DOT___01134_) 
                                                       | ((IData)(picorv32__DOT___01492_) 
                                                          << 0x18U))) 
                                                   | (0x800000U 
                                                      & ((((0xff800000U 
                                                            & (vlSelfRef.picorv32__DOT___01134_ 
                                                               | (vlSelfRef.picorv32__DOT___01132_ 
                                                                  & (vlSelfRef.picorv32__DOT___01134_ 
                                                                     << 1U)))) 
                                                           | (((IData)(vlSelfRef.picorv32__DOT___01458_) 
                                                               & (IData)(picorv32__DOT___01505_)) 
                                                              << 0x17U)) 
                                                          | (((IData)(vlSelfRef.picorv32__DOT___01466_) 
                                                              & (IData)(picorv32__DOT___01513_)) 
                                                             << 0x17U)) 
                                                         | ((IData)(picorv32__DOT___01470_) 
                                                            << 0x17U)))))) 
                                            | ((((0x400000U 
                                                  & ((0xffc00000U 
                                                      & vlSelfRef.picorv32__DOT___01134_) 
                                                     | ((IData)(picorv32__DOT___01491_) 
                                                        << 0x16U))) 
                                                 | (((IData)(picorv32__DOT___01505_) 
                                                     | (IData)(picorv32__DOT___01478_)) 
                                                    << 0x15U)) 
                                                | ((0x100000U 
                                                    & ((0xfff00000U 
                                                        & vlSelfRef.picorv32__DOT___01134_) 
                                                       | ((IData)(picorv32__DOT___01490_) 
                                                          << 0x14U))) 
                                                   | (((IData)(picorv32__DOT___01513_) 
                                                       | (IData)(picorv32__DOT___01472_)) 
                                                      << 0x13U))) 
                                               | (((0x40000U 
                                                    & ((0xfffc0000U 
                                                        & vlSelfRef.picorv32__DOT___01134_) 
                                                       | ((IData)(picorv32__DOT___01489_) 
                                                          << 0x12U))) 
                                                   | (((IData)(picorv32__DOT___01503_) 
                                                       | (IData)(picorv32__DOT___01477_)) 
                                                      << 0x11U)) 
                                                  | ((0x10000U 
                                                      & ((0xffff0000U 
                                                          & vlSelfRef.picorv32__DOT___01134_) 
                                                         | ((IData)(picorv32__DOT___01488_) 
                                                            << 0x10U))) 
                                                     | (0x8000U 
                                                        & ((((0xffff8000U 
                                                              & (vlSelfRef.picorv32__DOT___01134_ 
                                                                 | (vlSelfRef.picorv32__DOT___01132_ 
                                                                    & (vlSelfRef.picorv32__DOT___01134_ 
                                                                       << 1U)))) 
                                                             | (((IData)(vlSelfRef.picorv32__DOT___01454_) 
                                                                 & (IData)(picorv32__DOT___01501_)) 
                                                                << 0xfU)) 
                                                            | (((IData)(vlSelfRef.picorv32__DOT___01464_) 
                                                                & (IData)(picorv32__DOT___01511_)) 
                                                               << 0xfU)) 
                                                           | ((IData)(picorv32__DOT___01447_) 
                                                              << 0xfU))))))) 
                                           | (((((0x4000U 
                                                  & ((0xffffc000U 
                                                      & vlSelfRef.picorv32__DOT___01134_) 
                                                     | ((IData)(picorv32__DOT___01487_) 
                                                        << 0xeU))) 
                                                 | (((IData)(picorv32__DOT___01501_) 
                                                     | (IData)(picorv32__DOT___01476_)) 
                                                    << 0xdU)) 
                                                | ((0x1000U 
                                                    & ((0xfffff000U 
                                                        & vlSelfRef.picorv32__DOT___01134_) 
                                                       | ((IData)(picorv32__DOT___01486_) 
                                                          << 0xcU))) 
                                                   | (((IData)(picorv32__DOT___01511_) 
                                                       | (IData)(picorv32__DOT___01471_)) 
                                                      << 0xbU))) 
                                               | (((0x400U 
                                                    & ((0xfffffc00U 
                                                        & vlSelfRef.picorv32__DOT___01134_) 
                                                       | ((IData)(picorv32__DOT___01485_) 
                                                          << 0xaU))) 
                                                   | (((IData)(picorv32__DOT___01499_) 
                                                       | (IData)(picorv32__DOT___01475_)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((0xffffff00U 
                                                          & vlSelfRef.picorv32__DOT___01134_) 
                                                         | ((IData)(picorv32__DOT___01484_) 
                                                            << 8U))) 
                                                     | (0x80U 
                                                        & (((0xffffff80U 
                                                             & (vlSelfRef.picorv32__DOT___01134_ 
                                                                | (vlSelfRef.picorv32__DOT___01132_ 
                                                                   & (vlSelfRef.picorv32__DOT___01134_ 
                                                                      << 1U)))) 
                                                            | (((IData)(vlSelfRef.picorv32__DOT___01450_) 
                                                                & (IData)(picorv32__DOT___01497_)) 
                                                               << 7U)) 
                                                           | ((IData)(picorv32__DOT___01444_) 
                                                              << 7U)))))) 
                                              | ((((0x40U 
                                                    & ((0xffffffc0U 
                                                        & vlSelfRef.picorv32__DOT___01134_) 
                                                       | ((IData)(picorv32__DOT___01483_) 
                                                          << 6U))) 
                                                   | (((IData)(picorv32__DOT___01497_) 
                                                       | (IData)(picorv32__DOT___01474_)) 
                                                      << 5U)) 
                                                  | ((0x10U 
                                                      & ((0xfffffff0U 
                                                          & vlSelfRef.picorv32__DOT___01134_) 
                                                         | ((IData)(picorv32__DOT___01482_) 
                                                            << 4U))) 
                                                     | (8U 
                                                        & ((0xfffffff8U 
                                                            & (vlSelfRef.picorv32__DOT___01134_ 
                                                               | (vlSelfRef.picorv32__DOT___01132_ 
                                                                  & (vlSelfRef.picorv32__DOT___01134_ 
                                                                     << 1U)))) 
                                                           | ((IData)(picorv32__DOT___01437_) 
                                                              << 3U))))) 
                                                 | ((4U 
                                                     & ((0xfffffffcU 
                                                         & vlSelfRef.picorv32__DOT___01134_) 
                                                        | ((IData)(picorv32__DOT___01481_) 
                                                           << 2U))) 
                                                    | (2U 
                                                       & (vlSelfRef.picorv32__DOT___01124_ 
                                                          & (IData)(vlSelfRef.picorv32__DOT__decoded_rs2))))))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
        = (0x3fffffffU & ((((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5298) 
                                << 0x1dU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5296) 
                                             << 0x1cU)) 
                              | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5297) 
                                  << 0x1bU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5294) 
                                               << 0x1aU))) 
                             | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5295) 
                                 << 0x19U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5292) 
                                               << 0x18U) 
                                              | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5293) 
                                                 << 0x17U)))) 
                            | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5290) 
                                  << 0x16U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5291) 
                                               << 0x15U)) 
                                | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5288) 
                                    << 0x14U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5289) 
                                                 << 0x13U))) 
                               | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5286) 
                                   << 0x12U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5287) 
                                                 << 0x11U) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5283) 
                                                   << 0x10U))))) 
                           | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5284) 
                                 << 0xeU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5281) 
                                             << 0xdU)) 
                               | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5282) 
                                   << 0xaU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5279) 
                                               << 9U))) 
                              | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5280) 
                                  << 3U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5277) 
                                             << 2U) 
                                            | (3U & 
                                               ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5278) 
                                                >> 1U)))))) 
                          ^ (vlSelfRef.picorv32__DOT___01131_ 
                             >> 1U)));
    if (vlSelfRef.picorv32__DOT__instr_jal) {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3269 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3266 
            = (1U & vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276);
    } else {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3269 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5274));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3266 
            = (1U & (~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5659)));
    }
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_comb__TOP__3(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_comb__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ picorv32__DOT___00396_;
    picorv32__DOT___00396_ = 0;
    CData/*5:0*/ picorv32__DOT___01071_;
    picorv32__DOT___01071_ = 0;
    // Body
    vlSelfRef.picorv32__DOT__alu_lts = (1U & ((((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                                >> 2U) 
                                               ^ (vlSelfRef.picorv32__DOT___01148_ 
                                                  >> 0x1eU)) 
                                              ^ (vlSelfRef.picorv32__DOT___01150_ 
                                                 >> 0x1fU)));
    vlSelfRef.picorv32__DOT___01148_ = ((((((0x80000000U 
                                             & ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                                << 0x1dU)) 
                                            | (0x40000000U 
                                               & ((0xc0000000U 
                                                   & vlSelfRef.picorv32__DOT___01151_) 
                                                  | ((IData)(vlSelfRef.picorv32__DOT___01793_) 
                                                     << 0x1eU)))) 
                                           | ((((IData)(vlSelfRef.picorv32__DOT___01807_) 
                                                | (IData)(vlSelfRef.picorv32__DOT___01778_)) 
                                               << 0x1dU) 
                                              | (0x10000000U 
                                                 & ((0xf0000000U 
                                                     & vlSelfRef.picorv32__DOT___01151_) 
                                                    | ((IData)(vlSelfRef.picorv32__DOT___01792_) 
                                                       << 0x1cU))))) 
                                          | (((((IData)(vlSelfRef.picorv32__DOT___01814_) 
                                                | (IData)(vlSelfRef.picorv32__DOT___01771_)) 
                                               << 0x1bU) 
                                              | (0x4000000U 
                                                 & ((0xfc000000U 
                                                     & vlSelfRef.picorv32__DOT___01151_) 
                                                    | ((IData)(vlSelfRef.picorv32__DOT___01791_) 
                                                       << 0x1aU)))) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT___01805_) 
                                                  | (IData)(vlSelfRef.picorv32__DOT___01777_)) 
                                                 << 0x19U) 
                                                | (0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelfRef.picorv32__DOT___01151_) 
                                                      | ((IData)(vlSelfRef.picorv32__DOT___01790_) 
                                                         << 0x18U)))))) 
                                         | ((((((IData)(vlSelfRef.picorv32__DOT___01817_) 
                                                | (IData)(vlSelfRef.picorv32__DOT___01768_)) 
                                               << 0x17U) 
                                              | (0x400000U 
                                                 & ((0xffc00000U 
                                                     & vlSelfRef.picorv32__DOT___01151_) 
                                                    | ((IData)(vlSelfRef.picorv32__DOT___01789_) 
                                                       << 0x16U)))) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT___01803_) 
                                                  | (IData)(vlSelfRef.picorv32__DOT___01776_)) 
                                                 << 0x15U) 
                                                | (0x100000U 
                                                   & ((0xfff00000U 
                                                       & vlSelfRef.picorv32__DOT___01151_) 
                                                      | ((IData)(vlSelfRef.picorv32__DOT___01788_) 
                                                         << 0x14U))))) 
                                            | (((((IData)(vlSelfRef.picorv32__DOT___01812_) 
                                                  | (IData)(vlSelfRef.picorv32__DOT___01770_)) 
                                                 << 0x13U) 
                                                | (0x40000U 
                                                   & ((0xfffc0000U 
                                                       & vlSelfRef.picorv32__DOT___01151_) 
                                                      | ((IData)(vlSelfRef.picorv32__DOT___01787_) 
                                                         << 0x12U)))) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT___01801_) 
                                                    | (IData)(vlSelfRef.picorv32__DOT___01775_)) 
                                                   << 0x11U) 
                                                  | (0x10000U 
                                                     & ((0xffff0000U 
                                                         & vlSelfRef.picorv32__DOT___01151_) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT___01786_) 
                                                           << 0x10U))))))) 
                                        | (((((0x8000U 
                                               & ((((0xffff8000U 
                                                     & (vlSelfRef.picorv32__DOT___01151_ 
                                                        | (vlSelfRef.picorv32__DOT___01149_ 
                                                           & (vlSelfRef.picorv32__DOT___01151_ 
                                                              << 1U)))) 
                                                    | (((IData)(vlSelfRef.picorv32__DOT___01748_) 
                                                        & (IData)(vlSelfRef.picorv32__DOT___01799_)) 
                                                       << 0xfU)) 
                                                   | (((IData)(vlSelfRef.picorv32__DOT___01759_) 
                                                       & (IData)(vlSelfRef.picorv32__DOT___01810_)) 
                                                      << 0xfU)) 
                                                  | ((IData)(vlSelfRef.picorv32__DOT___01739_) 
                                                     << 0xfU))) 
                                              | (0x4000U 
                                                 & ((0xffffc000U 
                                                     & vlSelfRef.picorv32__DOT___01151_) 
                                                    | ((IData)(vlSelfRef.picorv32__DOT___01785_) 
                                                       << 0xeU)))) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT___01799_) 
                                                  | (IData)(vlSelfRef.picorv32__DOT___01774_)) 
                                                 << 0xdU) 
                                                | (0x1000U 
                                                   & ((0xfffff000U 
                                                       & vlSelfRef.picorv32__DOT___01151_) 
                                                      | ((IData)(vlSelfRef.picorv32__DOT___01784_) 
                                                         << 0xcU))))) 
                                            | (((((IData)(vlSelfRef.picorv32__DOT___01810_) 
                                                  | (IData)(vlSelfRef.picorv32__DOT___01769_)) 
                                                 << 0xbU) 
                                                | (0x400U 
                                                   & ((0xfffffc00U 
                                                       & vlSelfRef.picorv32__DOT___01151_) 
                                                      | ((IData)(vlSelfRef.picorv32__DOT___01783_) 
                                                         << 0xaU)))) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT___01797_) 
                                                    | (IData)(vlSelfRef.picorv32__DOT___01773_)) 
                                                   << 9U) 
                                                  | (0x100U 
                                                     & ((0xffffff00U 
                                                         & vlSelfRef.picorv32__DOT___01151_) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT___01782_) 
                                                           << 8U)))))) 
                                           | ((((0x80U 
                                                 & (((0xffffff80U 
                                                      & (vlSelfRef.picorv32__DOT___01151_ 
                                                         | (vlSelfRef.picorv32__DOT___01149_ 
                                                            & (vlSelfRef.picorv32__DOT___01151_ 
                                                               << 1U)))) 
                                                     | (((IData)(vlSelfRef.picorv32__DOT___01744_) 
                                                         & (IData)(vlSelfRef.picorv32__DOT___01795_)) 
                                                        << 7U)) 
                                                    | ((IData)(vlSelfRef.picorv32__DOT___01735_) 
                                                       << 7U))) 
                                                | (0x40U 
                                                   & ((0xffffffc0U 
                                                       & vlSelfRef.picorv32__DOT___01151_) 
                                                      | ((IData)(vlSelfRef.picorv32__DOT___01781_) 
                                                         << 6U)))) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT___01795_) 
                                                    | (IData)(vlSelfRef.picorv32__DOT___01772_)) 
                                                   << 5U) 
                                                  | (0x10U 
                                                     & ((0xfffffff0U 
                                                         & vlSelfRef.picorv32__DOT___01151_) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT___01780_) 
                                                           << 4U))))) 
                                              | (((8U 
                                                   & ((0xfffffff8U 
                                                       & (vlSelfRef.picorv32__DOT___01151_ 
                                                          | (vlSelfRef.picorv32__DOT___01149_ 
                                                             & (vlSelfRef.picorv32__DOT___01151_ 
                                                                << 1U)))) 
                                                      | ((IData)(vlSelfRef.picorv32__DOT___01727_) 
                                                         << 3U))) 
                                                  | (4U 
                                                     & ((0xfffffffcU 
                                                         & vlSelfRef.picorv32__DOT___01151_) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT___01779_) 
                                                           << 2U)))) 
                                                 | ((2U 
                                                     & ((0xfffffffeU 
                                                         & vlSelfRef.picorv32__DOT___01151_) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT___01711_) 
                                                           << 1U))) 
                                                    | (1U 
                                                       & (vlSelfRef.picorv32__DOT___01151_ 
                                                          | vlSelfRef.picorv32__DOT___01149_)))))));
    picorv32__DOT___01071_ = (((((~ ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                     >> 4U)) & (IData)(vlSelfRef.picorv32__DOT__instr_beq)) 
                                << 5U) | ((0xfffffff0U 
                                           & ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                              & ((IData)(vlSelfRef.picorv32__DOT__instr_bne) 
                                                 << 4U))) 
                                          | (0xfffffff8U 
                                             & ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                                & ((IData)(vlSelfRef.picorv32__DOT__instr_bge) 
                                                   << 3U))))) 
                              | ((0xfffffffcU & ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                                 & ((IData)(vlSelfRef.picorv32__DOT__instr_bgeu) 
                                                    << 2U))) 
                                 | ((((IData)(vlSelfRef.picorv32__DOT__alu_lts) 
                                      & (IData)(vlSelfRef.picorv32__DOT__is_slti_blt_slt)) 
                                     << 1U) | ((~ ((IData)(vlSelfRef.picorv32__DOT___01070_) 
                                                   >> 2U)) 
                                               & (IData)(vlSelfRef.picorv32__DOT__is_sltiu_bltu_sltu)))));
    picorv32__DOT___00396_ = (((IData)((0U != (0x30U 
                                               & (IData)(picorv32__DOT___01071_)))) 
                               << 2U) | (((IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & (IData)(picorv32__DOT___01071_)))) 
                                          << 1U) | (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(picorv32__DOT___01071_))))));
    vlSelfRef.picorv32__DOT__alu_out_0 = ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5896) 
                                            | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5897)) 
                                           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5898)) 
                                          && (IData)(
                                                     (0U 
                                                      != (IData)(picorv32__DOT___00396_))));
    if (vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3195 
            = ((~ (IData)(vlSelfRef.picorv32__DOT__alu_out_0)) 
               & (IData)(vlSelfRef.picorv32__DOT___00950_));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3203 
            = vlSelfRef.picorv32__DOT__alu_out_0;
    } else {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3195 
            = vlSelfRef.picorv32__DOT___00950_;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3203 
            = vlSelfRef.picorv32__DOT__instr_jalr;
    }
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3204 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu)) 
                 | (IData)(vlSelfRef.picorv32__DOT__alu_out_0)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5172 
        = ((IData)(vlSelfRef.picorv32__DOT__alu_out_0) 
           & (IData)(vlSelfRef.picorv32__DOT__is_compare));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_comb__TOP__4(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_comb__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT___01821_;
    picorv32__DOT___01821_ = 0;
    CData/*0:0*/ picorv32__DOT___01823_;
    picorv32__DOT___01823_ = 0;
    // Body
    picorv32__DOT___01823_ = (1U & ((vlSelfRef.picorv32__DOT___01144_ 
                                     >> 2U) & (vlSelfRef.picorv32__DOT___01179_ 
                                               >> 1U)));
    picorv32__DOT___01821_ = (1U & (((~ ((IData)(vlSelfRef.picorv32__DOT__reg_sh) 
                                         >> 3U)) & 
                                     (vlSelfRef.picorv32__DOT___01144_ 
                                      >> 2U)) & (vlSelfRef.picorv32__DOT___01179_ 
                                                 >> 1U)));
    vlSelfRef.picorv32__DOT___01179_ = ((0x80000000U 
                                         & vlSelfRef.picorv32__DOT___01179_) 
                                        | ((vlSelfRef.picorv32__DOT____Vconcswap_1_h67f4875e__0 
                                            << 4U) 
                                           | (((8U 
                                                & ((0xfffffff8U 
                                                    & vlSelfRef.picorv32__DOT___01142_) 
                                                   | ((IData)(picorv32__DOT___01821_) 
                                                      << 3U))) 
                                               | (4U 
                                                  & ((0xfffffffcU 
                                                      & (IData)(vlSelfRef.picorv32__DOT__reg_sh)) 
                                                     | ((IData)(picorv32__DOT___01823_) 
                                                        << 2U)))) 
                                              | ((2U 
                                                  & ((0xfffffffeU 
                                                      & (IData)(vlSelfRef.picorv32__DOT__reg_sh)) 
                                                     | ((IData)(
                                                                (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelfRef.picorv32__DOT__reg_sh)))) 
                                                        << 1U))) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.picorv32__DOT__reg_sh))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_comb__TOP__5(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_comb__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3196;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3196 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3198;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3198 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3200;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3200 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3201;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3201 = 0;
    // Body
    vlSelfRef.picorv32__DOT___01180_ = ((0x80000000U 
                                         & vlSelfRef.picorv32__DOT___01180_) 
                                        | ((vlSelfRef.picorv32__DOT____Vconcswap_1_h652c0f6b__0 
                                            << 5U) 
                                           | (((0x18U 
                                                & ((0xfffffff8U 
                                                    & vlSelfRef.picorv32__DOT___01143_) 
                                                   ^ 
                                                   (0xfffffff8U 
                                                    & (vlSelfRef.picorv32__DOT___01179_ 
                                                       << 1U)))) 
                                               | (4U 
                                                  & ((0xfffffffcU 
                                                      & vlSelfRef.picorv32__DOT___01144_) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & (vlSelfRef.picorv32__DOT___01179_ 
                                                         << 1U))))) 
                                              | ((2U 
                                                  & ((0xfffffffeU 
                                                      & vlSelfRef.picorv32__DOT___01143_) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.picorv32__DOT__reg_sh) 
                                                      << 1U))) 
                                                 | (1U 
                                                    & (~ (IData)(vlSelfRef.picorv32__DOT__reg_sh)))))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h652c0f6b__0 
        = ((((((0x2000000U & (vlSelfRef.picorv32__DOT___01180_ 
                              >> 6U)) | (0x1000000U 
                                         & (vlSelfRef.picorv32__DOT___01180_ 
                                            >> 7U))) 
              | ((0x800000U & (vlSelfRef.picorv32__DOT___01180_ 
                               >> 8U)) | (0x400000U 
                                          & (vlSelfRef.picorv32__DOT___01180_ 
                                             >> 9U)))) 
             | ((0x200000U & (vlSelfRef.picorv32__DOT___01180_ 
                              >> 0xaU)) | ((0x100000U 
                                            & (vlSelfRef.picorv32__DOT___01180_ 
                                               >> 0xbU)) 
                                           | (0x80000U 
                                              & (vlSelfRef.picorv32__DOT___01180_ 
                                                 >> 0xcU))))) 
            | (((0x40000U & (vlSelfRef.picorv32__DOT___01180_ 
                             >> 0xdU)) | ((0x20000U 
                                           & (vlSelfRef.picorv32__DOT___01180_ 
                                              >> 0xeU)) 
                                          | (0x10000U 
                                             & (vlSelfRef.picorv32__DOT___01180_ 
                                                >> 0xfU)))) 
               | ((0x8000U & (vlSelfRef.picorv32__DOT___01180_ 
                              >> 0x10U)) | ((0x4000U 
                                             & (vlSelfRef.picorv32__DOT___01180_ 
                                                >> 0x11U)) 
                                            | (0x2000U 
                                               & (vlSelfRef.picorv32__DOT___01180_ 
                                                  >> 0x12U)))))) 
           | (((((0x1000U & (vlSelfRef.picorv32__DOT___01180_ 
                             >> 0x13U)) | (0x800U & 
                                           (vlSelfRef.picorv32__DOT___01180_ 
                                            >> 0x14U))) 
                | ((0x400U & (vlSelfRef.picorv32__DOT___01180_ 
                              >> 0x15U)) | (0x200U 
                                            & (vlSelfRef.picorv32__DOT___01180_ 
                                               >> 0x16U)))) 
               | ((0x100U & (vlSelfRef.picorv32__DOT___01180_ 
                             >> 0x17U)) | ((0x80U & 
                                            (vlSelfRef.picorv32__DOT___01180_ 
                                             >> 0x18U)) 
                                           | (0x40U 
                                              & (vlSelfRef.picorv32__DOT___01180_ 
                                                 >> 0x19U))))) 
              | (((0x20U & (vlSelfRef.picorv32__DOT___01180_ 
                            >> 0x1aU)) | ((0x10U & 
                                           (vlSelfRef.picorv32__DOT___01180_ 
                                            >> 0x1bU)) 
                                          | (8U & (vlSelfRef.picorv32__DOT___01180_ 
                                                   >> 0x1cU)))) 
                 | ((4U & (vlSelfRef.picorv32__DOT___01180_ 
                           >> 0x1dU)) | ((2U & (vlSelfRef.picorv32__DOT___01180_ 
                                                >> 0x1eU)) 
                                         | (vlSelfRef.picorv32__DOT___01180_ 
                                            >> 0x1fU))))));
    if (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_108) {
        picorv32__DOT____VdfgRegularize_h2364b514_0_3201 
            = (1U & (vlSelfRef.picorv32__DOT___01144_ 
                     >> 4U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3198 
            = (1U & (vlSelfRef.picorv32__DOT___01144_ 
                     >> 3U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3200 
            = (1U & (vlSelfRef.picorv32__DOT___01144_ 
                     >> 2U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3196 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT__reg_sh) 
                     >> 1U));
    } else {
        picorv32__DOT____VdfgRegularize_h2364b514_0_3201 
            = (1U & (vlSelfRef.picorv32__DOT___01180_ 
                     >> 4U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3198 
            = (1U & (vlSelfRef.picorv32__DOT___01180_ 
                     >> 3U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3200 
            = (1U & (vlSelfRef.picorv32__DOT___01180_ 
                     >> 2U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3196 
            = (1U & (vlSelfRef.picorv32__DOT___01180_ 
                     >> 1U));
    }
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5595 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3201));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5597 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3198));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5596 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3200));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5599 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3196));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_comb__TOP__6(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_comb__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4857 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3050) 
                  & (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4855 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3050) 
                 & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4856 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3046) 
           & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4853 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3048) 
                  & (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4854 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3048) 
                 & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4884 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3067) 
                  & (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4882 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3067) 
                 & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4883 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3065) 
           & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4880 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3066) 
                  & (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4881 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3066) 
                 & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4878 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3063) 
           & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4879 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3064) 
                  & (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4876 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3064) 
                 & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4877 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3061) 
           & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4874 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3062) 
                  & (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4875 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3062) 
                 & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4872 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3059) 
           & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4873 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3060) 
                  & (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4870 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3060) 
                 & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4871 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3057) 
           & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4868 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3058) 
                  & (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4869 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3058) 
                 & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4866 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3055) 
           & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4867 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3056) 
                  & (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4864 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3056) 
                 & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4865 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3053) 
           & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4862 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3054) 
                  & (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4863 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3054) 
                 & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4860 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3051) 
           & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4861 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3052) 
                  & (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4858 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3052) 
                 & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4859 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3049) 
           & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5344 
        = ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4855) 
             << 3U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4856) 
                       << 2U)) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4853) 
                                   << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4854)));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_comb__TOP__8(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_comb__TOP__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ picorv32__DOT___01078_;
    picorv32__DOT___01078_ = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_654;
    picorv32__DOT____VdfgRegularize_h2364b514_0_654 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_655;
    picorv32__DOT____VdfgRegularize_h2364b514_0_655 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_656;
    picorv32__DOT____VdfgRegularize_h2364b514_0_656 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_657;
    picorv32__DOT____VdfgRegularize_h2364b514_0_657 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_658;
    picorv32__DOT____VdfgRegularize_h2364b514_0_658 = 0;
    // Body
    picorv32__DOT___01078_ = (((((IData)((((IData)(vlSelfRef.picorv32__DOT___01077_) 
                                           >> 7U) & 
                                          ((IData)(vlSelfRef.picorv32__DOT___01079_) 
                                           >> 3U))) 
                                 << 7U) | ((IData)(
                                                   (((IData)(vlSelfRef.picorv32__DOT___01077_) 
                                                     >> 6U) 
                                                    & ((IData)(vlSelfRef.picorv32__DOT___01079_) 
                                                       >> 3U))) 
                                           << 6U)) 
                               | ((0x20U & ((IData)(vlSelfRef.picorv32__DOT___01077_) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01079_) 
                                               << 3U))) 
                                  | ((IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_h2569c209__0) 
                                     << 4U))) | (((8U 
                                                   & ((IData)(vlSelfRef.picorv32__DOT___01077_) 
                                                      & ((IData)(vlSelfRef.picorv32__DOT___01079_) 
                                                         << 2U))) 
                                                  | (4U 
                                                     & ((IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_he36fca02__0) 
                                                        << 1U))) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.picorv32__DOT___01077_) 
                                                        & ((IData)(vlSelfRef.picorv32__DOT___01079_) 
                                                           << 1U))) 
                                                    | (1U 
                                                       & (IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_he36fca02__0)))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h2569c209__0 
        = (1U & ((IData)(picorv32__DOT___01078_) >> 5U));
    vlSelfRef.picorv32__DOT____Vconcswap_1_he36fca02__0 
        = ((2U & ((IData)(picorv32__DOT___01078_) >> 2U)) 
           | (1U & ((IData)(picorv32__DOT___01078_) 
                    >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_654 
        = (IData)((0U != (0xa0U & (IData)(picorv32__DOT___01078_))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_657 
        = (IData)((0U != (0x60U & (IData)(picorv32__DOT___01078_))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_656 
        = (IData)((0U != (0xaU & (IData)(picorv32__DOT___01078_))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_655 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_656) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_654));
    picorv32__DOT____VdfgRegularize_h2364b514_0_658 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_656) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_657));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5668 
        = ((IData)(vlSelfRef.picorv32__DOT___01175_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_655));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5667 
        = ((IData)(vlSelfRef.picorv32__DOT___01175_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_658));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_comb__TOP__9(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_comb__TOP__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___00001_ = ((((((0x80000000U 
                                             & (vlSelfRef.picorv32__DOT___00002_ 
                                                & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5352) 
                                                   << 0x1fU))) 
                                            | (0x40000000U 
                                               & ((vlSelfRef.picorv32__DOT___00002_ 
                                                   >> 1U) 
                                                  & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5351) 
                                                     << 0x1eU)))) 
                                           | ((0x20000000U 
                                               & ((vlSelfRef.picorv32__DOT___00002_ 
                                                   >> 2U) 
                                                  & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5354) 
                                                     << 0x1dU))) 
                                              | (0x10000000U 
                                                 & ((vlSelfRef.picorv32__DOT___00002_ 
                                                     >> 3U) 
                                                    & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5353) 
                                                       << 0x1cU))))) 
                                          | (((0x8000000U 
                                               & ((vlSelfRef.picorv32__DOT___00002_ 
                                                   >> 4U) 
                                                  & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5356) 
                                                     << 0x1bU))) 
                                              | (0x4000000U 
                                                 & ((vlSelfRef.picorv32__DOT___00002_ 
                                                     >> 5U) 
                                                    & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5355) 
                                                       << 0x1aU)))) 
                                             | ((0x2000000U 
                                                 & ((vlSelfRef.picorv32__DOT___00002_ 
                                                     >> 6U) 
                                                    & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5358) 
                                                       << 0x19U))) 
                                                | (0x1000000U 
                                                   & ((vlSelfRef.picorv32__DOT___00002_ 
                                                       >> 7U) 
                                                      & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5357) 
                                                         << 0x18U)))))) 
                                         | ((((0x800000U 
                                               & ((vlSelfRef.picorv32__DOT___00002_ 
                                                   >> 8U) 
                                                  & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5360) 
                                                     << 0x17U))) 
                                              | (0x400000U 
                                                 & ((vlSelfRef.picorv32__DOT___00002_ 
                                                     >> 9U) 
                                                    & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5359) 
                                                       << 0x16U)))) 
                                             | ((0x200000U 
                                                 & ((vlSelfRef.picorv32__DOT___00002_ 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5362) 
                                                       << 0x15U))) 
                                                | (0x100000U 
                                                   & ((vlSelfRef.picorv32__DOT___00002_ 
                                                       >> 0xbU) 
                                                      & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5361) 
                                                         << 0x14U))))) 
                                            | (((0x80000U 
                                                 & ((vlSelfRef.picorv32__DOT___00002_ 
                                                     >> 0xcU) 
                                                    & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5364) 
                                                       << 0x13U))) 
                                                | (0x40000U 
                                                   & ((vlSelfRef.picorv32__DOT___00002_ 
                                                       >> 0xdU) 
                                                      & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5363) 
                                                         << 0x12U)))) 
                                               | ((0x20000U 
                                                   & ((vlSelfRef.picorv32__DOT___00002_ 
                                                       >> 0xeU) 
                                                      & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5366) 
                                                         << 0x11U))) 
                                                  | (0x10000U 
                                                     & ((vlSelfRef.picorv32__DOT___00002_ 
                                                         >> 0xfU) 
                                                        & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5365) 
                                                           << 0x10U))))))) 
                                        | (((((0x8000U 
                                               & ((vlSelfRef.picorv32__DOT___00002_ 
                                                   >> 0x10U) 
                                                  & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5368) 
                                                     << 0xfU))) 
                                              | (0x4000U 
                                                 & ((vlSelfRef.picorv32__DOT___00002_ 
                                                     >> 0x11U) 
                                                    & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5367) 
                                                       << 0xeU)))) 
                                             | ((0x2000U 
                                                 & ((vlSelfRef.picorv32__DOT___00002_ 
                                                     >> 0x12U) 
                                                    & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5370) 
                                                       << 0xdU))) 
                                                | (0x1000U 
                                                   & ((vlSelfRef.picorv32__DOT___00002_ 
                                                       >> 0x13U) 
                                                      & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5369) 
                                                         << 0xcU))))) 
                                            | (((0x800U 
                                                 & ((vlSelfRef.picorv32__DOT___00002_ 
                                                     >> 0x14U) 
                                                    & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5372) 
                                                       << 0xbU))) 
                                                | (0x400U 
                                                   & ((vlSelfRef.picorv32__DOT___00002_ 
                                                       >> 0x15U) 
                                                      & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5371) 
                                                         << 0xaU)))) 
                                               | ((0x200U 
                                                   & ((vlSelfRef.picorv32__DOT___00002_ 
                                                       >> 0x16U) 
                                                      & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5374) 
                                                         << 9U))) 
                                                  | (0x100U 
                                                     & ((vlSelfRef.picorv32__DOT___00002_ 
                                                         >> 0x17U) 
                                                        & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5373) 
                                                           << 8U)))))) 
                                           | ((((0x80U 
                                                 & ((vlSelfRef.picorv32__DOT___00002_ 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5376) 
                                                       << 7U))) 
                                                | (0x40U 
                                                   & ((vlSelfRef.picorv32__DOT___00002_ 
                                                       >> 0x19U) 
                                                      & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5375) 
                                                         << 6U)))) 
                                               | ((0x20U 
                                                   & ((vlSelfRef.picorv32__DOT___00002_ 
                                                       >> 0x1aU) 
                                                      & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5378) 
                                                         << 5U))) 
                                                  | (0x10U 
                                                     & ((vlSelfRef.picorv32__DOT___00002_ 
                                                         >> 0x1bU) 
                                                        & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5377) 
                                                           << 4U))))) 
                                              | (((8U 
                                                   & ((vlSelfRef.picorv32__DOT___00002_ 
                                                       >> 0x1cU) 
                                                      & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5380) 
                                                         << 3U))) 
                                                  | (4U 
                                                     & ((vlSelfRef.picorv32__DOT___00002_ 
                                                         >> 0x1dU) 
                                                        & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5379) 
                                                           << 2U)))) 
                                                 | ((2U 
                                                     & ((vlSelfRef.picorv32__DOT___00002_ 
                                                         >> 0x1eU) 
                                                        & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5382) 
                                                           << 1U))) 
                                                    | ((vlSelfRef.picorv32__DOT___00002_ 
                                                        >> 0x1fU) 
                                                       & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5381)))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___act_comb__TOP__10(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___act_comb__TOP__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4972;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4972 = 0;
    // Body
    vlSelfRef.picorv32__DOT___00939_ = ((2U & ((~ (IData)(vlSelfRef.picorv32__DOT___00181_)) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlSelfRef.picorv32__DOT___00557_) 
                                                 | (((IData)(vlSelfRef.picorv32__DOT___00556_) 
                                                     >> 2U) 
                                                    | (IData)(vlSelfRef.picorv32__DOT___00943_)))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4787 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5581) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4788 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5580) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4972 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5451) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT___00943_) 
                 | ((IData)(vlSelfRef.picorv32__DOT___00939_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_478 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5004) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4972));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4437 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3194) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480));
}
