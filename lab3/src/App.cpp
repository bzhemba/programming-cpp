//
// Created by мария баженова on 19.03.2023.
//

#include <iostream>
#include "App.h"
#include<array>
using namespace std;
int App::start(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    DTO::ComplexNumber complexNumber1(arg1, arg2);
    DTO::Array array1(arg3);
    DTO::ComplexNumber complexNumber(arg4, arg5);
    DTO::Array array(arg6);
    DTO::ComplexNumber complexNumber2 = complexNumber1 + complexNumber;
    DTO::ComplexNumber complexNumber3 = complexNumber1 * complexNumber;
    array1.setArrayFromDialog();
    array.setArrayFromDialog();
    DTO::Array array2 = array1 + array;
    cout << complexNumber2.Reresult() << ' ';
    cout << complexNumber2.Imresult() << ' ' <<endl;
    cout << complexNumber3.Reresult() << ' ';
    cout << complexNumber3.Imresult() << ' ' << endl;
    array2.printArray(array2);
    return 0;
}

