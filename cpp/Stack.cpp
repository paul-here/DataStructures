/*
* Title: Stack.cpp
* Abstract: A implementation of an array based Stack.
* Author: Paul Whipp
* Date: 05/13/2020
*/

template <typename T>
class Stack {

    private:
        
        T arr [];
        int size;

    public:

        // create an empty stack
        Stack<T>(){
            arr = [];
            size = 0;
        }

        // add an item to the stack
        push(T item) {
            
        }

        // remove and return an item from the top of the stack
        T pop() {

        }

        // return the top item in the stack without removing
        T top() {

        }

        // empty the stack
        T empty() {

        }

        // return the size of the stack
        int getSize() {
            return size;
        }
};