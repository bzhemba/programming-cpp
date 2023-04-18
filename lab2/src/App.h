//
// Created by мария баженова on 16.03.2023.
//
#include "Service/WorkWithFiles.h"
#include "Service/Console.h"
#include "Service/DisplayServiceInterface.h"
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
