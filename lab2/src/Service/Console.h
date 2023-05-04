//
// Created by мария баженова on 18.03.2023.
//


#ifndef LAB2_CONSOLE_H
#define LAB2_CONSOLE_H
#include <string>
#include <iostream>
#include "DisplayServiceInterface.h"

namespace Service {

class Console: public Service::DisplayServiceInterface{

public:
    void displayOpeningError() override;

    void displayClosingError() override;
};
}// Service

#endif //LAB2_CONSOLE_H
