ex1: 
	gcc -o ex1 example1.c
ex2:
	gcc -o ex2 example2.c

all: ex1 ex2

clear:
	rm ex1 ex2