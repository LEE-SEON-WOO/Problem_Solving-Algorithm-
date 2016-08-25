#include <iostream>
using namespace std;
int Factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	cout << Factorial(N) << "\n";
	return 0;
}