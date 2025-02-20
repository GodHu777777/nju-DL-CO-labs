#include <nvboard.h>
#include <Vtop.h>

void nvboard_bind_all_pins(Vtop* top);

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};

    nvboard_bind_all_pins(top);
    nvboard_init();
    // int i = 0;
    while(!contextp->gotFinish())
        {
            // if(i++ == 0) top->internal_data = 1;

            // top->in = top->in ? 0 : 1;
            top->eval();
            nvboard_update();
            contextp->timeInc(1);
            // printf("[%d]: Clock is %d, in:%d | out:%d \n", i++, top->clk_out,top->in,top->out);
            
        }

    nvboard_quit();
    return 0;
}