CC = g++
FLAGS = -std=c++14 -Wall -g

all: HW09

HW09: main.o shape.o rectangle.o triangle.o 
	$(CC) $(FLAGS) main.o shape.o rectangle.o triangle.o -o HW09

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

shape.o: shape.cpp shape.h
	$(CC) $(FLAGS) -c shape.cpp -o shape.o

rectangle.o: rectangle.cpp rectangle.h
	$(CC) $(FLAGS) -c rectangle.cpp -o rectangle.o

triangle.o: triangle.cpp triangle.h
	$(CC) $(FLAGS) -c triangle.cpp -o triangle.o

clean:
	rm *.o output
	rm *.gch output

tar:
	tar -cvf HW09.tar makefile main.cpp shape.cpp rectangle.cpp triangle.cpp shape.h rectangle.h triangle.h