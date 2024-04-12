#include "Hammer.hpp"
#include "Tool.hpp"

Hammer::Hammer() {
    std::cout << "Hammer is created" << std::endl;
}

Hammer::~Hammer() {
    Worker* worker = getWorker();
    if (worker != nullptr)
        getWorker()->takeTool(this);
    std::cout << "Hammer is destroyed" << std::endl;
}

void Hammer::use() {
    std::cout << "Hammer is being used" << std::endl;
    _numberOfUses++;
}

size_t Hammer::getNumberOfUses() const {
    return _numberOfUses;
}

void Hammer::setWorker(Worker* worker) {
    _worker = worker;
    if (worker != nullptr)
        std::cout << "Hammer is given to " << worker->getName() << std::endl;
    else
        std::cout << "Hammer is taken from worker" << std::endl;
}

Worker* Hammer::getWorker() const {
    return _worker;
}