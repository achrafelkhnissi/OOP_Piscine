#pragma once

#include <iostream>
#include <string>

class Transmission {
public:
    Transmission() : gear(0) {}
    ~Transmission() {}

    void shift_gear_up() {
        gear++;
        std::cout << "Shifting gear up to " << gear << std::endl;
    }

    void shift_gear_down() {
        gear--;
        std::cout << "Shifting gear down to " << gear << std::endl;
    }

    void reverse() {
        gear = -1;
        std::cout << "Putting the transmission in reverse gear" << std::endl;
    }

private:
    int gear;
};