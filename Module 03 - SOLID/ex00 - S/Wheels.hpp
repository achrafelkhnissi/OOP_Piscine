#pragma once

#include <iostream>
#include <string>

class Wheels {
public:
    Wheels() : angle(0) {}
    ~Wheels() {}

    void turn(int angle) {
        this->angle = angle;
        std::cout << "Turning the wheels by " << angle << " degrees" << std::endl;
    }

    void straighten() {
        angle = 0;
        std::cout << "Returning the wheels to the straight position" << std::endl;
    }

private:
    int angle;
};