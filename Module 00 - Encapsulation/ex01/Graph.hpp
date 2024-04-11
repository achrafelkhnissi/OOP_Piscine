#pragma once

#include <vector>
#include <iostream>


typedef struct Vector2 {
    size_t x;
    size_t y;
} Vector2;

class Graph {
public:
    Graph();
    ~Graph();
    void addEdge(Vector2 v);
    void removeEdge(Vector2 v);
    void printGraph();

private:
    std::vector<Vector2> adj;
};
