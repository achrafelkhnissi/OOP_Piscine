#pragma once

#include <iostream>
#include <string>

class Engine {
public:
    Engine() : is_running(false), current_speed(0) {}
    ~Engine() {}

    void start() {
        is_running = true;
        std::cout << "Starting the engine" << std::endl;
    }

    void stop() {
        is_running = false;
        std::cout << "Stopping the engine" << std::endl;
    }

    void accelerate(int speed) {
        current_speed += speed;
        std::cout << "Accelerating to " << current_speed << " km/h" << std::endl;
    }

private:
    bool is_running;
    int current_speed;
};
