#include <iostream>
#include <cstring>
using namespace std;

int arr[1001];
int dp[1001];
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[j]<arr[i] && dp[j] + 1>dp[i])
			{
				dp[i] = 1 + dp[j];
			}
		}
	}
	int ax = 0;
	for (int i = 1; i <= n; i++)
	{
		if (ax < dp[i])
			ax = dp[i];
	}
	cout << ax << endl;
	return 0;
}