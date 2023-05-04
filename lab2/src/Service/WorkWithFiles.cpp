//
// Created by мария баженова on 18.03.2023.
//

#include "WorkWithFiles.h"

namespace Service {
    fstream file;

    void Service::WorkWithFiles::openFile(const std::string& name) {
        file.open(name, std::ios::app);
        if (!this->file.is_open()) {
            throw std::exception();
        }
    }

    void Service::WorkWithFiles::closeFile() {
        if (!this->file.is_open()) {
            throw std::exception();
        }
        file.close();
    }

    bool Service::WorkWithFiles::isOpen() {
        return file.is_open();
    }

    void Service::WorkWithFiles::writingString(const std::string& str) {
        this->file << str;
    }

    void WorkWithFiles::writingInt(const float& num) {
        this->file << num;
    }

    void WorkWithFiles::writingFloat(const int& num) {
        this->file << num;
    }
}