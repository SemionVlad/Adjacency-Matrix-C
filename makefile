adjacency: adjacency.o
	gcc -g -ansi -Wall -pedantic adjacency.o -o adjacency

adjacency.o: adjacency.c adjacency.h
	gcc -c -ansi -Wall adjacency.c -o adjacency.o
