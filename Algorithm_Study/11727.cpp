#include <iostream>
#include <cstring>
using namespace std;
int dp[10001];
int N;
int func(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;

	if (dp[n] != -1)
		return dp[n];
	return dp[n] = (func(n-1) + func(n-2)) % 10007;
	
}
int main()
{
	ios::sync_with_stdio(false);
	memset(dp, -1, sizeof(dp));
	cin >> N;
	cout << func(N);
	return 0;
}