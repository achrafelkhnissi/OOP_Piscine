#pragma once

#include "command.hpp"
#include <iostream>
#include <string>

class TuesdayDiscountCommand : public Command {
public:
    TuesdayDiscountCommand(std::string id, std::string date, std::string client, std::map<std::string, int> articles)
        : Command(id, date, client, articles) {}
    ~TuesdayDiscountCommand() {}

    double get_total_price() const {
        double total = Command::get_total_price();
        return date == "Tuesday" ? total * 0.9 : total;
    }
};