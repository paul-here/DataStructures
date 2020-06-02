/*
* Title: Stack.cpp
* Abstract: Demonstrates functionality of the Stack class.
* Author: Paul Whipp
* Date: 05/13/2020
*/

#include "Stack.h"
#include <iostream>

using namespace std;

int main() {

    Stack<int> s = Stack<int>();

    s.push(5);
    cout << s.pop() << endl;
}