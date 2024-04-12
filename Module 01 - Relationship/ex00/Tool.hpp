#pragma once

#include <iostream>

class Tool {
public:
    virtual void use() = 0;
    virtual size_t getNumberOfUses() const = 0;
    virtual void setWorker(class Worker* worker) = 0;
    virtual class Worker* getWorker() const = 0;
    virtual ~Tool() {}
};
