#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

struct node{
	int data;
	bool val;
};

int main(int argc, char const *argv[])
{
	vector< node> v;
	node n = {100, true};
	//vector< node>::iterator i;
	//v.push_back(node());
	v.push_back(n);
	cout << v[0].data << "  " << v[0].val;
	cout << endl;

	return 0;
}