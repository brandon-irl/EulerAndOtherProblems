#include "BinarySearchModule.h"
#include "LinkedList.h"
#include "MathematicsModule.h"
#include "SortingModule.h"
#include "ProjectEulerModule.h"
using namespace std;


int main()
{
	//**************BINARY SEARCH**********************************
	//int A[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//cout << BinarySearch(A, sizeof(A) / sizeof(A[0]), 8) << endl;
	//FindCount();
	//FindIndexOfMin();
	//CircularArraySearch();
	//PrintSpiralArray();
	//**************END BINARY SEARCH******************************

	//**************LINKED LISTS***********************************
	//LinkedList ll = *(new LinkedList());
	//ll.Insert(2, 1);
	//ll.Insert(3, 2);
	//ll.Insert(4, 1);
	//ll.Insert(5,2);
	//ll.Print();
	//**************END LINKED LISTS*******************************
	
	//***************************MATHEMATICS**********************
	//IsPrime
	//while (true){
	//	int factor = -1;
	//	int value;
	//	printf("Enter a number: ");
	//	scanf_s("%d", &value);
	//	cout << IsPrime(value, &factor);
	//	cout << " : " << factor << endl;
	//}
	//Eratosthenes
	//while (true){
	//	int value;
	//	printf("Enter a number: ");
	//	scanf_s("%d", &value);
	//	bool *arr = Eratosthenes(value);
	//	for (int i = 0; i <= value; i++){
	//		cout << i<<":"<<arr[i]<<", ";
	//	}
	//	cout << endl;
	//}	
	//Binary Conversions
	//while (true){
	//	int value;
	//	printf("Enter a number: ");
	//	scanf_s("%d", &value);
	//	cout << MathematicsModule::BinaryToDecimal(MathematicsModule::DecimalToBinary(value)) << endl;
	//}
	//Prime Factorization
	//while (true){
	//	int value;
	//	printf("Enter a number: ");
	//	scanf_s("%d", &value);
	//	MathematicsModule::PrimeFactorization(value);
	//}
	//Euclid's Method
	//while (true){
	//	int value;
	//	printf("Enter a number: ");
	//	scanf_s("%d", &value);
	//	int val2;
	//	printf("Enter another number: ");
	//	scanf_s("%d", &val2);
	//	cout << "GCD is: " << MathematicsModule::EuclidsGCD(value, val2) << endl;
	//}
	//Is Square
	//while (true){
	//	int value;
	//	printf("Enter a number: ");
	//	scanf_s("%d", &value);
	//	cout << MathematicsModule::IsSquare(value) << endl;
	//}
	//Number of Factors
	//while (true){
	//	int value;
	//	printf("Enter a number: ");
	//	scanf_s("%d", &value);
	//	cout << MathematicsModule::GetNumberFactors(value) << endl;
	//}
	//***************************END MATHEMATICS*******************

	//***************************SORTING**************************



	//***************************END SORTING**********************

	//***************************EULER**************************

	cout << "max total sum: " << ProjectEulerModule::Problem67() << endl;

	//***************************END EULER**********************

	system("pause");
	return 0;
}
