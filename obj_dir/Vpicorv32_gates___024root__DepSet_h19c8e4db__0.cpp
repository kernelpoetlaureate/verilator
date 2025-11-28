// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_gates.h for the primary calling header

#include "Vpicorv32_gates__pch.h"
#include "Vpicorv32_gates___024root.h"

void Vpicorv32_gates___024root___ico_sequent__TOP__0(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__0(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__1(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__2(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__3(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__4(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__5(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__6(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__7(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__8(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__9(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__10(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__11(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___ico_comb__TOP__12(Vpicorv32_gates___024root* vlSelf);

void Vpicorv32_gates___024root___eval_ico(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x3801ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((9ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0x70001ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x20001ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x41ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((0x11ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((0x3e01ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((0x7c001ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((0x61ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__11(vlSelf);
    }
    if ((0x7c181ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vpicorv32_gates___024root___ico_comb__TOP__12(vlSelf);
    }
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_sequent__TOP__0(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT___00025_;
    picorv32__DOT___00025_ = 0;
    CData/*0:0*/ picorv32__DOT___00046_;
    picorv32__DOT___00046_ = 0;
    CData/*0:0*/ picorv32__DOT___00048_;
    picorv32__DOT___00048_ = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_42;
    picorv32__DOT____VdfgRegularize_h2364b514_0_42 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_44;
    picorv32__DOT____VdfgRegularize_h2364b514_0_44 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_45;
    picorv32__DOT____VdfgRegularize_h2364b514_0_45 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_286;
    picorv32__DOT____VdfgRegularize_h2364b514_0_286 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_287;
    picorv32__DOT____VdfgRegularize_h2364b514_0_287 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_288;
    picorv32__DOT____VdfgRegularize_h2364b514_0_288 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_289;
    picorv32__DOT____VdfgRegularize_h2364b514_0_289 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_290;
    picorv32__DOT____VdfgRegularize_h2364b514_0_290 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_291;
    picorv32__DOT____VdfgRegularize_h2364b514_0_291 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_292;
    picorv32__DOT____VdfgRegularize_h2364b514_0_292 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_293;
    picorv32__DOT____VdfgRegularize_h2364b514_0_293 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_294;
    picorv32__DOT____VdfgRegularize_h2364b514_0_294 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_295;
    picorv32__DOT____VdfgRegularize_h2364b514_0_295 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_296;
    picorv32__DOT____VdfgRegularize_h2364b514_0_296 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_297;
    picorv32__DOT____VdfgRegularize_h2364b514_0_297 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_298;
    picorv32__DOT____VdfgRegularize_h2364b514_0_298 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_299;
    picorv32__DOT____VdfgRegularize_h2364b514_0_299 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_300;
    picorv32__DOT____VdfgRegularize_h2364b514_0_300 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_301;
    picorv32__DOT____VdfgRegularize_h2364b514_0_301 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_386;
    picorv32__DOT____VdfgRegularize_h2364b514_0_386 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_389;
    picorv32__DOT____VdfgRegularize_h2364b514_0_389 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_392;
    picorv32__DOT____VdfgRegularize_h2364b514_0_392 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_395;
    picorv32__DOT____VdfgRegularize_h2364b514_0_395 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_398;
    picorv32__DOT____VdfgRegularize_h2364b514_0_398 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_401;
    picorv32__DOT____VdfgRegularize_h2364b514_0_401 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_404;
    picorv32__DOT____VdfgRegularize_h2364b514_0_404 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_407;
    picorv32__DOT____VdfgRegularize_h2364b514_0_407 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_410;
    picorv32__DOT____VdfgRegularize_h2364b514_0_410 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_413;
    picorv32__DOT____VdfgRegularize_h2364b514_0_413 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_416;
    picorv32__DOT____VdfgRegularize_h2364b514_0_416 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_419;
    picorv32__DOT____VdfgRegularize_h2364b514_0_419 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_422;
    picorv32__DOT____VdfgRegularize_h2364b514_0_422 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_425;
    picorv32__DOT____VdfgRegularize_h2364b514_0_425 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_428;
    picorv32__DOT____VdfgRegularize_h2364b514_0_428 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_431;
    picorv32__DOT____VdfgRegularize_h2364b514_0_431 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_434;
    picorv32__DOT____VdfgRegularize_h2364b514_0_434 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_437;
    picorv32__DOT____VdfgRegularize_h2364b514_0_437 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_440;
    picorv32__DOT____VdfgRegularize_h2364b514_0_440 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_443;
    picorv32__DOT____VdfgRegularize_h2364b514_0_443 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_446;
    picorv32__DOT____VdfgRegularize_h2364b514_0_446 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_449;
    picorv32__DOT____VdfgRegularize_h2364b514_0_449 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_452;
    picorv32__DOT____VdfgRegularize_h2364b514_0_452 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_455;
    picorv32__DOT____VdfgRegularize_h2364b514_0_455 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_458;
    picorv32__DOT____VdfgRegularize_h2364b514_0_458 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_461;
    picorv32__DOT____VdfgRegularize_h2364b514_0_461 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_464;
    picorv32__DOT____VdfgRegularize_h2364b514_0_464 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_467;
    picorv32__DOT____VdfgRegularize_h2364b514_0_467 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_470;
    picorv32__DOT____VdfgRegularize_h2364b514_0_470 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_473;
    picorv32__DOT____VdfgRegularize_h2364b514_0_473 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_476;
    picorv32__DOT____VdfgRegularize_h2364b514_0_476 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_719;
    picorv32__DOT____VdfgRegularize_h2364b514_0_719 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_721;
    picorv32__DOT____VdfgRegularize_h2364b514_0_721 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_723;
    picorv32__DOT____VdfgRegularize_h2364b514_0_723 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_726;
    picorv32__DOT____VdfgRegularize_h2364b514_0_726 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_728;
    picorv32__DOT____VdfgRegularize_h2364b514_0_728 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_729;
    picorv32__DOT____VdfgRegularize_h2364b514_0_729 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_730;
    picorv32__DOT____VdfgRegularize_h2364b514_0_730 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_804;
    picorv32__DOT____VdfgRegularize_h2364b514_0_804 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_807;
    picorv32__DOT____VdfgRegularize_h2364b514_0_807 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_808;
    picorv32__DOT____VdfgRegularize_h2364b514_0_808 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_809;
    picorv32__DOT____VdfgRegularize_h2364b514_0_809 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_828;
    picorv32__DOT____VdfgRegularize_h2364b514_0_828 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_829;
    picorv32__DOT____VdfgRegularize_h2364b514_0_829 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_838;
    picorv32__DOT____VdfgRegularize_h2364b514_0_838 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_839;
    picorv32__DOT____VdfgRegularize_h2364b514_0_839 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_841;
    picorv32__DOT____VdfgRegularize_h2364b514_0_841 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_843;
    picorv32__DOT____VdfgRegularize_h2364b514_0_843 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_849;
    picorv32__DOT____VdfgRegularize_h2364b514_0_849 = 0;
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
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4686;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4686 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4687;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4687 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4688;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4688 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4689;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4689 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4690;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4690 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4691;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4691 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4692;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4692 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4693;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4693 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4694;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4694 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4695;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4695 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4696;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4696 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4697;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4697 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4698;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4698 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4699;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4699 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4700;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4700 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4701;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4701 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4702;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4702 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4703;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4703 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4704;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4704 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4705;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4705 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4706;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4706 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4707;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4707 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4708;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4708 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4709;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4709 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4710;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4710 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4711;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4711 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4712;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4712 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4713;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4713 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4714;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4714 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4715;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4715 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4716;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4716 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4717;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4717 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4783;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4783 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4971;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4971 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4972;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4972 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4973;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4973 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4974;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4974 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4975;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4975 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4976;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4976 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4977;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4977 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4978;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4978 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4979;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4979 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4980;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4980 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4981;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4981 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4982;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4982 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4983;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4983 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4984;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4984 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4985;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4985 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4986;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4986 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4987;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4987 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4988;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4988 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4989;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4989 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4990;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4990 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4991;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4991 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4992;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4992 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4993;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4993 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4994;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4994 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4995;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4995 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4996;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4996 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4997;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4997 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4998;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4998 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4999;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4999 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5000;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5000 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5001;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5001 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5002;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5002 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5317;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5317 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5318;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5318 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5319;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5319 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5891;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5891 = 0;
    // Body
    vlSelfRef.picorv32__DOT___00068_ = ((IData)(vlSelfRef.picorv32__DOT___00049_) 
                                        & (IData)(vlSelfRef.resetn));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5876 
        = ((IData)(vlSelfRef.picorv32__DOT__decoder_trigger) 
           & (IData)(vlSelfRef.resetn));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_713 
        = (1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.picorv32__DOT__latched_store)));
    vlSelfRef.picorv32__DOT___00825_ = (((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
                                         & (IData)(vlSelfRef.resetn)) 
                                        & (vlSelfRef.picorv32__DOT__reg_next_pc 
                                           | (IData)(vlSelfRef.picorv32__DOT__reg_pc_reg__05b1__05d)));
    vlSelfRef.picorv32__DOT___00011_ = (((((IData)(vlSelfRef.resetn) 
                                           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5823)) 
                                          << 4U) | 
                                         ((((IData)(vlSelfRef.resetn) 
                                            & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5825)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.resetn) 
                                            & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5824)) 
                                           << 2U))) 
                                        | ((((IData)(vlSelfRef.resetn) 
                                             & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5827)) 
                                            << 1U) 
                                           | ((IData)(vlSelfRef.resetn) 
                                              & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5826))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_839 
        = (1U & ((~ (IData)(vlSelfRef.resetn)) | (~ (IData)(vlSelfRef.picorv32__DOT___00184_))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_893 
        = (1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.mem_ready)));
    vlSelfRef.picorv32__DOT___00821_ = ((IData)(vlSelfRef.resetn) 
                                        & ((IData)(vlSelfRef.picorv32__DOT__mem_do_rdata) 
                                           | (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4716 
        = ((vlSelfRef.mem_rdata >> 7U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                          >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4717 
        = ((vlSelfRef.mem_rdata >> 6U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                          >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4714 
        = ((vlSelfRef.mem_rdata >> 5U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                          >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4715 
        = ((vlSelfRef.mem_rdata >> 4U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                          >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4712 
        = (1U & ((vlSelfRef.mem_rdata & (IData)(vlSelfRef.picorv32__DOT___01096_)) 
                 >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4713 
        = ((vlSelfRef.mem_rdata >> 2U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                          >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4710 
        = ((vlSelfRef.mem_rdata >> 1U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                          >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4711 
        = (vlSelfRef.mem_rdata & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                  >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4708 
        = (1U & ((vlSelfRef.mem_rdata >> 0xfU) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                  >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4709 
        = (1U & ((vlSelfRef.mem_rdata >> 0xeU) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                  >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4706 
        = (1U & ((vlSelfRef.mem_rdata >> 0xdU) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                  >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4707 
        = (1U & ((vlSelfRef.mem_rdata >> 0xcU) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                  >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4704 
        = (1U & ((vlSelfRef.mem_rdata >> 0xbU) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                  >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4705 
        = (1U & ((vlSelfRef.mem_rdata >> 0xaU) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                  >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4702 
        = (1U & ((vlSelfRef.mem_rdata >> 9U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4703 
        = (1U & ((vlSelfRef.mem_rdata >> 8U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                >> 2U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4700 
        = (1U & ((vlSelfRef.mem_rdata >> 0x17U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                   >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4701 
        = (1U & ((vlSelfRef.mem_rdata >> 0x16U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                   >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4698 
        = (1U & ((vlSelfRef.mem_rdata >> 0x15U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                   >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4699 
        = (1U & ((vlSelfRef.mem_rdata >> 0x14U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                   >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4696 
        = (1U & ((vlSelfRef.mem_rdata >> 0x13U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                   >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4697 
        = (1U & ((vlSelfRef.mem_rdata >> 0x12U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                   >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4694 
        = (1U & ((vlSelfRef.mem_rdata >> 0x11U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                   >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4695 
        = (1U & ((vlSelfRef.mem_rdata >> 0x10U) & ((IData)(vlSelfRef.picorv32__DOT___01096_) 
                                                   >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4692 
        = ((vlSelfRef.mem_rdata >> 0x1fU) & (IData)(vlSelfRef.picorv32__DOT___01096_));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4693 
        = (1U & ((vlSelfRef.mem_rdata >> 0x1eU) & (IData)(vlSelfRef.picorv32__DOT___01096_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4690 
        = (1U & ((vlSelfRef.mem_rdata >> 0x1dU) & (IData)(vlSelfRef.picorv32__DOT___01096_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4691 
        = (1U & ((vlSelfRef.mem_rdata >> 0x1cU) & (IData)(vlSelfRef.picorv32__DOT___01096_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4688 
        = (1U & ((vlSelfRef.mem_rdata >> 0x1bU) & (IData)(vlSelfRef.picorv32__DOT___01096_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4689 
        = (1U & ((vlSelfRef.mem_rdata >> 0x1aU) & (IData)(vlSelfRef.picorv32__DOT___01096_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4686 
        = (1U & ((vlSelfRef.mem_rdata >> 0x19U) & (IData)(vlSelfRef.picorv32__DOT___01096_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4687 
        = (1U & ((vlSelfRef.mem_rdata >> 0x18U) & (IData)(vlSelfRef.picorv32__DOT___01096_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895 
        = (1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.trap)));
    vlSelfRef.mem_la_read = ((IData)(vlSelfRef.resetn) 
                             & (((IData)(vlSelfRef.picorv32__DOT___01079_) 
                                 >> 3U) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_894)));
    vlSelfRef.mem_la_write = (((IData)(vlSelfRef.resetn) 
                               & ((IData)(vlSelfRef.picorv32__DOT___01079_) 
                                  >> 3U)) & (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata));
    vlSelfRef.picorv32__DOT___00691_ = ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_820) 
                                          << 3U) | 
                                         (4U & ((~ (IData)(vlSelfRef.picorv32__DOT__latched_branch)) 
                                                << 2U))) 
                                        | (((IData)(vlSelfRef.picorv32__DOT__latched_store) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.resetn)))));
    vlSelfRef.picorv32__DOT__mem_xfer = ((IData)(vlSelfRef.mem_ready) 
                                         & (IData)(vlSelfRef.mem_valid));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5632 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5601));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5631 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5600));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5661 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5630));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5660 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5629));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5659 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5628));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5634 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5603));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5633 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5602));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5657 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5626));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5636 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5605));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5635 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5604));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5638 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5607));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5637 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5606));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5640 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5609));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5639 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5608));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5648 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5617));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5642 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5611));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5641 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5610));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5644 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5613));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5643 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5612));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5652 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5621));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5646 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5615));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5645 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5614));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5647 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5616));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5650 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5619));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5649 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5618));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5656 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5625));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5655 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5624));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5658 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5627));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5651 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5620));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5654 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5623));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5653 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5622));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5904 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 0xfU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5903 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 0xeU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5906 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 0xdU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5905 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 0xcU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5908 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 0xbU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5907 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 0xaU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5910 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 9U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5909 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 8U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5912 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 7U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5911 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 6U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5914 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 5U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5913 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 4U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5916 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 3U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5915 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 2U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5918 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & (vlSelfRef.mem_rdata 
                                >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5917 
        = (1U & ((~ (vlSelfRef.picorv32__DOT__reg_op1 
                     >> 1U)) & vlSelfRef.mem_rdata));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4583 
        = ((vlSelfRef.mem_rdata >> 0x1fU) & (vlSelfRef.picorv32__DOT__reg_op1 
                                             >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4584 
        = (1U & ((vlSelfRef.mem_rdata >> 0x1eU) & (vlSelfRef.picorv32__DOT__reg_op1 
                                                   >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4581 
        = (1U & ((vlSelfRef.mem_rdata >> 0x1dU) & (vlSelfRef.picorv32__DOT__reg_op1 
                                                   >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4582 
        = (1U & ((vlSelfRef.mem_rdata >> 0x1cU) & (vlSelfRef.picorv32__DOT__reg_op1 
                                                   >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5323 
        = ((((0x800U & ((vlSelfRef.mem_rdata >> 0x10U) 
                        & (vlSelfRef.picorv32__DOT__reg_op1 
                           << 0xaU))) | ((0x400U & 
                                          ((vlSelfRef.mem_rdata 
                                            >> 0x10U) 
                                           & (vlSelfRef.picorv32__DOT__reg_op1 
                                              << 9U))) 
                                         | (0x200U 
                                            & ((vlSelfRef.mem_rdata 
                                                >> 0x10U) 
                                               & (vlSelfRef.picorv32__DOT__reg_op1 
                                                  << 8U))))) 
            | ((0x100U & ((vlSelfRef.mem_rdata >> 0x10U) 
                          & (vlSelfRef.picorv32__DOT__reg_op1 
                             << 7U))) | ((0x80U & (
                                                   (vlSelfRef.mem_rdata 
                                                    >> 0x10U) 
                                                   & (vlSelfRef.picorv32__DOT__reg_op1 
                                                      << 6U))) 
                                         | (0x40U & 
                                            ((vlSelfRef.mem_rdata 
                                              >> 0x10U) 
                                             & (vlSelfRef.picorv32__DOT__reg_op1 
                                                << 5U)))))) 
           | (((0x20U & ((vlSelfRef.mem_rdata >> 0x10U) 
                         & (vlSelfRef.picorv32__DOT__reg_op1 
                            << 4U))) | ((0x10U & ((vlSelfRef.mem_rdata 
                                                   >> 0x10U) 
                                                  & (vlSelfRef.picorv32__DOT__reg_op1 
                                                     << 3U))) 
                                        | (8U & ((vlSelfRef.mem_rdata 
                                                  >> 0x10U) 
                                                 & (vlSelfRef.picorv32__DOT__reg_op1 
                                                    << 2U))))) 
              | ((4U & ((vlSelfRef.mem_rdata >> 0x10U) 
                        & (vlSelfRef.picorv32__DOT__reg_op1 
                           << 1U))) | ((2U & ((vlSelfRef.mem_rdata 
                                               >> 0x10U) 
                                              & vlSelfRef.picorv32__DOT__reg_op1)) 
                                       | (1U & ((vlSelfRef.mem_rdata 
                                                 >> 0x10U) 
                                                & (vlSelfRef.picorv32__DOT__reg_op1 
                                                   >> 1U)))))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_300 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4708) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4716));
    picorv32__DOT____VdfgRegularize_h2364b514_0_298 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4709) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4717));
    picorv32__DOT____VdfgRegularize_h2364b514_0_296 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4706) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4714));
    picorv32__DOT____VdfgRegularize_h2364b514_0_294 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4707) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4715));
    picorv32__DOT____VdfgRegularize_h2364b514_0_292 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4704) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4712));
    picorv32__DOT____VdfgRegularize_h2364b514_0_290 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4705) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4713));
    picorv32__DOT____VdfgRegularize_h2364b514_0_288 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4702) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4710));
    picorv32__DOT____VdfgRegularize_h2364b514_0_286 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4703) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4711));
    picorv32__DOT____VdfgRegularize_h2364b514_0_301 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4692) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4700));
    picorv32__DOT____VdfgRegularize_h2364b514_0_299 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4693) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4701));
    picorv32__DOT____VdfgRegularize_h2364b514_0_297 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4690) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4698));
    picorv32__DOT____VdfgRegularize_h2364b514_0_295 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4691) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4699));
    picorv32__DOT____VdfgRegularize_h2364b514_0_293 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4688) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4696));
    picorv32__DOT____VdfgRegularize_h2364b514_0_291 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4689) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4697));
    picorv32__DOT____VdfgRegularize_h2364b514_0_289 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4686) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4694));
    picorv32__DOT____VdfgRegularize_h2364b514_0_287 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4687) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4695));
    picorv32__DOT____VdfgRegularize_h2364b514_0_843 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895) 
           | ((IData)(vlSelfRef.picorv32__DOT___01079_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_804 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895) 
                 | (IData)(vlSelfRef.picorv32__DOT___01079_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_797 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895) 
           | (IData)(vlSelfRef.picorv32__DOT___00175_));
    vlSelfRef.picorv32__DOT___00059_ = ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895)) 
                                        & (IData)(vlSelfRef.mem_la_write));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5319 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5666) 
           & (IData)(vlSelfRef.mem_la_write));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5317 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5665) 
           & (IData)(vlSelfRef.mem_la_write));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5318 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5320) 
           & (- (IData)((IData)(vlSelfRef.mem_la_write))));
    vlSelfRef.picorv32__DOT___00840_ = ((IData)(vlSelfRef.mem_la_read) 
                                        | (IData)(vlSelfRef.mem_la_write));
    vlSelfRef.picorv32__DOT___00979_ = ((2U & ((~ ((IData)(vlSelfRef.picorv32__DOT___00691_) 
                                                   >> 3U)) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                                 >> 1U)));
    vlSelfRef.picorv32__DOT___00690_ = (((IData)(vlSelfRef.picorv32__DOT___00179_) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.picorv32__DOT__mem_xfer)));
    if (vlSelfRef.picorv32__DOT__mem_xfer) {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2938 
            = (1U & (vlSelfRef.mem_rdata >> 0xeU));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2932 
            = (1U & (vlSelfRef.mem_rdata >> 0xdU));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2934 
            = (1U & (vlSelfRef.mem_rdata >> 0xcU));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2957 
            = (1U & (vlSelfRef.mem_rdata >> 0x18U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2952 
            = (1U & (vlSelfRef.mem_rdata >> 0x17U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2954 
            = (1U & (vlSelfRef.mem_rdata >> 0x16U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2948 
            = (1U & (vlSelfRef.mem_rdata >> 0x15U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2950 
            = (1U & (vlSelfRef.mem_rdata >> 0x14U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2944 
            = (1U & (vlSelfRef.mem_rdata >> 0x13U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2946 
            = (1U & (vlSelfRef.mem_rdata >> 0x12U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2940 
            = (1U & (vlSelfRef.mem_rdata >> 0x11U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2942 
            = (1U & (vlSelfRef.mem_rdata >> 0x10U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2936 
            = (1U & (vlSelfRef.mem_rdata >> 0xfU));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2913 
            = (1U & (vlSelfRef.mem_rdata >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2915 
            = (1U & vlSelfRef.mem_rdata);
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2926 
            = (1U & (vlSelfRef.mem_rdata >> 6U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2917 
            = (1U & (vlSelfRef.mem_rdata >> 3U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2919 
            = (1U & (vlSelfRef.mem_rdata >> 2U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2921 
            = (1U & (vlSelfRef.mem_rdata >> 5U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2923 
            = (1U & (vlSelfRef.mem_rdata >> 4U));
    } else {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2938 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0xeU));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2932 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0xdU));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2934 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0xcU));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2957 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0x18U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2952 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0x17U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2954 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0x16U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2948 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0x15U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2950 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0x14U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2944 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0x13U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2946 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0x12U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2940 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0x11U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2942 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0x10U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2936 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 0xfU));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2913 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 1U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2915 
            = (1U & vlSelfRef.picorv32__DOT__mem_rdata_q);
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2926 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 6U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2917 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 3U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2919 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 2U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2921 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 5U));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2923 
            = (1U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                     >> 4U));
    }
    vlSelfRef.picorv32__DOT___00191_ = ((IData)(vlSelfRef.picorv32__DOT__mem_xfer) 
                                        | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895));
    vlSelfRef.picorv32__DOT__mem_done = ((IData)(vlSelfRef.resetn) 
                                         & ((((IData)(vlSelfRef.picorv32__DOT__mem_xfer) 
                                              & (IData)(vlSelfRef.picorv32__DOT___00175_)) 
                                             & ((IData)(vlSelfRef.picorv32__DOT___00837_) 
                                                | (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata))) 
                                            | ((IData)(
                                                       (3U 
                                                        == (IData)(vlSelfRef.picorv32__DOT__mem_state))) 
                                               & (IData)(vlSelfRef.picorv32__DOT__mem_do_rinst))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5298 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5632) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5296 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5631) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5274 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5660) 
           ^ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5659));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5278 
        = (7U & ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5660) 
                   << 2U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5659) 
                              << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5661))) 
                 ^ ((IData)(vlSelfRef.picorv32__DOT__decoded_rs2) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5297 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5634) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5294 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5633) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5277 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5657) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 4U)));
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
    vlSelfRef.picorv32__DOT___01360_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5638) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5637));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5290 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5637) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5291 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5640) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5288 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5639) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5281 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5648) 
                 ^ (IData)(vlSelfRef.picorv32__DOT__decoded_rs1)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5289 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5642) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0x1eU)));
    vlSelfRef.picorv32__DOT___01358_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5642) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5641));
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5279 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5652) 
                 ^ (IData)(vlSelfRef.picorv32__DOT__decoded_rs2)));
    vlSelfRef.picorv32__DOT___01356_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5646) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5645));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5284 
        = (3U & ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5646) 
                   << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5645)) 
                 ^ ((IData)(vlSelfRef.picorv32__DOT__decoded_rs1) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT___01354_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5650) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5649));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5282 
        = (7U & ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5647) 
                   << 2U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5650) 
                              << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5649))) 
                 ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                    >> 0xcU)));
    vlSelfRef.picorv32__DOT___01350_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5658) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5657));
    vlSelfRef.picorv32__DOT___01352_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5654) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5653));
    vlSelfRef.picorv32__DOT___01124_ = (((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5632) 
                                             << 0x1fU) 
                                            | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5631) 
                                               << 0x1eU)) 
                                           | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5634) 
                                               << 0x1dU) 
                                              | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5633) 
                                                 << 0x1cU))) 
                                          | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5636) 
                                               << 0x1bU) 
                                              | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5635) 
                                                 << 0x1aU)) 
                                             | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5638) 
                                                 << 0x19U) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5637) 
                                                   << 0x18U)))) 
                                         | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5640) 
                                               << 0x17U) 
                                              | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5639) 
                                                 << 0x16U)) 
                                             | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5642) 
                                                 << 0x15U) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5641) 
                                                   << 0x14U))) 
                                            | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5644) 
                                                 << 0x13U) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5643) 
                                                   << 0x12U)) 
                                               | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5646) 
                                                   << 0x11U) 
                                                  | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5645) 
                                                     << 0x10U))))) 
                                        | ((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5648) 
                                               << 0xfU) 
                                              | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5647) 
                                                 << 0xeU)) 
                                             | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5650) 
                                                 << 0xdU) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5649) 
                                                   << 0xcU))) 
                                            | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5652) 
                                                 << 0xbU) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5651) 
                                                   << 0xaU)) 
                                               | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5654) 
                                                   << 9U) 
                                                  | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5653) 
                                                     << 8U)))) 
                                           | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5656) 
                                                 << 7U) 
                                                | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5655) 
                                                   << 6U)) 
                                               | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5658) 
                                                   << 5U) 
                                                  | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5657) 
                                                     << 4U))) 
                                              | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5660) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5659) 
                                                     << 2U)) 
                                                 | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5661) 
                                                    << 1U)))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5348 
        = ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5651) 
             << 5U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5654) 
                        << 4U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5653) 
                                  << 3U))) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5656) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5655) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5658))));
    vlSelfRef.picorv32__DOT___01101_ = ((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4583) 
                                            << 0xfU) 
                                           | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4584) 
                                              << 0xeU)) 
                                          | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4581) 
                                              << 0xdU) 
                                             | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4582) 
                                                << 0xcU))) 
                                         | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5904) 
                                              << 0xfU) 
                                             | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5903) 
                                                << 0xeU)) 
                                            | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5906) 
                                                << 0xdU) 
                                               | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5905) 
                                                  << 0xcU)))) 
                                        | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5323) 
                                           | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5908) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5907) 
                                                    << 0xaU) 
                                                   | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5910) 
                                                      << 9U))) 
                                               | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5909) 
                                                   << 8U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5912) 
                                                      << 7U) 
                                                     | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5911) 
                                                        << 6U)))) 
                                              | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5914) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5913) 
                                                      << 4U) 
                                                     | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5916) 
                                                        << 3U))) 
                                                 | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5915) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5918) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5917)))))));
    vlSelfRef.picorv32__DOT___01098_ = ((((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_301) 
                                            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_300)) 
                                           << 7U) | 
                                          (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_299) 
                                            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_298)) 
                                           << 6U)) 
                                         | ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_297) 
                                              | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_296)) 
                                             << 5U) 
                                            | (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_295) 
                                                | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_294)) 
                                               << 4U))) 
                                        | (((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_293) 
                                              | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_292)) 
                                             << 3U) 
                                            | (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_291) 
                                                | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_290)) 
                                               << 2U)) 
                                           | ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_289) 
                                                | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_288)) 
                                               << 1U) 
                                              | ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_287) 
                                                 | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_286)))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_845 
        = (((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895)) 
            | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_893)) 
           & ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_843) 
              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_844)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_808 
        = (1U & ((((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_804) 
                   | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_803)) 
                  | ((IData)(vlSelfRef.picorv32__DOT___01079_) 
                     >> 2U)) & ((~ (IData)(vlSelfRef.resetn)) 
                                | (~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895)))));
    picorv32__DOT___00025_ = ((IData)(vlSelfRef.picorv32__DOT___00031_) 
                              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_797));
    if (vlSelfRef.picorv32__DOT___00840_) {
        vlSelfRef.picorv32__DOT___00060_ = (1U & (~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895)));
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
        vlSelfRef.picorv32__DOT___00060_ = 0U;
        picorv32__DOT____VdfgRegularize_h2364b514_0_3303 
            = (1U & ((IData)(vlSelfRef.mem_wstrb) >> 3U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3304 
            = (1U & ((IData)(vlSelfRef.mem_wstrb) >> 2U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3301 
            = (1U & ((IData)(vlSelfRef.mem_wstrb) >> 1U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3302 
            = (1U & (IData)(vlSelfRef.mem_wstrb));
    }
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_827 
        = (IData)((((IData)(vlSelfRef.picorv32__DOT___00979_) 
                    >> 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_315)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4783 
        = (IData)((((IData)(vlSelfRef.picorv32__DOT___01017_) 
                    >> 3U) & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                              >> 1U)));
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_380 
        = (IData)((((IData)(vlSelfRef.picorv32__DOT___00963_) 
                    >> 3U) | ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                              >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_807 
        = ((((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
             | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895)) 
            | (IData)(vlSelfRef.picorv32__DOT___00176_)) 
           & ((IData)(vlSelfRef.picorv32__DOT___00191_) 
              | (IData)(vlSelfRef.picorv32__DOT___00180_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_728 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2915)) 
                 | (~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2913))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_719 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2919)) 
                 | (~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2917))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_721 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2919)) 
                 | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2917)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_729 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2919) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2917));
    picorv32__DOT____VdfgRegularize_h2364b514_0_730 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2923)) 
                 | (~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2921))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_723 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2923) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2921));
    picorv32__DOT____VdfgRegularize_h2364b514_0_726 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2923)) 
                 | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2921)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5891 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2921)) 
                 | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2923)));
    vlSelfRef.picorv32__DOT__mem_rdata_latched = ((
                                                   ((((((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                         ? 
                                                        (vlSelfRef.mem_rdata 
                                                         >> 0x1fU)
                                                         : 
                                                        (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                         >> 0x1fU)) 
                                                       << 0x1fU) 
                                                      | (0x40000000U 
                                                         & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                              ? 
                                                             (vlSelfRef.mem_rdata 
                                                              >> 0x1eU)
                                                              : 
                                                             (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                              >> 0x1eU)) 
                                                            << 0x1eU))) 
                                                     | ((0x20000000U 
                                                         & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                              ? 
                                                             (vlSelfRef.mem_rdata 
                                                              >> 0x1dU)
                                                              : 
                                                             (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                              >> 0x1dU)) 
                                                            << 0x1dU)) 
                                                        | (0x10000000U 
                                                           & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                                ? 
                                                               (vlSelfRef.mem_rdata 
                                                                >> 0x1cU)
                                                                : 
                                                               (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                >> 0x1cU)) 
                                                              << 0x1cU)))) 
                                                    | (((0x8000000U 
                                                         & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                              ? 
                                                             (vlSelfRef.mem_rdata 
                                                              >> 0x1bU)
                                                              : 
                                                             (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                              >> 0x1bU)) 
                                                            << 0x1bU)) 
                                                        | (0x4000000U 
                                                           & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                                ? 
                                                               (vlSelfRef.mem_rdata 
                                                                >> 0x1aU)
                                                                : 
                                                               (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                >> 0x1aU)) 
                                                              << 0x1aU))) 
                                                       | ((0x2000000U 
                                                           & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                                ? 
                                                               (vlSelfRef.mem_rdata 
                                                                >> 0x19U)
                                                                : 
                                                               (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                >> 0x19U)) 
                                                              << 0x19U)) 
                                                          | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2957) 
                                                             << 0x18U)))) 
                                                   | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2952) 
                                                         << 0x17U) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2954) 
                                                           << 0x16U)) 
                                                       | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2948) 
                                                           << 0x15U) 
                                                          | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2950) 
                                                             << 0x14U))) 
                                                      | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2944) 
                                                           << 0x13U) 
                                                          | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2946) 
                                                             << 0x12U)) 
                                                         | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2940) 
                                                             << 0x11U) 
                                                            | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2942) 
                                                               << 0x10U))))) 
                                                  | ((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2936) 
                                                         << 0xfU) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2938) 
                                                           << 0xeU)) 
                                                       | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2932) 
                                                           << 0xdU) 
                                                          | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2934) 
                                                             << 0xcU))) 
                                                      | (((0x800U 
                                                           & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                                ? 
                                                               (vlSelfRef.mem_rdata 
                                                                >> 0xbU)
                                                                : 
                                                               (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                >> 0xbU)) 
                                                              << 0xbU)) 
                                                          | (0x400U 
                                                             & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                                  ? 
                                                                 (vlSelfRef.mem_rdata 
                                                                  >> 0xaU)
                                                                  : 
                                                                 (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                  >> 0xaU)) 
                                                                << 0xaU))) 
                                                         | ((0x200U 
                                                             & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                                  ? 
                                                                 (vlSelfRef.mem_rdata 
                                                                  >> 9U)
                                                                  : 
                                                                 (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                  >> 9U)) 
                                                                << 9U)) 
                                                            | (0x100U 
                                                               & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                                    ? 
                                                                   (vlSelfRef.mem_rdata 
                                                                    >> 8U)
                                                                    : 
                                                                   (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                    >> 8U)) 
                                                                  << 8U))))) 
                                                     | ((((0x80U 
                                                           & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
                                                                ? 
                                                               (vlSelfRef.mem_rdata 
                                                                >> 7U)
                                                                : 
                                                               (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                >> 7U)) 
                                                              << 7U)) 
                                                          | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2926) 
                                                             << 6U)) 
                                                         | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2921) 
                                                             << 5U) 
                                                            | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2923) 
                                                               << 4U))) 
                                                        | ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2917) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2919) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2913) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2915))))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_900 
        = (1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.picorv32__DOT__mem_done)));
    vlSelfRef.picorv32__DOT___00950_ = ((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
                                        & (IData)(vlSelfRef.picorv32__DOT__mem_done));
    vlSelfRef.picorv32__DOT___01010_ = ((((((~ (IData)(vlSelfRef.picorv32__DOT__mem_done)) 
                                            & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                               >> 7U)) 
                                           << 7U) | 
                                          (0x40U & 
                                           (((IData)(vlSelfRef.picorv32__DOT__mem_done) 
                                             << 6U) 
                                            | (0xffffffc0U 
                                               & (IData)(vlSelfRef.picorv32__DOT__cpu_state))))) 
                                         | ((0x20U 
                                             & (((~ (IData)(vlSelfRef.picorv32__DOT__mem_done)) 
                                                 << 5U) 
                                                & (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
                                            | (0x10U 
                                               & (((~ (IData)(vlSelfRef.picorv32__DOT__mem_done)) 
                                                   << 4U) 
                                                  & (IData)(vlSelfRef.picorv32__DOT__cpu_state))))) 
                                        | (((8U & (
                                                   ((~ (IData)(vlSelfRef.picorv32__DOT__mem_done)) 
                                                    << 3U) 
                                                   & (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
                                            | (4U & 
                                               (((~ (IData)(vlSelfRef.picorv32__DOT__mem_done)) 
                                                 << 2U) 
                                                & (IData)(vlSelfRef.picorv32__DOT__cpu_state)))) 
                                           | ((2U & 
                                               (((~ (IData)(vlSelfRef.picorv32__DOT__mem_done)) 
                                                 << 1U) 
                                                & (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
                                              | (1U 
                                                 & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_done)) 
                                                    & (IData)(vlSelfRef.picorv32__DOT__cpu_state))))));
    vlSelfRef.picorv32__DOT___00820_ = ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch)) 
                                        & (IData)(vlSelfRef.picorv32__DOT__mem_done));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch)) 
                 | (IData)(vlSelfRef.picorv32__DOT__mem_done)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3267 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT__instr_jal)
                  ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5278)
                  : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5661)));
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
    vlSelfRef.picorv32__DOT___01366_ = (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5644) 
                                         & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5643)) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01356_));
    vlSelfRef.picorv32__DOT___01455_ = (IData)((3U 
                                                == (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5284)));
    vlSelfRef.picorv32__DOT___01454_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5281) 
                                        & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5282) 
                                           >> 2U));
    vlSelfRef.picorv32__DOT___01453_ = (IData)((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5282))));
    vlSelfRef.picorv32__DOT___01364_ = (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5652) 
                                         & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5651)) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01352_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5280 
        = (0x3fU & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5348) 
                    ^ (vlSelfRef.picorv32__DOT__decoded_imm_j 
                       >> 5U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_846 
        = ((IData)(picorv32__DOT___00025_) & ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_844)) 
                                              | (IData)(vlSelfRef.picorv32__DOT___00191_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_809 
        = ((IData)(picorv32__DOT___00025_) & ((IData)(vlSelfRef.picorv32__DOT___00191_) 
                                              | (IData)(vlSelfRef.picorv32__DOT___00179_)));
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_377 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4784) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4783));
    vlSelfRef.picorv32__DOT___00062_ = (((IData)(vlSelfRef.resetn) 
                                         & (IData)(vlSelfRef.picorv32__DOT___00033_)) 
                                        & ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                           | (IData)(vlSelfRef.picorv32__DOT___00155_)));
    vlSelfRef.picorv32__DOT___01162_ = (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_107) 
                                         | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_105)) 
                                        | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_380));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_720 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_728) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_719));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_722 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_728) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_721));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_731 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_728) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_729));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_732 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_730) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2926));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_724 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_723) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2926));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_727 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_726) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2926));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5892 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2926)) 
                 | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5891)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_725 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5891) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_2926));
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_840 
        = (1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_900)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_838 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_900) 
           | (IData)(vlSelfRef.picorv32__DOT___00152_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3195 
        = ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu)
            ? ((~ (IData)(vlSelfRef.picorv32__DOT__alu_out_0)) 
               & (IData)(vlSelfRef.picorv32__DOT___00950_))
            : (IData)(vlSelfRef.picorv32__DOT___00950_));
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
    vlSelfRef.picorv32__DOT___01005_ = ((((((~ (IData)(vlSelfRef.picorv32__DOT___00820_)) 
                                            & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                                               >> 7U)) 
                                           << 7U) | 
                                          (0x40U & 
                                           (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                             << 6U) 
                                            | (0xffffffc0U 
                                               & (IData)(vlSelfRef.picorv32__DOT__cpu_state))))) 
                                         | ((0x20U 
                                             & (((~ (IData)(vlSelfRef.picorv32__DOT___00820_)) 
                                                 << 5U) 
                                                & (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
                                            | (0x10U 
                                               & (((~ (IData)(vlSelfRef.picorv32__DOT___00820_)) 
                                                   << 4U) 
                                                  & (IData)(vlSelfRef.picorv32__DOT__cpu_state))))) 
                                        | (((8U & (
                                                   ((~ (IData)(vlSelfRef.picorv32__DOT___00820_)) 
                                                    << 3U) 
                                                   & (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
                                            | (4U & 
                                               (((~ (IData)(vlSelfRef.picorv32__DOT___00820_)) 
                                                 << 2U) 
                                                & (IData)(vlSelfRef.picorv32__DOT__cpu_state)))) 
                                           | ((2U & 
                                               (((~ (IData)(vlSelfRef.picorv32__DOT___00820_)) 
                                                 << 1U) 
                                                & (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
                                              | (1U 
                                                 & ((~ (IData)(vlSelfRef.picorv32__DOT___00820_)) 
                                                    & (IData)(vlSelfRef.picorv32__DOT__cpu_state))))));
    if (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5663 
            = (1U & (~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5662 
            = (1U & (~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3194 
            = ((IData)(vlSelfRef.picorv32__DOT___00820_) 
               | (IData)(vlSelfRef.picorv32__DOT___00950_));
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5581 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5583;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5580 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5582;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5585 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5587;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5584 
            = vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5586;
    } else {
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5663 = 0U;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5662 = 0U;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3194 
            = vlSelfRef.picorv32__DOT___00950_;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5581 = 0U;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5580 = 0U;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5585 = 0U;
        vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5584 = 0U;
    }
    picorv32__DOT____VdfgRegularize_h2364b514_0_829 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897)) 
                 | (IData)(vlSelfRef.picorv32__DOT___00181_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_841 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897)) 
                 | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_898)));
    vlSelfRef.picorv32__DOT___00047_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
                                        | (IData)(vlSelfRef.picorv32__DOT___00181_));
    vlSelfRef.picorv32__DOT___00035_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
                                        | (IData)(vlSelfRef.picorv32__DOT___00169_));
    picorv32__DOT___00046_ = (1U & (((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                                     | (~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897))) 
                                    | (IData)(vlSelfRef.picorv32__DOT___00181_)));
    vlSelfRef.picorv32__DOT___00034_ = (1U & (((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)) 
                                               | (~ (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897))) 
                                              | (IData)(vlSelfRef.picorv32__DOT___00169_)));
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5451 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5483));
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5515 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5577));
    vlSelfRef.picorv32__DOT___00693_ = (((IData)(vlSelfRef.picorv32__DOT___00169_) 
                                         << 1U) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_897));
    vlSelfRef.picorv32__DOT___01466_ = ((IData)(vlSelfRef.picorv32__DOT___01458_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01457_));
    vlSelfRef.picorv32__DOT___01465_ = ((IData)(vlSelfRef.picorv32__DOT___01456_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01455_));
    vlSelfRef.picorv32__DOT___01464_ = ((IData)(vlSelfRef.picorv32__DOT___01454_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01453_));
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
    vlSelfRef.picorv32__DOT___00058_ = (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_809) 
                                         & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_808)) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_807));
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_801 
        = ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_840) 
             | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_481)) 
            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_828)) 
           & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_840) 
              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5875)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_802 
        = (((IData)(vlSelfRef.resetn) | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_900)) 
           & ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_839) 
              | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_838)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4436 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3195) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4437 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3194) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4787 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5581) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4788 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5580) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5324 
        = ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5585) 
             & (IData)(vlSelfRef.picorv32__DOT___00943_)) 
            << 1U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5584) 
                      & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_44 
        = ((IData)(vlSelfRef.picorv32__DOT___00047_) 
           & (IData)(picorv32__DOT___00048_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_43 
        = ((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT___00035_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_41 
        = ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5878) 
             | (IData)(vlSelfRef.picorv32__DOT___00335_)) 
            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_829)) 
           & (IData)(picorv32__DOT___00046_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_847 
        = ((IData)(picorv32__DOT___00046_) & (IData)(vlSelfRef.picorv32__DOT___00047_));
    vlSelfRef.picorv32__DOT___00063_ = (((IData)(vlSelfRef.picorv32__DOT___00036_) 
                                         & (IData)(vlSelfRef.picorv32__DOT___00035_)) 
                                        & (IData)(vlSelfRef.picorv32__DOT___00034_));
    picorv32__DOT____VdfgRegularize_h2364b514_0_42 
        = ((IData)(vlSelfRef.picorv32__DOT___00034_) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5874) 
               | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_841)) 
              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_842)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_849 
        = ((IData)(vlSelfRef.picorv32__DOT___00034_) 
           & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5873) 
               | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_40)) 
              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_39)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5001 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5422) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5002 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5421) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4999 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5424) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5000 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5423) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4997 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5426) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4998 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5425) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4995 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5428) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4996 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5427) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4993 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5430) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4994 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5429) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4991 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5432) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4992 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5431) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4989 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5434) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4990 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5433) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4987 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5436) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4988 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5435) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4985 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5438) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4986 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5437) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4983 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5440) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4984 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5439) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4981 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5442) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4982 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5441) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4979 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5444) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4980 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5443) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4977 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5446) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4978 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5445) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4975 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5448) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4976 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5447) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4973 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5450) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4974 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5449) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4971 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5452) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4972 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5451) 
           & ((IData)(vlSelfRef.picorv32__DOT___00939_) 
              >> 1U));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5033 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5486) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5034 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5485) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5031 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5488) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5032 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5487) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5029 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5490) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5030 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5489) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5027 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5492) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5028 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5491) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5025 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5494) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5026 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5493) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5023 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5496) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5024 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5495) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5021 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5498) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5022 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5497) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5019 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5500) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5020 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5499) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5017 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5502) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5018 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5501) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5015 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5504) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5016 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5503) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5013 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5506) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5014 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5505) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5011 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5508) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5012 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5507) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5009 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5510) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5010 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5509) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5007 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5512) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5008 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5511) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5005 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5514) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5006 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5513) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5003 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5516) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5004 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5515) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT___01463_ = ((IData)(vlSelfRef.picorv32__DOT___01452_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___01451_));
    vlSelfRef.picorv32__DOT___01033_ = ((- (IData)((IData)(picorv32__DOT___00048_))) 
                                        & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5324) 
                                           | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4787) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4788))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_45 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_41) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_44));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_850 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_848) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_847));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_46 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_43) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_42));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_851 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_43) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_849));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_385 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5033) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5001));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_388 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5034) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5002));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_391 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5031) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4999));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_394 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5032) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5000));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_397 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5029) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4997));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_400 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5030) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4998));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_403 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5027) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4995));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_406 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5028) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4996));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_409 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5025) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4993));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_412 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5026) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4994));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_415 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5023) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4991));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_418 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5024) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4992));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_421 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5021) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4989));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_424 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5022) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4990));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_427 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5019) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4987));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_430 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5020) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4988));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_433 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5017) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4985));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_436 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5018) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4986));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_439 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5015) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4983));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_442 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5016) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4984));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_445 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5013) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4981));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_448 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5014) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4982));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_451 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5011) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4979));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_454 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5012) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4980));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_457 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5009) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4977));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_460 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5010) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4978));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_463 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5007) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4975));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_466 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5008) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4976));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_469 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5005) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4973));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_472 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5006) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4974));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_475 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5003) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4971));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_478 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5004) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4972));
    vlSelfRef.picorv32__DOT___00067_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_46) 
                                        & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_45));
    vlSelfRef.picorv32__DOT___00656_ = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_851) 
                                        & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_850));
    picorv32__DOT____VdfgRegularize_h2364b514_0_386 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_385) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_384));
    picorv32__DOT____VdfgRegularize_h2364b514_0_389 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_388) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_387));
    picorv32__DOT____VdfgRegularize_h2364b514_0_392 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_391) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_390));
    picorv32__DOT____VdfgRegularize_h2364b514_0_395 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_394) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_393));
    picorv32__DOT____VdfgRegularize_h2364b514_0_398 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_397) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_396));
    picorv32__DOT____VdfgRegularize_h2364b514_0_401 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_400) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_399));
    picorv32__DOT____VdfgRegularize_h2364b514_0_404 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_403) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_402));
    picorv32__DOT____VdfgRegularize_h2364b514_0_407 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_406) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_405));
    picorv32__DOT____VdfgRegularize_h2364b514_0_410 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_409) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_408));
    picorv32__DOT____VdfgRegularize_h2364b514_0_413 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_412) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_411));
    picorv32__DOT____VdfgRegularize_h2364b514_0_416 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_415) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_414));
    picorv32__DOT____VdfgRegularize_h2364b514_0_419 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_418) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_417));
    picorv32__DOT____VdfgRegularize_h2364b514_0_422 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_421) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_420));
    picorv32__DOT____VdfgRegularize_h2364b514_0_425 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_424) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_423));
    picorv32__DOT____VdfgRegularize_h2364b514_0_428 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_427) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_426));
    picorv32__DOT____VdfgRegularize_h2364b514_0_431 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_430) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_429));
    picorv32__DOT____VdfgRegularize_h2364b514_0_434 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_433) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_432));
    picorv32__DOT____VdfgRegularize_h2364b514_0_437 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_436) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_435));
    picorv32__DOT____VdfgRegularize_h2364b514_0_440 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_439) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_438));
    picorv32__DOT____VdfgRegularize_h2364b514_0_443 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_442) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_441));
    picorv32__DOT____VdfgRegularize_h2364b514_0_446 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_445) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_444));
    picorv32__DOT____VdfgRegularize_h2364b514_0_449 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_448) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_447));
    picorv32__DOT____VdfgRegularize_h2364b514_0_452 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_451) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_450));
    picorv32__DOT____VdfgRegularize_h2364b514_0_455 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_454) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_453));
    picorv32__DOT____VdfgRegularize_h2364b514_0_458 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_457) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_456));
    picorv32__DOT____VdfgRegularize_h2364b514_0_461 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_460) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_459));
    picorv32__DOT____VdfgRegularize_h2364b514_0_464 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_463) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_462));
    picorv32__DOT____VdfgRegularize_h2364b514_0_467 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_466) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_465));
    picorv32__DOT____VdfgRegularize_h2364b514_0_470 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_469) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_468));
    picorv32__DOT____VdfgRegularize_h2364b514_0_473 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_472) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_471));
    picorv32__DOT____VdfgRegularize_h2364b514_0_476 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_475) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_474));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_479 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_478) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_477));
    vlSelfRef.picorv32__DOT___00070_ = ((IData)(vlSelfRef.picorv32__DOT___00656_) 
                                        & (IData)(vlSelfRef.picorv32__DOT___00050_));
    vlSelfRef.picorv32__DOT___01046_ = ((((((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                              & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_386)) 
                                             << 0x1fU) 
                                            | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_389)) 
                                               << 0x1eU)) 
                                           | ((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_392)) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_395)) 
                                                 << 0x1cU))) 
                                          | (((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_398)) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_401)) 
                                                 << 0x1aU)) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_404)) 
                                                 << 0x19U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_407)) 
                                                   << 0x18U)))) 
                                         | ((((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_410)) 
                                               << 0x17U) 
                                              | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_413)) 
                                                 << 0x16U)) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_416)) 
                                                 << 0x15U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_419)) 
                                                   << 0x14U))) 
                                            | (((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_422)) 
                                                 << 0x13U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_425)) 
                                                   << 0x12U)) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_428)) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_431)) 
                                                     << 0x10U))))) 
                                        | (((((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_434)) 
                                               << 0xfU) 
                                              | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_437)) 
                                                 << 0xeU)) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_440)) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_443)) 
                                                   << 0xcU))) 
                                            | (((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_446)) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_449)) 
                                                   << 0xaU)) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_452)) 
                                                   << 9U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_455)) 
                                                     << 8U)))) 
                                           | ((((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_458)) 
                                                 << 7U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_461)) 
                                                   << 6U)) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_464)) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_467)) 
                                                     << 4U))) 
                                              | (((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_470)) 
                                                   << 3U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_473)) 
                                                     << 2U)) 
                                                 | ((((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_476)) 
                                                     << 1U) 
                                                    | ((IData)(vlSelfRef.picorv32__DOT___00055_) 
                                                       & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_479)))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__0(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__0\n"); );
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

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__1(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___01077_ = (((0x80U & (
                                                   ((IData)(vlSelfRef.picorv32__DOT__mem_do_wdata) 
                                                    << 7U) 
                                                   | (0x80U 
                                                      & (VL_SHIFTR_III(32,2,32, (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5334), 1U) 
                                                         << 6U)))) 
                                         | (((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)) 
                                             & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5334) 
                                                >> 1U)) 
                                            << 6U)) 
                                        | ((((IData)(vlSelfRef.picorv32__DOT__mem_xfer) 
                                             && (1U 
                                                 & ((IData)(vlSelfRef.picorv32__DOT___01082_) 
                                                    >> 1U))) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_h75fbf022__0) 
                                               << 4U) 
                                              | ((4U 
                                                  & ((IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_h470fa281__0) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_h470fa281__0))))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h75fbf022__0 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT___01077_) 
                 >> 5U));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h470fa281__0 
        = ((2U & ((IData)(vlSelfRef.picorv32__DOT___01077_) 
                  >> 2U)) | (1U & ((IData)(vlSelfRef.picorv32__DOT___01077_) 
                                   >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5271 
        = (((IData)(vlSelfRef.picorv32__DOT___01077_) 
            >> 3U) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_844));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__2(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.picorv32__DOT___00556_ = ((4U & (((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                                | (IData)(vlSelfRef.picorv32__DOT___00963_)) 
                                               << 1U)) 
                                        | (((IData)(vlSelfRef.picorv32__DOT___00049_) 
                                            << 1U) 
                                           | (1U & 
                                              ((~ (IData)(vlSelfRef.picorv32__DOT___00726_)) 
                                               | ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                                  >> 1U)))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__3(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_194;
    picorv32__DOT____VdfgRegularize_h2364b514_0_194 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_208;
    picorv32__DOT____VdfgRegularize_h2364b514_0_208 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_245;
    picorv32__DOT____VdfgRegularize_h2364b514_0_245 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_252;
    picorv32__DOT____VdfgRegularize_h2364b514_0_252 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_265;
    picorv32__DOT____VdfgRegularize_h2364b514_0_265 = 0;
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((((IData)((((IData)(vlSelfRef.picorv32__DOT__decoded_rd) 
                              >> 4U) & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                        >> 1U))) << 9U) 
                   | (((IData)((((IData)(vlSelfRef.picorv32__DOT__decoded_rd) 
                                 >> 3U) & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                           >> 1U))) 
                       << 8U) | ((IData)((((IData)(vlSelfRef.picorv32__DOT__decoded_rd) 
                                           >> 2U) & 
                                          ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                           >> 1U))) 
                                 << 7U))) | ((0x40U 
                                              & (((IData)(vlSelfRef.picorv32__DOT__decoded_rd) 
                                                  & (IData)(vlSelfRef.picorv32__DOT___00979_)) 
                                                 << 5U)) 
                                             | (((IData)(vlSelfRef.picorv32__DOT__decoded_rd) 
                                                 & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                                    >> 1U)) 
                                                << 5U))) 
                 | ((((IData)((((IData)(vlSelfRef.picorv32__DOT___00977_) 
                                >> 4U) & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                          >> 1U))) 
                      << 4U) | ((8U & ((IData)(vlSelfRef.picorv32__DOT___00978_) 
                                       >> 1U)) | (4U 
                                                  & ((IData)(vlSelfRef.picorv32__DOT___00978_) 
                                                     >> 2U)))) 
                    | ((2U & ((IData)(vlSelfRef.picorv32__DOT___00978_) 
                              >> 3U)) | (1U & ((IData)(vlSelfRef.picorv32__DOT___00978_) 
                                               >> 4U)))));
    vlSelfRef.picorv32__DOT___00978_ = __Vtemp_1;
    picorv32__DOT____VdfgRegularize_h2364b514_0_265 
        = (IData)((0U != (0x210U & (IData)(vlSelfRef.picorv32__DOT___00978_))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_252 
        = (IData)((0U != (0x110U & (IData)(vlSelfRef.picorv32__DOT___00978_))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_245 
        = (IData)((0U != (0x90U & (IData)(vlSelfRef.picorv32__DOT___00978_))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_208 
        = (IData)((0U != (0x50U & (IData)(vlSelfRef.picorv32__DOT___00978_))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_194 
        = (IData)((0U != (0x30U & (IData)(vlSelfRef.picorv32__DOT___00978_))));
    vlSelfRef.picorv32__DOT___00980_ = (((((IData)(vlSelfRef.picorv32__DOT___00033_) 
                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_265)) 
                                          << 4U) | 
                                         ((((IData)(vlSelfRef.picorv32__DOT___00033_) 
                                            & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_252)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.picorv32__DOT___00033_) 
                                            & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_245)) 
                                           << 2U))) 
                                        | ((((IData)(vlSelfRef.picorv32__DOT___00033_) 
                                             & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_208)) 
                                            << 1U) 
                                           | ((IData)(vlSelfRef.picorv32__DOT___00033_) 
                                              & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_194))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__4(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__4\n"); );
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
    picorv32__DOT___01437_ = (IData)(((6U == (6U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5278))) 
                                      & (vlSelfRef.picorv32__DOT___01131_ 
                                         >> 1U)));
    picorv32__DOT___01480_ = (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5297) 
                               & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5294)) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0x1bU));
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
    picorv32__DOT___01477_ = ((IData)(vlSelfRef.picorv32__DOT___01455_) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0xfU));
    picorv32__DOT___01476_ = ((IData)(vlSelfRef.picorv32__DOT___01453_) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0xbU));
    picorv32__DOT___01472_ = ((IData)(vlSelfRef.picorv32__DOT___01465_) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0xfU));
    picorv32__DOT___01470_ = (((IData)(vlSelfRef.picorv32__DOT___01466_) 
                               & (IData)(vlSelfRef.picorv32__DOT___01465_)) 
                              & (vlSelfRef.picorv32__DOT___01131_ 
                                 >> 0xfU));
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

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__5(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ picorv32__DOT___01102_;
    VL_ZERO_W(96, picorv32__DOT___01102_);
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_159;
    picorv32__DOT____VdfgRegularize_h2364b514_0_159 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_204;
    picorv32__DOT____VdfgRegularize_h2364b514_0_204 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_209;
    picorv32__DOT____VdfgRegularize_h2364b514_0_209 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_213;
    picorv32__DOT____VdfgRegularize_h2364b514_0_213 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_217;
    picorv32__DOT____VdfgRegularize_h2364b514_0_217 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_218;
    picorv32__DOT____VdfgRegularize_h2364b514_0_218 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_219;
    picorv32__DOT____VdfgRegularize_h2364b514_0_219 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_223;
    picorv32__DOT____VdfgRegularize_h2364b514_0_223 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_224;
    picorv32__DOT____VdfgRegularize_h2364b514_0_224 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_225;
    picorv32__DOT____VdfgRegularize_h2364b514_0_225 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_241;
    picorv32__DOT____VdfgRegularize_h2364b514_0_241 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_272;
    picorv32__DOT____VdfgRegularize_h2364b514_0_272 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_273;
    picorv32__DOT____VdfgRegularize_h2364b514_0_273 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_274;
    picorv32__DOT____VdfgRegularize_h2364b514_0_274 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_275;
    picorv32__DOT____VdfgRegularize_h2364b514_0_275 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_276;
    picorv32__DOT____VdfgRegularize_h2364b514_0_276 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_277;
    picorv32__DOT____VdfgRegularize_h2364b514_0_277 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_278;
    picorv32__DOT____VdfgRegularize_h2364b514_0_278 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_279;
    picorv32__DOT____VdfgRegularize_h2364b514_0_279 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_302;
    picorv32__DOT____VdfgRegularize_h2364b514_0_302 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_303;
    picorv32__DOT____VdfgRegularize_h2364b514_0_303 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_304;
    picorv32__DOT____VdfgRegularize_h2364b514_0_304 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_305;
    picorv32__DOT____VdfgRegularize_h2364b514_0_305 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_306;
    picorv32__DOT____VdfgRegularize_h2364b514_0_306 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_307;
    picorv32__DOT____VdfgRegularize_h2364b514_0_307 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_308;
    picorv32__DOT____VdfgRegularize_h2364b514_0_308 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_309;
    picorv32__DOT____VdfgRegularize_h2364b514_0_309 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_310;
    picorv32__DOT____VdfgRegularize_h2364b514_0_310 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_311;
    picorv32__DOT____VdfgRegularize_h2364b514_0_311 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_312;
    picorv32__DOT____VdfgRegularize_h2364b514_0_312 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_313;
    picorv32__DOT____VdfgRegularize_h2364b514_0_313 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_314;
    picorv32__DOT____VdfgRegularize_h2364b514_0_314 = 0;
    // Body
    picorv32__DOT___01102_[0U] = ((0x80000000U & (vlSelfRef.picorv32__DOT___01097_ 
                                                  & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                     << 0x1fU))) 
                                  | ((vlSelfRef.picorv32__DOT____Vconcswap_1_h25089b81__0 
                                      << 8U) | ((((0x80U 
                                                   & (vlSelfRef.picorv32__DOT___01097_ 
                                                      & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                         << 7U))) 
                                                  | (0x40U 
                                                     & (vlSelfRef.picorv32__DOT___01097_ 
                                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                           << 6U)))) 
                                                 | ((0x20U 
                                                     & (vlSelfRef.picorv32__DOT___01097_ 
                                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                           << 5U))) 
                                                    | (0x10U 
                                                       & (vlSelfRef.picorv32__DOT___01097_ 
                                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                             << 4U))))) 
                                                | (((8U 
                                                     & (vlSelfRef.picorv32__DOT___01097_ 
                                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                           << 3U))) 
                                                    | (4U 
                                                       & (vlSelfRef.picorv32__DOT___01097_ 
                                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (vlSelfRef.picorv32__DOT___01097_ 
                                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                             << 1U))) 
                                                      | (1U 
                                                         & (vlSelfRef.picorv32__DOT___01097_ 
                                                            & (IData)(vlSelfRef.picorv32__DOT___01103_))))))));
    picorv32__DOT___01102_[1U] = (((IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_h257cb637__0) 
                                   << 0x10U) | ((((
                                                   (0x8000U 
                                                    & (vlSelfRef.picorv32__DOT___01101_ 
                                                       & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                          << 0xeU))) 
                                                   | (0x4000U 
                                                      & (vlSelfRef.picorv32__DOT___01101_ 
                                                         & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                            << 0xdU)))) 
                                                  | ((0x2000U 
                                                      & (vlSelfRef.picorv32__DOT___01101_ 
                                                         & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                            << 0xcU))) 
                                                     | (0x1000U 
                                                        & (vlSelfRef.picorv32__DOT___01101_ 
                                                           & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                              << 0xbU))))) 
                                                 | (((0x800U 
                                                      & (vlSelfRef.picorv32__DOT___01101_ 
                                                         & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                            << 0xaU))) 
                                                     | (0x400U 
                                                        & (vlSelfRef.picorv32__DOT___01101_ 
                                                           & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                              << 9U)))) 
                                                    | ((0x200U 
                                                        & (vlSelfRef.picorv32__DOT___01101_ 
                                                           & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                              << 8U))) 
                                                       | (0x100U 
                                                          & (vlSelfRef.picorv32__DOT___01101_ 
                                                             & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                                << 7U)))))) 
                                                | ((((0x80U 
                                                      & (vlSelfRef.picorv32__DOT___01101_ 
                                                         & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                            << 6U))) 
                                                     | (0x40U 
                                                        & (vlSelfRef.picorv32__DOT___01101_ 
                                                           & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                              << 5U)))) 
                                                    | ((0x20U 
                                                        & (vlSelfRef.picorv32__DOT___01101_ 
                                                           & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                              << 4U))) 
                                                       | (0x10U 
                                                          & (vlSelfRef.picorv32__DOT___01101_ 
                                                             & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                                << 3U))))) 
                                                   | (((8U 
                                                        & (vlSelfRef.picorv32__DOT___01101_ 
                                                           & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                              << 2U))) 
                                                       | (4U 
                                                          & (vlSelfRef.picorv32__DOT___01101_ 
                                                             & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                                << 1U)))) 
                                                      | ((2U 
                                                          & (vlSelfRef.picorv32__DOT___01101_ 
                                                             & (IData)(vlSelfRef.picorv32__DOT___01103_))) 
                                                         | (1U 
                                                            & (vlSelfRef.picorv32__DOT___01101_ 
                                                               & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                                  >> 1U))))))));
    picorv32__DOT___01102_[2U] = ((((((((vlSelfRef.mem_rdata 
                                         >> 0x1fU) 
                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                           >> 2U)) 
                                       << 0x1fU) | 
                                      (((vlSelfRef.mem_rdata 
                                         >> 0x1eU) 
                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                           >> 2U)) 
                                       << 0x1eU)) | 
                                     ((((vlSelfRef.mem_rdata 
                                         >> 0x1dU) 
                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                           >> 2U)) 
                                       << 0x1dU) | 
                                      (((vlSelfRef.mem_rdata 
                                         >> 0x1cU) 
                                        & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                           >> 2U)) 
                                       << 0x1cU))) 
                                    | (((((vlSelfRef.mem_rdata 
                                           >> 0x1bU) 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                             >> 2U)) 
                                         << 0x1bU) 
                                        | (((vlSelfRef.mem_rdata 
                                             >> 0x1aU) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0x1aU)) 
                                       | ((((vlSelfRef.mem_rdata 
                                             >> 0x19U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0x19U) 
                                          | (((vlSelfRef.mem_rdata 
                                               >> 0x18U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0x18U)))) 
                                   | ((((((vlSelfRef.mem_rdata 
                                           >> 0x17U) 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                             >> 2U)) 
                                         << 0x17U) 
                                        | (((vlSelfRef.mem_rdata 
                                             >> 0x16U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0x16U)) 
                                       | ((((vlSelfRef.mem_rdata 
                                             >> 0x15U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0x15U) 
                                          | (((vlSelfRef.mem_rdata 
                                               >> 0x14U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0x14U))) 
                                      | (((((vlSelfRef.mem_rdata 
                                             >> 0x13U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0x13U) 
                                          | (((vlSelfRef.mem_rdata 
                                               >> 0x12U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0x12U)) 
                                         | ((((vlSelfRef.mem_rdata 
                                               >> 0x11U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0x11U) 
                                            | (((vlSelfRef.mem_rdata 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                   >> 2U)) 
                                               << 0x10U))))) 
                                  | (((((((vlSelfRef.mem_rdata 
                                           >> 0xfU) 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                             >> 2U)) 
                                         << 0xfU) | 
                                        (((vlSelfRef.mem_rdata 
                                           >> 0xeU) 
                                          & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                             >> 2U)) 
                                         << 0xeU)) 
                                       | ((((vlSelfRef.mem_rdata 
                                             >> 0xdU) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0xdU) 
                                          | (((vlSelfRef.mem_rdata 
                                               >> 0xcU) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0xcU))) 
                                      | (((((vlSelfRef.mem_rdata 
                                             >> 0xbU) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 0xbU) 
                                          | (((vlSelfRef.mem_rdata 
                                               >> 0xaU) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 0xaU)) 
                                         | ((((vlSelfRef.mem_rdata 
                                               >> 9U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 9U) 
                                            | (((vlSelfRef.mem_rdata 
                                                 >> 8U) 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                   >> 2U)) 
                                               << 8U)))) 
                                     | ((((((vlSelfRef.mem_rdata 
                                             >> 7U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 7U) | 
                                          (((vlSelfRef.mem_rdata 
                                             >> 6U) 
                                            & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                               >> 2U)) 
                                           << 6U)) 
                                         | ((((vlSelfRef.mem_rdata 
                                               >> 5U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 5U) 
                                            | (((vlSelfRef.mem_rdata 
                                                 >> 4U) 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                   >> 2U)) 
                                               << 4U))) 
                                        | (((((vlSelfRef.mem_rdata 
                                               >> 3U) 
                                              & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                 >> 2U)) 
                                             << 3U) 
                                            | (4U & 
                                               (vlSelfRef.mem_rdata 
                                                & (IData)(vlSelfRef.picorv32__DOT___01103_)))) 
                                           | ((((vlSelfRef.mem_rdata 
                                                 >> 1U) 
                                                & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                   >> 2U)) 
                                               << 1U) 
                                              | (vlSelfRef.mem_rdata 
                                                 & ((IData)(vlSelfRef.picorv32__DOT___01103_) 
                                                    >> 2U)))))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h257cb637__0 = 0U;
    vlSelfRef.picorv32__DOT____Vconcswap_1_h25089b81__0 
        = (((((0x400000U & (picorv32__DOT___01102_[0U] 
                            >> 9U)) | ((0x200000U & 
                                        (picorv32__DOT___01102_[0U] 
                                         >> 0xaU)) 
                                       | (0x100000U 
                                          & (picorv32__DOT___01102_[0U] 
                                             >> 0xbU)))) 
             | ((0x80000U & (picorv32__DOT___01102_[0U] 
                             >> 0xcU)) | ((0x40000U 
                                           & (picorv32__DOT___01102_[0U] 
                                              >> 0xdU)) 
                                          | (0x20000U 
                                             & (picorv32__DOT___01102_[0U] 
                                                >> 0xeU))))) 
            | (((0x10000U & (picorv32__DOT___01102_[0U] 
                             >> 0xfU)) | ((0x8000U 
                                           & (picorv32__DOT___01102_[0U] 
                                              >> 0x10U)) 
                                          | (0x4000U 
                                             & (picorv32__DOT___01102_[0U] 
                                                >> 0x11U)))) 
               | ((0x2000U & (picorv32__DOT___01102_[0U] 
                              >> 0x12U)) | ((0x1000U 
                                             & (picorv32__DOT___01102_[0U] 
                                                >> 0x13U)) 
                                            | (0x800U 
                                               & (picorv32__DOT___01102_[0U] 
                                                  >> 0x14U)))))) 
           | ((((0x400U & (picorv32__DOT___01102_[0U] 
                           >> 0x15U)) | ((0x200U & 
                                          (picorv32__DOT___01102_[0U] 
                                           >> 0x16U)) 
                                         | (0x100U 
                                            & (picorv32__DOT___01102_[0U] 
                                               >> 0x17U)))) 
               | ((0x80U & (picorv32__DOT___01102_[0U] 
                            >> 0x18U)) | ((0x40U & 
                                           (picorv32__DOT___01102_[0U] 
                                            >> 0x19U)) 
                                          | (0x20U 
                                             & (picorv32__DOT___01102_[0U] 
                                                >> 0x1aU))))) 
              | (((0x10U & (picorv32__DOT___01102_[0U] 
                            >> 0x1bU)) | ((8U & (picorv32__DOT___01102_[0U] 
                                                 >> 0x1cU)) 
                                          | (4U & (
                                                   picorv32__DOT___01102_[0U] 
                                                   >> 0x1dU)))) 
                 | ((2U & (picorv32__DOT___01102_[0U] 
                           >> 0x1eU)) | (picorv32__DOT___01102_[0U] 
                                         >> 0x1fU)))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_204 
        = ((picorv32__DOT___01102_[0U] | picorv32__DOT___01102_[2U]) 
           >> 0x1fU);
    picorv32__DOT____VdfgRegularize_h2364b514_0_314 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x1eU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_312 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x1dU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_313 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x1cU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_159 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x1bU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_209 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x1aU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_279 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x19U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_311 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x18U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_213 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x17U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_278 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x16U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_217 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x15U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_218 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x14U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_276 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x13U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_277 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x12U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_310 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x11U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_308 
        = (1U & ((picorv32__DOT___01102_[0U] >> 0x1fU) 
                 | (picorv32__DOT___01102_[2U] >> 0x10U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_309 
        = (1U & (((picorv32__DOT___01102_[0U] >> 0x1fU) 
                  | (picorv32__DOT___01102_[1U] >> 0xfU)) 
                 | (picorv32__DOT___01102_[2U] >> 0xfU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_307 
        = (1U & (((picorv32__DOT___01102_[0U] >> 0x1fU) 
                  | (picorv32__DOT___01102_[1U] >> 0xeU)) 
                 | (picorv32__DOT___01102_[2U] >> 0xeU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_219 
        = (1U & (((picorv32__DOT___01102_[0U] >> 0x1fU) 
                  | (picorv32__DOT___01102_[1U] >> 0xdU)) 
                 | (picorv32__DOT___01102_[2U] >> 0xdU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_306 
        = (1U & (((picorv32__DOT___01102_[0U] >> 0x1fU) 
                  | (picorv32__DOT___01102_[1U] >> 0xcU)) 
                 | (picorv32__DOT___01102_[2U] >> 0xcU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_223 
        = (1U & (((picorv32__DOT___01102_[0U] >> 0x1fU) 
                  | (picorv32__DOT___01102_[1U] >> 0xbU)) 
                 | (picorv32__DOT___01102_[2U] >> 0xbU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_305 
        = (1U & (((picorv32__DOT___01102_[0U] >> 0x1fU) 
                  | (picorv32__DOT___01102_[1U] >> 0xaU)) 
                 | (picorv32__DOT___01102_[2U] >> 0xaU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_224 
        = (1U & (((picorv32__DOT___01102_[0U] >> 0x1fU) 
                  | (picorv32__DOT___01102_[1U] >> 9U)) 
                 | (picorv32__DOT___01102_[2U] >> 9U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_225 
        = (1U & (((picorv32__DOT___01102_[0U] >> 0x1fU) 
                  | (picorv32__DOT___01102_[1U] >> 8U)) 
                 | (picorv32__DOT___01102_[2U] >> 8U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_275 
        = (1U & (((picorv32__DOT___01102_[0U] | picorv32__DOT___01102_[1U]) 
                  | picorv32__DOT___01102_[2U]) >> 7U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_274 
        = (1U & (((picorv32__DOT___01102_[0U] | picorv32__DOT___01102_[1U]) 
                  | picorv32__DOT___01102_[2U]) >> 6U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_304 
        = (1U & (((picorv32__DOT___01102_[0U] | picorv32__DOT___01102_[1U]) 
                  | picorv32__DOT___01102_[2U]) >> 5U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_273 
        = (1U & (((picorv32__DOT___01102_[0U] | picorv32__DOT___01102_[1U]) 
                  | picorv32__DOT___01102_[2U]) >> 4U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_303 
        = (1U & (((picorv32__DOT___01102_[0U] | picorv32__DOT___01102_[1U]) 
                  | picorv32__DOT___01102_[2U]) >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_302 
        = (1U & (((picorv32__DOT___01102_[0U] | picorv32__DOT___01102_[1U]) 
                  | picorv32__DOT___01102_[2U]) >> 2U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_241 
        = (1U & (((picorv32__DOT___01102_[0U] | picorv32__DOT___01102_[1U]) 
                  | picorv32__DOT___01102_[2U]) >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_272 
        = (1U & ((picorv32__DOT___01102_[0U] | picorv32__DOT___01102_[1U]) 
                 | picorv32__DOT___01102_[2U]));
    vlSelfRef.picorv32__DOT__mem_rdata_word = (((((
                                                   (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                     & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_204)) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                       & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_314)) 
                                                      << 0x1eU)) 
                                                  | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                       & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_312)) 
                                                      << 0x1dU) 
                                                     | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                         & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_313)) 
                                                        << 0x1cU))) 
                                                 | (((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                       & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_159)) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                         & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_209)) 
                                                        << 0x1aU)) 
                                                    | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                         & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_279)) 
                                                        << 0x19U) 
                                                       | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_311)) 
                                                          << 0x18U)))) 
                                                | ((((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                       & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_213)) 
                                                      << 0x17U) 
                                                     | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                         & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_278)) 
                                                        << 0x16U)) 
                                                    | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                         & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_217)) 
                                                        << 0x15U) 
                                                       | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_218)) 
                                                          << 0x14U))) 
                                                   | (((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                         & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_276)) 
                                                        << 0x13U) 
                                                       | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_277)) 
                                                          << 0x12U)) 
                                                      | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_310)) 
                                                          << 0x11U) 
                                                         | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                             & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_308)) 
                                                            << 0x10U))))) 
                                               | (((((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                       & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_309)) 
                                                      << 0xfU) 
                                                     | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                         & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_307)) 
                                                        << 0xeU)) 
                                                    | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                         & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_219)) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_306)) 
                                                          << 0xcU))) 
                                                   | (((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                         & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_223)) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_305)) 
                                                          << 0xaU)) 
                                                      | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_224)) 
                                                          << 9U) 
                                                         | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                             & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_225)) 
                                                            << 8U)))) 
                                                  | ((((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                         & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_275)) 
                                                        << 7U) 
                                                       | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_274)) 
                                                          << 6U)) 
                                                      | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_304)) 
                                                          << 5U) 
                                                         | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                             & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_273)) 
                                                            << 4U))) 
                                                     | (((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_303)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                             & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_302)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                             & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_241)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.picorv32__DOT___01178_) 
                                                              & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_272)))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__6(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((((0x40000000U & (vlSelfRef.picorv32__DOT___01097_ 
                                     >> 1U)) | (0x20000000U 
                                                & (vlSelfRef.picorv32__DOT___01097_ 
                                                   >> 2U))) 
                    | ((0x10000000U & (vlSelfRef.picorv32__DOT___01097_ 
                                       >> 3U)) | (0x8000000U 
                                                  & (vlSelfRef.picorv32__DOT___01097_ 
                                                     >> 4U)))) 
                   | (((0x4000000U & (vlSelfRef.picorv32__DOT___01097_ 
                                      >> 5U)) | (0x2000000U 
                                                 & (vlSelfRef.picorv32__DOT___01097_ 
                                                    >> 6U))) 
                      | ((0x1000000U & (vlSelfRef.picorv32__DOT___01097_ 
                                        >> 7U)) | (0x800000U 
                                                   & (vlSelfRef.picorv32__DOT___01097_ 
                                                      >> 8U))))) 
                  | ((((0x400000U & (vlSelfRef.picorv32__DOT___01097_ 
                                     >> 9U)) | (0x200000U 
                                                & (vlSelfRef.picorv32__DOT___01097_ 
                                                   >> 0xaU))) 
                      | ((0x100000U & (vlSelfRef.picorv32__DOT___01097_ 
                                       >> 0xbU)) | 
                         (0x80000U & (vlSelfRef.picorv32__DOT___01097_ 
                                      >> 0xcU)))) | 
                     (((0x40000U & (vlSelfRef.picorv32__DOT___01097_ 
                                    >> 0xdU)) | (0x20000U 
                                                 & (vlSelfRef.picorv32__DOT___01097_ 
                                                    >> 0xeU))) 
                      | ((0x10000U & (vlSelfRef.picorv32__DOT___01097_ 
                                      >> 0xfU)) | (0x8000U 
                                                   & (vlSelfRef.picorv32__DOT___01097_ 
                                                      >> 0x10U)))))) 
                 | (((((0x4000U & (vlSelfRef.picorv32__DOT___01097_ 
                                   >> 0x11U)) | (0x2000U 
                                                 & (vlSelfRef.picorv32__DOT___01097_ 
                                                    >> 0x12U))) 
                      | ((0x1000U & (vlSelfRef.picorv32__DOT___01097_ 
                                     >> 0x13U)) | (0x800U 
                                                   & (vlSelfRef.picorv32__DOT___01097_ 
                                                      >> 0x14U)))) 
                     | (((0x400U & (vlSelfRef.picorv32__DOT___01097_ 
                                    >> 0x15U)) | (0x200U 
                                                  & (vlSelfRef.picorv32__DOT___01097_ 
                                                     >> 0x16U))) 
                        | ((0x100U & (vlSelfRef.picorv32__DOT___01097_ 
                                      >> 0x17U)) | 
                           (((IData)(vlSelfRef.picorv32__DOT___01177_) 
                             && (1U & (vlSelfRef.picorv32__DOT___01098_ 
                                       >> 7U))) << 7U)))) 
                    | ((((((IData)(vlSelfRef.picorv32__DOT___01177_) 
                           && (1U & (vlSelfRef.picorv32__DOT___01098_ 
                                     >> 6U))) << 6U) 
                         | (((IData)(vlSelfRef.picorv32__DOT___01177_) 
                             && (1U & (vlSelfRef.picorv32__DOT___01098_ 
                                       >> 5U))) << 5U)) 
                        | ((((IData)(vlSelfRef.picorv32__DOT___01177_) 
                             && (1U & (vlSelfRef.picorv32__DOT___01098_ 
                                       >> 4U))) << 4U) 
                           | (((IData)(vlSelfRef.picorv32__DOT___01177_) 
                               && (1U & (vlSelfRef.picorv32__DOT___01098_ 
                                         >> 3U))) << 3U))) 
                       | ((((IData)(vlSelfRef.picorv32__DOT___01177_) 
                            && (1U & (vlSelfRef.picorv32__DOT___01098_ 
                                      >> 2U))) << 2U) 
                          | ((((IData)(vlSelfRef.picorv32__DOT___01177_) 
                               && (1U & (vlSelfRef.picorv32__DOT___01098_ 
                                         >> 1U))) << 1U) 
                             | ((IData)(vlSelfRef.picorv32__DOT___01177_) 
                                && (1U & vlSelfRef.picorv32__DOT___01098_)))))));
    vlSelfRef.picorv32__DOT___01097_ = __Vtemp_1;
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__7(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((((0x40000000U & (vlSelfRef.picorv32__DOT___01124_ 
                                     & (vlSelfRef.picorv32__DOT___01125_ 
                                        << 1U))) | 
                     (0xe0000000U & ((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5634) 
                                       & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5633)) 
                                      << 0x1dU) & (vlSelfRef.picorv32__DOT___01125_ 
                                                   << 2U)))) 
                    | ((0x10000000U & (vlSelfRef.picorv32__DOT___01124_ 
                                       & (vlSelfRef.picorv32__DOT___01125_ 
                                          << 1U))) 
                       | (0xf8000000U & (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5636) 
                                            & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5635)) 
                                           & (IData)(vlSelfRef.picorv32__DOT___01360_)) 
                                          << 0x1bU) 
                                         & (vlSelfRef.picorv32__DOT___01125_ 
                                            << 4U))))) 
                   | (((0x4000000U & (vlSelfRef.picorv32__DOT___01124_ 
                                      & (vlSelfRef.picorv32__DOT___01125_ 
                                         << 1U))) | 
                       (0xfe000000U & (((IData)(vlSelfRef.picorv32__DOT___01360_) 
                                        << 0x19U) & 
                                       (vlSelfRef.picorv32__DOT___01125_ 
                                        << 2U)))) | 
                      ((0x1000000U & (vlSelfRef.picorv32__DOT___01124_ 
                                      & (vlSelfRef.picorv32__DOT___01125_ 
                                         << 1U))) | 
                       (0xff800000U & ((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5640) 
                                           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5639)) 
                                          & (IData)(vlSelfRef.picorv32__DOT___01358_)) 
                                         & (IData)(vlSelfRef.picorv32__DOT___01366_)) 
                                        << 0x17U) & 
                                       (vlSelfRef.picorv32__DOT___01125_ 
                                        << 8U)))))) 
                  | ((((0x400000U & (vlSelfRef.picorv32__DOT___01124_ 
                                     & (vlSelfRef.picorv32__DOT___01125_ 
                                        << 1U))) | 
                       (0xffe00000U & (((IData)(vlSelfRef.picorv32__DOT___01358_) 
                                        << 0x15U) & 
                                       (vlSelfRef.picorv32__DOT___01125_ 
                                        << 2U)))) | 
                      ((0x100000U & (vlSelfRef.picorv32__DOT___01124_ 
                                     & (vlSelfRef.picorv32__DOT___01125_ 
                                        << 1U))) | 
                       (0xfff80000U & (((IData)(vlSelfRef.picorv32__DOT___01366_) 
                                        << 0x13U) & 
                                       (vlSelfRef.picorv32__DOT___01125_ 
                                        << 4U))))) 
                     | (((0x40000U & (vlSelfRef.picorv32__DOT___01124_ 
                                      & (vlSelfRef.picorv32__DOT___01125_ 
                                         << 1U))) | 
                         (0xfffe0000U & (((IData)(vlSelfRef.picorv32__DOT___01356_) 
                                          << 0x11U) 
                                         & (vlSelfRef.picorv32__DOT___01125_ 
                                            << 2U)))) 
                        | ((0x10000U & (vlSelfRef.picorv32__DOT___01124_ 
                                        & (vlSelfRef.picorv32__DOT___01125_ 
                                           << 1U))) 
                           | (0xffff8000U & ((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5648) 
                                                 & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5647)) 
                                                & (IData)(vlSelfRef.picorv32__DOT___01354_)) 
                                               & (IData)(vlSelfRef.picorv32__DOT___01364_)) 
                                              << 0xfU) 
                                             & (vlSelfRef.picorv32__DOT___01125_ 
                                                << 8U))))))) 
                 | (((((0x4000U & (vlSelfRef.picorv32__DOT___01124_ 
                                   & (vlSelfRef.picorv32__DOT___01125_ 
                                      << 1U))) | (0xffffe000U 
                                                  & (((IData)(vlSelfRef.picorv32__DOT___01354_) 
                                                      << 0xdU) 
                                                     & (vlSelfRef.picorv32__DOT___01125_ 
                                                        << 2U)))) 
                      | ((0x1000U & (vlSelfRef.picorv32__DOT___01124_ 
                                     & (vlSelfRef.picorv32__DOT___01125_ 
                                        << 1U))) | 
                         (0xfffff800U & (((IData)(vlSelfRef.picorv32__DOT___01364_) 
                                          << 0xbU) 
                                         & (vlSelfRef.picorv32__DOT___01125_ 
                                            << 4U))))) 
                     | (((0x400U & (vlSelfRef.picorv32__DOT___01124_ 
                                    & (vlSelfRef.picorv32__DOT___01125_ 
                                       << 1U))) | (0xfffffe00U 
                                                   & (((IData)(vlSelfRef.picorv32__DOT___01352_) 
                                                       << 9U) 
                                                      & (vlSelfRef.picorv32__DOT___01125_ 
                                                         << 2U)))) 
                        | ((0x100U & (vlSelfRef.picorv32__DOT___01124_ 
                                      & (vlSelfRef.picorv32__DOT___01125_ 
                                         << 1U))) | 
                           (0xffffff80U & (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5656) 
                                              & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5655)) 
                                             & (IData)(vlSelfRef.picorv32__DOT___01350_)) 
                                            << 7U) 
                                           & (vlSelfRef.picorv32__DOT___01125_ 
                                              << 4U)))))) 
                    | ((((0x40U & (vlSelfRef.picorv32__DOT___01124_ 
                                   & (vlSelfRef.picorv32__DOT___01125_ 
                                      << 1U))) | (0xffffffe0U 
                                                  & (((IData)(vlSelfRef.picorv32__DOT___01350_) 
                                                      << 5U) 
                                                     & (vlSelfRef.picorv32__DOT___01125_ 
                                                        << 2U)))) 
                        | ((0x10U & (vlSelfRef.picorv32__DOT___01124_ 
                                     & (vlSelfRef.picorv32__DOT___01125_ 
                                        << 1U))) | 
                           ((IData)((0xcU == (0xcU 
                                              & vlSelfRef.picorv32__DOT___01124_))) 
                            << 3U))) | (4U & vlSelfRef.picorv32__DOT___01124_))));
    vlSelfRef.picorv32__DOT___01125_ = ((0x80000000U 
                                         & vlSelfRef.picorv32__DOT___01125_) 
                                        | __Vtemp_1);
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5273 
        = (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5657) 
                 ^ (vlSelfRef.picorv32__DOT___01125_ 
                    >> 3U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
        = (0x7ffffffU & ((((((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5632) 
                               << 0x1aU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5631) 
                                            << 0x19U)) 
                             | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5634) 
                                 << 0x18U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5633) 
                                              << 0x17U))) 
                            | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5636) 
                                << 0x16U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5635) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5638) 
                                                << 0x14U)))) 
                           | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5637) 
                                 << 0x13U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5640) 
                                              << 0x12U)) 
                               | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5639) 
                                   << 0x11U) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5642) 
                                                << 0x10U))) 
                              | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5641) 
                                  << 0xfU) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5644) 
                                               << 0xeU) 
                                              | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5643) 
                                                 << 0xdU))))) 
                          | (((((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5646) 
                                << 0xcU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5645) 
                                            << 0xbU)) 
                              | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5648) 
                                  << 0xaU) | ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5647) 
                                              << 9U))) 
                             | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5650) 
                                 << 8U) | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5649) 
                                            << 7U) 
                                           | (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5652) 
                                               << 6U) 
                                              | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5348)))))) 
                         ^ (vlSelfRef.picorv32__DOT___01125_ 
                            >> 4U)));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__8(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_47;
    picorv32__DOT____VdfgRegularize_h2364b514_0_47 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_48;
    picorv32__DOT____VdfgRegularize_h2364b514_0_48 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_49;
    picorv32__DOT____VdfgRegularize_h2364b514_0_49 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_50;
    picorv32__DOT____VdfgRegularize_h2364b514_0_50 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_51;
    picorv32__DOT____VdfgRegularize_h2364b514_0_51 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_52;
    picorv32__DOT____VdfgRegularize_h2364b514_0_52 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_53;
    picorv32__DOT____VdfgRegularize_h2364b514_0_53 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_54;
    picorv32__DOT____VdfgRegularize_h2364b514_0_54 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_55;
    picorv32__DOT____VdfgRegularize_h2364b514_0_55 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_56;
    picorv32__DOT____VdfgRegularize_h2364b514_0_56 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_57;
    picorv32__DOT____VdfgRegularize_h2364b514_0_57 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_58;
    picorv32__DOT____VdfgRegularize_h2364b514_0_58 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_59;
    picorv32__DOT____VdfgRegularize_h2364b514_0_59 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_60;
    picorv32__DOT____VdfgRegularize_h2364b514_0_60 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_61;
    picorv32__DOT____VdfgRegularize_h2364b514_0_61 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_62;
    picorv32__DOT____VdfgRegularize_h2364b514_0_62 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_63;
    picorv32__DOT____VdfgRegularize_h2364b514_0_63 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_64;
    picorv32__DOT____VdfgRegularize_h2364b514_0_64 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_65;
    picorv32__DOT____VdfgRegularize_h2364b514_0_65 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_66;
    picorv32__DOT____VdfgRegularize_h2364b514_0_66 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_67;
    picorv32__DOT____VdfgRegularize_h2364b514_0_67 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_68;
    picorv32__DOT____VdfgRegularize_h2364b514_0_68 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_111;
    picorv32__DOT____VdfgRegularize_h2364b514_0_111 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_112;
    picorv32__DOT____VdfgRegularize_h2364b514_0_112 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_113;
    picorv32__DOT____VdfgRegularize_h2364b514_0_113 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_2807;
    picorv32__DOT____VdfgRegularize_h2364b514_0_2807 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_2808;
    picorv32__DOT____VdfgRegularize_h2364b514_0_2808 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_2809;
    picorv32__DOT____VdfgRegularize_h2364b514_0_2809 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_2810;
    picorv32__DOT____VdfgRegularize_h2364b514_0_2810 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_2811;
    picorv32__DOT____VdfgRegularize_h2364b514_0_2811 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_2812;
    picorv32__DOT____VdfgRegularize_h2364b514_0_2812 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3208;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3208 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3210;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3210 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3211;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3211 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3212;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3212 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3213;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3213 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3214;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3214 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3216;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3216 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3217;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3217 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3218;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3218 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3219;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3219 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3220;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3220 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3221;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3221 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3222;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3222 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3223;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3223 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3225;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3225 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3226;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3226 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3227;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3227 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3228;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3228 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3229;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3229 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3230;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3230 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3231;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3231 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3232;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3232 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4422;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4422 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4423;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4423 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4424;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4424 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4425;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4425 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4426;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4426 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4427;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4427 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4428;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4428 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4429;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4429 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4430;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4430 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4431;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4431 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4432;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4432 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4433;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4433 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4434;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4434 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4435;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4435 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4441;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4441 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4442;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4442 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4443;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4443 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4444;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4444 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4445;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4445 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4446;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4446 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4447;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4447 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4448;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4448 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4449;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4449 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4450;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4450 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4451;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4451 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4452;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4452 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4453;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4453 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4454;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4454 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4455;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4455 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4456;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4456 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5339;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5339 = 0;
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
    picorv32__DOT____VdfgRegularize_h2364b514_0_4426 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x2dU) & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4447 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x17U) & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4448 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x16U) & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4445 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x15U) & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4428 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x2fU) & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4429 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x2eU) & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4425 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x2aU) & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4434 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x27U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                 >> 3U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4435 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x26U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                 >> 3U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4433 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x22U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                 >> 3U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4438 
        = (1U & ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                          >> 0x1aU)) & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                                        >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4444 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x12U) & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4455 
        = (1U & ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                          >> 0xfU)) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                       >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4456 
        = (1U & ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                          >> 0xeU)) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                       >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4453 
        = (1U & ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                          >> 0xdU)) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                       >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4452 
        = (1U & ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                          >> 0xaU)) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                       >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4466 
        = ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                    >> 7U)) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4467 
        = ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                    >> 6U)) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4464 
        = ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                    >> 5U)) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4463 
        = ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                    >> 2U)) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4427 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x2cU) & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4446 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x14U) & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4442 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x10U) & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4424 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x2bU) & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4422 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x29U) & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4423 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x28U) & ((IData)(vlSelfRef.picorv32__DOT___00979_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4432 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x23U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                 >> 3U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4430 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x21U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                 >> 3U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4431 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x20U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                 >> 3U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4440 
        = (1U & ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                          >> 0x1bU)) & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                                        >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4439 
        = (1U & ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                          >> 0x19U)) & ((IData)(vlSelfRef.picorv32__DOT___00972_) 
                                        >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4443 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x13U) & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4441 
        = (IData)(((vlSelfRef.picorv32__DOT___01006_ 
                    >> 0x11U) & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                 >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4454 
        = (1U & ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                          >> 0xcU)) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                       >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4451 
        = (1U & ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                          >> 0xbU)) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                       >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4449 
        = (1U & ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                          >> 9U)) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                     >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4450 
        = (1U & ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                          >> 8U)) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                     >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4465 
        = ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                    >> 4U)) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4462 
        = ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                    >> 3U)) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4460 
        = ((IData)((vlSelfRef.picorv32__DOT___01006_ 
                    >> 1U)) & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4461 
        = ((IData)(vlSelfRef.picorv32__DOT___01006_) 
           & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_480));
    picorv32__DOT____VdfgRegularize_h2364b514_0_55 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4434) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4428));
    picorv32__DOT____VdfgRegularize_h2364b514_0_52 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4435) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4429));
    picorv32__DOT____VdfgRegularize_h2364b514_0_63 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4433) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4425));
    picorv32__DOT____VdfgRegularize_h2364b514_0_61 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4444) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4438));
    picorv32__DOT____VdfgRegularize_h2364b514_0_54 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4466) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4455));
    picorv32__DOT____VdfgRegularize_h2364b514_0_51 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4467) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4456));
    picorv32__DOT____VdfgRegularize_h2364b514_0_49 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4464) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4453));
    picorv32__DOT____VdfgRegularize_h2364b514_0_62 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4463) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4452));
    picorv32__DOT____VdfgRegularize_h2364b514_0_59 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4432) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4424));
    picorv32__DOT____VdfgRegularize_h2364b514_0_67 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4430) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4422));
    picorv32__DOT____VdfgRegularize_h2364b514_0_112 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4431) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4423));
    picorv32__DOT____VdfgRegularize_h2364b514_0_57 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4443) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4440));
    picorv32__DOT____VdfgRegularize_h2364b514_0_65 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4441) 
           | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4439));
    picorv32__DOT____VdfgRegularize_h2364b514_0_47 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4465) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4454));
    picorv32__DOT____VdfgRegularize_h2364b514_0_58 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4462) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4451));
    picorv32__DOT____VdfgRegularize_h2364b514_0_66 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4460) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4449));
    picorv32__DOT____VdfgRegularize_h2364b514_0_111 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4461) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4450));
    picorv32__DOT____VdfgRegularize_h2364b514_0_56 
        = (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_54) 
            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4447)) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_55));
    picorv32__DOT____VdfgRegularize_h2364b514_0_53 
        = (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_51) 
            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4448)) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_52));
    picorv32__DOT____VdfgRegularize_h2364b514_0_50 
        = (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_49) 
            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4445)) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4426));
    picorv32__DOT____VdfgRegularize_h2364b514_0_64 
        = (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_62) 
            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_61)) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_63));
    picorv32__DOT____VdfgRegularize_h2364b514_0_48 
        = (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_47) 
            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4446)) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4427));
    picorv32__DOT____VdfgRegularize_h2364b514_0_60 
        = (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_58) 
            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_57)) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_59));
    picorv32__DOT____VdfgRegularize_h2364b514_0_68 
        = (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_66) 
            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_65)) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_67));
    picorv32__DOT____VdfgRegularize_h2364b514_0_113 
        = (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_111) 
            | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4442)) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_112));
    if (vlSelfRef.picorv32__DOT___01162_) {
        picorv32__DOT____VdfgRegularize_h2364b514_0_2811 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_56));
        picorv32__DOT____VdfgRegularize_h2364b514_0_2812 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_53));
        picorv32__DOT____VdfgRegularize_h2364b514_0_2809 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_50));
        picorv32__DOT____VdfgRegularize_h2364b514_0_2808 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_64));
        picorv32__DOT____VdfgRegularize_h2364b514_0_2810 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_48));
        picorv32__DOT____VdfgRegularize_h2364b514_0_2807 
            = (1U & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_60));
    } else {
        picorv32__DOT____VdfgRegularize_h2364b514_0_2811 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                     >> 7U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_2812 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                     >> 6U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_2809 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                     >> 5U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_2808 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                     >> 2U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_2810 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                     >> 4U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_2807 
            = (1U & ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                     >> 3U));
    }
    picorv32__DOT____VdfgRegularize_h2364b514_0_5339 
        = ((2U & (((IData)(vlSelfRef.picorv32__DOT___01162_)
                    ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_68)
                    : ((IData)(vlSelfRef.picorv32__DOT__cpu_state) 
                       >> 1U)) << 1U)) | (1U & ((IData)(vlSelfRef.picorv32__DOT___01162_)
                                                 ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_113)
                                                 : (IData)(vlSelfRef.picorv32__DOT__cpu_state))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3213 
        = ((IData)(vlSelfRef.resetn) & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_2811));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3214 
        = (1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_2812)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3211 
        = ((IData)(vlSelfRef.resetn) & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_2809));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3208 
        = ((IData)(vlSelfRef.resetn) & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_2808));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3212 
        = ((- (IData)((IData)(vlSelfRef.resetn))) & 
           (((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_2810) 
             << 1U) | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_2807)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3210 
        = ((- (IData)((IData)(vlSelfRef.resetn))) & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5339));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3222 
        = ((IData)(vlSelfRef.picorv32__DOT___00822_) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3213));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3223 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00822_)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3214));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3220 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00822_)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3211));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3219 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00822_)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3208));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3221 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00822_)) 
           & ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3212) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3218 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT___00822_)) 
                 & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3212)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3216 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00822_)) 
           & ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3210) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3217 
        = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT___00822_)) 
                 & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3210)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3231 
        = ((IData)(vlSelfRef.picorv32__DOT___00823_) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3222));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3232 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00823_)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3223));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3229 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00823_)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3220));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3228 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00823_)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3219));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3230 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00823_)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3221));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3227 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00823_)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3218));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3225 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00823_)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3216));
    picorv32__DOT____VdfgRegularize_h2364b514_0_3226 
        = ((~ (IData)(vlSelfRef.picorv32__DOT___00823_)) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3217));
    vlSelfRef.picorv32__DOT___01016_ = ((((((IData)(vlSelfRef.picorv32__DOT___00821_)
                                             ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3231)
                                             : (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3213)) 
                                           << 7U) | 
                                          (((IData)(vlSelfRef.picorv32__DOT___00821_)
                                             ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3232)
                                             : (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3214)) 
                                           << 6U)) 
                                         | ((((IData)(vlSelfRef.picorv32__DOT___00821_)
                                               ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3229)
                                               : (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3211)) 
                                             << 5U) 
                                            | (0x10U 
                                               & (((IData)(vlSelfRef.picorv32__DOT___00821_)
                                                    ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3230)
                                                    : 
                                                   ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3212) 
                                                    >> 1U)) 
                                                  << 4U)))) 
                                        | (((8U & (
                                                   ((IData)(vlSelfRef.picorv32__DOT___00821_)
                                                     ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3227)
                                                     : (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3212)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelfRef.picorv32__DOT___00821_)
                                                 ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3228)
                                                 : (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3208)) 
                                               << 2U)) 
                                           | ((2U & 
                                               (((IData)(vlSelfRef.picorv32__DOT___00821_)
                                                  ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3225)
                                                  : 
                                                 ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3210) 
                                                  >> 1U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.picorv32__DOT___00821_)
                                                     ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3226)
                                                     : (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3210))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__9(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__9\n"); );
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
    vlSelfRef.picorv32__DOT___00008_ = ((2U & (((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895)
                                                 ? 
                                                ((IData)(vlSelfRef.picorv32__DOT___01084_) 
                                                 >> 1U)
                                                 : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5668)) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_895)
                                                  ? 
                                                 ((IData)(vlSelfRef.picorv32__DOT___01084_) 
                                                  >> 1U)
                                                  : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5667))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__10(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT___00206_;
    picorv32__DOT___00206_ = 0;
    VlWide<3>/*95:0*/ picorv32__DOT___00957_;
    VL_ZERO_W(96, picorv32__DOT___00957_);
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_73;
    picorv32__DOT____VdfgRegularize_h2364b514_0_73 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_74;
    picorv32__DOT____VdfgRegularize_h2364b514_0_74 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_75;
    picorv32__DOT____VdfgRegularize_h2364b514_0_75 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_76;
    picorv32__DOT____VdfgRegularize_h2364b514_0_76 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_77;
    picorv32__DOT____VdfgRegularize_h2364b514_0_77 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_78;
    picorv32__DOT____VdfgRegularize_h2364b514_0_78 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_79;
    picorv32__DOT____VdfgRegularize_h2364b514_0_79 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_80;
    picorv32__DOT____VdfgRegularize_h2364b514_0_80 = 0;
    CData/*1:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_81;
    picorv32__DOT____VdfgRegularize_h2364b514_0_81 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_82;
    picorv32__DOT____VdfgRegularize_h2364b514_0_82 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_83;
    picorv32__DOT____VdfgRegularize_h2364b514_0_83 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_85;
    picorv32__DOT____VdfgRegularize_h2364b514_0_85 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_86;
    picorv32__DOT____VdfgRegularize_h2364b514_0_86 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_87;
    picorv32__DOT____VdfgRegularize_h2364b514_0_87 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_88;
    picorv32__DOT____VdfgRegularize_h2364b514_0_88 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_89;
    picorv32__DOT____VdfgRegularize_h2364b514_0_89 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_90;
    picorv32__DOT____VdfgRegularize_h2364b514_0_90 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_91;
    picorv32__DOT____VdfgRegularize_h2364b514_0_91 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_92;
    picorv32__DOT____VdfgRegularize_h2364b514_0_92 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_93;
    picorv32__DOT____VdfgRegularize_h2364b514_0_93 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_94;
    picorv32__DOT____VdfgRegularize_h2364b514_0_94 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_95;
    picorv32__DOT____VdfgRegularize_h2364b514_0_95 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_96;
    picorv32__DOT____VdfgRegularize_h2364b514_0_96 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_97;
    picorv32__DOT____VdfgRegularize_h2364b514_0_97 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_98;
    picorv32__DOT____VdfgRegularize_h2364b514_0_98 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_99;
    picorv32__DOT____VdfgRegularize_h2364b514_0_99 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_100;
    picorv32__DOT____VdfgRegularize_h2364b514_0_100 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5828;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5828 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5829;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5829 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5830;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5830 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5831;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5831 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5832;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5832 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5833;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5833 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5834;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5834 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5835;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5835 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5836;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5836 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5837;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5837 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5838;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5838 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5839;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5839 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5840;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5840 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5841;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5841 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5842;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5842 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5843;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5843 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5844;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5844 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5845;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5845 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5846;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5846 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5847;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5847 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5848;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5848 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5849;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5849 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5850;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5850 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5851;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5851 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5852;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5852 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5853;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5853 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5854;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5854 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5855;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5855 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5856;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5856 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5857;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5857 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5858;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5858 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5859;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5859 = 0;
    // Body
    picorv32__DOT___00957_[0U] = ((0x80000000U & ((vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                   << 0x18U) 
                                                  & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lb) 
                                                     << 0x1fU))) 
                                  | ((vlSelfRef.picorv32__DOT____Vconcswap_1_h337529d3__0 
                                      << 7U) | (((0x60U 
                                                  & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                     & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lb))) 
                                                        << 5U))) 
                                                 | (0x18U 
                                                    & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                       & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lb))) 
                                                          << 3U)))) 
                                                | ((0xfffffffcU 
                                                    & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                       & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lb) 
                                                          << 2U))) 
                                                   | (3U 
                                                      & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                         & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lb)))))))));
    picorv32__DOT___00957_[1U] = ((0x80000000U & ((vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                   << 0x10U) 
                                                  & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lh) 
                                                     << 0x1fU))) 
                                  | (((IData)(vlSelfRef.picorv32__DOT____Vconcswap_1_h9b3803eb__0) 
                                      << 0xfU) | ((
                                                   ((0xffffc000U 
                                                     & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                        & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lh) 
                                                           << 0xeU))) 
                                                    | ((0x3000U 
                                                        & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                           & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lh))) 
                                                              << 0xcU))) 
                                                       | (0xfffff800U 
                                                          & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                             & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lh) 
                                                                << 0xbU))))) 
                                                   | ((0x600U 
                                                       & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                          & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lh))) 
                                                             << 9U))) 
                                                      | (0xffffff00U 
                                                         & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                            & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lh) 
                                                               << 8U))))) 
                                                  | (((0xc0U 
                                                       & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                          & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lh))) 
                                                             << 6U))) 
                                                      | (0xffffffe0U 
                                                         & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                            & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lh) 
                                                               << 5U)))) 
                                                     | ((0x18U 
                                                         & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                            & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lh))) 
                                                               << 3U))) 
                                                        | ((0xfffffffcU 
                                                            & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                               & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lh) 
                                                                  << 2U))) 
                                                           | (3U 
                                                              & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                                 & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lh)))))))))));
    picorv32__DOT___00957_[2U] = (((((0xc0000000U & 
                                      (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                       & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lu))) 
                                          << 0x1eU))) 
                                     | (0xe0000000U 
                                        & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                           & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lu) 
                                              << 0x1dU)))) 
                                    | ((0x18000000U 
                                        & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                           & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lu))) 
                                              << 0x1bU))) 
                                       | ((0xfc000000U 
                                           & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                              & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lu) 
                                                 << 0x1aU))) 
                                          | (0x3000000U 
                                             & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lu))) 
                                                   << 0x18U)))))) 
                                   | (((0xff800000U 
                                        & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                           & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lu) 
                                              << 0x17U))) 
                                       | ((0x600000U 
                                           & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                              & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lu))) 
                                                 << 0x15U))) 
                                          | (0xfff00000U 
                                             & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lu) 
                                                   << 0x14U))))) 
                                      | ((0xc0000U 
                                          & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                             & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lu))) 
                                                << 0x12U))) 
                                         | (0xfffe0000U 
                                            & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                               & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lu) 
                                                  << 0x11U)))))) 
                                  | ((((0x18000U & 
                                        (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                         & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lu))) 
                                            << 0xfU))) 
                                       | ((0xffffc000U 
                                           & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                              & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lu) 
                                                 << 0xeU))) 
                                          | (0x3000U 
                                             & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lu))) 
                                                   << 0xcU))))) 
                                      | ((0xfffff800U 
                                          & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                             & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lu) 
                                                << 0xbU))) 
                                         | ((0x600U 
                                             & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lu))) 
                                                   << 9U))) 
                                            | (0xffffff00U 
                                               & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                  & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lu) 
                                                     << 8U)))))) 
                                     | (((0xc0U & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                   & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lu))) 
                                                      << 6U))) 
                                         | (0xffffffe0U 
                                            & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                               & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lu) 
                                                  << 5U)))) 
                                        | ((0x18U & 
                                            (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                             & ((- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lu))) 
                                                << 3U))) 
                                           | ((0xfffffffcU 
                                               & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                  & ((IData)(vlSelfRef.picorv32__DOT__latched_is_lu) 
                                                     << 2U))) 
                                              | (3U 
                                                 & (vlSelfRef.picorv32__DOT__mem_rdata_word 
                                                    & (- (IData)((IData)(vlSelfRef.picorv32__DOT__latched_is_lu))))))))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h9b3803eb__0 
        = (((((0x8000U & (picorv32__DOT___00957_[1U] 
                          >> 0x10U)) | (0x4000U & (
                                                   picorv32__DOT___00957_[1U] 
                                                   >> 0x11U))) 
             | ((0x2000U & (picorv32__DOT___00957_[1U] 
                            >> 0x12U)) | (0x1000U & 
                                          (picorv32__DOT___00957_[1U] 
                                           >> 0x13U)))) 
            | (((0x800U & (picorv32__DOT___00957_[1U] 
                           >> 0x14U)) | (0x400U & (
                                                   picorv32__DOT___00957_[1U] 
                                                   >> 0x15U))) 
               | ((0x200U & (picorv32__DOT___00957_[1U] 
                             >> 0x16U)) | (0x100U & 
                                           (picorv32__DOT___00957_[1U] 
                                            >> 0x17U))))) 
           | ((((0x80U & (picorv32__DOT___00957_[1U] 
                          >> 0x18U)) | (0x40U & (picorv32__DOT___00957_[1U] 
                                                 >> 0x19U))) 
               | ((0x20U & (picorv32__DOT___00957_[1U] 
                            >> 0x1aU)) | (0x10U & (
                                                   picorv32__DOT___00957_[1U] 
                                                   >> 0x1bU)))) 
              | (((8U & (picorv32__DOT___00957_[1U] 
                         >> 0x1cU)) | (4U & (picorv32__DOT___00957_[1U] 
                                             >> 0x1dU))) 
                 | ((2U & (picorv32__DOT___00957_[1U] 
                           >> 0x1eU)) | (picorv32__DOT___00957_[1U] 
                                         >> 0x1fU)))));
    vlSelfRef.picorv32__DOT____Vconcswap_1_h337529d3__0 
        = (((((0x800000U & (picorv32__DOT___00957_[0U] 
                            >> 8U)) | ((0x400000U & 
                                        (picorv32__DOT___00957_[0U] 
                                         >> 9U)) | 
                                       (0x200000U & 
                                        (picorv32__DOT___00957_[0U] 
                                         >> 0xaU)))) 
             | ((0x100000U & (picorv32__DOT___00957_[0U] 
                              >> 0xbU)) | ((0x80000U 
                                            & (picorv32__DOT___00957_[0U] 
                                               >> 0xcU)) 
                                           | (0x40000U 
                                              & (picorv32__DOT___00957_[0U] 
                                                 >> 0xdU))))) 
            | (((0x20000U & (picorv32__DOT___00957_[0U] 
                             >> 0xeU)) | ((0x10000U 
                                           & (picorv32__DOT___00957_[0U] 
                                              >> 0xfU)) 
                                          | (0x8000U 
                                             & (picorv32__DOT___00957_[0U] 
                                                >> 0x10U)))) 
               | ((0x4000U & (picorv32__DOT___00957_[0U] 
                              >> 0x11U)) | ((0x2000U 
                                             & (picorv32__DOT___00957_[0U] 
                                                >> 0x12U)) 
                                            | (0x1000U 
                                               & (picorv32__DOT___00957_[0U] 
                                                  >> 0x13U)))))) 
           | ((((0x800U & (picorv32__DOT___00957_[0U] 
                           >> 0x14U)) | ((0x400U & 
                                          (picorv32__DOT___00957_[0U] 
                                           >> 0x15U)) 
                                         | (0x200U 
                                            & (picorv32__DOT___00957_[0U] 
                                               >> 0x16U)))) 
               | ((0x100U & (picorv32__DOT___00957_[0U] 
                             >> 0x17U)) | ((0x80U & 
                                            (picorv32__DOT___00957_[0U] 
                                             >> 0x18U)) 
                                           | (0x40U 
                                              & (picorv32__DOT___00957_[0U] 
                                                 >> 0x19U))))) 
              | (((0x20U & (picorv32__DOT___00957_[0U] 
                            >> 0x1aU)) | ((0x10U & 
                                           (picorv32__DOT___00957_[0U] 
                                            >> 0x1bU)) 
                                          | (8U & (
                                                   picorv32__DOT___00957_[0U] 
                                                   >> 0x1cU)))) 
                 | ((4U & (picorv32__DOT___00957_[0U] 
                           >> 0x1dU)) | ((2U & (picorv32__DOT___00957_[0U] 
                                                >> 0x1eU)) 
                                         | (picorv32__DOT___00957_[0U] 
                                            >> 0x1fU))))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_86 
        = (1U & (((picorv32__DOT___00957_[0U] >> 0x1fU) 
                  | (picorv32__DOT___00957_[1U] >> 0xeU)) 
                 | (picorv32__DOT___00957_[2U] >> 0xeU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_87 
        = (1U & (((picorv32__DOT___00957_[0U] >> 0x1fU) 
                  | (picorv32__DOT___00957_[1U] >> 0xdU)) 
                 | (picorv32__DOT___00957_[2U] >> 0xdU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_88 
        = (1U & (((picorv32__DOT___00957_[0U] >> 0x1fU) 
                  | (picorv32__DOT___00957_[1U] >> 0xcU)) 
                 | (picorv32__DOT___00957_[2U] >> 0xcU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_89 
        = (1U & (((picorv32__DOT___00957_[0U] >> 0x1fU) 
                  | (picorv32__DOT___00957_[1U] >> 0xbU)) 
                 | (picorv32__DOT___00957_[2U] >> 0xbU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_90 
        = (1U & (((picorv32__DOT___00957_[0U] >> 0x1fU) 
                  | (picorv32__DOT___00957_[1U] >> 0xaU)) 
                 | (picorv32__DOT___00957_[2U] >> 0xaU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_91 
        = (1U & (((picorv32__DOT___00957_[0U] >> 0x1fU) 
                  | (picorv32__DOT___00957_[1U] >> 9U)) 
                 | (picorv32__DOT___00957_[2U] >> 9U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_92 
        = (1U & (((picorv32__DOT___00957_[0U] >> 0x1fU) 
                  | (picorv32__DOT___00957_[1U] >> 8U)) 
                 | (picorv32__DOT___00957_[2U] >> 8U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_93 
        = (1U & (((picorv32__DOT___00957_[0U] >> 0x1fU) 
                  | (picorv32__DOT___00957_[1U] >> 7U)) 
                 | (picorv32__DOT___00957_[2U] >> 7U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_94 
        = (1U & (((picorv32__DOT___00957_[0U] | picorv32__DOT___00957_[1U]) 
                  | picorv32__DOT___00957_[2U]) >> 6U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_95 
        = (1U & (((picorv32__DOT___00957_[0U] | picorv32__DOT___00957_[1U]) 
                  | picorv32__DOT___00957_[2U]) >> 5U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_96 
        = (1U & (((picorv32__DOT___00957_[0U] | picorv32__DOT___00957_[1U]) 
                  | picorv32__DOT___00957_[2U]) >> 4U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_97 
        = (1U & (((picorv32__DOT___00957_[0U] | picorv32__DOT___00957_[1U]) 
                  | picorv32__DOT___00957_[2U]) >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_98 
        = (1U & (((picorv32__DOT___00957_[0U] | picorv32__DOT___00957_[1U]) 
                  | picorv32__DOT___00957_[2U]) >> 2U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_99 
        = (1U & (((picorv32__DOT___00957_[0U] | picorv32__DOT___00957_[1U]) 
                  | picorv32__DOT___00957_[2U]) >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_100 
        = (1U & ((picorv32__DOT___00957_[0U] | picorv32__DOT___00957_[1U]) 
                 | picorv32__DOT___00957_[2U]));
    picorv32__DOT___00206_ = ((picorv32__DOT___00957_[0U] 
                               | picorv32__DOT___00957_[1U]) 
                              >> 0x1fU);
    picorv32__DOT____VdfgRegularize_h2364b514_0_5844 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_86));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5847 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_87));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5846 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_88));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5849 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_89));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5848 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_90));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5851 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_91));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5850 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_92));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5853 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_93));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5852 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_94));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5855 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_95));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5854 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_96));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5857 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_97));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5856 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_98));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5859 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_99));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5858 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_100));
    picorv32__DOT____VdfgRegularize_h2364b514_0_74 
        = (1U & ((IData)(picorv32__DOT___00206_) | 
                 (picorv32__DOT___00957_[2U] >> 0x1dU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_76 
        = (1U & ((IData)(picorv32__DOT___00206_) | 
                 (picorv32__DOT___00957_[2U] >> 0x1aU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_78 
        = (1U & ((IData)(picorv32__DOT___00206_) | 
                 (picorv32__DOT___00957_[2U] >> 0x17U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_80 
        = (1U & ((IData)(picorv32__DOT___00206_) | 
                 (picorv32__DOT___00957_[2U] >> 0x14U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_82 
        = (1U & ((IData)(picorv32__DOT___00206_) | 
                 (picorv32__DOT___00957_[2U] >> 0x11U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_83 
        = (1U & ((IData)(picorv32__DOT___00206_) | 
                 (picorv32__DOT___00957_[2U] >> 0x10U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_85 
        = (1U & ((IData)(picorv32__DOT___00206_) | 
                 (picorv32__DOT___00957_[2U] >> 0xfU)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_73 
        = (3U & ((- (IData)((IData)(picorv32__DOT___00206_))) 
                 | ((picorv32__DOT___00957_[2U] << 2U) 
                    | (picorv32__DOT___00957_[2U] >> 0x1eU))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_75 
        = (3U & ((- (IData)((IData)(picorv32__DOT___00206_))) 
                 | ((picorv32__DOT___00957_[2U] << 5U) 
                    | (picorv32__DOT___00957_[2U] >> 0x1bU))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_77 
        = (3U & ((- (IData)((IData)(picorv32__DOT___00206_))) 
                 | ((picorv32__DOT___00957_[2U] << 8U) 
                    | (picorv32__DOT___00957_[2U] >> 0x18U))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_79 
        = (3U & ((- (IData)((IData)(picorv32__DOT___00206_))) 
                 | ((picorv32__DOT___00957_[2U] << 0xbU) 
                    | (picorv32__DOT___00957_[2U] >> 0x15U))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_81 
        = (3U & ((- (IData)((IData)(picorv32__DOT___00206_))) 
                 | ((picorv32__DOT___00957_[2U] << 0xeU) 
                    | (picorv32__DOT___00957_[2U] >> 0x12U))));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5831 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_74));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5832 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_76));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5837 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_78));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5838 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_80));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5843 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_82));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5842 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_83));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5845 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_85));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5829 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_73) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5828 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_73));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5830 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_75) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5833 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_75));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5835 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_77) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5834 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_77));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5836 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_79) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5839 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_79));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5841 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_81) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5840 
        = ((IData)(vlSelfRef.picorv32__DOT___01157_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_81));
    vlSelfRef.picorv32__DOT___00960_ = ((((((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                              & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5829)) 
                                             << 0x1fU) 
                                            | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5828)) 
                                               << 0x1eU)) 
                                           | ((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5831)) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5830)) 
                                                 << 0x1cU))) 
                                          | (((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5833)) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5832)) 
                                                 << 0x1aU)) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5835)) 
                                                 << 0x19U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5834)) 
                                                   << 0x18U)))) 
                                         | ((((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5837)) 
                                               << 0x17U) 
                                              | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5836)) 
                                                 << 0x16U)) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5839)) 
                                                 << 0x15U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5838)) 
                                                   << 0x14U))) 
                                            | (((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5841)) 
                                                 << 0x13U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5840)) 
                                                   << 0x12U)) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5843)) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5842)) 
                                                     << 0x10U))))) 
                                        | (((((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5845)) 
                                               << 0xfU) 
                                              | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5844)) 
                                                 << 0xeU)) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5847)) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5846)) 
                                                   << 0xcU))) 
                                            | (((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5849)) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5848)) 
                                                   << 0xaU)) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5851)) 
                                                   << 9U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5850)) 
                                                     << 8U)))) 
                                           | ((((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5853)) 
                                                 << 7U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5852)) 
                                                   << 6U)) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5855)) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5854)) 
                                                     << 4U))) 
                                              | (((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5857)) 
                                                   << 3U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5856)) 
                                                     << 2U)) 
                                                 | ((((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5859)) 
                                                     << 1U) 
                                                    | ((IData)(vlSelfRef.picorv32__DOT___00820_) 
                                                       & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5858)))))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__11(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__11\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3268;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3268 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3270;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3270 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3271;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3271 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3272;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3272 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3273;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3273 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3274;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3274 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3275;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3275 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3276;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3276 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3277;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3277 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3278;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3278 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3279;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3279 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3280;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3280 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3281;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3281 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3282;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3282 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3283;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3283 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3284;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3284 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3285;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3285 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3286;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3286 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3287;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3287 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3288;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3288 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3289;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3289 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3290;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3290 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3291;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3291 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3292;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3292 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3293;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3293 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3294;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3294 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3295;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3295 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_3296;
    picorv32__DOT____VdfgRegularize_h2364b514_0_3296 = 0;
    // Body
    if (vlSelfRef.picorv32__DOT__instr_jal) {
        picorv32__DOT____VdfgRegularize_h2364b514_0_3268 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 2U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3296 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x1dU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3294 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x1cU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3295 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x1bU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3292 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x1aU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3293 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x19U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3290 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x18U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3291 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x17U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3288 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x16U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3289 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x15U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3286 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x14U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3287 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x13U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3284 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x12U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3285 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x11U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3282 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0x10U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3283 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0xfU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3280 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0xeU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3281 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0xdU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3278 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0xcU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3279 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0xbU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3276 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 0xaU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3277 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 9U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3274 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 8U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3275 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 7U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3272 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 6U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3273 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 5U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3270 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 4U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3271 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5276 
                     >> 3U));
    } else {
        picorv32__DOT____VdfgRegularize_h2364b514_0_3268 
            = (1U & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5273));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3296 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0x1aU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3294 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0x19U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3295 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0x18U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3292 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0x17U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3293 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0x16U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3290 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0x15U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3291 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0x14U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3288 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0x13U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3289 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0x12U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3286 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0x11U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3287 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0x10U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3284 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0xfU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3285 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0xeU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3282 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0xdU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3283 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0xcU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3280 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0xbU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3281 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 0xaU));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3278 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 9U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3279 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 8U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3276 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 7U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3277 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 6U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3274 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 5U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3275 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 4U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3272 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 3U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3273 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 2U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3270 
            = (1U & (vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275 
                     >> 1U));
        picorv32__DOT____VdfgRegularize_h2364b514_0_3271 
            = (1U & vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5275);
    }
    vlSelfRef.picorv32__DOT___01060_ = ((((((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                               ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3296)
                                               : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5632)) 
                                             << 0x1fU) 
                                            | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                 ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3294)
                                                 : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5631)) 
                                               << 0x1eU)) 
                                           | ((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                 ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3295)
                                                 : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5634)) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                   ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3292)
                                                   : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5633)) 
                                                 << 0x1cU))) 
                                          | (((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                 ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3293)
                                                 : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5636)) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                   ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3290)
                                                   : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5635)) 
                                                 << 0x1aU)) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                   ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3291)
                                                   : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5638)) 
                                                 << 0x19U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                     ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3288)
                                                     : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5637)) 
                                                   << 0x18U)))) 
                                         | ((((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                 ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3289)
                                                 : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5640)) 
                                               << 0x17U) 
                                              | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                   ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3286)
                                                   : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5639)) 
                                                 << 0x16U)) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                   ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3287)
                                                   : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5642)) 
                                                 << 0x15U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                     ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3284)
                                                     : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5641)) 
                                                   << 0x14U))) 
                                            | (((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                   ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3285)
                                                   : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5644)) 
                                                 << 0x13U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                     ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3282)
                                                     : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5643)) 
                                                   << 0x12U)) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                     ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3283)
                                                     : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5646)) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                       ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3280)
                                                       : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5645)) 
                                                     << 0x10U))))) 
                                        | (((((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                 ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3281)
                                                 : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5648)) 
                                               << 0xfU) 
                                              | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                   ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3278)
                                                   : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5647)) 
                                                 << 0xeU)) 
                                             | ((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                   ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3279)
                                                   : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5650)) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                     ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3276)
                                                     : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5649)) 
                                                   << 0xcU))) 
                                            | (((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                   ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3277)
                                                   : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5652)) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                     ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3274)
                                                     : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5651)) 
                                                   << 0xaU)) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                     ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3275)
                                                     : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5654)) 
                                                   << 9U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                       ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3272)
                                                       : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5653)) 
                                                     << 8U)))) 
                                           | ((((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                   ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3273)
                                                   : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5656)) 
                                                 << 7U) 
                                                | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                     ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3270)
                                                     : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5655)) 
                                                   << 6U)) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                     ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3271)
                                                     : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5658)) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                       ? (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_3268)
                                                       : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5657)) 
                                                     << 4U))) 
                                              | (((((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                     ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3269)
                                                     : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5660)) 
                                                   << 3U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                       ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3266)
                                                       : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5659)) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger)
                                                      ? (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_3267)
                                                      : (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_5661)) 
                                                    << 1U)))));
}

VL_INLINE_OPT void Vpicorv32_gates___024root___ico_comb__TOP__12(Vpicorv32_gates___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_gates___024root___ico_comb__TOP__12\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_120;
    picorv32__DOT____VdfgRegularize_h2364b514_0_120 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_121;
    picorv32__DOT____VdfgRegularize_h2364b514_0_121 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_122;
    picorv32__DOT____VdfgRegularize_h2364b514_0_122 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_123;
    picorv32__DOT____VdfgRegularize_h2364b514_0_123 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_124;
    picorv32__DOT____VdfgRegularize_h2364b514_0_124 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_125;
    picorv32__DOT____VdfgRegularize_h2364b514_0_125 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_126;
    picorv32__DOT____VdfgRegularize_h2364b514_0_126 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_127;
    picorv32__DOT____VdfgRegularize_h2364b514_0_127 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_128;
    picorv32__DOT____VdfgRegularize_h2364b514_0_128 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_129;
    picorv32__DOT____VdfgRegularize_h2364b514_0_129 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_130;
    picorv32__DOT____VdfgRegularize_h2364b514_0_130 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_131;
    picorv32__DOT____VdfgRegularize_h2364b514_0_131 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_132;
    picorv32__DOT____VdfgRegularize_h2364b514_0_132 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_133;
    picorv32__DOT____VdfgRegularize_h2364b514_0_133 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_134;
    picorv32__DOT____VdfgRegularize_h2364b514_0_134 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_135;
    picorv32__DOT____VdfgRegularize_h2364b514_0_135 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_136;
    picorv32__DOT____VdfgRegularize_h2364b514_0_136 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_137;
    picorv32__DOT____VdfgRegularize_h2364b514_0_137 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_138;
    picorv32__DOT____VdfgRegularize_h2364b514_0_138 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_139;
    picorv32__DOT____VdfgRegularize_h2364b514_0_139 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_140;
    picorv32__DOT____VdfgRegularize_h2364b514_0_140 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_141;
    picorv32__DOT____VdfgRegularize_h2364b514_0_141 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_142;
    picorv32__DOT____VdfgRegularize_h2364b514_0_142 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_143;
    picorv32__DOT____VdfgRegularize_h2364b514_0_143 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_144;
    picorv32__DOT____VdfgRegularize_h2364b514_0_144 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_145;
    picorv32__DOT____VdfgRegularize_h2364b514_0_145 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_146;
    picorv32__DOT____VdfgRegularize_h2364b514_0_146 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_147;
    picorv32__DOT____VdfgRegularize_h2364b514_0_147 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_148;
    picorv32__DOT____VdfgRegularize_h2364b514_0_148 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_149;
    picorv32__DOT____VdfgRegularize_h2364b514_0_149 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_150;
    picorv32__DOT____VdfgRegularize_h2364b514_0_150 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_151;
    picorv32__DOT____VdfgRegularize_h2364b514_0_151 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_152;
    picorv32__DOT____VdfgRegularize_h2364b514_0_152 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_153;
    picorv32__DOT____VdfgRegularize_h2364b514_0_153 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_154;
    picorv32__DOT____VdfgRegularize_h2364b514_0_154 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_155;
    picorv32__DOT____VdfgRegularize_h2364b514_0_155 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_317;
    picorv32__DOT____VdfgRegularize_h2364b514_0_317 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_318;
    picorv32__DOT____VdfgRegularize_h2364b514_0_318 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_319;
    picorv32__DOT____VdfgRegularize_h2364b514_0_319 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_320;
    picorv32__DOT____VdfgRegularize_h2364b514_0_320 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_321;
    picorv32__DOT____VdfgRegularize_h2364b514_0_321 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_322;
    picorv32__DOT____VdfgRegularize_h2364b514_0_322 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_323;
    picorv32__DOT____VdfgRegularize_h2364b514_0_323 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_324;
    picorv32__DOT____VdfgRegularize_h2364b514_0_324 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_325;
    picorv32__DOT____VdfgRegularize_h2364b514_0_325 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_326;
    picorv32__DOT____VdfgRegularize_h2364b514_0_326 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_327;
    picorv32__DOT____VdfgRegularize_h2364b514_0_327 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_328;
    picorv32__DOT____VdfgRegularize_h2364b514_0_328 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_329;
    picorv32__DOT____VdfgRegularize_h2364b514_0_329 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_330;
    picorv32__DOT____VdfgRegularize_h2364b514_0_330 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_331;
    picorv32__DOT____VdfgRegularize_h2364b514_0_331 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_332;
    picorv32__DOT____VdfgRegularize_h2364b514_0_332 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_333;
    picorv32__DOT____VdfgRegularize_h2364b514_0_333 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_334;
    picorv32__DOT____VdfgRegularize_h2364b514_0_334 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_335;
    picorv32__DOT____VdfgRegularize_h2364b514_0_335 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_336;
    picorv32__DOT____VdfgRegularize_h2364b514_0_336 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_337;
    picorv32__DOT____VdfgRegularize_h2364b514_0_337 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_338;
    picorv32__DOT____VdfgRegularize_h2364b514_0_338 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_339;
    picorv32__DOT____VdfgRegularize_h2364b514_0_339 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_340;
    picorv32__DOT____VdfgRegularize_h2364b514_0_340 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_341;
    picorv32__DOT____VdfgRegularize_h2364b514_0_341 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_342;
    picorv32__DOT____VdfgRegularize_h2364b514_0_342 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_343;
    picorv32__DOT____VdfgRegularize_h2364b514_0_343 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_344;
    picorv32__DOT____VdfgRegularize_h2364b514_0_344 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_345;
    picorv32__DOT____VdfgRegularize_h2364b514_0_345 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_346;
    picorv32__DOT____VdfgRegularize_h2364b514_0_346 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_347;
    picorv32__DOT____VdfgRegularize_h2364b514_0_347 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_348;
    picorv32__DOT____VdfgRegularize_h2364b514_0_348 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_349;
    picorv32__DOT____VdfgRegularize_h2364b514_0_349 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_350;
    picorv32__DOT____VdfgRegularize_h2364b514_0_350 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_351;
    picorv32__DOT____VdfgRegularize_h2364b514_0_351 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_352;
    picorv32__DOT____VdfgRegularize_h2364b514_0_352 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_353;
    picorv32__DOT____VdfgRegularize_h2364b514_0_353 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_354;
    picorv32__DOT____VdfgRegularize_h2364b514_0_354 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_355;
    picorv32__DOT____VdfgRegularize_h2364b514_0_355 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_356;
    picorv32__DOT____VdfgRegularize_h2364b514_0_356 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_357;
    picorv32__DOT____VdfgRegularize_h2364b514_0_357 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_358;
    picorv32__DOT____VdfgRegularize_h2364b514_0_358 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_359;
    picorv32__DOT____VdfgRegularize_h2364b514_0_359 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_360;
    picorv32__DOT____VdfgRegularize_h2364b514_0_360 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_361;
    picorv32__DOT____VdfgRegularize_h2364b514_0_361 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_362;
    picorv32__DOT____VdfgRegularize_h2364b514_0_362 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_363;
    picorv32__DOT____VdfgRegularize_h2364b514_0_363 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_364;
    picorv32__DOT____VdfgRegularize_h2364b514_0_364 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_365;
    picorv32__DOT____VdfgRegularize_h2364b514_0_365 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_366;
    picorv32__DOT____VdfgRegularize_h2364b514_0_366 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_367;
    picorv32__DOT____VdfgRegularize_h2364b514_0_367 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_368;
    picorv32__DOT____VdfgRegularize_h2364b514_0_368 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_369;
    picorv32__DOT____VdfgRegularize_h2364b514_0_369 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_370;
    picorv32__DOT____VdfgRegularize_h2364b514_0_370 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_371;
    picorv32__DOT____VdfgRegularize_h2364b514_0_371 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_372;
    picorv32__DOT____VdfgRegularize_h2364b514_0_372 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_373;
    picorv32__DOT____VdfgRegularize_h2364b514_0_373 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_374;
    picorv32__DOT____VdfgRegularize_h2364b514_0_374 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_375;
    picorv32__DOT____VdfgRegularize_h2364b514_0_375 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_376;
    picorv32__DOT____VdfgRegularize_h2364b514_0_376 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4478;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4478 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4479;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4479 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4480;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4480 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4481;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4481 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4482;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4482 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4483;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4483 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4484;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4484 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4485;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4485 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4486;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4486 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4487;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4487 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4488;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4488 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4489;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4489 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4490;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4490 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4491;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4491 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4492;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4492 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4493;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4493 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4494;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4494 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4495;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4495 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4496;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4496 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4497;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4497 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4498;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4498 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4499;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4499 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4500;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4500 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4501;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4501 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4502;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4502 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4503;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4503 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4504;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4504 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4505;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4505 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4506;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4506 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4507;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4507 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4508;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4508 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4509;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4509 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4510;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4510 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4511;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4511 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4512;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4512 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4513;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4513 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4514;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4514 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4515;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4515 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4516;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4516 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4517;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4517 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4518;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4518 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4519;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4519 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4520;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4520 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4521;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4521 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4522;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4522 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4523;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4523 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4524;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4524 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4525;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4525 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4526;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4526 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4527;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4527 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4528;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4528 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4529;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4529 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4530;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4530 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4531;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4531 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4532;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4532 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4533;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4533 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4534;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4534 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4535;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4535 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4536;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4536 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4537;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4537 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4538;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4538 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4539;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4539 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4540;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4540 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4541;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4541 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4542;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4542 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4543;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4543 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4544;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4544 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4545;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4545 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4546;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4546 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4547;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4547 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4548;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4548 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4549;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4549 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4550;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4550 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4551;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4551 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4552;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4552 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4553;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4553 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4554;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4554 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4555;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4555 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4556;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4556 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4557;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4557 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4558;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4558 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4559;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4559 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4560;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4560 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4561;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4561 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4562;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4562 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4563;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4563 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4564;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4564 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4565;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4565 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4566;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4566 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4567;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4567 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4568;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4568 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4569;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4569 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4570;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4570 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4571;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4571 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4572;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4572 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_4573;
    picorv32__DOT____VdfgRegularize_h2364b514_0_4573 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5787;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5787 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5788;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5788 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5789;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5789 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5790;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5790 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5791;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5791 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5792;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5792 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5793;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5793 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5794;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5794 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5795;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5795 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5796;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5796 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5797;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5797 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5798;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5798 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5799;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5799 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5800;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5800 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5801;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5801 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5802;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5802 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5803;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5803 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5804;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5804 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5805;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5805 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5806;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5806 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5807;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5807 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5808;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5808 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5809;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5809 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5810;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5810 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5811;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5811 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5812;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5812 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5813;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5813 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5814;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5814 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5815;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5815 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5816;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5816 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5817;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5817 = 0;
    CData/*0:0*/ picorv32__DOT____VdfgRegularize_h2364b514_0_5818;
    picorv32__DOT____VdfgRegularize_h2364b514_0_5818 = 0;
    // Body
    vlSelfRef.picorv32__DOT___00961_[0U] = ((((((((1U 
                                                   & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                  && (vlSelfRef.picorv32__DOT___00960_ 
                                                      >> 0x1fU)) 
                                                 << 0x1fU) 
                                                | (((1U 
                                                     & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT___00960_ 
                                                           >> 0x1eU))) 
                                                   << 0x1eU)) 
                                               | ((((1U 
                                                     & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT___00960_ 
                                                           >> 0x1dU))) 
                                                   << 0x1dU) 
                                                  | (((1U 
                                                       & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00960_ 
                                                             >> 0x1cU))) 
                                                     << 0x1cU))) 
                                              | (((((1U 
                                                     & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT___00960_ 
                                                           >> 0x1bU))) 
                                                   << 0x1bU) 
                                                  | (((1U 
                                                       & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00960_ 
                                                             >> 0x1aU))) 
                                                     << 0x1aU)) 
                                                 | ((((1U 
                                                       & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00960_ 
                                                             >> 0x19U))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00960_ 
                                                               >> 0x18U))) 
                                                       << 0x18U)))) 
                                             | ((((((1U 
                                                     & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT___00960_ 
                                                           >> 0x17U))) 
                                                   << 0x17U) 
                                                  | (((1U 
                                                       & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00960_ 
                                                             >> 0x16U))) 
                                                     << 0x16U)) 
                                                 | ((((1U 
                                                       & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00960_ 
                                                             >> 0x15U))) 
                                                     << 0x15U) 
                                                    | (((1U 
                                                         & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00960_ 
                                                               >> 0x14U))) 
                                                       << 0x14U))) 
                                                | (((((1U 
                                                       & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00960_ 
                                                             >> 0x13U))) 
                                                     << 0x13U) 
                                                    | (((1U 
                                                         & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00960_ 
                                                               >> 0x12U))) 
                                                       << 0x12U)) 
                                                   | ((((1U 
                                                         & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00960_ 
                                                               >> 0x11U))) 
                                                       << 0x11U) 
                                                      | (((1U 
                                                           & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT___00960_ 
                                                                 >> 0x10U))) 
                                                         << 0x10U))))) 
                                            | (((((((1U 
                                                     & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT___00960_ 
                                                           >> 0xfU))) 
                                                   << 0xfU) 
                                                  | (((1U 
                                                       & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00960_ 
                                                             >> 0xeU))) 
                                                     << 0xeU)) 
                                                 | ((((1U 
                                                       & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00960_ 
                                                             >> 0xdU))) 
                                                     << 0xdU) 
                                                    | (((1U 
                                                         & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00960_ 
                                                               >> 0xcU))) 
                                                       << 0xcU))) 
                                                | (((((1U 
                                                       & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00960_ 
                                                             >> 0xbU))) 
                                                     << 0xbU) 
                                                    | (((1U 
                                                         & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00960_ 
                                                               >> 0xaU))) 
                                                       << 0xaU)) 
                                                   | ((((1U 
                                                         & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00960_ 
                                                               >> 9U))) 
                                                       << 9U) 
                                                      | (((1U 
                                                           & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT___00960_ 
                                                                 >> 8U))) 
                                                         << 8U)))) 
                                               | ((((((1U 
                                                       & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00960_ 
                                                             >> 7U))) 
                                                     << 7U) 
                                                    | (((1U 
                                                         & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00960_ 
                                                               >> 6U))) 
                                                       << 6U)) 
                                                   | ((((1U 
                                                         & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00960_ 
                                                               >> 5U))) 
                                                       << 5U) 
                                                      | (((1U 
                                                           & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT___00960_ 
                                                                 >> 4U))) 
                                                         << 4U))) 
                                                  | (((((1U 
                                                         & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00960_ 
                                                               >> 3U))) 
                                                       << 3U) 
                                                      | (((1U 
                                                           & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT___00960_ 
                                                                 >> 2U))) 
                                                         << 2U)) 
                                                     | ((((1U 
                                                           & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT___00960_ 
                                                                 >> 1U))) 
                                                         << 1U) 
                                                        | ((1U 
                                                            & (IData)(vlSelfRef.picorv32__DOT___00693_)) 
                                                           && (1U 
                                                               & vlSelfRef.picorv32__DOT___00960_)))))));
    vlSelfRef.picorv32__DOT___00961_[1U] = ((((((((1U 
                                                   & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                  && (vlSelfRef.picorv32__DOT__reg_op1 
                                                      >> 0x1fU)) 
                                                 << 0x1fU) 
                                                | (((1U 
                                                     & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT__reg_op1 
                                                           >> 0x1eU))) 
                                                   << 0x1eU)) 
                                               | ((((1U 
                                                     & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT__reg_op1 
                                                           >> 0x1dU))) 
                                                   << 0x1dU) 
                                                  | (((1U 
                                                       & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_op1 
                                                             >> 0x1cU))) 
                                                     << 0x1cU))) 
                                              | (((((1U 
                                                     & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT__reg_op1 
                                                           >> 0x1bU))) 
                                                   << 0x1bU) 
                                                  | (((1U 
                                                       & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_op1 
                                                             >> 0x1aU))) 
                                                     << 0x1aU)) 
                                                 | ((((1U 
                                                       & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_op1 
                                                             >> 0x19U))) 
                                                     << 0x19U) 
                                                    | (((1U 
                                                         & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT__reg_op1 
                                                               >> 0x18U))) 
                                                       << 0x18U)))) 
                                             | ((((((1U 
                                                     & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT__reg_op1 
                                                           >> 0x17U))) 
                                                   << 0x17U) 
                                                  | (((1U 
                                                       & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_op1 
                                                             >> 0x16U))) 
                                                     << 0x16U)) 
                                                 | ((((1U 
                                                       & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_op1 
                                                             >> 0x15U))) 
                                                     << 0x15U) 
                                                    | (((1U 
                                                         & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT__reg_op1 
                                                               >> 0x14U))) 
                                                       << 0x14U))) 
                                                | (((((1U 
                                                       & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_op1 
                                                             >> 0x13U))) 
                                                     << 0x13U) 
                                                    | (((1U 
                                                         & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT__reg_op1 
                                                               >> 0x12U))) 
                                                       << 0x12U)) 
                                                   | ((((1U 
                                                         & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT__reg_op1 
                                                               >> 0x11U))) 
                                                       << 0x11U) 
                                                      | (((1U 
                                                           & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT__reg_op1 
                                                                 >> 0x10U))) 
                                                         << 0x10U))))) 
                                            | (((((((1U 
                                                     & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT__reg_op1 
                                                           >> 0xfU))) 
                                                   << 0xfU) 
                                                  | (((1U 
                                                       & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_op1 
                                                             >> 0xeU))) 
                                                     << 0xeU)) 
                                                 | ((((1U 
                                                       & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_op1 
                                                             >> 0xdU))) 
                                                     << 0xdU) 
                                                    | (((1U 
                                                         & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT__reg_op1 
                                                               >> 0xcU))) 
                                                       << 0xcU))) 
                                                | (((((1U 
                                                       & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_op1 
                                                             >> 0xbU))) 
                                                     << 0xbU) 
                                                    | (((1U 
                                                         & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT__reg_op1 
                                                               >> 0xaU))) 
                                                       << 0xaU)) 
                                                   | ((((1U 
                                                         & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT__reg_op1 
                                                               >> 9U))) 
                                                       << 9U) 
                                                      | (((1U 
                                                           & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT__reg_op1 
                                                                 >> 8U))) 
                                                         << 8U)))) 
                                               | ((((((1U 
                                                       & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT__reg_op1 
                                                             >> 7U))) 
                                                     << 7U) 
                                                    | (((1U 
                                                         & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT__reg_op1 
                                                               >> 6U))) 
                                                       << 6U)) 
                                                   | ((((1U 
                                                         & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT__reg_op1 
                                                               >> 5U))) 
                                                       << 5U) 
                                                      | (((1U 
                                                           & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT__reg_op1 
                                                                 >> 4U))) 
                                                         << 4U))) 
                                                  | (((((1U 
                                                         & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT__reg_op1 
                                                               >> 3U))) 
                                                       << 3U) 
                                                      | (((1U 
                                                           & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT__reg_op1 
                                                                 >> 2U))) 
                                                         << 2U)) 
                                                     | ((((1U 
                                                           & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT__reg_op1 
                                                                 >> 1U))) 
                                                         << 1U) 
                                                        | ((1U 
                                                            & (~ (IData)(vlSelfRef.picorv32__DOT___00184_))) 
                                                           && (1U 
                                                               & vlSelfRef.picorv32__DOT__reg_op1)))))));
    vlSelfRef.picorv32__DOT___00961_[2U] = ((0xfffffffeU 
                                             & ((0xfffffffeU 
                                                 & vlSelfRef.picorv32__DOT___01136_) 
                                                ^ (vlSelfRef.picorv32__DOT___01135_ 
                                                   << 1U))) 
                                            | (1U & 
                                               (vlSelfRef.picorv32__DOT__reg_next_pc 
                                                ^ vlSelfRef.picorv32__DOT__decoded_imm)));
    vlSelfRef.picorv32__DOT___00961_[3U] = ((((((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                  && (vlSelfRef.picorv32__DOT___00967_ 
                                                      >> 0x1fU)) 
                                                 << 0x1fU) 
                                                | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT___00967_ 
                                                           >> 0x1eU))) 
                                                   << 0x1eU)) 
                                               | ((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT___00967_ 
                                                           >> 0x1dU))) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00967_ 
                                                             >> 0x1cU))) 
                                                     << 0x1cU))) 
                                              | (((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT___00967_ 
                                                           >> 0x1bU))) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00967_ 
                                                             >> 0x1aU))) 
                                                     << 0x1aU)) 
                                                 | ((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00967_ 
                                                             >> 0x19U))) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00967_ 
                                                               >> 0x18U))) 
                                                       << 0x18U)))) 
                                             | ((((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT___00967_ 
                                                           >> 0x17U))) 
                                                   << 0x17U) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00967_ 
                                                             >> 0x16U))) 
                                                     << 0x16U)) 
                                                 | ((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00967_ 
                                                             >> 0x15U))) 
                                                     << 0x15U) 
                                                    | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00967_ 
                                                               >> 0x14U))) 
                                                       << 0x14U))) 
                                                | (((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00967_ 
                                                             >> 0x13U))) 
                                                     << 0x13U) 
                                                    | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00967_ 
                                                               >> 0x12U))) 
                                                       << 0x12U)) 
                                                   | ((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00967_ 
                                                               >> 0x11U))) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT___00967_ 
                                                                 >> 0x10U))) 
                                                         << 0x10U))))) 
                                            | (((((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                    && (1U 
                                                        & (vlSelfRef.picorv32__DOT___00967_ 
                                                           >> 0xfU))) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00967_ 
                                                             >> 0xeU))) 
                                                     << 0xeU)) 
                                                 | ((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00967_ 
                                                             >> 0xdU))) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00967_ 
                                                               >> 0xcU))) 
                                                       << 0xcU))) 
                                                | (((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00967_ 
                                                             >> 0xbU))) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00967_ 
                                                               >> 0xaU))) 
                                                       << 0xaU)) 
                                                   | ((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00967_ 
                                                               >> 9U))) 
                                                       << 9U) 
                                                      | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT___00967_ 
                                                                 >> 8U))) 
                                                         << 8U)))) 
                                               | ((((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                      && (1U 
                                                          & (vlSelfRef.picorv32__DOT___00967_ 
                                                             >> 7U))) 
                                                     << 7U) 
                                                    | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00967_ 
                                                               >> 6U))) 
                                                       << 6U)) 
                                                   | ((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00967_ 
                                                               >> 5U))) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT___00967_ 
                                                                 >> 4U))) 
                                                         << 4U))) 
                                                  | (((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                        && (1U 
                                                            & (vlSelfRef.picorv32__DOT___00967_ 
                                                               >> 3U))) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT___00967_ 
                                                                 >> 2U))) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                          && (1U 
                                                              & (vlSelfRef.picorv32__DOT___00967_ 
                                                                 >> 1U))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) 
                                                           && (1U 
                                                               & vlSelfRef.picorv32__DOT___00967_)))))));
    vlSelfRef.picorv32__DOT___01136_ = ((0xfffffffeU 
                                         & (vlSelfRef.picorv32__DOT__reg_pc 
                                            ^ vlSelfRef.picorv32__DOT__decoded_imm)) 
                                        | (1U & vlSelfRef.picorv32__DOT___00961_[2U]));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4508 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x1fU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4509 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x1eU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4506 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x1dU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4507 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x1cU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4504 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x1bU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4505 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x1aU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4502 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x19U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4503 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x18U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4500 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x17U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4501 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x16U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4498 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x15U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4499 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x14U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4496 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x13U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4497 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x12U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4494 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x11U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4495 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0x10U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4492 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0xfU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4493 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0xeU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4490 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0xdU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4491 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0xcU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4488 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0xbU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4489 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 0xaU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4486 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 9U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4487 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 8U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4484 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 7U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4485 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 6U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4482 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 5U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4483 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 4U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4480 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[3U] 
                  & (IData)(vlSelfRef.picorv32__DOT___00963_)) 
                 >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4481 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 2U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4478 
        = ((vlSelfRef.picorv32__DOT___00961_[3U] >> 1U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4479 
        = (vlSelfRef.picorv32__DOT___00961_[3U] & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                                                   >> 3U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4540 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x1fU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4541 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x1eU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4538 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x1dU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4539 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x1cU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4536 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x1bU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4537 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x1aU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4534 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x19U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4535 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x18U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4532 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x17U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4533 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x16U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4530 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x15U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4531 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x14U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4528 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x13U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4529 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x12U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4526 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x11U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4527 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0x10U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4524 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0xfU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4525 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0xeU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4522 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0xdU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4523 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0xcU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4520 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0xbU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4521 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 0xaU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4518 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 9U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4519 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 8U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4516 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 7U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4517 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 6U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4514 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 5U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4515 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 4U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4512 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 3U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4513 
        = ((vlSelfRef.picorv32__DOT___00961_[2U] >> 2U) 
           & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4510 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[2U] 
                  & (IData)(vlSelfRef.picorv32__DOT___00947_)) 
                 >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4511 
        = (vlSelfRef.picorv32__DOT___00961_[2U] & ((IData)(vlSelfRef.picorv32__DOT___00947_) 
                                                   >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4572 
        = ((vlSelfRef.picorv32__DOT___00961_[1U] >> 0x1fU) 
           & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
              >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4573 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x1eU) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4570 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x1dU) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4571 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x1cU) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4568 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x1bU) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4569 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x1aU) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4566 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x19U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4567 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x18U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4564 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x17U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4565 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x16U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4562 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x15U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4563 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x14U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4560 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x13U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4561 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x12U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4558 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x11U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4559 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0x10U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                               >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4556 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0xfU) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                              >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4557 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0xeU) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                              >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4554 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0xdU) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                              >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4555 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0xcU) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                              >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4552 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0xbU) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                              >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4553 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 0xaU) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                              >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4550 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 9U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                            >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4551 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 8U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                            >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4548 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 7U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                            >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4549 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 6U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                            >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4546 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 5U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                            >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4547 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 4U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                            >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4544 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 3U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                            >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4545 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  >> 2U) & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                            >> 1U)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4542 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[1U] 
                  & (IData)(vlSelfRef.picorv32__DOT___00963_)) 
                 >> 1U));
    picorv32__DOT____VdfgRegularize_h2364b514_0_4543 
        = (1U & (vlSelfRef.picorv32__DOT___00961_[1U] 
                 & ((IData)(vlSelfRef.picorv32__DOT___00963_) 
                    >> 1U)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4780 
        = ((vlSelfRef.picorv32__DOT___00961_[0U] >> 0x1fU) 
           & (IData)(vlSelfRef.picorv32__DOT___00943_));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4781 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x1eU) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4778 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x1dU) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4779 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x1cU) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4776 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x1bU) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4777 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x1aU) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4774 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x19U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4775 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x18U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4772 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x17U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4773 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x16U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4770 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x15U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4771 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x14U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4768 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x13U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4769 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x12U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4766 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x11U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4767 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0x10U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4764 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0xfU) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4765 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0xeU) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4762 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0xdU) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4763 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0xcU) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4760 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0xbU) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4761 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 0xaU) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4758 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 9U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4759 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 8U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4756 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 7U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4757 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 6U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4754 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 5U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4755 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 4U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4752 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 3U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4753 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 2U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4750 
        = (1U & ((vlSelfRef.picorv32__DOT___00961_[0U] 
                  >> 1U) & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4751 
        = (1U & (vlSelfRef.picorv32__DOT___00961_[0U] 
                 & (IData)(vlSelfRef.picorv32__DOT___00943_)));
    picorv32__DOT____VdfgRegularize_h2364b514_0_120 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4540) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4508));
    picorv32__DOT____VdfgRegularize_h2364b514_0_126 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4541) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4509));
    picorv32__DOT____VdfgRegularize_h2364b514_0_368 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4538) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4506));
    picorv32__DOT____VdfgRegularize_h2364b514_0_371 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4539) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4507));
    picorv32__DOT____VdfgRegularize_h2364b514_0_123 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4536) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4504));
    picorv32__DOT____VdfgRegularize_h2364b514_0_365 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4537) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4505));
    picorv32__DOT____VdfgRegularize_h2364b514_0_374 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4534) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4502));
    picorv32__DOT____VdfgRegularize_h2364b514_0_362 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4535) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4503));
    picorv32__DOT____VdfgRegularize_h2364b514_0_359 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4532) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4500));
    picorv32__DOT____VdfgRegularize_h2364b514_0_356 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4533) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4501));
    picorv32__DOT____VdfgRegularize_h2364b514_0_353 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4530) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4498));
    picorv32__DOT____VdfgRegularize_h2364b514_0_350 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4531) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4499));
    picorv32__DOT____VdfgRegularize_h2364b514_0_129 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4528) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4496));
    picorv32__DOT____VdfgRegularize_h2364b514_0_132 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4529) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4497));
    picorv32__DOT____VdfgRegularize_h2364b514_0_347 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4526) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4494));
    picorv32__DOT____VdfgRegularize_h2364b514_0_135 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4527) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4495));
    picorv32__DOT____VdfgRegularize_h2364b514_0_344 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4524) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4492));
    picorv32__DOT____VdfgRegularize_h2364b514_0_341 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4525) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4493));
    picorv32__DOT____VdfgRegularize_h2364b514_0_338 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4522) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4490));
    picorv32__DOT____VdfgRegularize_h2364b514_0_335 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4523) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4491));
    picorv32__DOT____VdfgRegularize_h2364b514_0_332 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4520) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4488));
    picorv32__DOT____VdfgRegularize_h2364b514_0_138 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4521) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4489));
    picorv32__DOT____VdfgRegularize_h2364b514_0_141 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4518) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4486));
    picorv32__DOT____VdfgRegularize_h2364b514_0_144 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4519) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4487));
    picorv32__DOT____VdfgRegularize_h2364b514_0_147 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4516) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4484));
    picorv32__DOT____VdfgRegularize_h2364b514_0_329 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4517) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4485));
    picorv32__DOT____VdfgRegularize_h2364b514_0_150 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4514) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4482));
    picorv32__DOT____VdfgRegularize_h2364b514_0_326 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4515) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4483));
    picorv32__DOT____VdfgRegularize_h2364b514_0_323 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4512) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4480));
    picorv32__DOT____VdfgRegularize_h2364b514_0_320 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4513) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4481));
    picorv32__DOT____VdfgRegularize_h2364b514_0_153 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4510) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4478));
    picorv32__DOT____VdfgRegularize_h2364b514_0_317 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4511) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4479));
    picorv32__DOT____VdfgRegularize_h2364b514_0_121 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4780) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4572));
    picorv32__DOT____VdfgRegularize_h2364b514_0_127 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4781) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4573));
    picorv32__DOT____VdfgRegularize_h2364b514_0_369 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4778) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4570));
    picorv32__DOT____VdfgRegularize_h2364b514_0_372 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4779) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4571));
    picorv32__DOT____VdfgRegularize_h2364b514_0_124 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4776) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4568));
    picorv32__DOT____VdfgRegularize_h2364b514_0_366 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4777) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4569));
    picorv32__DOT____VdfgRegularize_h2364b514_0_375 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4774) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4566));
    picorv32__DOT____VdfgRegularize_h2364b514_0_363 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4775) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4567));
    picorv32__DOT____VdfgRegularize_h2364b514_0_360 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4772) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4564));
    picorv32__DOT____VdfgRegularize_h2364b514_0_357 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4773) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4565));
    picorv32__DOT____VdfgRegularize_h2364b514_0_354 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4770) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4562));
    picorv32__DOT____VdfgRegularize_h2364b514_0_351 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4771) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4563));
    picorv32__DOT____VdfgRegularize_h2364b514_0_130 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4768) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4560));
    picorv32__DOT____VdfgRegularize_h2364b514_0_133 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4769) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4561));
    picorv32__DOT____VdfgRegularize_h2364b514_0_348 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4766) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4558));
    picorv32__DOT____VdfgRegularize_h2364b514_0_136 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4767) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4559));
    picorv32__DOT____VdfgRegularize_h2364b514_0_345 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4764) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4556));
    picorv32__DOT____VdfgRegularize_h2364b514_0_342 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4765) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4557));
    picorv32__DOT____VdfgRegularize_h2364b514_0_339 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4762) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4554));
    picorv32__DOT____VdfgRegularize_h2364b514_0_336 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4763) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4555));
    picorv32__DOT____VdfgRegularize_h2364b514_0_333 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4760) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4552));
    picorv32__DOT____VdfgRegularize_h2364b514_0_139 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4761) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4553));
    picorv32__DOT____VdfgRegularize_h2364b514_0_142 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4758) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4550));
    picorv32__DOT____VdfgRegularize_h2364b514_0_145 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4759) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4551));
    picorv32__DOT____VdfgRegularize_h2364b514_0_148 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4756) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4548));
    picorv32__DOT____VdfgRegularize_h2364b514_0_330 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4757) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4549));
    picorv32__DOT____VdfgRegularize_h2364b514_0_151 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4754) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4546));
    picorv32__DOT____VdfgRegularize_h2364b514_0_327 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4755) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4547));
    picorv32__DOT____VdfgRegularize_h2364b514_0_324 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4752) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4544));
    picorv32__DOT____VdfgRegularize_h2364b514_0_321 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4753) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4545));
    picorv32__DOT____VdfgRegularize_h2364b514_0_154 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4750) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4542));
    picorv32__DOT____VdfgRegularize_h2364b514_0_318 
        = ((IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h2364b514_0_4751) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_4543));
    picorv32__DOT____VdfgRegularize_h2364b514_0_122 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_121) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_120));
    picorv32__DOT____VdfgRegularize_h2364b514_0_128 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_127) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_126));
    picorv32__DOT____VdfgRegularize_h2364b514_0_370 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_369) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_368));
    picorv32__DOT____VdfgRegularize_h2364b514_0_373 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_372) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_371));
    picorv32__DOT____VdfgRegularize_h2364b514_0_125 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_124) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_123));
    picorv32__DOT____VdfgRegularize_h2364b514_0_367 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_366) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_365));
    picorv32__DOT____VdfgRegularize_h2364b514_0_376 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_375) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_374));
    picorv32__DOT____VdfgRegularize_h2364b514_0_364 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_363) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_362));
    picorv32__DOT____VdfgRegularize_h2364b514_0_361 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_360) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_359));
    picorv32__DOT____VdfgRegularize_h2364b514_0_358 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_357) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_356));
    picorv32__DOT____VdfgRegularize_h2364b514_0_355 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_354) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_353));
    picorv32__DOT____VdfgRegularize_h2364b514_0_352 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_351) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_350));
    picorv32__DOT____VdfgRegularize_h2364b514_0_131 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_130) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_129));
    picorv32__DOT____VdfgRegularize_h2364b514_0_134 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_133) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_132));
    picorv32__DOT____VdfgRegularize_h2364b514_0_349 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_348) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_347));
    picorv32__DOT____VdfgRegularize_h2364b514_0_137 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_136) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_135));
    picorv32__DOT____VdfgRegularize_h2364b514_0_346 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_345) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_344));
    picorv32__DOT____VdfgRegularize_h2364b514_0_343 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_342) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_341));
    picorv32__DOT____VdfgRegularize_h2364b514_0_340 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_339) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_338));
    picorv32__DOT____VdfgRegularize_h2364b514_0_337 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_336) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_335));
    picorv32__DOT____VdfgRegularize_h2364b514_0_334 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_333) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_332));
    picorv32__DOT____VdfgRegularize_h2364b514_0_140 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_139) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_138));
    picorv32__DOT____VdfgRegularize_h2364b514_0_143 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_142) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_141));
    picorv32__DOT____VdfgRegularize_h2364b514_0_146 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_145) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_144));
    picorv32__DOT____VdfgRegularize_h2364b514_0_149 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_148) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_147));
    picorv32__DOT____VdfgRegularize_h2364b514_0_331 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_330) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_329));
    picorv32__DOT____VdfgRegularize_h2364b514_0_152 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_151) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_150));
    picorv32__DOT____VdfgRegularize_h2364b514_0_328 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_327) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_326));
    picorv32__DOT____VdfgRegularize_h2364b514_0_325 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_324) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_323));
    picorv32__DOT____VdfgRegularize_h2364b514_0_322 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_321) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_320));
    picorv32__DOT____VdfgRegularize_h2364b514_0_155 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_154) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_153));
    picorv32__DOT____VdfgRegularize_h2364b514_0_319 
        = ((IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_318) 
           | (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_317));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5788 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_122));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5787 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_128));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5790 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_370));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5789 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_373));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5792 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_125));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5791 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_367));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5794 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_376));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5793 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_364));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5796 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_361));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5795 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_358));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5798 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_355));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5797 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_352));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5800 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_131));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5799 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_134));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5802 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_349));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5801 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_137));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5804 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_346));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5803 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_343));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5806 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_340));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5805 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_337));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5808 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_334));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5807 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_140));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5810 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_143));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5809 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_146));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5812 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_149));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5811 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_331));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5814 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_152));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5813 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_328));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5816 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_325));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5815 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_322));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5818 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_155));
    picorv32__DOT____VdfgRegularize_h2364b514_0_5817 
        = ((IData)(vlSelfRef.picorv32__DOT___01158_) 
           & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_319));
    vlSelfRef.picorv32__DOT___00010_ = ((((((((IData)(vlSelfRef.resetn) 
                                              & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5788)) 
                                             << 0x1fU) 
                                            | (((IData)(vlSelfRef.resetn) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5787)) 
                                               << 0x1eU)) 
                                           | ((((IData)(vlSelfRef.resetn) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5790)) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelfRef.resetn) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5789)) 
                                                 << 0x1cU))) 
                                          | (((((IData)(vlSelfRef.resetn) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5792)) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelfRef.resetn) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5791)) 
                                                 << 0x1aU)) 
                                             | ((((IData)(vlSelfRef.resetn) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5794)) 
                                                 << 0x19U) 
                                                | (((IData)(vlSelfRef.resetn) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5793)) 
                                                   << 0x18U)))) 
                                         | ((((((IData)(vlSelfRef.resetn) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5796)) 
                                               << 0x17U) 
                                              | (((IData)(vlSelfRef.resetn) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5795)) 
                                                 << 0x16U)) 
                                             | ((((IData)(vlSelfRef.resetn) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5798)) 
                                                 << 0x15U) 
                                                | (((IData)(vlSelfRef.resetn) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5797)) 
                                                   << 0x14U))) 
                                            | (((((IData)(vlSelfRef.resetn) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5800)) 
                                                 << 0x13U) 
                                                | (((IData)(vlSelfRef.resetn) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5799)) 
                                                   << 0x12U)) 
                                               | ((((IData)(vlSelfRef.resetn) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5802)) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSelfRef.resetn) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5801)) 
                                                     << 0x10U))))) 
                                        | (((((((IData)(vlSelfRef.resetn) 
                                                & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5804)) 
                                               << 0xfU) 
                                              | (((IData)(vlSelfRef.resetn) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5803)) 
                                                 << 0xeU)) 
                                             | ((((IData)(vlSelfRef.resetn) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5806)) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelfRef.resetn) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5805)) 
                                                   << 0xcU))) 
                                            | (((((IData)(vlSelfRef.resetn) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5808)) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelfRef.resetn) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5807)) 
                                                   << 0xaU)) 
                                               | ((((IData)(vlSelfRef.resetn) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5810)) 
                                                   << 9U) 
                                                  | (((IData)(vlSelfRef.resetn) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5809)) 
                                                     << 8U)))) 
                                           | ((((((IData)(vlSelfRef.resetn) 
                                                  & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5812)) 
                                                 << 7U) 
                                                | (((IData)(vlSelfRef.resetn) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5811)) 
                                                   << 6U)) 
                                               | ((((IData)(vlSelfRef.resetn) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5814)) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.resetn) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5813)) 
                                                     << 4U))) 
                                              | (((((IData)(vlSelfRef.resetn) 
                                                    & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5816)) 
                                                   << 3U) 
                                                  | (((IData)(vlSelfRef.resetn) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5815)) 
                                                     << 2U)) 
                                                 | ((((IData)(vlSelfRef.resetn) 
                                                      & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5818)) 
                                                     << 1U) 
                                                    | ((IData)(vlSelfRef.resetn) 
                                                       & (IData)(picorv32__DOT____VdfgRegularize_h2364b514_0_5817)))))));
}
