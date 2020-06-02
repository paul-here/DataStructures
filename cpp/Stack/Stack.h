#ifndef STACK_H
#define STACK_H

#include <ostream>

template <class T>
class Stack {

    private:
        
        T* ptr;
        int size;
        int topIndex;

    public:

        Stack<T>();
        void push(T item);
        T pop();
        T top();
        void empty();
        int getSize();
};

#endif