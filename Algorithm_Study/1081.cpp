#include <iostream>
using namespace std;

long long int f(int n, int i)
{
	long long x, j, k, t;
	x = 0;
	for (t = 0, j = 1; j <= n; j *= 10, t++)
	{
		k = (n / j) % 10;
		if (i < k)
			x += j;
		else if (i == k)
			x += n%j + 1;
		x += k*t*(j / 10);
	}
	return x;
}
int main()
{
	ios::sync_with_stdio(false);
	int L, U;
	cin >> L >> U;
	long long int s = 0;
	for (int i = 1; i <= 9; i++)
	{
		s += (f(U, i) - f(L, i))*i;
	}
	while (L != 0)
	{
		s += L % 10;
		L = L / 10;
	}	
	cout << s << "\n";
}