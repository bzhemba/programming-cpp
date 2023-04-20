//
// Created by мария баженова on 06.04.2023.
//

#ifndef LAB5_ARRAY_H
#define LAB5_ARRAY_H


class Array {
private:
    int len;
    int *ptr;
public:
    explicit Array(int);

    void setArrayFromDialog();

    void printArray(const Array &a);

    template<typename T> T MaxElement(T *array);
};


#endif //LAB5_ARRAY_H
