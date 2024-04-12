#include "Hammer.hpp"
#include "Tool.hpp"

Hammer::Hammer() : _numberOfUses(0), _worker(nullptr) {
    std::cout << "🔨 Hammer is created" << std::endl;
}

Hammer::~Hammer() {
	std::cout << "Calling Hammer destructor" << std::endl;
    if (_worker != nullptr)
        _worker->takeTool(this);
    std::cout << "🔨 Hammer is destroyed" << std::endl;
}

void Hammer::use() {
	Worker* worker = getWorker();
    std::cout << "🔨 Hammer is being used by 👨🏻‍🔧" << worker->getName() << std::endl;
    _numberOfUses++;
}

size_t Hammer::getNumberOfUses() const {
    return _numberOfUses;
}

void Hammer::setWorker(Worker* worker) {
    _worker = worker;
    if (worker != nullptr)
        std::cout << "🔨 Hammer is given to 👨🏻‍🔧" << worker->getName() << std::endl;
}

Worker* Hammer::getWorker() const {
    return _worker;
}