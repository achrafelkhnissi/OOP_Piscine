#include "Graph.hpp"

int main()
{
	Vector2 v1 = {0, 0};
	Vector2 v2 = {2, 2};
	Vector2 v3 = {4, 2};
	Vector2 v4 = {2, 4};

	Graph g;

	g.addEdge(v1);
	g.addEdge(v2);
	g.addEdge(v3);
	g.addEdge(v4);

	g.printGraph();

	return (0);
}
