/*
* Title: Stack.cpp
* Abstract: A implementation of an array based Stack.
* Author: Paul Whipp
* Date: 05/13/2020
*/

//iostream included only for brief testing
#include <iostream>
using namespace std;

template <typename T>
class Stack {

    private:
        
        T arr[];
        int size;
        int topIndex;

    public:

        // create an empty stack
        Stack<T>();
        void push(T item);
        T pop();
        T top();
        void empty();
        int getSize();
};

// default constructor
template<typename T>
Stack<T>::Stack(){
    
    arr = new T[10];
    size = 0;
    topIndex = -1;
}

// add an item to the stack
template<typename T>
void Stack<T>::push(T item) {

    // does not handle increasing array size
    arr[++topIndex] = item;
}

// remove and return an item from the top of the stack
template<typename T>
T Stack<T>::pop() {

    // using lazy deletion, unsure how I should handle excessive array size
    return arr[topIndex--];
}

// return the top item in the stack without removing
template<typename T>
T Stack<T>::top() {

    return arr[topIndex];
}

// empty the stack
template<typename T>
void Stack<T>::empty() {

    size = 0;
    topIndex = -1;
    // should this also use lazy deletion?
    arr = new T[10];
}

// return the size of the stack
template<typename T>
int Stack<T>::getSize() {
    return size;
}

// temporary main for basic testing -- should be moved into StackDemo.cpp
int main() {

    Stack<int> s = Stack<int>();

    s.push(5);
    cout << s.pop() << endl;
}
