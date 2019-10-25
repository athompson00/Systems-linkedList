all: main.o create.o
	gcc -o program main.o create.o

main.o: main.c headers.h
	gcc -c main.c

create.o: create.c headers.h
	gcc -c create.c

run:
		./program

clean:
		rm *.o
