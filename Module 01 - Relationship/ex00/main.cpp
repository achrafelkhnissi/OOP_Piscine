#include "Worker.hpp"
#include "Shovel.hpp"

int main() {
    Position position = {0, 0, 0};
    Statistic statistic = {1, 0};

    Worker worker1("John", position, statistic);
    Worker worker2("Doe", position, statistic);

    Shovel shovel1("Basic");

    worker1.giveShovel(&shovel1);
    worker2.giveShovel(&shovel1);

    return 0;
}