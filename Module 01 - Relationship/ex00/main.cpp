#include "Worker.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"

int main() {

//    Position pos1 = {1, 2, 3};
    Position pos2 = {3, 4, 5};

//    Statistic stat1 = {10, 20};
    Statistic stat2 = {30, 40};

    Worker worker1("Worker1", (Position){1, 2, 3}, (Statistic){10, 20});
    Shovel shovel;
    Hammer hammer;

    worker1.giveTool(&shovel);
    worker1.giveTool(&hammer);

    // Take shovel from worker1
    worker1.takeTool(&shovel);

    // Give shovel to another worker
    Worker worker2("Worker2", pos2, stat2);
     worker2.giveTool(&shovel);

    // Create a workshop
     Workshop workshop1("Workshop1");
     Workshop workshop2("Workshop2");

    // Register workers to the workshop
     worker1.registerAtWorkshop(&workshop1);
     worker2.registerAtWorkshop(&workshop1);
     worker1.registerAtWorkshop(&workshop2);

    // Execute work day
     workshop1.executeWorkDay();
     workshop2.executeWorkDay();

    return 0;
}