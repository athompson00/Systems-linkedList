all: main.o create.o
	gcc -o program main.o node.o

main.o: main.c headers.h
		gcc -c main.c

node.o: node.c headers.h
		gcc -c node.c



run:
		./program

clean:
		rm *.o
		rm program
