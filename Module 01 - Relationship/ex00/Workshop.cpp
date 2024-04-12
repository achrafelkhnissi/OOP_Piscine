#include "Workshop.hpp"
#include "Worker.hpp"

Workshop::Workshop(const std::string& name) : _name(name), _workers() {
    std::cout << "Workshop " << _name << " is open" << std::endl;
}

Workshop::~Workshop() {
	std::cout << "Calling Workshop " << _name << " destructor" << std::endl;
	for (size_t i = 0; i < _workers.size(); i++) {
		_workers[i]->leaveWorkshop(this);
    }
	std::cout << "Workshop " << _name << " is closed" << std::endl;
}

void Workshop::registerWorker(Worker* worker)
{
    _workers.push_back(worker);
    std::cout << worker->getName() << " has been registered." << std::endl;
}

void Workshop::releaseWorker(Worker* worker)
{
    for (std::vector<Worker*>::iterator it = _workers.begin(); it != _workers.end(); ++it)
    {
        if (*it == worker)
        {
            _workers.erase(it);
            std::cout << worker->getName() << " has been released from " << _name << std::endl;
            return;
        }
    }
    std::cout << worker->getName() << " is not registered." << std::endl;
}

void Workshop::executeWorkDay() const
{
    std::cout << "Workshop " << _name << " has started the work day" << std::endl;
	for (std::vector<Worker*>::const_iterator it = _workers.begin(); it != _workers.end(); ++it)
    {
        (*it)->work();
    }
}

std::string Workshop::getName() const
{
	return _name;
}