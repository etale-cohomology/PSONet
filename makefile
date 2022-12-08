all: nam

nam: nam.c  makefile ${mathisart}/mathisart4.h
	t tcc   nam.c -o nam
# t tcc   nam.c -o nam
# t gcc-8 nam.c -o nam
# t gcc-8 nam.c -o nam  $cflags $cnopie $cfast

clean:
	rm -f nam.c
