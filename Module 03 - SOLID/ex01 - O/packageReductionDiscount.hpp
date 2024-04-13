#pragma once

#include "command.hpp"
#include <iostream>
#include <string>

class PackageReductionDiscountCommand : public Command {
public:
    PackageReductionDiscountCommand(std::string id, std::string date, std::string client, std::map<std::string, int> articles)
        : Command(id, date, client, articles) {}
    ~PackageReductionDiscountCommand() {}

    double get_total_price() const {
        double total = Command::get_total_price();
        return total > 150 ? total -= 10 : total;
    }
};
