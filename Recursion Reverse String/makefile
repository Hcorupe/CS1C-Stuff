CC = g++
FLAGS = -std=c++14 -Wall -g

all: hw06

hw06: main.o 
	$(CC) $(FLAGS) main.o  -o HW06

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

clean:
	rm *.o hw06
	rm *.gch hw06

tar:
	tar -cvf hw06.tar MakeFile main.cpp
