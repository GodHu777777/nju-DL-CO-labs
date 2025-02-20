#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h" // 添加波形支持头文件

#include <nvboard.h>

void nvboard_bind_all_pins(TOP_NAME* top);


int main(int argc, char** argv) {
    
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};
    nvboard_bind_all_pins(top);
    nvboard_init();
    
    while (!contextp->gotFinish()) {
        

        int a = rand() & 0xff;
        int s = rand() & 0x3;
        
        top->a = a;
        top->s = s;
        top->eval();
        printf("a = %x, s = %x, y = %x\n", top->a, top->s, top->y);
        // assert(top->f == (a ^ b));
        nvboard_update();
    }

    
    delete top;
    delete contextp;

    return 0;
}