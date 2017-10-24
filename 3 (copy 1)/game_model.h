#include "node.h"
#include <algorithm>
#include <string>

class graph{
private:
	node* n;
	std::vector< node> e;
	std::vector< std::vector< node> > adjList;
	int vertices, edges, v1, vertex, cost;
	bool wall;

	int* array;
	int* path;
	int* distance;
	int* visited;

	int infinite, nextNode;

	void insert_private(int vertices, int edges);
	void print_private(int vertices, int edges);

public:
	graph(int vertices, int edges);
	void insert();
	void Dijkstra();

	void print();
};