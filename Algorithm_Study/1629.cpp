#include <iostream>
using namespace std;
long long int A, B, C;
int f(int x, int n)
{
	if (n == 0)
		return 1;
	if (n % 2 == 1)
		return (x%C*f(x, n - 1)%C)%C;
	else if(n%2==0)
	{
		int h = f(x, n / 2);
		return (h%C*h%C)%C;
	}
}
int main()
{
	ios::sync_with_stdio(false);

	cin >> A >> B >> C;
	cout << f(A, B);
	return 0;
}