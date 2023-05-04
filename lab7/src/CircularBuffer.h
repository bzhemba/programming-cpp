#ifndef LAB7_CIRCULARBUFFER_H
#define LAB7_CIRCULARBUFFER_H
#include "Exception.h"
template <class T>
class CircularBuffer {
private:
    int size = 0;
    T* data;
    int indexIn = 0;
    int indexOut = 0;
    int endIndex = 0;
public:
    CircularBuffer(int s);
    T& front();
    T& back();
    void pushBack(T element);
    void popBack();
    void pushFront(T element);
    void popFront();

    T& operator[](int index);
};


#endif //LAB7_CIRCULARBUFFER_H
