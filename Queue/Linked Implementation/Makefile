all: program

program: queue.o main.o
	g++ queue.o main.o -o program

queue.o: queue.cpp
	g++ -c queue.cpp

queue.cpp: queue.h

main.o : main.cpp
	g++ -c main.cpp

main.cpp: queue.cpp

clean:
	rm *.o program