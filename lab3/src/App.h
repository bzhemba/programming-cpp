//
// Created by мария баженова on 19.03.2023.
//

#ifndef NEW_APP_H
#define NEW_APP_H
#include "Service/ComplexNumber.h"
#include "Service/Array.h"



class App {
private:
    Service::ComplexNumber* complexNumber;
    Service::Array* array;
public:
    explicit App(
            Service::ComplexNumber* complexNumber,
            Service::Array* array
            );
    int start(int arg1, int arg2, int arg3);
    static App* create(Service::ComplexNumber* complexNumber, Service::Array* array);
};


#endif //NEW_APP_H
