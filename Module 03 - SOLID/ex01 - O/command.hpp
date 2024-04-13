#pragma once

#include <iostream>
#include <string>
#include <map>

class Command {
public:
    Command(std::string id, std::string date, std::string client, std::map<std::string, int> articles)
        : id(id), date(date), client(client), articles(articles) {}
    virtual ~Command() {}

    virtual double get_total_price() const {
        double total = 0;
        for(std::map<std::string, int>::const_iterator it = articles.begin(); it != articles.end(); ++it) {
            total += it->second;
        }
        return total;
    }

protected:
    std::string id;
    std::string date;
    std::string client;
    std::map<std::string, int> articles;
};