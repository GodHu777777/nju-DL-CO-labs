// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ top__DOT__add_res;
    top__DOT__add_res = 0;
    CData/*0:0*/ top__DOT__local_cin;
    top__DOT__local_cin = 0;
    CData/*3:0*/ top__DOT__u_adder__DOT__B1;
    top__DOT__u_adder__DOT__B1 = 0;
    // Body
    top__DOT__local_cin = 0U;
    if ((1U & (~ ((IData)(vlSelf->ALU_sel) >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->ALU_sel) >> 1U)))) {
            if ((1U & (IData)(vlSelf->ALU_sel))) {
                top__DOT__local_cin = 1U;
            }
        }
    }
    top__DOT__u_adder__DOT__B1 = (0xfU & ((- (IData)((IData)(top__DOT__local_cin))) 
                                          ^ (IData)(vlSelf->B)));
    vlSelf->Carry = (1U & (((IData)(vlSelf->A) + ((IData)(top__DOT__u_adder__DOT__B1) 
                                                  + (IData)(top__DOT__local_cin))) 
                           >> 4U));
    top__DOT__add_res = (0xfU & ((IData)(vlSelf->A) 
                                 + ((IData)(top__DOT__u_adder__DOT__B1) 
                                    + (IData)(top__DOT__local_cin))));
    vlSelf->Result = top__DOT__add_res;
    vlSelf->Zero = (0U != (IData)(top__DOT__add_res));
    vlSelf->Overflow = (((1U & ((IData)(vlSelf->A) 
                                >> 3U)) == (1U & ((IData)(vlSelf->B) 
                                                  >> 3U))) 
                        & ((1U & ((IData)(top__DOT__add_res) 
                                  >> 3U)) != (1U & 
                                              ((IData)(vlSelf->A) 
                                               >> 3U))));
    vlSelf->out = 1U;
    if ((4U & (IData)(vlSelf->ALU_sel))) {
        if ((1U & (~ ((IData)(vlSelf->ALU_sel) >> 1U)))) {
            vlSelf->Result = ((1U & (IData)(vlSelf->ALU_sel))
                               ? ((IData)(vlSelf->A) 
                                  ^ (IData)(vlSelf->B))
                               : ((IData)(vlSelf->A) 
                                  | (IData)(vlSelf->B)));
        }
        if ((2U & (IData)(vlSelf->ALU_sel))) {
            vlSelf->out = (1U & ((1U & (IData)(vlSelf->ALU_sel))
                                  ? (~ (IData)(vlSelf->Zero))
                                  : (((IData)(top__DOT__add_res) 
                                      >> 3U) ^ (IData)(vlSelf->Overflow))));
        }
    } else if ((2U & (IData)(vlSelf->ALU_sel))) {
        vlSelf->Result = (0xfU & ((1U & (IData)(vlSelf->ALU_sel))
                                   ? ((IData)(vlSelf->A) 
                                      & (IData)(vlSelf->B))
                                   : (~ (IData)(vlSelf->A))));
    } else if ((1U & (~ (IData)(vlSelf->ALU_sel)))) {
        vlSelf->Result = top__DOT__add_res;
    }
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/ghhu/Desktop/study/lab3_nv/vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
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
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/ghhu/Desktop/study/lab3_nv/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/ghhu/Desktop/study/lab3_nv/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->Cin & 0xfeU))) {
        Verilated::overWidthError("Cin");}
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((vlSelf->ALU_sel & 0xf8U))) {
        Verilated::overWidthError("ALU_sel");}
}
#endif  // VL_DEBUG
