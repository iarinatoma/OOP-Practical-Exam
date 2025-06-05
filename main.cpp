#include "ui.h"

int main() {
    Repository repo;
    Service service(repo);
    ConsoleUI ui(service);
    ui.run();
    return 0;
}
