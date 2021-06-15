#include <stdio.h>
#include <stdlib.h>
#include "snd.h"
#include "../sndlib.h"


void Snd__myread_step(int size, Snd__myread_out*_out){

     Sndlib__read_samples_step(&size, (_out->o));
}
void Snd__mywrite_step(int size, float samples[256], Snd__mywrite_out*_out){
    Sndlib__write_samples_step(&size, samples); 
}


