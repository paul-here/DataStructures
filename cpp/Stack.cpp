/*
* Title: Stack.cpp
* Abstract: An implementation of an array based Stack.
* Author: Paul Whipp
* Date: 05/13/2020
*/

/*
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
*/

// default constructor
template<typename T>
Stack<T>::Stack(){
    
    ptr = new T[10];
    size = 0;
    topIndex = -1;
}

// add an item to the stack
template<typename T>
void Stack<T>::push(T item) {

    // does not handle increasing array size
    ptr[++topIndex] = item;
}

// remove and return an item from the top of the stack
template<typename T>
T Stack<T>::pop() {

    // using lazy deletion, unsure how I should handle excessive array size
    return ptr[topIndex--];
}

// return the top item in the stack without removing
template<typename T>
T Stack<T>::top() {

    return ptr[topIndex];
}

// empty the stack
template<typename T>
void Stack<T>::empty() {

    size = 0;
    topIndex = -1;
    // should this also use lazy deletion?
    ptr = new T[10];
}

// return the size of the stack
template<typename T>
int Stack<T>::getSize() {
    return size;
}