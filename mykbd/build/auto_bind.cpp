#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->my_data, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->ps2_clk, 1, PS2_CLK);
	nvboard_bind_pin( &top->ps2_data, 1, PS2_DAT);
	nvboard_bind_pin( &top->sampling_check, 1, LD13);
}
