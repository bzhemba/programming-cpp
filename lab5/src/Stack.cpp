//
// Created by мария баженова on 20.04.2023.
//
#include "Stack.h"
template<class T> Stack<T>::Stack() {
        top = NULL;
}

template<class T>
void Stack<T>::push(T d) {
    Node *t = new Node();
    t->data = d;
    t->next = top;
    top = t;
    size += 1;
}

template<class T>
T Stack<T>::pop() {
    Node *u;
    if (isEmpty()){
        throw EmptyStackException();
    }
    else {
        T x = top->data;
        u = top;
        top = top->next;
        free(u);
        size -= 1;
        return x;
    }
}

template<class T>
bool Stack<T>::isEmpty() {
    return top == NULL;
}
template<class T>
int Stack<T>::sizeS(Stack<T>) {
    return size;
}