//
// Created by мария баженова on 02.05.2023.
//

#ifndef LAB7_EXCEPTION_H
#define LAB7_EXCEPTION_H
#include <iostream>
#include <exception>
using namespace std;

class Exception: public exception{
public:
    virtual const char* what() const throw(){
        return "Buffer overflow";
    }
} overflowException;


#endif //LAB7_EXCEPTION_H
