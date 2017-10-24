#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <list>

using namespace std;

struct node{
	int vertex;
	bool wall;
	int cost;
};

int main(){

	int vertices, edges, v1;
	cout << "\nEnter the number of vertices : ";
	cin >> vertices;
	cout << "\nEnter the number of edges : ";
	cin >> edges;

	vector< list <node> > adjList(vertices);
	for(int i = 0; i < edges; i++){
		node n;
		cin >> v1 >> n.vertex >> n.wall >> n.cost;
		adjList[v1].push_back(n);
	}

	cout << "\nPrinting the adjacency list : \n";
	for(int i = 0; i < adjList.size(); i++){
		cout << "adjacency list[" << i << "]";
		
		list<node>::iterator itr = adjList[i].begin();
		while(itr != adjList[i].end()){
			cout << "->" << (*itr).vertex;// << "(" << (*itr).wall << ")" << "(" << (*itr).cost << ")";
			++itr;
		}
		cout << endl;		 
	}
	cout << endl << endl;
	return 0;
}