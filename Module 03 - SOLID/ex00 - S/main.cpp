#include "Car.hpp"

int main() {
    Car car;

    car.start();
    car.accelerate(50);
    car.shift_gear_up();
    car.turn_wheel(45);
    car.straighten_wheel();
    car.apply_force_on_brakes(10);
    car.apply_emergency_brake();
    car.stop();

    return 0;
}