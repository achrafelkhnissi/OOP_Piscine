#include "Worker.hpp"
#include "Shovel.hpp"

Worker::Worker() : _name("Default"), _position(), _statistic() {
    std::cout << "Worker " << _name << " is born" << std::endl;
}

Worker::Worker(const std::string& name, Position position, Statistic statistic) :
    _name(name), _position(position), _statistic(statistic) {
    std::cout << "Worker " << _name << " is born" << std::endl;
}

Worker::~Worker() {
	std::cout << "Calling Worker destructor" << std::endl;
    for (size_t i = 0; i < _tools.size(); i++) {
		takeTool(_tools[i]);
	}
    std::cout << "Worker " << _name << " is died" << std::endl;
}

std::string Worker::getName() const {
    return _name;
}

//void Worker::giveShovel(Shovel* shovel) {
//    if (_shovel != nullptr)
//        std::cout << "Worker " << _name << " already has a shovel" << std::endl;
//    else {
//        if (shovel->getWorker() != nullptr)
//            shovel->getWorker()->takeShovel();
//        _shovel = shovel;
//        shovel->setWorker(this);
//        std::cout << "Worker " << _name << " has been given a shovel" << std::endl;
//    }
//}
//
//void Worker::takeShovel() {
//    if (_shovel != nullptr) {
//        _shovel->setWorker(nullptr);
//        _shovel = nullptr;
//        std::cout << "Worker " << _name << "'s shovel has been taken" << std::endl;
//    }
//    else
//        std::cout << "Worker " << _name << " has no shovel to take" << std::endl;
////}

void Worker::giveTool(Tool* tool) {
    if (tool->getWorker() != nullptr)
        tool->getWorker()->takeTool(tool);

    tool->setWorker(this);
    _tools.push_back(tool);
    std::cout << "Worker " << _name << " has been given a tool" << std::endl;
}

void Worker::takeTool(Tool* tool) {
    if (_tools.empty()) {
        std::cout << "Worker " << _name << " has no tool to take" << std::endl;
        return;
    }
    for (std::vector<Tool*>::iterator it = _tools.begin(); it != _tools.end(); it++) {
        if (*it == tool) {
            tool->setWorker(nullptr);
            _tools.erase(it);
            std::cout << "Worker " << _name << " has taken a tool" << std::endl;
            return;
        }
    }
}

void Worker::registerAtWorkshop(Workshop* workshop) {
    if (workshop == nullptr) {
        std::cout << "Worker " << _name << " cannot register at a null workshop" << std::endl;
        return;
    }
    for (size_t i = 0; i < _workshops.size(); i++) {
        if (_workshops[i] == workshop) {
            std::cout << "Worker " << _name << " is already registered at this workshop " << workshop->getName() << std::endl;
            return;
        }
    }
    _workshops.push_back(workshop);
    workshop->registerWorker(this);
    std::cout << "Worker " << _name << " has been registered at the workshop " << workshop->getName() << std::endl;
}

void Worker::leaveWorkshop(Workshop* workshop) {
    if (workshop == nullptr) {
        std::cout << "Worker " << _name << " cannot leave a null workshop" << std::endl;
        return;
    }
    for (size_t i = 0; i < _workshops.size(); i++) {
        if (_workshops[i] == workshop) {
            _workshops.erase(_workshops.begin() + i);
            workshop->releaseWorker(this);
            std::cout << "Worker " << _name << " has left the workshop " << workshop->getName() << std::endl;
            return;
        }
    }
    std::cout << "Worker " << _name << " is not registered at this workshop" << std::endl;
}

void Worker::work() const {
    std::cout << "Worker " << _name << " is working" << std::endl;
    for (size_t i = 0; i < _tools.size(); i++)
        _tools[i]->use();
}

void Worker::Print() {
    std::cout << "Worker " << _name << " is at position (" << _position.x << ", " << _position.y << ", " << _position.z << ") with level " << _statistic.level << " and exp " << _statistic.exp << std::endl;
}
