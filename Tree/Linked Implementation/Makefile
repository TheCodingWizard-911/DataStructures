all: program

program: tree.o main.o
	g++ tree.o main.o -o program

tree.o: tree.cpp
	g++ -c tree.cpp

tree.cpp: tree.h

main.o : main.cpp
	g++ -c main.cpp

main.cpp: tree.cpp

clean:
	rm *.o program