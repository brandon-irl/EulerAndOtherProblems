#include "SortingModule.h"


SortingModule::SortingModule()
{
}


SortingModule::~SortingModule()
{
}

void SortingModule::SelectionSort(int A[], int n){
	for (int i = 0; i < n - 2; i++){
		int iMin = i;
		for (int j = i + 1; j < n - 1; j++){
			if (A[j] < A[iMin])
				iMin = j;
		}
		int temp = A[i];
		A[i] = A[iMin];
		A[iMin] = temp;
	}
}
