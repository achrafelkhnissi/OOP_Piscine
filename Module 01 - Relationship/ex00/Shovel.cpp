#include "Shovel.hpp"

Shovel::Shovel() {
    std::cout << "Shovel is created" << std::endl;
}

Shovel::~Shovel() {
    Worker* worker = getWorker();
    if (worker != nullptr)
        getWorker()->takeTool(this);
    std::cout << "Shovel is destroyed" << std::endl;
}

void Shovel::use() {
    std::cout << "Shovel is being used" << std::endl;
    _numberOfUses++;
}

size_t Shovel::getNumberOfUses() const {
    return _numberOfUses;
}

void Shovel::setWorker(Worker* worker) {
    _worker = worker;

    if (worker != nullptr)
        std::cout << "Shovel is given to " << worker->getName() << std::endl;
    else
        std::cout << "Shovel is taken from worker" << std::endl;
}

Worker* Shovel::getWorker() const {
    return _worker;
}