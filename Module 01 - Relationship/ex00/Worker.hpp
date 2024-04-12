#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Tool.hpp"

class Shovel;

typedef struct s_Position {
    int x;
    int y;
    int z;
} Position;

typedef struct s_Statistic {
    int level;
    int exp;
} Statistic;


class Worker
{
public:
    Worker();
    Worker(std::string name, Position position, Statistic statistic);
    ~Worker();

    std::string getName() const;

    void giveShovel(Shovel* shovel);
    void takeShovel(); 

    void giveTool(Tool* tool);
    void takeTool(Tool* tool);

    void Print();

private:
    std::string _name;
    Position _position;
    Statistic _statistic;
    Shovel* _shovel;
    std::vector<Tool*> _tools;
};
