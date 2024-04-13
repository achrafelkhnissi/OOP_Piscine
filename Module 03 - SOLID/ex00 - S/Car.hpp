#pragma once

#include <iostream>
#include <string>

#include "Brakes.hpp"
#include "Engine.hpp"
#include "Transmission.hpp"
#include "Wheels.hpp"

class Car {
public:
    Car() : engine(), transmission(), wheels(), brakes() {}
    ~Car() {}

    void start() { engine.start(); }
    void stop() { engine.stop(); }
    void accelerate(int speed) { engine.accelerate(speed); }

    void shift_gear_up() { transmission.shift_gear_up(); }
    void shift_gear_down() { transmission.shift_gear_down(); }
    void reverse() { transmission.reverse(); }

    void turn_wheel(int angle) { wheels.turn(angle); }
    void straighten_wheel() { wheels.straighten(); }
    
    void apply_force_on_brakes(int force) { brakes.apply_force(force); }
    void apply_emergency_brake() { brakes.apply_emergency_brake(); }

private:
    Engine engine;
    Transmission transmission;
    Wheels wheels;
    Brakes brakes;
};
