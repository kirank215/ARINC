#include "stdio.h"
#include <unistd.h>
#include "myprog_c/myprog.h"
#include "myprog_c/myprog_types.h"

int main() {
	Myprog__main_out o ;
//    Myprog__main_mem m;
//    Myprog__main_reset(&m);
    for(;;) {
        Myprog__main_step(&o);
//        Myprog__main_step(&o, &m);
    }
    return 0;
}
