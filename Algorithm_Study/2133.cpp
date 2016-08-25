#include <iostream>
#include <cstring>
using namespace std;
#define INT long long int
INT dp[31];
INT func(int n)
{
	if (n < 0)
		return 0;
	if (n % 2 == 1)
		return 0;
	if (n == 0)
		return 1;
	if (n == 2) 
		return 3;
	if (dp[n] != -1)
		return dp[n];
	dp[n] = 3 * func(n - 2);
	for (int i = 0; i <= n - 4; i += 2)
	{
		dp[n] += 2 * func(i);
	}
	return dp[n];
}

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	memset(dp, -1, sizeof(dp));
	cout << func(n) << "\n";
	return 0;
}