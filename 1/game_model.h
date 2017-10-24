#pragma once
#include "node.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <list>

int vertices = 10;

class game{
private:
	int vertices, edges, cost, v1;
	//std::vector< std::list< node> > adjList(vertices);
	//std::vector< node> elements;
	std::vector<int> test;

public:
	game(int vertices, int edges);
	void insert(int v1, int vertex, int cost, bool wall);
	void print();
};