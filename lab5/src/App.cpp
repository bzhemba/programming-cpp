//
// Created by мария баженова on 06.04.2023.
//

#include "App.h"

int App::start() {
    Stack<int> stack();
    try{
        stack().pop();
    }
    catch(StackExceptions& e) {
        std::cerr << e.what() << std::endl;
    }
    stack().push(10);
    stack().push(90);
    stack().push(8);
    stack().sizeS(stack());
    Array array(10);
    array.setArrayFromDialog();
//    array.MaxElement(int *array);
}