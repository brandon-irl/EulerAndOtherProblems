#ifndef __MATHEMATICSMODULE_H_INCLUDED__ 
#define __MATHEMATICSMODULE_H_INCLUDED__
#include <algorithm>
#include <vector>
#include <iostream>
#pragma once
class MathematicsModule
{
public:
	MathematicsModule();
	~MathematicsModule();
	static bool IsPrime(int x);
	static bool *Eratosthenes(int n);
	static std::vector<int> DecimalToBinary(int dec);
	static int BinaryToDecimal(std::vector<int> bin);
	static void PrimeFactorization(int n);
	static int EuclidsGCD(int a, int b);
	static int MSS_Recursive(int arr[], int n);
	static int MSS_Kadane(int arr[], int n);
	static int IsSquare(long n);
	static int GetNumberFactors(int n);
};

#endif