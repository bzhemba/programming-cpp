//
// Created by мария баженова on 06.04.2023.
//
#include "iostream"
#include "Array.h"
using namespace std;

Array::Array(int size) {
    if (size == 0) {
        len = 100;
    } else {
        len = size;
    }
    ptr = new int[len];
    for (int i = 0; i < len; i++) {
        ptr[i] = 0;
    }
}

void Array::setArrayFromDialog() {
    for (int ix = 0; ix < len; ix++)
        cin >> ptr[ix];
}

template<typename Type>
Type Array::MaxElement(Type *array) {
    int maxvalue = 0;
    for (int i = 0; i < sizeof(array)/sizeof(*array); i++) {
        if (array[i] > maxvalue) {
            maxvalue = array[i];
        }
    }
    return maxvalue;
}
