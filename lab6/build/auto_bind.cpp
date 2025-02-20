#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->clk_out, 1, LD0);
	nvboard_bind_pin( &top->led1, 7, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
	nvboard_bind_pin( &top->led2, 7, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A);
	nvboard_bind_pin( &top->led_test, 7, SEG2G, SEG2F, SEG2E, SEG2D, SEG2C, SEG2B, SEG2A);
	nvboard_bind_pin( &top->out, 1, LD1);
	nvboard_bind_pin( &top->internal_data, 8, LD11, LD10, LD9, LD8, LD7, LD6, LD5, LD4);
}
