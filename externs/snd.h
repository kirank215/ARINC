#pragma once
typedef struct { int unsued; } Snd__mywrite_out ;
typedef struct { float o[256];} Snd__myread_out ;

void Snd__myread_step(int size, Snd__myread_out*_out) ;
void Snd__mywrite_step(int size, float *samples, Snd__mywrite_out*_out) ;

