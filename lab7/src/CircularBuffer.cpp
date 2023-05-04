//
// Created by мария баженова on 23.04.2023.
//

#include "CircularBuffer.h"
template<class T> CircularBuffer<T>::CircularBuffer(int s) {
        this->size = s;
        data = new T[size];
    }
template<class T>
T &CircularBuffer<T>::back() {
    return data[endIndex];
}
template<class T>
T &CircularBuffer<T>::front(){
    return data[0];
}
template<class T>
void CircularBuffer<T>::popBack() {
    indexOut--;
}
template<class T>
void CircularBuffer<T>::popFront() {
        indexIn++;
    }

template<class T>
void CircularBuffer<T>::pushBack(T element) {
    endIndex++;
    data[indexOut++] = element;
    if (indexOut >= size){
        indexOut = 0;
    }
}
template<class T>
void CircularBuffer<T>::pushFront(T element){
        int i;
        if(indexIn == 0){
            i = indexOut;
        }
        else{
            i = indexIn--;
        }
        data[i] = element;
    }
template<class T>
T &CircularBuffer<T>::operator[](int index) {
    {
        if (index >= size){
            throw overflowException;
        }
        return data[index];
    }
}