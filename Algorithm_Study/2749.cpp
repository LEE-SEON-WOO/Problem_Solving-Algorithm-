#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	unsigned long long int n;
	cin >> n;
	int fibo_n_2 = 0, fibo_n_1 = 1, fibo_n_0 = 1;
	for (int i = 0; i < n % 1500000; i++)
	{
		fibo_n_0 = fibo_n_1 + fibo_n_2;
		fibo_n_1 = fibo_n_2 % 1000000;
		fibo_n_2 = fibo_n_0 % 1000000;
	}
	cout << fibo_n_0 % 1000000 << "\n";
	return 0;
}