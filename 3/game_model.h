#include "node.h"

class graph{
private:
	node* n;
	std::vector< node> e;
	std::vector< std::vector< node> > adjList;
	int vertices, edges, v1, vertex, cost;
	bool wall;

	void insert_private(int vertices, int edges);
	void print_private(int vertices, int edges);

public:
	graph(int vertices, int edges);
	void insert();
	void print();
};