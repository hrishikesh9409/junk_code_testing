#pragma once

#include <iostream>

struct node{
	int vertex;
	int cost;
	bool wall;
};

struct edgeList{
	node detail;
};

struct adjList{
	node edgeList;
};