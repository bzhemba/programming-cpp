//
// Created by мария баженова on 18.03.2023.
//

#ifndef LAB2_WORKWITHFILES_H
#define LAB2_WORKWITHFILES_H

#include "Console.h"
#include <fstream>
#include <string>
#include <exception>
using namespace std;

namespace Service {
    class WorkWithFiles{
    private:
        std::ofstream file;
    public:
        WorkWithFiles(){};

        void openFile(const std::string& name);
        void closeFile();
        bool isOpen();
        void writingString(const std::string& str);
        void writingInt(const float &num);
        void writingFloat(const int &num);

    };
}


#endif //LAB2_WORKWITHFILES_H
