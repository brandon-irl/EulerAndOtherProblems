#ifndef __BINARYSEARCHMODULE_H_INCLUDED__ 
#define __BINARYSEARCHMODULE_H_INCLUDED__
#include <iostream>

int BinarySearch(int A[], int size, int value);
int BinarySearch_recursive(int A[], int start, int end, int value);
int FindFirstOrLast(int A[], int size, int value, bool searchFirst);
int FindCount();
int FindIndexOfMin();
int CircularArraySearch();
void PrintSpiralArray();

#endif

