#pragma once
#include "node.h"
#include <iostream>
#include <vector>
#include <string>
#include <limits.h>

class graph{
private:
	node n;
	std::vector< std::vector < std::vector <node> > > adjList;
	std::vector< std::vector< node> > edgeList;
	std::vector< node> detail;

	int vertices, edges, cost, v1, vertex, min, min_index;
	bool wall;

	int* distance;
	//int* visited;
	int* path;
	bool* set;

	void insert_private(int vertices, int edges);
public:
	graph(int vertices, int edges);
	void insert();
	int min_Distance(int distance[], bool set[]);
	void Dijkstra();
	void print();
};