#include <iostream>
#include <cstring>
using namespace std;
int fibo[100];
int fibonacci(int n) 
{
	if (fibo[n] > 0)
		return fibo[n];
	if (n == 0) 
	{
		return fibo[0]=0;
	}
	else if (n == 1) 
	{
		return fibo[1]=1;
	}
	else 
	{
		return fibo[n]=(fibonacci(n-1) + fibonacci(n-2));
	}
}
int main()
{
	ios::sync_with_stdio(false);
	int N;
	memset(fibo, -1, sizeof(fibo));
	cin >> N;
	cout << fibonacci(N) << "\n";
	return 0;
}