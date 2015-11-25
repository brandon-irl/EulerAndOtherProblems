#include "MathematicsModule.h"

using namespace std;

MathematicsModule::MathematicsModule()
{
}


MathematicsModule::~MathematicsModule()
{
}

struct Point{
	double x, y;
};
const int LEFT = -1, RIGHT = 1, ON_THE_LINE = 0;

bool MathematicsModule::IsPrime(int x){	//Assume x is positive
	if (x == 1)
		return false;
	if (x == 2)
		return true;
	if (x % 2 == 0)		//All primes are odd
	{
		return false;
	}
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0){
			return false;
		}

	}
	return true;
}

bool* MathematicsModule::Eratosthenes(int n)
{
	bool *primes = new bool[n + 1];
	for (int i = 0; i <= n; i++)
		primes[i] = true;
	primes[0] = false;
	primes[1] = false;
	for (int i = 2; i <= sqrt(n); i++){
		if (primes[i] == true){
			for (int j = 2; i * j <= n; j++)
				primes[i*j] = false;
		}
	}
	return primes;
}

vector<int> MathematicsModule::DecimalToBinary(int dec){
	vector<int> list;
	while (dec > 0){
		int remainder = dec % 2;
		list.insert(list.begin(), remainder);
		dec = dec / 2;
	}
	//for (int i = 0; i < list.size(); i++)
	//	cout << list[i];
	
	return list;
}

int MathematicsModule::BinaryToDecimal(vector<int> list){
	int result = 0;
	for (int i = 1; i <= list.size(); i++){
		result = result | (list[list.size() - i] << i - 1);
	}
	return result;
}

void MathematicsModule::PrimeFactorization(int n){
	for (int i = 2; i < sqrt(n); i++){
		if (n%i == 0){
			int count = 0;
			while (n%i == 0){
				n = n / i;
				count++;
			}
			cout << i << " occurs " << count << endl;
		}
	}
	if (n != 1)
		cout << n << "," << 1 << endl;
}

int MathematicsModule::EuclidsGCD(int a, int b){
	while (b != 0){
		int temp = a;
		a = b;
		b = temp % b;
	}
	return a;
}

double cross_product(Point a, Point b){
	return a.x*b.y - a.y*b.x;
}
Point subtract(Point p1, Point p2)
{
	Point result;
	result.x = p1.x - p2.x;
	result.y = p1.y - p2.y;
	return result;
}
double area(Point vertices[], int n){
	double sum = 0.0;
	for (int i = 0; i < n; i++){
		sum += cross_product(vertices[i], vertices[(i + 1) % n]);
	}
	return abs(sum) / 2.0;
}

int get_direction(Point a, Point b, Point p){
	b = subtract(b, a);
	p = subtract(p, a);

	double cp = cross_product(b, p);
	if (cp > 0)
		return LEFT;
	else if (cp < 0)
		return RIGHT;
	else
		return ON_THE_LINE;
}

int MathematicsModule::MSS_Recursive(int arr[], int n){
	if (n == 1)
	{
		return arr[0];
	}
	int m = n / 2;
	int left_MSS = MSS_Recursive(arr, m);
	int right_MSS = MSS_Recursive(arr + m, n - m);
	int leftsum = INT_MIN, rightsum = INT_MIN, sum = 0;
	for (int i = m; i < n; i++)
	{
		sum += arr[i];
		rightsum = max(rightsum, sum);
	}
	sum = 0;
	for (int i = (m - 1); i >= 0; i--)
	{
		sum += arr[i];
		leftsum = max(leftsum, sum);
	}
	int ans = max(left_MSS, right_MSS);
	return max(ans, leftsum + rightsum);
}

int MathematicsModule::MSS_Kadane(int arr[], int n){	//Array must have at least one positive member
	int ans = arr[0], sum = 0;
	for (int i = 1; i < n; ++i)	//Check if all are negative
		ans = max(ans, arr[i]);
	if (ans<0)					//if Max < 0 return Max
		return ans;
	ans = 0;
	for (int i = 0; i < n; ++i)
	{
		if (sum + arr[i] > 0)
			sum += arr[i];
		else
			sum = 0;
		ans = max(ans, sum);
	}
	return ans;
}

int MathematicsModule::IsSquare(long n){
	if (n < 0)
		return false;

	long tst = (long)(sqrt(n) + 0.5);
	return tst*tst == n;
}

int MathematicsModule::GetNumberFactors(int n){
	if (n == 1)
		return n;	//Special case: 1 is the only integer with only one factor: itself
	int count = 1;
	for (int i = 2; i < sqrt(n); i++){
		if (n%i == 0){
			count += 2;	//Add two for each factor pair
		}
	}
	return count + 1;	//Add one more for itself
}