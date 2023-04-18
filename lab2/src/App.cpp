//
// Created by мария баженова on 16.03.2023.
//
#include "App.h"

namespace Service {
    int App::start(int argc, char* argv[]) {
        auto filename = argv[1];

        try {
            this->workWithFiles->openFile(filename);
        } catch (std::exception const &e) {
            this->displayService->displayOpeningError();
            return -1;
        }
        return 0;
    }

    App::App(
            Service::WorkWithFiles *workWithFiles,
            Service::DisplayServiceInterface *displayService
    ) {
        this->workWithFiles = workWithFiles;
        this->displayService = displayService;
    }

    App *App::create(Service::WorkWithFiles *workWithFiles, Service::DisplayServiceInterface *displayService) {
        return new App(workWithFiles, displayService);
    }
}