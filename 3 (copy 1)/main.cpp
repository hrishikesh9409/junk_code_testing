#include "game_model.h"

using namespace std;

int main(){

	int vertices, edges;

	cout << "\nEnter number of vertices : "; cin >> vertices;
	cout << "\nEnter number of edges : "; cin >> edges;

	graph g(vertices, edges);

	cout << "\nEnter v1, vertex, cost and wall value : \n";

	g.insert();
	g.print();
	g.Dijkstra();

	return 0;
}