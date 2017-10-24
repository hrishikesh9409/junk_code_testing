#include "game.h"

using namespace std;

graph::graph(int vertices, int edges){
	this->vertices = vertices;
	this->edges = edges;

	wall = true;

	distance = new int[vertices];
	//visited = new int[vertices];
	path = new int[vertices];
	set = new bool[vertices];

	min = INT_MAX;

	for(int i = 0; i < vertices; i++){
		distance[i] = INT_MAX;
		set[i] = false;
	}
	distance[0] = 0;
}

void graph::insert(){
	insert_private(vertices, edges);
}

void graph::insert_private(int vertices, int edges){
	for(int j = 0; j < edges; j++){
		cin >> v1 >> vertex >> cost >> wall;
		n.v1 = v1;
		n.vertex = vertex;
		if(cost == 0)
			n.cost = 99999;
		else
			n.cost = cost;
		n.wall = wall;

		detail.push_back(n);
		edgeList.push_back(detail);
		adjList.push_back(edgeList);
	}
}

int graph::min_Distance(int distance[], bool set[]){
	for(int i = 0; i < vertices; i++){
		if(set[i] == false && distance[i] <= min){
			min = distance[i]; min_index = i;
		}
	}
	return min_index;
}

void graph::Dijkstra(){	
	for(int i = 0; i < adjList.size(); i++){
		int u = min_Distance(distance, set);
		set[u] = true;
		for(int j = 0; j < edgeList.size(); j++){
			if (!set[j] && detail[j].cost && distance[u] != INT_MAX && distance[u] + detail[j].cost < distance[j])
            	distance[j] = distance[u] + detail[j].cost;
		}
	}
	for(int i = 0; i < vertices; i++){
		cout << distance[i] << " ";
	}
	cout << endl;
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
