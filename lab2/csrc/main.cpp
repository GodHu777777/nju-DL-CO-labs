#include <nvboard.h>
#include <Vtop.h>


void nvboard_bind_all_pins(Vtop* top);


int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};

    nvboard_bind_all_pins(top);
    nvboard_init();
    while(!contextp->gotFinish())
    {
        top->eval();
        printf("Before encode: %xH, encoded: %xH \n", top->x, top->y);
        nvboard_update();
    }

    nvboard_quit();
    return 0;
}