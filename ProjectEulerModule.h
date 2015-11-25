#ifndef __PROJECTEULERMODULE_H_INCLUDED__ 
#define __PROJECTEULERMODULE_H_INCLUDED__
#include <iostream>
#include <ctime>
#include <climits>
#include <vector>
#include <sstream>

#pragma once
class ProjectEulerModule
{
public:
	ProjectEulerModule();
	~ProjectEulerModule();

	static int Problem1();
	static int Problem7();
	static int Problem9();
	static long long Problem10();
	static long long Problem11();
	static int Problem12();
	static int Problem13();
	static int Problem14();
	static int Problem15();
	static int Problem16();
	static int Problem17();
	static int Problem18();
	static int Problem67();
	static int Problem19();
private:
	static long long collatzLength(long long n, std::vector<int> *cache, int count = 1);
	static int cardinalNumberLength(int n);
	static int TreeMaxSum(int tree[], int cache[], int treeLength, int root = 0, int row = 0);
};

#endif