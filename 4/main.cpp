#include "game.h"

using namespace std;

int main(){

	int vertices, edges;

	cout << "\nEnter number of vertices : ";
	cin >> vertices;
	cout << "\nEnter number of edges : ";
	cin >> edges;

	graph g(vertices, edges);
	cout << "\nEnter graph details, vertex to vertex, cost and if wall is present : \n";
	g.insert();
	g.print();

	return 0;
}