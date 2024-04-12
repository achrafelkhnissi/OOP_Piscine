#include "Shovel.hpp"

Shovel::Shovel() : _numberOfUses(0), _worker(nullptr) {
    std::cout << "🥄 Shovel is created" << std::endl;
}

Shovel::~Shovel() {
	std::cout << "Calling Shovel destructor" << std::endl;
    if (_worker != nullptr)
        _worker->takeTool(this);
    std::cout << "🥄 Shovel is destroyed" << std::endl;
}

void Shovel::use() {
	Worker* worker = getWorker();
    std::cout << "🥄 Shovel is being used by 👨🏻‍🔧" << worker->getName() << std::endl;
    _numberOfUses++;
}

size_t Shovel::getNumberOfUses() const {
    return _numberOfUses;
}

void Shovel::setWorker(Worker* worker) {
    _worker = worker;

    if (worker != nullptr)
        std::cout << "🥄 Shovel is given to 👨🏻‍🔧" << worker->getName() << std::endl;
}

Worker* Shovel::getWorker() const {
    return _worker;
}