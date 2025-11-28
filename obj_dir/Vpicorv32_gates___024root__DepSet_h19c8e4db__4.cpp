// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_gates.h for the primary calling header

#include "Vpicorv32_gates__pch.h"
#include "Vpicorv32_gates___024root.h"

VL_INLINE_OPT void Vpicorv32_gates___024root___nba_comb__TOP__1(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___nba_comb__TOP__1\n"); );
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5281 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5648) 
                 ^ (IData)(vlSelfRef.picorv32__DOT__decoded_rs1)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5284 
        = (3U & ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5646) 
                   << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5645)) 
                 ^ ((IData)(vlSelfRef.picorv32__DOT__decoded_rs1) 
                    >> 1U)));
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5278 
        = (7U & ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5660) 
                   << 2U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5659) 
                              << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5661))) 
                 ^ ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5279 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5652) 
                 ^ (IData)(vlSelfRef.picorv32__DOT__decoded_rs2)));
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

VL_INLINE_OPT void Vpicorv32_gates___024root___nba_comb__TOP__2(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___nba_comb__TOP__2\n"); );
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
    picorv32__DOT___01666_ = ((IData)(vlSelfRef.picorv32__DOT___01641_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 3U));
    picorv32__DOT___01636_ = (((IData)(vlSelfRef.picorv32__DOT___01642_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01641_)) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 3U));
    picorv32__DOT___01671_ = ((IData)(vlSelfRef.picorv32__DOT___01651_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0x17U));
    picorv32__DOT___01665_ = (((IData)(vlSelfRef.picorv32__DOT___01652_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01651_)) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0x17U));
    picorv32__DOT___01668_ = ((IData)(vlSelfRef.picorv32__DOT___01645_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0xbU));
    picorv32__DOT___01670_ = ((IData)(vlSelfRef.picorv32__DOT___01649_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0x13U));
    picorv32__DOT___01667_ = ((IData)(vlSelfRef.picorv32__DOT___01643_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 7U));
    picorv32__DOT___01669_ = ((IData)(vlSelfRef.picorv32__DOT___01647_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0xfU));
    picorv32__DOT___01663_ = ((IData)(vlSelfRef.picorv32__DOT___01655_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 7U));
    picorv32__DOT___01639_ = (((IData)(vlSelfRef.picorv32__DOT___01656_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01655_)) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 7U));
    picorv32__DOT___01664_ = ((IData)(vlSelfRef.picorv32__DOT___01657_) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0xfU));
    picorv32__DOT___01662_ = (((IData)(vlSelfRef.picorv32__DOT___01658_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01657_)) 
                              & (vlSelfRef.picorv32__DOT___01138_ 
                                 >> 0xfU));
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

VL_INLINE_OPT void Vpicorv32_gates___024root___nba_comb__TOP__3(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___nba_comb__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT___01710_;
    picorv32__DOT___01710_ = 0;
    // Body
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

VL_INLINE_OPT void Vpicorv32_gates___024root___nba_comb__TOP__4(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___nba_comb__TOP__4\n"); );
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
        picorv32__DOT____VdfgRegularize_h2364b514_0_3237 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5729;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3234 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5732;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3235 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5731;
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
    } else {
        picorv32__DOT____VdfgRegularize_h2364b514_0_3197 
            = (1U & (~ (IData)(vlSelfRef.picorv32__DOT__reg_sh)));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3264 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5734;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3237 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5761;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3234 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5764;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3235 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5763;
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5417 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3237));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5420 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3234));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5419 
        = ((IData)(vlSelfRef.picorv32__DOT___00184_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3235));
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_831 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_830) 
           & (IData)(vlSelfRef.picorv32__DOT___00050_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_851 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_43) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_849));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___nba_comb__TOP__8(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___nba_comb__TOP__8\n"); );
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
    vlSelfRef.picorv32__DOT___01772_ = ((IData)(vlSelfRef.picorv32__DOT___01743_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 3U));
    vlSelfRef.picorv32__DOT___01735_ = (((IData)(vlSelfRef.picorv32__DOT___01744_) 
                                         & (IData)(vlSelfRef.picorv32__DOT___01743_)) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 3U));
    vlSelfRef.picorv32__DOT___01777_ = ((IData)(vlSelfRef.picorv32__DOT___01753_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0x17U));
    vlSelfRef.picorv32__DOT___01774_ = ((IData)(vlSelfRef.picorv32__DOT___01747_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0xbU));
    vlSelfRef.picorv32__DOT___01773_ = ((IData)(vlSelfRef.picorv32__DOT___01745_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 7U));
    vlSelfRef.picorv32__DOT___01775_ = ((IData)(vlSelfRef.picorv32__DOT___01749_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0xfU));
    vlSelfRef.picorv32__DOT___01776_ = ((IData)(vlSelfRef.picorv32__DOT___01751_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0x13U));
    vlSelfRef.picorv32__DOT___01771_ = ((IData)(vlSelfRef.picorv32__DOT___01762_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0x17U));
    vlSelfRef.picorv32__DOT___01769_ = ((IData)(vlSelfRef.picorv32__DOT___01758_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 7U));
    vlSelfRef.picorv32__DOT___01739_ = (((IData)(vlSelfRef.picorv32__DOT___01759_) 
                                         & (IData)(vlSelfRef.picorv32__DOT___01758_)) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 7U));
    vlSelfRef.picorv32__DOT___01770_ = ((IData)(vlSelfRef.picorv32__DOT___01760_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0xfU));
    vlSelfRef.picorv32__DOT___01768_ = ((IData)(vlSelfRef.picorv32__DOT___01765_) 
                                        & (vlSelfRef.picorv32__DOT___01148_ 
                                           >> 0xfU));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___nba_comb__TOP__15(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___nba_comb__TOP__15\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___00943_ = (((IData)((0U 
                                                  != (IData)(vlSelfRef.picorv32__DOT___00557_))) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelfRef.picorv32__DOT___00169_))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5004 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5515) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5324 
        = ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5585) 
             & (IData)(vlSelfRef.picorv32__DOT___00943_)) 
            << 1U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5584) 
                      & (IData)(vlSelfRef.picorv32__DOT___00943_)));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___nba_comb__TOP__26(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___nba_comb__TOP__26\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_INLINE_OPT void Vpicorv32_gates___024root___nba_comb__TOP__30(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___nba_comb__TOP__30\n"); );
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT___00943_) 
                 | ((IData)(vlSelfRef.picorv32__DOT___00939_) 
                    >> 1U)));
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4437 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3194) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_478 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5004) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4972));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___nba_comb__TOP__39(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___nba_comb__TOP__39\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT___00048_;
    picorv32__DOT___00048_ = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_44;
    picorv32__DOT____VdfgRegularize_h2364b514_0_44 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_45;
    picorv32__DOT____VdfgRegularize_h2364b514_0_45 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_828;
    picorv32__DOT____VdfgRegularize_h2364b514_0_828 = 0;
    // Body
    vlSelfRef.picorv32__DOT___00557_ = (((IData)((((IData)(vlSelfRef.picorv32__DOT___00556_) 
                                                   >> 2U) 
                                                  | ((IData)(vlSelfRef.picorv32__DOT___00939_) 
                                                     >> 1U))) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlSelfRef.picorv32__DOT___00556_) 
                                                      | (IData)(vlSelfRef.picorv32__DOT___00049_))));
    vlSelfRef.picorv32__DOT___00947_ = ((2U & ((~ (IData)(vlSelfRef.picorv32__DOT___00155_)) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlSelfRef.picorv32__DOT___00557_) 
                                                 | ((((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                                      | (IData)(vlSelfRef.picorv32__DOT___00939_)) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.picorv32__DOT___00943_)))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_105 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT___00947_) 
                  | (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT___00979_ = ((2U & ((~ ((IData)(vlSelfRef.picorv32__DOT___00691_) 
                                                   >> 3U)) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                                 >> 1U)));
    vlSelfRef.picorv32__DOT___00963_ = (((8U & ((~ (IData)(vlSelfRef.picorv32__DOT___00153_)) 
                                                << 3U)) 
                                         | (4U & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                                  << 1U))) 
                                        | ((2U & ((~ (IData)(vlSelfRef.picorv32__DOT___00152_)) 
                                                  << 1U)) 
                                           | (1U & (IData)(vlSelfRef.picorv32__DOT___00943_))));
    vlSelfRef.picorv32__DOT___00072_ = ((IData)(vlSelfRef.picorv32__DOT__decoder_trigger) 
                                        & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                           >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5877 
        = ((~ (IData)(vlSelfRef.picorv32__DOT__instr_jal)) 
           & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4585 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3202) 
           & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
              >> 1U));
    vlSelfRef.picorv32__DOT___00556_ = ((4U & (((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                                | (IData)(vlSelfRef.picorv32__DOT___00963_)) 
                                               << 1U)) 
                                        | (((IData)(vlSelfRef.picorv32__DOT___00049_) 
                                            << 1U) 
                                           | (1U & 
                                              ((~ (IData)(vlSelfRef.picorv32__DOT___00726_)) 
                                               | ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                                  >> 1U)))));
    vlSelfRef.picorv32__DOT___00036_ = (1U & ((IData)(vlSelfRef.picorv32__DOT___00943_) 
                                              | ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_828 
        = (1U & (((IData)(vlSelfRef.picorv32__DOT___00979_) 
                  | (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                 >> 1U));
    vlSelfRef.picorv32__DOT___00033_ = (1U & (((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                               | (IData)(vlSelfRef.picorv32__DOT___00979_)) 
                                              >> 1U));
    picorv32__DOT___00048_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480) 
                              | ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                 >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4574 
        = ((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    vlSelfRef.picorv32__DOT___00695_ = (((0x20U & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                                                   << 4U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                                << 3U)) 
                                            | (8U & (IData)(vlSelfRef.picorv32__DOT___00963_)))) 
                                        | ((4U & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                                  << 1U)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_900) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.resetn))))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_481 
        = (IData)((0U != (0xaU & (IData)(vlSelfRef.picorv32__DOT___00963_))));
    vlSelfRef.picorv32__DOT___00236_ = (1U & (((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                               | (IData)(vlSelfRef.picorv32__DOT___00972_)) 
                                              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_380 
        = (IData)((((IData)(vlSelfRef.picorv32__DOT___00963_) 
                    >> 3U) | ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                              >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_107 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480) 
                 | ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_316 
        = (IData)((((IData)(vlSelfRef.picorv32__DOT___00947_) 
                    >> 1U) | ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                              >> 3U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_315 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT___00943_) 
                 | ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT___00063_ = (((IData)(vlSelfRef.picorv32__DOT___00036_) 
                                         & (IData)(vlSelfRef.picorv32__DOT___00035_)) 
                                        & (IData)(vlSelfRef.picorv32__DOT___00034_));
    vlSelfRef.picorv32__DOT___00062_ = (((IData)(vlSelfRef.resetn) 
                                         & (IData)(vlSelfRef.picorv32__DOT___00033_)) 
                                        & ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                           | (IData)(vlSelfRef.picorv32__DOT___00155_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_44 
        = ((IData)(vlSelfRef.picorv32__DOT___00047_) 
           & (IData)(picorv32__DOT___00048_));
    vlSelfRef.picorv32__DOT___01033_ = ((- (IData)((IData)(picorv32__DOT___00048_))) 
                                        & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5324) 
                                           | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4787) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4788))));
    vlSelfRef.picorv32__DOT___00055_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480) 
                                        | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_481));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_801 
        = ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_840) 
             | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_481)) 
            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_828)) 
           & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_840) 
              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5875)));
    vlSelfRef.picorv32__DOT___01159_ = ((IData)(vlSelfRef.picorv32__DOT___00236_) 
                                        | ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                           >> 3U));
    vlSelfRef.picorv32__DOT___01162_ = (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_107) 
                                         | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_105)) 
                                        | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_380));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_156 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_315) 
           | ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_827 
        = (IData)((((IData)(vlSelfRef.picorv32__DOT___00979_) 
                    >> 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_315)));
    vlSelfRef.picorv32__DOT___01158_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_315) 
                                        | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_316));
    picorv32__DOT____VdfgRegularize_h2364b514_0_45 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_41) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_44));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_848 
        = (((IData)(vlSelfRef.picorv32__DOT___00184_) 
            | (IData)(vlSelfRef.picorv32__DOT___00152_)) 
           & (IData)(vlSelfRef.picorv32__DOT___00055_));
    vlSelfRef.picorv32__DOT___00067_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_46) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_45));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_850 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_848) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_847));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___nba_comb__TOP__50(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___nba_comb__TOP__50\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4474 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5598) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4969 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5390) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4970 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5389) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4967 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5392) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4968 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5391) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4965 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5394) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4966 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5393) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4963 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5396) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4964 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5395) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4961 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5398) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4962 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5397) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4959 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5400) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4960 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5399) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4957 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5402) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4958 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5401) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4955 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5404) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4956 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5403) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4953 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5406) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4954 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5405) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4951 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5408) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4952 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5407) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4949 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5410) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4950 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5409) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4947 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5412) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4948 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5411) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4945 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5414) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4942 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5417) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4939 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5420) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4940 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5419) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4946 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5413) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4943 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5416) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4944 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5415) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4941 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5418) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    vlSelfRef.picorv32__DOT___00656_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_851) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_850));
    vlSelfRef.picorv32__DOT___00070_ = ((IData)(vlSelfRef.picorv32__DOT___00656_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___00050_));
}

void Vpicorv32_gates___024root___eval_triggers__act(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___eval_act(Vpicorv32_gates___024root* vlSelf);

bool Vpicorv32_gates___024root___eval_phase__act(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<71> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpicorv32_gates___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpicorv32_gates___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vpicorv32_gates___024root___eval_nba(Vpicorv32_gates___024root* vlSelf);

bool Vpicorv32_gates___024root___eval_phase__nba(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpicorv32_gates___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_gates___024root___dump_triggers__ico(Vpicorv32_gates___024root* vlSelf);
#endif  // VL_DEBUG
bool Vpicorv32_gates___024root___eval_phase__ico(Vpicorv32_gates___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_gates___024root___dump_triggers__nba(Vpicorv32_gates___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_gates___024root___dump_triggers__act(Vpicorv32_gates___024root* vlSelf);
#endif  // VL_DEBUG

void Vpicorv32_gates___024root___eval(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___eval\n"); );
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
            Vpicorv32_gates___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("picorv32_gates.v", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vpicorv32_gates___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpicorv32_gates___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("picorv32_gates.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vpicorv32_gates___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("picorv32_gates.v", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpicorv32_gates___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpicorv32_gates___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpicorv32_gates___024root___eval_debug_assertions(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
    if (VL_UNLIKELY((vlSelfRef.mem_ready & 0xfeU))) {
        Verilated::overWidthError("mem_ready");}
    if (VL_UNLIKELY((vlSelfRef.pcpi_wr & 0xfeU))) {
        Verilated::overWidthError("pcpi_wr");}
    if (VL_UNLIKELY((vlSelfRef.pcpi_wait & 0xfeU))) {
        Verilated::overWidthError("pcpi_wait");}
    if (VL_UNLIKELY((vlSelfRef.pcpi_ready & 0xfeU))) {
        Verilated::overWidthError("pcpi_ready");}
}
#endif  // VL_DEBUG
