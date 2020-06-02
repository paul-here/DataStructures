CFLAGS = -O 
CC = g++

StackTest: stackexample.o Stack.o
	$(CC) $(CFLAGS) -o StackTest stackexample.o Stack.o

stackexample.o: stackexample.cpp
	$(CC) $(CFLAGS) -c stackexample.cpp

Stack.o: Stack.cpp
	$(CC) $(CFLAGS) -c Stack.cpp

clean:
	rm -f *.o



#stackexample: 
#	$(CC) -o stackexample StackExample.cpp Stack.cpp $(CFLAGS)

# Derived from https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/