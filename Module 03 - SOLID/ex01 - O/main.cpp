#include "command.hpp"
#include "tuesdayDiscount.hpp"
#include "packageReductionDiscount.hpp"
#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> articles;

    articles["article1"] = 10;
    articles["article2"] = 20;
    articles["article3"] = 30;
	articles["article4"] = 100;
	articles["article5"] = 50;

    Command cmd("1", "Monday", "client1", articles);
    TuesdayDiscountCommand tdc("2", "Tuesday", "client2", articles);
    PackageReductionDiscountCommand prdc("3", "Wednesday", "client3", articles);

    std::cout << "Total price for Command: " << cmd.get_total_price() << std::endl;
    std::cout << "Total price for TuesdayDiscountCommand: " << tdc.get_total_price() << std::endl;
    std::cout << "Total price for PackageReductionDiscountCommand: " << prdc.get_total_price() << std::endl;

    return 0;
}