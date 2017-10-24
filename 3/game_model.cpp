#include "game_model.h"

using namespace std;

graph::graph(int vertices, int edges){
	n = new node[edges];
	this->vertices = vertices;
	this->edges = edges;
}

void graph::insert(){
	insert_private(vertices, edges);
}

void graph::insert_private(int vertices, int edges){
	for(int i = 0; i < edges; i++){
		cin >> v1 >> vertex >> cost >> wall;
		n[i].v1 = v1;
		n[i].vertex = vertex;
		n[i].cost = cost;
		n[i].wall = wall;
		e.push_back(n[i]);

		adjList.push_back(e);	
	}
}

void graph::print(){
	print_private(vertices, edges);
}

void graph::print_private(int vertices, int edges){
	//cout << adjList.size() << "	" << e.size() << endl;
	int i = 0;
	while(i < adjList.size()){
		cout << "adjacency_list(" << i << ") ";
		std::vector< node>::iterator itr = e.begin();
		while(itr != e.end()){
			if(i == (*itr).v1)
				cout << "->" << (*itr).vertex << "(" << (*itr).cost << ")" << "(" << (*itr).wall << ")";
			itr++;
		}
		cout << endl;
		i++;
	}
}