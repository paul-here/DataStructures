/*
* Title: Stack.cpp
* Abstract: Demonstrates functionality of the Stack class.
* Author: Paul Whipp
* Date: 05/13/2020
*/

#include <Stack.cpp>

// temporary main for basic testing -- should be moved into StackDemo.cpp
int main() {

    Stack<int> s = Stack<int>();

    s.push(5);
    cout << s.pop() << endl;
}