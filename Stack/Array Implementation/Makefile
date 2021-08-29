all: program

program: stack.o main.o
	g++ stack.o main.o -o program

stack.o: stack.cpp
	g++ -c stack.cpp

stack.cpp: stack.h

main.o : main.cpp
	g++ -c main.cpp

main.cpp: stack.cpp

clean:
	rm *.o program