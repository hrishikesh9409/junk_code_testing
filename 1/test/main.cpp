#include <iostream>
#include <vector>
#include <list>
#include <utility>

using namespace std;

int main(int argc, char const *argv[])
{
	vector< vector <int> > v;
	vector <int> x, y;
	vector< vector <int> >::iterator iter1;
	vector<int>::iterator iter2;

	x.push_back(1);
	x.push_back(2);
	x.push_back(3);
	y.push_back(4);
	y.push_back(5);
	y.push_back(6);

	v.push_back(x);
	v.push_back(y);

	for(iter1 = v.begin(); iter1 != v.end(); iter1++){
		for(iter2 = (*iter1).begin(); iter2 != (*iter1).end(); iter2++){
			cout << *iter2 << " ";
		}
	} 

	cout << endl << endl;

	pair <int, int> pair1;
	pair1 = make_pair(100, 100);

	cout << pair1.first << endl;
	cout << pair1.second << endl;

	cout << endl << endl;

	pair<int, char> apair;
	vector< pair < int, char> > in;
	vector< vector< pair< int, char> > > out;

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
				apair.first = i;
				apair.second = j;
				in.push_back(apair);
		}
	}

	out.push_back(in);

	vector< vector< pair< int, char> > >::iterator iter3;
	vector< pair < int, char> >::iterator iter4;

	for(iter3 = out.begin(); iter3 != out.end(); iter3++){
		for(iter4 = in.begin(); iter4 != in.end(); iter4++){
			apair = *iter4;
			cout << apair.first << "  " << apair.second;
		}
		cout << endl;
	}

	return 0;
}