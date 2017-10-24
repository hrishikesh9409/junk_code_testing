#pragma once
#include "node.h"
#include <iostream>
#include <vector>
#include <string>

class graph{
private:
	node n;
	std::vector< std::vector < std::vector <node> > > adjList;
	std::vector< std::vector< node> > edgeList;
	std::vector< node> detail;

	int vertices, edges, cost, v1, vertex, min, nextNode;
	bool wall;

	int* distance;
	int* visited;
	int* path;

	void insert_private(int vertices, int edges);
public:
	graph(int vertices, int edges);
	void insert();
	void print();
};