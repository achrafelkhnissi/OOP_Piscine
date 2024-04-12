#pragma once

#include <iostream>
#include <string>
#include "Worker.hpp"
#include "Tool.hpp"

class Hammer : public Tool
{
public:
    Hammer();
    ~Hammer();

    void use(); // from Tool

    size_t getNumberOfUses() const;

    void setWorker(Worker* worker);
    Worker* getWorker() const;

private:
    size_t _numberOfUses;

    Worker* _worker;
};