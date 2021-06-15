#include "stdio.h"
#include <unistd.h>
#include "myprog_c/myprog.h"
#include "myprog_c/myprog_types.h"

int main() {
//	Myprog__main_out o ;
//    Myprog__main_mem m;
//    Myprog__main_reset(&m);
	Myprog__mread_out o1 ;
	Myprog__mwrite_out o2 ;
    for(;;) {
//        Myprog__main_step(&o);
        Myprog__mread_step(&o1);
        Myprog__mwrite_step(o1.o, &o2);
        // read
        // write
//        Myprog__main_step(&o, &m);
    }
    return 0;
}
