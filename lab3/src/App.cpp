//
// Created by мария баженова on 19.03.2023.
//

#include "App.h"

int App::start(int arg1, int arg2, int arg3) {
    return 0;
}
App::App(
        Service::ComplexNumber *complexNumber,
        Service::Array* array
) {
    this->complexNumber  = complexNumber;
    this->array = array;
}

App *App::create(Service::ComplexNumber* complexNumber, Service::Array* array) {
    return new App(complexNumber, array);
}

