#include "game_model.h"

int k = 0;

using namespace std;

graph::graph(int vertices, int edges){
	v = vertices;
	e = edges;

	max = v * e;

	n = new node[e];
	ed = new edgeList[v];
	adj = new adjList[max];
}
graph::~graph(){}

void graph::insert(){
	insert_private(v, e);
}

void graph::insert_private(int vertices, int edges){
	cin >> v1 >> vertex >> cost >> wall;

	n[k].vertex = vertex;
	n[k].cost = cost;
	n[k].wall = wall;

	ed[k].detail = n[k];
	adj[v1].edgeList = ed[k];
	k++;
}

void graph::print(){
	print_private(v, e);
}
void graph::print_private(int vertices, int edges){
	// for(int i = 0; i < vertices; i++){
	// 	cout << "adjacency_list(" << i << ") ";
	// 	for(int j = 0; j < edges; j++){
	// 		cout << "->" << adj[j].edgeList.vertex; // << "(" << adj[j].detail.cost << ")" << "(" << adj[j].detail.wall << ")";
	// 	} 
	// 	cout << endl;
	// }


	cout << adj[0].edgeList.vertex;
}