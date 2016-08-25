#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int dp[301];
int arr[301];
int func(int n)
{
	if (n < 1)
		return 0;
	if (n == 1)
		return arr[1];
	if (dp[n] != -1)
		return dp[n];
	dp[n] = arr[n] + max(func(n - 2), arr[n - 1] + func(n - 3));
	return dp[n];
}
int main()
{
	ios::sync_with_stdio(false);
	memset(dp, -1, sizeof(dp));
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	cout << func(n);
	return 0;
}