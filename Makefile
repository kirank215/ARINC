CC=gcc
CFLAGS= -pedantic
HEPT_DIR=$(shell heptc -where)


all: extern generate_c copy compile_c


lib:
	gcc -c -o sndlib.o sndlib.c
	ar rcs sndlib.lib sndlib.o

extern:
	heptc -c snd.epi


generate_c:
	heptc -target c myprog.ept 

copy:
	cp externs/* myprog_c/

compile_c:
	$(CC) $(CFLAGS) main.c sndlib.c myprog_c/snd.c myprog_c/myprog.c myprog_c/myprog_types.c -I $(HEPT_DIR)/c -o prog


clean:
	$(RM) -r myprog_c/ *.epci *.log *.mls *.obc prog
