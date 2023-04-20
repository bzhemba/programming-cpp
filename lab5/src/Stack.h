//
// Created by мария баженова on 06.04.2023.
//

#ifndef LAB5_STACK_H
#define LAB5_STACK_H
#include <iostream>
#include "StackExceptions.h"
struct Node{
    int data;
    Node *next;
};
template <class T> class Stack {
private:
    T *top;
    int size;
public:
    Stack();
    void push(T d);
    T pop();
    bool isEmpty();
    int sizeS(Stack);

};



#endif //LAB5_STACK_H
