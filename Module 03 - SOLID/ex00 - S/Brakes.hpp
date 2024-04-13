#pragma once

#include <iostream>
#include <string>

#define MAX_BRAKE_FORCE 100

class Brakes {
public:
    Brakes() : force_applied(0) {}
    ~Brakes() {}

    void apply_force(int force) {
        force_applied = force > MAX_BRAKE_FORCE ? MAX_BRAKE_FORCE : force;
        std::cout << "Applying " << force_applied << " force on the brakes" << std::endl;
    }

    void apply_emergency_brake() {
        force_applied = MAX_BRAKE_FORCE;
        std::cout << "Applying emergency brake with " << force_applied << " force" << std::endl;
    }

private:
    int force_applied;
};