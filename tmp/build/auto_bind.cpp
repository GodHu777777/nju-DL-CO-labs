#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->data, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->ready, 1, LD10);
	nvboard_bind_pin( &top->overflow, 1, LD11);
	nvboard_bind_pin( &top->ps2_clk, 1, PS2_CLK);
	nvboard_bind_pin( &top->ps2_data, 1, PS2_DAT);
}
