#include "Graph.hpp"
#include <algorithm>
#include <cstddef>
#include <vector>

Graph::Graph() {}

Graph::~Graph() {}

void Graph::addEdge(Vector2 v) {
    adj.push_back(v);
}

void Graph::removeEdge(Vector2 v) {
    for (size_t i = 0; i < adj.size(); i++) {
        if (adj[i].x == v.x && adj[i].y == v.y) {
            adj.erase(adj.begin() + i);
            break;
        }
    }
}

void Graph::printGraph() {
    size_t maxX = 0, maxY = 0;
    for (size_t i = 0; i < adj.size(); i++) {
        maxX = std::max(maxX, adj[i].x + 1);
        maxY = std::max(maxY, adj[i].y + 1);
    }

    std::vector<std::vector<char> > grid(maxY, std::vector<char>(maxX, '.'));

    for (size_t i = 0; i < adj.size(); i++) {
        grid[adj[i].y][adj[i].x] = 'X';
    }

    for (size_t i = grid.size() - 1; i < grid.size(); i--) {
        std::cout << ">& " << i + 1 << " ";
        for (size_t j = 0; j < grid[i].size(); j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << ">& ";
    for (size_t i = 0; i <= maxX; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}