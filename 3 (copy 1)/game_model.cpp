#include "game_model.h"

using namespace std;

graph::graph(int vertices, int edges){
	n = new node[edges];
	this->vertices = vertices;
	this->edges = edges;

	path = new int[vertices]; 
	array = new int[vertices];
	distance = new int[vertices];
	visited = new int[vertices];

	infinite = 99999; //infinite distance, before discovery

	for(int i = 0; i < vertices; i++){
		array[i] = 0; visited[i] = 0; path[i] = 0; distance[i] = 0;
	}
	visited[0] = 1;
	distance[0] = 0;
	nextNode = 0;
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

void graph::Dijkstra(){
	for(int i = 0; i < adjList.size(); i++){
		infinite = 99999;
		for(int j = 0; j < adjList.size(); j++){
			if(infinite > distance[j] && visited[j] != 1){
				infinite = distance[j];
				nextNode = j;
			}
		}
		visited[nextNode] = 1;
		for(int j = 0; j < adjList.size(); j++){
			if(visited[j] != 1){
				if(infinite + array[nextNode] < distance[j]){
					distance[j] = infinite + array[nextNode];
					path[j] = nextNode;
				}
			}
		}
	}
	// for(int i = 0; i < adjList.size(); i++){
	// 	cout << distance[i] << "	";
	// }
	// cout << endl;
}

void graph::print(){
	print_private(vertices, edges);
}

void graph::print_private(int vertices, int edges){
	//cout << adjList.size() << "	" << e.size() << endl;
	stringstream buffer;
	stringstream weight;
	int i = 0;
	while(i < adjList.size()){
		cout << "adjacency_list(" << i << ") ";
		std::vector< node>::iterator itr = e.begin();
		while(itr != e.end()){
			if(i == (*itr).v1){
				cout << "->" << (*itr).vertex << "(" << (*itr).cost << ")" << "(" << (*itr).wall << ")";
				
				buffer << (*itr).cost;
				// weight << (*itr).cost;
			}
			itr++;
		}
		cout << endl;
		i++;
	}

	string s = buffer.str();
	//string t = weight.str();
	int c, d;
	for(int i = 0; i < adjList.size(); i++){
		c = s[i];
		//d = t[i];
		array[i] = s[i] - '0';
	}
}