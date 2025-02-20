#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->A, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->B, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->ALU_sel, 3, SW15, SW14, SW13);
	nvboard_bind_pin( &top->Cin, 1, SW12);
	nvboard_bind_pin( &top->Result, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->out, 1, LD7);
	nvboard_bind_pin( &top->Overflow, 1, LD6);
	nvboard_bind_pin( &top->Zero, 1, LD5);
	nvboard_bind_pin( &top->Carry, 1, LD4);
}
