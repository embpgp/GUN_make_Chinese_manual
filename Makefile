

OBJ=foo.o main.o
CC=gcc

main:$(OBJ)
	$(CC) -o main $(OBJ)

foo.o:foo.c foo.h
main.o:main.c foo.h

.PHONY:clean
clean:
	-rm -rf $(OBJ) main
