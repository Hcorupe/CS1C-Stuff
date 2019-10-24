CC = g++
FLAGS = -std=c++14 -Wall -g

all: HW08

HW08: main.o 
	$(CC) $(FLAGS) main.o -o hw08

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

clean:
	rm *.o output
	rm *.gch output

tar:
	tar -cvf HW08.tar MakeFile main.cpp 