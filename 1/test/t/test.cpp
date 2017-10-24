#include "test.h"

test::test(int n){
	x = n;
	v = std::vector<int> (x);
}

void test::insert(int data){
	for(int i = 0; i < 5; i++){
		v[i].push_back(23);
	}
}