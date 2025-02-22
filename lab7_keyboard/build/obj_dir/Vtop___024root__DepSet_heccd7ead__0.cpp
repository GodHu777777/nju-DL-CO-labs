// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root___eval_initial__TOP__0(vlSelf);
    Vtop___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigrprev__TOP__ascii = vlSelf->ascii;
    vlSelf->__Vtrigrprev__TOP__top__DOT__ready = vlSelf->top__DOT__ready;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ps2_clk = vlSelf->ps2_clk;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_haa2f2db3__0.trigger(
                                                           "@(negedge ps2_clk)", 
                                                           "/home/ghhu/Desktop/study/DLCO/lab7_keyboard/vsrc/top.v", 
                                                           148);
        VL_WRITEF("[%b]: %b\n",4,vlSelf->top__DOT__i,
                  1,(IData)(vlSelf->ps2_data));
        if ((0xaU > (IData)(vlSelf->top__DOT__i))) {
            vlSelf->__Vdlyvval__top__DOT__i__v0 = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__i)));
            vlSelf->__Vdlyvset__top__DOT__i__v0 = 1U;
        } else {
            vlSelf->__Vdlyvset__top__DOT__i__v1 = 1U;
            co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                               "/home/ghhu/Desktop/study/DLCO/lab7_keyboard/vsrc/top.v", 
                                               153);
            vlSelf->top__DOT__nextdata_n = 0U;
            co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                               "/home/ghhu/Desktop/study/DLCO/lab7_keyboard/vsrc/top.v", 
                                               154);
            vlSelf->top__DOT__nextdata_n = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_haa2f2db3__0.trigger(
                                                           "@(negedge ps2_clk)", 
                                                           "/home/ghhu/Desktop/study/DLCO/lab7_keyboard/vsrc/phy_kbd.v", 
                                                           15);
        VL_WRITEF("[%b]: %b\n",4,vlSelf->top__DOT__u_phy_kbd__DOT__i,
                  1,(IData)(vlSelf->ps2_data));
        if ((0xaU > (IData)(vlSelf->top__DOT__u_phy_kbd__DOT__i))) {
            vlSelf->__Vdlyvval__top__DOT__u_phy_kbd__DOT__i__v0 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_phy_kbd__DOT__i)));
            vlSelf->__Vdlyvset__top__DOT__u_phy_kbd__DOT__i__v0 = 1U;
        } else {
            vlSelf->__Vdlyvset__top__DOT__u_phy_kbd__DOT__i__v1 = 1U;
            co_await vlSelf->__VdlySched.delay(0xaULL, 
                                               "/home/ghhu/Desktop/study/DLCO/lab7_keyboard/vsrc/phy_kbd.v", 
                                               20);
            vlSelf->top__DOT__nextdata_n = 0U;
            co_await vlSelf->__VdlySched.delay(0xaULL, 
                                               "/home/ghhu/Desktop/study/DLCO/lab7_keyboard/vsrc/phy_kbd.v", 
                                               21);
            vlSelf->top__DOT__nextdata_n = 1U;
        }
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__top__DOT__inst__DOT__r_ptr;
    __Vdly__top__DOT__inst__DOT__r_ptr = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT____Vcellout__inst__fifo__v0;
    __Vdlyvdim0__top__DOT____Vcellout__inst__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT____Vcellout__inst__fifo__v0;
    __Vdlyvval__top__DOT____Vcellout__inst__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT____Vcellout__inst__fifo__v0;
    __Vdlyvset__top__DOT____Vcellout__inst__fifo__v0 = 0;
    CData/*3:0*/ __Vdly__top__DOT__inst__DOT__count;
    __Vdly__top__DOT__inst__DOT__count = 0;
    // Body
    __Vdly__top__DOT__inst__DOT__count = vlSelf->top__DOT__inst__DOT__count;
    __Vdly__top__DOT__inst__DOT__r_ptr = vlSelf->top__DOT__inst__DOT__r_ptr;
    vlSelf->__Vdly__top__DOT__w_ptr = vlSelf->top__DOT__w_ptr;
    __Vdlyvset__top__DOT____Vcellout__inst__fifo__v0 = 0U;
    vlSelf->top__DOT__inst__DOT__ps2_clk_sync = ((6U 
                                                  & ((IData)(vlSelf->top__DOT__inst__DOT__ps2_clk_sync) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->ps2_clk));
    if (vlSelf->top__DOT__ready) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__nextdata_n)))) {
            __Vdly__top__DOT__inst__DOT__r_ptr = (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__inst__DOT__r_ptr)));
            if (((IData)(vlSelf->top__DOT__w_ptr) == 
                 (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__inst__DOT__r_ptr))))) {
                vlSelf->top__DOT__ready = 0U;
            }
        }
    }
    if (vlSelf->top__DOT__inst__DOT__sampling) {
        if ((0xaU == (IData)(vlSelf->top__DOT__inst__DOT__count))) {
            if (VL_UNLIKELY((((~ (IData)(vlSelf->top__DOT__inst__DOT__buffer)) 
                              & (IData)(vlSelf->ps2_data)) 
                             & VL_REDXOR_32((0x1ffU 
                                             & ((IData)(vlSelf->top__DOT__inst__DOT__buffer) 
                                                >> 1U)))))) {
                VL_WRITEF("receive %x\n",8,(0xffU & 
                                            ((IData)(vlSelf->top__DOT__inst__DOT__buffer) 
                                             >> 1U)));
                __Vdlyvval__top__DOT____Vcellout__inst__fifo__v0 
                    = (0xffU & ((IData)(vlSelf->top__DOT__inst__DOT__buffer) 
                                >> 1U));
                __Vdlyvset__top__DOT____Vcellout__inst__fifo__v0 = 1U;
                __Vdlyvdim0__top__DOT____Vcellout__inst__fifo__v0 
                    = vlSelf->top__DOT__w_ptr;
                vlSelf->top__DOT__ready = 1U;
                vlSelf->__Vdly__top__DOT__w_ptr = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__w_ptr)));
                vlSelf->top__DOT__overflow = ((IData)(vlSelf->top__DOT__overflow) 
                                              | ((IData)(vlSelf->top__DOT__inst__DOT__r_ptr) 
                                                 == 
                                                 (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__w_ptr)))));
            }
            __Vdly__top__DOT__inst__DOT__count = 0U;
        } else {
            vlSelf->top__DOT__inst__DOT____Vlvbound_h1a91ade8__0 
                = vlSelf->ps2_data;
            if ((9U >= (IData)(vlSelf->top__DOT__inst__DOT__count))) {
                vlSelf->top__DOT__inst__DOT__buffer 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__inst__DOT__count))) 
                        & (IData)(vlSelf->top__DOT__inst__DOT__buffer)) 
                       | (0x3ffU & ((IData)(vlSelf->top__DOT__inst__DOT____Vlvbound_h1a91ade8__0) 
                                    << (IData)(vlSelf->top__DOT__inst__DOT__count))));
            }
            __Vdly__top__DOT__inst__DOT__count = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__inst__DOT__count)));
        }
    }
    vlSelf->top__DOT__inst__DOT__r_ptr = __Vdly__top__DOT__inst__DOT__r_ptr;
    vlSelf->top__DOT__inst__DOT__count = __Vdly__top__DOT__inst__DOT__count;
    if (__Vdlyvset__top__DOT____Vcellout__inst__fifo__v0) {
        vlSelf->top__DOT____Vcellout__inst__fifo[__Vdlyvdim0__top__DOT____Vcellout__inst__fifo__v0] 
            = __Vdlyvval__top__DOT____Vcellout__inst__fifo__v0;
    }
    vlSelf->top__DOT__inst__DOT__sampling = (IData)(
                                                    (4U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->top__DOT__inst__DOT__ps2_clk_sync))));
    vlSelf->my_ready = vlSelf->top__DOT__ready;
    vlSelf->my_overflow = vlSelf->top__DOT__overflow;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vdly__top__DOT__cache;
    __Vdly__top__DOT__cache = 0;
    // Body
    __Vdly__top__DOT__cache = vlSelf->top__DOT__cache;
    vlSelf->__Vdly__top__DOT__cnt = vlSelf->top__DOT__cnt;
    if (((IData)(vlSelf->my_data) != (IData)(vlSelf->top__DOT__cache))) {
        if ((0xf0U == (IData)(vlSelf->top__DOT__cache))) {
            __Vdly__top__DOT__cache = 0U;
        } else if ((0xf0U == (IData)(vlSelf->my_data))) {
            __Vdly__top__DOT__cache = vlSelf->my_data;
        } else {
            vlSelf->__Vdly__top__DOT__cnt = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__cnt)));
            __Vdly__top__DOT__cache = vlSelf->my_data;
        }
    }
    VL_WRITEF("cache: %x, cnt: %3#, ascii: %x\n------\n",
              8,vlSelf->top__DOT__cache,8,(IData)(vlSelf->top__DOT__cnt),
              8,vlSelf->ascii);
    vlSelf->top__DOT__cache = __Vdly__top__DOT__cache;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    VL_WRITEF("[DEBUG]: data: %x; ascii: %x, %x$$cnt: %3#\n",
              8,vlSelf->my_data,8,(IData)(vlSelf->ascii),
              8,vlSelf->top__DOT__fifo[vlSelf->top__DOT__w_ptr],
              8,vlSelf->top__DOT__cnt);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__i__v0) {
        vlSelf->top__DOT__i = vlSelf->__Vdlyvval__top__DOT__i__v0;
        vlSelf->__Vdlyvset__top__DOT__i__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__i__v1) {
        vlSelf->top__DOT__i = 0U;
        vlSelf->__Vdlyvset__top__DOT__i__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u_phy_kbd__DOT__i__v0) {
        vlSelf->top__DOT__u_phy_kbd__DOT__i = vlSelf->__Vdlyvval__top__DOT__u_phy_kbd__DOT__i__v0;
        vlSelf->__Vdlyvset__top__DOT__u_phy_kbd__DOT__i__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u_phy_kbd__DOT__i__v1) {
        vlSelf->top__DOT__u_phy_kbd__DOT__i = 0U;
        vlSelf->__Vdlyvset__top__DOT__u_phy_kbd__DOT__i__v1 = 0U;
    }
}

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_hb2a417e2_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->top__DOT__fifo[7U] = vlSelf->top__DOT____Vcellout__inst__fifo
        [7U];
    vlSelf->top__DOT__fifo[6U] = vlSelf->top__DOT____Vcellout__inst__fifo
        [6U];
    vlSelf->top__DOT__fifo[5U] = vlSelf->top__DOT____Vcellout__inst__fifo
        [5U];
    vlSelf->top__DOT__fifo[4U] = vlSelf->top__DOT____Vcellout__inst__fifo
        [4U];
    vlSelf->top__DOT__fifo[3U] = vlSelf->top__DOT____Vcellout__inst__fifo
        [3U];
    vlSelf->top__DOT__fifo[2U] = vlSelf->top__DOT____Vcellout__inst__fifo
        [2U];
    vlSelf->top__DOT__fifo[1U] = vlSelf->top__DOT____Vcellout__inst__fifo
        [1U];
    vlSelf->top__DOT__fifo[0U] = vlSelf->top__DOT____Vcellout__inst__fifo
        [0U];
    vlSelf->top__DOT__w_ptr = vlSelf->__Vdly__top__DOT__w_ptr;
    vlSelf->my_data = vlSelf->top__DOT__fifo[vlSelf->top__DOT__w_ptr];
    __Vtableidx1 = (0xfU & (IData)(vlSelf->my_data));
    vlSelf->led0 = Vtop__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->my_data) 
                            >> 4U));
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->top__DOT__cnt = vlSelf->__Vdly__top__DOT__cnt;
    __Vtableidx5 = (0xfU & (IData)(vlSelf->top__DOT__cnt));
    vlSelf->led4 = Vtop__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & ((IData)(vlSelf->top__DOT__cnt) 
                            >> 4U));
    vlSelf->led5 = Vtop__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx6];
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___timing_commit(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___timing_resume(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            Vtop___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/ghhu/Desktop/study/DLCO/lab7_keyboard/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___timing_resume(vlSelf);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/ghhu/Desktop/study/DLCO/lab7_keyboard/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

void Vtop___024root___timing_commit(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(4U))))) {
        vlSelf->__VtrigSched_haa2f2db3__0.commit("@(negedge ps2_clk)");
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(4U)) {
        vlSelf->__VtrigSched_haa2f2db3__0.resume("@(negedge ps2_clk)");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
