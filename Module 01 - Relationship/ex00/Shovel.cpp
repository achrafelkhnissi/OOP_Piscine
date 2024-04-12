#include "Shovel.hpp"

Shovel::Shovel() : _type("Basic") {
    std::cout << "Shovel " << _type << " is born" << std::endl;
}

Shovel::Shovel(std::string type) : _type(type) {
    std::cout << "Shovel " << _type << " is born" << std::endl;
}

Shovel::~Shovel() {
    getWorker()->takeShovel();
    std::cout << "Shovel " << _type << " is died" << std::endl;
}

void Shovel::use() {
    std::cout << "Shovel " << _type << " is used" << std::endl;
    _numberOfUses++;
}

size_t Shovel::getNumberOfUses() const {
    return _numberOfUses;
}

void Shovel::setWorker(Worker* worker) {
    _worker = worker;
}

Worker* Shovel::getWorker() const {
    return _worker;
}