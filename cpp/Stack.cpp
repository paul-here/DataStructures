/*
* Title: Stack.cpp
* Abstract: An implementation of an array based Stack.
* Author: Paul Whipp
* Date: 05/13/2020
*/

#include "Stack.h"

// default constructor
template<class T>
Stack<T>::Stack(){
    
    ptr = new T[10];
    size = 0;
    topIndex = -1;
}

// add an item to the stack
template<class T>
void Stack<T>::push(T item) {

    // does not handle increasing array size
    ptr[++topIndex] = item;
}

// remove and return an item from the top of the stack
template<class T>
T Stack<T>::pop() {

    // using lazy deletion, unsure how I should handle excessive array size
    return ptr[topIndex--];
}

// return the top item in the stack without removing
template<class T>
T Stack<T>::top() {

    return ptr[topIndex];
}

// empty the stack
template<class T>
void Stack<T>::empty() {

    size = 0;
    topIndex = -1;
    // should this also use lazy deletion?
    ptr = new T[10];
}

// return the size of the stack
template<class T>
int Stack<T>::getSize() {
    return size;
}