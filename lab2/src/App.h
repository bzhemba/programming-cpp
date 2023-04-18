//
// Created by мария баженова on 16.03.2023.
//
#include "lab2/src/Service/WorkWithFiles.h"
#include "lab2/src/Service/Console.h"
#include "lab2/src/Service/DisplayServiceInterface.h"
#ifndef LAB2_APP_H
#define LAB2_APP_H

namespace  Service {
    class App {
    private:
        Service::WorkWithFiles *workWithFiles;
        Service::DisplayServiceInterface *displayService;
    public:
        explicit App(
                Service::WorkWithFiles *workWithfiles,
                Service::DisplayServiceInterface *displayService
        );

        static App *create(WorkWithFiles *workWFiles, DisplayServiceInterface *displayService);

        int start(int argc, char* argv[]);
    };
}

#endif //LAB2_APP_H
