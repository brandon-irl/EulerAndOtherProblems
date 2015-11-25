#include "BinarySearchModule.h"

using namespace std;

int BinarySearch(int A[], int size, int value)
{
	int start = 0, end = size;

	while (start <= end){
		int mid = (start + end) / 2;
		if (A[mid] == value)
			return mid;
		else if (A[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return -1;
}
int BinarySearch_recursive(int A[], int start, int end, int value){
	if (start > end)
		return -1;
	int mid = (start + end) / 2;
	if (A[mid] == value)
		return mid;
	else if (A[mid] > value)
		return BinarySearch_recursive(A, start, mid - 1, value);
	else if (A[mid] < value)
		return BinarySearch_recursive(A, mid + 1, end, value);

}
int FindFirstOrLast(int A[], int size, int value, bool searchFirst){
	int low = 0;
	int high = size - 1;
	int result = -1;
	while (low <= high){
		int mid = (low + high) / 2;
		if (A[mid] == value){
			result = mid;
			(searchFirst) ? high = mid - 1 : low = mid + 1; //Continue searching below the found index
		}
		else if (A[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return result;
}
int FindCount(){
	int A[] = { 1, 1, 3, 3, 5, 5, 5, 5, 5, 9, 9, 11 };
	cout << "{ 1, 1, 3, 3, 5, 5, 5, 5, 5, 9, 9, 11 }" << endl;
	int size = sizeof(A) / sizeof(A[0]);
	while (true){
		int value;
		printf("Enter a number: ");
		scanf_s("%d", &value);
		int first = FindFirstOrLast(A, size, value, true);
		if (first == -1)
			cout << -1 << endl;
		else{
			int last = FindFirstOrLast(A, size, value, false);
			cout << last - first + 1 << endl;
		}
	}
	return 0;
}
int FindIndexOfMin(){
	int A[] = { 15, 22, 23, 28, 31, 38, 5, 6, 8, 10, 12 }, n = sizeof(A) / sizeof(A[0]);
	cout << "{ 15, 22, 23, 28, 31, 38, 5, 6, 8, 10, 12 }" << endl;
	int low = 0, high = n - 1, lowestIndex = -1;
	while (low <= high)
	{
		if (A[low] <= A[high]){
			lowestIndex = low;
			break;
		}
		int mid = (low + high) / 2;
		int next = (mid + 1) % n, prev = (mid + n - 1) % n;
		if (A[mid] <= A[next] && A[mid] <= A[prev]) // pivot property
			return mid;
		else if (A[mid] <= A[high])
			high = mid - 1;
		else if (A[mid] >= A[low])
			low = mid + 1;
	}
	cout << "Array has been rotated " << lowestIndex << " times." << endl;
	system("pause");
	return 0;
}
int CircularArraySearch(){
	int A[] = { 12, 14, 18, 21, 3, 6, 8, 9 };
	cout << "{ 12, 14, 18, 21, 3, 6, 8, 9 }" << endl;
	int low = 0, high = sizeof(A) / sizeof(A[0]) - 1;
	int value;
	printf("Enter a number: ");
	scanf_s("%d", &value);
	while (low <= high){
		int mid = (low + high) / 2;
		if (A[mid] == value)
		{
			cout << "Index is " << mid << endl;
			return mid;
		}
		else if (A[mid] <= A[high]) // Right half is sorted	
			if (A[mid] < value && value <= A[high]) // Value is within the right half
				low = mid + 1;
			else
				high = mid - 1;
		else if (A[low] <= A[mid]) // left half is sorted	
			if (value >= A[low] && value < A[mid])	//Value is withing the left halft
				high = mid - 1;
			else
				low = mid + 1;
	}
	cout << value << " could not be found" << endl;
	return -1;
}
void PrintSpiralArray(){
	int A[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	cout << "{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }" << endl;
	int T = 0, L = 0, B = 2, R = 3, dir = 0;

	while (T <= B && L <= R){
		if (dir == 0){
			for (int i = T; i <= R; i++)
				cout << A[T][i] << ", ";
			T++;
			dir = 1;
		}
		else if (dir == 1){
			for (int i = T; i <= B; i++)
				cout << A[i][R] << ", ";
			R--;
			dir = 2;
		}
		else if (dir == 2){
			for (int i = R; i >= L; i--)
				cout << A[B][i] << ", ";
			B--;
			dir = 3;
		}
		else if (dir == 3){
			for (int i = B; i >= T; i--)
				cout << A[i][L] << ", ";
			L++;
			dir = 0;
		}
	}
	cout << endl;
}
