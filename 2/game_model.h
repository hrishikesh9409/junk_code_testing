#pragma once
#include "node.h"

class graph{
private:
	node* n = NULL;
	edgeList* ed = NULL;
	adjList* adj = NULL;
	int v, e, v1, vertex, cost, max;
	bool wall;
	void insert_private(int vertices, int edges);
	void print_private(int vertices, int edges);
public:
	graph(int vertices, int edges);
	~graph();
	void insert();
	void print();
};