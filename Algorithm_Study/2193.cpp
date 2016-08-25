#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
long long dp[91];
long long func(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	if (dp[n] != -1)
		return dp[n];
	return dp[n] = func(n - 1) + func(n - 2);
}
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	memset(dp, -1, sizeof(dp));
	cout << func(N);
	return 0;
}