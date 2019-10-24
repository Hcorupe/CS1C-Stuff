CC = g++
FLAGS = -std=c++14 -Wall -g

all: hw07

hw07: main.o manageInventory.o 
	$(CC) $(FLAGS) main.o manageInventory.o -o hw07

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

manageInventory.o: manageInventory.cpp manageInventory.h
	$(CC) $(FLAGS) -c manageInventory.cpp

database.o: employeeType.h
	$(CC) $(FLAGS) -c employeeType.h

clean:
	rm *.o hw07
	rm *.gch hw07

tar:
	tar -cvf hw07.tar MakeFile main.cpp manageInventory.cpp manageInventory.h
