#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int INT;
int n;
INT dp[501][501];
INT arr[501][501];
int main()
{
	ios::sync_with_stdio(false);

	cin >> n;
	memset(dp, 0, sizeof(dp));
	memset(arr, 0, sizeof(arr));
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			cin >> arr[i][j+k];
		}
	}
	dp[0][0] = arr[0][0];
	dp[1][0] = arr[0][0] + arr[1][0];
	dp[1][1] = arr[0][0] + arr[1][1];
	INT ans = 0;
	for (int i = 2; i <= n; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			dp[i][k] = arr[i][k] + max(dp[i - 1][k-1], dp[i - 1][k]);
			ans = max(ans, dp[i][k]);
		}
	}
	cout << ans << endl;
	//for (int i = 0; i < n; i++)
	//{
	//	for (int k = 0; k <= i; k++)
	//	{
	//		cout << dp[i][j + k];
	//	}cout << endl;
	//}
	return 0;
}