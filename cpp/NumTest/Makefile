CFLAGS = -O 
CC = g++

NumTest: main.o Num.o
	$(CC) $(CFLAGS) -o NumTest main.o Num.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Num.o: Num.cpp
	$(CC) $(CFLAGS) -c Num.cpp

clean:
	rm -f *.o



#stackexample: 
#	$(CC) -o stackexample StackExample.cpp Stack.cpp $(CFLAGS)

# Derived from https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/