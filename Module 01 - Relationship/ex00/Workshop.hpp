#pragma once

#include <iostream>
#include <string>
#include <vector>

class Worker;

class Workshop
{
private:
    std::string _name;
    std::vector<Worker*> _workers;

public:
    explicit Workshop(const std::string& name);
    ~Workshop();
    void registerWorker(Worker* worker);
    void releaseWorker(Worker* worker);

	std::string getName() const;

    void executeWorkDay() const;
};
