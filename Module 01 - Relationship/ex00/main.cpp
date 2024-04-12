#include "Worker.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"

int main() {

    Position pos1 = {1, 2, 3};
    Position pos2 = {3, 4, 5};

    Statistic stat1 = {10, 20};
    Statistic stat2 = {30, 40};

    Worker worker1("Worker1", pos1, stat1);
    Shovel shovel;
    Hammer hammer;

    worker1.giveTool(&shovel);
    worker1.giveTool(&hammer);

    // Take shovel from worker1
    worker1.takeTool(&shovel);

    // Give shovel to another worker
    Worker worker2("Worker2", pos2, stat2);
    worker2.giveTool(&shovel);

    return 0;
}