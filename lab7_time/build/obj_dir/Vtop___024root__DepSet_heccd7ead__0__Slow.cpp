// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->sampling_check = vlSelf->top__DOT__inst__DOT__sampling;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x1cU] = 0x61U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x32U] = 0x62U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x21U] = 0x63U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x23U] = 0x64U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x24U] = 0x65U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x2bU] = 0x66U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x34U] = 0x67U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x33U] = 0x68U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x43U] = 0x69U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x3bU] = 0x6aU;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x42U] = 0x6bU;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x4bU] = 0x6cU;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x3aU] = 0x6dU;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x31U] = 0x6eU;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x44U] = 0x6fU;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x4dU] = 0x70U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x15U] = 0x71U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x2dU] = 0x72U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x1bU] = 0x73U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x2cU] = 0x74U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x3cU] = 0x75U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x2aU] = 0x76U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x1dU] = 0x77U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x22U] = 0x78U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x35U] = 0x79U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x1aU] = 0x7aU;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x45U] = 0x30U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x16U] = 0x31U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x1eU] = 0x32U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x26U] = 0x33U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x25U] = 0x34U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x2eU] = 0x35U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x36U] = 0x36U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x3dU] = 0x37U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x3eU] = 0x38U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x46U] = 0x39U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x29U] = 0x20U;
    vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[0x5aU] = 0xdU;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/ghhu/Desktop/study/DLCO/lab7_time/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_hb2a417e2_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ top__DOT__data;
    top__DOT__data = 0;
    CData/*0:0*/ top__DOT__is_leave;
    top__DOT__is_leave = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->my_ready = vlSelf->top__DOT__ready;
    vlSelf->my_overflow = vlSelf->top__DOT__overflow;
    vlSelf->top__DOT__inst__DOT__sampling = (IData)(
                                                    (4U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->top__DOT__inst__DOT__ps2_clk_sync))));
    __Vtableidx5 = (0xfU & (IData)(vlSelf->top__DOT__cnt));
    vlSelf->led4 = Vtop__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & ((IData)(vlSelf->top__DOT__cnt) 
                            >> 4U));
    vlSelf->led5 = Vtop__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx6];
    top__DOT__is_leave = (0xf0U == vlSelf->top__DOT__inst__DOT__fifo
                          [(7U & ((IData)(vlSelf->top__DOT__inst__DOT__w_ptr) 
                                  - (IData)(2U)))]);
    top__DOT__data = vlSelf->top__DOT__inst__DOT__fifo
        [(7U & ((IData)(vlSelf->top__DOT__inst__DOT__w_ptr) 
                - (IData)(1U)))];
    if (top__DOT__is_leave) {
        __Vtableidx1 = 0U;
        __Vtableidx2 = 0U;
        vlSelf->my_data = 0U;
    } else {
        __Vtableidx1 = (0xfU & (IData)(top__DOT__data));
        __Vtableidx2 = (0xfU & ((IData)(top__DOT__data) 
                                >> 4U));
        vlSelf->my_data = top__DOT__data;
    }
    vlSelf->led0 = Vtop__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx1];
    vlSelf->led1 = Vtop__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx2];
    vlSelf->ascii = vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table
        [vlSelf->my_data];
    __Vtableidx3 = (0xfU & (IData)(vlSelf->ascii));
    vlSelf->led2 = Vtop__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->ascii) 
                            >> 4U));
    vlSelf->led3 = Vtop__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx4];
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top.ready)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] top.ready)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge ps2_clk or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge ps2_clk)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top.ready)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] top.ready)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge ps2_clk or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge ps2_clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->my_data = 0;
    vlSelf->my_ready = 0;
    vlSelf->my_overflow = 0;
    vlSelf->clk = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->my_nextdata = 0;
    vlSelf->sampling_check = 0;
    vlSelf->led0 = 0;
    vlSelf->led1 = 0;
    vlSelf->led2 = 0;
    vlSelf->led3 = 0;
    vlSelf->led4 = 0;
    vlSelf->led5 = 0;
    vlSelf->ascii = 0;
    vlSelf->top__DOT__nextdata_n = 0;
    vlSelf->top__DOT__ready = 0;
    vlSelf->top__DOT__overflow = 0;
    vlSelf->top__DOT__cnt = 0;
    vlSelf->top__DOT__cache = 0;
    vlSelf->top__DOT__i = 0;
    vlSelf->top__DOT__u_phy_kbd__DOT__i = 0;
    vlSelf->top__DOT__inst__DOT__buffer = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__inst__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->top__DOT__inst__DOT__w_ptr = 0;
    vlSelf->top__DOT__inst__DOT__r_ptr = 0;
    vlSelf->top__DOT__inst__DOT__count = 0;
    vlSelf->top__DOT__inst__DOT__ps2_clk_sync = 0;
    vlSelf->top__DOT__inst__DOT__sampling = 0;
    vlSelf->top__DOT__inst__DOT____Vlvbound_h1a91ade8__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table[__Vi0] = 0;
    }
    vlSelf->__Vdlyvval__top__DOT__i__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__i__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__i__v1 = 0;
    vlSelf->__Vdlyvval__top__DOT__u_phy_kbd__DOT__i__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__u_phy_kbd__DOT__i__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__u_phy_kbd__DOT__i__v1 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__inst__DOT__fifo__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__inst__DOT__fifo__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__inst__DOT__fifo__v0 = 0;
    vlSelf->__Vdly__top__DOT__inst__DOT__w_ptr = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__ready = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__ps2_clk = 0;
    vlSelf->__VactDidInit = 0;
}
