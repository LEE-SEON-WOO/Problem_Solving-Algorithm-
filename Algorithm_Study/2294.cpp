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
	memset(dp, 0x7f, sizeof(dp));
	dp[0] = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = arr[i]; j <= k; j++)
		{
			dp[j] = min(dp[j], dp[j - arr[i]] + 1);
		}
	}
	if (dp[k] == 0x7f7f7f7f)
		cout << -1 << endl;
	else
		cout << dp[k] << endl;
	return 0;
}