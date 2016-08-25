#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int dp[10001];
int arr[101];

int main()
{
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = arr[i]; j <= k; j++)
		{
			dp[j] += dp[j - arr[i]];
		}
	}
	cout << dp[k] << endl;
	return 0;
}