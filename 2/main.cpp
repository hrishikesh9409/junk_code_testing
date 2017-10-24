#include "game_model.h"

using namespace std;

int main(){

	cout << "\nEnter number of vertices : ";
	int vertices; cin >> vertices;
	cout << "\nEnter number of edges : ";
	int edges; cin >> edges;

	graph g(vertices, edges);
	for(int i = 0; i < edges; i++)
		g.insert();
	g.print();

	return 0;
}