//
// Created by мария баженова on 18.03.2023.
//

#include "Console.h"

namespace Service {
    void Console::displayOpeningError(){
        std::cerr << "opening file error\n";
    }
    void Console::displayClosingError(){
        std::cerr << "closing file error\n";
    }

} // Service