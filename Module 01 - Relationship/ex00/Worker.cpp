#include "Worker.hpp"
#include "Shovel.hpp"

Worker::Worker() : _name("Default"), _shovel(nullptr) {
    std::cout << "Worker " << _name << " is born" << std::endl;
}

Worker::Worker(std::string name, Position position, Statistic statistic) : 
    _name(name), _position(position), _statistic(statistic), _shovel(nullptr) {
    std::cout << "Worker " << _name << " is born" << std::endl;
}

Worker::~Worker() {
    takeShovel();
    std::cout << "Worker " << _name << " is died" << std::endl;
}

void Worker::giveShovel(Shovel* shovel) {
    if (_shovel != nullptr)
        std::cout << "Worker " << _name << " already has a shovel" << std::endl;
    else {
        if (shovel->getWorker() != nullptr)
            shovel->getWorker()->takeShovel();
        _shovel = shovel;
        shovel->setWorker(this);
        std::cout << "Worker " << _name << " has been given a shovel" << std::endl;
    }
}

void Worker::takeShovel() {
    if (_shovel != nullptr) {
        _shovel->setWorker(nullptr);
        _shovel = nullptr;
        std::cout << "Worker " << _name << "'s shovel has been taken" << std::endl;
    }
    else
        std::cout << "Worker " << _name << " has no shovel to take" << std::endl;
}

void Worker::Print() {
    std::cout << "Worker " << _name << " is at position (" << _position.x << ", " << _position.y << ", " << _position.z << ") with level " << _statistic.level << " and exp " << _statistic.exp << std::endl;
    if (_shovel != nullptr)
        std::cout << "Worker " << _name << " has a shovel" << std::endl;
    else
        std::cout << "Worker " << _name << " is without a shovel" << std::endl;
}
