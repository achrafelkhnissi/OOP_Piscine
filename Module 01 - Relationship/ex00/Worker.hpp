#pragma once

#include <iostream>
#include <string>

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

    void giveShovel(Shovel* shovel);
    void takeShovel();

    void Print();

private:
    std::string _name;
    Position _position;
    Statistic _statistic;
    Shovel* _shovel;
};
