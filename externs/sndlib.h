#ifndef SNDLIB_H
#define SNDLIB_H

typedef struct { int unsued; } Snd__read_samples_out ;
typedef struct { int unsued;} Snd__write_samples_out ;

void Sndlib__read_samples_step(int*sample_size,float*samples) ;
void Sndlib__write_samples_step(int*sample_size,float*samples) ;

#endif
