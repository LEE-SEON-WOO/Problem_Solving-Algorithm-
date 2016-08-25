#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int dp[1000001];
int func(int n)
{
	if (n < 0)
		return 0;
	if (n == 1)
		return 1;
	if (dp[n] == -1)
		 dp[n] = 9876543210;
	else return dp[n];
	if (n % 3 == 0)
	{
		if (n % 2 == 0)
		{
			return dp[n] = min(min(func(n / 3), func(n/2)), func(n-1))+1;
		}
		else
			return dp[n] = min(func(n / 3), func(n - 1))+1;
	}
	else if (n % 2 == 0)
	{
		return dp[n] = min(func(n / 2), func(n - 1))+1;
	}
	else
		return dp[n] = func(n - 1)+1;
}

int main()
{
	ios::sync_with_stdio(false);
	memset(dp, -1, sizeof(dp));
	int N;
	cin >> N;	
	cout << func(N)-1;
	return 0;
}