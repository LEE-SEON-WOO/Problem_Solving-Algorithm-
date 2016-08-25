#include <iostream>
#include <cmath>
using namespace std;
long long int GCD_LCM(long long int a, long long int b)
{
	if (b == 0)
		return a;
	else
		return GCD_LCM(b, a%b);
}
int main()
{
	ios::sync_with_stdio(false);
	long long int A, B;
	cin >> A >> B;
	for (int i = 1; i <= GCD_LCM(A, B); i++)
	{
		cout << 1;
	}
	return 0;
}
