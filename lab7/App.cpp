//
// Created by мария баженова on 03.05.2023.
//

#include "App.h"
int App::start() {
    CircularBuffer<int> circularBuffer(3);
    circularBuffer.pushFront(1);
    circularBuffer.pushFront(2);
    circularBuffer.pushFront(3);
    try{
        circularBuffer[4];
    }
    catch (Exception &e){
        std::cerr << e.what() << std::endl;
    }
    return 0;
}