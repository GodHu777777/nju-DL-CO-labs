// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(ps2_clk,0,0);
    CData/*0:0*/ top__DOT__ready;
    VL_OUT8(my_data,7,0);
    VL_OUT8(my_ready,0,0);
    VL_OUT8(my_overflow,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(my_nextdata,0,0);
    VL_OUT8(sampling_check,0,0);
    VL_OUT8(led0,6,0);
    VL_OUT8(led1,6,0);
    VL_OUT8(led2,6,0);
    VL_OUT8(led3,6,0);
    VL_OUT8(led4,6,0);
    VL_OUT8(led5,6,0);
    VL_OUT8(ascii,7,0);
    CData/*0:0*/ top__DOT__nextdata_n;
    CData/*0:0*/ top__DOT__overflow;
    CData/*2:0*/ top__DOT__w_ptr;
    CData/*7:0*/ top__DOT__cnt;
    CData/*7:0*/ top__DOT__cache;
    CData/*3:0*/ top__DOT__i;
    CData/*3:0*/ top__DOT__u_phy_kbd__DOT__i;
    CData/*2:0*/ top__DOT__inst__DOT__r_ptr;
    CData/*3:0*/ top__DOT__inst__DOT__count;
    CData/*2:0*/ top__DOT__inst__DOT__ps2_clk_sync;
    CData/*0:0*/ top__DOT__inst__DOT__sampling;
    CData/*0:0*/ top__DOT__inst__DOT____Vlvbound_h1a91ade8__0;
    CData/*7:0*/ __Vdly__top__DOT__cnt;
    CData/*3:0*/ __Vdlyvval__top__DOT__i__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i__v1;
    CData/*3:0*/ __Vdlyvval__top__DOT__u_phy_kbd__DOT__i__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_phy_kbd__DOT__i__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_phy_kbd__DOT__i__v1;
    CData/*2:0*/ __Vdly__top__DOT__w_ptr;
    CData/*7:0*/ __Vtrigrprev__TOP__ascii;
    CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__ready;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__ps2_clk;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ top__DOT__inst__DOT__buffer;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__fifo;
    VlUnpacked<CData/*7:0*/, 8> top__DOT____Vcellout__inst__fifo;
    VlUnpacked<CData/*7:0*/, 256> top__DOT__u_ps2_scan_to_ascii_rom__DOT__rom_ascii_table;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_haa2f2db3__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
