#ifndef STACK_H
#define STACK_H

template <typename T>
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