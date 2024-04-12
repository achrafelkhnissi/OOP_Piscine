#pragma once

#include <iostream>
#include <string>
#include "Worker.hpp"

class Shovel
{
public:
    Shovel();
    Shovel(std::string type);
    ~Shovel();

    void use();

    size_t getNumberOfUses() const;

    void setWorker(Worker* worker);
    Worker* getWorker() const;

private:
    std::string _type;
    size_t _numberOfUses;

    Worker* _worker;
};