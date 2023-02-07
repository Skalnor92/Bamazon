CC = gcc
CFLAGS = -g -Wall
default: bamazon
bamazon: bamazon.o main.o
    $(CC) $(CFLAGS) -o bamazon bamazon.o main.o
main.o: main.c bamazon.h
    $(CC) $(CFLAGS) -c main.c
bamazon.o: bamazon.c
    $(CC) $(CFLAGS) -c bamazon.c
clean: 
    rm -f bamazon *.o
