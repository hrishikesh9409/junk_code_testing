#include <iostream>

using namespace std;

struct A{
	int a;
	float b;

};

struct B{
	A test;
};


int main(){

	A* x = new A[5];
	B* y = new B[5];

	x[0].a = 10;
	x[0].b = 20.0;

	y[1].test = x[0];

	cout << endl << y[1].test.a << "	" << y[1].test.b << endl;

	return 0;
}