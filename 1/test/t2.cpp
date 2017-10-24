#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <list>

using namespace std;

int main(){

	int vertices, edges, v1, v2, cost;
	cout << "\nEnter the number of vertices : ";
	cin >> vertices;
	cout << "\nEnter the number of edges : ";
	cin >> edges;

	vector< list <pair <int, int> > > adjList(vertices + 1);
	for(int i = 0; i < edges; i++){
		cin >> v1 >> v2 >> cost;
		adjList[v1].push_back(make_pair(v2, cost));
	}

	cout << "\nPrinting the adjacency list : \n";
	for(int i = 0; i < adjList.size(); i++){
		cout << "adjacency list[" << i << "]";
		
		list< pair <int, int> >::iterator itr = adjList[i].begin();
		while(itr != adjList[i].end()){
			cout << "->" << (*itr).first << "(" << (*itr).second << ")";
			++itr;
		}
		cout << endl;		 
	}
	cout << endl << endl;
	return 0;
}