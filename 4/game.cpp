#include "game.h"

using namespace std;

graph::graph(int vertices, int edges){
	this->vertices = vertices;
	this->edges = edges;

	wall = true;

	distance = new int[vertices];
	visited = new int[vertices];
	path = new int[vertices];
}

void graph::insert(){
	insert_private(vertices, edges);
}

void graph::insert_private(int vertices, int edges){
	for(int j = 0; j < edges; j++){
		cin >> v1 >> vertex >> cost >> wall;
		n.v1 = v1;
		n.vertex = vertex;
		n.cost = cost;
		n.wall = wall;

		detail.push_back(n);
		edgeList.push_back(detail);
		adjList.push_back(edgeList);
	}
}

void graph::print(){
	for(int i = 0; i < adjList.size(); i++){
		cout << "adjacency_list(" << i << ") ";
		for(int j = 0; j < edgeList.size(); j++){
			if(i == detail[j].v1)
				cout << "->" << detail[j].vertex << "(" << detail[j].cost << ")" << "(" << detail[j].wall << ")";
		}
		cout << endl;
	}
}
