#pragma once
#include <iostream>
#include <vector>

class test{
private:
	std::vector<int> v;
	int x;
public:
	test(int n);
	void insert(int data);
};