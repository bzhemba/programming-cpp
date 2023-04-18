#include "src/App.h"
#include "src/Service/WorkWithFiles.h"
#include "src/Service/Console.h"

int main(int argc, char* argv[]) {
    return Service::App::create(
            new Service::WorkWithFiles(),
            new Service::Console()

    )->start(argc, argv);
}
