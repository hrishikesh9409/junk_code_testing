#include "game_model.h"

using namespace std;

int main(){

	int vertices, edges;
	cout << "\nEnter the number of vertices : ";
	cin >> vertices;
	cout << "\nEnter the number of edges : ";
	cin >> edges;

	game g(vertices, edges);

	int v1, vertex, cost;
	bool wall;

	for(int i = 0; i < edges; i++){
		cin >> v1 >> vertex >> cost >> wall;
		g.insert(v1, vertex, cost, wall);
	}

	//g.print();

	return 0;
}