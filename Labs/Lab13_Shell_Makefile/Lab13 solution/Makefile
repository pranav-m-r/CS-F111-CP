all: Main

Main: Main.o Open.o Search.o Input.o
	gcc Main.o Open.o Search.o Input.o -o Main

Search.o : Search.c
	gcc -c Search.c -o Search.o

Open.o : Open.c
	gcc -c Open.c -o Open.o

Input.o : Input.c
	gcc -c Input.c -o Input.o

Main.o : Main.c Input.h Open.h Search.h
	gcc -c Main.c -o Main.o

clean:
	rm -rf *.o Main
	rm -rf *.exe Main